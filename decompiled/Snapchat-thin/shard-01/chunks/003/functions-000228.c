/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100eece2c; end: 100eece6b;  */

void FUN_100eece2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d49850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9102a8;
  func_0x000107c61520(&UNK_10d9102a8,&UNK_110366250);
  puRam0000000112d49850 = puVar1;
  return;
}



/* Entry: 100eece6c; end: 100eedab7;  */

long FUN_100eece6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  return unaff_x20;
}



/* Entry: 100eedab8; end: 100eedd93;  */

void FUN_100eedab8(undefined1 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef10c30);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 100eedd94; end: 100eede4f;  */

void FUN_100eedd94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 100eede50; end: 100eede6f;  */

void FUN_100eede50(void)

{
  func_0x000100eecf48();
  return;
}



/* Entry: 100eede70; end: 100eedea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100eede70(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112f8e510),param_2,0);
  return 0;
}



/* Entry: 100eedea4; end: 100eedef3;  */

void FUN_100eedea4(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = (undefined1)*(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef10c30);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100eedef4; end: 100eedf13;  */

void FUN_100eedef4(void)

{
  func_0x000107c61168(&PTR_PTR_112d49918);
  return;
}



/* Entry: 100eedf14; end: 100eee043;  */

/* WARNING: Possible PIC construction at 0x000100eedf9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eee020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eedfa0) */
/* WARNING: Removing unreachable block (ram,0x000100eee024) */

void FUN_100eedf14(char param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126a5d38;
  func_0x000107c610f8(PTR_PTR_1126a5d38);
  func_0x000107c453e4();
  func_0x000107c571f8();
  uVar3 = 0xd000000000000017;
  pcVar1 = "IOS_CE_ROUTE_ON_ANSWER";
  if (param_1 != '\x01') {
    uVar3 = 0xd000000000000018;
    pcVar1 = "nil_circumstance_engine";
  }
  func_0x000107c5fadc(uVar3,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c5487c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100eee044; end: 100eee15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eee044(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_113052598);
  uVar1 = ((undefined8 *)(lVar3 + _DAT_113052598))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c52ac4(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_1130525a0);
  uVar1 = ((undefined8 *)(lVar3 + _DAT_1130525a0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5280c(param_1);
  func_0x000107c61170(uVar2);
  func_0x000100eee438(*(undefined8 *)(lVar3 + _DAT_1130525a8));
  func_0x000107c570cc(param_1);
  if (*(long *)(lVar3 + _DAT_1130525b0) == 1) {
    uVar2 = 1;
  }
  else {
    if (*(long *)(lVar3 + _DAT_1130525b0) != 2) {
      return;
    }
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1af950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsBlocking__112649878,uVar2);
  return;
}



/* Entry: 100eee15c; end: 100eee2ef;  */

undefined1  [16] FUN_100eee15c(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar3._8_8_ = 0xe700000000000000;
        auVar3._0_8_ = 0x68747541657270;
        return auVar3;
      }
      if (param_1 == 1) {
        auVar7._8_8_ = 0xe300000000000000;
        auVar7._0_8_ = 0x706866;
        return auVar7;
      }
    }
    else {
      if (param_1 == 2) {
        auVar4._8_8_ = 0xec000000676e696e;
        auVar4._0_8_ = 0x7261577070416e69;
        return auVar4;
      }
      if (param_1 == 3) {
        auVar8._8_8_ = 0x800000010ef10440;
        auVar8._0_8_ = 0xd000000000000011;
        return auVar8;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar5._8_8_ = 0xec0000006e6f6974;
      auVar5._0_8_ = 0x6172747369676572;
      return auVar5;
    }
    if (param_1 == 5) {
      auVar10._8_8_ = 0x800000010ef10420;
      auVar10._0_8_ = 0xd000000000000017;
      return auVar10;
    }
  }
  else {
    if (param_1 == 6) {
      auVar6._8_8_ = 0x800000010ef10400;
      auVar6._0_8_ = 0xd000000000000013;
      return auVar6;
    }
    if (param_1 == 7) {
      auVar2._8_8_ = 0x800000010ef103e0;
      auVar2._0_8_ = 0xd000000000000010;
      return auVar2;
    }
    if (param_1 == 8) {
      auVar9._8_8_ = 0xef65746147656741;
      auVar9._0_8_ = 0x646572616c636564;
      return auVar9;
    }
  }
  lStack_18 = param_1;
  func_0x000107c60614(&UNK_11073c4f0,&lStack_18,&UNK_11073c4f0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100eee2f0);
  (*pcVar1)();
}



/* Entry: 100eee2f0; end: 100eee3e3;  */

/* WARNING: Possible PIC construction at 0x000100eee3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eee3c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eee3bc) */
/* WARNING: Removing unreachable block (ram,0x000100eee3cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eee2f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126a5d38;
  func_0x000107c610f8(PTR_PTR_1126a5d38);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c571f8(puVar1);
  FUN_100eee044(puVar1);
  func_0x000107c4bb04(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c31110(param_1);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130525a8);
  FUN_100eee15c(uVar2);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  uVar3 = 0x107;
  func_0x000107c3125c(0x107);
  func_0x000107c61180();
  func_0x000104d1d938(uVar4,param_1,uVar2,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100eee3e4; end: 100eee47f;  */

void FUN_100eee3e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100eee480; end: 100eee52b;  */

void FUN_100eee480(void)

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



/* Entry: 100eee52c; end: 100eee53f;  */

bool FUN_100eee52c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100eee540; end: 100eee5df;  */

void FUN_100eee540(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 100eee5e0; end: 100eee5e7;  */

undefined8 FUN_100eee5e0(void)

{
  return 1;
}



/* Entry: 100eee5e8; end: 100eee69b;  */

void FUN_100eee5e8(undefined8 param_1)

{
  func_0x000103dbf870();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x38,7);
  return;
}



/* Entry: 100eee69c; end: 100eee853;  */

void FUN_100eee69c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_3 + 2);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined1 *)((long)param_1 + 0x11) = 1;
  return;
}



