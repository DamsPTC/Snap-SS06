/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dac2ec; end: 101dac2fb;  */

void FUN_101dac2ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101dac2fc; end: 101dac37f;  */

void FUN_101dac2fc(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da14fc0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 101dac380; end: 101dac3cb;  */

void FUN_101dac380(undefined1 *param_1)

{
  func_0x000101dac9b8();
  func_0x000107c613f8(&UNK_110483690,param_1,0,0);
  *param_1 = 1;
  func_0x000107c61654();
  return;
}



/* Entry: 101dac3cc; end: 101dac41f;  */

void FUN_101dac3cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dac420; end: 101dac6b7;  */

void FUN_101dac420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  uVar5 = uStack_68;
  puVar1 = &UNK_110483580;
  func_0x000107c613fc(&UNK_110483580,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1104835a8;
  func_0x000107c613fc(&UNK_1104835a8,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  puVar1 = &UNK_1104835d0;
  func_0x000107c613fc(&UNK_1104835d0,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_101dac7a0;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  uVar3 = 0;
  FUN_101dac7d8(0);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_5);
  uVar4 = 0;
  func_0x0001048898b8(0,1,FUN_101dac7b0,puVar1,uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar1);
  func_0x0001000d224c(&uStack_68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar3);
  uVar5 = uStack_68;
  func_0x00010488a340(uStack_68,1,0x101dac81c,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 101dac6b8; end: 101dac70b;  */

void FUN_101dac6b8(void)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c5c2e0(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 101dac70c; end: 101dac79f; -[_TtC31MemoriesDebugBannerServicesImpl28MemoriesDebugBannerPresenter presentWithText:type:accessibilityIdentifier:] */

/* WARNING: Possible PIC construction at 0x000101dac784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dac788) */

void FUN_101dac70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_5);
  }
  func_0x000107c6157c(param_1);
  FUN_101dac420(param_3,param_2,param_4,param_5,uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101dac7a0; end: 101dac7af;  */

undefined8 FUN_101dac7a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar5 + 0x10,auStack_78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    func_0x0001000285a8(0x112e2bcd0,&UNK_10da14fe0);
    func_0x0001000d224c(&uStack_80);
    puVar6 = &UNK_1104835f8;
    func_0x000107c613fc(&UNK_1104835f8,0x38,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar3;
    *(undefined8 *)(puVar6 + 0x18) = uVar2;
    *(undefined8 *)(puVar6 + 0x20) = uVar7;
    *(undefined8 *)(puVar6 + 0x28) = uVar1;
    *(undefined8 *)(puVar6 + 0x30) = uVar4;
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar7);
    uVar7 = uStack_80;
    func_0x000104889654(uStack_80,1,FUN_101dac998,puVar6);
    func_0x000107c615e8(uStack_80);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(lVar5);
  }
  return uVar7;
}



/* Entry: 101dac7b0; end: 101dac7d7;  */

void FUN_101dac7b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101dac7d8; end: 101dac833;  */

void FUN_101dac7d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2bcc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126afde0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e2bcc8 = puVar1;
  return;
}



/* Entry: 101dac834; end: 101dac997;  */

void FUN_101dac834(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  
  if (param_2 == (undefined1 *)0x2) {
    func_0x000107c5fadc(param_3,param_4);
    if (param_6 != 0) {
      func_0x000107c5fadc(param_5,param_6);
      param_6 = param_5;
    }
    puVar1 = PTR_PTR_1126afde0;
    func_0x000107c61168();
    func_0x000107c40b14();
  }
  else if (param_2 == (undefined1 *)0x1) {
    func_0x000107c5fadc(param_3,param_4);
    if (param_6 != 0) {
      func_0x000107c5fadc(param_5,param_6);
      param_6 = param_5;
    }
    puVar1 = PTR_PTR_1126afde0;
    func_0x000107c61168();
    func_0x000107c40930();
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      func_0x000101dac9b8();
      func_0x000107c613f8(&UNK_110483690,param_2,0,0);
      *param_2 = 0;
      func_0x000107c61654();
      return;
    }
    func_0x000107c5fadc(param_3,param_4);
    if (param_6 != 0) {
      func_0x000107c5fadc(param_5,param_6);
      param_6 = param_5;
    }
    puVar1 = PTR_PTR_1126afde0;
    func_0x000107c61168();
    func_0x000107c409d8();
  }
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  *param_1 = puVar1;
  return;
}



/* Entry: 101dac998; end: 101dac9f7;  */

void FUN_101dac998(void)

