/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ac0570; end: 103ac065b;  */

undefined8 FUN_103ac0570(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&lStack_60);
  lVar2 = lStack_60;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_60);
  if (lVar2 != 0) {
    func_0x0001002badc0(0);
    func_0x000107c610f8();
    uVar3 = uStack_48;
    FUN_103ac360c(uStack_48,uStack_50,uStack_58,lVar2);
    func_0x000107c61170(uStack_48);
    func_0x000107c61170(uStack_50);
    func_0x000107c61170(uStack_58);
    func_0x000107c615e8(lVar2);
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac065c);
  (*pcVar1)();
}



/* Entry: 103ac065c; end: 103ac0697;  */

void FUN_103ac065c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103ac0698; end: 103ac06bf;  */

undefined8 FUN_103ac0698(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&lStack_60);
  lVar2 = lStack_60;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_60);
  if (lVar2 != 0) {
    func_0x0001002badc0(0);
    func_0x000107c610f8();
    uVar3 = uStack_48;
    FUN_103ac360c(uStack_48,uStack_50,uStack_58,lVar2);
    func_0x000107c61170(uStack_48);
    func_0x000107c61170(uStack_50);
    func_0x000107c61170(uStack_58);
    func_0x000107c615e8(lVar2);
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac065c);
  (*pcVar1)();
}



/* Entry: 103ac06c0; end: 103ac0713;  */

