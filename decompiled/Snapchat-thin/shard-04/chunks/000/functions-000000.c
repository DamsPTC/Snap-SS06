/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f2b5d0; end: 102f2b67b;  */

void FUN_102f2b5d0(void)

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



/* Entry: 102f2b67c; end: 102f2b67f;  */

void FUN_102f2b67c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f29248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db650a0;
  func_0x000107c61520(&UNK_10db650a0,&UNK_1105e9d30);
  puRam0000000112f29248 = puVar1;
  return;
}



/* Entry: 102f2b680; end: 102f2b6bf;  */

void FUN_102f2b680(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f29248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db650a0;
  func_0x000107c61520(&UNK_10db650a0,&UNK_1105e9d30);
  puRam0000000112f29248 = puVar1;
  return;
}



/* Entry: 102f2b6c0; end: 102f2b823;  */

int FUN_102f2b6c0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102f2b73c;
        goto LAB_102f2b720;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102f2b720:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102f2b73c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102f2b824; end: 102f2b86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2b824(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f29250) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f2b870; end: 102f2b8cf; -[WelcomeBackInAppNotificationStatusServices init] */

void FUN_102f2b870(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WelcomeBackInAppNotificationServices.WelcomeBackInAppNotificationStatusServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f2b89c);
  (*pcVar1)();
}



/* Entry: 102f2b8d0; end: 102f2b8df; -[WelcomeBackInAppNotificationStatusServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2b8d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f29250));
  return;
}



/* Entry: 102f2b8e0; end: 102f2bc7b;  */

void FUN_102f2b8e0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined *puVar17;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100374e80();
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
  func_0x0001000285a8(0x112e4de18,&UNK_10db46090);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_b8);
  uVar9 = uStack_c0;
  func_0x000107c61174();
  uVar10 = uStack_c8;
  func_0x000107c61174();
  uVar11 = uStack_d0;
  func_0x000107c61174();
  uVar12 = uStack_d8;
  func_0x000107c61174();
  uVar13 = uStack_e0;
  func_0x000107c61174();
  uVar14 = uStack_e8;
  func_0x000107c61174();
  uVar15 = uStack_f0;
  func_0x000107c6157c();
  uVar16 = uVar15;
  func_0x00010017da58();
  puVar17 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar16);
  *(undefined **)(param_2 + 0x18) = puVar17;
  FUN_102f387dc(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000102f2d378(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uStack_b8,uVar9,
                      uVar10,uVar11,uVar12,uVar13,uVar14,puVar17);
  func_0x000107c61574();
  *(undefined8 *)(param_2 + 0x10) = uVar16;
  FUN_102f2dc3c();
  *(undefined8 *)(param_2 + 0x98) = uVar15;
  *param_1 = param_2;
  return;
}



/* Entry: 102f2bc7c; end: 102f2bcbf;  */

void FUN_102f2bc7c(void)

{
  long unaff_x20;
  
  FUN_102f2b8e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 102f2bcc0; end: 102f2bf17;  */

long FUN_102f2bcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  *(undefined8 *)(unaff_x20 + 0x88) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_16;
  func_0x0001000285a8(0x112e4de18,&UNK_10db46090);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c();
  uVar1 = param_17;
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_102f387dc(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000102f2d378(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,puVar2);
  func_0x000107c61574();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_102f2dc3c();
  *(undefined8 *)(unaff_x20 + 0x98) = param_17;
  return unaff_x20;
}



/* Entry: 102f2bf18; end: 102f2bfdb;  */

void FUN_102f2bf18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102f2bfdc; end: 102f2c02f;  */

void FUN_102f2bfdc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f2c030; end: 102f2c07b;  */

void FUN_102f2c030(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x98);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f2c07c; end: 102f2c0cf;  */

void FUN_102f2c07c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102f2c0d0; end: 102f2c1b3;  */

void FUN_102f2c0d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x00010037260c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x000102f3cd24(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000102f3cc50();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x000102f3cc78();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 102f2c1b4; end: 102f2c1bb;  */

void FUN_102f2c1b4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x00010037260c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x000102f3cd24(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000102f3cc50();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  func_0x000102f3cc78();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 102f2c1bc; end: 102f2c273;  */

long FUN_102f2c1bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000102f3cd24(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102f3cc50();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000102f3cc78();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 102f2c274; end: 102f2c2a7;  */

void FUN_102f2c274(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f2c2a8; end: 102f2c2fb;  */

void FUN_102f2c2a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f2c2fc; end: 102f2c347;  */

void FUN_102f2c2fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f2c348; end: 102f2c39b;  */

void FUN_102f2c348(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102f2c39c; end: 102f2c42f;  */

void FUN_102f2c39c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100324a78();
  func_0x000107c613fc();
  FUN_102f2c490(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102f2c430; end: 102f2c43b;  */

void FUN_102f2c430(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100324a78();
  func_0x000107c613fc();
  FUN_102f2c490(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f2c43c; end: 102f2c48f;  */

undefined8 FUN_102f2c43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102f2c490(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102f2c490; end: 102f2c56b;  */

void FUN_102f2c490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_102f55a2c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102f5532c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000102f55360();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102f2c56c; end: 102f2c5a7;  */

void FUN_102f2c56c(void)

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



/* Entry: 102f2c5a8; end: 102f2c5fb;  */

void FUN_102f2c5a8(undefined8 *param_1)

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



/* Entry: 102f2c5fc; end: 102f2c647;  */

void FUN_102f2c5fc(undefined8 *param_1)

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



/* Entry: 102f2c648; end: 102f2c69b;  */

void FUN_102f2c648(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102f2c69c; end: 102f2ca97;  */

long FUN_102f2c69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126ac830;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef857c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f114980);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_6);
    *(undefined **)(unaff_x20 + 0x48) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f2ca98);
  (*pcVar1)();
}



/* Entry: 102f2ca98; end: 102f2cb0b;  */

void FUN_102f2ca98(void)

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
  return;
}



/* Entry: 102f2cb0c; end: 102f2cb5b;  */

undefined8 FUN_102f2cb0c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f2cb5c; end: 102f2cba7;  */

undefined1  [16] FUN_102f2cb5c(void)

{
  return ZEXT816(0x1105ea0a0);
}



/* Entry: 102f2cba8; end: 102f2cc3b;  */

void FUN_102f2cba8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010032cb80();
  func_0x000107c613fc();
  FUN_102f2cc9c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102f2cc3c; end: 102f2cc47;  */

void FUN_102f2cc3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010032cb80();
  func_0x000107c613fc();
  FUN_102f2cc9c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102f2cc48; end: 102f2cc9b;  */

undefined8 FUN_102f2cc48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102f2cc9c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102f2cc9c; end: 102f2ce77;  */

void FUN_102f2cc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126ac838;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f063e20);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102f2ce78; end: 102f2ceb3;  */

void FUN_102f2ce78(void)

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



/* Entry: 102f2ceb4; end: 102f2cf07;  */

void FUN_102f2ceb4(undefined8 *param_1)

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



/* Entry: 102f2cf08; end: 102f2cf0f;  */

void FUN_102f2cf08(undefined8 *param_1)

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



/* Entry: 102f2cf10; end: 102f2cf5f;  */

undefined8 FUN_102f2cf10(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f2cf60; end: 102f2cfa3;  */

undefined1  [16] FUN_102f2cf60(void)

{
  return ZEXT816(0x1105ea168);
}



/* Entry: 102f2cfa4; end: 102f2cfcb;  */

void FUN_102f2cfa4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102f2cfcc; end: 102f2cfd3;  */

undefined8 FUN_102f2cfcc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102f2cfd4; end: 102f2d00b;  */

void FUN_102f2cfd4(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f2d00c; end: 102f2d6cf;  */

long FUN_102f2d00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long *plVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_17;
  *(undefined8 *)(unaff_x20 + 0x60) = param_16;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  *(undefined8 *)(unaff_x20 + 0x88) = param_15;
  puVar2 = &UNK_1105ea280;
  func_0x000107c613fc(&UNK_1105ea280,0x18,7);
  plVar8 = (long *)(puVar2 + 0x10);
  *plVar8 = 0;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_78 = FUN_102f2d6d0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  uStack_88 = 0x102f3cac4;
  puStack_80 = &UNK_1105ea298;
  ppuVar4 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  puVar1 = puStack_70;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x00010037515c(0);
  func_0x000107c610f8();
  func_0x000103b0fe08(puVar3,uVar5);
  *(undefined **)(unaff_x20 + 0x98) = puVar3;
  lVar6 = unaff_x20;
  func_0x000107c6157c();
  FUN_102f2d6f0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61428(plVar8,&puStack_98,1,0);
  lVar7 = *plVar8;
  *plVar8 = lVar6;
  func_0x000107c61170(lVar7);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  *(long *)(unaff_x20 + 0x90) = lVar6;
  func_0x000107c61174(lVar6);
  func_0x000107c61574(unaff_x20);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar5);
  return unaff_x20;
}



/* Entry: 102f2d6d0; end: 102f2d6ef;  */

void FUN_102f2d6d0(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102f2d6f0; end: 102f2dc07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102f2d6f0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *unaff_x20;
  undefined8 uVar18;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar17 = *unaff_x20;
  puVar2 = &UNK_1105ea428;
  func_0x000107c613fc(&UNK_1105ea428,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,0);
  puVar13 = &UNK_1105ea450;
  puVar3 = puVar13;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_1105ea478;
  func_0x000107c613fc(&UNK_1105ea478,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = puVar13;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar3 = &UNK_1105ea4a0;
  func_0x000107c613fc(&UNK_1105ea4a0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(code **)(puVar3 + 0x18) = FUN_102f3bd6c;
  *(undefined **)(puVar3 + 0x20) = puVar4;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102f3bd74;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x102f3cac8;
  puStack_88 = &UNK_1105ea4b8;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  puVar3 = puStack_78;
  func_0x000107c61580(puVar2,2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar8 = puVar13;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar10 = puVar13;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar10 + 0x10);
  puVar3 = &UNK_1105ea4f0;
  func_0x000107c613fc(&UNK_1105ea4f0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar10;
  *(undefined8 *)(puVar3 + 0x18) = 0x102f3bd80;
  *(undefined **)(puVar3 + 0x20) = puVar8;
  uStack_80 = 0x102f3bd88;
  puStack_a0 = puVar6;
  uStack_98 = 0x42000000;
  uStack_90 = 0x102f3cacc;
  puStack_88 = &UNK_1105ea508;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  puVar3 = puStack_78;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  uVar18 = unaff_x20[0x16];
  unaff_x20[0x16] = puVar9;
  puVar10 = puVar9;
  func_0x000107c61174();
  func_0x000107c61170(uVar18);
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = puVar13;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uStack_80 = 0x102f3bd94;
  puStack_a0 = puVar6;
  uStack_98 = 0x42000000;
  uStack_90 = 0x102f3cad0;
  puStack_88 = &UNK_1105ea530;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_78);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar6 = puVar13;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar3 = &UNK_1105ea568;
  func_0x000107c613fc(&UNK_1105ea568,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined8 *)(puVar3 + 0x18) = uVar17;
  puVar12 = puVar13;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar12 + 0x10);
  puVar6 = &UNK_1105ea590;
  func_0x000107c613fc(&UNK_1105ea590,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar12;
  *(undefined8 *)(puVar6 + 0x18) = uVar17;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar13 + 0x10);
  lVar14 = 0;
  FUN_102f3d0d8();
  lVar15 = lVar14;
  func_0x000107c610f8();
  *(undefined8 *)(lVar15 + _DAT_112f29b38) = 0;
  func_0x000107c61614(lVar15 + _DAT_112f29b40,0);
  *(undefined1 *)(lVar15 + _DAT_112f29b48) = 0;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112f29b50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(lVar15 + _DAT_112f29b58) = puVar5;
  *(undefined **)(lVar15 + _DAT_112f29b60) = puVar9;
  *(undefined **)(lVar15 + _DAT_112f29b68) = puVar11;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112f29b70);
  *puVar1 = 0x102f3bd9c;
  puVar1[1] = puVar3;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112f29b78);
  *puVar1 = 0x102f3bda4;
  puVar1[1] = puVar6;
  puVar1 = (undefined8 *)(lVar15 + _DAT_112f29b80);
  *puVar1 = 0x102f3bdac;
  puVar1[1] = puVar13;
  puVar9 = PTR_s_init_1125d9248;
  lStack_b0 = lVar15;
  lStack_a8 = lVar14;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar13);
  plVar16 = &lStack_b0;
  func_0x000107c61154(plVar16,puVar9);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar11);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar8);
  return plVar16;
}



/* Entry: 102f2dc08; end: 102f2dc3b;  */

void FUN_102f2dc08(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102f2dc3c; end: 102f2dc43;  */

void FUN_102f2dc3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102f2dc44; end: 102f2dd9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102f2dc44(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    lVar2 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112f29c68);
      uVar3 = ((undefined8 *)(lVar2 + _DAT_112f29c68))[1];
      func_0x000107c61434(uVar3);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      puVar1 = (undefined8 *)(param_2 + _DAT_112f29c40);
      func_0x000107c61428(puVar1,auStack_a0,0,0);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      func_0x000100d2c2cc(uVar5,uVar6);
      func_0x000107c61170(param_2);
    }
    FUN_102f2dda0(uVar4,uVar3,uVar5,uVar6);
    func_0x000100d2bf90(uVar5,uVar6);
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uVar3);
  }
  return uVar4;
}