{
  long unaff_x20;
  
  FUN_101dac834(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101dac9f8; end: 101dacb5f;  */

int FUN_101dac9f8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101daca74;
        goto LAB_101daca58;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101daca58:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101daca74:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101dacb60; end: 101dacb9f;  */

void FUN_101dacb60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2bce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da15054;
  func_0x000107c61520(&UNK_10da15054,&UNK_110483690);
  puRam0000000112e2bce0 = puVar1;
  return;
}



/* Entry: 101dacba0; end: 101dacd37;  */

long FUN_101dacba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
  uVar1 = param_2;
  func_0x000107c4d80c(param_2);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  uVar1 = 0x112e2bce8;
  func_0x0001000285a8(0x112e2bce8,&UNK_10da150c8);
  func_0x000107c613fc();
  pcVar3 = FUN_101dacdfc;
  func_0x0001000bdd8c(FUN_101dacdfc,uVar2,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 101dacd38; end: 101dacdfb;  */

void FUN_101dacd38(long *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x000101dac400();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112d62380,&UNK_10d990b80);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar2 = FUN_101dac2fc;
  func_0x0001000bdd8c(FUN_101dac2fc,0);
  *(code **)(lVar1 + 0x18) = pcVar2;
  func_0x0001000285a8(0x112e2bdc0,&UNK_10da15110);
  func_0x000107c613fc();
  uVar3 = 0x101dac330;
  func_0x0001000bdd8c(0x101dac330,0);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *param_1 = lVar1;
  return;
}



/* Entry: 101dacdfc; end: 101dace03;  */

void FUN_101dacdfc(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x000101dac400();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  func_0x0001000285a8(0x112d62380,&UNK_10d990b80);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar2 = FUN_101dac2fc;
  func_0x0001000bdd8c(FUN_101dac2fc,0);
  *(code **)(lVar1 + 0x18) = pcVar2;
  func_0x0001000285a8(0x112e2bdc0,&UNK_10da15110);
  func_0x000107c613fc();
  uVar3 = 0x101dac330;
  func_0x0001000bdd8c(0x101dac330,0);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *param_1 = lVar1;
  return;
}



/* Entry: 101dace04; end: 101dace3b;  */

void FUN_101dace04(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010028ba58(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000103740e88();
  return;
}



/* Entry: 101dace3c; end: 101dace43;  */

void FUN_101dace3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dace44; end: 101dacee3;  */

void FUN_101dace44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dacee4; end: 101dacf2f;  */

void FUN_101dacee4(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x00010028ba58(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103740e88();
  *param_1 = uVar1;
  return;
}



/* Entry: 101dacf30; end: 101dacf33;  */

void FUN_101dacf30(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x000101dac400();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  func_0x0001000285a8(0x112d62380,&UNK_10d990b80);
  func_0x000107c613fc();
  func_0x000107c6157c();
  pcVar2 = FUN_101dac2fc;
  func_0x0001000bdd8c(FUN_101dac2fc,0);
  *(code **)(lVar1 + 0x18) = pcVar2;
  func_0x0001000285a8(0x112e2bdc0,&UNK_10da15110);
  func_0x000107c613fc();
  uVar3 = 0x101dac330;
  func_0x0001000bdd8c(0x101dac330,0);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *param_1 = lVar1;
  return;
}



/* Entry: 101dacf34; end: 101dad25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101dacf34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar2 = 2;
  func_0x00010043c5c0(2,0xf,0,uStack_70,uStack_68,puVar1);
  func_0x0001000834e4(auStack_88);
  puVar3 = &UNK_1104837d0;
  func_0x000107c613fc(&UNK_1104837d0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  func_0x0001000285a8(0x112e2bdc8,&UNK_10da15180);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  pcVar4 = FUN_101dad35c;
  func_0x0001000bdd8c(FUN_101dad35c,puVar3);
  uVar5 = 0;
  func_0x0001002cf194(0);
  func_0x000107c610f8();
  func_0x000103a6b4e0(pcVar4,uVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar4;
  return unaff_x20;
}



/* Entry: 101dad25c; end: 101dad35b;  */

/* WARNING: Possible PIC construction at 0x000101dad2e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dad2e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dad25c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_1130806b8);
  puVar1 = &UNK_110483820;
  func_0x000107c613fc(&UNK_110483820,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x0001000285a8(0x112e2bea0,&UNK_10da151c8);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 101dad35c; end: 101dad367;  */

/* WARNING: Possible PIC construction at 0x000101dad2e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dad2e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dad35c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130806b8);
  puVar2 = &UNK_110483820;
  func_0x000107c613fc(&UNK_110483820,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001000285a8(0x112e2bea0,&UNK_10da151c8);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar3);
  return;
}



/* Entry: 101dad368; end: 101dad3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101dad368(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar1 = *(undefined8 *)(param_2 + _DAT_113083868);
  func_0x0001000bda74();
  uVar2 = 0;
  FUN_101daed58();
  func_0x000107c613fc();
  FUN_101daea20();
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_110483a20;
  *param_1 = uVar1;
  return;
}



/* Entry: 101dad3f4; end: 101dad42f;  */

void FUN_101dad3f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dad430; end: 101dad43f;  */

void FUN_101dad430(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101dad440; end: 101dad4df;  */

void FUN_101dad440(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dad4e0; end: 101dad4f7;  */

void FUN_101dad4e0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101dad4f8; end: 101dad553;  */

void FUN_101dad4f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dad554; end: 101dad58b;  */

void FUN_101dad554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_11;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_10;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_9;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_8;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dad58c,0,0);
  return;
}



/* Entry: 101dad58c; end: 101dad637;  */

void FUN_101dad58c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x28);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar6 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar6 + 8))(0,uVar1,lVar6);
  func_0x0001000834e4(unaff_x22 + 0x10);
  plVar11 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101dad638;
  lVar6 = *(long *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xe0);
  lVar7 = *(long *)(unaff_x22 + 0xe8);
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  lVar8 = *(long *)(unaff_x22 + 0xd8);
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  lVar9 = *(long *)(unaff_x22 + 200);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  lVar10 = *(long *)(unaff_x22 + 0xb8);
  plVar11[0x10] = *(long *)(unaff_x22 + 0xf8);
  plVar11[0x11] = lVar5;
  plVar11[0xe] = lVar7;
  plVar11[0xf] = lVar6;
  plVar11[0xc] = lVar8;
  plVar11[0xd] = lVar2;
  plVar11[10] = lVar9;
  plVar11[0xb] = lVar3;
  plVar11[8] = lVar10;
  plVar11[9] = lVar4;
  plVar12 = (long *)0x50;
  func_0x000107c615b8();
  plVar11[0x12] = (long)plVar12;
  *plVar12 = (long)plVar11;
  plVar12[1] = (long)FUN_101dad900;
  plVar12[5] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dae020,0,0);
  return;
}