/* Entry: 100eee854; end: 100eee893;  */

void FUN_100eee854(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d49bd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d910488;
  func_0x000107c61520(&UNK_10d910488,&UNK_110366420);
  puRam0000000112d49bd8 = puVar1;
  return;
}



/* Entry: 100eee894; end: 100eee9fb;  */

int FUN_100eee894(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100eee910;
        goto LAB_100eee8f4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100eee8f4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_100eee910:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100eee9fc; end: 100eeea3b;  */

void FUN_100eee9fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d49be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9104f8;
  func_0x000107c61520(&UNK_10d9104f8,&UNK_110366530);
  puRam0000000112d49be0 = puVar1;
  return;
}



/* Entry: 100eeea3c; end: 100eeea5f;  */

void FUN_100eeea3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100ef6108();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 100eeea60; end: 100eeeb67;  */

void FUN_100eeea60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  bVar1 = *(byte *)(param_2 + 2);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x000100ef612c();
      func_0x000100eec018();
      func_0x000107c6142c(param_3);
      goto LAB_100eeeb54;
    }
    FUN_100ef6150();
  }
  else {
    if (bVar1 != 2) {
      param_2 = (undefined8 *)PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x000107c610f8();
      func_0x000107c453e4();
      goto LAB_100eeeb54;
    }
    func_0x000100ef621c();
  }
  lVar4 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  puVar2 = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  puVar3 = PTR___sSis7CVarArgsWP_11034df08;
  *(undefined **)(lVar4 + 0x38) = puVar2;
  *(undefined **)(lVar4 + 0x40) = puVar3;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  uVar5 = param_3;
  func_0x000107c5fb00(param_2,param_3,lVar4);
  func_0x000107c6142c(param_3);
  func_0x000100eec018(param_2,uVar5);
  func_0x000107c6142c(uVar5);
LAB_100eeeb54:
  *param_1 = param_2;
  return;
}



/* Entry: 100eeeb68; end: 100eeeba3;  */

void FUN_100eeeb68(long *param_1,long param_2)

{
  if (*(byte *)(param_2 + 0x10) - 1 < 3) {
    param_2 = 0;
  }
  else {
    FUN_100eec250();
  }
  *param_1 = param_2;
  return;
}



/* Entry: 100eeeba4; end: 100eeebff;  */

void FUN_100eeeba4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  func_0x000108b9a804();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar1 = 0;
    param_3 = -0x2000000000000000;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  *param_1 = lVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100eeec00; end: 100eeec0b;  */

undefined * FUN_100eeec00(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = FUN_100eeea3c;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_100eeea3c,0,PTR___sSSN_11034da80);
  func_0x000107c61574(param_1);
  puVar2 = PTR___sSSSQsWP_11034da98;
  func_0x000104884898(PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(pcVar1);
  return puVar2;
}



/* Entry: 100eeec0c; end: 100eeece7;  */

undefined8 FUN_100eeec0c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0;
  FUN_100ece968(0);
  pcVar2 = FUN_100eeea60;
  func_0x0001000bfde0(FUN_100eeea60,0,uVar1);
  func_0x000107c61574(param_1);
  FUN_100ecbadc();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return param_1;
}



/* Entry: 100eeece8; end: 100eeecf3;  */

undefined * FUN_100eeece8(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = FUN_100eeeba4;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_100eeeba4,0,PTR___sSSN_11034da80);
  func_0x000107c61574(param_1);
  puVar2 = PTR___sSSSQsWP_11034da98;
  func_0x000104884898(PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(pcVar1);
  return puVar2;
}



/* Entry: 100eeecf4; end: 100eeed5b;  */

undefined * FUN_100eeecf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,PTR___sSSN_11034da80);
  func_0x000107c61574(param_1);
  puVar1 = PTR___sSSSQsWP_11034da98;
  func_0x000104884898(PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(param_3);
  return puVar1;
}



/* Entry: 100eeed5c; end: 100eeee97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100eeed5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d49c08;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d49c08);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c53840(puVar3,param_2,1);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    func_0x000107c450a4(0x4048000000000000,0x4048000000000000);
    func_0x000107c61180();
    func_0x000107c55258(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100eeee98; end: 100eeef7b;  */

undefined * FUN_100eeee98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c5a100(puVar1);
  func_0x000107c59c74(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef18a40);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100eeef7c; end: 100eef3bf;  */

undefined * FUN_100eeef7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITextView_1126afb88);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c54400(puVar1);
  func_0x000107c58cd8(puVar1);
  func_0x000107c58dd4(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c59c7c(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
  puVar3 = puVar1;
  func_0x000107c5c83c(puVar1);
  func_0x000107c61180();
  func_0x000107c55f8c(0);
  func_0x000107c61170(puVar3);
  func_0x000107c59c74(puVar1);
  func_0x000107c53fcc(puVar1);
  lVar4 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  func_0x000107c61174();
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar5 = 0;
  func_0x000100ef0868(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  *(undefined **)(lVar4 + 0x28) = puVar2;
  lVar6 = lVar4;
  func_0x000100ecbca8(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000100ef0820((undefined8 *)(lVar4 + 0x20));
  uVar7 = 0;
  FUN_100eca28c(0);
  uVar5 = uVar7;
  FUN_100ecbdec();
  lVar4 = lVar6;
  func_0x000107c5f9dc(lVar6,uVar7,PTR___sypN_11034f1a8 + 8,uVar5);
  func_0x000107c6142c(lVar6);
  func_0x000107c55f98(puVar1);
  func_0x000107c61170(lVar4);
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef18a20);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  return puVar1;
}



/* Entry: 100eef3c0; end: 100eef46b;  */

undefined * FUN_100eef3c0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c59a2c(puVar1);
  func_0x000107c3d8b8(puVar1);
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef189d0);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  return puVar1;
}