undefined8 FUN_103ac06c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103ac0714(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 103ac0714; end: 103ac082b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac0714(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(long *)(unaff_x20 + 0x18) = param_3;
  lVar3 = *(long *)(param_3 + _DAT_11302e640);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x000107c51ea4();
    func_0x000107c615e8(lVar3);
    *(char *)(unaff_x20 + 0x20) = (char)lVar1;
    if ((int)lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      func_0x000107c41570();
      func_0x000107c61180();
      func_0x000107c6157c();
      func_0x000107c3d7bc(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c61574();
    }
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103ac082c; end: 103ac082f;  */

/* WARNING: Possible PIC construction at 0x000103ac0950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ac0a74) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a44) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a34) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a24) */
/* WARNING: Removing unreachable block (ram,0x000103ac0954) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a6c) */
/* WARNING: Removing unreachable block (ram,0x000103ac09b4) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a84) */

void FUN_103ac082c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  func_0x000107c57f50();
  func_0x000107c610f8(PTR_PTR_1126b7230);
  func_0x000107c453e4();
  func_0x000107c57ed0();
  puVar2 = PTR_PTR_1126b7240;
  func_0x000107c610f8(PTR_PTR_1126b7240);
  func_0x000107c453e4();
  func_0x000107c56a40();
  func_0x000107c5277c(puVar2);
  func_0x000107c610f8(PTR_PTR_1126ae740);
  func_0x000107c453e4();
  func_0x000107c3d93c();
  func_0x000107c527c4(puVar2);
  puVar2 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f19ab00);
  func_0x000107c5597c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103ac0830; end: 103ac0aaf;  */

/* WARNING: Possible PIC construction at 0x000103ac0950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac0a80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ac0a74) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a44) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a34) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a24) */
/* WARNING: Removing unreachable block (ram,0x000103ac0954) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a6c) */
/* WARNING: Removing unreachable block (ram,0x000103ac09b4) */
/* WARNING: Removing unreachable block (ram,0x000103ac0a84) */

void FUN_103ac0830(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  func_0x000107c57f50();
  func_0x000107c610f8(PTR_PTR_1126b7230);
  func_0x000107c453e4();
  func_0x000107c57ed0();
  puVar2 = PTR_PTR_1126b7240;
  func_0x000107c610f8(PTR_PTR_1126b7240);
  func_0x000107c453e4();
  func_0x000107c56a40();
  func_0x000107c5277c(puVar2);
  func_0x000107c610f8(PTR_PTR_1126ae740);
  func_0x000107c453e4();
  func_0x000107c3d93c();
  func_0x000107c527c4(puVar2);
  puVar2 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f19ab00);
  func_0x000107c5597c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103ac0ab0; end: 103ac0ad7; -[_TtC41PostableContentDestinationsDataRepository53PostableContentDestinationsDataJobProcessorEntryPoint onAppBecomesActive] */

void FUN_103ac0ab0(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_103ac0830();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103ac0ad8; end: 103ac0b03;  */

void FUN_103ac0ad8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ac0b04; end: 103ac0b23;  */

void FUN_103ac0b04(void)

{
  FUN_103ac0830();
  return;
}



/* Entry: 103ac0b24; end: 103ac0b2b;  */

undefined8 FUN_103ac0b24(void)

{
  return 0;
}



/* Entry: 103ac0b2c; end: 103ac0b4b;  */

void FUN_103ac0b2c(void)

{
  func_0x000107c61168(&PTR_PTR_112fe6ab8);
  return;
}



/* Entry: 103ac0b4c; end: 103ac0bcb;  */

undefined8
FUN_103ac0b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103ac360c(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return uVar1;
}



/* Entry: 103ac0bcc; end: 103ac0bdf;  */

bool FUN_103ac0bcc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ac0be0; end: 103ac0cc7;  */

void FUN_103ac0be0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  uStack_38 = *unaff_x20;
  func_0x000107c6068c(auStack_80,0);
  func_0x000107c5fa50(auStack_80,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ac0cc8; end: 103ac0cf3;  */

void FUN_103ac0cc8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103ac3c38();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103ac0cf4; end: 103ac0cff;  */

void FUN_103ac0cf4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103ac0d00; end: 103ac0d4f;  */

void FUN_103ac0d00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103ac45f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb4bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation15_BridgedNSErrorPAAE7_domainSSvg_1103506f8)(param_1,uVar1);
  return;
}



/* Entry: 103ac0d50; end: 103ac0d73;  */

void FUN_103ac0d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 103ac0d74; end: 103ac0db3;  */

void FUN_103ac0d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000103ac45f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation15_BridgedNSErrorPAAE08_bridgedC0xSgSo0C0Ch_tcfC_1103506e0)
            (param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 103ac0db4; end: 103ac0db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_103ac0db4(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_48;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 0x112fe6c00;
    func_0x0001000285a8(0x112fe6c00,&UNK_10dc4db30);
    func_0x000100087bd4(&lStack_48,FUN_103ac4648,auStack_60,uVar1);
    if (lStack_48 != 0) {
      puVar2 = &UNK_1106cb188;
      func_0x000107c613fc(&UNK_1106cb188,0x11,7);
      puVar2[0x10] = 0;
      puVar3 = &UNK_1106cb1b0;
      func_0x000107c613fc(&UNK_1106cb1b0,0x20,7);
      *(long *)(puVar3 + 0x10) = lStack_48;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      func_0x0001000285a8(0x112dc70e0,&UNK_10d9878b0);
      func_0x000107c613fc();
      func_0x000107c6157c(lStack_48);
      puVar4 = (undefined1 *)0x103ac4678;
      func_0x0001000b64ac(0x103ac4678,puVar3);
      goto LAB_103ac0f04;
    }
  }
  else {
    uVar1 = 0x112fe6c00;
    func_0x0001000285a8(0x112fe6c00,&UNK_10dc4db30);
    func_0x000100087bd4(&lStack_48,FUN_103ac4680,auStack_60,uVar1);
  }
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  auStack_60[0] = 1;
  puVar4 = auStack_60;
  func_0x000100854cb0(puVar4);
LAB_103ac0f04:
  func_0x000107c6157c();
  uVar5 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(puVar4);
  puVar2 = &UNK_1106cb098;
  func_0x000107c613fc(&UNK_1106cb098,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1106cb160;
  func_0x000107c613fc(&UNK_1106cb160,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c61174();
  uVar1 = 0x112fe6c08;
  func_0x0001000285a8(0x112fe6c08,&UNK_10dc4db40);
  pcVar6 = FUN_103ac4670;
  func_0x00010068b194(FUN_103ac4670,puVar3,uVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(lStack_48);
  return pcVar6;
}



/* Entry: 103ac0db8; end: 103ac10f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_103ac0db8(ulong param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_48;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 0x112fe6c00;
    func_0x0001000285a8(0x112fe6c00,&UNK_10dc4db30);
    func_0x000100087bd4(&lStack_48,FUN_103ac4648,auStack_60,uVar1);
    if (lStack_48 != 0) {
      puVar2 = &UNK_1106cb188;
      func_0x000107c613fc(&UNK_1106cb188,0x11,7);
      puVar2[0x10] = 0;
      puVar3 = &UNK_1106cb1b0;
      func_0x000107c613fc(&UNK_1106cb1b0,0x20,7);
      *(long *)(puVar3 + 0x10) = lStack_48;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      func_0x0001000285a8(0x112dc70e0,&UNK_10d9878b0);
      func_0x000107c613fc();
      func_0x000107c6157c(lStack_48);
      puVar4 = (undefined1 *)0x103ac4678;
      func_0x0001000b64ac(0x103ac4678,puVar3);
      goto LAB_103ac0f04;
    }
  }
  else {
    uVar1 = 0x112fe6c00;
    func_0x0001000285a8(0x112fe6c00,&UNK_10dc4db30);
    func_0x000100087bd4(&lStack_48,FUN_103ac4680,auStack_60,uVar1);
  }
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  auStack_60[0] = 1;
  puVar4 = auStack_60;
  func_0x000100854cb0(puVar4);
LAB_103ac0f04:
  func_0x000107c6157c();
  uVar5 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(puVar4);
  puVar2 = &UNK_1106cb098;
  func_0x000107c613fc(&UNK_1106cb098,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1106cb160;
  func_0x000107c613fc(&UNK_1106cb160,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c61174();
  uVar1 = 0x112fe6c08;
  func_0x0001000285a8(0x112fe6c08,&UNK_10dc4db40);
  pcVar6 = FUN_103ac4670;
  func_0x00010068b194(FUN_103ac4670,puVar3,uVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(lStack_48);
  return pcVar6;
}



/* Entry: 103ac10f4; end: 103ac124b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac10f4(ulong *param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uStack_69;
  undefined1 auStack_68 [24];
  
  uVar5 = *param_1;
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    func_0x000104886440();
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_68,1,0);
    *(undefined1 *)(param_2 + 0x10) = 1;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      if (uVar6 == uVar4) break;
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac11f4);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar5 + uVar4 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar4;
        func_0x00010304c950(uVar4,uVar5);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac11c0);
        (*pcVar2)();
      }
      cVar1 = *(char *)(uVar3 + _DAT_112fe6d58);
      func_0x000107c61170();
      uVar3 = uVar4 + 1;
    } while (cVar1 != '\x02');
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_69 = uVar6 == uVar4;
    func_0x000100854cb0(&uStack_69);
  }
  return;
}



/* Entry: 103ac124c; end: 103ac12a3;  */

void FUN_103ac124c(long param_1)

{
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uStack_39 = 1;
    func_0x000100087f6c(&uStack_39);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 103ac12a4; end: 103ac1403;  */

void FUN_103ac12a4(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar5 = *param_2;
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x00010304d5c0(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac1404);
      (*pcVar3)();
    }
    uVar7 = 0;
    do {
      puVar2 = puStack_68;
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) <= (long)uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac13e8);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar7;
        func_0x000103ac3034(uVar7,uVar5);
      }
      uStack_78 = uVar4;
      FUN_103ac1404(&uStack_70,&uStack_78);
      func_0x000107c61170(uVar4);
      uVar1 = uStack_70;
      uVar4 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        func_0x00010304d5c0(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar1;
    } while (uVar6 != uVar7);
  }
  *param_1 = puStack_68;
  return;
}



/* Entry: 103ac1404; end: 103ac15ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac1404(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lStack_70;
  long lStack_68;
  
  plVar9 = &lStack_70;
  lVar13 = *param_2;
  lVar4 = lVar13;
  func_0x000107c4ec10();
  lVar5 = lVar13;
  func_0x000107c44fc8();
  func_0x000107c61180();
  if (lVar5 == 0) {
    uVar12 = 0xe000000000000000;
    puVar7 = (undefined *)0x0;
    uVar11 = param_3;
  }
  else {
    puVar6 = PTR_PTR_1126c3320;
    func_0x000107c61168();
    func_0x000107c5cb1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar6;
    func_0x000107c5faec();
    uVar11 = param_3;
    func_0x000107c61170(puVar6);
    uVar12 = param_3;
  }
  uVar10 = (uint)uVar11;
  lVar5 = lVar13;
  func_0x000107c4ec0c();
  uVar2 = (undefined1)lVar5;
  lVar5 = lVar13;
  func_0x000107c4ec04();
  func_0x000107c50114();
  func_0x000107c61180();
  if (lVar13 == 0) {
    uVar3 = 2;
  }
  else {
    lVar8 = lVar13;
    func_0x000107c49988();
    uVar3 = (undefined1)lVar8;
    func_0x000107c61170(lVar13);
  }
  lVar13 = (long)(int)lVar5;
  func_0x000103ac01a0();
  func_0x000103ac4ca4();
  lVar5 = 3;
  if ((uVar10 & 0xff) != 1) {
    lVar5 = lVar13;
  }
  lVar8 = 0;
  FUN_103ac4cb4();
  lVar13 = lVar8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar13 + _DAT_112fe6d50);
  *puVar1 = puVar7;
  puVar1[1] = uVar12;
  *(undefined1 *)(lVar13 + _DAT_112fe6d58) = uVar2;
  *(long *)(lVar13 + _DAT_112fe6d60) = lVar5;
  *(undefined1 *)(lVar13 + _DAT_112fe6d68) = uVar3;
  *(int *)(lVar13 + _DAT_112fe6d70) = (int)lVar4;
  lStack_70 = lVar13;
  lStack_68 = lVar8;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar9;
  return;
}



/* Entry: 103ac15ac; end: 103ac1a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac15ac(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *apuStack_a0 [2];
  long lStack_90;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  bVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112fe6c10,&UNK_10dc4db50);
    apuStack_a0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100854cb0(apuStack_a0);
  }
  else if ((bVar1 & 1) == 0) {
    uVar3 = 0x112fe6c00;
    lStack_90 = param_2;
    func_0x0001000285a8(0x112fe6c00,&UNK_10dc4db30);
    func_0x000100087bd4(&lStack_80,FUN_103ac4850,apuStack_a0,uVar3);
    if (lStack_80 == 0) {
      func_0x0001000285a8(0x112fe6c10,&UNK_10dc4db50);
      apuStack_a0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100854cb0(apuStack_a0);
    }
    func_0x000107c61170(param_2);
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    uVar3 = *(undefined8 *)(param_3 + _DAT_112fe6b70);
    func_0x000107c3db2c(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x0001000b637c();
    func_0x000107c61170(uVar3);
    uVar3 = 0x112fe6c18;
    func_0x0001000285a8(0x112fe6c18,&UNK_10dc4db60);
    pcVar5 = FUN_103ac21b0;
    func_0x0001000bfde0(FUN_103ac21b0,0,uVar3);
    func_0x000107c61574(uVar4);
    uVar3 = 0x112fe6c08;
    func_0x0001000285a8(0x112fe6c08,&UNK_10dc4db40);
    pcVar6 = FUN_103ac12a4;
    func_0x0001000bfde0(FUN_103ac12a4,0,uVar3);
    func_0x000107c61574();
    FUN_103ac2f54();
    func_0x000107c613fc();
    *(undefined8 *)(pcVar5 + 0x18) = 5;
    *(undefined8 *)(pcVar5 + 0x10) = 2;
    pcVar10 = *(code **)(param_2 + _DAT_112fe6ba8);
    pcVar9 = pcVar10;
    if (pcVar10 == (code *)0x0) {
      uVar2 = *(undefined1 *)(param_2 + _DAT_112fe6b30);
      puVar7 = &UNK_1106cb098;
      func_0x000107c613fc(&UNK_1106cb098,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_2);
      puVar8 = &UNK_1106cb228;
      func_0x000107c613fc(&UNK_1106cb228,0x19,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      puVar8[0x18] = uVar2;
      func_0x0001000285a8(0x112fe6c20,&UNK_10dc4db68);
      func_0x000107c613fc();
      pcVar9 = FUN_103ac474c;
      func_0x0001000b64ac(FUN_103ac474c,puVar8);
      pcVar10 = (code *)0x0;
    }
    func_0x0001000285a8(0x112fe6c10,&UNK_10dc4db50);
    puVar7 = &UNK_1106cb098;
    puVar8 = puVar7;
    func_0x000107c613fc(&UNK_1106cb098,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,param_2);
    func_0x000107c61174();
    func_0x000107c6157c(pcVar10);
    uVar4 = 0x103ac4758;
    func_0x0001000d5158(0x103ac4758,puVar8,uVar3);
    func_0x000107c61574(puVar8);
    func_0x000107c613fc(&UNK_1106cb098,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,param_2);
    uVar3 = 0x103ac4760;
    func_0x00010487e4e0(0x103ac4760,puVar7);
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(puVar7);
    *(undefined8 *)(pcVar5 + 0x20) = uVar3;
    *(code **)(pcVar5 + 0x28) = pcVar6;
    func_0x000107c6157c(pcVar6);
    pcVar9 = pcVar5;
    func_0x0001000c19f0();
    func_0x000107c61574(pcVar5);
    func_0x00010006c804();
    uVar3 = *(undefined8 *)(param_2 + _DAT_112fe6b88);
    *(code **)(param_2 + _DAT_112fe6b88) = pcVar9;
    func_0x000107c6157c(pcVar9);
    func_0x000100070bfc();
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(uVar3);
    uVar3 = 0x112fe6c00;
    lStack_90 = param_2;
    func_0x0001000285a8(0x112fe6c00,&UNK_10dc4db30);
    func_0x000100087bd4(&lStack_80,0x103ac4864,apuStack_a0,uVar3);
    if (lStack_80 == 0) {
      func_0x000107c61170(param_2);
      apuStack_a0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100854cb0(apuStack_a0);
      func_0x000107c61574(pcVar6);
      func_0x000107c61170(param_2);
    }
    else {
      puVar7 = &UNK_1106cb098;
      func_0x000107c613fc(&UNK_1106cb098,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,param_2);
      func_0x000107c61170(param_2);
      func_0x00010487e5dc(0x103ac4768,puVar7,FUN_103ac1b54,0);
      func_0x000107c61170(param_2);
      func_0x000107c61574(pcVar6);
      func_0x000107c61574(lStack_80);
      func_0x000107c61574(puVar7);
    }
  }
  return;
}



/* Entry: 103ac1a88; end: 103ac1b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac1a88(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = &uStack_60;
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001000285a8(0x112fe6c10,&UNK_10dc4db50);
    uStack_60 = uVar2;
    func_0x000100854cb0();
    func_0x00010006c804();
    uVar2 = *(undefined8 *)(param_2 + _DAT_112fe6b90);
    *(undefined8 **)(param_2 + _DAT_112fe6b90) = puVar1;
    func_0x000107c6157c(puVar1);
    func_0x000100070bfc();
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 103ac1b54; end: 103ac1b57;  */

void FUN_103ac1b54(void)

{
  return;
}



/* Entry: 103ac1b58; end: 103ac1ce3;  */

void FUN_103ac1b58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_103ac47b8(0,0x112d56378,&PTR_PTR_1126ae790);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1)
  ;
  lVar2 = lVar6;
  FUN_104188018(lVar6,0,0);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  puVar3 = &UNK_1106cb098;
  func_0x000107c613fc(&UNK_1106cb098,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1106cb0c0;
  func_0x000107c613fc(&UNK_1106cb0c0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcStack_60 = FUN_103ac4634;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1106cb0d8;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar3 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(lVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 103ac1ce4; end: 103ac206f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac1ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126ad858;
    func_0x000107c610f8(PTR_PTR_1126ad858);
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126ae740;
    func_0x000107c610f8(PTR_PTR_1126ae740);
    func_0x000107c453e4();
    func_0x000107c3d93c();
    func_0x000107c54614(puVar2);
    puVar4 = PTR_PTR_1126ae748;
    func_0x000107c61168();
    func_0x000107c3edf4();
    func_0x000107c61180();
    puVar5 = (undefined *)0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000010;
    *(undefined8 *)(puVar5 + 0x18) = 6;
    *(undefined8 *)(puVar5 + 0x10) = 3;
    *(undefined8 *)(puVar5 + 0x28) = 0x800000010ef1c330;
    *(undefined8 *)(puVar5 + 0x30) = 0x656c626174736f70;
    *(undefined8 *)(puVar5 + 0x38) = 0xe800000000000000;
    *(undefined8 *)(puVar5 + 0x40) = 0x4c2d747065636341;
    *(undefined8 *)(puVar5 + 0x48) = 0xef65676175676e61;
    puVar6 = puVar5;
    FUN_103ac3dd8();
    uVar13 = 0x112d38270;
    puStack_130 = puVar6;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar7 = 0x112d38278;
    func_0x000103ac47f8(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
    uVar8 = 0x2c;
    uVar12 = 0xe100000000000000;
    func_0x000107c5fa80(0x2c,0xe100000000000000,uVar13,uVar7);
    uVar13 = uVar12;
    func_0x000107c6142c(puVar6);
    *(undefined8 *)(puVar5 + 0x50) = uVar8;
    *(undefined8 *)(puVar5 + 0x58) = uVar12;
    *(undefined8 *)(puVar5 + 0x60) = 0x6f72702d70616e73;
    *(undefined8 *)(puVar5 + 0x68) = 0xe800000000000000;
    lVar9 = *(long *)(param_1 + _DAT_112fe6ba0);
    func_0x000108f27828();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac2070);
      (*pcVar1)();
    }
    lVar10 = lVar9;
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
    *(long *)(puVar5 + 0x70) = lVar10;
    *(undefined8 *)(puVar5 + 0x78) = uVar13;
    puVar6 = puVar5;
    func_0x0001001830b8(puVar5);
    func_0x000107c61588(puVar5);
    uVar13 = 0x112d38308;
    func_0x0001000285a8(0x112d38308,&UNK_10d902040);
    func_0x000107c61408(puVar5 + 0x20,3,uVar13);
    puVar5 = puVar6;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar6);
    puVar6 = puVar4;
    func_0x000107c3d704(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    uVar13 = *(undefined8 *)(param_1 + _DAT_112fe6b60);
    puVar5 = &UNK_1106cb110;
    func_0x000107c613fc(&UNK_1106cb110,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_2;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    uStack_110 = 0x103ac4640;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0x42000000;
    pcStack_120 = FUN_103ac2138;
    puStack_118 = &UNK_1106cb128;
    ppuVar11 = &puStack_130;
    puStack_108 = puVar5;
    func_0x000107c60bc4(ppuVar11);
    puVar5 = puStack_108;
    func_0x000107c61174(uVar13);
    func_0x000107c61174(puVar4);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar5);
    func_0x000107c441f0(uVar13);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 103ac2070; end: 103ac2137;  */

/* WARNING: Possible PIC construction at 0x000103ac2100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac2120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ac2104) */
/* WARNING: Removing unreachable block (ram,0x000103ac2124) */

void FUN_103ac2070(long param_1,long param_2,code *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar2 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f19abf0);
      func_0x000107c466bc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    param_1 = param_2;
  }
  (*param_3)(param_1,uVar2);
  return;
}