/* Entry: 101dad638; end: 101dad697;  */

void FUN_101dad638(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x110) = param_1;
  *(long *)(lVar2 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101dad698;
  }
  else {
    pcVar1 = FUN_101dad82c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101dad698; end: 101dad82b;  */

void FUN_101dad698(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0xd8);
  func_0x0001000d224c(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x78);
  lVar9 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,lVar4);
  (**(code **)(lVar9 + 8))(1,lVar4,lVar9);
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lVar9 = 0;
    lVar8 = 0;
    lVar6 = lVar4;
  }
  else {
    lVar9 = lVar8;
    func_0x000107c5faec();
    lVar6 = lVar4;
    func_0x000107c61170(lVar8);
    lVar8 = lVar4;
  }
  lVar4 = *(long *)(unaff_x22 + 0x110);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar4 == 0) {
    if (lVar8 == 0) {
      lVar6 = 0;
      goto LAB_101dad7f8;
    }
LAB_101dad7e4:
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x110));
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    if (lVar8 != 0) {
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
        uVar1 = *(undefined8 *)(unaff_x22 + 200);
        uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
        func_0x0001000d224c(unaff_x22 + 0x88);
        uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
        lVar4 = *(long *)(unaff_x22 + 0xa8);
        func_0x0001000a8868(unaff_x22 + 0x88,uVar2);
        (**(code **)(lVar4 + 0x18))(lVar9,lVar8,lVar5,lVar6,uVar1,uVar3,uVar2,lVar4);
        func_0x000107c615e8(uVar7);
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(lVar8);
        func_0x0001000834e4(unaff_x22 + 0x88);
        goto LAB_101dad808;
      }
      goto LAB_101dad7e4;
    }
LAB_101dad7f8:
    lVar8 = lVar6;
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x110));
  }
  func_0x000107c6142c(lVar8);
LAB_101dad808:
                    /* WARNING: Could not recover jumptable at 0x000101dad828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dad82c; end: 101dad8a3;  */

void FUN_101dad82c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar3,uVar1,lVar2);
  func_0x000107c614ac(uVar3);
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000101dad8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dad8a4; end: 101dad8ff;  */

void FUN_101dad8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(long *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101dad900;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dae020,0,0);
  return;
}



/* Entry: 101dad900; end: 101dad977;  */

void FUN_101dad900(byte param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101dad948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(byte *)(lVar1 + 0xc0) = param_1 & 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dad978,0,0);
  return;
}



/* Entry: 101dad978; end: 101dadcc3;  */