/* Entry: 100eef46c; end: 100eef69b;  */

long FUN_100eef46c(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 100eef69c; end: 100eef6c3; -[_TtC30DeclaredAgeVerificationFeature32DeclaredAgeConsentViewController initWithCoder:] */

void FUN_100eef69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100ef08a8();
  return;
}



/* Entry: 100eef6c4; end: 100eefe0b;  */

/* WARNING: Possible PIC construction at 0x000100eef70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef8b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eef9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefa10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefa60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefa84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefb58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefb84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefbe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefc54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefcc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eefd74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eefd50) */
/* WARNING: Removing unreachable block (ram,0x000100eefd34) */
/* WARNING: Removing unreachable block (ram,0x000100eefccc) */
/* WARNING: Removing unreachable block (ram,0x000100eefe08) */
/* WARNING: Removing unreachable block (ram,0x000100eefd00) */
/* WARNING: Removing unreachable block (ram,0x000100eefca8) */
/* WARNING: Removing unreachable block (ram,0x000100eefc58) */
/* WARNING: Removing unreachable block (ram,0x000100eefe04) */
/* WARNING: Removing unreachable block (ram,0x000100eefc8c) */
/* WARNING: Removing unreachable block (ram,0x000100eefc34) */
/* WARNING: Removing unreachable block (ram,0x000100eefbec) */
/* WARNING: Removing unreachable block (ram,0x000100eefe00) */
/* WARNING: Removing unreachable block (ram,0x000100eefc18) */
/* WARNING: Removing unreachable block (ram,0x000100eefbb0) */
/* WARNING: Removing unreachable block (ram,0x000100eefb88) */
/* WARNING: Removing unreachable block (ram,0x000100eefb5c) */
/* WARNING: Removing unreachable block (ram,0x000100eefafc) */
/* WARNING: Removing unreachable block (ram,0x000100eefad8) */
/* WARNING: Removing unreachable block (ram,0x000100eefa88) */
/* WARNING: Removing unreachable block (ram,0x000100eefdfc) */
/* WARNING: Removing unreachable block (ram,0x000100eefabc) */
/* WARNING: Removing unreachable block (ram,0x000100eefa64) */
/* WARNING: Removing unreachable block (ram,0x000100eefa14) */
/* WARNING: Removing unreachable block (ram,0x000100eefdf8) */
/* WARNING: Removing unreachable block (ram,0x000100eefa48) */
/* WARNING: Removing unreachable block (ram,0x000100eef9f4) */
/* WARNING: Removing unreachable block (ram,0x000100eef99c) */
/* WARNING: Removing unreachable block (ram,0x000100eefdf4) */
/* WARNING: Removing unreachable block (ram,0x000100eef9d8) */
/* WARNING: Removing unreachable block (ram,0x000100eef97c) */
/* WARNING: Removing unreachable block (ram,0x000100eef92c) */
/* WARNING: Removing unreachable block (ram,0x000100eefdf0) */
/* WARNING: Removing unreachable block (ram,0x000100eef960) */
/* WARNING: Removing unreachable block (ram,0x000100eef90c) */
/* WARNING: Removing unreachable block (ram,0x000100eef8bc) */
/* WARNING: Removing unreachable block (ram,0x000100eefdec) */
/* WARNING: Removing unreachable block (ram,0x000100eef8f0) */
/* WARNING: Removing unreachable block (ram,0x000100eef89c) */
/* WARNING: Removing unreachable block (ram,0x000100eef84c) */
/* WARNING: Removing unreachable block (ram,0x000100eefde8) */
/* WARNING: Removing unreachable block (ram,0x000100eef880) */
/* WARNING: Removing unreachable block (ram,0x000100eef82c) */
/* WARNING: Removing unreachable block (ram,0x000100eef7a8) */
/* WARNING: Removing unreachable block (ram,0x000100eefde4) */
/* WARNING: Removing unreachable block (ram,0x000100eef810) */
/* WARNING: Removing unreachable block (ram,0x000100eef75c) */
/* WARNING: Removing unreachable block (ram,0x000100eefde0) */
/* WARNING: Removing unreachable block (ram,0x000100eef778) */
/* WARNING: Removing unreachable block (ram,0x000100eef710) */
/* WARNING: Removing unreachable block (ram,0x000100eefddc) */
/* WARNING: Removing unreachable block (ram,0x000100eef72c) */
/* WARNING: Removing unreachable block (ram,0x000100eefd78) */

void FUN_100eef6c4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = unaff_x20;
    func_0x000100eef5ec();
    func_0x000107c3d89c(unaff_x20,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100eefddc);
  (*pcVar1)();
}



/* Entry: 100eefe0c; end: 100ef00e3;  */

/* WARNING: Possible PIC construction at 0x000100eefef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eeff90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef002c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eeff94) */
/* WARNING: Removing unreachable block (ram,0x000100eefef8) */
/* WARNING: Removing unreachable block (ram,0x000100ef0030) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100eefe0c(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d49be8,*(undefined8 *)(unaff_x20 + _DAT_112d49be8 + 0x18))
  ;
  plVar1 = (long *)0x0;
  func_0x000100eee604();
  FUN_100eeec00();
  puVar2 = &UNK_1103665c8;
  func_0x000107c613fc(&UNK_1103665c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_100ef0800;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_100ef0800);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d49bf8),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 100ef00e4; end: 100ef0143; -[_TtC30DeclaredAgeVerificationFeature32DeclaredAgeConsentViewController viewDidLoad] */