/* Entry: 102f2dda0; end: 102f2e587;  */

undefined * FUN_102f2dda0(byte *param_1,byte *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte **ppbVar9;
  undefined *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined8 *unaff_x20;
  undefined *puVar15;
  long lVar16;
  uint uVar17;
  byte *pbStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  uVar13 = *unaff_x20;
  puVar4 = PTR_PTR_1126ac848;
  func_0x000107c610f8(PTR_PTR_1126ac848);
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126b0c98;
  func_0x000107c610f8(PTR_PTR_1126b0c98);
  func_0x000107c47f1c();
  lVar6 = unaff_x20[4];
  func_0x000107c439dc();
  func_0x000107c61180();
  lVar16 = lVar6;
  (**(code **)(lVar6 + 0x10))();
  func_0x000107c61180();
  func_0x000107c60bd0(lVar6);
  lVar6 = lVar16;
  func_0x000107c5c734(lVar16);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar16);
  func_0x000107c54c28(puVar4);
  func_0x000107c615e8(lVar6);
  uVar7 = unaff_x20[0xe];
  func_0x000107c51abc(uVar7);
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c569b4(puVar4);
  func_0x000107c61170(uVar8);
  uVar7 = unaff_x20[5];
  func_0x000107c4453c(uVar7);
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c54f88(puVar4);
  func_0x000107c615e8(uVar8);
  uVar8 = 0;
  func_0x000102f30148(0);
  func_0x000107c53e8c(puVar4);
  func_0x000107c615e8(uVar8);
  uVar8 = 0;
  FUN_102f3028c(0);
  func_0x000107c52604(puVar4);
  func_0x000107c615e8(uVar8);
  lVar6 = unaff_x20[3];
  func_0x000107c4d814();
  func_0x000107c61180();
  lVar16 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar16 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar16;
    func_0x000107c4c1dc(lVar16);
    func_0x000107c61180();
    func_0x000107c615e8(lVar16);
  }
  func_0x000107c56b20(puVar4);
  func_0x000107c615e8(lVar6);
  uVar7 = unaff_x20[0x12];
  puVar5 = &UNK_1105eaf90;
  func_0x000107c613fc(&UNK_1105eaf90,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar4);
  puVar15 = &UNK_1105eafb8;
  func_0x000107c613fc(&UNK_1105eafb8,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = uVar7;
  *(undefined **)(puVar15 + 0x18) = puVar5;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102f3c6f0;
  pbStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1105eafd0;
  ppbVar9 = &pbStack_a0;
  puStack_78 = puVar15;
  func_0x000107c60bc4(ppbVar9);
  puVar15 = puStack_78;
  uVar8 = uVar7;
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar15);
  func_0x000107c57194(puVar4);
  func_0x000107c60bd0(ppbVar9);
  puVar15 = &UNK_1105eb008;
  func_0x000107c613fc(&UNK_1105eb008,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = uVar7;
  *(undefined **)(puVar15 + 0x18) = puVar5;
  pcStack_80 = FUN_102f3c744;
  pbStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102f41a40;
  puStack_88 = &UNK_1105eb020;
  ppbVar9 = &pbStack_a0;
  puStack_78 = puVar15;
  func_0x000107c60bc4(ppbVar9);
  puVar15 = puStack_78;
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar15);
  func_0x000107c5420c(puVar4);
  func_0x000107c60bd0(ppbVar9);
  if (param_3 == 0) {
    puVar15 = &UNK_1105ea450;
    func_0x000107c613fc(&UNK_1105ea450,0x18,7);
    func_0x000107c61644(puVar15 + 0x10);
    puVar10 = &UNK_1105eb058;
    func_0x000107c613fc(&UNK_1105eb058,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar15;
    *(undefined8 *)(puVar10 + 0x18) = uVar13;
    pcStack_80 = FUN_102f3c74c;
    pbStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_102f30580;
    puStack_88 = &UNK_1105eb070;
    ppbVar9 = &pbStack_a0;
    puStack_78 = puVar10;
    func_0x000107c60bc4(ppbVar9);
    func_0x000107c61574(puStack_78);
    func_0x000107c57704(puVar4);
    func_0x000107c60bd0(ppbVar9);
  }
  else {
    puVar15 = &UNK_1105eb0d0;
    func_0x000107c613fc(&UNK_1105eb0d0,0x28,7);
    *(long *)(puVar15 + 0x10) = param_3;
    *(undefined8 *)(puVar15 + 0x18) = param_4;
    *(undefined8 *)(puVar15 + 0x20) = uVar13;
    pcStack_80 = FUN_102f3c7b4;
    pbStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_102f30580;
    puStack_88 = &UNK_1105eb0e8;
    ppbVar9 = &pbStack_a0;
    puStack_78 = puVar15;
    func_0x000107c60bc4(ppbVar9);
    puVar15 = puStack_78;
    func_0x000100d2c2cc(param_3,param_4);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar15);
    func_0x000107c57704(puVar4);
    func_0x000107c60bd0(ppbVar9);
    func_0x000100d2bf90(param_3,param_4);
  }
  puVar15 = (undefined *)0x0;
  if (param_2 == (byte *)0x0) goto LAB_102f2e47c;
  pbVar11 = (byte *)((ulong)param_1 & 0xffffffffffff);
  pbVar14 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar12 = pbVar11;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar12 = pbVar14;
  }
  if (pbVar12 == (byte *)0x0) goto LAB_102f2e45c;
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) != 0) {
      pbStack_a0 = param_1;
      uStack_98 = (ulong)param_2 & 0xffffffffffffff;
      uVar17 = (uint)param_1 & 0xff;
      if (uVar17 == 0x2b) {
        if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f2e588);
          (*pcVar3)();
        }
        pbVar14 = pbVar14 + -1;
        if (pbVar14 == (byte *)0x0) goto LAB_102f2e448;
        lVar16 = 0;
        pbVar12 = (byte *)((ulong)&pbStack_a0 | 1);
        do {
          if (((9 < *pbVar12 - 0x30) ||
              (lVar6 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar12 - 0x30), lVar16 = lVar6 + uVar1, SCARRY8(lVar6,uVar1)))
          goto LAB_102f2e448;
          uVar17 = 0;
          pbVar14 = pbVar14 + -1;
          pbVar12 = pbVar12 + 1;
        } while (pbVar14 != (byte *)0x0);
      }
      else if (uVar17 == 0x2d) {
        if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f2e580);
          (*pcVar3)();
        }
        pbVar14 = pbVar14 + -1;
        if (pbVar14 == (byte *)0x0) {
LAB_102f2e448:
          uVar17 = 1;
        }
        else {
          lVar16 = 0;
          pbVar12 = (byte *)((ulong)&pbStack_a0 | 1);
          do {
            if (((9 < *pbVar12 - 0x30) ||
                (lVar6 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*pbVar12 - 0x30), lVar16 = lVar6 - uVar1,
               SBORROW8(lVar6,uVar1))) goto LAB_102f2e448;
            uVar17 = 0;
            pbVar14 = pbVar14 + -1;
            pbVar12 = pbVar12 + 1;
          } while (pbVar14 != (byte *)0x0);
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) goto LAB_102f2e448;
        lVar16 = 0;
        ppbVar9 = &pbStack_a0;
        do {
          if (((9 < *(byte *)ppbVar9 - 0x30) ||
              (lVar6 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*(byte *)ppbVar9 - 0x30), lVar16 = lVar6 + uVar1,
             SCARRY8(lVar6,uVar1))) goto LAB_102f2e448;
          uVar17 = 0;
          pbVar14 = pbVar14 + -1;
          ppbVar9 = (byte **)((long)ppbVar9 + 1);
        } while (pbVar14 != (byte *)0x0);
      }
      goto LAB_102f2e450;
    }
    if (((ulong)param_1 >> 0x3c & 1) == 0) {
      func_0x000107c60358();
    }
    else {
      param_1 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = pbVar11;
    }
    if (*param_1 != 0x2b) {
      if (*param_1 != 0x2d) {
        if (param_2 == (byte *)0x0) goto LAB_102f2e45c;
        lVar16 = 0;
        pbVar12 = param_1;
        while (pbVar12 != (byte *)0x0) {
          if (((9 < *param_1 - 0x30) ||
              (lVar6 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*param_1 - 0x30), lVar16 = lVar6 + uVar1, SCARRY8(lVar6,uVar1)))
          goto LAB_102f2e45c;
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          pbVar12 = param_2;
        }
        goto LAB_102f2e464;
      }
      pbVar12 = param_2 + -1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f2e57c);
        (*pcVar3)();
      }
      if (pbVar12 != (byte *)0x0) {
        lVar16 = 0;
        do {
          param_1 = param_1 + 1;
          if (((9 < *param_1 - 0x30) ||
              (lVar6 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*param_1 - 0x30), lVar16 = lVar6 - uVar1, SBORROW8(lVar6,uVar1))
             ) goto LAB_102f2e45c;
          pbVar12 = pbVar12 + -1;
        } while (pbVar12 != (byte *)0x0);
        goto LAB_102f2e464;
      }
      goto LAB_102f2e45c;
    }
    pbVar12 = param_2 + -1;
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f2e584);
      (*pcVar3)();
    }
    if (pbVar12 == (byte *)0x0) goto LAB_102f2e45c;
    lVar16 = 0;
    do {
      param_1 = param_1 + 1;
      if (((9 < *param_1 - 0x30) ||
          (lVar6 = lVar16 * 10, SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
         (uVar1 = (ulong)(byte)(*param_1 - 0x30), lVar16 = lVar6 + uVar1, SCARRY8(lVar6,uVar1)))
      goto LAB_102f2e45c;
      pbVar12 = pbVar12 + -1;
    } while (pbVar12 != (byte *)0x0);
  }
  else {
    func_0x000107c61434(param_2);
    pbVar12 = param_2;
    func_0x000100fb6b80(param_1,param_2,10);
    uVar17 = (uint)pbVar12;
    func_0x000107c6142c(param_2);
LAB_102f2e450:
    if ((uVar17 & 0xff) == 1) {
LAB_102f2e45c:
      puVar15 = (undefined *)0x0;
      goto LAB_102f2e47c;
    }
  }
LAB_102f2e464:
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
LAB_102f2e47c:
  func_0x000107c543c8(puVar4);
  func_0x000107c61170(puVar15);
  puVar15 = &UNK_1105ea450;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar15 + 0x10);
  pcStack_80 = (code *)0x102f3c790;
  pbStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102f30bf4;
  puStack_88 = &UNK_1105eb098;
  ppbVar9 = &pbStack_a0;
  puStack_78 = puVar15;
  func_0x000107c60bc4(ppbVar9);
  func_0x000107c61574(puStack_78);
  func_0x000107c56d4c(puVar4);
  func_0x000107c60bd0(ppbVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(puVar5);
  return puVar4;
}



