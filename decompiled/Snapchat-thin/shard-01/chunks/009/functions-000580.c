/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015c95e8; end: 1015c960f;  */

void FUN_1015c95e8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1015c9610; end: 1015c96bb;  */

void FUN_1015c9610(void)

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



/* Entry: 1015c96bc; end: 1015c96cf;  */

bool FUN_1015c96bc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1015c96d0; end: 1015c9717;  */

void FUN_1015c96d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d966fb0,0x33,2);
  uRam0000000113800b40 = uStack_38;
  uRam0000000113800b38 = uStack_40;
  uRam0000000113800b50 = uStack_28;
  uRam0000000113800b48 = uStack_30;
  uRam0000000113800b60 = uStack_18;
  uRam0000000113800b58 = uStack_20;
  return;
}



/* Entry: 1015c9718; end: 1015c9743;  */

void FUN_1015c9718(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015c9744();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015c9784();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015c9744; end: 1015c97c3;  */

void FUN_1015c9744(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966ed0;
  func_0x000107c61520(&UNK_10d966ed0,&UNK_1103e3b28);
  puRam0000000112db8070 = puVar1;
  return;
}



/* Entry: 1015c97c4; end: 1015c97c7;  */

void FUN_1015c97c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db8080 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db8088;
  func_0x00010002969c(0x112db8088,&UNK_10d966e58);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db8080 = puVar2;
  return;
}



/* Entry: 1015c97c8; end: 1015c9817;  */

void FUN_1015c97c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db8080 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db8088;
  func_0x00010002969c(0x112db8088,&UNK_10d966e58);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db8080 = puVar2;
  return;
}



/* Entry: 1015c9818; end: 1015c981b;  */

void FUN_1015c9818(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966f10;
  func_0x000107c61520(&UNK_10d966f10,&UNK_1103e3b28);
  puRam0000000112db8090 = puVar1;
  return;
}



/* Entry: 1015c981c; end: 1015c985b;  */

void FUN_1015c981c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d966f10;
  func_0x000107c61520(&UNK_10d966f10,&UNK_1103e3b28);
  puRam0000000112db8090 = puVar1;
  return;
}



/* Entry: 1015c985c; end: 1015c98fb;  */

/* WARNING: Possible PIC construction at 0x0001015c98a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015c98b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015c98ac) */
/* WARNING: Removing unreachable block (ram,0x0001015c98bc) */

void FUN_1015c985c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8068 != -1) {
    func_0x000107c61568(0x112db8068,FUN_1015c96d0);
  }
  uVar5 = uRam0000000113800b60;
  uVar4 = uRam0000000113800b58;
  uVar3 = uRam0000000113800b50;
  uVar2 = uRam0000000113800b48;
  uVar1 = uRam0000000113800b40;
  *param_1 = uRam0000000113800b38;
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



/* Entry: 1015c98fc; end: 1015c999b;  */

int FUN_1015c98fc(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1015c999c; end: 1015c99eb;  */

undefined8 FUN_1015c999c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db8098;
  func_0x0001000285a8(0x112db8098,&UNK_10d966ff0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1015c99ec; end: 1015c9a33;  */

void FUN_1015c99ec(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d967130,0x36,2);
  uRam0000000113800b70 = uStack_38;
  uRam0000000113800b68 = uStack_40;
  uRam0000000113800b80 = uStack_28;
  uRam0000000113800b78 = uStack_30;
  uRam0000000113800b90 = uStack_18;
  uRam0000000113800b88 = uStack_20;
  return;
}



/* Entry: 1015c9a34; end: 1015c9b37;  */

void FUN_1015c9a34(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1015cabb8();
LAB_1015c9abc:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1015cabb8();
          goto LAB_1015c9abc;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          FUN_1015c9d14();
          goto LAB_1015c9abc;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015c9b38; end: 1015c9c03;  */

void FUN_1015c9b38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    FUN_1015c9d14();
    (*pcVar2)(&lStack_50,1,&UNK_11065dc68,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_1015c9c04();
  if (unaff_x21 == 0) {
    FUN_1015c9c8c();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 1015c9c04; end: 1015c9c8b;  */

void FUN_1015c9c04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x30);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,2,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015c9c8c; end: 1015c9d13;  */

void FUN_1015c9c8c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x58);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,3,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015c9d14; end: 1015c9d53;  */

void FUN_1015c9d14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db80a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd1198;
  func_0x000107c61520(&DAT_10dbd1198,&UNK_11065dc68);
  puRam0000000112db80a8 = puVar1;
  return;
}



/* Entry: 1015c9d54; end: 1015c9da3;  */

uint FUN_1015c9d54(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_218 [40];
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 < 4) {
      if (lVar4 < 2) {
        if (lVar4 == 0) {
          if (lVar3 != 0) {
            return 0;
          }
        }
        else if (lVar3 != 1) {
          return 0;
        }
      }
      else if (lVar4 == 2) {
        if (lVar3 != 2) {
          return 0;
        }
      }
      else if (lVar3 != 3) {
        return 0;
      }
    }
    else if (lVar4 < 6) {
      if (lVar4 == 4) {
        if (lVar3 != 4) {
          return 0;
        }
      }
      else if (lVar3 != 5) {
        return 0;
      }
    }
    else if (lVar4 == 6) {
      if (lVar3 != 6) {
        return 0;
      }
    }
    else if (lVar3 != 7) {
      return 0;
    }
  }
  else if (lVar3 != lVar4) {
    return 0;
  }
  lVar7 = param_1[5];
  lVar4 = param_1[4];
  lVar6 = param_1[7];
  lVar5 = param_1[6];
  lVar3 = param_1[8];
  lStack_1c0 = param_2[5];
  lStack_1c8 = param_2[4];
  lStack_1b0 = param_2[7];
  lStack_1b8 = param_2[6];
  lStack_1a8 = param_2[8];
  lStack_140 = lStack_1c8;
  lStack_138 = lStack_1c0;
  lStack_130 = lStack_1b8;
  lStack_128 = lStack_1b0;
  lStack_120 = lStack_1a8;
  lStack_110 = lVar4;
  lStack_108 = lVar7;
  lStack_100 = lVar5;
  lStack_f8 = lVar6;
  lStack_f0 = lVar3;
  if (lVar5 == 0) {
    if (lStack_1b8 != 0) goto LAB_1015ca2c4;
    FUN_1015c999c(&lStack_110,&lStack_1f0);
    FUN_1015c999c(&lStack_140,&lStack_1f0);
    FUN_101553bdc(lVar4,lVar7,0,lVar6,lVar3);
LAB_1015ca34c:
    lVar8 = param_1[10];
    lVar7 = param_1[9];
    lVar12 = param_1[0xc];
    lVar11 = param_1[0xb];
    lVar3 = param_1[0xd];
    lVar9 = param_2[10];
    lVar5 = param_2[9];
    lVar10 = param_2[0xc];
    lVar6 = param_2[0xb];
    lVar4 = param_2[0xd];
    lStack_1a0 = lVar5;
    lStack_198 = lVar9;
    lStack_190 = lVar6;
    lStack_188 = lVar10;
    lStack_180 = lVar4;
    lStack_170 = lVar7;
    lStack_168 = lVar8;
    lStack_160 = lVar11;
    lStack_158 = lVar12;
    lStack_150 = lVar3;
    if (lVar11 == 0) {
      if (lVar6 != 0) goto LAB_1015ca454;
      FUN_1015c999c(&lStack_170,&lStack_1f0);
      FUN_1015c999c(&lStack_1a0,&lStack_1f0);
      FUN_101553bdc(lVar7,lVar8,0,lVar12,lVar3);
    }
    else {
      if (lVar6 == 0) {
LAB_1015ca454:
        lStack_1f0 = lVar7;
        lStack_1e8 = lVar8;
        lStack_1e0 = lVar11;
        lStack_1d8 = lVar12;
        lStack_1d0 = lVar3;
        lStack_1c8 = lVar5;
        lStack_1c0 = lVar9;
        lStack_1b8 = lVar6;
        lStack_1b0 = lVar10;
        lStack_1a8 = lVar4;
        FUN_1015c999c(&lStack_170,&lStack_e8);
        plVar2 = &lStack_1a0;
        lVar3 = -0xd8;
        goto LAB_1015ca47c;
      }
      lStack_1e8 = CONCAT71(lStack_1e8._1_7_,(char)lVar9);
      uStack_e0 = (undefined1)lVar8;
      lStack_1f0 = lVar5;
      lStack_1e0 = lVar6;
      lStack_1d8 = lVar10;
      lStack_1d0 = lVar4;
      lStack_e8 = lVar7;
      lStack_d8 = lVar11;
      lStack_d0 = lVar12;
      lStack_c8 = lVar3;
      FUN_1015c999c(&lStack_170,auStack_218);
      FUN_1015c999c(&lStack_1a0,auStack_218);
      plVar2 = &lStack_e8;
      func_0x00010368c758(plVar2,&lStack_1f0);
      FUN_101553bdc(lVar5,lVar9,lVar6,lVar10,lVar4);
      FUN_101553bdc(lVar7,lVar8,lVar11,lVar12,lVar3);
      if (((ulong)plVar2 & 1) == 0) goto LAB_1015ca488;
    }
    lVar3 = param_1[2];
    FUN_100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
    uVar1 = (uint)lVar3;
  }
  else {
    if (lStack_1b8 == 0) {
LAB_1015ca2c4:
      lStack_1f0 = lVar4;
      lStack_1e8 = lVar7;
      lStack_1e0 = lVar5;
      lStack_1d8 = lVar6;
      lStack_1d0 = lVar3;
      FUN_1015c999c(&lStack_110,&lStack_98);
      plVar2 = &lStack_140;
      lVar3 = -0x88;
LAB_1015ca47c:
      FUN_1015c999c(plVar2,&stack0xfffffffffffffff0 + lVar3);
      FUN_1015cab70(&lStack_1f0);
    }
    else {
      uStack_90 = (undefined1)lStack_1c0;
      uStack_b8 = (undefined1)lVar7;
      lStack_c0 = lVar4;
      lStack_b0 = lVar5;
      lStack_a8 = lVar6;
      lStack_a0 = lVar3;
      lStack_98 = lStack_1c8;
      lStack_88 = lStack_1b8;
      lStack_80 = lStack_1b0;
      lStack_78 = lStack_1a8;
      FUN_1015c999c(&lStack_110,&lStack_1f0);
      FUN_1015c999c(&lStack_140,&lStack_1f0);
      plVar2 = &lStack_c0;
      func_0x00010368c758(plVar2,&lStack_98);
      FUN_101553bdc(lStack_1c8,lStack_1c0,lStack_1b8,lStack_1b0,lStack_1a8);
      FUN_101553bdc(lVar4,lVar7,lVar5,lVar6,lVar3);
      if (((ulong)plVar2 & 1) != 0) goto LAB_1015ca34c;
    }
LAB_1015ca488:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 1015c9da4; end: 1015c9dd3;  */

undefined1  [16] FUN_1015c9da4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1015c9dd4; end: 1015c9e07;  */

void FUN_1015c9dd4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1015c9e08; end: 1015c9e1b;  */

undefined1  [16] FUN_1015c9e08(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1015c9e18;
  return auVar1;
}



/* Entry: 1015c9e1c; end: 1015c9e2f;  */

void FUN_1015c9e1c(void)

{
  FUN_1015c9a34();
  return;
}



/* Entry: 1015c9e30; end: 1015c9e77;  */

void FUN_1015c9e30(void)

{
  FUN_1015c9b38();
  return;
}



/* Entry: 1015c9e78; end: 1015c9e7b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015c9e78(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015c9e7c; end: 1015c9eb3;  */

uint FUN_1015c9e7c(long param_1,long param_2)

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
  FUN_1015cab30();
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



/* Entry: 1015c9eb4; end: 1015c9f1b;  */

uint FUN_1015c9eb4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_1015ca188(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1015c9f1c; end: 1015c9fbb;  */

/* WARNING: Possible PIC construction at 0x0001015c9f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015c9f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015c9f6c) */
/* WARNING: Removing unreachable block (ram,0x0001015c9f7c) */

void FUN_1015c9f1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db80a0 != -1) {
    func_0x000107c61568(0x112db80a0,FUN_1015c99ec);
  }
  uVar5 = uRam0000000113800b90;
  uVar4 = uRam0000000113800b88;
  uVar3 = uRam0000000113800b80;
  uVar2 = uRam0000000113800b78;
  uVar1 = uRam0000000113800b70;
  *param_1 = uRam0000000113800b68;
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



/* Entry: 1015c9fbc; end: 1015c9ff7;  */

void FUN_1015c9fbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db80c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db80c8,&UNK_10d967120);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015c9ff8; end: 1015ca123;  */

void FUN_1015c9ff8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015ca124; end: 1015ca187;  */

uint FUN_1015ca124(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_1015ca188(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1015ca188; end: 1015ca4f7;  */

uint FUN_1015ca188(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_218 [40];
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 < 4) {
      if (lVar4 < 2) {
        if (lVar4 == 0) {
          if (lVar3 != 0) {
            return 0;
          }
        }
        else if (lVar3 != 1) {
          return 0;
        }
      }
      else if (lVar4 == 2) {
        if (lVar3 != 2) {
          return 0;
        }
      }
      else if (lVar3 != 3) {
        return 0;
      }
    }
    else if (lVar4 < 6) {
      if (lVar4 == 4) {
        if (lVar3 != 4) {
          return 0;
        }
      }
      else if (lVar3 != 5) {
        return 0;
      }
    }
    else if (lVar4 == 6) {
      if (lVar3 != 6) {
        return 0;
      }
    }
    else if (lVar3 != 7) {
      return 0;
    }
  }
  else if (lVar3 != lVar4) {
    return 0;
  }
  lVar7 = param_1[5];
  lVar4 = param_1[4];
  lVar6 = param_1[7];
  lVar5 = param_1[6];
  lVar3 = param_1[8];
  lStack_1c0 = param_2[5];
  lStack_1c8 = param_2[4];
  lStack_1b0 = param_2[7];
  lStack_1b8 = param_2[6];
  lStack_1a8 = param_2[8];
  lStack_140 = lStack_1c8;
  lStack_138 = lStack_1c0;
  lStack_130 = lStack_1b8;
  lStack_128 = lStack_1b0;
  lStack_120 = lStack_1a8;
  lStack_110 = lVar4;
  lStack_108 = lVar7;
  lStack_100 = lVar5;
  lStack_f8 = lVar6;
  lStack_f0 = lVar3;
  if (lVar5 == 0) {
    if (lStack_1b8 != 0) goto LAB_1015ca2c4;
    FUN_1015c999c(&lStack_110,&lStack_1f0);
    FUN_1015c999c(&lStack_140,&lStack_1f0);
    FUN_101553bdc(lVar4,lVar7,0,lVar6,lVar3);
LAB_1015ca34c:
    lVar8 = param_1[10];
    lVar7 = param_1[9];
    lVar12 = param_1[0xc];
    lVar11 = param_1[0xb];
    lVar3 = param_1[0xd];
    lVar9 = param_2[10];
    lVar5 = param_2[9];
    lVar10 = param_2[0xc];
    lVar6 = param_2[0xb];
    lVar4 = param_2[0xd];
    lStack_1a0 = lVar5;
    lStack_198 = lVar9;
    lStack_190 = lVar6;
    lStack_188 = lVar10;
    lStack_180 = lVar4;
    lStack_170 = lVar7;
    lStack_168 = lVar8;
    lStack_160 = lVar11;
    lStack_158 = lVar12;
    lStack_150 = lVar3;
    if (lVar11 == 0) {
      if (lVar6 != 0) goto LAB_1015ca454;
      FUN_1015c999c(&lStack_170,&lStack_1f0);
      FUN_1015c999c(&lStack_1a0,&lStack_1f0);
      FUN_101553bdc(lVar7,lVar8,0,lVar12,lVar3);
    }
    else {
      if (lVar6 == 0) {
LAB_1015ca454:
        lStack_1f0 = lVar7;
        lStack_1e8 = lVar8;
        lStack_1e0 = lVar11;
        lStack_1d8 = lVar12;
        lStack_1d0 = lVar3;
        lStack_1c8 = lVar5;
        lStack_1c0 = lVar9;
        lStack_1b8 = lVar6;
        lStack_1b0 = lVar10;
        lStack_1a8 = lVar4;
        FUN_1015c999c(&lStack_170,&lStack_e8);
        plVar2 = &lStack_1a0;
        lVar3 = -0xd8;
        goto LAB_1015ca47c;
      }
      lStack_1e8 = CONCAT71(lStack_1e8._1_7_,(char)lVar9);
      uStack_e0 = (undefined1)lVar8;
      lStack_1f0 = lVar5;
      lStack_1e0 = lVar6;
      lStack_1d8 = lVar10;
      lStack_1d0 = lVar4;
      lStack_e8 = lVar7;
      lStack_d8 = lVar11;
      lStack_d0 = lVar12;
      lStack_c8 = lVar3;
      FUN_1015c999c(&lStack_170,auStack_218);
      FUN_1015c999c(&lStack_1a0,auStack_218);
      plVar2 = &lStack_e8;
      func_0x00010368c758(plVar2,&lStack_1f0);
      FUN_101553bdc(lVar5,lVar9,lVar6,lVar10,lVar4);
      FUN_101553bdc(lVar7,lVar8,lVar11,lVar12,lVar3);
      if (((ulong)plVar2 & 1) == 0) goto LAB_1015ca488;
    }
    lVar3 = param_1[2];
    FUN_100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
    uVar1 = (uint)lVar3;
  }
  else {
    if (lStack_1b8 == 0) {
LAB_1015ca2c4:
      lStack_1f0 = lVar4;
      lStack_1e8 = lVar7;
      lStack_1e0 = lVar5;
      lStack_1d8 = lVar6;
      lStack_1d0 = lVar3;
      FUN_1015c999c(&lStack_110,&lStack_98);
      plVar2 = &lStack_140;
      lVar3 = -0x88;
LAB_1015ca47c:
      FUN_1015c999c(plVar2,&stack0xfffffffffffffff0 + lVar3);
      FUN_1015cab70(&lStack_1f0);
    }
    else {
      uStack_90 = (undefined1)lStack_1c0;
      uStack_b8 = (undefined1)lVar7;
      lStack_c0 = lVar4;
      lStack_b0 = lVar5;
      lStack_a8 = lVar6;
      lStack_a0 = lVar3;
      lStack_98 = lStack_1c8;
      lStack_88 = lStack_1b8;
      lStack_80 = lStack_1b0;
      lStack_78 = lStack_1a8;
      FUN_1015c999c(&lStack_110,&lStack_1f0);
      FUN_1015c999c(&lStack_140,&lStack_1f0);
      plVar2 = &lStack_c0;
      func_0x00010368c758(plVar2,&lStack_98);
      FUN_101553bdc(lStack_1c8,lStack_1c0,lStack_1b8,lStack_1b0,lStack_1a8);
      FUN_101553bdc(lVar4,lVar7,lVar5,lVar6,lVar3);
      if (((ulong)plVar2 & 1) != 0) goto LAB_1015ca34c;
    }
LAB_1015ca488:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 1015ca4f8; end: 1015ca537;  */

void FUN_1015ca4f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db80b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967068;
  func_0x000107c61520(&UNK_10d967068,&UNK_1103e3cf0);
  puRam0000000112db80b0 = puVar1;
  return;
}



/* Entry: 1015ca538; end: 1015ca55b;  */

void FUN_1015ca538(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ca55c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015ca55c; end: 1015ca59b;  */

void FUN_1015ca55c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db80b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967040;
  func_0x000107c61520(&UNK_10d967040,&UNK_1103e3cf0);
  puRam0000000112db80b8 = puVar1;
  return;
}



/* Entry: 1015ca59c; end: 1015ca5c7;  */

void FUN_1015ca59c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ca4f8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015717bc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015ca5c8; end: 1015ca5cb;  */

void FUN_1015ca5c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db80c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9670a8;
  func_0x000107c61520(&UNK_10d9670a8,&UNK_1103e3cf0);
  puRam0000000112db80c0 = puVar1;
  return;
}



/* Entry: 1015ca5cc; end: 1015ca60b;  */

void FUN_1015ca5cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db80c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9670a8;
  func_0x000107c61520(&UNK_10d9670a8,&UNK_1103e3cf0);
  puRam0000000112db80c0 = puVar1;
  return;
}



/* Entry: 1015ca60c; end: 1015ca68f;  */

long FUN_1015ca60c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015ca690; end: 1015ca953;  */

undefined8 * FUN_1015ca690(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  func_0x00010006c00c(uVar2,uVar3);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar1 = param_2[6];
  if (lVar1 == 0) {
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    param_1[8] = param_2[8];
    lVar1 = param_2[0xb];
  }
  else {
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[6] = lVar1;
    uVar2 = param_2[7];
    uVar3 = param_2[8];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    lVar1 = param_2[0xb];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[0xd] = param_2[0xd];
  }
  else {
    param_1[9] = param_2[9];
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    param_1[0xb] = lVar1;
    uVar2 = param_2[0xc];
    uVar3 = param_2[0xd];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
  }
  return param_1;
}



/* Entry: 1015ca954; end: 1015caa53;  */

undefined8 * FUN_1015ca954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[6] != 0) {
    lVar3 = param_2[6];
    if (lVar3 != 0) {
      param_1[4] = param_2[4];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      param_1[6] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[7];
      uVar2 = param_1[8];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      lVar3 = param_1[0xb];
      goto joined_r0x0001015ca9ec;
    }
    func_0x000101553ad0(param_1 + 4);
  }
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar2;
  param_1[8] = param_2[8];
  lVar3 = param_1[0xb];
joined_r0x0001015ca9ec:
  if (lVar3 != 0) {
    lVar3 = param_2[0xb];
    if (lVar3 != 0) {
      param_1[9] = param_2[9];
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
      param_1[0xb] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[0xc];
      uVar2 = param_1[0xd];
      uVar4 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x000101553ad0(param_1 + 9);
  }
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  param_1[0xd] = param_2[0xd];
  return param_1;
}



/* Entry: 1015caa54; end: 1015cab2f;  */

int FUN_1015caa54(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015cab30; end: 1015cab6f;  */

void FUN_1015cab30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db80d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d967014;
  func_0x000107c61520(&DAT_10d967014,&UNK_1103e3cf0);
  puRam0000000112db80d0 = puVar1;
  return;
}



/* Entry: 1015cab70; end: 1015cabb7;  */

undefined8 FUN_1015cab70(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112db80d8;
  func_0x0001000285a8(0x112db80d8,&UNK_10d969640);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1015cabb8; end: 1015cabf7;  */

void FUN_1015cabb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db80e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf7a60;
  func_0x000107c61520(&DAT_10dbf7a60,&UNK_110679698);
  puRam0000000112db80e0 = puVar1;
  return;
}



/* Entry: 1015cabf8; end: 1015cac13;  */

void FUN_1015cabf8(long param_1)

{
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}



/* Entry: 1015cac14; end: 1015cac4f;  */

undefined8 FUN_1015cac14(undefined8 param_1,undefined8 param_2)

{
  FUN_10164101c(param_2,param_1);
  return param_2;
}



/* Entry: 1015cac50; end: 1015cac7f;  */

void FUN_1015cac50(long param_1)

{
  *(undefined1 *)(param_1 + 0xd8) = 2;
  return;
}



/* Entry: 1015cac80; end: 1015cacbb;  */

undefined8 FUN_1015cac80(undefined8 param_1,undefined8 param_2)

{
  FUN_1015dd4e4(param_2,param_1);
  return param_2;
}



/* Entry: 1015cacbc; end: 1015cacd3;  */

void FUN_1015cacbc(long param_1)

{
  *(undefined1 *)(param_1 + 0xd8) = 6;
  return;
}



/* Entry: 1015cacd4; end: 1015cad0f;  */

undefined8 FUN_1015cacd4(undefined8 param_1,undefined8 param_2)

{
  FUN_1015d80d8(param_2,param_1);
  return param_2;
}



/* Entry: 1015cad10; end: 1015cad33;  */

void FUN_1015cad10(long param_1)

{
  *(undefined1 *)(param_1 + 0xd8) = 8;
  return;
}



/* Entry: 1015cad34; end: 1015cad6f;  */

undefined8 FUN_1015cad34(undefined8 param_1,undefined8 param_2)

{
  FUN_1015f5e78(param_2,param_1);
  return param_2;
}



/* Entry: 1015cad70; end: 1015cad7f;  */

void FUN_1015cad70(void)

{
  return;
}



/* Entry: 1015cad80; end: 1015cadbb;  */

undefined8 FUN_1015cad80(undefined8 param_1,undefined8 param_2)

{
  FUN_1015f2d70(param_2,param_1);
  return param_2;
}



/* Entry: 1015cadbc; end: 1015cadc7;  */

void FUN_1015cadbc(long param_1)

{
  *(undefined1 *)(param_1 + 0xd8) = 0xc;
  return;
}



/* Entry: 1015cadc8; end: 1015cafdf;  */