void FUN_101dad978(undefined1 *param_1,undefined1 *param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xc0) == '\x01') {
    ppuVar1 = *(undefined ***)(unaff_x22 + 0x50);
    puVar6 = *(undefined1 **)(unaff_x22 + 0x58);
    ppuVar12 = &PTR____CFConstantStringClassReference_110f726f8;
    func_0x000107c5faec();
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f726f8);
    if (ppuVar1 == ppuVar12 && puVar6 == param_2) {
      func_0x000107c6142c();
LAB_101dada50:
      uVar4 = (uint)(*(ulong *)(unaff_x22 + 0x48) >> 0x20);
      uVar9 = uVar4 >> 0x1e;
      if (uVar4 >> 0x1e < 2) {
        if (uVar9 == 0) {
          if ((*(ulong *)(unaff_x22 + 0x48) & 0xff000000000000) == 0) {
LAB_101dadad0:
            func_0x000101dae1bc();
            func_0x000107c613f8(&UNK_1106c2ee8,param_2,0,0);
            uVar8 = 2;
            goto LAB_101dadaf4;
          }
          param_2 = *(undefined1 **)(unaff_x22 + 0x40);
        }
        else {
          param_2 = *(undefined1 **)(unaff_x22 + 0x40);
          if ((long)(int)param_2 == (long)param_2 >> 0x20) goto LAB_101dadad0;
        }
      }
      else if ((uVar9 != 2) ||
              (param_2 = *(undefined1 **)(unaff_x22 + 0x40),
              *(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18))) goto LAB_101dadad0;
      func_0x000102e8523c();
      if (((ulong)param_2 & 1) == 0) {
        param_2 = *(undefined1 **)(unaff_x22 + 0x68);
        uVar5 = *(ulong *)(unaff_x22 + 0x70);
        FUN_101dae380(param_2,uVar5,*(undefined8 *)(unaff_x22 + 0x78),
                      *(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x40),
                      *(undefined8 *)(unaff_x22 + 0x48));
        *(undefined1 **)(unaff_x22 + 0x98) = param_2;
        *(ulong *)(unaff_x22 + 0xa0) = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          uVar4 = (uint)(uVar5 >> 0x20);
          uVar9 = uVar4 >> 0x1e;
          puVar6 = param_2;
          if (uVar4 >> 0x1e < 2) {
            if (uVar9 == 0) {
              if ((uVar5 & 0xff000000000000) == 0) goto LAB_101dadba0;
            }
            else {
              lVar10 = (long)(int)param_2;
              lVar11 = (long)param_2 >> 0x20;
LAB_101dadb98:
              if (lVar10 == lVar11) goto LAB_101dadba0;
            }
            func_0x000102e8523c();
            if (((ulong)puVar6 & 1) != 0) {
              uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
              func_0x0001000d224c(unaff_x22 + 0x10);
              uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
              uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
              lVar10 = unaff_x22 + 0x10;
              func_0x0001000a8868(lVar10,uVar2);
              func_0x000103a71010(lVar10,uVar13,param_2,uVar5,0,0,0,uVar2,uVar3);
              *(undefined8 *)(unaff_x22 + 0xa8) = uVar13;
              plVar7 = (long *)0x80;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0xb0) = plVar7;
              *plVar7 = unaff_x22;
              plVar7[1] = (long)FUN_101dadcc4;
                    /* WARNING: Could not recover jumptable at 0x000101dadc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)&UNK_101189cb4)();
              return;
            }
            func_0x000101dae1bc();
            func_0x000107c613f8(&UNK_1106c2ee8,puVar6,0,0);
            uVar8 = 5;
          }
          else {
            if (uVar9 == 2) {
              lVar10 = *(long *)(param_2 + 0x10);
              lVar11 = *(long *)(param_2 + 0x18);
              goto LAB_101dadb98;
            }
LAB_101dadba0:
            func_0x000101dae1bc();
            func_0x000107c613f8(&UNK_1106c2ee8,puVar6,0,0);
            uVar8 = 4;
          }
          *puVar6 = uVar8;
          func_0x000107c61654();
          func_0x0001000b44c0(param_2,uVar5);
          goto LAB_101dadb00;
        }
        func_0x000101dae1bc();
        func_0x000107c613f8(&UNK_1106c2ee8,param_2,0,0);
        uVar8 = 3;
      }
      else {
        func_0x000101dae1bc();
        func_0x000107c613f8(&UNK_1106c2ee8,param_2,0,0);
        uVar8 = 7;
      }
    }
    else {
      uVar5 = *(ulong *)(unaff_x22 + 0x50);
      func_0x000107c605b8(uVar5,*(undefined8 *)(unaff_x22 + 0x58),ppuVar12,param_2,0);
      func_0x000107c6142c();
      if ((uVar5 & 1) != 0) goto LAB_101dada50;
      func_0x000101dae1bc();
      func_0x000107c613f8(&UNK_1106c2ee8,param_2,0,0);
      uVar8 = 1;
    }
LAB_101dadaf4:
    *param_2 = uVar8;
  }
  else {
    func_0x000101dae1bc();
    func_0x000107c613f8(&UNK_1106c2ee8,param_1,0,0);
    *param_1 = 0;
  }
  func_0x000107c61654();
LAB_101dadb00:
                    /* WARNING: Could not recover jumptable at 0x000101dadb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dadcc4; end: 101dadd17;  */

void FUN_101dadcc4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb8) = param_1;
  *(undefined1 *)(lVar1 + 0xc1) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dadd18,0,0);
  return;
}



/* Entry: 101dadd18; end: 101daddfb;  */