/* Entry: 102f2e588; end: 102f2e76b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102f2e588(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar4 = 0;
    FUN_102f455e4();
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112f29c48) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f29c50);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar4 + _DAT_112f29c58) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f29c60);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f29c68);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f29c40);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f29c70);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    lVar3 = _DAT_112f29c10;
    uVar5 = 0;
    func_0x000102f44670();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + lVar3) = uVar5;
    *(undefined1 *)(lVar4 + _DAT_112f29c18) = 1;
    *(undefined8 *)(lVar4 + _DAT_112f29c20) = 0;
    *(undefined8 *)(lVar4 + _DAT_112f29c28) = 1;
    *(undefined1 *)(lVar4 + _DAT_112f29c30) = 0;
    *(undefined8 *)(lVar4 + _DAT_112f29c38) = uVar6;
    uVar6 = 0;
    func_0x000102f44690();
    puVar2 = PTR_s_init_1125d9248;
    lStack_78 = lVar4;
    uStack_70 = uVar6;
    func_0x000107c6157c(param_3);
    plVar7 = &lStack_78;
    func_0x000107c61154(plVar7,puVar2);
    func_0x000107c61574(param_1);
    *(undefined1 *)((long)plVar7 + _DAT_112f29c30) = 1;
    func_0x000107c61428(param_4 + 0x10,auStack_90,1,0);
    func_0x000107c61604(param_4 + 0x10,plVar7);
  }
  return plVar7;
}



/* Entry: 102f2e76c; end: 102f2e7cf;  */

long FUN_102f2e76c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_102f2e7d0();
    func_0x000107c61574(param_1);
  }
  return lVar1;
}