void FUN_1015cadc8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
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
  undefined1 auStack_4c0 [224];
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined8 uStack_30f;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined8 uStack_22f;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  uStack_98 = unaff_x20[0x15];
  uStack_a0 = unaff_x20[0x14];
  uStack_168 = unaff_x20[0x17];
  uStack_170 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[0x13];
  uStack_b0 = unaff_x20[0x12];
  uStack_178 = unaff_x20[0x15];
  uStack_180 = unaff_x20[0x14];
  uStack_88 = unaff_x20[0x17];
  uStack_90 = unaff_x20[0x16];
  uStack_160 = unaff_x20[0x18];
  uStack_158 = (undefined1)unaff_x20[0x19];
  uStack_14f = *(undefined8 *)((long)unaff_x20 + 0xd1);
  uStack_157 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xc9);
  uStack_150 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc9) >> 0x38);
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_1a8 = unaff_x20[0xf];
  uStack_1b0 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_1b8 = unaff_x20[0xd];
  uStack_1c0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_198 = unaff_x20[0x11];
  uStack_1a0 = unaff_x20[0x10];
  uStack_b8 = unaff_x20[0x11];
  uStack_c0 = unaff_x20[0x10];
  uStack_188 = unaff_x20[0x13];
  uStack_190 = unaff_x20[0x12];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_1e8 = unaff_x20[7];
  uStack_1f0 = unaff_x20[6];
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  uStack_1f8 = unaff_x20[5];
  uStack_200 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_1d8 = unaff_x20[9];
  uStack_1e0 = unaff_x20[8];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_1c8 = unaff_x20[0xb];
  uStack_1d0 = unaff_x20[10];
  uStack_218 = unaff_x20[1];
  uStack_220 = *unaff_x20;
  uStack_208 = unaff_x20[3];
  uStack_210 = unaff_x20[2];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_80 = unaff_x20[0x18];
  uStack_78 = (undefined1)unaff_x20[0x19];
  uStack_6f = *(undefined8 *)((long)unaff_x20 + 0xd1);
  uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xc9);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc9) >> 0x38);
  iVar1 = (int)&uStack_220;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_258 = unaff_x20[0x15];
    uStack_260 = unaff_x20[0x14];
    uStack_248 = unaff_x20[0x17];
    uStack_250 = unaff_x20[0x16];
    uStack_240 = unaff_x20[0x18];
    uStack_238 = (undefined1)unaff_x20[0x19];
    uStack_22f = *(undefined8 *)((long)unaff_x20 + 0xd1);
    uStack_237 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xc9);
    uStack_230 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc9) >> 0x38);
    uStack_298 = unaff_x20[0xd];
    uStack_2a0 = unaff_x20[0xc];
    uStack_288 = unaff_x20[0xf];
    uStack_290 = unaff_x20[0xe];
    uStack_278 = unaff_x20[0x11];
    uStack_280 = unaff_x20[0x10];
    uStack_268 = unaff_x20[0x13];
    uStack_270 = unaff_x20[0x12];
    uStack_2d8 = unaff_x20[5];
    uStack_2e0 = unaff_x20[4];
    uStack_2c8 = unaff_x20[7];
    uStack_2d0 = unaff_x20[6];
    uStack_2b8 = unaff_x20[9];
    uStack_2c0 = unaff_x20[8];
    uStack_2a8 = unaff_x20[0xb];
    uStack_2b0 = unaff_x20[10];
    uStack_2f8 = unaff_x20[1];
    uStack_300 = *unaff_x20;
    uStack_2e8 = unaff_x20[3];
    uStack_2f0 = unaff_x20[2];
    iVar1 = (int)&uStack_140;
    func_0x000101551adc();
    if (iVar1 == 0xd) {
      puVar2 = &uStack_300;
      FUN_1015cafe0();
      uVar6 = puVar2[0xc];
      uVar3 = puVar2[0xd];
      uVar4 = puVar2[0xe];
      uVar13 = puVar2[9];
      uVar10 = puVar2[8];
      uVar15 = puVar2[0xb];
      uVar12 = puVar2[10];
      uVar14 = puVar2[5];
      uVar11 = puVar2[4];
      uVar17 = puVar2[7];
      uVar16 = puVar2[6];
      uVar5 = puVar2[2];
      uVar9 = puVar2[3];
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uStack_358 = uStack_198;
      uStack_360 = uStack_1a0;
      uStack_348 = uStack_188;
      uStack_350 = uStack_190;
      uStack_30f = uStack_14f;
      uStack_310 = uStack_150;
      uStack_328 = uStack_168;
      uStack_330 = uStack_170;
      uStack_318 = uStack_158;
      uStack_317 = uStack_157;
      uStack_320 = uStack_160;
      uStack_338 = uStack_178;
      uStack_340 = uStack_180;
      uStack_378 = uStack_1b8;
      uStack_380 = uStack_1c0;
      uStack_368 = uStack_1a8;
      uStack_370 = uStack_1b0;
      uStack_398 = uStack_1d8;
      uStack_3a0 = uStack_1e0;
      uStack_388 = uStack_1c8;
      uStack_390 = uStack_1d0;
      uStack_3b8 = uStack_1f8;
      uStack_3c0 = uStack_200;
      uStack_3a8 = uStack_1e8;
      uStack_3b0 = uStack_1f0;
      uStack_3d8 = uStack_218;
      uStack_3e0 = uStack_220;
      uStack_3c8 = uStack_208;
      uStack_3d0 = uStack_210;
      FUN_1015537b4(&uStack_3e0,auStack_4c0);
      goto LAB_1015cafa8;
    }
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar15 = 0x3000000000000000;
  uVar12 = 0;
  uVar13 = 0xf000000000000000;
  uVar10 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar14 = 0xc000000000000000;
  uVar11 = 0;
  uVar6 = 0x7000000000000007;
  uVar8 = 0xe000000000000000;
  uVar9 = 0xe000000000000000;
LAB_1015cafa8:
  *param_1 = uVar7;
  param_1[1] = uVar8;
  param_1[2] = uVar5;
  param_1[3] = uVar9;
  param_1[5] = uVar14;
  param_1[4] = uVar11;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  param_1[9] = uVar13;
  param_1[8] = uVar10;
  param_1[0xb] = uVar15;
  param_1[10] = uVar12;
  param_1[0xc] = uVar6;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  return;
}



/* Entry: 1015cafe0; end: 1015cafef;  */

void FUN_1015cafe0(void)

{
  return;
}



/* Entry: 1015caff0; end: 1015cb057;  */

undefined8 FUN_1015caff0(undefined8 param_1,undefined8 param_2)

{
  FUN_1015ef038(param_2,param_1);
  return param_2;
}



/* Entry: 1015cb058; end: 1015cb05b;  */

void FUN_1015cb058(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_168 = (undefined1)param_1[0x19];
  uStack_167 = (undefined7)((ulong)param_1[0x19] >> 8);
  puVar1 = &uStack_230;
  func_0x000101551adc();
                    /* WARNING: Could not recover jumptable at 0x0001015d169c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10d96718e + ((ulong)puVar1 & 0xffffffff) * 2) * 4 + 0x1015d16a0
            ))();
  return;
}



/* Entry: 1015cb05c; end: 1015cb10f;  */

uint FUN_1015cb05c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_120 = param_1[0x18];
  uStack_118 = (undefined1)param_1[0x19];
  uStack_10f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_117 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_40 = param_2[0x18];
  uStack_38 = (undefined1)param_2[0x19];
  uStack_2f = *(undefined8 *)((long)param_2 + 0xd1);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_2 + 0xc9);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xc9) >> 0x38);
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  func_0x0001015d1610(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 1015cb110; end: 1015cb157;  */

void FUN_1015cb110(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9674b0,0xdb,2);
  uRam0000000113800ba0 = uStack_38;
  uRam0000000113800b98 = uStack_40;
  uRam0000000113800bb0 = uStack_28;
  uRam0000000113800ba8 = uStack_30;
  uRam0000000113800bc0 = uStack_18;
  uRam0000000113800bb8 = uStack_20;
  return;
}



/* Entry: 1015cb158; end: 1015cb3d3;  */

/* WARNING: Removing unreachable block (ram,0x0001015cb230) */
/* WARNING: Removing unreachable block (ram,0x0001015cb2c0) */
/* WARNING: Removing unreachable block (ram,0x0001015cb26c) */
/* WARNING: Removing unreachable block (ram,0x0001015cb398) */
/* WARNING: Removing unreachable block (ram,0x0001015cb3d0) */
/* WARNING: Removing unreachable block (ram,0x0001015cb3b4) */
/* WARNING: Removing unreachable block (ram,0x0001015cb288) */
/* WARNING: Removing unreachable block (ram,0x0001015cb37c) */
/* WARNING: Removing unreachable block (ram,0x0001015cb2a4) */
/* WARNING: Removing unreachable block (ram,0x0001015cb314) */
/* WARNING: Removing unreachable block (ram,0x0001015cb34c) */
/* WARNING: Removing unreachable block (ram,0x0001015cb2f8) */
/* WARNING: Removing unreachable block (ram,0x0001015cb330) */
/* WARNING: Removing unreachable block (ram,0x0001015cb2dc) */

void FUN_1015cb158(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1015cb3d4();
        break;
      case 2:
        FUN_1015cb780();
        break;
      case 3:
        FUN_1015cbc58();
        break;
      case 4:
        FUN_1015cc010();
        break;
      case 5:
        FUN_1015cc3c8();
        break;
      case 6:
        FUN_1015cc780();
        break;
      case 7:
        FUN_1015cce04();
        break;
      case 8:
        FUN_1015cd244();
        break;
      case 9:
        FUN_1015cd6b4();
        break;
      case 10:
        FUN_1015cda8c();
        break;
      case 0xb:
        FUN_1015cde44();
        break;
      case 0xc:
        FUN_1015ce318();
        break;
      case 0xd:
        FUN_1015ce9e8();
        break;
      case 0xe:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1015d2aec();
        lVar2 = unaff_x20 + 0xf0;
        puVar3 = &UNK_1103e4048;
        goto code_r0x0001015cb368;
      case 0xf:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x138;
        puVar3 = &UNK_110790b00;
code_r0x0001015cb368:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        break;
      case 0x10:
        FUN_1015ced98();
      }
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1015cb3d4; end: 1015cb77f;  */

/* WARNING: Removing unreachable block (ram,0x0001015cb660) */

void FUN_1015cb3d4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x21;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined8 uStack_41f;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lStack_a8 = param_1[0x15];
  lStack_b0 = param_1[0x14];
  lStack_178 = param_1[0x17];
  lStack_180 = param_1[0x16];
  lStack_b8 = param_1[0x13];
  lStack_c0 = param_1[0x12];
  lStack_188 = param_1[0x15];
  lStack_190 = param_1[0x14];
  lStack_98 = param_1[0x17];
  lStack_a0 = param_1[0x16];
  lStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  lStack_e8 = param_1[0xd];
  lStack_f0 = param_1[0xc];
  lStack_1b8 = param_1[0xf];
  lStack_1c0 = param_1[0xe];
  lStack_f8 = param_1[0xb];
  lStack_100 = param_1[10];
  lStack_1c8 = param_1[0xd];
  lStack_1d0 = param_1[0xc];
  lStack_d8 = param_1[0xf];
  lStack_e0 = param_1[0xe];
  lStack_1a8 = param_1[0x11];
  lStack_1b0 = param_1[0x10];
  lStack_c8 = param_1[0x11];
  lStack_d0 = param_1[0x10];
  lStack_198 = param_1[0x13];
  lStack_1a0 = param_1[0x12];
  lStack_128 = param_1[5];
  lStack_130 = param_1[4];
  lStack_1f8 = param_1[7];
  lStack_200 = param_1[6];
  lStack_138 = param_1[3];
  lStack_140 = param_1[2];
  lStack_208 = param_1[5];
  lStack_210 = param_1[4];
  lStack_118 = param_1[7];
  lStack_120 = param_1[6];
  lStack_1e8 = param_1[9];
  lStack_1f0 = param_1[8];
  lStack_108 = param_1[9];
  lStack_110 = param_1[8];
  lStack_1d8 = param_1[0xb];
  lStack_1e0 = param_1[10];
  lStack_228 = param_1[1];
  lStack_230 = *param_1;
  lStack_218 = param_1[3];
  lStack_220 = param_1[2];
  lStack_148 = param_1[1];
  lStack_150 = *param_1;
  lStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  lStack_240 = 0;
  lStack_248 = 0;
  lStack_238 = 0;
  plVar2 = &lStack_230;
  func_0x000101551ac8();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    lStack_288 = lStack_a8;
    lStack_290 = lStack_b0;
    lStack_278 = lStack_98;
    lStack_280 = lStack_a0;
    uStack_268 = uStack_88;
    lStack_270 = lStack_90;
    uStack_25f = uStack_7f;
    uStack_267 = uStack_87;
    uStack_260 = uStack_80;
    lStack_2c8 = lStack_e8;
    lStack_2d0 = lStack_f0;
    lStack_2b8 = lStack_d8;
    lStack_2c0 = lStack_e0;
    lStack_2a8 = lStack_c8;
    lStack_2b0 = lStack_d0;
    lStack_298 = lStack_b8;
    lStack_2a0 = lStack_c0;
    lStack_308 = lStack_128;
    lStack_310 = lStack_130;
    lStack_2f8 = lStack_118;
    lStack_300 = lStack_120;
    lStack_2e8 = lStack_108;
    lStack_2f0 = lStack_110;
    lStack_2d8 = lStack_f8;
    lStack_2e0 = lStack_100;
    lStack_328 = lStack_148;
    lStack_330 = lStack_150;
    lStack_318 = lStack_138;
    lStack_320 = lStack_140;
    plVar2 = &lStack_150;
    func_0x000101551adc();
    if ((int)plVar2 == 0) {
      plVar2 = &lStack_330;
      func_0x000101553998();
      lVar6 = plVar2[1];
      lVar5 = *plVar2;
      lVar4 = plVar2[2];
      lStack_3c8 = lStack_1e8;
      lStack_3d0 = lStack_1f0;
      lStack_3b8 = lStack_1d8;
      lStack_3c0 = lStack_1e0;
      lStack_3e8 = lStack_208;
      lStack_3f0 = lStack_210;
      lStack_3d8 = lStack_1f8;
      lStack_3e0 = lStack_200;
      lStack_388 = lStack_1a8;
      lStack_390 = lStack_1b0;
      lStack_378 = lStack_198;
      lStack_380 = lStack_1a0;
      lStack_3a8 = lStack_1c8;
      lStack_3b0 = lStack_1d0;
      lStack_398 = lStack_1b8;
      lStack_3a0 = lStack_1c0;
      uStack_33f = uStack_15f;
      uStack_340 = uStack_160;
      lStack_358 = lStack_178;
      lStack_360 = lStack_180;
      uStack_348 = uStack_168;
      uStack_347 = uStack_167;
      lStack_350 = lStack_170;
      lStack_368 = lStack_188;
      lStack_370 = lStack_190;
      lStack_408 = lStack_228;
      lStack_410 = lStack_230;
      lStack_3f8 = lStack_218;
      lStack_400 = lStack_220;
      FUN_1015537b4(&lStack_410,&lStack_4f0);
      plVar2 = (long *)0x0;
      FUN_1015d5564(0,0,0);
      lStack_248 = lVar5;
      lStack_240 = lVar6;
      lStack_238 = lVar4;
    }
  }
  pcVar3 = *(code **)(param_4 + 0x198);
  func_0x0001015d50e0();
  (*pcVar3)(&lStack_248,&UNK_1103e43a0,plVar2,param_3,param_4);
  lVar6 = lStack_238;
  lVar5 = lStack_240;
  lVar4 = lStack_248;
  if ((unaff_x21 == 0) && (lStack_248 != 0)) {
    if (iVar1 == 1) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar5,lVar6);
    }
    else {
      pcVar3 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar5,lVar6);
      (*pcVar3)(param_3,param_4);
    }
    FUN_1015d5564(lStack_248,lStack_240,lStack_238);
    lStack_4f0 = lVar4;
    lStack_4e8 = lVar5;
    lStack_4e0 = lVar6;
    FUN_1015cabf8(&lStack_4f0);
    lStack_368 = lStack_448;
    lStack_370 = lStack_450;
    lStack_358 = lStack_438;
    lStack_360 = lStack_440;
    uStack_348 = uStack_428;
    lStack_350 = lStack_430;
    uStack_33f = uStack_41f;
    uStack_347 = uStack_427;
    uStack_340 = uStack_420;
    lStack_3a8 = lStack_488;
    lStack_3b0 = lStack_490;
    lStack_398 = lStack_478;
    lStack_3a0 = lStack_480;
    lStack_388 = lStack_468;
    lStack_390 = lStack_470;
    lStack_378 = lStack_458;
    lStack_380 = lStack_460;
    lStack_3e8 = lStack_4c8;
    lStack_3f0 = lStack_4d0;
    lStack_3d8 = lStack_4b8;
    lStack_3e0 = lStack_4c0;
    lStack_3c8 = lStack_4a8;
    lStack_3d0 = lStack_4b0;
    lStack_3b8 = lStack_498;
    lStack_3c0 = lStack_4a0;
    lStack_408 = lStack_4e8;
    lStack_410 = lStack_4f0;
    lStack_3f8 = lStack_4d8;
    lStack_400 = lStack_4e0;
    func_0x0001015cac00(&lStack_410);
    lStack_288 = param_1[0x15];
    lStack_290 = param_1[0x14];
    lStack_278 = param_1[0x17];
    lStack_280 = param_1[0x16];
    lStack_270 = param_1[0x18];
    uStack_268 = (undefined1)param_1[0x19];
    uStack_25f = *(undefined8 *)((long)param_1 + 0xd1);
    uStack_267 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
    uStack_260 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
    lStack_2c8 = param_1[0xd];
    lStack_2d0 = param_1[0xc];
    lStack_2b8 = param_1[0xf];
    lStack_2c0 = param_1[0xe];
    lStack_2a8 = param_1[0x11];
    lStack_2b0 = param_1[0x10];
    lStack_298 = param_1[0x13];
    lStack_2a0 = param_1[0x12];
    lStack_308 = param_1[5];
    lStack_310 = param_1[4];
    lStack_2f8 = param_1[7];
    lStack_300 = param_1[6];
    lStack_2e8 = param_1[9];
    lStack_2f0 = param_1[8];
    lStack_2d8 = param_1[0xb];
    lStack_2e0 = param_1[10];
    lStack_328 = param_1[1];
    lStack_330 = *param_1;
    lStack_318 = param_1[3];
    lStack_320 = param_1[2];
    param_1[0x15] = lStack_368;
    param_1[0x14] = lStack_370;
    param_1[0x17] = lStack_358;
    param_1[0x16] = lStack_360;
    param_1[0x19] = CONCAT71(uStack_347,uStack_348);
    param_1[0x18] = lStack_350;
    *(undefined8 *)((long)param_1 + 0xd1) = uStack_33f;
    *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_340,uStack_347);
    param_1[0xd] = lStack_3a8;
    param_1[0xc] = lStack_3b0;
    param_1[0xf] = lStack_398;
    param_1[0xe] = lStack_3a0;
    param_1[0x11] = lStack_388;
    param_1[0x10] = lStack_390;
    param_1[0x13] = lStack_378;
    param_1[0x12] = lStack_380;
    param_1[5] = lStack_3e8;
    param_1[4] = lStack_3f0;
    param_1[7] = lStack_3d8;
    param_1[6] = lStack_3e0;
    param_1[9] = lStack_3c8;
    param_1[8] = lStack_3d0;
    param_1[0xb] = lStack_3b8;
    param_1[10] = lStack_3c0;
    param_1[1] = lStack_408;
    *param_1 = lStack_410;
    param_1[3] = lStack_3f8;
    param_1[2] = lStack_400;
    func_0x0001015d5598(&lStack_330,0x112db3cf0,&UNK_10d95e250);
  }
  else {
    FUN_1015d5564(lStack_248,lStack_240,lStack_238);
  }
  return;
}



/* Entry: 1015cb780; end: 1015cbc57;  */

/* WARNING: Removing unreachable block (ram,0x0001015cbb00) */

void FUN_1015cb780(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined1 uStack_558;
  undefined7 uStack_557;
  undefined1 uStack_550;
  undefined8 uStack_54f;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined1 uStack_470;
  undefined8 uStack_46f;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 uStack_390;
  undefined8 uStack_38f;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  lStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_280 = 0;
  lStack_278 = 1;
  uStack_240 = 0;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_3b8 = uStack_a8;
    uStack_3c0 = uStack_b0;
    uStack_3a8 = uStack_98;
    uStack_3b0 = uStack_a0;
    uStack_398 = uStack_88;
    uStack_3a0 = uStack_90;
    uStack_38f = uStack_7f;
    uStack_397 = uStack_87;
    uStack_390 = uStack_80;
    uStack_3f8 = uStack_e8;
    uStack_400 = uStack_f0;
    uStack_3e8 = uStack_d8;
    uStack_3f0 = uStack_e0;
    uStack_3d8 = uStack_c8;
    uStack_3e0 = uStack_d0;
    uStack_3c8 = uStack_b8;
    uStack_3d0 = uStack_c0;
    lStack_438 = uStack_128;
    uStack_440 = uStack_130;
    uStack_428 = uStack_118;
    uStack_430 = uStack_120;
    uStack_418 = uStack_108;
    uStack_420 = uStack_110;
    uStack_408 = uStack_f8;
    uStack_410 = uStack_100;
    uStack_458 = uStack_148;
    uStack_460 = uStack_150;
    uStack_448 = uStack_138;
    uStack_450 = uStack_140;
    puVar2 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar2 == 1) {
      puVar3 = &uStack_460;
      func_0x0001015cac04();
      uStack_2c8 = uStack_258;
      uStack_2d0 = uStack_260;
      uStack_2b8 = uStack_248;
      uStack_2c0 = uStack_250;
      uStack_2b0 = uStack_240;
      uStack_308 = uStack_298;
      uStack_310 = uStack_2a0;
      uStack_2f8 = uStack_288;
      uStack_300 = uStack_290;
      lStack_2e8 = lStack_278;
      uStack_2f0 = uStack_280;
      uStack_2d8 = uStack_268;
      uStack_2e0 = uStack_270;
      uStack_538 = uStack_228;
      uStack_540 = uStack_230;
      uStack_528 = uStack_218;
      uStack_530 = uStack_220;
      uStack_4f8 = uStack_1e8;
      uStack_500 = uStack_1f0;
      uStack_4e8 = uStack_1d8;
      uStack_4f0 = uStack_1e0;
      lStack_518 = lStack_208;
      uStack_520 = uStack_210;
      uStack_508 = uStack_1f8;
      uStack_510 = uStack_200;
      uStack_4b8 = uStack_1a8;
      uStack_4c0 = uStack_1b0;
      uStack_4a8 = uStack_198;
      uStack_4b0 = uStack_1a0;
      uStack_4d8 = uStack_1c8;
      uStack_4e0 = uStack_1d0;
      uStack_4c8 = uStack_1b8;
      uStack_4d0 = uStack_1c0;
      uStack_46f = uStack_15f;
      uStack_470 = uStack_160;
      uStack_488 = uStack_178;
      uStack_490 = uStack_180;
      uStack_478 = uStack_168;
      uStack_477 = uStack_167;
      uStack_480 = uStack_170;
      uStack_498 = uStack_188;
      uStack_4a0 = uStack_190;
      FUN_1015537b4(&uStack_540,&uStack_620);
      puVar2 = &uStack_310;
      func_0x0001015d5598(puVar2,0x112db81e0,&UNK_10d967480);
      uStack_288 = puVar3[3];
      uStack_290 = puVar3[2];
      lStack_278 = puVar3[5];
      uStack_280 = puVar3[4];
      uStack_298 = puVar3[1];
      uStack_2a0 = *puVar3;
      uStack_258 = puVar3[9];
      uStack_260 = puVar3[8];
      uStack_248 = puVar3[0xb];
      uStack_250 = puVar3[10];
      uStack_240 = puVar3[0xc];
      uStack_268 = puVar3[7];
      uStack_270 = puVar3[6];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x0001015d5120();
  (*pcVar6)(&uStack_2a0,&UNK_1103ed148,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_358 = lStack_278;
    uStack_360 = uStack_280;
    uStack_348 = uStack_268;
    uStack_350 = uStack_270;
    uStack_338 = uStack_258;
    uStack_340 = uStack_260;
    uStack_328 = uStack_248;
    uStack_330 = uStack_250;
    uStack_320 = uStack_240;
    uStack_378 = uStack_298;
    uStack_380 = uStack_2a0;
    uStack_368 = uStack_288;
    uStack_370 = uStack_290;
    uStack_308 = uStack_298;
    uStack_310 = uStack_2a0;
    uStack_2f8 = uStack_288;
    uStack_300 = uStack_290;
    uStack_2b0 = uStack_240;
    lStack_2e8 = lStack_278;
    uStack_2f0 = uStack_280;
    uStack_2d8 = uStack_268;
    uStack_2e0 = uStack_270;
    uStack_2c8 = uStack_258;
    uStack_2d0 = uStack_260;
    uStack_2b8 = uStack_248;
    uStack_2c0 = uStack_250;
    if (lStack_278 != 1) {
      if (iVar1 == 1) {
        uStack_418 = uStack_258;
        uStack_420 = uStack_260;
        uStack_408 = uStack_248;
        uStack_410 = uStack_250;
        uStack_400 = uStack_240;
        uStack_458 = uStack_298;
        uStack_460 = uStack_2a0;
        uStack_448 = uStack_288;
        uStack_450 = uStack_290;
        lStack_438 = lStack_278;
        uStack_440 = uStack_280;
        uStack_428 = uStack_268;
        uStack_430 = uStack_270;
        FUN_1015cac14(&uStack_460,&uStack_540);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_418 = uStack_258;
        uStack_420 = uStack_260;
        uStack_408 = uStack_248;
        uStack_410 = uStack_250;
        uStack_400 = uStack_240;
        uStack_458 = uStack_298;
        uStack_460 = uStack_2a0;
        uStack_448 = uStack_288;
        uStack_450 = uStack_290;
        lStack_438 = lStack_278;
        uStack_440 = uStack_280;
        uStack_428 = uStack_268;
        uStack_430 = uStack_270;
        FUN_1015cac14(&uStack_460,&uStack_540);
        (*pcVar6)(param_3,param_4);
      }
      func_0x0001015d5598(&uStack_2a0,0x112db81e0,&UNK_10d967480);
      uStack_5d8 = uStack_2c8;
      uStack_5e0 = uStack_2d0;
      uStack_5c8 = uStack_2b8;
      uStack_5d0 = uStack_2c0;
      uStack_5c0 = uStack_2b0;
      uStack_618 = uStack_308;
      uStack_620 = uStack_310;
      uStack_608 = uStack_2f8;
      uStack_610 = uStack_300;
      lStack_5f8 = lStack_2e8;
      uStack_600 = uStack_2f0;
      uStack_5e8 = uStack_2d8;
      uStack_5f0 = uStack_2e0;
      func_0x0001015cac08(&uStack_620);
      uStack_498 = uStack_578;
      uStack_4a0 = uStack_580;
      uStack_488 = uStack_568;
      uStack_490 = uStack_570;
      uStack_478 = uStack_558;
      uStack_480 = uStack_560;
      uStack_46f = uStack_54f;
      uStack_477 = uStack_557;
      uStack_470 = uStack_550;
      uStack_4d8 = uStack_5b8;
      uStack_4e0 = uStack_5c0;
      uStack_4c8 = uStack_5a8;
      uStack_4d0 = uStack_5b0;
      uStack_4b8 = uStack_598;
      uStack_4c0 = uStack_5a0;
      uStack_4a8 = uStack_588;
      uStack_4b0 = uStack_590;
      lStack_518 = lStack_5f8;
      uStack_520 = uStack_600;
      uStack_508 = uStack_5e8;
      uStack_510 = uStack_5f0;
      uStack_4f8 = uStack_5d8;
      uStack_500 = uStack_5e0;
      uStack_4e8 = uStack_5c8;
      uStack_4f0 = uStack_5d0;
      uStack_538 = uStack_618;
      uStack_540 = uStack_620;
      uStack_528 = uStack_608;
      uStack_530 = uStack_610;
      func_0x0001015cac00(&uStack_540);
      uStack_3b8 = param_1[0x15];
      uStack_3c0 = param_1[0x14];
      uStack_3a8 = param_1[0x17];
      uStack_3b0 = param_1[0x16];
      uStack_3a0 = param_1[0x18];
      uStack_398 = (undefined1)param_1[0x19];
      uStack_38f = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_397 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_390 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_3f8 = param_1[0xd];
      uStack_400 = param_1[0xc];
      uStack_3e8 = param_1[0xf];
      uStack_3f0 = param_1[0xe];
      uStack_3d8 = param_1[0x11];
      uStack_3e0 = param_1[0x10];
      uStack_3c8 = param_1[0x13];
      uStack_3d0 = param_1[0x12];
      lStack_438 = param_1[5];
      uStack_440 = param_1[4];
      uStack_428 = param_1[7];
      uStack_430 = param_1[6];
      uStack_418 = param_1[9];
      uStack_420 = param_1[8];
      uStack_408 = param_1[0xb];
      uStack_410 = param_1[10];
      uStack_458 = param_1[1];
      uStack_460 = *param_1;
      uStack_448 = param_1[3];
      uStack_450 = param_1[2];
      param_1[0x15] = uStack_498;
      param_1[0x14] = uStack_4a0;
      param_1[0x17] = uStack_488;
      param_1[0x16] = uStack_490;
      param_1[0x19] = CONCAT71(uStack_477,uStack_478);
      param_1[0x18] = uStack_480;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_46f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_470,uStack_477);
      param_1[0xd] = uStack_4d8;
      param_1[0xc] = uStack_4e0;
      param_1[0xf] = uStack_4c8;
      param_1[0xe] = uStack_4d0;
      param_1[0x11] = uStack_4b8;
      param_1[0x10] = uStack_4c0;
      param_1[0x13] = uStack_4a8;
      param_1[0x12] = uStack_4b0;
      param_1[5] = lStack_518;
      param_1[4] = uStack_520;
      param_1[7] = uStack_508;
      param_1[6] = uStack_510;
      param_1[9] = uStack_4f8;
      param_1[8] = uStack_500;
      param_1[0xb] = uStack_4e8;
      param_1[10] = uStack_4f0;
      param_1[1] = uStack_538;
      *param_1 = uStack_540;
      param_1[3] = uStack_528;
      param_1[2] = uStack_530;
      uVar4 = 0x112db3cf0;
      puVar5 = &UNK_10d95e250;
      puVar2 = &uStack_460;
      goto LAB_1015cba58;
    }
  }
  uVar4 = 0x112db81e0;
  puVar5 = &UNK_10d967480;
  puVar2 = &uStack_2a0;