void FUN_101dadd18(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  if (*(char *)(unaff_x22 + 0xc1) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x38,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
    func_0x0001000b44c0(uVar3,uVar2);
    func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101daddb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x0001000b44c0(uVar4,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101daddf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 101daddfc; end: 101dadf17;  */

/* WARNING: Possible PIC construction at 0x000101dadef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101dadef4) */

void FUN_101daddfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  puVar1 = &UNK_110483870;
  func_0x000107c613fc(&UNK_110483870,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  func_0x000107c6157c(uVar2);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c61434(param_4);
  func_0x000107c615f0(param_5);
  func_0x00010006c00c(param_6,param_7);
  func_0x00010006c00c(param_8,param_9);
  func_0x0001001ca524(0,0,0x48,0,0,0,&UNK_10da15230,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101dadf18; end: 101dadfcb;  */

void FUN_101dadf18(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  lVar11 = *(long *)(unaff_x20 + 0x50);
  lVar10 = *(long *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  plVar7 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101dadfcc;
  plVar7[0x1f] = lVar8;
  plVar7[0x1e] = lVar11;
  plVar7[0x1d] = lVar10;
  plVar7[0x1b] = lVar6;
  plVar7[0x1c] = lVar9;
  plVar7[0x19] = lVar5;
  plVar7[0x1a] = lVar3;
  plVar7[0x17] = lVar4;
  plVar7[0x18] = lVar2;
  plVar7[0x16] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dad58c,0,0);
  return;
}



/* Entry: 101dadfcc; end: 101dae007;  */

void FUN_101dadfcc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dae004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dae008; end: 101dae01f;  */

void FUN_101dae008(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dae020,0,0);
  return;
}



/* Entry: 101dae020; end: 101dae0c7;  */

void FUN_101dae020(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  uVar4 = 0x101dae1fc;
  (**(code **)(lVar2 + 0x28))(0x101dae1fc,0,uVar3,lVar2);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  func_0x000107c615e8(uVar1);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101dae0c8;
                    /* WARNING: Could not recover jumptable at 0x000101dae0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101dae210();
  return;
}



/* Entry: 101dae0c8; end: 101dae20f;  */

void FUN_101dae0c8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101dae11c,0,0);
  return;
}



/* Entry: 101dae210; end: 101dae227;  */

void FUN_101dae210(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dae228,0,0);
  return;
}



/* Entry: 101dae228; end: 101dae2ef;  */

void FUN_101dae228(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101dae270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101dae2f0;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110483898;
  func_0x000107c613fc(&UNK_110483898,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101dae4bc,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101dae2f0; end: 101dae32f;  */

void FUN_101dae2f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dae330,0,0);
  return;
}



/* Entry: 101dae330; end: 101dae33f;  */

void FUN_101dae330(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dae33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101dae340; end: 101dae37f;  */

void FUN_101dae340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101dae52c,0,0);
  return;
}



/* Entry: 101dae380; end: 101dae4bb;  */

undefined1  [16]
FUN_101dae380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = &uStack_60;
  puVar3 = &uStack_60;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c610f8();
  func_0x000107c5ee20(param_5,param_6);
  func_0x000107c4635c();
  func_0x000107c61170(param_5);
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x00010006c00c(param_1,param_2);
  puVar6 = PTR___s10Foundation4DataVN_110350ae0;
  func_0x000107c6061c(&uStack_60,PTR___s10Foundation4DataVN_110350ae0);
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x00010006c00c(param_3,param_4);
  func_0x000107c6061c(&uStack_60,puVar6);
  puVar4 = puVar1;
  func_0x000107c51bb4();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  func_0x000107c615e8(puVar3);
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    puVar5 = (undefined *)0x0;
    puVar6 = (undefined *)0xf000000000000000;
  }
  else {
    puVar5 = puVar4;
    func_0x000107c5ee30(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar1);
  }
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = puVar5;
  return auVar7;
}



/* Entry: 101dae4bc; end: 101dae4c7;  */