/* Entry: 103ac2138; end: 103ac21af;  */

/* WARNING: Possible PIC construction at 0x000103ac2194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ac2198) */

void FUN_103ac2138(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103ac21b0; end: 103ac221b;  */

void FUN_103ac21b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_28;
  
  uVar3 = *param_2;
  puStack_28 = (undefined *)0x0;
  uVar2 = 0;
  FUN_103ac47b8(0,0x112fe6bd8,&PTR_PTR_1126d32f0);
  func_0x000107c5fc50(uVar3,&puStack_28,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 103ac221c; end: 103ac242b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac221c(double param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined *puStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(FUN_103ac242c,0);
    return;
  }
  puVar1 = &UNK_1106cb250;
  func_0x000107c613fc(&UNK_1106cb250,0x20,7);
  *(undefined8 **)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  if ((param_4 & 1) == 0) {
    puVar3 = *(undefined8 **)(param_3 + _DAT_112fe6b28);
    if ((puVar3 == (undefined8 *)0x0) || (*(char *)(puVar3 + 3) == '\x01')) {
      func_0x000107c61174(param_3);
      func_0x000107c6157c();
      puVar3 = param_2;
    }
    else {
      dVar4 = (double)puVar3[2];
      func_0x000107c61174(param_3);
      func_0x000107c6157c(param_2);
      func_0x000107c6157c(puVar3);
      func_0x000107c6071c();
      if ((*(char *)(puVar3 + 5) == '\x01') || (dVar4 <= param_1 - (double)puVar3[4])) {
        puVar3[4] = param_1;
        *(undefined1 *)(puVar3 + 5) = 0;
        func_0x000107c61574(puVar3);
        goto LAB_103ac2294;
      }
      func_0x000107c61574();
    }
    if (*(char *)(param_3 + _DAT_112fe6b30) == '\x01') {
      FUN_103ac3c54();
      puVar2 = &UNK_1106cb000;
      func_0x000107c613f8(&UNK_1106cb000,puVar3,0,0);
      *puVar3 = 3;
      uStack_60 = 1;
      puStack_68 = puVar2;
      func_0x000107c614b0();
      func_0x000100087f6c(&puStack_68);
      func_0x000107c614ac(puVar2);
      func_0x000100c7f554();
      func_0x000107c614ac(puVar2);
    }
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c6157c(param_2);
LAB_103ac2294:
    FUN_103ac1b58(FUN_103ac479c,puVar1);
  }
  func_0x000107c61574(puVar1);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(FUN_103ac24d4,0);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 103ac242c; end: 103ac242f;  */

void FUN_103ac242c(void)

{
  return;
}



/* Entry: 103ac2430; end: 103ac24d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac2430(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = (undefined1)param_2;
  uStack_40 = param_1;
  if (((uint)param_2 & 0xff) == 1) {
    func_0x000107c614b0();
    func_0x000100087f6c(&uStack_40);
    func_0x000103ac47a4(param_1,1);
    if (*(char *)(param_4 + _DAT_112fe6b30) != '\x01') {
      return;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000100087f6c(&uStack_40);
    func_0x000103ac47a4(param_1,param_2);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 103ac24d4; end: 103ac24d7;  */

void FUN_103ac24d4(void)

{
  return;
}



/* Entry: 103ac24d8; end: 103ac2563;  */

void FUN_103ac24d8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_2;
  cVar1 = *(char *)(param_2 + 1);
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      FUN_103ac3e24();
    }
    func_0x000107c61170();
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 103ac2564; end: 103ac25bf;  */

void FUN_103ac2564(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103ac25c0(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103ac25c0; end: 103ac2953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac25c0(ulong param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_103ac2d44(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar11 = puStack_90;
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac2954);
      (*pcVar2)();
    }
    puVar3 = PTR_PTR_1126c3320;
    func_0x000107c61168();
    uVar12 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac2934);
          (*pcVar2)();
        }
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac2938);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar12;
        func_0x00010304c950(uVar12,param_1);
      }
      if (*(char *)(uVar4 + _DAT_112fe6d68) == '\x02') {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR_PTR_1126d3300;
        func_0x000107c610f8(PTR_PTR_1126d3300);
        func_0x000107c46f18();
      }
      iVar1 = *(int *)(uVar4 + _DAT_112fe6d70);
      puVar5 = puVar3;
      func_0x000107c42de0();
      puVar6 = *(undefined **)(uVar4 + _DAT_112fe6d50);
      uVar7 = ((undefined8 *)(uVar4 + _DAT_112fe6d50))[1];
      if (puVar5 == (undefined *)(long)iVar1) {
        func_0x000107c5fadc(puVar6,uVar7);
        puVar5 = puVar3;
        func_0x000107c5cb00(puVar3);
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        puVar6 = puVar5;
        func_0x000107c5faec(puVar5);
        func_0x000107c61170(puVar5);
      }
      else {
        func_0x000107c61434(uVar7);
      }
      if (*(long *)(uVar4 + _DAT_112fe6d60) < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac292c);
        (*pcVar2)();
      }
      if (0x7fffffff < *(long *)(uVar4 + _DAT_112fe6d60)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac2930);
        (*pcVar2)();
      }
      puVar5 = PTR_PTR_1126d32f0;
      func_0x000107c610f8();
      func_0x000107c5fadc(puVar6,uVar7);
      func_0x000107c6142c(uVar7);
      func_0x000107c46d44();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar6);
      uVar4 = *(ulong *)(puVar11 + 0x10);
      puStack_90 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar4) {
        FUN_103ac2d44(1 < *(ulong *)(puVar11 + 0x18),uVar4 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puStack_90 + 0x10) = uVar4 + 1;
      *(undefined **)(puStack_90 + uVar4 * 8 + 0x20) = puVar5;
      puVar11 = puStack_90;
    } while (uVar9 != uVar12);
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112fe6b70);
  uVar7 = 0;
  FUN_103ac47b8(0,0x112fe6bd8,&PTR_PTR_1126d32f0);
  puVar3 = puVar11;
  func_0x000107c5fc48(puVar11,uVar7);
  func_0x000107c6142c(puVar11);
  pcStack_70 = FUN_103ac2954;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab47f8;
  puStack_78 = &UNK_1106cb010;
  ppuVar8 = &puStack_90;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c5d7d4(uVar10);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 103ac2954; end: 103ac2957;  */