void FUN_100ef00e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_100eef6c4();
  FUN_100eefe0c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef0144; end: 100ef01e3; -[_TtC30DeclaredAgeVerificationFeature32DeclaredAgeConsentViewController viewWillAppear:] */

void FUN_100ef0144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2,param_3);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c51d98();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef01e4; end: 100ef051b; -[_TtC30DeclaredAgeVerificationFeature32DeclaredAgeConsentViewController viewDidAppear:] */

void FUN_100ef01e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewDidAppear__112684bd0;
  uStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2,param_3);
  uVar1 = *(undefined4 *)PTR__UIAccessibilityScreenChangedNotification_110345908;
  uVar3 = param_1;
  func_0x000107c5de64(param_1);
  func_0x000107c61180();
  func_0x000107c60b98(uVar1,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ef051c; end: 100ef0583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef051c(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112d49c00) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d49c00) = 1;
    puVar1 = &DAT_112d49c28;
    FUN_100eef46c(&DAT_112d49c28,FUN_100eef3c0);
    func_0x000107c5a378();
    func_0x000107c61170(puVar1);
    func_0x0001002a64a8();
  }
  return;
}



/* Entry: 100ef0584; end: 100ef05ab; -[_TtC30DeclaredAgeVerificationFeature32DeclaredAgeConsentViewController handleContinueButtonTapped] */

void FUN_100ef0584(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ef051c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ef05ac; end: 100ef060b; -[_TtC30DeclaredAgeVerificationFeature32DeclaredAgeConsentViewController initWithNibName:bundle:] */

void FUN_100ef05ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DeclaredAgeVerificationFeature.DeclaredAgeConsentViewController",0x3f,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef05d8);
  (*pcVar1)();
}



/* Entry: 100ef060c; end: 100ef06c3; -[_TtC30DeclaredAgeVerificationFeature32DeclaredAgeConsentViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ef0658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef0678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef0698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef067c) */
/* WARNING: Removing unreachable block (ram,0x000100ef065c) */
/* WARNING: Removing unreachable block (ram,0x000100ef069c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef060c(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d49be8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d49bf0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d49bf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d49c08));
  return;
}



/* Entry: 100ef06c4; end: 100ef06e3;  */

void FUN_100ef06c4(void)

{
  func_0x000107c61168(&PTR_PTR_11279ed38);
  return;
}



/* Entry: 100ef06e4; end: 100ef07d7; -[_TtC30DeclaredAgeVerificationFeature32DeclaredAgeConsentViewController textView:shouldInteractWithURL:inRange:interaction:] */

undefined8
FUN_100ef06e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c5edb4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4)
  ;
  if (param_7 == 0) {
    puVar2 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
    func_0x000107c610f8(PTR__OBJC_CLASS___SFSafariViewController_1126d6d00);
    func_0x000107c61174(param_1);
    uVar3 = param_1;
    func_0x000107c5ed90();
    func_0x000107c48fbc(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c4f018(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
  }
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return 0;
}



/* Entry: 100ef07d8; end: 100ef07ff; -[_TtC30DeclaredAgeVerificationFeature32DeclaredAgeConsentViewController backgroundExitBehavior] */

void FUN_100ef07d8(void)

{
  func_0x000107c61168(PTR_PTR_1126aecb0);
  func_0x000107c4d60c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ef0800; end: 100ef081f;  */

void FUN_100ef0800(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000100eeee38();
    func_0x000107c61170(lVar2);
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c59c6c(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 100ef0820; end: 100ef08a7;  */

undefined8 FUN_100ef0820(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100ef08a8; end: 100ef09c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef08a8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112d49bf0;
  uVar3 = 0x112d49c68;
  func_0x0001000285a8(0x112d49c68,&UNK_10d9107b0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d49bf8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112d49c00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49c08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49c10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49c18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49c20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49c28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49c30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d49c38) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "DeclaredAgeVerificationFeature/DeclaredAgeConsentViewController.swift",0x45,2
                      ,0x75,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ef09c8);
  (*pcVar2)();
}



/* Entry: 100ef09c8; end: 100ef0ab3;  */

uint FUN_100ef09c8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar8 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  cVar4 = (char)param_2[2];
  bVar5 = (byte)param_1[2];
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      if (cVar4 == '\0') {
        uVar7 = 0;
        func_0x0001007bbbf8(0);
        func_0x000107c60118(uVar8,uVar1,uVar7);
        uVar6 = (uint)uVar8;
        goto LAB_100ef135c;
      }
    }
    else if (cVar4 == '\x01') {
      uVar6 = (uint)uVar1 ^ (uint)uVar8 ^ 1;
      goto LAB_100ef135c;
    }
  }
  else if (bVar5 == 2) {
    if (cVar4 == '\x02') {
      if (uVar2 == 0) goto LAB_100ef1348;
      if ((uVar3 != 0) &&
         (((uVar8 == uVar1 && (uVar2 == uVar3)) ||
          (func_0x000107c605b8(uVar8,uVar2,uVar1,uVar3,0), (uVar8 & 1) != 0)))) goto LAB_100ef134c;
    }
  }
  else if (uVar8 == 0 && uVar2 == 0) {
    if ((cVar4 == '\x03') && (uVar3 == 0 && uVar1 == 0)) {
LAB_100ef134c:
      uVar6 = 1;
      goto LAB_100ef135c;
    }
  }
  else if (uVar8 == 1 && uVar2 == 0) {
    if ((cVar4 == '\x03') && (uVar1 == 1)) {
LAB_100ef1348:
      if (uVar3 == 0) goto LAB_100ef134c;
    }
  }
  else if ((cVar4 == '\x03') && (uVar1 == 2)) goto LAB_100ef1348;
  uVar6 = 0;
LAB_100ef135c:
  return uVar6 & 1;
}