void FUN_101dae4bc(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101dae518(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101dae4c8; end: 101dae517;  */

void FUN_101dae4c8(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101dae518; end: 101dae543;  */

void FUN_101dae518(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
  return;
}



/* Entry: 101dae544; end: 101dae757;  */

void FUN_101dae544(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xee00737365636375;
  uVar3 = 0x5368746957646e65;
  if (cVar4 != '\x01') {
    uVar1 = 0xec000000726f7272;
    uVar3 = 0x4568746957646e65;
  }
  uVar2 = 0x7472617473;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101dae758; end: 101dae7c7;  */

void FUN_101dae758(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0xee00737365636375;
  uVar3 = 0x5368746957646e65;
  if (cVar4 != '\x01') {
    uVar1 = 0xec000000726f7272;
    uVar3 = 0x4568746957646e65;
  }
  uVar2 = 0x7472617473;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe500000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101dae7c8; end: 101dae82b;  */

ulong FUN_101dae7c8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 101dae82c; end: 101dae82f;  */

void FUN_101dae82c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2bf68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da15250;
  func_0x000107c61520(&UNK_10da15250,&UNK_1104839b8);
  puRam0000000112e2bf68 = puVar1;
  return;
}



/* Entry: 101dae830; end: 101dae86f;  */

void FUN_101dae830(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2bf68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da15250;
  func_0x000107c61520(&UNK_10da15250,&UNK_1104839b8);
  puRam0000000112e2bf68 = puVar1;
  return;
}



/* Entry: 101dae870; end: 101dae9d3;  */

int FUN_101dae870(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101dae8ec;
        goto LAB_101dae8d0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101dae8d0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101dae8ec:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101dae9d4; end: 101daea1f;  */

long FUN_101dae9d4(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar1 = PTR_PTR_1126a9528;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Entry: 101daea20; end: 101daea77;  */

void FUN_101daea20(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar1 = PTR_PTR_1126a9528;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return;
}



/* Entry: 101daea78; end: 101daeb47;  */

void FUN_101daea78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  uVar2 = 0x112d393f0;
  uStack_48 = param_1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_48,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_38;
  uVar2 = uStack_40;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0x4568746957646e65;
  func_0x000107c5fadc(0x4568746957646e65,0xec000000726f7272);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x00010587c6d0(uVar4,uVar3,uVar2,1);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101daeb48; end: 101daec47;  */

void FUN_101daeb48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126a9530;
  func_0x000107c610f8(PTR_PTR_1126a9530);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c593e4(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c57124(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c57db4(puVar1);
  func_0x000107c61170(param_5);
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c4bfb0(lStack_58);
    func_0x000107c615e8(lStack_58);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101daec48; end: 101daed17;  */

/* WARNING: Possible PIC construction at 0x000101daed00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101daed04) */

void FUN_101daec48(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined8 uVar4;
  
  if (param_1 == '\0') {
    uVar1 = 0x7472617473;
    uVar3 = 0xe500000000000000;
  }
  else {
    uVar1 = 0x5368746957646e65;
    uVar3 = 0xee00737365636375;
    if (param_1 != '\x01') {
      uVar1 = 0x4568746957646e65;
      uVar3 = 0xec000000726f7272;
    }
  }
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar1,uVar3);
  uVar2 = 0x616e;
  func_0x000107c5fadc(0x616e,0xe200000000000000);
  func_0x00010587c6d0(uVar4,uVar1,uVar2,1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101daed18; end: 101daed57;  */

void FUN_101daed18(void)

{
  FUN_101daea78();
  return;
}



/* Entry: 101daed58; end: 101daed77;  */

void FUN_101daed58(void)

{
  func_0x000107c61168(&PTR_PTR_112e2c020);
  return;
}



/* Entry: 101daed78; end: 101daed97; -[SCMemoriesDecryptionContextImpl decryptionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101daed78(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e2c088));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101daed98; end: 101daeda7; -[SCMemoriesDecryptionContextImpl encryptionHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101daed98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112e2c098);
}



/* Entry: 101daeda8; end: 101daede7; -[SCMemoriesDecryptionContextImpl featureMetadataWithEncryptionHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101daeda8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001000bf56c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101daede8; end: 101daee77;  */

void FUN_101daede8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_2 == 1) || (param_2 == 2)) {
    puVar2 = PTR_PTR_1126b9620;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar1 = PTR_PTR_1126c0308;
    func_0x000107c610f8(PTR_PTR_1126c0308);
    func_0x000107c453e4();
    func_0x000107c5a494();
    func_0x000107c55638(puVar2,param_3,puVar1);
    func_0x000107c61170(puVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 101daee78; end: 101daeed7; -[SCMemoriesDecryptionContextImpl init] */

void FUN_101daee78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesEncryptionInfoServicesImpl.MemoriesDecryptionContextImpl",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101daeea4);
  (*pcVar1)();
}



/* Entry: 101daeed8; end: 101daef0f; -[SCMemoriesDecryptionContextImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101daeed8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e2c088));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2c090));
  return;
}



/* Entry: 101daef10; end: 101daef2f;  */

void FUN_101daef10(void)

{
  func_0x000107c61168(&PTR_PTR_112804218);
  return;
}



/* Entry: 101daef30; end: 101daf15b;  */

void FUN_101daef30(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (param_1 == (undefined1 *)0x0) {
    FUN_101daf15c();
    func_0x000107c613f8(&UNK_1106e4268,param_1,0,0);
    *param_1 = 0;
    func_0x000107c61654();
    return;
  }
  puVar6 = param_1;
  func_0x000107c615f0();
  func_0x000107c414a8();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar6);
  uVar4 = (uint)(param_2 >> 0x20);
  uVar10 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar10 == 0) {
      uVar8 = param_2;
      func_0x00010006c090();
      uVar3 = param_2 >> 0x30;
      param_2 = uVar8;
      if ((uVar3 & 0xff) == 0) goto LAB_101daf080;
    }
    else {
      puVar6 = puVar7;
      func_0x00010006c090();
      iVar11 = (int)puVar7;
      iVar12 = (int)((ulong)puVar7 >> 0x20);
      if (SBORROW4(iVar12,iVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101daf154);
        (*pcVar5)();
      }
      puVar7 = puVar6;
      if (iVar12 - iVar11 < 1) goto LAB_101daf080;
    }
LAB_101daf020:
    puVar6 = param_1;
    func_0x000107c414a4();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar6);
    uVar4 = (uint)(param_2 >> 0x20);
    uVar10 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar10 == 0) {
        func_0x00010006c090();
        if ((param_2 >> 0x30 & 0xff) != 0) goto LAB_101daf12c;
      }
      else {
        puVar6 = puVar7;
        func_0x00010006c090();
        iVar11 = (int)puVar7;
        iVar12 = (int)((ulong)puVar7 >> 0x20);
        if (SBORROW4(iVar12,iVar11)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101daf15c);
          (*pcVar5)();
        }
        puVar7 = puVar6;
        if (0 < iVar12 - iVar11) goto LAB_101daf12c;
      }
    }
    else if (uVar10 == 2) {
      lVar1 = *(long *)(puVar7 + 0x10);
      lVar2 = *(long *)(puVar7 + 0x18);
      func_0x00010006c090();
      if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101daf158);
        (*pcVar5)();
      }
      if (0 < lVar2 - lVar1) goto LAB_101daf12c;
    }
    else {
      func_0x00010006c090();
    }
    FUN_101daf15c();
    func_0x000107c613f8(&UNK_1106e4268,puVar7,0,0);
    uVar9 = 5;
  }
  else {
    if (uVar10 == 2) {
      lVar1 = *(long *)(puVar7 + 0x10);
      lVar2 = *(long *)(puVar7 + 0x18);
      func_0x00010006c090();
      if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101daf150);
        (*pcVar5)();
      }
      if (0 < lVar2 - lVar1) goto LAB_101daf020;
    }
    else {
      func_0x00010006c090();
    }