void FUN_103ac2954(void)

{
  return;
}



/* Entry: 103ac2958; end: 103ac2aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ac2958(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *in_x4;
  undefined8 in_x5;
  undefined8 *unaff_x20;
  undefined8 *puVar3;
  double dVar4;
  
  puVar1 = &UNK_1106cafd8;
  func_0x000107c613fc(&UNK_1106cafd8,0x28,7);
  *(undefined8 **)(puVar1 + 0x10) = unaff_x20;
  *(code **)(puVar1 + 0x18) = in_x4;
  *(undefined8 *)(puVar1 + 0x20) = in_x5;
  puVar3 = *(undefined8 **)((long)unaff_x20 + _DAT_112fe6b28);
  if ((puVar3 == (undefined8 *)0x0) || (*(char *)(puVar3 + 3) == '\x01')) {
    func_0x000107c6157c(in_x5);
    puVar3 = unaff_x20;
    func_0x000107c61174();
  }
  else {
    dVar4 = (double)puVar3[2];
    func_0x000107c6157c(in_x5);
    func_0x000107c61174();
    func_0x000107c6157c(puVar3);
    func_0x000107c6071c();
    if ((*(char *)(puVar3 + 5) == '\x01') || (dVar4 <= param_1 - (double)puVar3[4])) {
      puVar3[4] = param_1;
      *(undefined1 *)(puVar3 + 5) = 0;
      func_0x000107c61574(puVar3);
      FUN_103ac1b58(0x103ac3c48,puVar1);
      goto LAB_103ac2a8c;
    }
    func_0x000107c61574();
  }
  if (*(char *)((long)unaff_x20 + _DAT_112fe6b30) == '\x01') {
    FUN_103ac3c54();
    puVar2 = &UNK_1106cb000;
    func_0x000107c613f8(&UNK_1106cb000,puVar3,0,0);
    *puVar3 = 3;
    (*in_x4)(1,puVar2);
    func_0x000107c614ac(puVar2);
  }
LAB_103ac2a8c:
  func_0x000107c61574(puVar1);
  return 0;
}



/* Entry: 103ac2ab0; end: 103ac2b27;  */

void FUN_103ac2ab0(undefined *param_1,char param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 == '\x01') {
    uVar2 = 1;
  }
  else {
    FUN_103ac3e24();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    FUN_103ac25c0(puVar1);
    func_0x000107c6142c(puVar1);
    uVar2 = 0;
    param_1 = (undefined *)0x0;
  }
  (*param_4)(uVar2,param_1);
  return;
}



/* Entry: 103ac2b28; end: 103ac2c1f; -[_TtC41PostableContentDestinationsDataRepository41PostableContentDestinationsDataRepository processJobWithJobConfig:input:context:onComplete:] */

void FUN_103ac2b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4(param_6);
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_6);
  uVar2 = param_1;
  FUN_103ac4418(param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ac2c20; end: 103ac2c7b; -[_TtC41PostableContentDestinationsDataRepository41PostableContentDestinationsDataRepository init] */

void FUN_103ac2c20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostableContentDestinationsDataRepository.PostableContentDestinationsDataRepository"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac2c4c);
  (*pcVar1)();
}



/* Entry: 103ac2c7c; end: 103ac2d43; -[_TtC41PostableContentDestinationsDataRepository41PostableContentDestinationsDataRepository .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103ac2cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac2cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac2d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ac2cfc) */
/* WARNING: Removing unreachable block (ram,0x000103ac2cdc) */
/* WARNING: Removing unreachable block (ram,0x000103ac2d1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac2c7c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6b60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6b68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6b70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6b78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe6b80));
  return;
}



/* Entry: 103ac2d44; end: 103ac2d5f;  */

void FUN_103ac2d44(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103ac2d60();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103ac2d60; end: 103ac2eb3;  */

undefined * FUN_103ac2d60(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac2eb4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112fe6bd8;
    FUN_103ac2fbc(0x112fe6bd8,&PTR_PTR_1126d32f0,0x112fe6be0,&UNK_10dc4db18);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103ac47b8(0,0x112fe6bd8,&PTR_PTR_1126d32f0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103ac2eb4; end: 103ac2f53;  */

undefined * FUN_103ac2eb4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112fe6bf0;
    FUN_103ac2fbc(0x112fe6bf0,&PTR_PTR_1126d3310,0x112fe6bf8,&UNK_10dc4db28);
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



/* Entry: 103ac2f54; end: 103ac2fbb;  */

/* WARNING: Possible PIC construction at 0x000103ac2f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ac2f88) */
/* WARNING: Removing unreachable block (ram,0x000103ac2f8c) */

void FUN_103ac2f54(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112fe6c28;
    plVar5 = (long *)&UNK_10dc4db70;
  }
  else {
    puVar3 = (ulong *)0x112fe6c10;
    plVar5 = (long *)&UNK_10dc4db50;
    unaff_x30 = 0x103ac2f88;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 103ac2fbc; end: 103ac33bb;  */

void FUN_103ac2fbc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103ac47b8(0,param_1,param_2);
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



/* Entry: 103ac33bc; end: 103ac34f3;  */

ulong FUN_103ac33bc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac34f4);
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
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac34f0);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103ac34f4; end: 103ac360b;  */

long FUN_103ac34f4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac3608);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac360c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103ac47b8(0,0x112fe6bf0,&PTR_PTR_1126d3310);
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
      FUN_103ac47b8(0,0x112fe6bf0,&PTR_PTR_1126d3310);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac3604);
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