/* Entry: 100ef0ab4; end: 100ef0b4f;  */

void FUN_100ef0ab4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126af4a0;
  func_0x000107c610f8(PTR_PTR_1126af4a0);
  func_0x000107c4757c();
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar2 = param_1 + 0x60;
    func_0x000107c61618();
    func_0x000107c61574(param_1);
    if (lVar2 != 0) {
      func_0x000107c5da6c(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100ef0b50; end: 100ef0c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ef0b50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000285a8(0x112d49df0,&UNK_10d9106b8);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c(1);
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + _DAT_1130525a8);
  func_0x000103ff5678(uVar2);
  pcVar3 = *(code **)(lStack_48 + 8);
  func_0x000107c6157c(uVar1);
  (*pcVar3)(uVar2,1,0x100ef1644,uVar1,uStack_50,lStack_48);
  func_0x000107c6142c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(auStack_68);
  return uVar1;
}



/* Entry: 100ef0c38; end: 100ef0c93;  */

void FUN_100ef0c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = (undefined1)param_3;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x000100dd0978();
  func_0x000100087c34(&uStack_48);
  func_0x000100dd0920(param_1,param_2,param_3);
  return;
}



/* Entry: 100ef0c94; end: 100ef0cc7;  */

/* WARNING: Possible PIC construction at 0x000100ef0ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef0cac) */

void FUN_100ef0c94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100ef0cc8; end: 100ef0d2f;  */

void FUN_100ef0cc8(long param_1)

{
  undefined8 uVar1;
  
  func_0x000103dbf870();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x58));
  FUN_100ecd784(param_1 + 0x60);
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x78,7);
  return;
}



/* Entry: 100ef0d30; end: 100ef0dfb;  */

void FUN_100ef0d30(undefined8 param_1)

{
  if (lRam0000000112d49c98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e618544);
  return;
}



/* Entry: 100ef0dfc; end: 100ef0e4f;  */

void FUN_100ef0dfc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_100ef1368(&uStack_50,*param_2,param_2[1],*(undefined1 *)(param_2 + 2),*param_3,param_3[1],
                *(undefined1 *)(param_3 + 2));
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = CONCAT71(uStack_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,uStack_37);
  return;
}



/* Entry: 100ef0e50; end: 100ef0ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100ef0e50(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  if ((((char)param_1[2] < -0x40) &&
      ((char)param_1[2] == -0x80 && (*param_1 == 0 && param_1[1] == 0))) &&
     (*(long *)(unaff_x20 + 0x50) == 0)) {
    func_0x0001000285a8(0x112d49df0,&UNK_10d9106b8);
    func_0x000107c613fc();
    uVar1 = 1;
    func_0x00010008747c(1);
    func_0x000100083b20(auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + _DAT_1130525a8);
    func_0x000103ff5678(uVar2);
    pcVar3 = *(code **)(lStack_48 + 8);
    func_0x000107c6157c(uVar1);
    (*pcVar3)(uVar2,1,0x100ef1644,uVar1,uStack_50,lStack_48);
    func_0x000107c6142c(uVar2);
    func_0x000107c61574(uVar1);
    func_0x0001000834e4(auStack_68);
    return uVar1;
  }
  return 0;
}



/* Entry: 100ef0ffc; end: 100ef1027;  */

long FUN_100ef0ffc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100ef1028; end: 100ef1077;  */