LAB_1015cba58:
  func_0x0001015d5598(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1015cbc58; end: 1015cc00f;  */

/* WARNING: Removing unreachable block (ram,0x0001015cbeec) */

void FUN_1015cbc58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined8 uStack_41f;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_240 = 0;
  uStack_248 = 0;
  lStack_238 = 0;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_25f = uStack_7f;
    uStack_267 = uStack_87;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    uStack_328 = uStack_148;
    uStack_330 = uStack_150;
    uStack_318 = uStack_138;
    uStack_320 = uStack_140;
    puVar2 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar2 == 2) {
      puVar2 = &uStack_330;
      FUN_101553990();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar4 = puVar2[2];
      uStack_3c8 = uStack_1e8;
      uStack_3d0 = uStack_1f0;
      uStack_3b8 = uStack_1d8;
      uStack_3c0 = uStack_1e0;
      uStack_3e8 = uStack_208;
      uStack_3f0 = uStack_210;
      uStack_3d8 = uStack_1f8;
      uStack_3e0 = uStack_200;
      uStack_388 = uStack_1a8;
      uStack_390 = uStack_1b0;
      uStack_378 = uStack_198;
      uStack_380 = uStack_1a0;
      uStack_3a8 = uStack_1c8;
      uStack_3b0 = uStack_1d0;
      uStack_398 = uStack_1b8;
      uStack_3a0 = uStack_1c0;
      uStack_33f = uStack_15f;
      uStack_340 = uStack_160;
      uStack_358 = uStack_178;
      uStack_360 = uStack_180;
      uStack_348 = uStack_168;
      uStack_347 = uStack_167;
      uStack_350 = uStack_170;
      uStack_368 = uStack_188;
      uStack_370 = uStack_190;
      uStack_408 = uStack_228;
      uStack_410 = uStack_230;
      uStack_3f8 = uStack_218;
      lStack_400 = uStack_220;
      FUN_1015537b4(&uStack_410,&uStack_4f0);
      puVar2 = (undefined8 *)0x0;
      func_0x0001015d550c(0,0,0);
      uStack_248 = uVar5;
      uStack_240 = uVar6;
      lStack_238 = lVar4;
    }
  }
  pcVar3 = *(code **)(param_4 + 0x198);
  func_0x0001015d5160();
  (*pcVar3)(&uStack_248,&UNK_110666f08,puVar2,param_3,param_4);
  lVar4 = lStack_238;
  uVar6 = uStack_240;
  uVar5 = uStack_248;
  if (unaff_x21 == 0) {
    if (lStack_238 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar3 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar3)(param_3,param_4);
      }
      func_0x0001015d550c(uStack_248,uStack_240,lStack_238);
      uStack_4f0 = uVar5;
      uStack_4e8 = uVar6;
      lStack_4e0 = lVar4;
      FUN_1015cac50(&uStack_4f0);
      uStack_368 = uStack_448;
      uStack_370 = uStack_450;
      uStack_358 = uStack_438;
      uStack_360 = uStack_440;
      uStack_348 = uStack_428;
      uStack_350 = uStack_430;
      uStack_33f = uStack_41f;
      uStack_347 = uStack_427;
      uStack_340 = uStack_420;
      uStack_3a8 = uStack_488;
      uStack_3b0 = uStack_490;
      uStack_398 = uStack_478;
      uStack_3a0 = uStack_480;
      uStack_388 = uStack_468;
      uStack_390 = uStack_470;
      uStack_378 = uStack_458;
      uStack_380 = uStack_460;
      uStack_3e8 = uStack_4c8;
      uStack_3f0 = uStack_4d0;
      uStack_3d8 = uStack_4b8;
      uStack_3e0 = uStack_4c0;
      uStack_3c8 = uStack_4a8;
      uStack_3d0 = uStack_4b0;
      uStack_3b8 = uStack_498;
      uStack_3c0 = uStack_4a0;
      uStack_408 = uStack_4e8;
      uStack_410 = uStack_4f0;
      uStack_3f8 = uStack_4d8;
      lStack_400 = lStack_4e0;
      func_0x0001015cac00(&uStack_410);
      uStack_288 = param_1[0x15];
      uStack_290 = param_1[0x14];
      uStack_278 = param_1[0x17];
      uStack_280 = param_1[0x16];
      uStack_270 = param_1[0x18];
      uStack_268 = (undefined1)param_1[0x19];
      uStack_25f = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_267 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_260 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_2c8 = param_1[0xd];
      uStack_2d0 = param_1[0xc];
      uStack_2b8 = param_1[0xf];
      uStack_2c0 = param_1[0xe];
      uStack_2a8 = param_1[0x11];
      uStack_2b0 = param_1[0x10];
      uStack_298 = param_1[0x13];
      uStack_2a0 = param_1[0x12];
      uStack_308 = param_1[5];
      uStack_310 = param_1[4];
      uStack_2f8 = param_1[7];
      uStack_300 = param_1[6];
      uStack_2e8 = param_1[9];
      uStack_2f0 = param_1[8];
      uStack_2d8 = param_1[0xb];
      uStack_2e0 = param_1[10];
      uStack_328 = param_1[1];
      uStack_330 = *param_1;
      uStack_318 = param_1[3];
      uStack_320 = param_1[2];
      param_1[0x15] = uStack_368;
      param_1[0x14] = uStack_370;
      param_1[0x17] = uStack_358;
      param_1[0x16] = uStack_360;
      param_1[0x19] = CONCAT71(uStack_347,uStack_348);
      param_1[0x18] = uStack_350;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_33f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_340,uStack_347);
      param_1[0xd] = uStack_3a8;
      param_1[0xc] = uStack_3b0;
      param_1[0xf] = uStack_398;
      param_1[0xe] = uStack_3a0;
      param_1[0x11] = uStack_388;
      param_1[0x10] = uStack_390;
      param_1[0x13] = uStack_378;
      param_1[0x12] = uStack_380;
      param_1[5] = uStack_3e8;
      param_1[4] = uStack_3f0;
      param_1[7] = uStack_3d8;
      param_1[6] = uStack_3e0;
      param_1[9] = uStack_3c8;
      param_1[8] = uStack_3d0;
      param_1[0xb] = uStack_3b8;
      param_1[10] = uStack_3c0;
      param_1[1] = uStack_408;
      *param_1 = uStack_410;
      param_1[3] = uStack_3f8;
      param_1[2] = lStack_400;
      func_0x0001015d5598(&uStack_330,0x112db3cf0,&UNK_10d95e250);
      return;
    }
    lVar4 = 0;
  }
  func_0x0001015d550c(uStack_248,uStack_240,lVar4);
  return;
}



/* Entry: 1015cc010; end: 1015cc3c7;  */

/* WARNING: Removing unreachable block (ram,0x0001015cc2a4) */

void FUN_1015cc010(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined8 uStack_41f;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_240 = 0;
  uStack_248 = 0;
  lStack_238 = 0;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_25f = uStack_7f;
    uStack_267 = uStack_87;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    uStack_328 = uStack_148;
    uStack_330 = uStack_150;
    uStack_318 = uStack_138;
    uStack_320 = uStack_140;
    puVar2 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar2 == 3) {
      puVar2 = &uStack_330;
      FUN_101553990();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar4 = puVar2[2];
      uStack_3c8 = uStack_1e8;
      uStack_3d0 = uStack_1f0;
      uStack_3b8 = uStack_1d8;
      uStack_3c0 = uStack_1e0;
      uStack_3e8 = uStack_208;
      uStack_3f0 = uStack_210;
      uStack_3d8 = uStack_1f8;
      uStack_3e0 = uStack_200;
      uStack_388 = uStack_1a8;
      uStack_390 = uStack_1b0;
      uStack_378 = uStack_198;
      uStack_380 = uStack_1a0;
      uStack_3a8 = uStack_1c8;
      uStack_3b0 = uStack_1d0;
      uStack_398 = uStack_1b8;
      uStack_3a0 = uStack_1c0;
      uStack_33f = uStack_15f;
      uStack_340 = uStack_160;
      uStack_358 = uStack_178;
      uStack_360 = uStack_180;
      uStack_348 = uStack_168;
      uStack_347 = uStack_167;
      uStack_350 = uStack_170;
      uStack_368 = uStack_188;
      uStack_370 = uStack_190;
      uStack_408 = uStack_228;
      uStack_410 = uStack_230;
      uStack_3f8 = uStack_218;
      lStack_400 = uStack_220;
      FUN_1015537b4(&uStack_410,&uStack_4f0);
      puVar2 = (undefined8 *)0x0;
      func_0x0001015d550c(0,0,0);
      uStack_248 = uVar5;
      uStack_240 = uVar6;
      lStack_238 = lVar4;
    }
  }
  pcVar3 = *(code **)(param_4 + 0x198);
  func_0x0001015d51a0();
  (*pcVar3)(&uStack_248,&UNK_1106673e8,puVar2,param_3,param_4);
  lVar4 = lStack_238;
  uVar6 = uStack_240;
  uVar5 = uStack_248;
  if (unaff_x21 == 0) {
    if (lStack_238 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar3 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar3)(param_3,param_4);
      }
      func_0x0001015d550c(uStack_248,uStack_240,lStack_238);
      uStack_4f0 = uVar5;
      uStack_4e8 = uVar6;
      lStack_4e0 = lVar4;
      func_0x0001015cac5c(&uStack_4f0);
      uStack_368 = uStack_448;
      uStack_370 = uStack_450;
      uStack_358 = uStack_438;
      uStack_360 = uStack_440;
      uStack_348 = uStack_428;
      uStack_350 = uStack_430;
      uStack_33f = uStack_41f;
      uStack_347 = uStack_427;
      uStack_340 = uStack_420;
      uStack_3a8 = uStack_488;
      uStack_3b0 = uStack_490;
      uStack_398 = uStack_478;
      uStack_3a0 = uStack_480;
      uStack_388 = uStack_468;
      uStack_390 = uStack_470;
      uStack_378 = uStack_458;
      uStack_380 = uStack_460;
      uStack_3e8 = uStack_4c8;
      uStack_3f0 = uStack_4d0;
      uStack_3d8 = uStack_4b8;
      uStack_3e0 = uStack_4c0;
      uStack_3c8 = uStack_4a8;
      uStack_3d0 = uStack_4b0;
      uStack_3b8 = uStack_498;
      uStack_3c0 = uStack_4a0;
      uStack_408 = uStack_4e8;
      uStack_410 = uStack_4f0;
      uStack_3f8 = uStack_4d8;
      lStack_400 = lStack_4e0;
      func_0x0001015cac00(&uStack_410);
      uStack_288 = param_1[0x15];
      uStack_290 = param_1[0x14];
      uStack_278 = param_1[0x17];
      uStack_280 = param_1[0x16];
      uStack_270 = param_1[0x18];
      uStack_268 = (undefined1)param_1[0x19];
      uStack_25f = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_267 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_260 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_2c8 = param_1[0xd];
      uStack_2d0 = param_1[0xc];
      uStack_2b8 = param_1[0xf];
      uStack_2c0 = param_1[0xe];
      uStack_2a8 = param_1[0x11];
      uStack_2b0 = param_1[0x10];
      uStack_298 = param_1[0x13];
      uStack_2a0 = param_1[0x12];
      uStack_308 = param_1[5];
      uStack_310 = param_1[4];
      uStack_2f8 = param_1[7];
      uStack_300 = param_1[6];
      uStack_2e8 = param_1[9];
      uStack_2f0 = param_1[8];
      uStack_2d8 = param_1[0xb];
      uStack_2e0 = param_1[10];
      uStack_328 = param_1[1];
      uStack_330 = *param_1;
      uStack_318 = param_1[3];
      uStack_320 = param_1[2];
      param_1[0x15] = uStack_368;
      param_1[0x14] = uStack_370;
      param_1[0x17] = uStack_358;
      param_1[0x16] = uStack_360;
      param_1[0x19] = CONCAT71(uStack_347,uStack_348);
      param_1[0x18] = uStack_350;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_33f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_340,uStack_347);
      param_1[0xd] = uStack_3a8;
      param_1[0xc] = uStack_3b0;
      param_1[0xf] = uStack_398;
      param_1[0xe] = uStack_3a0;
      param_1[0x11] = uStack_388;
      param_1[0x10] = uStack_390;
      param_1[0x13] = uStack_378;
      param_1[0x12] = uStack_380;
      param_1[5] = uStack_3e8;
      param_1[4] = uStack_3f0;
      param_1[7] = uStack_3d8;
      param_1[6] = uStack_3e0;
      param_1[9] = uStack_3c8;
      param_1[8] = uStack_3d0;
      param_1[0xb] = uStack_3b8;
      param_1[10] = uStack_3c0;
      param_1[1] = uStack_408;
      *param_1 = uStack_410;
      param_1[3] = uStack_3f8;
      param_1[2] = lStack_400;
      func_0x0001015d5598(&uStack_330,0x112db3cf0,&UNK_10d95e250);
      return;
    }
    lVar4 = 0;
  }
  func_0x0001015d550c(uStack_248,uStack_240,lVar4);
  return;
}



/* Entry: 1015cc3c8; end: 1015cc77f;  */

/* WARNING: Removing unreachable block (ram,0x0001015cc65c) */

void FUN_1015cc3c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined8 uStack_41f;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_240 = 0;
  uStack_248 = 0;
  lStack_238 = 0;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_25f = uStack_7f;
    uStack_267 = uStack_87;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    uStack_328 = uStack_148;
    uStack_330 = uStack_150;
    uStack_318 = uStack_138;
    uStack_320 = uStack_140;
    puVar2 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar2 == 4) {
      puVar2 = &uStack_330;
      func_0x000101553948();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar4 = puVar2[2];
      uStack_3c8 = uStack_1e8;
      uStack_3d0 = uStack_1f0;
      uStack_3b8 = uStack_1d8;
      uStack_3c0 = uStack_1e0;
      uStack_3e8 = uStack_208;
      uStack_3f0 = uStack_210;
      uStack_3d8 = uStack_1f8;
      uStack_3e0 = uStack_200;
      uStack_388 = uStack_1a8;
      uStack_390 = uStack_1b0;
      uStack_378 = uStack_198;
      uStack_380 = uStack_1a0;
      uStack_3a8 = uStack_1c8;
      uStack_3b0 = uStack_1d0;
      uStack_398 = uStack_1b8;
      uStack_3a0 = uStack_1c0;
      uStack_33f = uStack_15f;
      uStack_340 = uStack_160;
      uStack_358 = uStack_178;
      uStack_360 = uStack_180;
      uStack_348 = uStack_168;
      uStack_347 = uStack_167;
      uStack_350 = uStack_170;
      uStack_368 = uStack_188;
      uStack_370 = uStack_190;
      uStack_408 = uStack_228;
      uStack_410 = uStack_230;
      uStack_3f8 = uStack_218;
      lStack_400 = uStack_220;
      FUN_1015537b4(&uStack_410,&uStack_4f0);
      puVar2 = (undefined8 *)0x0;
      func_0x0001015d550c(0,0,0);
      uStack_248 = uVar5;
      uStack_240 = uVar6;
      lStack_238 = lVar4;
    }
  }
  pcVar3 = *(code **)(param_4 + 0x198);
  func_0x0001015d51e0();
  (*pcVar3)(&uStack_248,&UNK_1103ed2f8,puVar2,param_3,param_4);
  lVar4 = lStack_238;
  uVar6 = uStack_240;
  uVar5 = uStack_248;
  if (unaff_x21 == 0) {
    if (lStack_238 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar3 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar3)(param_3,param_4);
      }
      func_0x0001015d550c(uStack_248,uStack_240,lStack_238);
      uStack_4f0 = uVar5;
      uStack_4e8 = uVar6;
      lStack_4e0 = lVar4;
      func_0x0001015cac68(&uStack_4f0);
      uStack_368 = uStack_448;
      uStack_370 = uStack_450;
      uStack_358 = uStack_438;
      uStack_360 = uStack_440;
      uStack_348 = uStack_428;
      uStack_350 = uStack_430;
      uStack_33f = uStack_41f;
      uStack_347 = uStack_427;
      uStack_340 = uStack_420;
      uStack_3a8 = uStack_488;
      uStack_3b0 = uStack_490;
      uStack_398 = uStack_478;
      uStack_3a0 = uStack_480;
      uStack_388 = uStack_468;
      uStack_390 = uStack_470;
      uStack_378 = uStack_458;
      uStack_380 = uStack_460;
      uStack_3e8 = uStack_4c8;
      uStack_3f0 = uStack_4d0;
      uStack_3d8 = uStack_4b8;
      uStack_3e0 = uStack_4c0;
      uStack_3c8 = uStack_4a8;
      uStack_3d0 = uStack_4b0;
      uStack_3b8 = uStack_498;
      uStack_3c0 = uStack_4a0;
      uStack_408 = uStack_4e8;
      uStack_410 = uStack_4f0;
      uStack_3f8 = uStack_4d8;
      lStack_400 = lStack_4e0;
      func_0x0001015cac00(&uStack_410);
      uStack_288 = param_1[0x15];
      uStack_290 = param_1[0x14];
      uStack_278 = param_1[0x17];
      uStack_280 = param_1[0x16];
      uStack_270 = param_1[0x18];
      uStack_268 = (undefined1)param_1[0x19];
      uStack_25f = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_267 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_260 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_2c8 = param_1[0xd];
      uStack_2d0 = param_1[0xc];
      uStack_2b8 = param_1[0xf];
      uStack_2c0 = param_1[0xe];
      uStack_2a8 = param_1[0x11];
      uStack_2b0 = param_1[0x10];
      uStack_298 = param_1[0x13];
      uStack_2a0 = param_1[0x12];
      uStack_308 = param_1[5];
      uStack_310 = param_1[4];
      uStack_2f8 = param_1[7];
      uStack_300 = param_1[6];
      uStack_2e8 = param_1[9];
      uStack_2f0 = param_1[8];
      uStack_2d8 = param_1[0xb];
      uStack_2e0 = param_1[10];
      uStack_328 = param_1[1];
      uStack_330 = *param_1;
      uStack_318 = param_1[3];
      uStack_320 = param_1[2];
      param_1[0x15] = uStack_368;
      param_1[0x14] = uStack_370;
      param_1[0x17] = uStack_358;
      param_1[0x16] = uStack_360;
      param_1[0x19] = CONCAT71(uStack_347,uStack_348);
      param_1[0x18] = uStack_350;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_33f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_340,uStack_347);
      param_1[0xd] = uStack_3a8;
      param_1[0xc] = uStack_3b0;
      param_1[0xf] = uStack_398;
      param_1[0xe] = uStack_3a0;
      param_1[0x11] = uStack_388;
      param_1[0x10] = uStack_390;
      param_1[0x13] = uStack_378;
      param_1[0x12] = uStack_380;
      param_1[5] = uStack_3e8;
      param_1[4] = uStack_3f0;
      param_1[7] = uStack_3d8;
      param_1[6] = uStack_3e0;
      param_1[9] = uStack_3c8;
      param_1[8] = uStack_3d0;
      param_1[0xb] = uStack_3b8;
      param_1[10] = uStack_3c0;
      param_1[1] = uStack_408;
      *param_1 = uStack_410;
      param_1[3] = uStack_3f8;
      param_1[2] = lStack_400;
      func_0x0001015d5598(&uStack_330,0x112db3cf0,&UNK_10d95e250);
      return;
    }
    lVar4 = 0;
  }
  func_0x0001015d550c(uStack_248,uStack_240,lVar4);
  return;
}



/* Entry: 1015cc780; end: 1015cce03;  */

/* WARNING: Removing unreachable block (ram,0x0001015ccc90) */