/* Entry: 103ac360c; end: 103ac3c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac360c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  double dVar18;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined *puStack_68;
  long lVar10;
  
  lVar4 = 0;
  func_0x000107c5ffd8();
  lStack_90 = *(long *)(lVar4 + -8);
  lStack_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar4 = 0;
  puStack_88 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ffc4();
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_98 = lVar14;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_a8 = lVar14;
  func_0x000107c5f804();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar4 = _DAT_112fe6b80;
  lVar14 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6b88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6b90) = 0;
  lVar4 = _DAT_112fe6b28;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6b28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6ba8) = 0;
  func_0x000107c44580();
  func_0x000107c61180();
  lVar7 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar7 == 0) {
    func_0x0001048d9980(0xd00000000000005b,0x800000010f19ac10);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac3c14);
    (*pcVar2)();
  }
  func_0x000107c421c8();
  func_0x000107c61180();
  lVar8 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar8 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112fe6ba0) = param_4;
    *(long *)(unaff_x20 + _DAT_112fe6b98) = param_3;
    lVar16 = *(long *)(param_3 + _DAT_11302e640);
    func_0x000107c615f0(param_4);
    func_0x000107c61174(param_3);
    lVar9 = lVar16;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 == 0) {
      uVar3 = 0;
    }
    else {
      lVar10 = lVar9;
      func_0x000107c51ed0();
      uVar3 = (undefined1)lVar10;
      func_0x000107c615e8(lVar9);
    }
    *(undefined1 *)(unaff_x20 + _DAT_112fe6b30) = uVar3;
    uVar6 = 0;
    FUN_103ac0064();
    func_0x000107c61538();
    uVar15 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined8 *)(unaff_x20 + lVar4) = uVar6;
    func_0x000107c61574(uVar15);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar16 == 0) {
      dVar18 = 0.0;
      lVar4 = *(long *)(unaff_x20 + lVar4);
    }
    else {
      lVar9 = lVar16;
      func_0x000107c51ea0();
      func_0x000107c615e8(lVar16);
      dVar18 = (double)lVar9;
      lVar4 = *(long *)(unaff_x20 + lVar4);
    }
    if (lVar4 != 0) {
      *(double *)(lVar4 + 0x10) = dVar18;
      *(undefined1 *)(lVar4 + 0x18) = 0;
    }
    puVar11 = PTR_PTR_1126ae728;
    func_0x000107c61168();
    func_0x000107c3edf4();
    func_0x000107c61180();
    uVar6 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010efb0650);
    puVar12 = puVar11;
    func_0x000107c545b8(puVar11);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar12);
    func_0x000107c57f3c(puVar11);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c59d5c(puVar11);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5343c(puVar11);
    func_0x000107c61180();
    func_0x000107c61170();
    uVar6 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f19acd0);
    FUN_103ac47b8(0,0x112d56378,&PTR_PTR_1126ae790);
    (**(code **)(lVar17 + 0x68))
              (lVar14,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar5);
    func_0x000107c61174();
    lVar4 = lVar14;
    FUN_104188018(lVar14,0,0);
    (**(code **)(lVar17 + 8))(lVar14,lVar5);
    lVar14 = lVar7;
    puStack_b0 = puVar11;
    func_0x000107c40a28();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(lVar4);
    *(long *)(unaff_x20 + _DAT_112fe6b68) = lVar14;
    puVar11 = PTR_PTR_1126ad860;
    func_0x000107c610f8();
    func_0x000107c61174(lVar14);
    func_0x000107c49088();
    *(undefined **)(unaff_x20 + _DAT_112fe6b60) = puVar11;
    puVar11 = PTR_PTR_1126ad868;
    func_0x000107c610f8();
    func_0x000107c4660c();
    *(undefined **)(unaff_x20 + _DAT_112fe6b70) = puVar11;
    uVar13 = 0;
    FUN_103ac47b8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    lVar4 = lStack_a8;
    lStack_b8 = lVar8;
    func_0x000107c5f808(lStack_a8);
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100029608();
    uVar6 = 0x112d4ac70;
    func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
    uVar15 = 0x112d4ac78;
    func_0x000103ac47f8(0x112d4ac78,0x112d4ac70,&UNK_10d911480,PTR___sSayxGSTsMc_11034dd08);
    lVar5 = lStack_98;
    func_0x000107c60264(lStack_98,&puStack_68,uVar6,uVar15,lStack_a0,uVar13);
    puVar1 = puStack_88;
    (**(code **)(lStack_90 + 0x68))
              (puStack_88,
               *(undefined4 *)
                PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
               ,lStack_80);
    uVar6 = 0xd00000000000001e;
    func_0x000107c5ffec(0xd00000000000001e,0x800000010f19ad00,lVar4,lVar5,puVar1,0);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(lStack_b8);
    func_0x000107c61170(lVar14);
    func_0x000107c61170();
    *(undefined8 *)(unaff_x20 + _DAT_112fe6b78) = uVar6;
    func_0x0001002badc0();
    func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
    return;
  }
  func_0x0001048d9980(0xd00000000000005d,0x800000010f19ac70);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac3c38);
  (*pcVar2)();
}



/* Entry: 103ac3c38; end: 103ac3c53;  */

undefined1  [16] FUN_103ac3c38(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103ac3c54; end: 103ac3c93;  */

void FUN_103ac3c54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4da20;
  func_0x000107c61520(&UNK_10dc4da20,&UNK_1106cb000);
  puRam0000000112fe6b38 = puVar1;
  return;
}



/* Entry: 103ac3c94; end: 103ac3c97;  */

void FUN_103ac3c94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4d980;
  func_0x000107c61520(&UNK_10dc4d980,&UNK_1106cb000);
  puRam0000000112fe6b40 = puVar1;
  return;
}



/* Entry: 103ac3c98; end: 103ac3cd7;  */

void FUN_103ac3c98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4d980;
  func_0x000107c61520(&UNK_10dc4d980,&UNK_1106cb000);
  puRam0000000112fe6b40 = puVar1;
  return;
}



/* Entry: 103ac3cd8; end: 103ac3cdb;  */

void FUN_103ac3cd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4daa8;
  func_0x000107c61520(&UNK_10dc4daa8,&UNK_1106cb000);
  puRam0000000112fe6b48 = puVar1;
  return;
}



/* Entry: 103ac3cdc; end: 103ac3d1b;  */

void FUN_103ac3cdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4daa8;
  func_0x000107c61520(&UNK_10dc4daa8,&UNK_1106cb000);
  puRam0000000112fe6b48 = puVar1;
  return;
}



/* Entry: 103ac3d1c; end: 103ac3d1f;  */

void FUN_103ac3d1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4d9a8;
  func_0x000107c61520(&UNK_10dc4d9a8,&UNK_1106cb000);
  puRam0000000112fe6b50 = puVar1;
  return;
}



/* Entry: 103ac3d20; end: 103ac3d5f;  */

void FUN_103ac3d20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4d9a8;
  func_0x000107c61520(&UNK_10dc4d9a8,&UNK_1106cb000);
  puRam0000000112fe6b50 = puVar1;
  return;
}



/* Entry: 103ac3d60; end: 103ac3d63;  */

void FUN_103ac3d60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4d9e8;
  func_0x000107c61520(&UNK_10dc4d9e8,&UNK_1106cb000);
  puRam0000000112fe6b58 = puVar1;
  return;
}



/* Entry: 103ac3d64; end: 103ac3da3;  */

void FUN_103ac3d64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4d9e8;
  func_0x000107c61520(&UNK_10dc4d9e8,&UNK_1106cb000);
  puRam0000000112fe6b58 = puVar1;
  return;
}



/* Entry: 103ac3da4; end: 103ac3dd7;  */

void FUN_103ac3da4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3a158 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSis17FixedWidthIntegersMc_11034def8;
  func_0x000107c61520(PTR___sSis17FixedWidthIntegersMc_11034def8,PTR___sSiN_11034deb0);
  puRam0000000112d3a158 = puVar1;
  return;
}



/* Entry: 103ac3dd8; end: 103ac3e23;  */

void FUN_103ac3dd8(long param_1)

{
  func_0x000107c5eefc();
  if (10 < *(ulong *)(param_1 + 0x10)) {
    func_0x000101994330();
    func_0x000107c6142c(param_1);
  }
  return;
}