void FUN_100ef1028(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  if (param_3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 100ef1078; end: 100ef113b;  */

undefined8 * FUN_100ef1078(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar3 = param_2[3];
  uVar1 = param_2[4];
  uVar2 = *(undefined1 *)(param_2 + 5);
  FUN_100ef1028(uVar3,uVar1,uVar2);
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = uVar2;
  return param_1;
}



/* Entry: 100ef113c; end: 100ef118f;  */

undefined8 * FUN_100ef113c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  func_0x000100ef1058(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100ef1190; end: 100ef1243;  */

int FUN_100ef1190(int *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfd;
  }
  bVar1 = *(byte *)(param_1 + 4);
  uVar3 = (uint)bVar1;
  if (bVar1 < 4) {
    uVar3 = 3;
  }
  iVar2 = uVar3 - 4;
  if (bVar1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100ef1244; end: 100ef1367;  */

uint FUN_100ef1244(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        uVar2 = 0;
        func_0x0001007bbbf8(0);
        func_0x000107c60118(param_1,param_4,uVar2);
        uVar1 = (uint)param_1;
        goto LAB_100ef135c;
      }
    }
    else if (param_6 == '\x01') {
      uVar1 = (uint)param_4 ^ (uint)param_1 ^ 1;
      goto LAB_100ef135c;
    }
  }
  else if (param_3 == 2) {
    if (param_6 == '\x02') {
      if (param_2 == 0) goto LAB_100ef1348;
      if ((param_5 != 0) &&
         (((param_1 == param_4 && (param_2 == param_5)) ||
          (func_0x000107c605b8(param_1,param_2,param_4,param_5,0), (param_1 & 1) != 0))))
      goto LAB_100ef134c;
    }
  }
  else if (param_1 == 0 && param_2 == 0) {
    if ((param_6 == '\x03') && (param_5 == 0 && param_4 == 0)) {
LAB_100ef134c:
      uVar1 = 1;
      goto LAB_100ef135c;
    }
  }
  else if (param_1 == 1 && param_2 == 0) {
    if ((param_6 == '\x03') && (param_4 == 1)) {
LAB_100ef1348:
      if (param_5 == 0) goto LAB_100ef134c;
    }
  }
  else if ((param_6 == '\x03') && (param_4 == 2)) goto LAB_100ef1348;
  uVar1 = 0;
LAB_100ef135c:
  return uVar1 & 1;
}



/* Entry: 100ef1368; end: 100ef14f3;  */

void FUN_100ef1368(undefined8 *param_1,ulong param_2,long param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined1 param_7)

{
  uint uVar1;
  bool bVar2;
  long unaff_x20;
  undefined1 uVar3;
  
  uVar1 = param_4 >> 6 & 3;
  if (uVar1 == 0) {
    if (1 < (param_4 & 0xff)) {
      if ((param_4 & 0xff) == 2) {
        func_0x000100dd0978(param_2,param_3,2);
      }
      else {
        func_0x000100dd0978(param_2,param_3,3);
      }
      uVar3 = 2;
      goto LAB_100ef14cc;
    }
    if ((param_4 & 0xff) != 0) {
      param_3 = 0;
      param_2 = param_2 & 1;
      uVar3 = 1;
      goto LAB_100ef14cc;
    }
    func_0x000100dd0978(param_2,param_3,0);
  }
  else {
    if (uVar1 == 1) {
      param_3 = 0;
      uVar3 = 2;
      if ((param_2 & 1) != 0) {
        uVar3 = 3;
      }
      param_2 = 0;
      goto LAB_100ef14cc;
    }
    if ((param_3 != 0 || param_2 != 0) || ((param_4 & 0xff) != 0x80)) {
      bVar2 = param_2 != 1;
      param_2 = 2;
      if (((param_4 & 0xff) != 0x80 || param_3 != 0) || bVar2) {
        param_2 = 0;
      }
      uVar3 = 3;
      param_3 = 0;
      goto LAB_100ef14cc;
    }
    param_2 = *(ulong *)(unaff_x20 + 0x50);
    if (param_2 == 0) {
      param_3 = 0;
      uVar3 = 3;
      param_2 = 1;
      goto LAB_100ef14cc;
    }
    func_0x000107c61174(param_2);
  }
  param_3 = 0;
  uVar3 = 0;
LAB_100ef14cc:
  *param_1 = param_5;
  param_1[1] = param_6;
  *(undefined1 *)(param_1 + 2) = param_7;
  param_1[3] = param_2;
  param_1[4] = param_3;
  *(undefined1 *)(param_1 + 5) = uVar3;
  return;
}



/* Entry: 100ef14f4; end: 100ef161f;  */

void FUN_100ef14f4(ulong param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 1) {
    if ((param_1 & 1) != 0) {
      pcVar3 = "effect(of:state:)";
      func_0x0001000c10c0("effect(of:state:)");
      func_0x000107c61180();
      puVar4 = &UNK_110366700;
      func_0x000107c613fc(&UNK_110366700,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      pcStack_40 = FUN_100ef1620;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_110366718;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c4e590(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar3);
    }
  }
  else if (uVar1 == 2) {
    if ((param_2 == 0 && param_1 == 0) && ((param_3 & 0xff) == 0x80)) {
      uVar2 = 10;
    }
    else {
      if (param_1 != 1) {
        return;
      }
      if (param_2 != 0) {
        return;
      }
      if ((param_3 & 0xff) != 0x80) {
        return;
      }
      uVar2 = 9;
    }
    FUN_100eee2f0(uVar2);
  }
  return;
}



/* Entry: 100ef1620; end: 100ef165b;  */

void FUN_100ef1620(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126af4a0;
  func_0x000107c610f8(PTR_PTR_1126af4a0);
  func_0x000107c4757c();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar3 = lVar2 + 0x60;
    func_0x000107c61618();
    func_0x000107c61574(lVar2);
    if (lVar3 != 0) {
      func_0x000107c5da6c(lVar3);
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100ef165c; end: 100ef16a3;  */

undefined8 * FUN_100ef165c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100ef16a4; end: 100ef16b7;  */

undefined8 * FUN_100ef16a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_100ef1028(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*(code *)0x100ef1058)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 100ef16b8; end: 100ef1717;  */

undefined8 *
FUN_100ef16b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*param_5)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 100ef1718; end: 100ef1723;  */

undefined8 * FUN_100ef1718(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*(code *)0x100ef1058)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100ef1724; end: 100ef1767;  */

undefined8 * FUN_100ef1724(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*param_4)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100ef1768; end: 100ef1847;  */

int FUN_100ef1768(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100ef1848; end: 100ef18f7;  */

void FUN_100ef1848(long *param_1,long param_2,long param_3)

{
  if (*(int *)(param_2 + 8) == 1) {
    func_0x000100ef6480();
  }
  else {
    func_0x000100ef654c();
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 100ef18f8; end: 100ef1947;  */

void FUN_100ef18f8(undefined8 param_1,long param_2)

{
  *(bool *)param_1 =
       (*(long *)(param_2 + 0x18) == 1 && *(long *)(param_2 + 0x20) == 0) &&
       *(char *)(param_2 + 0x28) == '\x03';
  return;
}



/* Entry: 100ef1948; end: 100ef19cf;  */

void FUN_100ef1948(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x28) != '\x02') {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    param_1[1] = *(long *)(param_2 + 0x20);
    *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(lVar1);
    return;
  }
  func_0x000108b9aaec();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar1 = 0;
    param_3 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  *param_1 = lVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100ef19d0; end: 100ef1a33;  */

void FUN_100ef19d0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  
  if (*(byte *)(param_2 + 0x28) < 3) {
    *param_1 = 0;
    return;
  }
  if (*(long *)(param_2 + 0x20) == 0 &&
      !CARRY8(*(long *)(param_2 + 0x20) - 1,(ulong)(1 < *(ulong *)(param_2 + 0x18)))) {
    *param_1 = 0;
    return;
  }
  puVar1 = PTR_PTR_1126af4a0;
  func_0x000107c610f8();
  func_0x000107c4757c();
  *param_1 = puVar1;
  return;
}



/* Entry: 100ef1a34; end: 100ef1a4f;  */

undefined * FUN_100ef1a34(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSSSQsWP_11034da98;
  puVar1 = PTR___sSSN_11034da80;
  pcVar2 = FUN_100ef1848;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_100ef1848,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 100ef1a50; end: 100ef1ae7;  */

undefined8 FUN_100ef1a50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0;
  func_0x000100ef1d20(0,0x112d48630,&PTR__OBJC_CLASS___NSAttributedString_1126af068);
  uVar2 = 0x100ef1880;
  func_0x0001000bfde0(0x100ef1880,0,uVar1);
  func_0x000107c61574(param_1);
  uVar1 = 0x112d48638;
  func_0x000100ef1d60(0x112d48638,0x112d48630,&PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000104884898();
  func_0x000107c61574(uVar2);
  return uVar1;
}



/* Entry: 100ef1ae8; end: 100ef1b57;  */

undefined * FUN_100ef1ae8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSSSQsWP_11034da98;
  puVar1 = PTR___sSSN_11034da80;
  uVar2 = 0x100ef18b0;
  func_0x000103dbf46c();
  func_0x0001000bfde0(0x100ef18b0,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(uVar2);
  return puVar3;
}



/* Entry: 100ef1b58; end: 100ef1bc7;  */

undefined8
FUN_100ef1b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,param_4);
  func_0x000107c61574(param_1);
  func_0x000104884898(param_5);
  func_0x000107c61574(param_3);
  return param_5;
}



/* Entry: 100ef1bc8; end: 100ef1c0f;  */

undefined8 FUN_100ef1bc8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = 0x112d35ff8;
  pcVar2 = FUN_100ef1948;
  func_0x000103dbf46c();
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x0001000bfde0(FUN_100ef1948,0,uVar1);
  func_0x000107c61574(param_1);
  FUN_100dd41f8();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return param_1;
}



/* Entry: 100ef1c10; end: 100ef1c97;  */

undefined8
FUN_100ef1c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  func_0x000103dbf46c();
  func_0x0001000285a8(param_3,param_4);
  func_0x0001000bfde0(param_5,0,param_3);
  func_0x000107c61574(param_1);
  (*param_6)();
  func_0x000104884898();
  func_0x000107c61574(param_5);
  return param_1;
}