void FUN_1015cc780(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  code *pcVar7;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined1 uStack_738;
  undefined7 uStack_737;
  undefined1 uStack_730;
  undefined8 uStack_72f;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 uStack_658;
  undefined7 uStack_657;
  undefined1 uStack_650;
  undefined8 uStack_64f;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 uStack_578;
  undefined7 uStack_577;
  undefined1 uStack_570;
  undefined8 uStack_56f;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar4 = &uStack_800;
  FUN_1015d5460(&uStack_2f8);
  uStack_318 = uStack_250;
  uStack_320 = uStack_258;
  uStack_308 = uStack_240;
  uStack_310 = uStack_248;
  uStack_358 = uStack_290;
  uStack_360 = uStack_298;
  uStack_348 = uStack_280;
  uStack_350 = uStack_288;
  uStack_328 = uStack_260;
  uStack_330 = uStack_268;
  uStack_338 = uStack_270;
  uStack_340 = uStack_278;
  uStack_398 = uStack_2d0;
  uStack_3a0 = uStack_2d8;
  uStack_388 = uStack_2c0;
  uStack_390 = uStack_2c8;
  uStack_368 = uStack_2a0;
  uStack_370 = uStack_2a8;
  uStack_378 = uStack_2b0;
  uStack_380 = uStack_2b8;
  uStack_3a8 = uStack_2e0;
  uStack_3b0 = uStack_2e8;
  uStack_3b8 = uStack_2f0;
  uStack_3c0 = uStack_2f8;
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_300 = uStack_238;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    uStack_598 = uStack_a8;
    uStack_5a0 = uStack_b0;
    uStack_588 = uStack_98;
    uStack_590 = uStack_a0;
    uStack_578 = uStack_88;
    uStack_580 = uStack_90;
    uStack_56f = uStack_7f;
    uStack_577 = uStack_87;
    uStack_570 = uStack_80;
    uStack_5d8 = uStack_e8;
    uStack_5e0 = uStack_f0;
    uStack_5c8 = uStack_d8;
    uStack_5d0 = uStack_e0;
    uStack_5b8 = uStack_c8;
    uStack_5c0 = uStack_d0;
    uStack_5a8 = uStack_b8;
    uStack_5b0 = uStack_c0;
    uStack_618 = uStack_128;
    uStack_620 = uStack_130;
    uStack_608 = uStack_118;
    uStack_610 = uStack_120;
    uStack_5f8 = uStack_108;
    uStack_600 = uStack_110;
    uStack_5e8 = uStack_f8;
    uStack_5f0 = uStack_100;
    uStack_638 = uStack_148;
    uStack_640 = uStack_150;
    uStack_628 = uStack_138;
    uStack_630 = uStack_140;
    puVar3 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar3 == 5) {
      puVar3 = &uStack_640;
      FUN_101553898();
      uStack_3e8 = uStack_318;
      uStack_3f0 = uStack_320;
      uStack_3d8 = uStack_308;
      uStack_3e0 = uStack_310;
      uStack_3d0 = uStack_300;
      uStack_428 = uStack_358;
      uStack_430 = uStack_360;
      uStack_418 = uStack_348;
      uStack_420 = uStack_350;
      uStack_408 = uStack_338;
      uStack_410 = uStack_340;
      uStack_3f8 = uStack_328;
      uStack_400 = uStack_330;
      uStack_468 = uStack_398;
      uStack_470 = uStack_3a0;
      uStack_458 = uStack_388;
      uStack_460 = uStack_390;
      uStack_448 = uStack_378;
      uStack_450 = uStack_380;
      uStack_438 = uStack_368;
      uStack_440 = uStack_370;
      uStack_488 = uStack_3b8;
      uStack_490 = uStack_3c0;
      uStack_478 = uStack_3a8;
      uStack_480 = uStack_3b0;
      uStack_678 = uStack_188;
      uStack_680 = uStack_190;
      uStack_668 = uStack_178;
      uStack_670 = uStack_180;
      uStack_658 = uStack_168;
      uStack_660 = uStack_170;
      uStack_64f = uStack_15f;
      uStack_657 = uStack_167;
      uStack_650 = uStack_160;
      uStack_6b8 = uStack_1c8;
      uStack_6c0 = uStack_1d0;
      uStack_6a8 = uStack_1b8;
      uStack_6b0 = uStack_1c0;
      uStack_698 = uStack_1a8;
      uStack_6a0 = uStack_1b0;
      uStack_688 = uStack_198;
      uStack_690 = uStack_1a0;
      uStack_6f8 = uStack_208;
      uStack_700 = uStack_210;
      uStack_6e8 = uStack_1f8;
      uStack_6f0 = uStack_200;
      uStack_6d8 = uStack_1e8;
      uStack_6e0 = uStack_1f0;
      uStack_6c8 = uStack_1d8;
      uStack_6d0 = uStack_1e0;
      uStack_718 = uStack_228;
      uStack_720 = uStack_230;
      uStack_708 = uStack_218;
      uStack_710 = uStack_220;
      FUN_1015537b4(&uStack_720,&uStack_800);
      func_0x0001015d5598(&uStack_490,0x112db81e8,&UNK_10d967488);
      uStack_7f8 = puVar3[1];
      uStack_800 = *puVar3;
      uStack_7c8 = puVar3[7];
      uStack_7d0 = puVar3[6];
      uStack_7b8 = puVar3[9];
      uStack_7c0 = puVar3[8];
      uStack_7e8 = puVar3[3];
      uStack_7f0 = puVar3[2];
      uStack_7d8 = puVar3[5];
      uStack_7e0 = puVar3[4];
      uStack_788 = puVar3[0xf];
      uStack_790 = puVar3[0xe];
      uStack_778 = puVar3[0x11];
      uStack_780 = puVar3[0x10];
      uStack_7a8 = puVar3[0xb];
      uStack_7b0 = puVar3[10];
      uStack_798 = puVar3[0xd];
      uStack_7a0 = puVar3[0xc];
      uStack_758 = puVar3[0x15];
      uStack_760 = puVar3[0x14];
      uStack_748 = puVar3[0x17];
      uStack_750 = puVar3[0x16];
      uStack_740 = puVar3[0x18];
      uStack_768 = puVar3[0x13];
      uStack_770 = puVar3[0x12];
      func_0x0001015d5484(&uStack_800);
      uStack_318 = uStack_758;
      uStack_320 = uStack_760;
      uStack_308 = uStack_748;
      uStack_310 = uStack_750;
      uStack_300 = uStack_740;
      uStack_358 = uStack_798;
      uStack_360 = uStack_7a0;
      uStack_348 = uStack_788;
      uStack_350 = uStack_790;
      uStack_328 = uStack_768;
      uStack_330 = uStack_770;
      uStack_338 = uStack_778;
      uStack_340 = uStack_780;
      uStack_398 = uStack_7d8;
      uStack_3a0 = uStack_7e0;
      uStack_388 = uStack_7c8;
      uStack_390 = uStack_7d0;
      uStack_368 = uStack_7a8;
      uStack_370 = uStack_7b0;
      uStack_378 = uStack_7b8;
      uStack_380 = uStack_7c0;
      uStack_3a8 = uStack_7e8;
      uStack_3b0 = uStack_7f0;
      uStack_3b8 = uStack_7f8;
      uStack_3c0 = uStack_800;
      puVar3 = puVar4;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x0001015d5220();
  (*pcVar7)(&uStack_3c0,&UNK_1103e4c00,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_4b8 = uStack_318;
    uStack_4c0 = uStack_320;
    uStack_4a8 = uStack_308;
    uStack_4b0 = uStack_310;
    uStack_4f8 = uStack_358;
    uStack_500 = uStack_360;
    uStack_4e8 = uStack_348;
    uStack_4f0 = uStack_350;
    uStack_4d8 = uStack_338;
    uStack_4e0 = uStack_340;
    uStack_4c8 = uStack_328;
    uStack_4d0 = uStack_330;
    uStack_538 = uStack_398;
    uStack_540 = uStack_3a0;
    uStack_528 = uStack_388;
    uStack_530 = uStack_390;
    uStack_518 = uStack_378;
    uStack_520 = uStack_380;
    uStack_508 = uStack_368;
    uStack_510 = uStack_370;
    uStack_558 = uStack_3b8;
    uStack_560 = uStack_3c0;
    uStack_548 = uStack_3a8;
    uStack_550 = uStack_3b0;
    uStack_3e8 = uStack_318;
    uStack_3f0 = uStack_320;
    uStack_3d8 = uStack_308;
    uStack_3e0 = uStack_310;
    uStack_428 = uStack_358;
    uStack_430 = uStack_360;
    uStack_418 = uStack_348;
    uStack_420 = uStack_350;
    uStack_408 = uStack_338;
    uStack_410 = uStack_340;
    uStack_3f8 = uStack_328;
    uStack_400 = uStack_330;
    uStack_468 = uStack_398;
    uStack_470 = uStack_3a0;
    uStack_458 = uStack_388;
    uStack_460 = uStack_390;
    uStack_448 = uStack_378;
    uStack_450 = uStack_380;
    uStack_438 = uStack_368;
    uStack_440 = uStack_370;
    uStack_4a0 = uStack_300;
    uStack_3d0 = uStack_300;
    uStack_488 = uStack_3b8;
    uStack_490 = uStack_3c0;
    uStack_478 = uStack_3a8;
    uStack_480 = uStack_3b0;
    iVar1 = (int)&uStack_560;
    FUN_100cb63b8();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_598 = uStack_4b8;
        uStack_5a0 = uStack_4c0;
        uStack_588 = uStack_4a8;
        uStack_590 = uStack_4b0;
        uStack_580 = uStack_4a0;
        uStack_5d8 = uStack_4f8;
        uStack_5e0 = uStack_500;
        uStack_5c8 = uStack_4e8;
        uStack_5d0 = uStack_4f0;
        uStack_5b8 = uStack_4d8;
        uStack_5c0 = uStack_4e0;
        uStack_5a8 = uStack_4c8;
        uStack_5b0 = uStack_4d0;
        uStack_618 = uStack_538;
        uStack_620 = uStack_540;
        uStack_608 = uStack_528;
        uStack_610 = uStack_530;
        uStack_5f8 = uStack_518;
        uStack_600 = uStack_520;
        uStack_5e8 = uStack_508;
        uStack_5f0 = uStack_510;
        uStack_638 = uStack_558;
        uStack_640 = uStack_560;
        uStack_628 = uStack_548;
        uStack_630 = uStack_550;
        FUN_1015cac80(&uStack_640,&uStack_720);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        uStack_598 = uStack_4b8;
        uStack_5a0 = uStack_4c0;
        uStack_588 = uStack_4a8;
        uStack_590 = uStack_4b0;
        uStack_580 = uStack_4a0;
        uStack_5d8 = uStack_4f8;
        uStack_5e0 = uStack_500;
        uStack_5c8 = uStack_4e8;
        uStack_5d0 = uStack_4f0;
        uStack_5b8 = uStack_4d8;
        uStack_5c0 = uStack_4e0;
        uStack_5a8 = uStack_4c8;
        uStack_5b0 = uStack_4d0;
        uStack_618 = uStack_538;
        uStack_620 = uStack_540;
        uStack_608 = uStack_528;
        uStack_610 = uStack_530;
        uStack_5f8 = uStack_518;
        uStack_600 = uStack_520;
        uStack_5e8 = uStack_508;
        uStack_5f0 = uStack_510;
        uStack_638 = uStack_558;
        uStack_640 = uStack_560;
        uStack_628 = uStack_548;
        uStack_630 = uStack_550;
        FUN_1015cac80(&uStack_640,&uStack_720);
        (*pcVar7)(param_3,param_4);
      }
      func_0x0001015d5598(&uStack_3c0,0x112db81e8,&UNK_10d967488);
      uStack_758 = uStack_3e8;
      uStack_760 = uStack_3f0;
      uStack_748 = uStack_3d8;
      uStack_750 = uStack_3e0;
      uStack_740 = uStack_3d0;
      uStack_798 = uStack_428;
      uStack_7a0 = uStack_430;
      uStack_788 = uStack_418;
      uStack_790 = uStack_420;
      uStack_778 = uStack_408;
      uStack_780 = uStack_410;
      uStack_768 = uStack_3f8;
      uStack_770 = uStack_400;
      uStack_7d8 = uStack_468;
      uStack_7e0 = uStack_470;
      uStack_7c8 = uStack_458;
      uStack_7d0 = uStack_460;
      uStack_7b8 = uStack_448;
      uStack_7c0 = uStack_450;
      uStack_7a8 = uStack_438;
      uStack_7b0 = uStack_440;
      uStack_7f8 = uStack_488;
      uStack_800 = uStack_490;
      uStack_7e8 = uStack_478;
      uStack_7f0 = uStack_480;
      func_0x0001015cac74(&uStack_800);
      uStack_678 = uStack_758;
      uStack_680 = uStack_760;
      uStack_668 = uStack_748;
      uStack_670 = uStack_750;
      uStack_658 = uStack_738;
      uStack_660 = uStack_740;
      uStack_64f = uStack_72f;
      uStack_657 = uStack_737;
      uStack_650 = uStack_730;
      uStack_6b8 = uStack_798;
      uStack_6c0 = uStack_7a0;
      uStack_6a8 = uStack_788;
      uStack_6b0 = uStack_790;
      uStack_698 = uStack_778;
      uStack_6a0 = uStack_780;
      uStack_688 = uStack_768;
      uStack_690 = uStack_770;
      uStack_6f8 = uStack_7d8;
      uStack_700 = uStack_7e0;
      uStack_6e8 = uStack_7c8;
      uStack_6f0 = uStack_7d0;
      uStack_6d8 = uStack_7b8;
      uStack_6e0 = uStack_7c0;
      uStack_6c8 = uStack_7a8;
      uStack_6d0 = uStack_7b0;
      uStack_718 = uStack_7f8;
      uStack_720 = uStack_800;
      uStack_708 = uStack_7e8;
      uStack_710 = uStack_7f0;
      func_0x0001015cac00(&uStack_720);
      uStack_598 = param_1[0x15];
      uStack_5a0 = param_1[0x14];
      uStack_588 = param_1[0x17];
      uStack_590 = param_1[0x16];
      uStack_580 = param_1[0x18];
      uStack_578 = (undefined1)param_1[0x19];
      uStack_56f = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_577 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_570 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_5d8 = param_1[0xd];
      uStack_5e0 = param_1[0xc];
      uStack_5c8 = param_1[0xf];
      uStack_5d0 = param_1[0xe];
      uStack_5b8 = param_1[0x11];
      uStack_5c0 = param_1[0x10];
      uStack_5a8 = param_1[0x13];
      uStack_5b0 = param_1[0x12];
      uStack_618 = param_1[5];
      uStack_620 = param_1[4];
      uStack_608 = param_1[7];
      uStack_610 = param_1[6];
      uStack_5f8 = param_1[9];
      uStack_600 = param_1[8];
      uStack_5e8 = param_1[0xb];
      uStack_5f0 = param_1[10];
      uStack_638 = param_1[1];
      uStack_640 = *param_1;
      uStack_628 = param_1[3];
      uStack_630 = param_1[2];
      param_1[0x15] = uStack_678;
      param_1[0x14] = uStack_680;
      param_1[0x17] = uStack_668;
      param_1[0x16] = uStack_670;
      param_1[0x19] = CONCAT71(uStack_657,uStack_658);
      param_1[0x18] = uStack_660;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_64f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_650,uStack_657);
      param_1[0xd] = uStack_6b8;
      param_1[0xc] = uStack_6c0;
      param_1[0xf] = uStack_6a8;
      param_1[0xe] = uStack_6b0;
      param_1[0x11] = uStack_698;
      param_1[0x10] = uStack_6a0;
      param_1[0x13] = uStack_688;
      param_1[0x12] = uStack_690;
      param_1[5] = uStack_6f8;
      param_1[4] = uStack_700;
      param_1[7] = uStack_6e8;
      param_1[6] = uStack_6f0;
      param_1[9] = uStack_6d8;
      param_1[8] = uStack_6e0;
      param_1[0xb] = uStack_6c8;
      param_1[10] = uStack_6d0;
      param_1[1] = uStack_718;
      *param_1 = uStack_720;
      param_1[3] = uStack_708;
      param_1[2] = uStack_710;
      uVar5 = 0x112db3cf0;
      puVar6 = &UNK_10d95e250;
      puVar2 = &uStack_640;
      goto LAB_1015ccbb8;
    }
  }
  uVar5 = 0x112db81e8;
  puVar6 = &UNK_10d967488;
  puVar2 = &uStack_3c0;
LAB_1015ccbb8:
  func_0x0001015d5598(puVar2,uVar5,puVar6);
  return;
}



/* Entry: 1015cce04; end: 1015cd243;  */

/* WARNING: Removing unreachable block (ram,0x0001015cd108) */

void FUN_1015cce04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  undefined8 uStack_42f;
  undefined8 uStack_420;
  long lStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined8 uStack_34f;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined8 uStack_26f;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  puVar4 = &uStack_230;
  func_0x000101551ac8();
  iVar3 = (int)puVar4;
  if (iVar3 != 1) {
    uStack_298 = uStack_a8;
    uStack_2a0 = uStack_b0;
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uStack_278 = uStack_88;
    uStack_280 = uStack_90;
    uStack_26f = uStack_7f;
    uStack_277 = uStack_87;
    uStack_270 = uStack_80;
    uStack_2d8 = uStack_e8;
    uStack_2e0 = uStack_f0;
    uStack_2c8 = uStack_d8;
    uStack_2d0 = uStack_e0;
    uStack_2b8 = uStack_c8;
    uStack_2c0 = uStack_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_318 = uStack_128;
    uStack_320 = uStack_130;
    uStack_308 = uStack_118;
    uStack_310 = uStack_120;
    uStack_2f8 = uStack_108;
    uStack_300 = uStack_110;
    uStack_2e8 = uStack_f8;
    uStack_2f0 = uStack_100;
    uStack_338 = uStack_148;
    uStack_340 = uStack_150;
    uStack_328 = uStack_138;
    uStack_330 = uStack_140;
    puVar4 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar4 == 6) {
      puVar4 = &uStack_340;
      FUN_101553860();
      lVar9 = puVar4[1];
      uVar8 = *puVar4;
      uVar7 = puVar4[3];
      uVar6 = puVar4[2];
      uVar1 = puVar4[4];
      uVar2 = puVar4[5];
      uStack_378 = uStack_188;
      uStack_380 = uStack_190;
      uStack_368 = uStack_178;
      uStack_370 = uStack_180;
      uStack_358 = uStack_168;
      uStack_360 = uStack_170;
      uStack_34f = uStack_15f;
      uStack_357 = uStack_167;
      uStack_350 = uStack_160;
      uStack_3b8 = uStack_1c8;
      uStack_3c0 = uStack_1d0;
      uStack_3a8 = uStack_1b8;
      uStack_3b0 = uStack_1c0;
      uStack_398 = uStack_1a8;
      uStack_3a0 = uStack_1b0;
      uStack_388 = uStack_198;
      uStack_390 = uStack_1a0;
      uStack_3f8 = uStack_208;
      uStack_400 = uStack_210;
      uStack_3e8 = uStack_1f8;
      uStack_3f0 = uStack_200;
      uStack_3d8 = uStack_1e8;
      uStack_3e0 = uStack_1f0;
      uStack_3c8 = uStack_1d8;
      uStack_3d0 = uStack_1e0;
      lStack_418 = uStack_228;
      uStack_420 = uStack_230;
      uStack_408 = uStack_218;
      uStack_410 = uStack_220;
      FUN_1015537b4(&uStack_420,&uStack_500);
      puVar4 = (undefined8 *)0x0;
      FUN_1015d5488(0,0,0,0,0,0);
      uStack_260 = uVar8;
      lStack_258 = lVar9;
      uStack_250 = uVar6;
      uStack_248 = uVar7;
      uStack_240 = uVar1;
      uStack_238 = uVar2;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x0001015d5260();
  (*pcVar5)(&uStack_260,&UNK_1103e41f0,puVar4,param_3,param_4);
  uVar8 = uStack_238;
  uVar7 = uStack_240;
  uVar6 = uStack_248;
  uVar2 = uStack_250;
  lVar9 = lStack_258;
  uVar1 = uStack_260;
  if (unaff_x21 == 0) {
    if (lStack_258 != 0) {
      if (iVar3 == 1) {
        func_0x000107c61434(lStack_258);
        func_0x000107c61434(uVar6);
        func_0x00010006c00c(uVar7,uVar8);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x000107c61434(lStack_258);
        func_0x000107c61434(uVar6);
        func_0x00010006c00c(uVar7,uVar8);
        (*pcVar5)(param_3,param_4);
      }
      FUN_1015d5488(uStack_260,lStack_258,uStack_250,uStack_248,uStack_240,uStack_238);
      uStack_500 = uVar1;
      lStack_4f8 = lVar9;
      uStack_4f0 = uVar2;
      uStack_4e8 = uVar6;
      uStack_4e0 = uVar7;
      uStack_4d8 = uVar8;
      FUN_1015cacbc(&uStack_500);
      uStack_378 = uStack_458;
      uStack_380 = uStack_460;
      uStack_368 = uStack_448;
      uStack_370 = uStack_450;
      uStack_358 = uStack_438;
      uStack_360 = uStack_440;
      uStack_34f = uStack_42f;
      uStack_357 = uStack_437;
      uStack_350 = uStack_430;
      uStack_3b8 = uStack_498;
      uStack_3c0 = uStack_4a0;
      uStack_3a8 = uStack_488;
      uStack_3b0 = uStack_490;
      uStack_398 = uStack_478;
      uStack_3a0 = uStack_480;
      uStack_388 = uStack_468;
      uStack_390 = uStack_470;
      uStack_3f8 = uStack_4d8;
      uStack_400 = uStack_4e0;
      uStack_3e8 = uStack_4c8;
      uStack_3f0 = uStack_4d0;
      uStack_3d8 = uStack_4b8;
      uStack_3e0 = uStack_4c0;
      uStack_3c8 = uStack_4a8;
      uStack_3d0 = uStack_4b0;
      lStack_418 = lStack_4f8;
      uStack_420 = uStack_500;
      uStack_408 = uStack_4e8;
      uStack_410 = uStack_4f0;
      func_0x0001015cac00(&uStack_420);
      uStack_298 = param_1[0x15];
      uStack_2a0 = param_1[0x14];
      uStack_288 = param_1[0x17];
      uStack_290 = param_1[0x16];
      uStack_280 = param_1[0x18];
      uStack_278 = (undefined1)param_1[0x19];
      uStack_26f = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_277 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_270 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_2d8 = param_1[0xd];
      uStack_2e0 = param_1[0xc];
      uStack_2c8 = param_1[0xf];
      uStack_2d0 = param_1[0xe];
      uStack_2b8 = param_1[0x11];
      uStack_2c0 = param_1[0x10];
      uStack_2a8 = param_1[0x13];
      uStack_2b0 = param_1[0x12];
      uStack_318 = param_1[5];
      uStack_320 = param_1[4];
      uStack_308 = param_1[7];
      uStack_310 = param_1[6];
      uStack_2f8 = param_1[9];
      uStack_300 = param_1[8];
      uStack_2e8 = param_1[0xb];
      uStack_2f0 = param_1[10];
      uStack_338 = param_1[1];
      uStack_340 = *param_1;
      uStack_328 = param_1[3];
      uStack_330 = param_1[2];
      param_1[0x15] = uStack_378;
      param_1[0x14] = uStack_380;
      param_1[0x17] = uStack_368;
      param_1[0x16] = uStack_370;
      param_1[0x19] = CONCAT71(uStack_357,uStack_358);
      param_1[0x18] = uStack_360;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_34f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_350,uStack_357);
      param_1[0xd] = uStack_3b8;
      param_1[0xc] = uStack_3c0;
      param_1[0xf] = uStack_3a8;
      param_1[0xe] = uStack_3b0;
      param_1[0x11] = uStack_398;
      param_1[0x10] = uStack_3a0;
      param_1[0x13] = uStack_388;
      param_1[0x12] = uStack_390;
      param_1[5] = uStack_3f8;
      param_1[4] = uStack_400;
      param_1[7] = uStack_3e8;
      param_1[6] = uStack_3f0;
      param_1[9] = uStack_3d8;
      param_1[8] = uStack_3e0;
      param_1[0xb] = uStack_3c8;
      param_1[10] = uStack_3d0;
      param_1[1] = lStack_418;
      *param_1 = uStack_420;
      param_1[3] = uStack_408;
      param_1[2] = uStack_410;
      func_0x0001015d5598(&uStack_340,0x112db3cf0,&UNK_10d95e250);
      return;
    }
    lVar9 = 0;
  }
  FUN_1015d5488(uStack_260,lVar9,uStack_250,uStack_248,uStack_240,uStack_238);
  return;
}



/* Entry: 1015cd244; end: 1015cd6b3;  */

/* WARNING: Removing unreachable block (ram,0x0001015cd564) */