/* Entry: 102f2e7d0; end: 102f2ef07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102f2e7d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  ppuVar11 = &puStack_90;
  ppuVar12 = &puStack_90;
  ppuVar14 = &puStack_90;
  ppuVar15 = &puStack_90;
  ppuVar16 = &puStack_90;
  ppuVar17 = &puStack_90;
  ppuVar18 = &puStack_90;
  ppuVar19 = &puStack_90;
  puVar1 = PTR_PTR_1126ac840;
  func_0x000107c610f8(PTR_PTR_1126ac840);
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_102f3028c(0);
  func_0x000107c52604(puVar1);
  func_0x000107c615e8(uVar2);
  uVar2 = 0;
  func_0x000102f3037c(0);
  func_0x000107c52188(puVar1);
  func_0x000107c615e8(uVar2);
  uVar2 = 0;
  func_0x000102f30148(0);
  func_0x000107c53e8c(puVar1);
  func_0x000107c615e8(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c5da38(uVar3);
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c5a3d0(puVar1);
  func_0x000107c615e8(uVar2);
  puVar4 = PTR_PTR_1126b0c98;
  func_0x000107c610f8(PTR_PTR_1126b0c98);
  func_0x000107c47f1c();
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c439dc();
  func_0x000107c61180();
  lVar9 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  func_0x000107c61180();
  func_0x000107c60bd0(lVar5);
  lVar5 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c54c28(puVar1);
  func_0x000107c615e8();
  FUN_102f3974c();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000107c40c00(uVar2);
    func_0x000107c61180();
    func_0x000107c5a2d8(puVar1);
    func_0x000107c615e8(uVar2);
    lVar6 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c3cfe0();
    func_0x000107c61180();
    lVar9 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar9 == 0) {
      lVar6 = 0;
    }
    else {
      puVar7 = &UNK_1105ea8d8;
      func_0x000107c613fc(&UNK_1105ea8d8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar5);
      pcStack_70 = FUN_102f3c11c;
      puStack_90 = puVar4;
      uStack_88 = 0x42000000;
      pcStack_80 = (code *)&UNK_100f11714;
      puStack_78 = &UNK_1105ea8f0;
      puStack_68 = puVar7;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      lVar6 = lVar9;
      func_0x000107c4c1e8(lVar9);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(lVar9);
    }
    func_0x000107c52188(puVar1);
    func_0x000107c61170(lVar5);
    func_0x000107c615e8(lVar6);
  }
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x88) + _DAT_113070f30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar9;
    func_0x000107c515c4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
  }
  func_0x000107c58b50(puVar1);
  func_0x000107c615e8(lVar5);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  puVar7 = &UNK_1105ea748;
  func_0x000107c613fc(&UNK_1105ea748,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,puVar1);
  puVar10 = &UNK_1105ea770;
  func_0x000107c613fc(&UNK_1105ea770,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar2;
  *(undefined **)(puVar10 + 0x18) = puVar7;
  pcStack_70 = FUN_102f3c040;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1000f6b44;
  puStack_78 = &UNK_1105ea788;
  puStack_68 = puVar10;
  func_0x000107c60bc4(&puStack_90);
  puVar10 = puStack_68;
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar10);
  func_0x000107c57194(puVar1);
  func_0x000107c60bd0(ppuVar11);
  puVar10 = &UNK_1105ea450;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar10 + 0x10);
  pcStack_70 = (code *)0x102f3c068;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x102f31120;
  puStack_78 = &UNK_1105ea7b0;
  puStack_68 = puVar10;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c56d38(puVar1);
  func_0x000107c60bd0(ppuVar12);
  lVar9 = *(long *)(unaff_x20 + 0xb0);
  if (lVar9 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 != 0) {
      func_0x000107c61170();
    }
  }
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  func_0x000107c546c8(puVar1);
  func_0x000107c61170(puVar10);
  puVar10 = &UNK_1105ea450;
  puVar13 = puVar10;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar13 + 0x10);
  pcStack_70 = FUN_102f3c0b8;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_100c75f50;
  puStack_78 = &UNK_1105ea7d8;
  puStack_68 = puVar13;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c56d48(puVar1);
  func_0x000107c60bd0(ppuVar14);
  puVar13 = puVar10;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar13 + 0x10);
  pcStack_70 = (code *)0x102f3c0c0;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102f31b94;
  puStack_78 = &UNK_1105ea800;
  puStack_68 = puVar13;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c56d74(puVar1);
  func_0x000107c60bd0(ppuVar15);
  puVar13 = puVar10;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar13 + 0x10);
  pcStack_70 = FUN_102f3c0c8;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102f328c4;
  puStack_78 = &UNK_1105ea828;
  puStack_68 = puVar13;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c57710(puVar1);
  func_0x000107c60bd0(ppuVar16);
  puVar13 = puVar10;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar13 + 0x10);
  pcStack_70 = (code *)0x102f3c0e8;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x102f32bf4;
  puStack_78 = &UNK_1105ea850;
  puStack_68 = puVar13;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c57714(puVar1);
  func_0x000107c60bd0(ppuVar17);
  puVar13 = puVar10;
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar13 + 0x10);
  pcStack_70 = FUN_102f3c10c;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102f331d4;
  puStack_78 = &UNK_1105ea878;
  puStack_68 = puVar13;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c56d6c(puVar1);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c613fc(&UNK_1105ea450,0x18,7);
  func_0x000107c61644(puVar10 + 0x10);
  pcStack_70 = (code *)0x102f3c114;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_102f34e24;
  puStack_78 = &UNK_1105ea8a0;
  puStack_68 = puVar10;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c56d70(puVar1);
  func_0x000107c60bd0(ppuVar19);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar7);
  return puVar1;
}



/* Entry: 102f2ef08; end: 102f2f09f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2ef08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar4 = 0;
    FUN_102f45610();
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112f29c78) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f29c80);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined **)(lVar4 + _DAT_112f29c88) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(lVar4 + _DAT_112f29c90) = 0;
    *(undefined8 *)(lVar4 + _DAT_112f29c98) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112f29ca0);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    lVar3 = _DAT_112f29c10;
    uVar5 = 0;
    func_0x000102f44670();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + lVar3) = uVar5;
    *(undefined1 *)(lVar4 + _DAT_112f29c18) = 1;
    *(undefined8 *)(lVar4 + _DAT_112f29c20) = 0;
    *(undefined8 *)(lVar4 + _DAT_112f29c28) = 1;
    *(undefined1 *)(lVar4 + _DAT_112f29c30) = 0;
    *(undefined8 *)(lVar4 + _DAT_112f29c38) = uVar7;
    uVar7 = 0;
    func_0x000102f44690();
    puVar2 = PTR_s_init_1125d9248;
    lStack_68 = lVar4;
    uStack_60 = uVar7;
    func_0x000107c6157c(param_3);
    plVar6 = &lStack_68;
    func_0x000107c61154(plVar6,puVar2);
    func_0x000107c61574(param_1);
    *(undefined8 *)((long)plVar6 + _DAT_112f29c28) = 1;
  }
  return;
}



/* Entry: 102f2f0a0; end: 102f2f1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2f0a0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar3 = 0;
    func_0x000102f45630();
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112f29ca8) = 0;
    *(undefined8 *)(lVar3 + _DAT_112f29cb0) = 0;
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f29cb8);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar2 = _DAT_112f29c10;
    uVar4 = 0;
    func_0x000102f44670();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + lVar2) = uVar4;
    *(undefined1 *)(lVar3 + _DAT_112f29c18) = 1;
    *(undefined8 *)(lVar3 + _DAT_112f29c20) = 0;
    *(undefined8 *)(lVar3 + _DAT_112f29c28) = 1;
    *(undefined1 *)(lVar3 + _DAT_112f29c30) = 0;
    *(undefined8 *)(lVar3 + _DAT_112f29c38) = uVar6;
    uVar6 = 0;
    func_0x000102f44690();
    plVar5 = &lStack_58;
    lStack_58 = lVar3;
    uStack_50 = uVar6;
    func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
    func_0x000107c61574(param_1);
    *(undefined8 *)((long)plVar5 + _DAT_112f29c28) = 0;
  }
  return;
}



/* Entry: 102f2f1e8; end: 102f2f32f;  */

void FUN_102f2f1e8(code *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + 0x38);
    func_0x000107c41044();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      puVar3 = &UNK_1105ea608;
      func_0x000107c613fc(&UNK_1105ea608,0x30,7);
      *(code **)(puVar3 + 0x10) = param_1;
      *(undefined8 *)(puVar3 + 0x18) = param_2;
      *(long *)(puVar3 + 0x20) = param_3;
      *(undefined8 *)(puVar3 + 0x28) = param_4;
      pcStack_68 = FUN_102f3c010;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_102f2f888;
      puStack_70 = &UNK_1105ea620;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_60;
      func_0x000107c6157c(param_2);
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar3);
      func_0x000107c43ff8(lVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(param_3);
      func_0x000107c615e8(lVar2);
      return;
    }
    func_0x000107c61574(param_3);
  }
  (*param_1)(0);
  return;
}