/* Entry: 100ef1c98; end: 100ef1d9f;  */

void FUN_100ef1c98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112d49e00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d49df8;
  func_0x00010002969c(0x112d49df8,&UNK_10d910740);
  uVar2 = 0x112d49e08;
  func_0x000100ef1d60(0x112d49e08,0x112d49e10,&PTR_PTR_1126af4a0);
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112d49e00 = puVar3;
  return;
}



/* Entry: 100ef1da0; end: 100ef1edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ef1da0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d49e48;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d49e48);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c53840(puVar3,param_2,1);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    func_0x000107c450a4(0x4048000000000000,0x4048000000000000);
    func_0x000107c61180();
    func_0x000107c55258(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100ef1edc; end: 100ef1fbf;  */

undefined * FUN_100ef1edc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c5a100(puVar1);
  func_0x000107c59c74(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef18bd0);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100ef1fc0; end: 100ef2053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ef1fc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d49e58;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d49e58);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c56ba8(puVar3,param_2,0);
    func_0x000107c59c74(puVar3,param_2,1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100ef2054; end: 100ef21ab;  */

undefined * FUN_100ef2054(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c59a2c(puVar1);
  func_0x000107c3d8b8(puVar1);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef18ba0);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  return puVar1;
}



/* Entry: 100ef21ac; end: 100ef24f7;  */