void FUN_1015cd244(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_5c0;
  long lStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined8 uStack_4ef;
  undefined8 uStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined8 uStack_40f;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 uStack_330;
  undefined8 uStack_32f;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  lStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_240 = 0;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_358 = uStack_a8;
    uStack_360 = uStack_b0;
    uStack_348 = uStack_98;
    uStack_350 = uStack_a0;
    uStack_338 = uStack_88;
    uStack_340 = uStack_90;
    uStack_32f = uStack_7f;
    uStack_337 = uStack_87;
    uStack_330 = uStack_80;
    uStack_398 = uStack_e8;
    uStack_3a0 = uStack_f0;
    uStack_388 = uStack_d8;
    uStack_390 = uStack_e0;
    uStack_378 = uStack_c8;
    uStack_380 = uStack_d0;
    uStack_368 = uStack_b8;
    uStack_370 = uStack_c0;
    uStack_3d8 = uStack_128;
    uStack_3e0 = uStack_130;
    uStack_3c8 = uStack_118;
    uStack_3d0 = uStack_120;
    uStack_3b8 = uStack_108;
    uStack_3c0 = uStack_110;
    uStack_3a8 = uStack_f8;
    uStack_3b0 = uStack_100;
    lStack_3f8 = uStack_148;
    uStack_400 = uStack_150;
    uStack_3e8 = uStack_138;
    uStack_3f0 = uStack_140;
    puVar2 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar2 == 7) {
      puVar3 = &uStack_400;
      FUN_101553828();
      lStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_290 = 0;
      uStack_438 = uStack_188;
      uStack_440 = uStack_190;
      uStack_428 = uStack_178;
      uStack_430 = uStack_180;
      uStack_418 = uStack_168;
      uStack_420 = uStack_170;
      uStack_40f = uStack_15f;
      uStack_417 = uStack_167;
      uStack_410 = uStack_160;
      uStack_478 = uStack_1c8;
      uStack_480 = uStack_1d0;
      uStack_468 = uStack_1b8;
      uStack_470 = uStack_1c0;
      uStack_458 = uStack_1a8;
      uStack_460 = uStack_1b0;
      uStack_448 = uStack_198;
      uStack_450 = uStack_1a0;
      uStack_4b8 = uStack_208;
      uStack_4c0 = uStack_210;
      uStack_4a8 = uStack_1f8;
      uStack_4b0 = uStack_200;
      uStack_498 = uStack_1e8;
      uStack_4a0 = uStack_1f0;
      uStack_488 = uStack_1d8;
      uStack_490 = uStack_1e0;
      lStack_4d8 = lStack_228;
      uStack_4e0 = uStack_230;
      uStack_4c8 = uStack_218;
      uStack_4d0 = uStack_220;
      FUN_1015537b4(&uStack_4e0,&uStack_5c0);
      puVar2 = &uStack_2d0;
      func_0x0001015d5598(puVar2,0x112db81f0,&UNK_10d967490);
      lStack_278 = puVar3[1];
      uStack_280 = *puVar3;
      uStack_258 = puVar3[5];
      uStack_260 = puVar3[4];
      uStack_248 = puVar3[7];
      uStack_250 = puVar3[6];
      uStack_240 = puVar3[8];
      uStack_268 = puVar3[3];
      uStack_270 = puVar3[2];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x0001015d52a0();
  (*pcVar6)(&uStack_280,&UNK_1103e46f8,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_318 = lStack_278;
    uStack_320 = uStack_280;
    uStack_308 = uStack_268;
    uStack_310 = uStack_270;
    uStack_2f8 = uStack_258;
    uStack_300 = uStack_260;
    uStack_2e8 = uStack_248;
    uStack_2f0 = uStack_250;
    uStack_2e0 = uStack_240;
    uStack_2a8 = uStack_258;
    uStack_2b0 = uStack_260;
    uStack_298 = uStack_248;
    uStack_2a0 = uStack_250;
    uStack_290 = uStack_240;
    lStack_2c8 = lStack_278;
    uStack_2d0 = uStack_280;
    uStack_2b8 = uStack_268;
    uStack_2c0 = uStack_270;
    if (lStack_278 != 0) {
      if (iVar1 == 1) {
        uStack_3d8 = uStack_258;
        uStack_3e0 = uStack_260;
        uStack_3c8 = uStack_248;
        uStack_3d0 = uStack_250;
        uStack_3c0 = uStack_240;
        lStack_3f8 = lStack_278;
        uStack_400 = uStack_280;
        uStack_3e8 = uStack_268;
        uStack_3f0 = uStack_270;
        FUN_1015cacd4(&uStack_400,&uStack_4e0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_3d8 = uStack_258;
        uStack_3e0 = uStack_260;
        uStack_3c8 = uStack_248;
        uStack_3d0 = uStack_250;
        uStack_3c0 = uStack_240;
        lStack_3f8 = lStack_278;
        uStack_400 = uStack_280;
        uStack_3e8 = uStack_268;
        uStack_3f0 = uStack_270;
        FUN_1015cacd4(&uStack_400,&uStack_4e0);
        (*pcVar6)(param_3,param_4);
      }
      func_0x0001015d5598(&uStack_280,0x112db81f0,&UNK_10d967490);
      uStack_598 = uStack_2a8;
      uStack_5a0 = uStack_2b0;
      uStack_588 = uStack_298;
      uStack_590 = uStack_2a0;
      uStack_580 = uStack_290;
      lStack_5b8 = lStack_2c8;
      uStack_5c0 = uStack_2d0;
      uStack_5a8 = uStack_2b8;
      uStack_5b0 = uStack_2c0;
      func_0x0001015cacc8(&uStack_5c0);
      uStack_438 = uStack_518;
      uStack_440 = uStack_520;
      uStack_428 = uStack_508;
      uStack_430 = uStack_510;
      uStack_418 = uStack_4f8;
      uStack_420 = uStack_500;
      uStack_40f = uStack_4ef;
      uStack_417 = uStack_4f7;
      uStack_410 = uStack_4f0;
      uStack_478 = uStack_558;
      uStack_480 = uStack_560;
      uStack_468 = uStack_548;
      uStack_470 = uStack_550;
      uStack_458 = uStack_538;
      uStack_460 = uStack_540;
      uStack_448 = uStack_528;
      uStack_450 = uStack_530;
      uStack_4b8 = uStack_598;
      uStack_4c0 = uStack_5a0;
      uStack_4a8 = uStack_588;
      uStack_4b0 = uStack_590;
      uStack_498 = uStack_578;
      uStack_4a0 = uStack_580;
      uStack_488 = uStack_568;
      uStack_490 = uStack_570;
      lStack_4d8 = lStack_5b8;
      uStack_4e0 = uStack_5c0;
      uStack_4c8 = uStack_5a8;
      uStack_4d0 = uStack_5b0;
      func_0x0001015cac00(&uStack_4e0);
      uStack_358 = param_1[0x15];
      uStack_360 = param_1[0x14];
      uStack_348 = param_1[0x17];
      uStack_350 = param_1[0x16];
      uStack_340 = param_1[0x18];
      uStack_338 = (undefined1)param_1[0x19];
      uStack_32f = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_337 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_330 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_398 = param_1[0xd];
      uStack_3a0 = param_1[0xc];
      uStack_388 = param_1[0xf];
      uStack_390 = param_1[0xe];
      uStack_378 = param_1[0x11];
      uStack_380 = param_1[0x10];
      uStack_368 = param_1[0x13];
      uStack_370 = param_1[0x12];
      uStack_3d8 = param_1[5];
      uStack_3e0 = param_1[4];
      uStack_3c8 = param_1[7];
      uStack_3d0 = param_1[6];
      uStack_3b8 = param_1[9];
      uStack_3c0 = param_1[8];
      uStack_3a8 = param_1[0xb];
      uStack_3b0 = param_1[10];
      lStack_3f8 = param_1[1];
      uStack_400 = *param_1;
      uStack_3e8 = param_1[3];
      uStack_3f0 = param_1[2];
      param_1[0x15] = uStack_438;
      param_1[0x14] = uStack_440;
      param_1[0x17] = uStack_428;
      param_1[0x16] = uStack_430;
      param_1[0x19] = CONCAT71(uStack_417,uStack_418);
      param_1[0x18] = uStack_420;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_40f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_410,uStack_417);
      param_1[0xd] = uStack_478;
      param_1[0xc] = uStack_480;
      param_1[0xf] = uStack_468;
      param_1[0xe] = uStack_470;
      param_1[0x11] = uStack_458;
      param_1[0x10] = uStack_460;
      param_1[0x13] = uStack_448;
      param_1[0x12] = uStack_450;
      param_1[5] = uStack_4b8;
      param_1[4] = uStack_4c0;
      param_1[7] = uStack_4a8;
      param_1[6] = uStack_4b0;
      param_1[9] = uStack_498;
      param_1[8] = uStack_4a0;
      param_1[0xb] = uStack_488;
      param_1[10] = uStack_490;
      param_1[1] = lStack_4d8;
      *param_1 = uStack_4e0;
      param_1[3] = uStack_4c8;
      param_1[2] = uStack_4d0;
      uVar4 = 0x112db3cf0;
      puVar5 = &UNK_10d95e250;
      puVar2 = &uStack_400;
      goto LAB_1015cd4a0;
    }
  }
  uVar4 = 0x112db81f0;
  puVar5 = &UNK_10d967490;
  puVar2 = &uStack_280;
LAB_1015cd4a0:
  func_0x0001015d5598(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1015cd6b4; end: 1015cda8b;  */

/* WARNING: Removing unreachable block (ram,0x0001015cd95c) */

void FUN_1015cd6b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined8 uStack_41f;
  undefined8 uStack_410;
  long lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  puVar4 = &uStack_230;
  func_0x000101551ac8();
  iVar3 = (int)puVar4;
  if (iVar3 != 1) {
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_25f = uStack_7f;
    uStack_267 = uStack_87;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    uStack_328 = uStack_148;
    uStack_330 = uStack_150;
    uStack_318 = uStack_138;
    uStack_320 = uStack_140;
    puVar4 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar4 == 8) {
      puVar4 = &uStack_330;
      FUN_1015537f0();
      lVar7 = puVar4[1];
      uVar6 = *puVar4;
      uVar1 = puVar4[2];
      uVar2 = puVar4[3];
      uStack_368 = uStack_188;
      uStack_370 = uStack_190;
      uStack_358 = uStack_178;
      uStack_360 = uStack_180;
      uStack_348 = uStack_168;
      uStack_350 = uStack_170;
      uStack_33f = uStack_15f;
      uStack_347 = uStack_167;
      uStack_340 = uStack_160;
      uStack_3a8 = uStack_1c8;
      uStack_3b0 = uStack_1d0;
      uStack_398 = uStack_1b8;
      uStack_3a0 = uStack_1c0;
      uStack_388 = uStack_1a8;
      uStack_390 = uStack_1b0;
      uStack_378 = uStack_198;
      uStack_380 = uStack_1a0;
      uStack_3e8 = uStack_208;
      uStack_3f0 = uStack_210;
      uStack_3d8 = uStack_1f8;
      uStack_3e0 = uStack_200;
      uStack_3c8 = uStack_1e8;
      uStack_3d0 = uStack_1f0;
      uStack_3b8 = uStack_1d8;
      uStack_3c0 = uStack_1e0;
      lStack_408 = uStack_228;
      uStack_410 = uStack_230;
      uStack_3f8 = uStack_218;
      uStack_400 = uStack_220;
      FUN_1015537b4(&uStack_410,&uStack_4f0);
      puVar4 = (undefined8 *)0x0;
      FUN_1015d54d4(0,0,0,0);
      uStack_250 = uVar6;
      lStack_248 = lVar7;
      uStack_240 = uVar1;
      uStack_238 = uVar2;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x0001015d52e0();
  (*pcVar5)(&uStack_250,&UNK_1103e4938,puVar4,param_3,param_4);
  uVar6 = uStack_238;
  uVar2 = uStack_240;
  lVar7 = lStack_248;
  uVar1 = uStack_250;
  if ((unaff_x21 == 0) && (lStack_248 != 0)) {
    if (iVar3 == 1) {
      func_0x000107c61434(lStack_248);
      func_0x00010006c00c(uVar2,uVar6);
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_248);
      func_0x00010006c00c(uVar2,uVar6);
      (*pcVar5)(param_3,param_4);
    }
    FUN_1015d54d4(uStack_250,lStack_248,uStack_240,uStack_238);
    uStack_4f0 = uVar1;
    lStack_4e8 = lVar7;
    uStack_4e0 = uVar2;
    uStack_4d8 = uVar6;
    FUN_1015cad10(&uStack_4f0);
    uStack_368 = uStack_448;
    uStack_370 = uStack_450;
    uStack_358 = uStack_438;
    uStack_360 = uStack_440;
    uStack_348 = uStack_428;
    uStack_350 = uStack_430;
    uStack_33f = uStack_41f;
    uStack_347 = uStack_427;
    uStack_340 = uStack_420;
    uStack_3a8 = uStack_488;
    uStack_3b0 = uStack_490;
    uStack_398 = uStack_478;
    uStack_3a0 = uStack_480;
    uStack_388 = uStack_468;
    uStack_390 = uStack_470;
    uStack_378 = uStack_458;
    uStack_380 = uStack_460;
    uStack_3e8 = uStack_4c8;
    uStack_3f0 = uStack_4d0;
    uStack_3d8 = uStack_4b8;
    uStack_3e0 = uStack_4c0;
    uStack_3c8 = uStack_4a8;
    uStack_3d0 = uStack_4b0;
    uStack_3b8 = uStack_498;
    uStack_3c0 = uStack_4a0;
    lStack_408 = lStack_4e8;
    uStack_410 = uStack_4f0;
    uStack_3f8 = uStack_4d8;
    uStack_400 = uStack_4e0;
    func_0x0001015cac00(&uStack_410);
    uStack_288 = param_1[0x15];
    uStack_290 = param_1[0x14];
    uStack_278 = param_1[0x17];
    uStack_280 = param_1[0x16];
    uStack_270 = param_1[0x18];
    uStack_268 = (undefined1)param_1[0x19];
    uStack_25f = *(undefined8 *)((long)param_1 + 0xd1);
    uStack_267 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
    uStack_260 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
    uStack_2c8 = param_1[0xd];
    uStack_2d0 = param_1[0xc];
    uStack_2b8 = param_1[0xf];
    uStack_2c0 = param_1[0xe];
    uStack_2a8 = param_1[0x11];
    uStack_2b0 = param_1[0x10];
    uStack_298 = param_1[0x13];
    uStack_2a0 = param_1[0x12];
    uStack_308 = param_1[5];
    uStack_310 = param_1[4];
    uStack_2f8 = param_1[7];
    uStack_300 = param_1[6];
    uStack_2e8 = param_1[9];
    uStack_2f0 = param_1[8];
    uStack_2d8 = param_1[0xb];
    uStack_2e0 = param_1[10];
    uStack_328 = param_1[1];
    uStack_330 = *param_1;
    uStack_318 = param_1[3];
    uStack_320 = param_1[2];
    param_1[0x15] = uStack_368;
    param_1[0x14] = uStack_370;
    param_1[0x17] = uStack_358;
    param_1[0x16] = uStack_360;
    param_1[0x19] = CONCAT71(uStack_347,uStack_348);
    param_1[0x18] = uStack_350;
    *(undefined8 *)((long)param_1 + 0xd1) = uStack_33f;
    *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_340,uStack_347);
    param_1[0xd] = uStack_3a8;
    param_1[0xc] = uStack_3b0;
    param_1[0xf] = uStack_398;
    param_1[0xe] = uStack_3a0;
    param_1[0x11] = uStack_388;
    param_1[0x10] = uStack_390;
    param_1[0x13] = uStack_378;
    param_1[0x12] = uStack_380;
    param_1[5] = uStack_3e8;
    param_1[4] = uStack_3f0;
    param_1[7] = uStack_3d8;
    param_1[6] = uStack_3e0;
    param_1[9] = uStack_3c8;
    param_1[8] = uStack_3d0;
    param_1[0xb] = uStack_3b8;
    param_1[10] = uStack_3c0;
    param_1[1] = lStack_408;
    *param_1 = uStack_410;
    param_1[3] = uStack_3f8;
    param_1[2] = uStack_400;
    func_0x0001015d5598(&uStack_330,0x112db3cf0,&UNK_10d95e250);
  }
  else {
    FUN_1015d54d4(uStack_250,lStack_248,uStack_240,uStack_238);
  }
  return;
}



/* Entry: 1015cda8c; end: 1015cde43;  */

/* WARNING: Removing unreachable block (ram,0x0001015cdd20) */

void FUN_1015cda8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined8 uStack_41f;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_240 = 0;
  uStack_248 = 0;
  lStack_238 = 0;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_25f = uStack_7f;
    uStack_267 = uStack_87;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    uStack_328 = uStack_148;
    uStack_330 = uStack_150;
    uStack_318 = uStack_138;
    uStack_320 = uStack_140;
    puVar2 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar2 == 9) {
      puVar2 = &uStack_330;
      func_0x0001015537b0();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar4 = puVar2[2];
      uStack_3c8 = uStack_1e8;
      uStack_3d0 = uStack_1f0;
      uStack_3b8 = uStack_1d8;
      uStack_3c0 = uStack_1e0;
      uStack_3e8 = uStack_208;
      uStack_3f0 = uStack_210;
      uStack_3d8 = uStack_1f8;
      uStack_3e0 = uStack_200;
      uStack_388 = uStack_1a8;
      uStack_390 = uStack_1b0;
      uStack_378 = uStack_198;
      uStack_380 = uStack_1a0;
      uStack_3a8 = uStack_1c8;
      uStack_3b0 = uStack_1d0;
      uStack_398 = uStack_1b8;
      uStack_3a0 = uStack_1c0;
      uStack_33f = uStack_15f;
      uStack_340 = uStack_160;
      uStack_358 = uStack_178;
      uStack_360 = uStack_180;
      uStack_348 = uStack_168;
      uStack_347 = uStack_167;
      uStack_350 = uStack_170;
      uStack_368 = uStack_188;
      uStack_370 = uStack_190;
      uStack_408 = uStack_228;
      uStack_410 = uStack_230;
      uStack_3f8 = uStack_218;
      lStack_400 = uStack_220;
      FUN_1015537b4(&uStack_410,&uStack_4f0);
      puVar2 = (undefined8 *)0x0;
      func_0x0001015d550c(0,0,0);
      uStack_248 = uVar5;
      uStack_240 = uVar6;
      lStack_238 = lVar4;
    }
  }
  pcVar3 = *(code **)(param_4 + 0x198);
  FUN_101553758();
  (*pcVar3)(&uStack_248,&UNK_1103e5558,puVar2,param_3,param_4);
  lVar4 = lStack_238;
  uVar6 = uStack_240;
  uVar5 = uStack_248;
  if (unaff_x21 == 0) {
    if (lStack_238 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar3 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar3)(param_3,param_4);
      }
      func_0x0001015d550c(uStack_248,uStack_240,lStack_238);
      uStack_4f0 = uVar5;
      uStack_4e8 = uVar6;
      lStack_4e0 = lVar4;
      func_0x0001015cad1c(&uStack_4f0);
      uStack_368 = uStack_448;
      uStack_370 = uStack_450;
      uStack_358 = uStack_438;
      uStack_360 = uStack_440;
      uStack_348 = uStack_428;
      uStack_350 = uStack_430;
      uStack_33f = uStack_41f;
      uStack_347 = uStack_427;
      uStack_340 = uStack_420;
      uStack_3a8 = uStack_488;
      uStack_3b0 = uStack_490;
      uStack_398 = uStack_478;
      uStack_3a0 = uStack_480;
      uStack_388 = uStack_468;
      uStack_390 = uStack_470;
      uStack_378 = uStack_458;
      uStack_380 = uStack_460;
      uStack_3e8 = uStack_4c8;
      uStack_3f0 = uStack_4d0;
      uStack_3d8 = uStack_4b8;
      uStack_3e0 = uStack_4c0;
      uStack_3c8 = uStack_4a8;
      uStack_3d0 = uStack_4b0;
      uStack_3b8 = uStack_498;
      uStack_3c0 = uStack_4a0;
      uStack_408 = uStack_4e8;
      uStack_410 = uStack_4f0;
      uStack_3f8 = uStack_4d8;
      lStack_400 = lStack_4e0;
      func_0x0001015cac00(&uStack_410);
      uStack_288 = param_1[0x15];
      uStack_290 = param_1[0x14];
      uStack_278 = param_1[0x17];
      uStack_280 = param_1[0x16];
      uStack_270 = param_1[0x18];
      uStack_268 = (undefined1)param_1[0x19];
      uStack_25f = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_267 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_260 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_2c8 = param_1[0xd];
      uStack_2d0 = param_1[0xc];
      uStack_2b8 = param_1[0xf];
      uStack_2c0 = param_1[0xe];
      uStack_2a8 = param_1[0x11];
      uStack_2b0 = param_1[0x10];
      uStack_298 = param_1[0x13];
      uStack_2a0 = param_1[0x12];
      uStack_308 = param_1[5];
      uStack_310 = param_1[4];
      uStack_2f8 = param_1[7];
      uStack_300 = param_1[6];
      uStack_2e8 = param_1[9];
      uStack_2f0 = param_1[8];
      uStack_2d8 = param_1[0xb];
      uStack_2e0 = param_1[10];
      uStack_328 = param_1[1];
      uStack_330 = *param_1;
      uStack_318 = param_1[3];
      uStack_320 = param_1[2];
      param_1[0x15] = uStack_368;
      param_1[0x14] = uStack_370;
      param_1[0x17] = uStack_358;
      param_1[0x16] = uStack_360;
      param_1[0x19] = CONCAT71(uStack_347,uStack_348);
      param_1[0x18] = uStack_350;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_33f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_340,uStack_347);
      param_1[0xd] = uStack_3a8;
      param_1[0xc] = uStack_3b0;
      param_1[0xf] = uStack_398;
      param_1[0xe] = uStack_3a0;
      param_1[0x11] = uStack_388;
      param_1[0x10] = uStack_390;
      param_1[0x13] = uStack_378;
      param_1[0x12] = uStack_380;
      param_1[5] = uStack_3e8;
      param_1[4] = uStack_3f0;
      param_1[7] = uStack_3d8;
      param_1[6] = uStack_3e0;
      param_1[9] = uStack_3c8;
      param_1[8] = uStack_3d0;
      param_1[0xb] = uStack_3b8;
      param_1[10] = uStack_3c0;
      param_1[1] = uStack_408;
      *param_1 = uStack_410;
      param_1[3] = uStack_3f8;
      param_1[2] = lStack_400;
      func_0x0001015d5598(&uStack_330,0x112db3cf0,&UNK_10d95e250);
      return;
    }
    lVar4 = 0;
  }
  func_0x0001015d550c(uStack_248,uStack_240,lVar4);
  return;
}



/* Entry: 1015cde44; end: 1015ce317;  */

/* WARNING: Removing unreachable block (ram,0x0001015ce1c0) */

void FUN_1015cde44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined1 uStack_558;
  undefined7 uStack_557;
  undefined1 uStack_550;
  undefined8 uStack_54f;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined1 uStack_470;
  undefined8 uStack_46f;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 uStack_390;
  undefined8 uStack_38f;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  uStack_250 = 0;
  uStack_258 = 0;
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  lStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  lStack_270 = 1;
  uStack_238 = 0;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_3b8 = uStack_a8;
    uStack_3c0 = uStack_b0;
    uStack_3a8 = uStack_98;
    uStack_3b0 = uStack_a0;
    uStack_398 = uStack_88;
    uStack_3a0 = uStack_90;
    uStack_38f = uStack_7f;
    uStack_397 = uStack_87;
    uStack_390 = uStack_80;
    uStack_3f8 = uStack_e8;
    uStack_400 = uStack_f0;
    uStack_3e8 = uStack_d8;
    uStack_3f0 = uStack_e0;
    uStack_3d8 = uStack_c8;
    uStack_3e0 = uStack_d0;
    uStack_3c8 = uStack_b8;
    uStack_3d0 = uStack_c0;
    uStack_438 = uStack_128;
    uStack_440 = uStack_130;
    uStack_428 = uStack_118;
    lStack_430 = uStack_120;
    uStack_418 = uStack_108;
    uStack_420 = uStack_110;
    uStack_408 = uStack_f8;
    uStack_410 = uStack_100;
    uStack_458 = uStack_148;
    uStack_460 = uStack_150;
    uStack_448 = uStack_138;
    uStack_450 = uStack_140;
    puVar2 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar2 == 10) {
      puVar3 = &uStack_460;
      FUN_101553754();
      uStack_2c8 = uStack_258;
      uStack_2d0 = uStack_260;
      uStack_2b8 = uStack_248;
      uStack_2c0 = uStack_250;
      uStack_2a8 = uStack_238;
      uStack_2b0 = uStack_240;
      uStack_308 = uStack_298;
      uStack_310 = uStack_2a0;
      uStack_2f8 = uStack_288;
      uStack_300 = uStack_290;
      uStack_2e8 = uStack_278;
      uStack_2f0 = uStack_280;
      uStack_2d8 = uStack_268;
      lStack_2e0 = lStack_270;
      uStack_538 = uStack_228;
      uStack_540 = uStack_230;
      uStack_528 = uStack_218;
      uStack_530 = uStack_220;
      uStack_4f8 = uStack_1e8;
      uStack_500 = uStack_1f0;
      uStack_4e8 = uStack_1d8;
      uStack_4f0 = uStack_1e0;
      uStack_518 = uStack_208;
      uStack_520 = uStack_210;
      uStack_508 = uStack_1f8;
      lStack_510 = lStack_200;
      uStack_4b8 = uStack_1a8;
      uStack_4c0 = uStack_1b0;
      uStack_4a8 = uStack_198;
      uStack_4b0 = uStack_1a0;
      uStack_4d8 = uStack_1c8;
      uStack_4e0 = uStack_1d0;
      uStack_4c8 = uStack_1b8;
      uStack_4d0 = uStack_1c0;
      uStack_46f = uStack_15f;
      uStack_470 = uStack_160;
      uStack_488 = uStack_178;
      uStack_490 = uStack_180;
      uStack_478 = uStack_168;
      uStack_477 = uStack_167;
      uStack_480 = uStack_170;
      uStack_498 = uStack_188;
      uStack_4a0 = uStack_190;
      FUN_1015537b4(&uStack_540,&uStack_620);
      puVar2 = &uStack_310;
      func_0x0001015d5598(puVar2,0x112db81f8,&UNK_10d967498);
      uStack_288 = puVar3[3];
      uStack_290 = puVar3[2];
      uStack_278 = puVar3[5];
      uStack_280 = puVar3[4];
      uStack_298 = puVar3[1];
      uStack_2a0 = *puVar3;
      uStack_248 = puVar3[0xb];
      uStack_250 = puVar3[10];
      uStack_238 = puVar3[0xd];
      uStack_240 = puVar3[0xc];
      uStack_268 = puVar3[7];
      lStack_270 = puVar3[6];
      uStack_258 = puVar3[9];
      uStack_260 = puVar3[8];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x0001015d5320();
  (*pcVar6)(&uStack_2a0,&UNK_1103e67e0,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_338 = uStack_258;
    uStack_340 = uStack_260;
    uStack_328 = uStack_248;
    uStack_330 = uStack_250;
    uStack_378 = uStack_298;
    uStack_380 = uStack_2a0;
    uStack_368 = uStack_288;
    uStack_370 = uStack_290;
    uStack_358 = uStack_278;
    uStack_360 = uStack_280;
    uStack_348 = uStack_268;
    lStack_350 = lStack_270;
    uStack_2f8 = uStack_288;
    uStack_300 = uStack_290;
    uStack_2e8 = uStack_278;
    uStack_2f0 = uStack_280;
    uStack_318 = uStack_238;
    uStack_320 = uStack_240;
    uStack_308 = uStack_298;
    uStack_310 = uStack_2a0;
    uStack_2b8 = uStack_248;
    uStack_2c0 = uStack_250;
    uStack_2a8 = uStack_238;
    uStack_2b0 = uStack_240;
    uStack_2d8 = uStack_268;
    lStack_2e0 = lStack_270;
    uStack_2c8 = uStack_258;
    uStack_2d0 = uStack_260;
    if (lStack_270 != 1) {
      if (iVar1 == 1) {
        uStack_418 = uStack_258;
        uStack_420 = uStack_260;
        uStack_408 = uStack_248;
        uStack_410 = uStack_250;
        uStack_3f8 = uStack_238;
        uStack_400 = uStack_240;
        uStack_458 = uStack_298;
        uStack_460 = uStack_2a0;
        uStack_448 = uStack_288;
        uStack_450 = uStack_290;
        uStack_438 = uStack_278;
        uStack_440 = uStack_280;
        uStack_428 = uStack_268;
        lStack_430 = lStack_270;
        FUN_1015cad34(&uStack_460,&uStack_540);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_418 = uStack_258;
        uStack_420 = uStack_260;
        uStack_408 = uStack_248;
        uStack_410 = uStack_250;
        uStack_3f8 = uStack_238;
        uStack_400 = uStack_240;
        uStack_458 = uStack_298;
        uStack_460 = uStack_2a0;
        uStack_448 = uStack_288;
        uStack_450 = uStack_290;
        uStack_438 = uStack_278;
        uStack_440 = uStack_280;
        uStack_428 = uStack_268;
        lStack_430 = lStack_270;
        FUN_1015cad34(&uStack_460,&uStack_540);
        (*pcVar6)(param_3,param_4);
      }
      func_0x0001015d5598(&uStack_2a0,0x112db81f8,&UNK_10d967498);
      uStack_5d8 = uStack_2c8;
      uStack_5e0 = uStack_2d0;
      uStack_5c8 = uStack_2b8;
      uStack_5d0 = uStack_2c0;
      uStack_5b8 = uStack_2a8;
      uStack_5c0 = uStack_2b0;
      uStack_618 = uStack_308;
      uStack_620 = uStack_310;
      uStack_608 = uStack_2f8;
      uStack_610 = uStack_300;
      uStack_5f8 = uStack_2e8;
      uStack_600 = uStack_2f0;
      uStack_5e8 = uStack_2d8;
      lStack_5f0 = lStack_2e0;
      func_0x0001015cad28(&uStack_620);
      uStack_498 = uStack_578;
      uStack_4a0 = uStack_580;
      uStack_488 = uStack_568;
      uStack_490 = uStack_570;
      uStack_478 = uStack_558;
      uStack_480 = uStack_560;
      uStack_46f = uStack_54f;
      uStack_477 = uStack_557;
      uStack_470 = uStack_550;
      uStack_4d8 = uStack_5b8;
      uStack_4e0 = uStack_5c0;
      uStack_4c8 = uStack_5a8;
      uStack_4d0 = uStack_5b0;
      uStack_4b8 = uStack_598;
      uStack_4c0 = uStack_5a0;
      uStack_4a8 = uStack_588;
      uStack_4b0 = uStack_590;
      uStack_518 = uStack_5f8;
      uStack_520 = uStack_600;
      uStack_508 = uStack_5e8;
      lStack_510 = lStack_5f0;
      uStack_4f8 = uStack_5d8;
      uStack_500 = uStack_5e0;
      uStack_4e8 = uStack_5c8;
      uStack_4f0 = uStack_5d0;
      uStack_538 = uStack_618;
      uStack_540 = uStack_620;
      uStack_528 = uStack_608;
      uStack_530 = uStack_610;
      func_0x0001015cac00(&uStack_540);
      uStack_3b8 = param_1[0x15];
      uStack_3c0 = param_1[0x14];
      uStack_3a8 = param_1[0x17];
      uStack_3b0 = param_1[0x16];
      uStack_3a0 = param_1[0x18];
      uStack_398 = (undefined1)param_1[0x19];
      uStack_38f = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_397 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_390 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_3f8 = param_1[0xd];
      uStack_400 = param_1[0xc];
      uStack_3e8 = param_1[0xf];
      uStack_3f0 = param_1[0xe];
      uStack_3d8 = param_1[0x11];
      uStack_3e0 = param_1[0x10];
      uStack_3c8 = param_1[0x13];
      uStack_3d0 = param_1[0x12];
      uStack_438 = param_1[5];
      uStack_440 = param_1[4];
      uStack_428 = param_1[7];
      lStack_430 = param_1[6];
      uStack_418 = param_1[9];
      uStack_420 = param_1[8];
      uStack_408 = param_1[0xb];
      uStack_410 = param_1[10];
      uStack_458 = param_1[1];
      uStack_460 = *param_1;
      uStack_448 = param_1[3];
      uStack_450 = param_1[2];
      param_1[0x15] = uStack_498;
      param_1[0x14] = uStack_4a0;
      param_1[0x17] = uStack_488;
      param_1[0x16] = uStack_490;
      param_1[0x19] = CONCAT71(uStack_477,uStack_478);
      param_1[0x18] = uStack_480;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_46f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_470,uStack_477);
      param_1[0xd] = uStack_4d8;
      param_1[0xc] = uStack_4e0;
      param_1[0xf] = uStack_4c8;
      param_1[0xe] = uStack_4d0;
      param_1[0x11] = uStack_4b8;
      param_1[0x10] = uStack_4c0;
      param_1[0x13] = uStack_4a8;
      param_1[0x12] = uStack_4b0;
      param_1[5] = uStack_518;
      param_1[4] = uStack_520;
      param_1[7] = uStack_508;
      param_1[6] = lStack_510;
      param_1[9] = uStack_4f8;
      param_1[8] = uStack_500;
      param_1[0xb] = uStack_4e8;
      param_1[10] = uStack_4f0;
      param_1[1] = uStack_538;
      *param_1 = uStack_540;
      param_1[3] = uStack_528;
      param_1[2] = uStack_530;
      uVar4 = 0x112db3cf0;
      puVar5 = &UNK_10d95e250;
      puVar2 = &uStack_460;
      goto LAB_1015ce118;
    }
  }
  uVar4 = 0x112db81f8;
  puVar5 = &UNK_10d967498;
  puVar2 = &uStack_2a0;