/* Entry: 103ac3e24; end: 103ac4417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ac3e24(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 uStack_7c;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c4e044();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac4410);
    (*pcVar3)();
  }
  uVar15 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  uVar20 = uVar15 & 0xffffffffffffff8;
  if (uVar15 >> 0x3e == 0) {
    uVar12 = *(ulong *)(uVar20 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar20;
    if (0x7fffffffffffffff < uVar15) {
      uVar12 = uVar15;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar12 != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        if ((uVar15 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar20 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac3ff8);
            (*pcVar3)();
          }
          uVar18 = *(ulong *)(uVar15 + uVar14 * 8 + 0x20);
          func_0x000107c615f0(uVar18);
          puVar13 = PTR_PTR_1126d3310;
        }
        else {
          uVar18 = uVar14;
          func_0x00010125fef0(uVar14,uVar15);
          puVar13 = PTR_PTR_1126d3310;
        }
        PTR_PTR_1126d3310 = puVar13;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac3ff4);
          (*pcVar3)();
        }
        uVar16 = uVar14 + 1;
        func_0x000107c61168(puVar13);
        uVar19 = uVar18;
        func_0x000107c6148c(uVar18,puVar13);
        if (uVar19 == 0) break;
        puVar13 = puVar10;
        func_0x000107c61550();
        if ((((int)puVar13 == 0) || ((long)puVar10 < 0)) ||
           (puVar13 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar9 = puVar10;
            }
            func_0x000107c60480(puVar9);
          }
          puVar13 = (undefined *)0x0;
          FUN_103ac33bc(0,puVar9 + 1,1,puVar10,FUN_103ac2eb4,FUN_103ac34f4);
        }
        uVar18 = (ulong)puVar13 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar18 + 0x10);
        puVar10 = puVar13;
        if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar14) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
          FUN_103ac33bc(puVar10,uVar14 + 1,1,puVar13,FUN_103ac2eb4,FUN_103ac34f4);
          uVar18 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar18 + 0x10) = uVar14 + 1;
        *(ulong *)(uVar18 + uVar14 * 8 + 0x20) = uVar19;
        uVar14 = uVar16;
        if (uVar16 == uVar12) goto LAB_103ac4014;
      }
      func_0x000107c615e8(uVar18);
      uVar14 = uVar14 + 1;
    } while (uVar16 != uVar12);
  }
LAB_103ac4014:
  func_0x000107c6142c(uVar15);
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      puVar13 = puVar10;
    }
    func_0x000107c60480();
  }
  if (puVar13 != (undefined *)0x0) {
    uVar15 = 0;
    do {
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac438c);
          (*pcVar3)();
        }
        uVar20 = *(ulong *)(puVar10 + uVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar20 = uVar15;
        func_0x000103ac31f8(uVar15,puVar10);
      }
      puVar9 = (undefined *)(uVar15 + 1);
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac4388);
        (*pcVar3)();
      }
      uVar12 = uVar20;
      func_0x000107c42960();
      if ((int)uVar12 == 1) {
        func_0x000107c6142c(puVar10);
        uVar15 = uVar20;
        func_0x000107c40438();
        func_0x000107c61180();
        if (uVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac4414);
          (*pcVar3)();
        }
        uVar12 = uVar15;
        func_0x000107c5fc54();
        func_0x000107c61170(uVar15);
        uVar15 = uVar12 & 0xffffffffffffff8;
        if (uVar12 >> 0x3e == 0) {
          uVar14 = *(ulong *)(uVar15 + 0x10);
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          uVar14 = uVar15;
          if (0x7fffffffffffffff < uVar12) {
            uVar14 = uVar12;
          }
          func_0x000107c60480();
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
        if (uVar14 != 0) {
          uVar18 = 0;
          do {
            if ((uVar12 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar15 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac4394);
                (*pcVar3)();
              }
              uVar19 = *(ulong *)(uVar12 + uVar18 * 8 + 0x20);
              func_0x000107c615f0(uVar19);
              puVar13 = PTR_PTR_1126d3318;
            }
            else {
              uVar19 = uVar18;
              func_0x00010125fef0(uVar18,uVar12);
              puVar13 = PTR_PTR_1126d3318;
            }
            PTR_PTR_1126d3318 = puVar13;
            if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac4390);
              (*pcVar3)();
            }
            uVar17 = uVar18 + 1;
            func_0x000107c61168();
            uVar16 = uVar19;
            func_0x000107c6148c();
            if (uVar16 == 0) {
              func_0x000107c615e8(uVar19);
            }
            else {
              uVar4 = uVar16;
              func_0x000107c50114();
              func_0x000107c61180();
              if (uVar4 == 0) {
                uStack_7c = 2;
              }
              else {
                uVar5 = uVar4;
                func_0x000107c49988();
                uStack_7c = (undefined1)uVar5;
                func_0x000107c61170(uVar4);
              }
              uVar4 = uVar16;
              func_0x000107c4d3b8();
              uVar5 = uVar16;
              func_0x000107c44fd8();
              func_0x000107c61180();
              if (uVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103ac4418);
                (*pcVar3)();
              }
              uVar2 = (int)uVar4 - 1;
              if (2 < uVar2) {
                uVar2 = 3;
              }
              uVar4 = uVar5;
              func_0x000107c5faec();
              func_0x000107c61170(uVar5);
              uVar5 = uVar16;
              func_0x000107c4ec0c();
              func_0x000107c4ec10();
              uVar11 = (undefined1)(0x605000403020100 >> ((uVar5 & 7) << 3));
              if (7 < (uint)uVar5) {
                uVar11 = 0;
              }
              lVar6 = 0;
              FUN_103ac4cb4();
              lVar7 = lVar6;
              func_0x000107c610f8();
              puVar1 = (ulong *)(lVar7 + _DAT_112fe6d50);
              *puVar1 = uVar4;
              puVar1[1] = (ulong)puVar13;
              *(undefined1 *)(lVar7 + _DAT_112fe6d58) = uVar11;
              *(ulong *)(lVar7 + _DAT_112fe6d60) = (ulong)uVar2;
              *(undefined1 *)(lVar7 + _DAT_112fe6d68) = uStack_7c;
              *(int *)(lVar7 + _DAT_112fe6d70) = (int)uVar16;
              plVar8 = &lStack_70;
              lStack_70 = lVar7;
              lStack_68 = lVar6;
              func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
              func_0x000107c615e8(uVar19);
              puVar13 = puVar10;
              func_0x000107c61550();
              if ((((int)puVar13 == 0) || ((long)puVar10 < 0)) ||
                 (puVar13 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
                if ((ulong)puVar10 >> 0x3e == 0) {
                  puVar9 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar10) {
                    puVar9 = puVar10;
                  }
                  func_0x000107c60480(puVar9);
                }
                puVar13 = (undefined *)0x0;
                FUN_103ac33bc(0,puVar9 + 1,1,puVar10,&UNK_10304d84c,&UNK_10304dd6c);
              }
              uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
              uVar19 = *(ulong *)(uVar16 + 0x10);
              puVar10 = puVar13;
              if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar19) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
                FUN_103ac33bc(puVar10,uVar19 + 1,1,puVar13,&UNK_10304d84c,&UNK_10304dd6c);
                uVar16 = (ulong)puVar10 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar16 + 0x10) = uVar19 + 1;
              *(long **)(uVar16 + uVar19 * 8 + 0x20) = plVar8;
            }
            uVar18 = uVar18 + 1;
          } while (uVar17 != uVar14);
        }
        func_0x000107c6142c(uVar12);
        func_0x000107c61170(uVar20);
        return puVar10;
      }
      func_0x000107c61170(uVar20);
      uVar15 = uVar15 + 1;
    } while (puVar9 != puVar13);
  }
  func_0x000107c6142c(puVar10);
  return (undefined *)0x0;
}



/* Entry: 103ac4418; end: 103ac45bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ac4418(double param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  double dVar6;
  
  puVar1 = &UNK_1106cb048;
  func_0x000107c613fc(&UNK_1106cb048,0x18,7);
  *(long *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1106cb070;
  func_0x000107c613fc(&UNK_1106cb070,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = param_2;
  *(code **)(puVar2 + 0x18) = FUN_103ac45c0;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  puVar5 = *(undefined8 **)((long)param_2 + _DAT_112fe6b28);
  if ((puVar5 == (undefined8 *)0x0) || (*(char *)(puVar5 + 3) == '\x01')) {
    func_0x000107c60bc4(param_3);
    func_0x000107c6157c(puVar1);
    puVar5 = param_2;
    func_0x000107c61174();
  }
  else {
    dVar6 = (double)puVar5[2];
    func_0x000107c60bc4(param_3);
    func_0x000107c6157c(puVar1);
    func_0x000107c61174(param_2);
    func_0x000107c6157c(puVar5);
    func_0x000107c6071c();
    if ((*(char *)(puVar5 + 5) == '\x01') || (dVar6 <= param_1 - (double)puVar5[4])) {
      puVar5[4] = param_1;
      *(undefined1 *)(puVar5 + 5) = 0;
      func_0x000107c61574(puVar5);
      FUN_103ac1b58(FUN_103ac483c,puVar2);
      goto LAB_103ac4594;
    }
    func_0x000107c61574();
  }
  if (*(char *)((long)param_2 + _DAT_112fe6b30) == '\x01') {
    FUN_103ac3c54();
    puVar3 = &UNK_1106cb000;
    func_0x000107c613f8(&UNK_1106cb000,puVar5,0,0);
    *puVar5 = 3;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    (**(code **)(param_3 + 0x10))(param_3,1,puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c614ac(puVar3);
  }
LAB_103ac4594:
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return 0;
}



/* Entry: 103ac45c0; end: 103ac45c7;  */