LAB_101daf080:
    FUN_101daf15c();
    func_0x000107c613f8(&UNK_1106e4268,puVar7,0,0);
    uVar9 = 4;
  }
  *puVar7 = uVar9;
  func_0x000107c61654();
LAB_101daf12c:
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 101daf15c; end: 101daf19b;  */

void FUN_101daf15c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2c0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc62638;
  func_0x000107c61520(&UNK_10dc62638,&UNK_1106e4268);
  puRam0000000112e2c0c8 = puVar1;
  return;
}



/* Entry: 101daf19c; end: 101daf1fb; -[_TtC34MemoriesEncryptionInfoServicesImpl33MemoriesDecryptionContextProvider init] */

void FUN_101daf19c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesEncryptionInfoServicesImpl.MemoriesDecryptionContextProvider",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101daf1c8);
  (*pcVar1)();
}



/* Entry: 101daf1fc; end: 101daf243; -[_TtC34MemoriesEncryptionInfoServicesImpl33MemoriesDecryptionContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101daf218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101daf21c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101daf1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2c0d0));
  return;
}



/* Entry: 101daf244; end: 101daf263;  */

void FUN_101daf244(void)

{
  func_0x000107c61168(&PTR_PTR_1128042e8);
  return;
}



/* Entry: 101daf264; end: 101daf36b; -[_TtC34MemoriesEncryptionInfoServicesImpl33MemoriesDecryptionContextProvider mediaDownloadDecryptionContextWithSnap:] */

void FUN_101daf264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e2c110,&UNK_10da15458);
  puVar1 = &UNK_110483af0;
  func_0x000107c613fc(&UNK_110483af0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110483b18;
  func_0x000107c613fc(&UNK_110483b18,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c615f4(param_3,2);
  func_0x000107c61174(param_1);
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd00000000000002e,0x800000010f010300,&UNK_10da15468,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010488b12c();
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101daf36c; end: 101daf397; -[_TtC34MemoriesEncryptionInfoServicesImpl33MemoriesDecryptionContextProvider mediaDownloadDecryptionContextBlockingWithSnap:] */

void FUN_101daf36c(void)

{
  func_0x000107c61168(PTR_PTR_1126af5d0);
  func_0x000107c42d78();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101daf398; end: 101daf3b3;  */

void FUN_101daf398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101daf3b4,0,0);
  return;
}



/* Entry: 101daf3b4; end: 101daf47b;  */

void FUN_101daf3b4(void)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined1 *)(lVar3 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 0x40) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101daf47c;
    plVar2[9] = *(long *)(unaff_x22 + 0x38);
    plVar2[10] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101daf654,0,0);
    return;
  }
  func_0x000101daf5fc();
  func_0x000107c613f8(&UNK_1106e4358,puVar1,0,0);
  *puVar1 = 3;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101daf478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101daf47c; end: 101daf4e7;  */