LAB_1015ce118:
  func_0x0001015d5598(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1015ce318; end: 1015ce9e7;  */

/* WARNING: Removing unreachable block (ram,0x0001015ce868) */

void FUN_1015ce318(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  code *pcVar7;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined1 uStack_778;
  undefined7 uStack_777;
  undefined1 uStack_770;
  undefined7 uStack_76f;
  undefined1 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined1 uStack_698;
  undefined7 uStack_697;
  undefined1 uStack_690;
  undefined8 uStack_68f;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 uStack_5b8;
  undefined7 uStack_5b7;
  undefined1 uStack_5b0;
  undefined7 uStack_5af;
  undefined1 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar4 = &uStack_840;
  FUN_1015d5538(&uStack_308);
  uStack_338 = uStack_260;
  uStack_340 = uStack_268;
  uStack_328 = uStack_250;
  uStack_330 = uStack_258;
  uStack_318 = uStack_240;
  uStack_320 = uStack_248;
  uStack_378 = uStack_2a0;
  uStack_380 = uStack_2a8;
  uStack_368 = uStack_290;
  uStack_370 = uStack_298;
  uStack_358 = uStack_280;
  uStack_360 = uStack_288;
  uStack_348 = uStack_270;
  uStack_350 = uStack_278;
  uStack_3b8 = uStack_2e0;
  uStack_3c0 = uStack_2e8;
  uStack_3a8 = uStack_2d0;
  uStack_3b0 = uStack_2d8;
  uStack_398 = uStack_2c0;
  uStack_3a0 = uStack_2c8;
  uStack_388 = uStack_2b0;
  uStack_390 = uStack_2b8;
  uStack_3d8 = uStack_300;
  uStack_3e0 = uStack_308;
  uStack_3c8 = uStack_2f0;
  uStack_3d0 = uStack_2f8;
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  uStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_310 = uStack_238;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    uStack_5d8 = uStack_a8;
    uStack_5e0 = uStack_b0;
    uStack_5c8 = uStack_98;
    uStack_5d0 = uStack_a0;
    uStack_5b8 = uStack_88;
    uStack_5c0 = uStack_90;
    uStack_5af = (undefined7)uStack_7f;
    uStack_5a8 = (undefined1)((ulong)uStack_7f >> 0x38);
    uStack_5b7 = uStack_87;
    uStack_5b0 = uStack_80;
    uStack_618 = uStack_e8;
    uStack_620 = uStack_f0;
    uStack_608 = uStack_d8;
    uStack_610 = uStack_e0;
    uStack_5f8 = uStack_c8;
    uStack_600 = uStack_d0;
    uStack_5e8 = uStack_b8;
    uStack_5f0 = uStack_c0;
    uStack_658 = uStack_128;
    uStack_660 = uStack_130;
    uStack_648 = uStack_118;
    uStack_650 = uStack_120;
    uStack_638 = uStack_108;
    uStack_640 = uStack_110;
    uStack_628 = uStack_f8;
    uStack_630 = uStack_100;
    uStack_678 = uStack_148;
    uStack_680 = uStack_150;
    uStack_668 = uStack_138;
    uStack_670 = uStack_140;
    puVar3 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar3 == 0xb) {
      puVar3 = &uStack_680;
      FUN_1015cad70();
      uStack_418 = uStack_338;
      uStack_420 = uStack_340;
      uStack_408 = uStack_328;
      uStack_410 = uStack_330;
      uStack_3f8 = uStack_318;
      uStack_400 = uStack_320;
      uStack_3f0 = uStack_310;
      uStack_458 = uStack_378;
      uStack_460 = uStack_380;
      uStack_448 = uStack_368;
      uStack_450 = uStack_370;
      uStack_438 = uStack_358;
      uStack_440 = uStack_360;
      uStack_428 = uStack_348;
      uStack_430 = uStack_350;
      uStack_498 = uStack_3b8;
      uStack_4a0 = uStack_3c0;
      uStack_488 = uStack_3a8;
      uStack_490 = uStack_3b0;
      uStack_478 = uStack_398;
      uStack_480 = uStack_3a0;
      uStack_468 = uStack_388;
      uStack_470 = uStack_390;
      uStack_4b8 = uStack_3d8;
      uStack_4c0 = uStack_3e0;
      uStack_4a8 = uStack_3c8;
      uStack_4b0 = uStack_3d0;
      uStack_6b8 = uStack_188;
      uStack_6c0 = uStack_190;
      uStack_6a8 = uStack_178;
      uStack_6b0 = uStack_180;
      uStack_698 = uStack_168;
      uStack_6a0 = uStack_170;
      uStack_68f = uStack_15f;
      uStack_697 = uStack_167;
      uStack_690 = uStack_160;
      uStack_6f8 = uStack_1c8;
      uStack_700 = uStack_1d0;
      uStack_6e8 = uStack_1b8;
      uStack_6f0 = uStack_1c0;
      uStack_6d8 = uStack_1a8;
      uStack_6e0 = uStack_1b0;
      uStack_6c8 = uStack_198;
      uStack_6d0 = uStack_1a0;
      uStack_738 = uStack_208;
      uStack_740 = uStack_210;
      uStack_728 = uStack_1f8;
      uStack_730 = uStack_200;
      uStack_718 = uStack_1e8;
      uStack_720 = uStack_1f0;
      uStack_708 = uStack_1d8;
      uStack_710 = uStack_1e0;
      uStack_758 = uStack_228;
      uStack_760 = uStack_230;
      uStack_748 = uStack_218;
      uStack_750 = uStack_220;
      FUN_1015537b4(&uStack_760,&uStack_840);
      func_0x0001015d5598(&uStack_4c0,0x112db8200,&UNK_10d9674a0);
      uStack_838 = puVar3[1];
      uStack_840 = *puVar3;
      uStack_828 = puVar3[3];
      uStack_830 = puVar3[2];
      uStack_7f8 = puVar3[9];
      uStack_800 = puVar3[8];
      uStack_7e8 = puVar3[0xb];
      uStack_7f0 = puVar3[10];
      uStack_818 = puVar3[5];
      uStack_820 = puVar3[4];
      uStack_808 = puVar3[7];
      uStack_810 = puVar3[6];
      uStack_7b8 = puVar3[0x11];
      uStack_7c0 = puVar3[0x10];
      uStack_7a8 = puVar3[0x13];
      uStack_7b0 = puVar3[0x12];
      uStack_7d8 = puVar3[0xd];
      uStack_7e0 = puVar3[0xc];
      uStack_7c8 = puVar3[0xf];
      uStack_7d0 = puVar3[0xe];
      uStack_788 = puVar3[0x17];
      uStack_790 = puVar3[0x16];
      uStack_780 = puVar3[0x18];
      uStack_798 = puVar3[0x15];
      uStack_7a0 = puVar3[0x14];
      uStack_770 = (undefined1)puVar3[0x1a];
      uStack_76f = (undefined7)((ulong)puVar3[0x1a] >> 8);
      uStack_778 = (undefined1)puVar3[0x19];
      uStack_777 = (undefined7)((ulong)puVar3[0x19] >> 8);
      func_0x0001015d5560(&uStack_840);
      uStack_338 = uStack_798;
      uStack_340 = uStack_7a0;
      uStack_328 = uStack_788;
      uStack_330 = uStack_790;
      uStack_318 = CONCAT71(uStack_777,uStack_778);
      uStack_320 = uStack_780;
      uStack_310 = CONCAT71(uStack_76f,uStack_770);
      uStack_378 = uStack_7d8;
      uStack_380 = uStack_7e0;
      uStack_368 = uStack_7c8;
      uStack_370 = uStack_7d0;
      uStack_358 = uStack_7b8;
      uStack_360 = uStack_7c0;
      uStack_348 = uStack_7a8;
      uStack_350 = uStack_7b0;
      uStack_3b8 = uStack_818;
      uStack_3c0 = uStack_820;
      uStack_3a8 = uStack_808;
      uStack_3b0 = uStack_810;
      uStack_398 = uStack_7f8;
      uStack_3a0 = uStack_800;
      uStack_388 = uStack_7e8;
      uStack_390 = uStack_7f0;
      uStack_3d8 = uStack_838;
      uStack_3e0 = uStack_840;
      uStack_3c8 = uStack_828;
      uStack_3d0 = uStack_830;
      puVar3 = puVar4;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x0001015d5360();
  (*pcVar7)(&uStack_3e0,&UNK_1103e6378,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_4f8 = uStack_338;
    uStack_500 = uStack_340;
    uStack_4e8 = uStack_328;
    uStack_4f0 = uStack_330;
    uStack_4d8 = uStack_318;
    uStack_4e0 = uStack_320;
    uStack_538 = uStack_378;
    uStack_540 = uStack_380;
    uStack_528 = uStack_368;
    uStack_530 = uStack_370;
    uStack_518 = uStack_358;
    uStack_520 = uStack_360;
    uStack_508 = uStack_348;
    uStack_510 = uStack_350;
    uStack_578 = uStack_3b8;
    uStack_580 = uStack_3c0;
    uStack_568 = uStack_3a8;
    uStack_570 = uStack_3b0;
    uStack_558 = uStack_398;
    uStack_560 = uStack_3a0;
    uStack_548 = uStack_388;
    uStack_550 = uStack_390;
    uStack_598 = uStack_3d8;
    uStack_5a0 = uStack_3e0;
    uStack_588 = uStack_3c8;
    uStack_590 = uStack_3d0;
    uStack_418 = uStack_338;
    uStack_420 = uStack_340;
    uStack_408 = uStack_328;
    uStack_410 = uStack_330;
    uStack_3f8 = uStack_318;
    uStack_400 = uStack_320;
    uStack_458 = uStack_378;
    uStack_460 = uStack_380;
    uStack_448 = uStack_368;
    uStack_450 = uStack_370;
    uStack_438 = uStack_358;
    uStack_440 = uStack_360;
    uStack_428 = uStack_348;
    uStack_430 = uStack_350;
    uStack_498 = uStack_3b8;
    uStack_4a0 = uStack_3c0;
    uStack_488 = uStack_3a8;
    uStack_490 = uStack_3b0;
    uStack_478 = uStack_398;
    uStack_480 = uStack_3a0;
    uStack_468 = uStack_388;
    uStack_470 = uStack_390;
    uStack_4d0 = uStack_310;
    uStack_3f0 = uStack_310;
    uStack_4b8 = uStack_3d8;
    uStack_4c0 = uStack_3e0;
    uStack_4a8 = uStack_3c8;
    uStack_4b0 = uStack_3d0;
    iVar1 = (int)&uStack_5a0;
    FUN_100cb63b8();
    if (iVar1 != 1) {
      uStack_5b8 = (undefined1)uStack_4d8;
      uStack_5b7 = (undefined7)((ulong)uStack_4d8 >> 8);
      uStack_5b0 = (undefined1)uStack_4d0;
      uStack_5af = (undefined7)((ulong)uStack_4d0 >> 8);
      if ((int)puVar2 == 1) {
        uStack_5d8 = uStack_4f8;
        uStack_5e0 = uStack_500;
        uStack_5c8 = uStack_4e8;
        uStack_5d0 = uStack_4f0;
        uStack_5c0 = uStack_4e0;
        uStack_618 = uStack_538;
        uStack_620 = uStack_540;
        uStack_608 = uStack_528;
        uStack_610 = uStack_530;
        uStack_5f8 = uStack_518;
        uStack_600 = uStack_520;
        uStack_5e8 = uStack_508;
        uStack_5f0 = uStack_510;
        uStack_658 = uStack_578;
        uStack_660 = uStack_580;
        uStack_648 = uStack_568;
        uStack_650 = uStack_570;
        uStack_638 = uStack_558;
        uStack_640 = uStack_560;
        uStack_628 = uStack_548;
        uStack_630 = uStack_550;
        uStack_678 = uStack_598;
        uStack_680 = uStack_5a0;
        uStack_668 = uStack_588;
        uStack_670 = uStack_590;
        FUN_1015cad80(&uStack_680,&uStack_760);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        uStack_5d8 = uStack_4f8;
        uStack_5e0 = uStack_500;
        uStack_5c8 = uStack_4e8;
        uStack_5d0 = uStack_4f0;
        uStack_5c0 = uStack_4e0;
        uStack_618 = uStack_538;
        uStack_620 = uStack_540;
        uStack_608 = uStack_528;
        uStack_610 = uStack_530;
        uStack_5f8 = uStack_518;
        uStack_600 = uStack_520;
        uStack_5e8 = uStack_508;
        uStack_5f0 = uStack_510;
        uStack_658 = uStack_578;
        uStack_660 = uStack_580;
        uStack_648 = uStack_568;
        uStack_650 = uStack_570;
        uStack_638 = uStack_558;
        uStack_640 = uStack_560;
        uStack_628 = uStack_548;
        uStack_630 = uStack_550;
        uStack_678 = uStack_598;
        uStack_680 = uStack_5a0;
        uStack_668 = uStack_588;
        uStack_670 = uStack_590;
        FUN_1015cad80(&uStack_680,&uStack_760);
        (*pcVar7)(param_3,param_4);
      }
      func_0x0001015d5598(&uStack_3e0,0x112db8200,&UNK_10d9674a0);
      uStack_798 = uStack_418;
      uStack_7a0 = uStack_420;
      uStack_788 = uStack_408;
      uStack_790 = uStack_410;
      uStack_778 = (undefined1)uStack_3f8;
      uStack_777 = (undefined7)((ulong)uStack_3f8 >> 8);
      uStack_780 = uStack_400;
      uStack_770 = (undefined1)uStack_3f0;
      uStack_76f = (undefined7)((ulong)uStack_3f0 >> 8);
      uStack_7d8 = uStack_458;
      uStack_7e0 = uStack_460;
      uStack_7c8 = uStack_448;
      uStack_7d0 = uStack_450;
      uStack_7b8 = uStack_438;
      uStack_7c0 = uStack_440;
      uStack_7a8 = uStack_428;
      uStack_7b0 = uStack_430;
      uStack_818 = uStack_498;
      uStack_820 = uStack_4a0;
      uStack_808 = uStack_488;
      uStack_810 = uStack_490;
      uStack_7f8 = uStack_478;
      uStack_800 = uStack_480;
      uStack_7e8 = uStack_468;
      uStack_7f0 = uStack_470;
      uStack_838 = uStack_4b8;
      uStack_840 = uStack_4c0;
      uStack_828 = uStack_4a8;
      uStack_830 = uStack_4b0;
      FUN_1015cad70(&uStack_840);
      uStack_6b8 = uStack_798;
      uStack_6c0 = uStack_7a0;
      uStack_6a8 = uStack_788;
      uStack_6b0 = uStack_790;
      uStack_698 = uStack_778;
      uStack_6a0 = uStack_780;
      uStack_68f = CONCAT17(uStack_768,uStack_76f);
      uStack_697 = uStack_777;
      uStack_690 = uStack_770;
      uStack_6f8 = uStack_7d8;
      uStack_700 = uStack_7e0;
      uStack_6e8 = uStack_7c8;
      uStack_6f0 = uStack_7d0;
      uStack_6d8 = uStack_7b8;
      uStack_6e0 = uStack_7c0;
      uStack_6c8 = uStack_7a8;
      uStack_6d0 = uStack_7b0;
      uStack_738 = uStack_818;
      uStack_740 = uStack_820;
      uStack_728 = uStack_808;
      uStack_730 = uStack_810;
      uStack_718 = uStack_7f8;
      uStack_720 = uStack_800;
      uStack_708 = uStack_7e8;
      uStack_710 = uStack_7f0;
      uStack_758 = uStack_838;
      uStack_760 = uStack_840;
      uStack_748 = uStack_828;
      uStack_750 = uStack_830;
      func_0x0001015cac00(&uStack_760);
      uStack_5d8 = param_1[0x15];
      uStack_5e0 = param_1[0x14];
      uStack_5c8 = param_1[0x17];
      uStack_5d0 = param_1[0x16];
      uStack_5c0 = param_1[0x18];
      uStack_5b8 = (undefined1)param_1[0x19];
      uStack_5af = (undefined7)*(undefined8 *)((long)param_1 + 0xd1);
      uStack_5a8 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xd1) >> 0x38);
      uStack_5b7 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_5b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_618 = param_1[0xd];
      uStack_620 = param_1[0xc];
      uStack_608 = param_1[0xf];
      uStack_610 = param_1[0xe];
      uStack_5f8 = param_1[0x11];
      uStack_600 = param_1[0x10];
      uStack_5e8 = param_1[0x13];
      uStack_5f0 = param_1[0x12];
      uStack_658 = param_1[5];
      uStack_660 = param_1[4];
      uStack_648 = param_1[7];
      uStack_650 = param_1[6];
      uStack_638 = param_1[9];
      uStack_640 = param_1[8];
      uStack_628 = param_1[0xb];
      uStack_630 = param_1[10];
      uStack_678 = param_1[1];
      uStack_680 = *param_1;
      uStack_668 = param_1[3];
      uStack_670 = param_1[2];
      param_1[0x15] = uStack_6b8;
      param_1[0x14] = uStack_6c0;
      param_1[0x17] = uStack_6a8;
      param_1[0x16] = uStack_6b0;
      param_1[0x19] = CONCAT71(uStack_697,uStack_698);
      param_1[0x18] = uStack_6a0;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_68f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_690,uStack_697);
      param_1[0xd] = uStack_6f8;
      param_1[0xc] = uStack_700;
      param_1[0xf] = uStack_6e8;
      param_1[0xe] = uStack_6f0;
      param_1[0x11] = uStack_6d8;
      param_1[0x10] = uStack_6e0;
      param_1[0x13] = uStack_6c8;
      param_1[0x12] = uStack_6d0;
      param_1[5] = uStack_738;
      param_1[4] = uStack_740;
      param_1[7] = uStack_728;
      param_1[6] = uStack_730;
      param_1[9] = uStack_718;
      param_1[8] = uStack_720;
      param_1[0xb] = uStack_708;
      param_1[10] = uStack_710;
      param_1[1] = uStack_758;
      *param_1 = uStack_760;
      param_1[3] = uStack_748;
      param_1[2] = uStack_750;
      uVar5 = 0x112db3cf0;
      puVar6 = &UNK_10d95e250;
      puVar2 = &uStack_680;
      goto LAB_1015ce780;
    }
  }
  uVar5 = 0x112db8200;
  puVar6 = &UNK_10d9674a0;
  puVar2 = &uStack_3e0;
LAB_1015ce780:
  func_0x0001015d5598(puVar2,uVar5,puVar6);
  return;
}



/* Entry: 1015ce9e8; end: 1015ced97;  */

/* WARNING: Removing unreachable block (ram,0x0001015cec78) */

void FUN_1015ce9e8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x21;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined8 uStack_41f;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lStack_a8 = param_1[0x15];
  lStack_b0 = param_1[0x14];
  lStack_178 = param_1[0x17];
  lStack_180 = param_1[0x16];
  lStack_b8 = param_1[0x13];
  lStack_c0 = param_1[0x12];
  lStack_188 = param_1[0x15];
  lStack_190 = param_1[0x14];
  lStack_98 = param_1[0x17];
  lStack_a0 = param_1[0x16];
  lStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  lStack_e8 = param_1[0xd];
  lStack_f0 = param_1[0xc];
  lStack_1b8 = param_1[0xf];
  lStack_1c0 = param_1[0xe];
  lStack_f8 = param_1[0xb];
  lStack_100 = param_1[10];
  lStack_1c8 = param_1[0xd];
  lStack_1d0 = param_1[0xc];
  lStack_d8 = param_1[0xf];
  lStack_e0 = param_1[0xe];
  lStack_1a8 = param_1[0x11];
  lStack_1b0 = param_1[0x10];
  lStack_c8 = param_1[0x11];
  lStack_d0 = param_1[0x10];
  lStack_198 = param_1[0x13];
  lStack_1a0 = param_1[0x12];
  lStack_128 = param_1[5];
  lStack_130 = param_1[4];
  lStack_1f8 = param_1[7];
  lStack_200 = param_1[6];
  lStack_138 = param_1[3];
  lStack_140 = param_1[2];
  lStack_208 = param_1[5];
  lStack_210 = param_1[4];
  lStack_118 = param_1[7];
  lStack_120 = param_1[6];
  lStack_1e8 = param_1[9];
  lStack_1f0 = param_1[8];
  lStack_108 = param_1[9];
  lStack_110 = param_1[8];
  lStack_1d8 = param_1[0xb];
  lStack_1e0 = param_1[10];
  lStack_228 = param_1[1];
  lStack_230 = *param_1;
  lStack_218 = param_1[3];
  lStack_220 = param_1[2];
  lStack_148 = param_1[1];
  lStack_150 = *param_1;
  lStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  lStack_240 = 0;
  lStack_248 = 0;
  lStack_238 = 0;
  plVar2 = &lStack_230;
  func_0x000101551ac8();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    lStack_288 = lStack_a8;
    lStack_290 = lStack_b0;
    lStack_278 = lStack_98;
    lStack_280 = lStack_a0;
    uStack_268 = uStack_88;
    lStack_270 = lStack_90;
    uStack_25f = uStack_7f;
    uStack_267 = uStack_87;
    uStack_260 = uStack_80;
    lStack_2c8 = lStack_e8;
    lStack_2d0 = lStack_f0;
    lStack_2b8 = lStack_d8;
    lStack_2c0 = lStack_e0;
    lStack_2a8 = lStack_c8;
    lStack_2b0 = lStack_d0;
    lStack_298 = lStack_b8;
    lStack_2a0 = lStack_c0;
    lStack_308 = lStack_128;
    lStack_310 = lStack_130;
    lStack_2f8 = lStack_118;
    lStack_300 = lStack_120;
    lStack_2e8 = lStack_108;
    lStack_2f0 = lStack_110;
    lStack_2d8 = lStack_f8;
    lStack_2e0 = lStack_100;
    lStack_328 = lStack_148;
    lStack_330 = lStack_150;
    lStack_318 = lStack_138;
    lStack_320 = lStack_140;
    plVar2 = &lStack_150;
    func_0x000101551adc();
    if ((int)plVar2 == 0xc) {
      plVar2 = &lStack_330;
      FUN_10155371c();
      lVar6 = plVar2[1];
      lVar5 = *plVar2;
      lVar4 = plVar2[2];
      lStack_3c8 = lStack_1e8;
      lStack_3d0 = lStack_1f0;
      lStack_3b8 = lStack_1d8;
      lStack_3c0 = lStack_1e0;
      lStack_3e8 = lStack_208;
      lStack_3f0 = lStack_210;
      lStack_3d8 = lStack_1f8;
      lStack_3e0 = lStack_200;
      lStack_388 = lStack_1a8;
      lStack_390 = lStack_1b0;
      lStack_378 = lStack_198;
      lStack_380 = lStack_1a0;
      lStack_3a8 = lStack_1c8;
      lStack_3b0 = lStack_1d0;
      lStack_398 = lStack_1b8;
      lStack_3a0 = lStack_1c0;
      uStack_33f = uStack_15f;
      uStack_340 = uStack_160;
      lStack_358 = lStack_178;
      lStack_360 = lStack_180;
      uStack_348 = uStack_168;
      uStack_347 = uStack_167;
      lStack_350 = lStack_170;
      lStack_368 = lStack_188;
      lStack_370 = lStack_190;
      lStack_408 = lStack_228;
      lStack_410 = lStack_230;
      lStack_3f8 = lStack_218;
      lStack_400 = lStack_220;
      FUN_1015537b4(&lStack_410,&lStack_4f0);
      plVar2 = (long *)0x0;
      FUN_1015d5564(0,0,0);
      lStack_248 = lVar5;
      lStack_240 = lVar6;
      lStack_238 = lVar4;
    }
  }
  pcVar3 = *(code **)(param_4 + 0x198);
  func_0x0001015d53a0();
  (*pcVar3)(&lStack_248,&UNK_1103e83c8,plVar2,param_3,param_4);
  lVar6 = lStack_238;
  lVar5 = lStack_240;
  lVar4 = lStack_248;
  if ((unaff_x21 == 0) && (lStack_248 != 0)) {
    if (iVar1 == 1) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar5,lVar6);
    }
    else {
      pcVar3 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar5,lVar6);
      (*pcVar3)(param_3,param_4);
    }
    FUN_1015d5564(lStack_248,lStack_240,lStack_238);
    lStack_4f0 = lVar4;
    lStack_4e8 = lVar5;
    lStack_4e0 = lVar6;
    FUN_1015cadbc(&lStack_4f0);
    lStack_368 = lStack_448;
    lStack_370 = lStack_450;
    lStack_358 = lStack_438;
    lStack_360 = lStack_440;
    uStack_348 = uStack_428;
    lStack_350 = lStack_430;
    uStack_33f = uStack_41f;
    uStack_347 = uStack_427;
    uStack_340 = uStack_420;
    lStack_3a8 = lStack_488;
    lStack_3b0 = lStack_490;
    lStack_398 = lStack_478;
    lStack_3a0 = lStack_480;
    lStack_388 = lStack_468;
    lStack_390 = lStack_470;
    lStack_378 = lStack_458;
    lStack_380 = lStack_460;
    lStack_3e8 = lStack_4c8;
    lStack_3f0 = lStack_4d0;
    lStack_3d8 = lStack_4b8;
    lStack_3e0 = lStack_4c0;
    lStack_3c8 = lStack_4a8;
    lStack_3d0 = lStack_4b0;
    lStack_3b8 = lStack_498;
    lStack_3c0 = lStack_4a0;
    lStack_408 = lStack_4e8;
    lStack_410 = lStack_4f0;
    lStack_3f8 = lStack_4d8;
    lStack_400 = lStack_4e0;
    func_0x0001015cac00(&lStack_410);
    lStack_288 = param_1[0x15];
    lStack_290 = param_1[0x14];
    lStack_278 = param_1[0x17];
    lStack_280 = param_1[0x16];
    lStack_270 = param_1[0x18];
    uStack_268 = (undefined1)param_1[0x19];
    uStack_25f = *(undefined8 *)((long)param_1 + 0xd1);
    uStack_267 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
    uStack_260 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
    lStack_2c8 = param_1[0xd];
    lStack_2d0 = param_1[0xc];
    lStack_2b8 = param_1[0xf];
    lStack_2c0 = param_1[0xe];
    lStack_2a8 = param_1[0x11];
    lStack_2b0 = param_1[0x10];
    lStack_298 = param_1[0x13];
    lStack_2a0 = param_1[0x12];
    lStack_308 = param_1[5];
    lStack_310 = param_1[4];
    lStack_2f8 = param_1[7];
    lStack_300 = param_1[6];
    lStack_2e8 = param_1[9];
    lStack_2f0 = param_1[8];
    lStack_2d8 = param_1[0xb];
    lStack_2e0 = param_1[10];
    lStack_328 = param_1[1];
    lStack_330 = *param_1;
    lStack_318 = param_1[3];
    lStack_320 = param_1[2];
    param_1[0x15] = lStack_368;
    param_1[0x14] = lStack_370;
    param_1[0x17] = lStack_358;
    param_1[0x16] = lStack_360;
    param_1[0x19] = CONCAT71(uStack_347,uStack_348);
    param_1[0x18] = lStack_350;
    *(undefined8 *)((long)param_1 + 0xd1) = uStack_33f;
    *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_340,uStack_347);
    param_1[0xd] = lStack_3a8;
    param_1[0xc] = lStack_3b0;
    param_1[0xf] = lStack_398;
    param_1[0xe] = lStack_3a0;
    param_1[0x11] = lStack_388;
    param_1[0x10] = lStack_390;
    param_1[0x13] = lStack_378;
    param_1[0x12] = lStack_380;
    param_1[5] = lStack_3e8;
    param_1[4] = lStack_3f0;
    param_1[7] = lStack_3d8;
    param_1[6] = lStack_3e0;
    param_1[9] = lStack_3c8;
    param_1[8] = lStack_3d0;
    param_1[0xb] = lStack_3b8;
    param_1[10] = lStack_3c0;
    param_1[1] = lStack_408;
    *param_1 = lStack_410;
    param_1[3] = lStack_3f8;
    param_1[2] = lStack_400;
    func_0x0001015d5598(&lStack_330,0x112db3cf0,&UNK_10d95e250);
  }
  else {
    FUN_1015d5564(lStack_248,lStack_240,lStack_238);
  }
  return;
}