/* Entry: 102f2f330; end: 102f2f567;  */

/* WARNING: Possible PIC construction at 0x000102f2f390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f2f530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f2f394) */
/* WARNING: Removing unreachable block (ram,0x000102f2f534) */

void FUN_102f2f330(ulong param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  code *pcVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  if (param_1 == 0) {
    (*param_2)(0);
    return;
  }
  pcVar9 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
  }
  else {
    uVar2 = param_1;
    func_0x000107c5faec();
    uVar1 = uVar2 & 0xffffffffffff;
    if (((ulong)pcVar9 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pcVar9 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar3 = *(long *)(param_4 + 0x68);
      func_0x000107c5b4b0();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          uVar5 = 0;
          FUN_102f3bdb4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          puVar6 = &UNK_1105ea450;
          func_0x000107c613fc(&UNK_1105ea450,0x18,7);
          func_0x000107c61644(puVar6 + 0x10,param_4);
          puVar7 = &UNK_1105ea658;
          func_0x000107c613fc(&UNK_1105ea658,0x40,7);
          *(ulong *)(puVar7 + 0x10) = uVar2;
          *(code **)(puVar7 + 0x18) = pcVar9;
          *(code **)(puVar7 + 0x20) = param_2;
          *(undefined8 *)(puVar7 + 0x28) = param_3;
          *(undefined **)(puVar7 + 0x30) = puVar6;
          *(undefined8 *)(puVar7 + 0x38) = param_5;
          uStack_70 = 0x102f3c01c;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_101043a98;
          puStack_78 = &UNK_1105ea670;
          puStack_68 = puVar7;
          func_0x000107c60bc4(&puStack_90);
          puVar6 = puStack_68;
          func_0x000107c6157c(param_3);
          func_0x000107c61574(puVar6);
          func_0x000107c5b49c(lVar4);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(param_1);
          func_0x000107c61170(uVar5);
          return;
        }
      }
      func_0x000107c61170(param_1);
      FUN_102f2f568(uVar2,pcVar9,0,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar9);
  return;
}



/* Entry: 102f2f568; end: 102f2f887;  */

/* WARNING: Possible PIC construction at 0x000102f2f614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f2f6b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f2f6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f2f5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f2f6b8) */
/* WARNING: Removing unreachable block (ram,0x000102f2f618) */
/* WARNING: Removing unreachable block (ram,0x000102f2f6dc) */
/* WARNING: Removing unreachable block (ram,0x000102f2f61c) */
/* WARNING: Removing unreachable block (ram,0x000102f2f6fc) */

void FUN_102f2f568(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126b1440;
    func_0x000107c610f8(PTR_PTR_1126b1440);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5a344(puVar1);
  }
  else {
    param_1 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c61174(param_3);
    func_0x000107c5d9b0(param_1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f2f888; end: 102f2f8d7;  */

void FUN_102f2f888(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102f2f8d8; end: 102f2fabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2f8d8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [24];
  long lStack_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c61428(param_5 + 0x10,auStack_e8,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 != 0) {
    lVar2 = *(long *)(param_5 + 0x78);
    func_0x000107c61174();
    func_0x000107c61574(param_5);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ff5e38);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&lStack_d0);
    func_0x000107c61574(uVar3);
    if (lStack_d0 != 0) {
      puVar1 = &UNK_1105ea5b8;
      func_0x000107c613fc(&UNK_1105ea5b8,0x20,7);
      *(code **)(puVar1 + 0x10) = param_3;
      *(undefined8 *)(puVar1 + 0x18) = param_4;
      lVar2 = 0x112f29a10;
      func_0x0001000285a8(0x112f29a10,&UNK_10db65c90);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x10) = 0x102f3bdf4;
      *(undefined **)(lVar2 + 0x18) = puVar1;
      puVar1 = &UNK_1105ea5e0;
      func_0x000107c613fc(&UNK_1105ea5e0,0x40,7);
      *(undefined8 *)(puVar1 + 0x18) = uStack_c8;
      *(long *)(puVar1 + 0x10) = lStack_d0;
      *(undefined8 *)(puVar1 + 0x20) = param_1;
      *(undefined8 *)(puVar1 + 0x28) = param_2;
      *(long *)(puVar1 + 0x30) = lVar2;
      *(undefined8 *)(puVar1 + 0x38) = param_6;
      func_0x000107c6157c(param_4);
      func_0x000107c615f0(lStack_d0);
      func_0x000107c61434(param_2);
      func_0x000107c6157c(lVar2);
      uVar3 = 3;
      func_0x0001001ca524(3,0,0x90,4,0,0,&UNK_10db65ca0,puVar1,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lStack_d0);
      func_0x000107c61574(lVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(uVar3);
      return;
    }
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  lStack_d0 = 0;
  (*param_3)(&lStack_d0);
  return;
}



/* Entry: 102f2fabc; end: 102f2fb5f;  */

void FUN_102f2fabc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x250) = param_6;
  func_0x000107c614f0(param_2);
  piVar3 = *(int **)(param_3 + 0x38);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 600) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102f2fb60;
                    /* WARNING: Could not recover jumptable at 0x000102f2fb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,param_4,param_5,0,param_2,param_3)
  ;
  return;
}



/* Entry: 102f2fb60; end: 102f2fbbb;  */

void FUN_102f2fb60(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x260) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 600));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f2fbbc;
  }
  else {
    pcVar1 = FUN_102f2fd2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f2fbbc; end: 102f2fc8b;  */

void FUN_102f2fbbc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  FUN_102f39b18(unaff_x22 + 0xe8,unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x0001012b6798(unaff_x22 + 0x10);
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x268) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2fc8c,uVar2,uVar3);
  return;
}



/* Entry: 102f2fc8c; end: 102f2fcfb;  */

void FUN_102f2fc8c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x250);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x268));
  pcVar1 = *(code **)(lVar2 + 0x10);
  func_0x000102f3bf50(unaff_x22 + 0xe8,unaff_x22 + 0x1d8);
  (*pcVar1)(unaff_x22 + 0x160);
  func_0x000102f3c8a8(unaff_x22 + 0x160,0x112f29a18,&UNK_10db65e20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2fcfc,0,0);
  return;
}



/* Entry: 102f2fcfc; end: 102f2fd2b;  */

void FUN_102f2fcfc(void)

{
  long unaff_x22;
  
  func_0x000102f3bf8c(unaff_x22 + 0xe8);
                    /* WARNING: Could not recover jumptable at 0x000102f2fd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f2fd2c; end: 102f2fdb7;  */

void FUN_102f2fd2c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x270) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f2fdb8,uVar2,uVar3);
  return;
}



/* Entry: 102f2fdb8; end: 102f2fe4b;  */

void FUN_102f2fdb8(void)

{
  long lVar1;
  long unaff_x22;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar1 = *(long *)(unaff_x22 + 0x250);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x270));
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  (**(code **)(lVar1 + 0x10))(&uStack_90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102f2fe1c,0,0);
  return;
}



/* Entry: 102f2fe4c; end: 102f3028b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f2fe4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar5 = param_2;
    func_0x000102f30148(param_2);
    func_0x000107c53e8c(param_1);
    func_0x000107c615e8(uVar5);
    uVar5 = param_2;
    FUN_102f3028c(param_2);
    func_0x000107c52604(param_1);
    func_0x000107c615e8(uVar5);
    func_0x000102f3037c(param_2);
    func_0x000107c52188(param_1);
    func_0x000107c615e8(param_2);
    lVar1 = *(long *)(param_3 + 0x18);
    func_0x000107c4d814();
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar4 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar4;
      func_0x000107c4c1dc(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c56b20(param_1);
    func_0x000107c615e8(lVar1);
    puVar2 = PTR_PTR_1126b0c98;
    func_0x000107c610f8(PTR_PTR_1126b0c98);
    func_0x000107c47f1c();
    lVar1 = *(long *)(param_3 + 0x20);
    func_0x000107c439dc();
    func_0x000107c61180();
    lVar4 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    func_0x000107c61180();
    func_0x000107c60bd0(lVar1);
    lVar1 = lVar4;
    func_0x000107c5c734(lVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c54c28(param_1);
    func_0x000107c615e8(lVar1);
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    func_0x000107c5da38(uVar3);
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c5a3d0(param_1);
    func_0x000107c615e8(uVar5);
    lVar4 = *(long *)(*(long *)(param_3 + 0x88) + _DAT_113070f30);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar4;
      func_0x000107c515c4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c58b50(param_1);
    func_0x000107c615e8(lVar1);
    uVar5 = *(undefined8 *)(param_3 + 0x50);
    func_0x000107c40c00(uVar5);
    func_0x000107c61180();
    func_0x000107c5a2d8(param_1);
    func_0x000107c615e8(uVar5);
    uVar3 = *(undefined8 *)(param_3 + 0x70);
    func_0x000107c51abc(uVar3);
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c569b4(param_1);
    func_0x000107c61170(uVar5);
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    func_0x000107c4453c(uVar3);
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c54f88(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102f3028c; end: 102f3046b;  */