undefined * FUN_100ef21ac(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = 0x112d360b0;
  FUN_100ef41f0(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 7;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  lVar2 = lVar1;
  FUN_100ef1da0();
  *(long *)(lVar1 + 0x20) = lVar2;
  func_0x000100ef1e7c();
  *(long *)(lVar1 + 0x28) = lVar2;
  FUN_100ef1fc0();
  *(long *)(lVar1 + 0x30) = lVar2;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar4 = 0;
  FUN_100ef4278(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,uVar4);
  func_0x000107c61574(lVar1);
  func_0x000107c45784(puVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c5a050(puVar3);
  func_0x000107c52b2c(puVar3);
  func_0x000107c59594(0x4030000000000000,puVar3);
  func_0x000107c52610(puVar3);
  return puVar3;
}



/* Entry: 100ef24f8; end: 100ef251f; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController initWithCoder:] */

void FUN_100ef24f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100ef42b8();
  return;
}



/* Entry: 100ef2520; end: 100ef25bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef2520(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d49e40);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar2);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ef25bc; end: 100ef266b; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef25bc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112d49e40);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    func_0x000107c41570(puVar2);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ef266c; end: 100ef2763; -[_TtC30DeclaredAgeVerificationFeature35DeclaredAgeIneligibleViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ef2698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef26e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef272c) */
/* WARNING: Removing unreachable block (ram,0x000100ef270c) */
/* WARNING: Removing unreachable block (ram,0x000100ef26ec) */
/* WARNING: Removing unreachable block (ram,0x000100ef269c) */
/* WARNING: Removing unreachable block (ram,0x000100ef274c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef266c(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d49e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d49e20));
  return;
}



/* Entry: 100ef2764; end: 100ef288f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef2764(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  FUN_100ef2890();
  FUN_100ef2fa4();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168();
  func_0x000107c41570();
  func_0x000107c61180();
  puVar2 = &UNK_110366860;
  func_0x000107c613fc(&UNK_110366860,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_50 = FUN_100ef410c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100ef35e4;
  puStack_58 = &UNK_110366878;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  puVar2 = puVar1;
  func_0x000107c3d7c4();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d49e40);
  *(undefined **)(unaff_x20 + _DAT_112d49e40) = puVar2;
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 100ef2890; end: 100ef2fa3;  */

/* WARNING: Possible PIC construction at 0x000100ef28dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef2f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef2ee4) */
/* WARNING: Removing unreachable block (ram,0x000100ef2ec8) */
/* WARNING: Removing unreachable block (ram,0x000100ef2e68) */
/* WARNING: Removing unreachable block (ram,0x000100ef2fa0) */
/* WARNING: Removing unreachable block (ram,0x000100ef2e9c) */
/* WARNING: Removing unreachable block (ram,0x000100ef2e44) */
/* WARNING: Removing unreachable block (ram,0x000100ef2df4) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f9c) */
/* WARNING: Removing unreachable block (ram,0x000100ef2e28) */
/* WARNING: Removing unreachable block (ram,0x000100ef2dd0) */
/* WARNING: Removing unreachable block (ram,0x000100ef2d80) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f98) */
/* WARNING: Removing unreachable block (ram,0x000100ef2db4) */
/* WARNING: Removing unreachable block (ram,0x000100ef2d44) */
/* WARNING: Removing unreachable block (ram,0x000100ef2d1c) */
/* WARNING: Removing unreachable block (ram,0x000100ef2cf0) */
/* WARNING: Removing unreachable block (ram,0x000100ef2ccc) */
/* WARNING: Removing unreachable block (ram,0x000100ef2c7c) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f94) */
/* WARNING: Removing unreachable block (ram,0x000100ef2cb0) */
/* WARNING: Removing unreachable block (ram,0x000100ef2c58) */
/* WARNING: Removing unreachable block (ram,0x000100ef2c08) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f90) */
/* WARNING: Removing unreachable block (ram,0x000100ef2c3c) */
/* WARNING: Removing unreachable block (ram,0x000100ef2be8) */
/* WARNING: Removing unreachable block (ram,0x000100ef2b90) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f8c) */
/* WARNING: Removing unreachable block (ram,0x000100ef2bcc) */
/* WARNING: Removing unreachable block (ram,0x000100ef2b70) */
/* WARNING: Removing unreachable block (ram,0x000100ef2b20) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f88) */
/* WARNING: Removing unreachable block (ram,0x000100ef2b54) */
/* WARNING: Removing unreachable block (ram,0x000100ef2b00) */
/* WARNING: Removing unreachable block (ram,0x000100ef2ab0) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f84) */
/* WARNING: Removing unreachable block (ram,0x000100ef2ae4) */
/* WARNING: Removing unreachable block (ram,0x000100ef2a90) */
/* WARNING: Removing unreachable block (ram,0x000100ef2a40) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f80) */
/* WARNING: Removing unreachable block (ram,0x000100ef2a74) */
/* WARNING: Removing unreachable block (ram,0x000100ef2a20) */
/* WARNING: Removing unreachable block (ram,0x000100ef2978) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f7c) */
/* WARNING: Removing unreachable block (ram,0x000100ef2a04) */
/* WARNING: Removing unreachable block (ram,0x000100ef292c) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f78) */
/* WARNING: Removing unreachable block (ram,0x000100ef2948) */
/* WARNING: Removing unreachable block (ram,0x000100ef28e0) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f74) */
/* WARNING: Removing unreachable block (ram,0x000100ef28fc) */
/* WARNING: Removing unreachable block (ram,0x000100ef2f0c) */

void FUN_100ef2890(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = unaff_x20;
    func_0x000100ef2448();
    func_0x000107c3d89c(unaff_x20,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef2f74);
  (*pcVar1)();
}



/* Entry: 100ef2fa4; end: 100ef34eb;  */

/* WARNING: Possible PIC construction at 0x000100ef308c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef3128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef31c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef3260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef32fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef3398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ef3434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ef339c) */
/* WARNING: Removing unreachable block (ram,0x000100ef3300) */
/* WARNING: Removing unreachable block (ram,0x000100ef3264) */
/* WARNING: Removing unreachable block (ram,0x000100ef31c8) */
/* WARNING: Removing unreachable block (ram,0x000100ef312c) */
/* WARNING: Removing unreachable block (ram,0x000100ef3090) */
/* WARNING: Removing unreachable block (ram,0x000100ef3438) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ef2fa4(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d49e18,*(undefined8 *)(unaff_x20 + _DAT_112d49e18 + 0x18))
  ;
  plVar1 = (long *)0x0;
  FUN_100ef0d30();
  FUN_100ef1a34();
  puVar2 = &UNK_110366860;
  func_0x000107c613fc(&UNK_110366860,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uVar3 = 0x100ef4130;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(0x100ef4130);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  uVar4 = uVar3;
  func_0x000107c614f0(uVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d49e38),uVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 100ef34ec; end: 100ef35e3;  */

void FUN_100ef34ec(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ef35e4);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 != 0) {
        func_0x000107c61170();
        puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
        func_0x000107c5a9c4();
        func_0x000107c61180();
        func_0x000107c51d98();
        func_0x000107c61170(puVar4);
      }
    }
  }
  return;
}



/* Entry: 100ef35e4; end: 100ef3687;  */

void FUN_100ef35e4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar3 = 0;
  func_0x000107c5ebac();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5eba0(puVar4,param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(puVar4);
  func_0x000107c61574(uVar2);
  (**(code **)(lVar5 + 8))(puVar4,lVar3);
  return;
}