/* Entry: 1015ced98; end: 1015cf29b;  */

/* WARNING: Removing unreachable block (ram,0x0001015cf13c) */

void FUN_1015ced98(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_650;
  long lStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 uStack_588;
  undefined7 uStack_587;
  undefined1 uStack_580;
  undefined8 uStack_57f;
  undefined8 uStack_570;
  long lStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined8 uStack_49f;
  undefined8 uStack_490;
  long lStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined7 uStack_3c7;
  undefined1 uStack_3c0;
  undefined8 uStack_3bf;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_a8 = param_1[0x15];
  uStack_b0 = param_1[0x14];
  uStack_178 = param_1[0x17];
  uStack_180 = param_1[0x16];
  uStack_b8 = param_1[0x13];
  uStack_c0 = param_1[0x12];
  uStack_188 = param_1[0x15];
  uStack_190 = param_1[0x14];
  uStack_98 = param_1[0x17];
  uStack_a0 = param_1[0x16];
  uStack_170 = param_1[0x18];
  uStack_168 = (undefined1)param_1[0x19];
  uStack_15f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_167 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_160 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  uStack_1b8 = param_1[0xf];
  uStack_1c0 = param_1[0xe];
  uStack_f8 = param_1[0xb];
  uStack_100 = param_1[10];
  uStack_1c8 = param_1[0xd];
  uStack_1d0 = param_1[0xc];
  uStack_d8 = param_1[0xf];
  uStack_e0 = param_1[0xe];
  uStack_1a8 = param_1[0x11];
  uStack_1b0 = param_1[0x10];
  uStack_c8 = param_1[0x11];
  uStack_d0 = param_1[0x10];
  uStack_198 = param_1[0x13];
  uStack_1a0 = param_1[0x12];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_1d8 = param_1[0xb];
  uStack_1e0 = param_1[10];
  lStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_90 = param_1[0x18];
  uStack_88 = (undefined1)param_1[0x19];
  uStack_7f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_240 = 0;
  puVar2 = &uStack_230;
  func_0x000101551ac8();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_3e8 = uStack_a8;
    uStack_3f0 = uStack_b0;
    uStack_3d8 = uStack_98;
    uStack_3e0 = uStack_a0;
    uStack_3c8 = uStack_88;
    uStack_3d0 = uStack_90;
    uStack_3bf = uStack_7f;
    uStack_3c7 = uStack_87;
    uStack_3c0 = uStack_80;
    uStack_428 = uStack_e8;
    uStack_430 = uStack_f0;
    uStack_418 = uStack_d8;
    uStack_420 = uStack_e0;
    uStack_408 = uStack_c8;
    uStack_410 = uStack_d0;
    uStack_3f8 = uStack_b8;
    uStack_400 = uStack_c0;
    uStack_468 = uStack_128;
    uStack_470 = uStack_130;
    uStack_458 = uStack_118;
    uStack_460 = uStack_120;
    uStack_448 = uStack_108;
    uStack_450 = uStack_110;
    uStack_438 = uStack_f8;
    uStack_440 = uStack_100;
    lStack_488 = uStack_148;
    uStack_490 = uStack_150;
    uStack_478 = uStack_138;
    uStack_480 = uStack_140;
    puVar2 = &uStack_150;
    func_0x000101551adc();
    if ((int)puVar2 == 0xd) {
      puVar3 = &uStack_490;
      FUN_1015cafe0();
      lStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2c0 = 0;
      uStack_4c8 = uStack_188;
      uStack_4d0 = uStack_190;
      uStack_4b8 = uStack_178;
      uStack_4c0 = uStack_180;
      uStack_4a8 = uStack_168;
      uStack_4b0 = uStack_170;
      uStack_49f = uStack_15f;
      uStack_4a7 = uStack_167;
      uStack_4a0 = uStack_160;
      uStack_508 = uStack_1c8;
      uStack_510 = uStack_1d0;
      uStack_4f8 = uStack_1b8;
      uStack_500 = uStack_1c0;
      uStack_4e8 = uStack_1a8;
      uStack_4f0 = uStack_1b0;
      uStack_4d8 = uStack_198;
      uStack_4e0 = uStack_1a0;
      uStack_548 = uStack_208;
      uStack_550 = uStack_210;
      uStack_538 = uStack_1f8;
      uStack_540 = uStack_200;
      uStack_528 = uStack_1e8;
      uStack_530 = uStack_1f0;
      uStack_518 = uStack_1d8;
      uStack_520 = uStack_1e0;
      lStack_568 = lStack_228;
      uStack_570 = uStack_230;
      uStack_558 = uStack_218;
      uStack_560 = uStack_220;
      FUN_1015537b4(&uStack_570,&uStack_650);
      puVar2 = &uStack_330;
      func_0x0001015d5598(puVar2,0x112db8208,&UNK_10d9674a8);
      uStack_288 = puVar3[5];
      uStack_290 = puVar3[4];
      uStack_278 = puVar3[7];
      uStack_280 = puVar3[6];
      lStack_2a8 = puVar3[1];
      uStack_2b0 = *puVar3;
      uStack_298 = puVar3[3];
      uStack_2a0 = puVar3[2];
      uStack_258 = puVar3[0xb];
      uStack_260 = puVar3[10];
      uStack_248 = puVar3[0xd];
      uStack_250 = puVar3[0xc];
      uStack_240 = puVar3[0xe];
      uStack_268 = puVar3[9];
      uStack_270 = puVar3[8];
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x0001015d53e0();
  (*pcVar6)(&uStack_2b0,&UNK_1103e5f90,puVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_368 = uStack_268;
    uStack_370 = uStack_270;
    uStack_358 = uStack_258;
    uStack_360 = uStack_260;
    uStack_2e8 = uStack_268;
    uStack_2f0 = uStack_270;
    uStack_2d8 = uStack_258;
    uStack_2e0 = uStack_260;
    uStack_348 = uStack_248;
    uStack_350 = uStack_250;
    uStack_2c8 = uStack_248;
    uStack_2d0 = uStack_250;
    lStack_3a8 = lStack_2a8;
    uStack_3b0 = uStack_2b0;
    uStack_398 = uStack_298;
    uStack_3a0 = uStack_2a0;
    lStack_328 = lStack_2a8;
    uStack_330 = uStack_2b0;
    uStack_318 = uStack_298;
    uStack_320 = uStack_2a0;
    uStack_388 = uStack_288;
    uStack_390 = uStack_290;
    uStack_378 = uStack_278;
    uStack_380 = uStack_280;
    uStack_308 = uStack_288;
    uStack_310 = uStack_290;
    uStack_2f8 = uStack_278;
    uStack_300 = uStack_280;
    uStack_340 = uStack_240;
    uStack_2c0 = uStack_240;
    if (lStack_2a8 != 0) {
      if (iVar1 == 1) {
        uStack_448 = uStack_268;
        uStack_450 = uStack_270;
        uStack_438 = uStack_258;
        uStack_440 = uStack_260;
        uStack_428 = uStack_248;
        uStack_430 = uStack_250;
        uStack_420 = uStack_240;
        lStack_488 = lStack_2a8;
        uStack_490 = uStack_2b0;
        uStack_478 = uStack_298;
        uStack_480 = uStack_2a0;
        uStack_468 = uStack_288;
        uStack_470 = uStack_290;
        uStack_458 = uStack_278;
        uStack_460 = uStack_280;
        FUN_1015caff0(&uStack_490,&uStack_570);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_448 = uStack_268;
        uStack_450 = uStack_270;
        uStack_438 = uStack_258;
        uStack_440 = uStack_260;
        uStack_428 = uStack_248;
        uStack_430 = uStack_250;
        uStack_420 = uStack_240;
        lStack_488 = lStack_2a8;
        uStack_490 = uStack_2b0;
        uStack_478 = uStack_298;
        uStack_480 = uStack_2a0;
        uStack_468 = uStack_288;
        uStack_470 = uStack_290;
        uStack_458 = uStack_278;
        uStack_460 = uStack_280;
        FUN_1015caff0(&uStack_490,&uStack_570);
        (*pcVar6)(param_3,param_4);
      }
      func_0x0001015d5598(&uStack_2b0,0x112db8208,&UNK_10d9674a8);
      uStack_608 = uStack_2e8;
      uStack_610 = uStack_2f0;
      uStack_5f8 = uStack_2d8;
      uStack_600 = uStack_2e0;
      uStack_5e8 = uStack_2c8;
      uStack_5f0 = uStack_2d0;
      uStack_5e0 = uStack_2c0;
      lStack_648 = lStack_328;
      uStack_650 = uStack_330;
      uStack_638 = uStack_318;
      uStack_640 = uStack_320;
      uStack_628 = uStack_308;
      uStack_630 = uStack_310;
      uStack_618 = uStack_2f8;
      uStack_620 = uStack_300;
      FUN_1015cafe0(&uStack_650);
      uStack_4c8 = uStack_5a8;
      uStack_4d0 = uStack_5b0;
      uStack_4b8 = uStack_598;
      uStack_4c0 = uStack_5a0;
      uStack_4a8 = uStack_588;
      uStack_4b0 = uStack_590;
      uStack_49f = uStack_57f;
      uStack_4a7 = uStack_587;
      uStack_4a0 = uStack_580;
      uStack_508 = uStack_5e8;
      uStack_510 = uStack_5f0;
      uStack_4f8 = uStack_5d8;
      uStack_500 = uStack_5e0;
      uStack_4e8 = uStack_5c8;
      uStack_4f0 = uStack_5d0;
      uStack_4d8 = uStack_5b8;
      uStack_4e0 = uStack_5c0;
      uStack_548 = uStack_628;
      uStack_550 = uStack_630;
      uStack_538 = uStack_618;
      uStack_540 = uStack_620;
      uStack_528 = uStack_608;
      uStack_530 = uStack_610;
      uStack_518 = uStack_5f8;
      uStack_520 = uStack_600;
      lStack_568 = lStack_648;
      uStack_570 = uStack_650;
      uStack_558 = uStack_638;
      uStack_560 = uStack_640;
      func_0x0001015cac00(&uStack_570);
      uStack_3e8 = param_1[0x15];
      uStack_3f0 = param_1[0x14];
      uStack_3d8 = param_1[0x17];
      uStack_3e0 = param_1[0x16];
      uStack_3d0 = param_1[0x18];
      uStack_3c8 = (undefined1)param_1[0x19];
      uStack_3bf = *(undefined8 *)((long)param_1 + 0xd1);
      uStack_3c7 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
      uStack_3c0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
      uStack_428 = param_1[0xd];
      uStack_430 = param_1[0xc];
      uStack_418 = param_1[0xf];
      uStack_420 = param_1[0xe];
      uStack_408 = param_1[0x11];
      uStack_410 = param_1[0x10];
      uStack_3f8 = param_1[0x13];
      uStack_400 = param_1[0x12];
      uStack_468 = param_1[5];
      uStack_470 = param_1[4];
      uStack_458 = param_1[7];
      uStack_460 = param_1[6];
      uStack_448 = param_1[9];
      uStack_450 = param_1[8];
      uStack_438 = param_1[0xb];
      uStack_440 = param_1[10];
      lStack_488 = param_1[1];
      uStack_490 = *param_1;
      uStack_478 = param_1[3];
      uStack_480 = param_1[2];
      param_1[0x15] = uStack_4c8;
      param_1[0x14] = uStack_4d0;
      param_1[0x17] = uStack_4b8;
      param_1[0x16] = uStack_4c0;
      param_1[0x19] = CONCAT71(uStack_4a7,uStack_4a8);
      param_1[0x18] = uStack_4b0;
      *(undefined8 *)((long)param_1 + 0xd1) = uStack_49f;
      *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_4a0,uStack_4a7);
      param_1[0xd] = uStack_508;
      param_1[0xc] = uStack_510;
      param_1[0xf] = uStack_4f8;
      param_1[0xe] = uStack_500;
      param_1[0x11] = uStack_4e8;
      param_1[0x10] = uStack_4f0;
      param_1[0x13] = uStack_4d8;
      param_1[0x12] = uStack_4e0;
      param_1[5] = uStack_548;
      param_1[4] = uStack_550;
      param_1[7] = uStack_538;
      param_1[6] = uStack_540;
      param_1[9] = uStack_528;
      param_1[8] = uStack_530;
      param_1[0xb] = uStack_518;
      param_1[10] = uStack_520;
      param_1[1] = lStack_568;
      *param_1 = uStack_570;
      param_1[3] = uStack_558;
      param_1[2] = uStack_560;
      uVar4 = 0x112db3cf0;
      puVar5 = &UNK_10d95e250;
      puVar2 = &uStack_490;
      goto LAB_1015cf02c;
    }
  }
  uVar4 = 0x112db8208;
  puVar5 = &UNK_10d9674a8;
  puVar2 = &uStack_2b0;
LAB_1015cf02c:
  func_0x0001015d5598(puVar2,uVar4,puVar5);
  return;
}



/* Entry: 1015cf29c; end: 1015cf617;  */

void FUN_1015cf29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  iVar1 = (int)&uStack_210;
  uStack_168 = unaff_x20[0x15];
  uStack_170 = unaff_x20[0x14];
  uStack_158 = unaff_x20[0x17];
  uStack_160 = unaff_x20[0x16];
  uStack_150 = unaff_x20[0x18];
  uStack_148 = (undefined1)unaff_x20[0x19];
  uStack_13f = *(undefined8 *)((long)unaff_x20 + 0xd1);
  uStack_147 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0xc9);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc9) >> 0x38);
  uStack_1a8 = unaff_x20[0xd];
  uStack_1b0 = unaff_x20[0xc];
  uStack_198 = unaff_x20[0xf];
  uStack_1a0 = unaff_x20[0xe];
  uStack_188 = unaff_x20[0x11];
  uStack_190 = unaff_x20[0x10];
  uStack_178 = unaff_x20[0x13];
  uStack_180 = unaff_x20[0x12];
  uStack_1e8 = unaff_x20[5];
  uStack_1f0 = unaff_x20[4];
  uStack_1d8 = unaff_x20[7];
  uStack_1e0 = unaff_x20[6];
  uStack_1c8 = unaff_x20[9];
  uStack_1d0 = unaff_x20[8];
  uStack_1b8 = unaff_x20[0xb];
  uStack_1c0 = unaff_x20[10];
  uStack_208 = unaff_x20[1];
  uStack_210 = *unaff_x20;
  uStack_1f8 = unaff_x20[3];
  uStack_200 = unaff_x20[2];
  func_0x000101551ac8();
  if (iVar1 == 1) {
    FUN_1015d0614();
    if (unaff_x21 == 0) {
      FUN_1015d06b0();
      FUN_1015d073c();
      func_0x000100076224(param_1,unaff_x20[0x1c],unaff_x20[0x1d],param_2,param_3);
    }
    return;
  }
  uStack_88 = uStack_168;
  uStack_90 = uStack_170;
  uStack_78 = uStack_158;
  uStack_80 = uStack_160;
  uStack_68 = uStack_148;
  uStack_70 = uStack_150;
  uStack_5f = uStack_13f;
  uStack_67 = uStack_147;
  uStack_60 = uStack_140;
  uStack_c8 = uStack_1a8;
  uStack_d0 = uStack_1b0;
  uStack_b8 = uStack_198;
  uStack_c0 = uStack_1a0;
  uStack_a8 = uStack_188;
  uStack_b0 = uStack_190;
  uStack_98 = uStack_178;
  uStack_a0 = uStack_180;
  uStack_108 = uStack_1e8;
  uStack_110 = uStack_1f0;
  uStack_f8 = uStack_1d8;
  uStack_100 = uStack_1e0;
  uStack_e8 = uStack_1c8;
  uStack_f0 = uStack_1d0;
  uStack_d8 = uStack_1b8;
  uStack_e0 = uStack_1c0;
  uStack_128 = uStack_208;
  uStack_130 = uStack_210;
  uStack_118 = uStack_1f8;
  uStack_120 = uStack_200;
  puVar2 = &uStack_130;
  func_0x000101551adc();
                    /* WARNING: Could not recover jumptable at 0x0001015cf3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10d967180)[(ulong)puVar2 & 0xffffffff] * 4 + 0x1015cf3ec))();
  return;
}



/* Entry: 1015cf618; end: 1015cf743;  */

void FUN_1015cf618(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 0) {
      puVar2 = &uStack_120;
      func_0x000101553998();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_210 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d50e0();
      (*pcVar3)(&uStack_220,1,&UNK_1103e43a0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015cf744);
  (*pcVar3)();
}



/* Entry: 1015cf744; end: 1015cf88b;  */

void FUN_1015cf744(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 1) {
      puVar2 = &uStack_120;
      func_0x0001015cac04();
      uStack_268 = puVar2[1];
      uStack_270 = *puVar2;
      uStack_258 = puVar2[3];
      uStack_260 = puVar2[2];
      uStack_248 = puVar2[5];
      uStack_250 = puVar2[4];
      uStack_238 = puVar2[7];
      uStack_240 = puVar2[6];
      uStack_228 = puVar2[9];
      uStack_230 = puVar2[8];
      uStack_218 = puVar2[0xb];
      uStack_220 = puVar2[10];
      uStack_210 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d5120();
      (*pcVar3)(&uStack_270,2,&UNK_1103ed148,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015cf88c);
  (*pcVar3)();
}



/* Entry: 1015cf88c; end: 1015cf9bb;  */

void FUN_1015cf88c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 2) {
      puVar2 = &uStack_120;
      FUN_101553990();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_210 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d5160();
      (*pcVar3)(&uStack_220,3,&UNK_110666f08,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015cf9bc);
  (*pcVar3)();
}



/* Entry: 1015cf9bc; end: 1015cfaeb;  */

void FUN_1015cf9bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 3) {
      puVar2 = &uStack_120;
      FUN_101553990();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_210 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d51a0();
      (*pcVar3)(&uStack_220,4,&UNK_1106673e8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015cfaec);
  (*pcVar3)();
}



/* Entry: 1015cfaec; end: 1015cfc1b;  */

void FUN_1015cfaec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 4) {
      puVar2 = &uStack_120;
      func_0x000101553948();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_210 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d51e0();
      (*pcVar3)(&uStack_220,5,&UNK_1103ed2f8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015cfc1c);
  (*pcVar3)();
}



/* Entry: 1015cfc1c; end: 1015cfd7b;  */

void FUN_1015cfc1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 5) {
      puVar2 = &uStack_120;
      FUN_101553898();
      uStack_2c8 = puVar2[1];
      uStack_2d0 = *puVar2;
      uStack_2b8 = puVar2[3];
      uStack_2c0 = puVar2[2];
      uStack_2a8 = puVar2[5];
      uStack_2b0 = puVar2[4];
      uStack_298 = puVar2[7];
      uStack_2a0 = puVar2[6];
      uStack_288 = puVar2[9];
      uStack_290 = puVar2[8];
      uStack_278 = puVar2[0xb];
      uStack_280 = puVar2[10];
      uStack_268 = puVar2[0xd];
      uStack_270 = puVar2[0xc];
      uStack_258 = puVar2[0xf];
      uStack_260 = puVar2[0xe];
      uStack_248 = puVar2[0x11];
      uStack_250 = puVar2[0x10];
      uStack_238 = puVar2[0x13];
      uStack_240 = puVar2[0x12];
      uStack_228 = puVar2[0x15];
      uStack_230 = puVar2[0x14];
      uStack_218 = puVar2[0x17];
      uStack_220 = puVar2[0x16];
      uStack_210 = puVar2[0x18];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d5220();
      (*pcVar3)(&uStack_2d0,6,&UNK_1103e4c00,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015cfd7c);
  (*pcVar3)();
}



/* Entry: 1015cfd7c; end: 1015cfeab;  */

void FUN_1015cfd7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 6) {
      puVar2 = &uStack_120;
      FUN_101553860();
      uStack_228 = puVar2[1];
      uStack_230 = *puVar2;
      uStack_218 = puVar2[3];
      uStack_220 = puVar2[2];
      uStack_208 = puVar2[5];
      uStack_210 = puVar2[4];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d5260();
      (*pcVar3)(&uStack_230,7,&UNK_1103e41f0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015cfeac);
  (*pcVar3)();
}



/* Entry: 1015cfeac; end: 1015cffeb;  */

void FUN_1015cfeac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 7) {
      puVar2 = &uStack_120;
      FUN_101553828();
      uStack_248 = puVar2[1];
      uStack_250 = *puVar2;
      uStack_238 = puVar2[3];
      uStack_240 = puVar2[2];
      uStack_228 = puVar2[5];
      uStack_230 = puVar2[4];
      uStack_218 = puVar2[7];
      uStack_220 = puVar2[6];
      uStack_210 = puVar2[8];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d52a0();
      (*pcVar3)(&uStack_250,8,&UNK_1103e46f8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015cffec);
  (*pcVar3)();
}



/* Entry: 1015cffec; end: 1015d0113;  */

void FUN_1015cffec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 8) {
      puVar2 = &uStack_120;
      FUN_1015537f0();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_208 = puVar2[3];
      uStack_210 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d52e0();
      (*pcVar3)(&uStack_220,9,&UNK_1103e4938,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015d0114);
  (*pcVar3)();
}



/* Entry: 1015d0114; end: 1015d0243;  */

void FUN_1015d0114(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 9) {
      puVar2 = &uStack_120;
      func_0x0001015537b0();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_210 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      FUN_101553758();
      (*pcVar3)(&uStack_220,10,&UNK_1103e5558,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015d0244);
  (*pcVar3)();
}



/* Entry: 1015d0244; end: 1015d0383;  */

void FUN_1015d0244(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 10) {
      puVar2 = &uStack_120;
      FUN_101553754();
      uStack_268 = puVar2[1];
      uStack_270 = *puVar2;
      uStack_258 = puVar2[3];
      uStack_260 = puVar2[2];
      uStack_248 = puVar2[5];
      uStack_250 = puVar2[4];
      uStack_238 = puVar2[7];
      uStack_240 = puVar2[6];
      uStack_228 = puVar2[9];
      uStack_230 = puVar2[8];
      uStack_218 = puVar2[0xb];
      uStack_220 = puVar2[10];
      uStack_208 = puVar2[0xd];
      uStack_210 = puVar2[0xc];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d5320();
      (*pcVar3)(&uStack_270,0xb,&UNK_1103e67e0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015d0384);
  (*pcVar3)();
}



/* Entry: 1015d0384; end: 1015d04e3;  */

void FUN_1015d0384(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 0xb) {
      puVar2 = &uStack_120;
      FUN_1015cad70();
      uStack_2d8 = puVar2[1];
      uStack_2e0 = *puVar2;
      uStack_2c8 = puVar2[3];
      uStack_2d0 = puVar2[2];
      uStack_2b8 = puVar2[5];
      uStack_2c0 = puVar2[4];
      uStack_2a8 = puVar2[7];
      uStack_2b0 = puVar2[6];
      uStack_298 = puVar2[9];
      uStack_2a0 = puVar2[8];
      uStack_288 = puVar2[0xb];
      uStack_290 = puVar2[10];
      uStack_278 = puVar2[0xd];
      uStack_280 = puVar2[0xc];
      uStack_268 = puVar2[0xf];
      uStack_270 = puVar2[0xe];
      uStack_258 = puVar2[0x11];
      uStack_260 = puVar2[0x10];
      uStack_248 = puVar2[0x13];
      uStack_250 = puVar2[0x12];
      uStack_238 = puVar2[0x15];
      uStack_240 = puVar2[0x14];
      uStack_228 = puVar2[0x17];
      uStack_230 = puVar2[0x16];
      uStack_218 = puVar2[0x19];
      uStack_220 = puVar2[0x18];
      uStack_210 = puVar2[0x1a];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d5360();
      (*pcVar3)(&uStack_2e0,0xc,&UNK_1103e6378,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015d04e4);
  (*pcVar3)();
}