void FUN_102f3028c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = param_1;
  if ((param_1 != 0) || (FUN_102f3974c(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(param_1);
    func_0x000107c4807c(puVar2,param_2,lVar1,1);
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c3dae4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c61174();
      func_0x000107c4c1e0(lVar4,param_2,puVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 102f3046c; end: 102f3057f;  */

void FUN_102f3046c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (param_3 != 0) {
    puVar1 = &UNK_1105eaea0;
    func_0x000107c613fc(&UNK_1105eaea0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_3);
    puVar2 = &UNK_1105eb170;
    func_0x000107c613fc(&UNK_1105eb170,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    uStack_50 = 0x102f3cadc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105eb188;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar1);
    func_0x0001000d76cc(&UNK_10db65af0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
  }
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    func_0x000107c57194();
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 102f30580; end: 102f3074b;  */

/* WARNING: Possible PIC construction at 0x000102f306ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3070c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3071c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f30710) */
/* WARNING: Removing unreachable block (ram,0x000102f306f0) */
/* WARNING: Removing unreachable block (ram,0x000102f30720) */

void FUN_102f30580(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined1 param_10)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_stack_00000010;
  long lStack_c0;
  undefined8 uStack_90;
  
  pcVar1 = *(code **)(param_4 + 0x20);
  uVar2 = *(undefined8 *)(param_4 + 0x28);
  uVar3 = param_5;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  if (param_9 == 0) {
    lStack_c0 = 0;
    uStack_90 = 0;
  }
  else {
    uStack_90 = uVar4;
    func_0x000107c5faec();
    lStack_c0 = param_9;
  }
  FUN_102f3bdb4(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c5fc54();
  if (in_stack_00000010 != 0) {
    func_0x000107c5faec();
  }
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  (*pcVar1)(param_1,param_2,param_3,param_5,uVar3,param_6,uVar4,param_7,param_8,lStack_c0,uStack_90,
            param_10);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102f3074c; end: 102f30a1b;  */

void FUN_102f3074c(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,byte param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,byte param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19,long param_20)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar2 = param_8;
  func_0x000102f3a434(param_8,param_9);
  if (SUB168(SEXT816(lVar2) * SEXT816(1000),8) != lVar2 * 1000 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30a08);
    (*pcVar1)();
  }
  func_0x000107c61428(param_20 + 0x10,auStack_90,0,0);
  param_20 = param_20 + 0x10;
  func_0x000107c61648();
  if (param_20 != 0) {
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30a0c);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30a10);
      (*pcVar1)();
    }
    if ((0x7fefffffffffffff < (ulong)ABS(param_2)) || (0x7fefffffffffffff < (ulong)ABS(param_3))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30a14);
      (*pcVar1)();
    }
    if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30a18);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30a1c);
      (*pcVar1)();
    }
    puVar3 = &UNK_1105ea450;
    func_0x000107c613fc(&UNK_1105ea450,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,param_20);
    puVar4 = &UNK_1105eb120;
    func_0x000107c613fc(&UNK_1105eb120,0xa0,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined8 *)(puVar4 + 0x20) = param_5;
    *(long *)(puVar4 + 0x28) = (long)param_2;
    *(undefined8 *)(puVar4 + 0x30) = param_6;
    *(undefined8 *)(puVar4 + 0x38) = param_7;
    *(long *)(puVar4 + 0x40) = lVar2 * 1000;
    *(undefined8 *)(puVar4 + 0x48) = param_18;
    *(undefined8 *)(puVar4 + 0x50) = param_19;
    puVar4[0x58] = param_16 & 1;
    *(long *)(puVar4 + 0x60) = (long)param_3;
    *(long *)(puVar4 + 0x68) = param_8;
    *(undefined8 *)(puVar4 + 0x70) = param_9;
    *(undefined8 *)(puVar4 + 0x78) = param_10;
    *(undefined8 *)(puVar4 + 0x80) = param_11;
    puVar4[0x88] = param_12 & 1;
    *(undefined8 *)(puVar4 + 0x90) = param_14;
    *(undefined8 *)(puVar4 + 0x98) = param_15;
    pcStack_a0 = FUN_102f3c8e8;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_1105eb138;
    ppuVar5 = &puStack_c0;
    puStack_98 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_98;
    func_0x000107c61434(param_11);
    func_0x000107c61434(param_14);
    func_0x000107c61174(param_15);
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_7);
    func_0x000107c61434(param_19);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    func_0x000107c61574(puVar3);
    func_0x0001000d76cc(&UNK_10db65af0,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(param_20);
  }
  return;
}



/* Entry: 102f30a1c; end: 102f30bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f30a1c(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
                  long param_13)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_13 + 0x10,auStack_88,0,0);
  param_13 = param_13 + 0x10;
  func_0x000107c61648();
  if (param_13 != 0) {
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30bdc);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30be0);
      (*pcVar1)();
    }
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30be4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30be8);
      (*pcVar1)();
    }
    if (((0x7fefffffffffffff < (ulong)ABS(param_1)) || (0x7fefffffffffffff < (ulong)ABS(param_2)))
       || (0x7fefffffffffffff < (ulong)ABS(param_3))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30bec);
      (*pcVar1)();
    }
    if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30bf0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f30bf4);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_13 + 0x98) + _DAT_112febe38);
    lStack_c8 = (long)param_1;
    lStack_b0 = (long)param_2;
    lStack_a8 = (long)param_3;
    uStack_a0 = param_10 & 1;
    uStack_90 = param_12;
    uStack_d8 = param_4;
    uStack_d0 = param_5;
    uStack_c0 = param_6;
    uStack_b8 = param_7;
    uStack_98 = param_11;
    func_0x000107c6157c(uVar2);
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_7);
    func_0x000107c61434(param_12);
    func_0x000107c5f1ec(&uStack_d8);
    func_0x000107c61574(uVar2);
    func_0x0001012bcff0(&uStack_d8);
    func_0x000107c61574(param_13);
  }
  return;
}



/* Entry: 102f30bf4; end: 102f30d0f;  */

/* WARNING: Possible PIC construction at 0x000102f30cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f30ce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f30cd4) */
/* WARNING: Removing unreachable block (ram,0x000102f30ce4) */

void FUN_102f30bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(param_4 + 0x20);
  uVar2 = *(undefined8 *)(param_4 + 0x28);
  uVar3 = param_5;
  func_0x000107c5faec(param_5);
  uVar4 = uVar3;
  func_0x000107c5faec(param_6);
  uVar5 = uVar4;
  func_0x000107c5faec(param_7);
  uVar6 = uVar5;
  func_0x000107c5faec(param_9);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_3,param_5,uVar3,param_6,uVar4,param_7,uVar5,param_8,param_9,uVar6)
  ;
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102f30d10; end: 102f30d47;  */

void FUN_102f30d10(long param_1)

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



/* Entry: 102f30d48; end: 102f30e23;  */