void FUN_103ac45c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103ac45c8; end: 103ac4633;  */

void FUN_103ac45c8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103ac4634; end: 103ac4647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac4634(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_80 [32];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_80,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126ad858;
    func_0x000107c610f8(PTR_PTR_1126ad858);
    func_0x000107c453e4();
    puVar5 = PTR_PTR_1126ae740;
    func_0x000107c610f8(PTR_PTR_1126ae740);
    func_0x000107c453e4();
    func_0x000107c3d93c();
    func_0x000107c54614(puVar4);
    puVar6 = PTR_PTR_1126ae748;
    func_0x000107c61168();
    func_0x000107c3edf4();
    func_0x000107c61180();
    puVar7 = (undefined *)0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    *(undefined8 *)(puVar7 + 0x20) = 0xd000000000000010;
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    *(undefined8 *)(puVar7 + 0x28) = 0x800000010ef1c330;
    *(undefined8 *)(puVar7 + 0x30) = 0x656c626174736f70;
    *(undefined8 *)(puVar7 + 0x38) = 0xe800000000000000;
    *(undefined8 *)(puVar7 + 0x40) = 0x4c2d747065636341;
    *(undefined8 *)(puVar7 + 0x48) = 0xef65676175676e61;
    puVar8 = puVar7;
    FUN_103ac3dd8();
    uVar16 = 0x112d38270;
    puStack_130 = puVar8;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar9 = 0x112d38278;
    func_0x000103ac47f8(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
    uVar10 = 0x2c;
    uVar14 = 0xe100000000000000;
    func_0x000107c5fa80(0x2c,0xe100000000000000,uVar16,uVar9);
    uVar16 = uVar14;
    func_0x000107c6142c(puVar8);
    *(undefined8 *)(puVar7 + 0x50) = uVar10;
    *(undefined8 *)(puVar7 + 0x58) = uVar14;
    *(undefined8 *)(puVar7 + 0x60) = 0x6f72702d70616e73;
    *(undefined8 *)(puVar7 + 0x68) = 0xe800000000000000;
    lVar11 = *(long *)(lVar3 + _DAT_112fe6ba0);
    func_0x000108f27828();
    func_0x000107c61180();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac2070);
      (*pcVar2)();
    }
    lVar12 = lVar11;
    func_0x000107c5faec();
    func_0x000107c61170(lVar11);
    *(long *)(puVar7 + 0x70) = lVar12;
    *(undefined8 *)(puVar7 + 0x78) = uVar16;
    puVar8 = puVar7;
    func_0x0001001830b8(puVar7);
    func_0x000107c61588(puVar7);
    uVar16 = 0x112d38308;
    func_0x0001000285a8(0x112d38308,&UNK_10d902040);
    func_0x000107c61408(puVar7 + 0x20,3,uVar16);
    puVar7 = puVar8;
    func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar8);
    puVar8 = puVar6;
    func_0x000107c3d704(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    uVar16 = *(undefined8 *)(lVar3 + _DAT_112fe6b60);
    puVar7 = &UNK_1106cb110;
    func_0x000107c613fc(&UNK_1106cb110,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar15;
    uStack_110 = 0x103ac4640;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0x42000000;
    pcStack_120 = FUN_103ac2138;
    puStack_118 = &UNK_1106cb128;
    ppuVar13 = &puStack_130;
    puStack_108 = puVar7;
    func_0x000107c60bc4(ppuVar13);
    puVar7 = puStack_108;
    func_0x000107c61174(uVar16);
    func_0x000107c61174(puVar6);
    func_0x000107c6157c(uVar15);
    func_0x000107c61574(puVar7);
    func_0x000107c441f0(uVar16);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 103ac4648; end: 103ac466f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac4648(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fe6b90);
  func_0x000107c6157c();
  return;
}



/* Entry: 103ac4670; end: 103ac467f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac4670(byte *param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  long unaff_x20;
  undefined *apuStack_a0 [2];
  long lStack_90;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  bVar2 = *param_1;
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x0001000285a8(0x112fe6c10,&UNK_10dc4db50);
    apuStack_a0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100854cb0(apuStack_a0);
  }
  else if ((bVar2 & 1) == 0) {
    uVar5 = 0x112fe6c00;
    lStack_90 = lVar4;
    func_0x0001000285a8(0x112fe6c00,&UNK_10dc4db30);
    func_0x000100087bd4(&lStack_80,FUN_103ac4850,apuStack_a0,uVar5);
    if (lStack_80 == 0) {
      func_0x0001000285a8(0x112fe6c10,&UNK_10dc4db50);
      apuStack_a0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100854cb0(apuStack_a0);
    }
    func_0x000107c61170(lVar4);
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112fe6b70);
    func_0x000107c3db2c(uVar5);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x0001000b637c();
    func_0x000107c61170(uVar5);
    uVar5 = 0x112fe6c18;
    func_0x0001000285a8(0x112fe6c18,&UNK_10dc4db60);
    pcVar7 = FUN_103ac21b0;
    func_0x0001000bfde0(FUN_103ac21b0,0,uVar5);
    func_0x000107c61574(uVar6);
    uVar5 = 0x112fe6c08;
    func_0x0001000285a8(0x112fe6c08,&UNK_10dc4db40);
    pcVar8 = FUN_103ac12a4;
    func_0x0001000bfde0(FUN_103ac12a4,0,uVar5);
    func_0x000107c61574();
    FUN_103ac2f54();
    func_0x000107c613fc();
    *(undefined8 *)(pcVar7 + 0x18) = 5;
    *(undefined8 *)(pcVar7 + 0x10) = 2;
    pcVar12 = *(code **)(lVar4 + _DAT_112fe6ba8);
    pcVar11 = pcVar12;
    if (pcVar12 == (code *)0x0) {
      uVar3 = *(undefined1 *)(lVar4 + _DAT_112fe6b30);
      puVar9 = &UNK_1106cb098;
      func_0x000107c613fc(&UNK_1106cb098,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar4);
      puVar10 = &UNK_1106cb228;
      func_0x000107c613fc(&UNK_1106cb228,0x19,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      puVar10[0x18] = uVar3;
      func_0x0001000285a8(0x112fe6c20,&UNK_10dc4db68);
      func_0x000107c613fc();
      pcVar11 = FUN_103ac474c;
      func_0x0001000b64ac(FUN_103ac474c,puVar10);
      pcVar12 = (code *)0x0;
    }
    func_0x0001000285a8(0x112fe6c10,&UNK_10dc4db50);
    puVar9 = &UNK_1106cb098;
    puVar10 = puVar9;
    func_0x000107c613fc(&UNK_1106cb098,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,lVar4);
    func_0x000107c61174();
    func_0x000107c6157c(pcVar12);
    uVar6 = 0x103ac4758;
    func_0x0001000d5158(0x103ac4758,puVar10,uVar5);
    func_0x000107c61574(puVar10);
    func_0x000107c613fc(&UNK_1106cb098,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,lVar4);
    uVar5 = 0x103ac4760;
    func_0x00010487e4e0(0x103ac4760,puVar9);
    func_0x000107c61574(pcVar11);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar9);
    *(undefined8 *)(pcVar7 + 0x20) = uVar5;
    *(code **)(pcVar7 + 0x28) = pcVar8;
    func_0x000107c6157c(pcVar8);
    pcVar11 = pcVar7;
    func_0x0001000c19f0();
    func_0x000107c61574(pcVar7);
    func_0x00010006c804();
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112fe6b88);
    *(code **)(lVar4 + _DAT_112fe6b88) = pcVar11;
    func_0x000107c6157c(pcVar11);
    func_0x000100070bfc();
    func_0x000107c61574(pcVar11);
    func_0x000107c61574(uVar5);
    uVar5 = 0x112fe6c00;
    lStack_90 = lVar4;
    func_0x0001000285a8(0x112fe6c00,&UNK_10dc4db30);
    func_0x000100087bd4(&lStack_80,0x103ac4864,apuStack_a0,uVar5);
    if (lStack_80 == 0) {
      func_0x000107c61170(lVar4);
      apuStack_a0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100854cb0(apuStack_a0);
      func_0x000107c61574(pcVar8);
      func_0x000107c61170(lVar4);
    }
    else {
      puVar9 = &UNK_1106cb098;
      func_0x000107c613fc(&UNK_1106cb098,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar4);
      func_0x000107c61170(lVar4);
      func_0x00010487e5dc(0x103ac4768,puVar9,FUN_103ac1b54,0);
      func_0x000107c61170(lVar4);
      func_0x000107c61574(pcVar8);
      func_0x000107c61574(lStack_80);
      func_0x000107c61574(puVar9);
    }
  }
  return;
}



/* Entry: 103ac4680; end: 103ac46a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac4680(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fe6b88);
  func_0x000107c6157c();
  return;
}



/* Entry: 103ac46a8; end: 103ac46af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac46a8(ulong *param_1)

{
  char cVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 uStack_69;
  undefined1 auStack_68 [24];
  
  uVar5 = *param_1;
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    func_0x000104886440();
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_68,1,0);
    *(undefined1 *)(unaff_x20 + 0x10) = 1;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      if (uVar6 == uVar4) break;
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac11f4);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar5 + uVar4 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar4;
        func_0x00010304c950(uVar4,uVar5);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ac11c0);
        (*pcVar2)();
      }
      cVar1 = *(char *)(uVar3 + _DAT_112fe6d58);
      func_0x000107c61170();
      uVar3 = uVar4 + 1;
    } while (cVar1 != '\x02');
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_69 = uVar6 == uVar4;
    func_0x000100854cb0(&uStack_69);
  }
  return;
}



/* Entry: 103ac46b0; end: 103ac4707;  */

void FUN_103ac46b0(undefined1 *param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = *param_1;
  func_0x000100087f6c(&uStack_11);
  func_0x000100c7f554();
  return;
}



/* Entry: 103ac4708; end: 103ac470f;  */

void FUN_103ac4708(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    uStack_39 = 1;
    func_0x000100087f6c(&uStack_39);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 103ac4710; end: 103ac474b;  */

void FUN_103ac4710(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103ac474c; end: 103ac476f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac474c(double param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 *puVar5;
  double dVar6;
  undefined *puStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(FUN_103ac242c,0);
    return;
  }
  puVar2 = &UNK_1106cb250;
  func_0x000107c613fc(&UNK_1106cb250,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = param_2;
  *(long *)(puVar2 + 0x18) = lVar4;
  if ((bVar1 & 1) == 0) {
    puVar5 = *(undefined8 **)(lVar4 + _DAT_112fe6b28);
    if ((puVar5 == (undefined8 *)0x0) || (*(char *)(puVar5 + 3) == '\x01')) {
      func_0x000107c61174(lVar4);
      func_0x000107c6157c();
      puVar5 = param_2;
    }
    else {
      dVar6 = (double)puVar5[2];
      func_0x000107c61174(lVar4);
      func_0x000107c6157c(param_2);
      func_0x000107c6157c(puVar5);
      func_0x000107c6071c();
      if ((*(char *)(puVar5 + 5) == '\x01') || (dVar6 <= param_1 - (double)puVar5[4])) {
        puVar5[4] = param_1;
        *(undefined1 *)(puVar5 + 5) = 0;
        func_0x000107c61574(puVar5);
        goto LAB_103ac2294;
      }
      func_0x000107c61574();
    }
    if (*(char *)(lVar4 + _DAT_112fe6b30) == '\x01') {
      FUN_103ac3c54();
      puVar3 = &UNK_1106cb000;
      func_0x000107c613f8(&UNK_1106cb000,puVar5,0,0);
      *puVar5 = 3;
      uStack_60 = 1;
      puStack_68 = puVar3;
      func_0x000107c614b0();
      func_0x000100087f6c(&puStack_68);
      func_0x000107c614ac(puVar3);
      func_0x000100c7f554();
      func_0x000107c614ac(puVar3);
    }
  }
  else {
    func_0x000107c61174(lVar4);
    func_0x000107c6157c(param_2);
LAB_103ac2294:
    FUN_103ac1b58(FUN_103ac479c,puVar2);
  }
  func_0x000107c61574(puVar2);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(FUN_103ac24d4,0);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 103ac4770; end: 103ac479b;  */

void FUN_103ac4770(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103ac479c; end: 103ac47b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac479c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uStack_38 = (undefined1)param_2;
  uStack_40 = param_1;
  if (((uint)param_2 & 0xff) == 1) {
    func_0x000107c614b0();
    func_0x000100087f6c(&uStack_40);
    func_0x000103ac47a4(param_1,1);
    if (*(char *)(lVar1 + _DAT_112fe6b30) != '\x01') {
      return;
    }
  }
  else {
    func_0x000107c61174(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000100087f6c(&uStack_40);
    func_0x000103ac47a4(param_1,param_2);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 103ac47b8; end: 103ac483b;  */

void FUN_103ac47b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103ac483c; end: 103ac484f;  */

void FUN_103ac483c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  if (((uint)param_2 & 0xff) == 1) {
    uVar3 = 1;
  }
  else {
    FUN_103ac3e24(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),pcVar2,
                  *(undefined8 *)(unaff_x20 + 0x20));
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    FUN_103ac25c0(puVar1);
    func_0x000107c6142c(puVar1);
    uVar3 = 0;
    param_1 = (undefined *)0x0;
  }
  (*pcVar2)(uVar3,param_1);
  return;
}



/* Entry: 103ac4850; end: 103ac4877;  */

void FUN_103ac4850(void)

{
  FUN_103ac4648();
  return;
}



/* Entry: 103ac4878; end: 103ac4913;  */

void FUN_103ac4878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 103ac4914; end: 103ac4a5b;  */

undefined8 FUN_103ac4914(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_80 [48];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000034;
  func_0x0001000a9a18(0xd000000000000034,0x800000010f19ad20);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar6 != 0) {
    func_0x0001002badc0(0);
    func_0x000107c610f8();
    uVar7 = uVar2;
    FUN_103ac360c(uVar2,uVar4,uVar5,lVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(lVar6);
    func_0x000107c61428(param_1,auStack_80,0,0);
    uVar2 = *param_1;
    func_0x000107c61174(uVar2);
    func_0x0001000aa0a8(uVar3);
    func_0x000107c61170(uVar2);
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac4a5c);
  (*pcVar1)();
}



/* Entry: 103ac4a5c; end: 103ac4a87;  */

/* WARNING: Possible PIC construction at 0x000103ac4a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ac4a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ac4a6c) */
/* WARNING: Removing unreachable block (ram,0x000103ac4a7c) */

void FUN_103ac4a5c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103ac4a88; end: 103ac4b07;  */

void FUN_103ac4a88(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ac4b08; end: 103ac4b87;  */

void FUN_103ac4b08(undefined8 param_1)

{
  if (lRam0000000112fe6c90 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7a9ac4);
  return;
}



/* Entry: 103ac4b88; end: 103ac4c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac4b88(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6d50);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fe6d58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6d60) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fe6d68) = param_5;
  *(undefined4 *)(unaff_x20 + _DAT_112fe6d70) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ac4c34; end: 103ac4c8f; -[_TtC41PostableContentDestinationsDataRepository33UnifiedPostableContentDestination init] */

void FUN_103ac4c34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostableContentDestinationsDataRepository.UnifiedPostableContentDestination",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ac4c60);
  (*pcVar1)();
}



/* Entry: 103ac4c90; end: 103ac4cb3; -[_TtC41PostableContentDestinationsDataRepository33UnifiedPostableContentDestination .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ac4c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fe6d50 + 8))
  ;
  return;
}



/* Entry: 103ac4cb4; end: 103ac4cd3;  */

void FUN_103ac4cb4(void)

{
  func_0x000107c61168(&PTR_PTR_112924138);
  return;
}



/* Entry: 103ac4cd4; end: 103ac4e33;  */

int FUN_103ac4cd4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ac4d50;
        goto LAB_103ac4d34;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ac4d34:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103ac4d50:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103ac4e34; end: 103ac4e6f; -[_TtC30SCSearchDeploymentServicesImpl24SearchDeploymentProvider init] */

void FUN_103ac4e34(undefined8 param_1)

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



/* Entry: 103ac4e70; end: 103ac4edf; -[_TtC30SCSearchDeploymentServicesImpl24SearchDeploymentProvider searchServiceConfiguration] */

void FUN_103ac4e70(void)

{
  func_0x000106f1b74c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ac4ee0; end: 103ac4f9f;  */

void FUN_103ac4ee0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_40 = FUN_103ac4fb0;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103ac4fcc;
  puStack_48 = &UNK_1106cb468;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x0001002a93f0(0);
  func_0x000107c610f8();
  func_0x000103ac507c(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 103ac4fa0; end: 103ac4faf;  */

undefined1  [16] FUN_103ac4fa0(void)

{
  return ZEXT816(0x1106cb458);
}



/* Entry: 103ac4fb0; end: 103ac4fcb;  */

void FUN_103ac4fb0(void)

{
  func_0x000103ac4ec0(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}