/* Entry: 1015d04e4; end: 1015d0613;  */

void FUN_1015d04e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 0xc) {
      puVar2 = &uStack_120;
      FUN_10155371c();
      uStack_218 = puVar2[1];
      uStack_220 = *puVar2;
      uStack_210 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d53a0();
      (*pcVar3)(&uStack_220,0xd,&UNK_1103e83c8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015d0614);
  (*pcVar3)();
}



/* Entry: 1015d0614; end: 1015d06af;  */

void FUN_1015d0614(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_80 = *(ulong *)(param_1 + 0xf8);
  if (uStack_80 >> 0x3c < 0xf) {
    uStack_88 = *(undefined8 *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0x108);
    uStack_78 = *(undefined8 *)(param_1 + 0x100);
    uStack_60 = *(undefined8 *)(param_1 + 0x118);
    uStack_68 = *(undefined8 *)(param_1 + 0x110);
    uStack_50 = *(undefined8 *)(param_1 + 0x128);
    uStack_58 = *(undefined8 *)(param_1 + 0x120);
    uStack_48 = *(undefined8 *)(param_1 + 0x130);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015d2aec();
    (*pcVar1)(&uStack_88,0xe,&UNK_1103e4048,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015d06b0; end: 1015d073b;  */

void FUN_1015d06b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x148);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x140);
    uStack_60 = *(undefined8 *)(param_1 + 0x138);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,0xf,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015d073c; end: 1015d0887;  */

void FUN_1015d073c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_140 = param_1[0x18];
  uStack_138 = (undefined1)param_1[0x19];
  uStack_12f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_137 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  iVar1 = (int)&uStack_200;
  func_0x000101551ac8();
  if (iVar1 != 1) {
    uStack_78 = uStack_158;
    uStack_80 = uStack_160;
    uStack_68 = uStack_148;
    uStack_70 = uStack_150;
    uStack_58 = uStack_138;
    uStack_60 = uStack_140;
    uStack_4f = uStack_12f;
    uStack_57 = uStack_137;
    uStack_50 = uStack_130;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_f8 = uStack_1d8;
    uStack_100 = uStack_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_d8 = uStack_1b8;
    uStack_e0 = uStack_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    iVar1 = (int)&uStack_120;
    func_0x000101551adc();
    if (iVar1 == 0xd) {
      puVar2 = &uStack_120;
      FUN_1015cafe0();
      uStack_278 = puVar2[1];
      uStack_280 = *puVar2;
      uStack_268 = puVar2[3];
      uStack_270 = puVar2[2];
      uStack_258 = puVar2[5];
      uStack_260 = puVar2[4];
      uStack_248 = puVar2[7];
      uStack_250 = puVar2[6];
      uStack_238 = puVar2[9];
      uStack_240 = puVar2[8];
      uStack_228 = puVar2[0xb];
      uStack_230 = puVar2[10];
      uStack_218 = puVar2[0xd];
      uStack_220 = puVar2[0xc];
      uStack_210 = puVar2[0xe];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001015d53e0();
      (*pcVar3)(&uStack_280,0x10,&UNK_1103e5f90,puVar2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1015d0888; end: 1015d088b;  */

uint FUN_1015d0888(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_950;
  ulong uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  ulong uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 uStack_888;
  undefined7 uStack_887;
  undefined1 uStack_880;
  undefined8 uStack_87f;
  undefined8 uStack_870;
  ulong uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  ulong uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined1 uStack_7a8;
  undefined7 uStack_7a7;
  undefined1 uStack_7a0;
  undefined8 uStack_79f;
  undefined1 auStack_788 [72];
  undefined8 uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  ulong uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  undefined7 uStack_627;
  undefined1 uStack_620;
  undefined8 uStack_61f;
  undefined8 uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 uStack_468;
  undefined7 uStack_467;
  undefined1 uStack_460;
  undefined8 uStack_45f;
  undefined8 uStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined8 uStack_37f;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  uStack_488 = param_1[0x15];
  uStack_490 = param_1[0x14];
  uStack_188 = param_1[0x17];
  uStack_190 = param_1[0x16];
  uStack_498 = param_1[0x13];
  uStack_4a0 = param_1[0x12];
  uStack_198 = param_1[0x15];
  uStack_1a0 = param_1[0x14];
  uStack_478 = param_1[0x17];
  uStack_480 = param_1[0x16];
  uStack_180 = param_1[0x18];
  uStack_178 = (undefined1)param_1[0x19];
  uStack_16f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_177 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_170 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  uStack_4c8 = param_1[0xd];
  uStack_4d0 = param_1[0xc];
  uStack_1c8 = param_1[0xf];
  uStack_1d0 = param_1[0xe];
  uStack_4d8 = param_1[0xb];
  uStack_4e0 = param_1[10];
  uStack_1d8 = param_1[0xd];
  uStack_1e0 = param_1[0xc];
  uStack_4b8 = param_1[0xf];
  uStack_4c0 = param_1[0xe];
  uStack_1b8 = param_1[0x11];
  uStack_1c0 = param_1[0x10];
  uStack_4a8 = param_1[0x11];
  uStack_4b0 = param_1[0x10];
  uStack_1a8 = param_1[0x13];
  uStack_1b0 = param_1[0x12];
  uStack_508 = param_1[5];
  uStack_510 = param_1[4];
  uStack_208 = param_1[7];
  uStack_210 = param_1[6];
  uStack_518 = param_1[3];
  uStack_520 = param_1[2];
  uStack_218 = param_1[5];
  uStack_220 = param_1[4];
  uStack_4f8 = param_1[7];
  uStack_500 = param_1[6];
  uStack_1f8 = param_1[9];
  uStack_200 = param_1[8];
  uStack_4e8 = param_1[9];
  uStack_4f0 = param_1[8];
  uStack_1e8 = param_1[0xb];
  uStack_1f0 = param_1[10];
  uStack_238 = param_1[1];
  uStack_240 = *param_1;
  uStack_228 = param_1[3];
  uStack_230 = param_1[2];
  uStack_528 = param_1[1];
  uStack_530 = *param_1;
  uStack_3a8 = param_2[0x15];
  uStack_3b0 = param_2[0x14];
  uStack_268 = param_2[0x17];
  uStack_270 = param_2[0x16];
  uStack_3b8 = param_2[0x13];
  uStack_3c0 = param_2[0x12];
  uStack_278 = param_2[0x15];
  uStack_280 = param_2[0x14];
  uStack_398 = param_2[0x17];
  uStack_3a0 = param_2[0x16];
  uStack_260 = param_2[0x18];
  uStack_258 = (undefined1)param_2[0x19];
  uStack_24f = *(undefined8 *)((long)param_2 + 0xd1);
  uStack_257 = (undefined7)*(undefined8 *)((long)param_2 + 0xc9);
  uStack_250 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xc9) >> 0x38);
  uStack_3e8 = param_2[0xd];
  uStack_3f0 = param_2[0xc];
  uStack_2a8 = param_2[0xf];
  uStack_2b0 = param_2[0xe];
  uStack_3f8 = param_2[0xb];
  uStack_400 = param_2[10];
  uStack_2b8 = param_2[0xd];
  uStack_2c0 = param_2[0xc];
  uStack_3d8 = param_2[0xf];
  uStack_3e0 = param_2[0xe];
  uStack_298 = param_2[0x11];
  uStack_2a0 = param_2[0x10];
  uStack_3c8 = param_2[0x11];
  uStack_3d0 = param_2[0x10];
  uStack_288 = param_2[0x13];
  uStack_290 = param_2[0x12];
  uStack_428 = param_2[5];
  uStack_430 = param_2[4];
  uStack_2e8 = param_2[7];
  uStack_2f0 = param_2[6];
  uStack_438 = param_2[3];
  uStack_440 = param_2[2];
  uStack_2f8 = param_2[5];
  uStack_300 = param_2[4];
  uStack_418 = param_2[7];
  uStack_420 = param_2[6];
  uStack_2d8 = param_2[9];
  uStack_2e0 = param_2[8];
  uStack_408 = param_2[9];
  uStack_410 = param_2[8];
  uStack_2d0 = param_2[10];
  uStack_2c8 = param_2[0xb];
  uStack_318 = param_2[1];
  uStack_320 = *param_2;
  uStack_310 = param_2[2];
  uStack_308 = param_2[3];
  uStack_448 = param_2[1];
  uStack_450 = *param_2;
  uStack_470 = param_1[0x18];
  uStack_468 = (undefined1)param_1[0x19];
  uStack_45f = *(undefined8 *)((long)param_1 + 0xd1);
  uStack_467 = (undefined7)*(undefined8 *)((long)param_1 + 0xc9);
  uStack_460 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0xc9) >> 0x38);
  iVar2 = (int)&uStack_450;
  uStack_37f = *(undefined8 *)((long)param_2 + 0xd1);
  uStack_380 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0xc9) >> 0x38);
  uStack_390 = param_2[0x18];
  uStack_388 = (undefined1)param_2[0x19];
  uStack_387 = (undefined7)((ulong)param_2[0x19] >> 8);
  iVar1 = (int)&uStack_530;
  func_0x000101551ac8();
  if (iVar1 == 1) {
    func_0x000101551ac8();
    if (iVar2 == 1) {
      uStack_648 = uStack_488;
      uStack_650 = uStack_490;
      uStack_638 = uStack_478;
      uStack_640 = uStack_480;
      uStack_628 = uStack_468;
      uStack_630 = uStack_470;
      uStack_61f = uStack_45f;
      uStack_627 = uStack_467;
      uStack_620 = uStack_460;
      uStack_688 = uStack_4c8;
      uStack_690 = uStack_4d0;
      uStack_678 = uStack_4b8;
      uStack_680 = uStack_4c0;
      uStack_668 = uStack_4a8;
      uStack_670 = uStack_4b0;
      uStack_658 = uStack_498;
      uStack_660 = uStack_4a0;
      uStack_6c8 = uStack_508;
      uStack_6d0 = uStack_510;
      uStack_6b8 = uStack_4f8;
      uStack_6c0 = uStack_500;
      uStack_6a8 = uStack_4e8;
      uStack_6b0 = uStack_4f0;
      uStack_698 = uStack_4d8;
      uStack_6a0 = uStack_4e0;
      uStack_6e8 = uStack_528;
      uStack_6f0 = uStack_530;
      uStack_6d8 = uStack_518;
      uStack_6e0 = uStack_520;
      FUN_1015d2004(&uStack_240,&uStack_160,0x112db3cf0,&UNK_10d95e250);
      FUN_1015d2004(&uStack_320,&uStack_160,0x112db3cf0,&UNK_10d95e250);
      func_0x0001015d5598(&uStack_6f0,0x112db3cf0,&UNK_10d95e250);
LAB_1015d24c8:
      uStack_518 = param_1[0x21];
      uStack_520 = param_1[0x20];
      uStack_a08 = param_1[0x23];
      uStack_a10 = param_1[0x22];
      uStack_508 = param_1[0x23];
      uStack_510 = param_1[0x22];
      uStack_9f8 = param_1[0x25];
      uStack_a00 = param_1[0x24];
      uStack_a28 = param_1[0x1f];
      uStack_a30 = param_1[0x1e];
      uStack_a18 = param_1[0x21];
      uStack_a20 = param_1[0x20];
      uStack_528 = param_1[0x1f];
      uStack_530 = param_1[0x1e];
      uStack_4d0 = param_2[0x21];
      uStack_4d8 = param_2[0x20];
      uStack_348 = param_2[0x23];
      uStack_350 = param_2[0x22];
      uStack_4c0 = param_2[0x23];
      uStack_4c8 = param_2[0x22];
      uStack_338 = param_2[0x25];
      uStack_340 = param_2[0x24];
      uStack_368 = param_2[0x1f];
      uStack_370 = param_2[0x1e];
      uStack_358 = param_2[0x21];
      uStack_360 = param_2[0x20];
      uStack_4e0 = param_2[0x1f];
      uStack_4e8 = param_2[0x1e];
      uStack_4b0 = param_2[0x25];
      uStack_4b8 = param_2[0x24];
      uStack_9f0 = param_1[0x26];
      uStack_330 = param_2[0x26];
      uStack_4f8 = param_1[0x25];
      uStack_500 = param_1[0x24];
      uStack_4f0 = param_1[0x26];
      uStack_4a8 = param_2[0x26];
      if (uStack_528 >> 0x3c < 0xf) {
        if (0xe < uStack_4e0 >> 0x3c) goto LAB_1015d25d4;
        uStack_848 = param_2[0x23];
        uStack_850 = param_2[0x22];
        uStack_838 = param_2[0x25];
        uStack_840 = param_2[0x24];
        uStack_830 = param_2[0x26];
        uStack_868 = param_2[0x1f];
        uStack_870 = param_2[0x1e];
        uStack_858 = param_2[0x21];
        uStack_860 = param_2[0x20];
        uStack_948 = param_1[0x1f];
        uStack_950 = param_1[0x1e];
        uStack_938 = param_1[0x21];
        uStack_940 = param_1[0x20];
        uStack_928 = param_1[0x23];
        uStack_930 = param_1[0x22];
        uStack_918 = param_1[0x25];
        uStack_920 = param_1[0x24];
        uStack_910 = param_1[0x26];
        uStack_740 = uStack_870;
        uStack_738 = uStack_868;
        uStack_730 = uStack_860;
        uStack_728 = uStack_858;
        uStack_720 = uStack_850;
        uStack_718 = uStack_848;
        uStack_710 = uStack_840;
        uStack_708 = uStack_838;
        uStack_700 = uStack_830;
        FUN_1015d2004(&uStack_a30,auStack_788,0x112db80e8,&UNK_10d9671d0);
        FUN_1015d2004(&uStack_370,auStack_788,0x112db80e8,&UNK_10d9671d0);
        puVar4 = &uStack_950;
        FUN_1015d1390(puVar4,&uStack_870);
        func_0x0001015d5598(&uStack_740,0x112db80e8,&UNK_10d9671d0);
        func_0x0001015d5598(&uStack_530,0x112db80e8,&UNK_10d9671d0);
        if (((ulong)puVar4 & 1) == 0) goto LAB_1015d265c;
      }
      else {
        if (uStack_4e0 >> 0x3c < 0xf) {
LAB_1015d25d4:
          uStack_870 = uStack_530;
          uStack_868 = uStack_528;
          uStack_860 = uStack_520;
          uStack_858 = uStack_518;
          uStack_850 = uStack_510;
          uStack_848 = uStack_508;
          uStack_840 = uStack_500;
          uStack_838 = uStack_4f8;
          uStack_830 = uStack_4f0;
          uStack_828 = uStack_4e8;
          uStack_820 = uStack_4e0;
          uStack_818 = uStack_4d8;
          uStack_810 = uStack_4d0;
          uStack_808 = uStack_4c8;
          uStack_800 = uStack_4c0;
          uStack_7f8 = uStack_4b8;
          uStack_7f0 = uStack_4b0;
          uStack_7e8 = uStack_4a8;
          FUN_1015d2004(&uStack_a30,&uStack_950,0x112db80e8,&UNK_10d9671d0);
          FUN_1015d2004(&uStack_370,&uStack_950,0x112db80e8,&UNK_10d9671d0);
          uVar9 = 0x112db80f0;
          puVar6 = &UNK_10d9671d8;
          puVar4 = &uStack_870;
          goto LAB_1015d2658;
        }
        uStack_848 = param_1[0x23];
        uStack_850 = param_1[0x22];
        uStack_838 = param_1[0x25];
        uStack_840 = param_1[0x24];
        uStack_830 = param_1[0x26];
        uStack_868 = param_1[0x1f];
        uStack_870 = param_1[0x1e];
        uStack_858 = param_1[0x21];
        uStack_860 = param_1[0x20];
        FUN_1015d2004(&uStack_a30,&uStack_950,0x112db80e8,&UNK_10d9671d0);
        FUN_1015d2004(&uStack_370,&uStack_950,0x112db80e8,&UNK_10d9671d0);
        func_0x0001015d5598(&uStack_870,0x112db80e8,&UNK_10d9671d0);
      }
      uVar11 = param_1[0x28];
      uVar9 = param_1[0x27];
      uVar7 = param_1[0x29];
      uVar12 = param_2[0x28];
      uVar10 = param_2[0x27];
      uVar8 = param_2[0x29];
      uStack_740 = uVar10;
      uStack_738 = uVar12;
      uStack_730 = uVar8;
      uStack_530 = uVar9;
      uStack_528 = uVar11;
      uStack_520 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1015d27e4;
        if ((int)uVar9 == (int)uVar10) {
          FUN_1015d2004(&uStack_530,auStack_788,0x112db80f8,&UNK_10d9671e0);
          FUN_1015d2004(&uStack_740,auStack_788,0x112db80f8,&UNK_10d9671e0);
          uVar5 = uVar11;
          FUN_100e25fcc(uVar11,uVar7,uVar12,uVar8);
          func_0x000100cb62e0(uVar10,uVar12,uVar8);
          if ((uVar5 & 1) != 0) goto LAB_1015d27b8;
        }
        else {
          FUN_1015d2004(&uStack_530,auStack_788,0x112db80f8,&UNK_10d9671e0);
          FUN_1015d2004(&uStack_740,auStack_788,0x112db80f8,&UNK_10d9671e0);
          func_0x000100cb62e0(uVar10,uVar12,uVar8);
        }
      }
      else {
        if (0xe < uVar8 >> 0x3c) {
          FUN_1015d2004(&uStack_530,auStack_788,0x112db80f8,&UNK_10d9671e0);
          FUN_1015d2004(&uStack_740,auStack_788,0x112db80f8,&UNK_10d9671e0);
LAB_1015d27b8:
          func_0x000100cb62e0(uVar9,uVar11,uVar7);
          uVar9 = param_1[0x1c];
          FUN_100e25fcc(uVar9,param_1[0x1d],param_2[0x1c],param_2[0x1d]);
          uVar3 = (uint)uVar9;
          goto LAB_1015d2660;
        }
LAB_1015d27e4:
        FUN_1015d2004(&uStack_530,auStack_788,0x112db80f8,&UNK_10d9671e0);
        FUN_1015d2004(&uStack_740,auStack_788,0x112db80f8,&UNK_10d9671e0);
        func_0x000100cb62e0(uVar9,uVar11,uVar7);
        uVar9 = uVar10;
        uVar11 = uVar12;
        uVar7 = uVar8;
      }
      func_0x000100cb62e0(uVar9,uVar11,uVar7);
    }
    else {
LAB_1015d231c:
      func_0x000107c610b4(&uStack_6f0,&uStack_530,0x1b9);
      FUN_1015d2004(&uStack_240,&uStack_160,0x112db3cf0,&UNK_10d95e250);
      FUN_1015d2004(&uStack_320,&uStack_160,0x112db3cf0,&UNK_10d95e250);
      uVar9 = 0x112db3ef0;
      puVar6 = &UNK_10d95e478;
      puVar4 = &uStack_6f0;
LAB_1015d2658:
      func_0x0001015d5598(puVar4,uVar9,puVar6);
    }
  }
  else {
    uStack_7c8 = uStack_488;
    uStack_7d0 = uStack_490;
    uStack_7b8 = uStack_478;
    uStack_7c0 = uStack_480;
    uStack_7a8 = uStack_468;
    uStack_7b0 = uStack_470;
    uStack_79f = uStack_45f;
    uStack_7a7 = uStack_467;
    uStack_7a0 = uStack_460;
    uStack_808 = uStack_4c8;
    uStack_810 = uStack_4d0;
    uStack_7f8 = uStack_4b8;
    uStack_800 = uStack_4c0;
    uStack_7e8 = uStack_4a8;
    uStack_7f0 = uStack_4b0;
    uStack_7d8 = uStack_498;
    uStack_7e0 = uStack_4a0;
    uStack_848 = uStack_508;
    uStack_850 = uStack_510;
    uStack_838 = uStack_4f8;
    uStack_840 = uStack_500;
    uStack_828 = uStack_4e8;
    uStack_830 = uStack_4f0;
    uStack_818 = uStack_4d8;
    uStack_820 = uStack_4e0;
    uStack_868 = uStack_528;
    uStack_870 = uStack_530;
    uStack_858 = uStack_518;
    uStack_860 = uStack_520;
    func_0x000101551ac8();
    if (iVar2 == 1) goto LAB_1015d231c;
    uStack_8a8 = uStack_3a8;
    uStack_8b0 = uStack_3b0;
    uStack_898 = uStack_398;
    uStack_8a0 = uStack_3a0;
    uStack_888 = uStack_388;
    uStack_890 = uStack_390;
    uStack_87f = uStack_37f;
    uStack_887 = uStack_387;
    uStack_880 = uStack_380;
    uStack_8e8 = uStack_3e8;
    uStack_8f0 = uStack_3f0;
    uStack_8d8 = uStack_3d8;
    uStack_8e0 = uStack_3e0;
    uStack_8c8 = uStack_3c8;
    uStack_8d0 = uStack_3d0;
    uStack_8b8 = uStack_3b8;
    uStack_8c0 = uStack_3c0;
    uStack_928 = uStack_428;
    uStack_930 = uStack_430;
    uStack_918 = uStack_418;
    uStack_920 = uStack_420;
    uStack_908 = uStack_408;
    uStack_910 = uStack_410;
    uStack_8f8 = uStack_3f8;
    uStack_900 = uStack_400;
    uStack_948 = uStack_448;
    uStack_950 = uStack_450;
    uStack_938 = uStack_438;
    uStack_940 = uStack_440;
    uStack_648 = uStack_3a8;
    uStack_650 = uStack_3b0;
    uStack_638 = uStack_398;
    uStack_640 = uStack_3a0;
    uStack_628 = uStack_388;
    uStack_630 = uStack_390;
    uStack_61f = uStack_37f;
    uStack_627 = uStack_387;
    uStack_620 = uStack_380;
    uStack_688 = uStack_3e8;
    uStack_690 = uStack_3f0;
    uStack_678 = uStack_3d8;
    uStack_680 = uStack_3e0;
    uStack_668 = uStack_3c8;
    uStack_670 = uStack_3d0;
    uStack_658 = uStack_3b8;
    uStack_660 = uStack_3c0;
    uStack_6c8 = uStack_428;
    uStack_6d0 = uStack_430;
    uStack_6b8 = uStack_418;
    uStack_6c0 = uStack_420;
    uStack_6a8 = uStack_408;
    uStack_6b0 = uStack_410;
    uStack_698 = uStack_3f8;
    uStack_6a0 = uStack_400;
    uStack_6e8 = uStack_448;
    uStack_6f0 = uStack_450;
    uStack_6d8 = uStack_438;
    uStack_6e0 = uStack_440;
    uStack_b8 = uStack_7c8;
    uStack_c0 = uStack_7d0;
    uStack_a8 = uStack_7b8;
    uStack_b0 = uStack_7c0;
    uStack_98 = uStack_7a8;
    uStack_a0 = uStack_7b0;
    uStack_8f = uStack_79f;
    uStack_97 = uStack_7a7;
    uStack_90 = uStack_7a0;
    uStack_f8 = uStack_808;
    uStack_100 = uStack_810;
    uStack_e8 = uStack_7f8;
    uStack_f0 = uStack_800;
    uStack_d8 = uStack_7e8;
    uStack_e0 = uStack_7f0;
    uStack_c8 = uStack_7d8;
    uStack_d0 = uStack_7e0;
    uStack_138 = uStack_848;
    uStack_140 = uStack_850;
    uStack_128 = uStack_838;
    uStack_130 = uStack_840;
    uStack_118 = uStack_828;
    uStack_120 = uStack_830;
    uStack_108 = uStack_818;
    uStack_110 = uStack_820;
    uStack_158 = uStack_868;
    uStack_160 = uStack_870;
    uStack_148 = uStack_858;
    uStack_150 = uStack_860;
    FUN_1015d2004(&uStack_240,&uStack_a30,0x112db3cf0,&UNK_10d95e250);
    FUN_1015d2004(&uStack_320,&uStack_a30,0x112db3cf0,&UNK_10d95e250);
    puVar4 = &uStack_160;
    func_0x0001015d1610(puVar4,&uStack_6f0);
    func_0x0001015d5598(&uStack_950,0x112db3cf0,&UNK_10d95e250);
    func_0x0001015d5598(&uStack_530,0x112db3cf0,&UNK_10d95e250);
    if (((ulong)puVar4 & 1) != 0) goto LAB_1015d24c8;
  }
LAB_1015d265c:
  uVar3 = 0;
LAB_1015d2660:
  return uVar3 & 1;
}



/* Entry: 1015d088c; end: 1015d0917;  */

void FUN_1015d088c(undefined8 *param_1)

{
  undefined8 uStack_100;
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
  
  FUN_10153becc(&uStack_100);
  param_1[0x15] = uStack_58;
  param_1[0x14] = uStack_60;
  param_1[0x17] = uStack_48;
  param_1[0x16] = uStack_50;
  param_1[0x19] = uStack_38;
  param_1[0x18] = uStack_40;
  param_1[0x1b] = uStack_28;
  param_1[0x1a] = uStack_30;
  param_1[0xd] = uStack_98;
  param_1[0xc] = uStack_a0;
  param_1[0xf] = uStack_88;
  param_1[0xe] = uStack_90;
  param_1[0x11] = uStack_78;
  param_1[0x10] = uStack_80;
  param_1[0x13] = uStack_68;
  param_1[0x12] = uStack_70;
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = uStack_c0;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  param_1[0x1d] = 0xc000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0xf000000000000000;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xf000000000000000;
  return;
}



/* Entry: 1015d0918; end: 1015d093b;  */

undefined1  [16] FUN_1015d0918(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb31a0;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 1015d093c; end: 1015d096b;  */

undefined1  [16] FUN_1015d093c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xe0);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8));
  return auVar1;
}



/* Entry: 1015d096c; end: 1015d099f;  */

void FUN_1015d096c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  *(undefined8 *)(unaff_x20 + 0xe0) = param_1;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_2;
  return;
}