void FUN_102f30d48(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  if (param_1 != 0) {
    puVar1 = &UNK_1105eaea0;
    func_0x000107c613fc(&UNK_1105eaea0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    uStack_58 = param_4;
    uStack_50 = param_3;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x0001000d76cc(&UNK_10db65af0,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
  }
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c57194();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102f30e24; end: 102f31477;  */

void FUN_102f30e24(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,byte param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,byte param_16)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long in_stack_00000040;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(in_stack_00000040 + 0x10,auStack_90,0,0);
  in_stack_00000040 = in_stack_00000040 + 0x10;
  func_0x000107c61648();
  if (in_stack_00000040 != 0) {
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f31118);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f3111c);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f31120);
      (*pcVar1)();
    }
    if (param_6 == 0) {
      param_6 = 0;
      lVar7 = *(long *)(in_stack_00000040 + 0x90);
    }
    else {
      func_0x000107c4c0a8();
      lVar7 = *(long *)(in_stack_00000040 + 0x90);
    }
    if (lVar7 != 0) {
      puVar2 = &UNK_1105ea450;
      func_0x000107c613fc(&UNK_1105ea450,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,in_stack_00000040);
      puVar3 = &UNK_1105eae78;
      func_0x000107c613fc(&UNK_1105eae78,0x82,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = param_13;
      *(undefined8 *)(puVar3 + 0x20) = param_14;
      *(undefined8 *)(puVar3 + 0x28) = param_2;
      *(undefined8 *)(puVar3 + 0x30) = param_3;
      *(undefined8 *)(puVar3 + 0x38) = param_15;
      *(undefined8 *)(puVar3 + 0x40) = param_4;
      *(undefined8 *)(puVar3 + 0x48) = param_5;
      *(long *)(puVar3 + 0x50) = (long)param_1;
      *(long *)(puVar3 + 0x58) = param_6;
      *(undefined8 *)(puVar3 + 0x60) = param_7;
      *(undefined8 *)(puVar3 + 0x68) = param_8;
      *(undefined8 *)(puVar3 + 0x70) = param_9;
      *(undefined8 *)(puVar3 + 0x78) = param_10;
      puVar3[0x80] = param_11 & 1;
      puVar3[0x81] = param_16 & 1;
      puVar4 = &UNK_1105eaea0;
      func_0x000107c613fc(&UNK_1105eaea0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar7);
      puVar5 = &UNK_1105eaec8;
      func_0x000107c613fc(&UNK_1105eaec8,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(code **)(puVar5 + 0x18) = FUN_102f3c618;
      *(undefined **)(puVar5 + 0x20) = puVar3;
      uStack_a0 = 0x102f3c624;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1105eaee0;
      ppuVar6 = &puStack_c0;
      puStack_98 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar4 = puStack_98;
      func_0x000107c61434(param_10);
      func_0x000107c6157c(puVar3);
      func_0x000107c61174(lVar7);
      func_0x000107c6157c(puVar2);
      func_0x000107c61434(param_13);
      func_0x000107c61174(param_14);
      func_0x000107c61434(param_3);
      func_0x000107c61174(param_15);
      func_0x000107c61434(param_5);
      func_0x000107c61434(param_8);
      func_0x000107c61574(puVar4);
      func_0x0001000d76cc(&UNK_10db65af0,ppuVar6);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(lVar7);
      func_0x000107c61574(puVar3);
    }
    func_0x000107c61574(in_stack_00000040);
  }
  return;
}



/* Entry: 102f31478; end: 102f31563;  */

void FUN_102f31478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "createEventDetailContext()";
  func_0x0001000c10c0("createEventDetailContext()");
  func_0x000107c61180();
  puVar2 = &UNK_1105eae00;
  func_0x000107c613fc(&UNK_1105eae00,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_102f3c5bc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105eae18;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102f31564; end: 102f31623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f31564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_60;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x98);
    func_0x000107c61174();
    func_0x000107c61574(param_1);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112febe38);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    uStack_60 = 0x4000000000000000;
    uStack_98 = param_2;
    uStack_90 = param_3;
    func_0x000107c61434(param_3);
    func_0x000107c5f1ec(&uStack_98);
    func_0x000107c61574(uVar2);
    func_0x0001012bcff0(&uStack_98);
  }
  return;
}



/* Entry: 102f31624; end: 102f31803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f31624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_7 + 0x10,auStack_68,0,0);
  param_7 = param_7 + 0x10;
  func_0x000107c61648();
  if (param_7 != 0) {
    lVar2 = *(long *)(param_7 + 0x78);
    func_0x000107c61174();
    func_0x000107c61574(param_7);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ff5e38);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&lStack_80);
    func_0x000107c61574(uVar3);
    if (lStack_80 != 0) {
      puVar1 = &UNK_1105eadb0;
      func_0x000107c613fc(&UNK_1105eadb0,0x20,7);
      *(code **)(puVar1 + 0x10) = param_5;
      *(undefined8 *)(puVar1 + 0x18) = param_6;
      lVar2 = 0x112f29a30;
      func_0x0001000285a8(0x112f29a30,&UNK_10db65cf0);
      func_0x000107c613fc();
      *(code **)(lVar2 + 0x10) = FUN_102f3c500;
      *(undefined **)(lVar2 + 0x18) = puVar1;
      puVar1 = &UNK_1105eadd8;
      func_0x000107c613fc(&UNK_1105eadd8,0x48,7);
      *(undefined8 *)(puVar1 + 0x18) = uStack_78;
      *(long *)(puVar1 + 0x10) = lStack_80;
      *(undefined8 *)(puVar1 + 0x20) = param_1;
      *(undefined8 *)(puVar1 + 0x28) = param_2;
      *(undefined8 *)(puVar1 + 0x30) = param_3;
      *(undefined8 *)(puVar1 + 0x38) = param_4;
      *(long *)(puVar1 + 0x40) = lVar2;
      func_0x000107c6157c(param_6);
      func_0x000107c615f0(lStack_80);
      func_0x000107c61434(param_2);
      func_0x000107c61434(param_4);
      func_0x000107c6157c(lVar2);
      uVar3 = 3;
      func_0x0001001ca524(3,0,0x90,4,0,0,&UNK_10db65d00,puVar1,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lStack_80);
      func_0x000107c61574(lVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(uVar3);
      return;
    }
  }
  (*param_5)(0,0);
  return;
}



/* Entry: 102f31804; end: 102f318a7;  */

void FUN_102f31804(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = param_8;
  *(undefined8 *)(unaff_x22 + 0x10) = param_6;
  func_0x000107c614f0(param_2);
  piVar3 = *(int **)(param_3 + 0x60);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102f318a8;
                    /* WARNING: Could not recover jumptable at 0x000102f318a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_4,param_5,0,0,param_2,param_3);
  return;
}



/* Entry: 102f318a8; end: 102f3190b;  */

void FUN_102f318a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_3;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f3190c;
  }
  else {
    pcVar1 = FUN_102f31a88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f3190c; end: 102f31a1b;  */

void FUN_102f3190c(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x10) + 1;
  pbVar6 = (byte *)(*(long *)(unaff_x22 + 0x30) + 0x40);
  do {
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x30));
      func_0x000107c6142c(uVar4);
      uVar4 = 0;
      uVar5 = 0;
      goto LAB_102f319a4;
    }
    uVar3 = *(ulong *)(pbVar6 + -0x10);
    bVar1 = *pbVar6;
  } while ((uVar3 != *(ulong *)(unaff_x22 + 0x10) ||
            *(long *)(pbVar6 + -8) != *(long *)(unaff_x22 + 0x18)) &&
          (func_0x000107c605b8(), pbVar6 = pbVar6 + 0x28, (uVar3 & 1) == 0));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c6142c(uVar4);
  uVar4 = *(undefined8 *)(&UNK_10db65d10 + (ulong)bVar1 * 8);
  uVar5 = *(undefined8 *)(&UNK_10db65d30 + (ulong)bVar1 * 8);
LAB_102f319a4:
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  uVar4 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  uVar4 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f31a1c,uVar5,uVar4);
  return;
}



/* Entry: 102f31a1c; end: 102f31a7f;  */

void FUN_102f31a1c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  uStack_38 = uVar3;
  uStack_30 = uVar1;
  (**(code **)(lVar2 + 0x10))(&uStack_38);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f31a80,0,0);
  return;
}



/* Entry: 102f31a80; end: 102f31a87;  */

void FUN_102f31a80(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102f31a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f31a88; end: 102f31b13;  */

void FUN_102f31a88(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f31b14,uVar2,uVar3);
  return;
}



/* Entry: 102f31b14; end: 102f31b93;  */

void FUN_102f31b14(void)

{
  long lVar1;
  long unaff_x22;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  uStack_28 = 0;
  uStack_20 = 0;
  (**(code **)(lVar1 + 0x10))(&uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102f31b64,0,0);
  return;
}



/* Entry: 102f31b94; end: 102f31c5f;  */

/* WARNING: Possible PIC construction at 0x000102f31c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f31c34) */