void FUN_101daf47c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_101daf4e8;
  }
  else {
    pcVar1 = FUN_101daf528;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101daf4e8; end: 101daf527;  */

void FUN_101daf4e8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101daf524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101daf528; end: 101daf55b;  */

void FUN_101daf528(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000101daf558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101daf55c; end: 101daf5bf;  */

void FUN_101daf55c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101daf5c0;
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
  plVar3[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101daf3b4,0,0);
  return;
}



/* Entry: 101daf5c0; end: 101daf63b;  */

void FUN_101daf5c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101daf5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101daf63c; end: 101daf653;  */

void FUN_101daf63c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101daf654,0,0);
  return;
}



/* Entry: 101daf654; end: 101daf6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101daf654(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101daf6f4;
                    /* WARNING: Could not recover jumptable at 0x000101daf6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(FUN_101dafb6c,0,uVar3,lVar2);
  return;
}



/* Entry: 101daf6f4; end: 101daf76b;  */

void FUN_101daf6f4(byte param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  *(long *)(lVar3 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x60));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(byte *)(lVar3 + 0x90) = param_1 & 1;
    pcVar2 = FUN_101daf76c;
  }
  else {
    pcVar2 = FUN_101dafb2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101daf76c; end: 101daf933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101daf76c(undefined1 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x90) != '\x01') {
    lVar6 = 0;
    FUN_101daef10();
    lVar5 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e2c088) = 0;
    *(undefined8 *)(lVar5 + _DAT_112e2c098) = 1;
    puVar2 = &UNK_110483b40;
    func_0x000107c613fc(&UNK_110483b40,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = 1;
    uVar3 = 0x112e2c120;
    func_0x0001000285a8(0x112e2c120,&UNK_10da15478);
    func_0x000107c613fc();
    pcVar4 = FUN_101dafb90;
    func_0x0001000bdd8c(FUN_101dafb90,puVar2,uVar3);
    *(code **)(lVar5 + _DAT_112e2c090) = pcVar4;
    *(long *)(unaff_x22 + 0x20) = lVar5;
    *(long *)(unaff_x22 + 0x28) = lVar6;
    func_0x000107c61154((long *)(unaff_x22 + 0x20),PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x000101daf8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x48);
  if (lVar5 != 0) {
    func_0x000107c615f0(lVar5);
    func_0x0001000d224c(unaff_x22 + 0x40);
    lVar6 = *(long *)(unaff_x22 + 0x40);
    *(long *)(unaff_x22 + 0x70) = lVar6;
    func_0x000107c614f0(lVar6);
    plVar1 = (long *)0x100;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_101daf934;
    plVar1[0x1b] = lVar5;
    plVar1[0x1c] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_103bd8cc8,0,0);
    return;
  }
  func_0x000101daf5fc();
  func_0x000107c613f8(&UNK_1106e4358,param_1,0,0);
  *param_1 = 1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101daf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101daf934; end: 101daf99b;  */

void FUN_101daf934(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(lVar3 + 0x80) = param_1;
  *(long *)(lVar3 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x78));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101daf99c;
  }
  else {
    pcVar2 = FUN_101dafb38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101daf99c; end: 101dafb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101daf99c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x88);
  lVar2 = 0;
  FUN_101daef10();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c615f0(uVar6);
  FUN_101daef30();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c615e8(uVar6);
    func_0x000107c61464(lVar3,lVar2,0x20,7);
    func_0x000107c615e8(uVar6);
    func_0x000107c615e8(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101dafa38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(lVar3 + _DAT_112e2c088) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112e2c098) = 2;
  puVar4 = &UNK_110483b68;
  func_0x000107c613fc(&UNK_110483b68,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = 2;
  func_0x0001000285a8(0x112e2c120,&UNK_10da15478);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar8);
  uVar6 = 0x101dafb98;
  func_0x0001000bdd8c(0x101dafb98,puVar4);
  *(undefined8 *)(lVar3 + _DAT_112e2c090) = uVar6;
  plVar5 = (long *)(unaff_x22 + 0x30);
  *plVar5 = lVar3;
  *(long *)(unaff_x22 + 0x38) = lVar2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c615ec(uVar8,2);
  func_0x000107c615e8(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101dafb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(plVar5);
  return;
}



/* Entry: 101dafb2c; end: 101dafb37;  */

void FUN_101dafb2c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101dafb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dafb38; end: 101dafb6b;  */

void FUN_101dafb38(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000101dafb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dafb6c; end: 101dafb8f;  */

void FUN_101dafb6c(void)

{
  func_0x000107c5ad20();
  return;
}



/* Entry: 101dafb90; end: 101dafb9b;  */

void FUN_101dafb90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined *puVar2;
  
  if ((*(long *)(unaff_x20 + 0x10) == 1) || (*(long *)(unaff_x20 + 0x10) == 2)) {
    puVar2 = PTR_PTR_1126b9620;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar1 = PTR_PTR_1126c0308;
    func_0x000107c610f8(PTR_PTR_1126c0308);
    func_0x000107c453e4();
    func_0x000107c5a494();
    func_0x000107c55638(puVar2,param_3,puVar1);
    func_0x000107c61170(puVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  *param_1 = puVar2;
  return;
}