void FUN_102f31b94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c5faec(param_2);
  uVar5 = uVar4;
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4();
  puVar3 = &UNK_1105ead88;
  func_0x000107c613fc(&UNK_1105ead88,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar4,param_3,uVar5,FUN_102f3c4f8,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102f31c60; end: 102f325df;  */

void FUN_102f31c60(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if (param_1 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar17 = param_1;
    }
    func_0x000107c60480();
  }
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar17 != 0) {
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar14 = uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar14,0);
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f3204c);
      (*pcVar1)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar16 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar12 = puStack_c8;
        uVar5 = *puVar16;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar6 = uVar5;
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar7 = uVar6;
        func_0x000107c5faec();
        uVar4 = uVar14;
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
        uVar3 = *(ulong *)(puVar12 + 0x10);
        uVar2 = uVar3 + 1;
        puStack_c8 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar3) {
          uVar4 = uVar2;
          func_0x000100403514(1 < *(ulong *)(puVar12 + 0x18),uVar2,1);
        }
        *(ulong *)(puStack_c8 + 0x10) = uVar2;
        *(undefined8 *)(puStack_c8 + uVar3 * 0x10 + 0x20) = uVar7;
        *(ulong *)(puStack_c8 + uVar3 * 0x10 + 0x28) = uVar14;
        uVar17 = uVar17 - 1;
        uVar14 = uVar4;
        puVar12 = puStack_c8;
        puVar16 = puVar16 + 1;
      } while (uVar17 != 0);
    }
    else {
      uVar14 = 0;
      do {
        puVar12 = puStack_c8;
        uVar2 = uVar14;
        uVar15 = param_1;
        FUN_102f45034();
        uVar3 = uVar2;
        func_0x000107c615f0();
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x000107c5faec();
        func_0x000107c615ec(uVar2,2);
        func_0x000107c61170(uVar3);
        uVar2 = *(ulong *)(puVar12 + 0x10);
        puStack_c8 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
          func_0x000100403514(1 < *(ulong *)(puVar12 + 0x18),uVar2 + 1,1);
        }
        uVar14 = uVar14 + 1;
        *(ulong *)(puStack_c8 + 0x10) = uVar2 + 1;
        *(ulong *)(puStack_c8 + uVar2 * 0x10 + 0x20) = uVar4;
        *(ulong *)(puStack_c8 + uVar2 * 0x10 + 0x28) = uVar15;
        puVar12 = puStack_c8;
      } while (uVar17 != uVar14);
    }
  }
  puVar8 = puVar12;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar12);
  func_0x000107c61428(param_9 + 0x10,auStack_80,0,0);
  lVar9 = param_9 + 0x10;
  func_0x000107c61648();
  if (lVar9 == 0) {
    func_0x000107c6142c(puVar8);
  }
  else {
    puVar12 = &UNK_1105ea450;
    puVar10 = puVar12;
    func_0x000107c613fc(&UNK_1105ea450,0x18,7);
    func_0x000107c61428(param_9 + 0x10,auStack_98,0,0);
    param_9 = param_9 + 0x10;
    func_0x000107c61648(param_9);
    func_0x000107c61644(puVar10 + 0x10,param_9);
    func_0x000107c61574(param_9);
    puVar11 = &UNK_1105eacc0;
    func_0x000107c613fc(&UNK_1105eacc0,0x40,7);
    *(long *)(puVar11 + 0x10) = param_5;
    *(undefined8 *)(puVar11 + 0x18) = param_6;
    *(undefined **)(puVar11 + 0x20) = puVar10;
    *(undefined8 *)(puVar11 + 0x28) = param_3;
    *(undefined8 *)(puVar11 + 0x30) = param_4;
    *(undefined **)(puVar11 + 0x38) = puVar8;
    func_0x000107c613fc(&UNK_1105ea450,0x18,7);
    func_0x000107c61644(puVar12 + 0x10,lVar9);
    puVar8 = &UNK_1105eace8;
    func_0x000107c613fc(&UNK_1105eace8,0x50,7);
    *(undefined **)(puVar8 + 0x10) = puVar12;
    *(undefined8 *)(puVar8 + 0x18) = param_7;
    *(undefined8 *)(puVar8 + 0x20) = param_8;
    *(ulong *)(puVar8 + 0x28) = param_1;
    *(undefined8 *)(puVar8 + 0x30) = param_2;
    puVar8[0x38] = param_5 != 0;
    puVar8[0x39] = 0;
    *(code **)(puVar8 + 0x40) = FUN_102f3c3fc;
    *(undefined **)(puVar8 + 0x48) = puVar11;
    pcStack_a8 = FUN_102f3c41c;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_1000f6b44;
    puStack_b0 = &UNK_1105ead00;
    ppuVar13 = &puStack_c8;
    puStack_a0 = puVar8;
    func_0x000107c60bc4(ppuVar13);
    puVar12 = puStack_a0;
    func_0x000100d2c2cc(param_5,param_6);
    func_0x000107c6157c(puVar10);
    func_0x000107c61434(param_4);
    func_0x000107c6157c(param_8);
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(puVar11);
    func_0x000107c61574(puVar12);
    func_0x0001000d76cc(&UNK_10db65af0,ppuVar13);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(lVar9);
    func_0x000107c61574(puVar11);
  }
  return;
}



/* Entry: 102f325e0; end: 102f32603;  */

void FUN_102f325e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_8;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f32604,0,0);
  return;
}



/* Entry: 102f32604; end: 102f326ff;  */

void FUN_102f32604(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  long unaff_x22;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x78) + 0x10) != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar2 = *(long *)(unaff_x22 + 0x88);
    func_0x000107c614f0(uVar6);
    piVar7 = *(int **)(lVar2 + 0x68);
    iVar1 = *piVar7;
    plVar4 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102f32700;
                    /* WARNING: Could not recover jumptable at 0x000102f32688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))
              (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),
               *(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x78),uVar6,
               *(undefined8 *)(unaff_x22 + 0x88));
    return;
  }
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar6;
  uVar6 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f3280c,uVar5,uVar6);
  return;
}



/* Entry: 102f32700; end: 102f3277f;  */

void FUN_102f32700(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
  if (unaff_x20 == 0) {
    func_0x000107c6142c(param_1);
    func_0x000107c6142c(param_2);
    pcVar1 = FUN_102f32780;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_102f3c97c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f32780; end: 102f3280b;  */

void FUN_102f32780(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f3280c,uVar2,uVar3);
  return;
}



/* Entry: 102f3280c; end: 102f328c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3280c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x60,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x98);
    func_0x000107c61174();
    func_0x000107c61574(lVar2);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112febe38);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar1);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x8000000000000000;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    func_0x000107c5f1ec();
    func_0x000107c61574(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f328c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f328c4; end: 102f32a23;  */

/* WARNING: Possible PIC construction at 0x000102f329f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f329fc) */

void FUN_102f328c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_102f3bdb4(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c5faec(param_4);
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar5 = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    puVar5 = &UNK_1105eac98;
    func_0x000107c613fc(&UNK_1105eac98,0x18,7);
    *(long *)(puVar5 + 0x10) = param_5;
    uVar6 = 0x102f3cae0;
  }
  func_0x000107c60bc4();
  puVar4 = &UNK_1105eac70;
  func_0x000107c613fc(&UNK_1105eac70,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_6;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3,param_4,uVar3,uVar6,puVar5,0x102f3ca74,puVar4);
  func_0x000107c61574(puVar4);
  func_0x000100d2bf90(uVar6,puVar5);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102f32a24; end: 102f32a7f;  */

void FUN_102f32a24(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102f3bdb4(0,0x112d67d90,&PTR_PTR_1126b1440);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f32a80; end: 102f32d3f;  */

void FUN_102f32a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_10 + 0x10,auStack_78,0,0);
  param_10 = param_10 + 0x10;
  func_0x000107c61648();
  if (param_10 != 0) {
    puVar1 = &UNK_1105ea450;
    func_0x000107c613fc(&UNK_1105ea450,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_10);
    puVar2 = &UNK_1105eaa40;
    func_0x000107c613fc(&UNK_1105eaa40,0x71,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_8;
    *(undefined8 *)(puVar2 + 0x20) = param_9;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x48) = param_1;
    *(undefined8 *)(puVar2 + 0x50) = param_2;
    *(undefined8 *)(puVar2 + 0x58) = param_3;
    *(undefined8 *)(puVar2 + 0x60) = param_4;
    *(undefined8 *)(puVar2 + 0x68) = param_5;
    puVar2[0x70] = 1;
    pcStack_88 = FUN_102f3c2d0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105eaa58;
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_80;
    func_0x000107c61434(param_5);
    func_0x000107c6157c(param_9);
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar1);
    func_0x0001000d76cc(&UNK_10db65af0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_10);
  }
  return;
}



/* Entry: 102f32d40; end: 102f32ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f32d40(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 != 0) {
    lVar2 = *(long *)(param_5 + 0x78);
    func_0x000107c61174();
    func_0x000107c61574(param_5);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ff5e38);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&lStack_70);
    func_0x000107c61574(uVar3);
    if (lStack_70 != 0) {
      puVar1 = &UNK_1105ea9f0;
      func_0x000107c613fc(&UNK_1105ea9f0,0x40,7);
      *(undefined8 *)(puVar1 + 0x18) = uStack_68;
      *(long *)(puVar1 + 0x10) = lStack_70;
      *(undefined8 *)(puVar1 + 0x20) = param_1;
      *(undefined8 *)(puVar1 + 0x28) = param_2;
      *(code **)(puVar1 + 0x30) = param_3;
      *(undefined8 *)(puVar1 + 0x38) = param_4;
      func_0x000107c615f0(lStack_70);
      func_0x000107c61434(param_2);
      func_0x000107c6157c(param_4);
      uVar3 = 3;
      func_0x0001001ca524(3,0,0x90,4,0,0,&UNK_10db65cc8,puVar1,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lStack_70);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(uVar3);
      return;
    }
  }
  (*param_3)(0,0xe000000000000000);
  return;
}


