/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10528dcd0; end: 10528dd27;  */

undefined8 FUN_10528dcd0(void)

{
  int iVar1;
  
  if ((bRam00000001130cbd80 & 1) == 0) {
    iVar1 = 0x130cbd80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbd70);
      ___cxa_guard_release(0x1130cbd80);
    }
  }
  return 0x1130cbd70;
}



/* Entry: 10528dd28; end: 10528dd3b;  */

void FUN_10528dd28(void)

{
  return;
}



/* Entry: 10528dd3c; end: 10528de43;  */

undefined1 * FUN_10528dd3c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined4 auStack_48 [2];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528de44();
  func_0x0001003b2110(auStack_68,0x113818758);
  FUN_10529dd1c(auStack_58,param_2);
  auStack_48[0] = *(undefined4 *)(param_2 + 0x18);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_10528df74(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -4;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_10528de44;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818760 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818760;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_MassSnapMessageMetadata");
      pcVar5 = "massSnapId";
      func_0x0001003a83dc(auStack_d8,"massSnapId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "type";
      func_0x0001003a83dc(auStack_e0,"type");
      FUN_10528dcd0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818750,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x113818760;
      ___cxa_guard_release(0x113818760);
    }
  }
  FUN_10528df74(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818750;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 10528de44; end: 10528df73;  */

undefined8 FUN_10528de44(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818760 & 1) == 0) {
    param_1 = 0x113818760;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_MassSnapMessageMetadata");
      pcVar1 = "massSnapId";
      func_0x0001003a83dc(auStack_68,"massSnapId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "type";
      func_0x0001003a83dc(auStack_70,"type");
      FUN_10528dcd0();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818750,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818760;
      ___cxa_guard_release(0x113818760);
    }
  }
  FUN_10528df74(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818750;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10528df74; end: 10528df87;  */

void FUN_10528df74(void)

{
  return;
}



/* Entry: 10528df88; end: 10528dffb;  */

void FUN_10528df88(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  func_0x000108b8099c(auStack_40,lStack_28 + 0x18);
  func_0x000108b8099c(auStack_58,lStack_28 + 0x28);
  FUN_10528e228(param_1,auStack_40,auStack_58);
  func_0x000100100fec(auStack_58);
  func_0x000100100fec(auStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10528dffc; end: 10528e0f7;  */

undefined8 * FUN_10528dffc(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528e0f8();
  func_0x0001003b2110(auStack_68,0x113818770);
  func_0x000108b80a1c(auStack_58,param_2);
  func_0x000108b80a1c(auStack_48,param_2 + 0x18);
  puVar6 = (undefined8 *)0x2;
  func_0x000104bdb9bc(&uStack_60,auStack_68,auStack_58);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar5 = &uStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_60;
  func_0x000104bdbf78();
  func_0x00010528e26c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_78 = FUN_10528e0f8;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar7;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818778 & 1) == 0) {
    puVar3 = (undefined8 *)0x113818778;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_MediaEncryptionInfo");
      pcVar4 = "key";
      func_0x0001003a83dc(auStack_d8,"key");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "iv";
      func_0x0001003a83dc(auStack_e0,"iv");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      puVar6 = auStack_c8;
      puVar5 = (undefined8 *)0x0;
      func_0x000104bdbd44(0x113818768,auStack_d0,0,puVar6,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c((long)auStack_c8 + lVar7);
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar3 = (undefined8 *)0x113818778;
      ___cxa_guard_release();
    }
  }
  func_0x00010528e26c(uStack_98);
  if ((bool)uVar1) {
    return (undefined8 *)0x113818768;
  }
  ___stack_chk_fail();
  if ((int)puVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar8 = *puVar5;
  puVar3[1] = puVar5[1];
  *puVar3 = uVar8;
  puVar3[2] = puVar5[2];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  uVar8 = *puVar6;
  puVar3[4] = puVar6[1];
  puVar3[3] = uVar8;
  puVar3[5] = puVar6[2];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  return puVar3;
}



/* Entry: 10528e0f8; end: 10528e227;  */

undefined8 * FUN_10528e0f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 auStack_58 [3];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818778 & 1) == 0) {
    param_1 = (undefined8 *)0x113818778;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_MediaEncryptionInfo");
      pcVar1 = "key";
      func_0x0001003a83dc(auStack_68,"key");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "iv";
      func_0x0001003a83dc(auStack_70,"iv");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      param_3 = auStack_58;
      param_2 = (undefined8 *)0x0;
      func_0x000104bdbd44(0x113818768,auStack_60,0,param_3,2);
      lVar2 = 0x18;
      do {
        func_0x0001003b1c5c((long)auStack_58 + lVar2);
        lVar2 = lVar2 + -0x18;
        in_ZR = lVar2 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = (undefined8 *)0x113818778;
      ___cxa_guard_release();
    }
  }
  func_0x00010528e26c(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x113818768;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar3;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return param_1;
}



/* Entry: 10528e228; end: 10528e27f;  */

void FUN_10528e228(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 10528e280; end: 10528e2f3;  */

void FUN_10528e280(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_10528e2f4(&uStack_40,lStack_28 + 0x18);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000104bee500(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10528e2f4; end: 10528e3a3;  */

void FUN_10528e2f4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_60 [48];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((char)param_2[1] == '\t') && (lVar2 = *param_2, lVar2 != 0)) {
    FUN_10528e4e4(param_1,*(undefined8 *)(lVar2 + 0x10));
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_10528df88(auStack_60,lVar1);
      func_0x00010528e854(param_1,auStack_60);
      func_0x000104be0e14(auStack_60);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 10528e3a4; end: 10528e487;  */

undefined8 FUN_10528e3a4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818790 & 1) == 0) {
    iVar1 = 0x13818790;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_MediaEncryptionInfoList");
      pcVar2 = "mediaEncryption";
      func_0x0001003a83dc(auStack_40,"mediaEncryption");
      FUN_10528e488();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar2);
      param_2 = 0;
      func_0x000104bdbd44(0x113818780,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      ___cxa_guard_release(0x113818790);
    }
  }
  func_0x00010528e9e8(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818780;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbd98 & 1) == 0) {
    iVar1 = 0x130cbd98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528e0f8();
      func_0x00010b990868(0x1130cbd88);
      ___cxa_guard_release(0x1130cbd98);
    }
  }
  return 0x1130cbd88;
}



/* Entry: 10528e488; end: 10528e4e3;  */

undefined8 FUN_10528e488(void)

{
  int iVar1;
  
  if ((bRam00000001130cbd98 & 1) == 0) {
    iVar1 = 0x130cbd98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528e0f8();
      func_0x00010b990868(0x1130cbd88);
      ___cxa_guard_release(0x1130cbd98);
    }
  }
  return 0x1130cbd88;
}



/* Entry: 10528e4e4; end: 10528e563;  */

void FUN_10528e4e4(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x30) < param_2) {
    if ((undefined8 *)0x555555555555555 < param_2) {
      FUN_10528e564();
      func_0x00010528e9c8();
      func_0x00010528e9a0();
      pcVar1 = "vector";
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x30) * 0x30;
      FUN_10528e6a0((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2)
      ;
      param_2[1] = lVar2;
      lVar2 = *(long *)pcVar1;
      *(long *)((long)pcVar1 + 8) = lVar2;
      *(undefined8 *)pcVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 8);
      *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
      param_2[2] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 0x10);
      *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_10528e604(auStack_48,param_2,(param_1[1] - *param_1) / 0x30);
    func_0x00010528e9d0();
    func_0x00010528e9c8();
  }
  return;
}



/* Entry: 10528e564; end: 10528e577;  */

void FUN_10528e564(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((*(long *)((long)pcVar1 + 8) - *(long *)pcVar1) / -0x30) * 0x30;
  FUN_10528e6a0((long *)((long)pcVar1 + 0x10),*(long *)pcVar1,*(long *)((long)pcVar1 + 8),lVar2);
  param_2[1] = lVar2;
  lVar2 = *(long *)pcVar1;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(undefined8 *)pcVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 8);
  *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
  param_2[2] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 0x10);
  *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10528e578; end: 10528e603;  */

void FUN_10528e578(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_10528e6a0(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10528e604; end: 10528e673;  */

long * FUN_10528e604(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010528e650();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10528e674; end: 10528e69f;  */

void FUN_10528e674(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x30) {
    func_0x000104bfaed0(param_4,uVar1);
    param_4 = lStack_48 + 0x30;
  }
  uStack_58 = 1;
  FUN_10528e738(param_1,param_2,param_3);
  FUN_10528e768(&uStack_70);
  return;
}



/* Entry: 10528e6a0; end: 10528e737;  */

void FUN_10528e6a0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x30) {
    func_0x000104bfaed0(param_4,lVar1);
    param_4 = lStack_38 + 0x30;
  }
  uStack_48 = 1;
  FUN_10528e738(param_1,param_2,param_3);
  FUN_10528e768(&uStack_60);
  return;
}



/* Entry: 10528e738; end: 10528e767;  */

void FUN_10528e738(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    func_0x000104be0e14();
  }
  return;
}



/* Entry: 10528e768; end: 10528e797;  */

long FUN_10528e768(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10528e798(param_1);
  }
  return param_1;
}



/* Entry: 10528e798; end: 10528e7b7;  */

void FUN_10528e798(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x000104be0e14();
  }
  return;
}



/* Entry: 10528e7b8; end: 10528e813;  */

void FUN_10528e7b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x30;
    func_0x000104be0e14();
  }
  return;
}



/* Entry: 10528e814; end: 10528e81b;  */

void FUN_10528e814(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    func_0x000104be0e14();
  }
  return;
}



/* Entry: 10528e81c; end: 10528e8b7;  */

void FUN_10528e81c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    func_0x000104be0e14();
  }
  return;
}



/* Entry: 10528e8b8; end: 10528e94f;  */

long FUN_10528e8b8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10528e950(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  FUN_10528e604(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  func_0x000104bfaed0(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x30;
  func_0x00010528e9d0();
  lVar2 = param_1[1];
  func_0x00010528e9c8();
  return lVar2;
}



/* Entry: 10528e950; end: 10528e99f;  */

ulong FUN_10528e950(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x555555555555555 < param_2) {
    FUN_10528e564();
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Unwind_Resume_11034bd20)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x30;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x2aaaaaaaaaaaaa9 < uVar1) {
    uVar2 = 0x555555555555555;
  }
  return uVar2;
}



/* Entry: 10528e9a0; end: 10528e9fb;  */

void FUN_10528e9a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10528e9fc; end: 10528eaf7;  */

void FUN_10528e9fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  func_0x00010b9a97d0(&lStack_48);
  func_0x000108b8099c(auStack_60,lStack_48 + 0x18);
  lVar1 = lStack_48 + 0x28;
  func_0x00010b9a9588(lVar1);
  lVar2 = lStack_48 + 0x38;
  func_0x00010b9a9518(lVar2);
  func_0x000104bdbf60(auStack_78,lStack_48 + 0x48);
  lVar3 = lStack_48 + 0x58;
  FUN_10528eaf8(lVar3);
  uVar4 = lStack_48 + 0x68;
  func_0x00010528eb28(uVar4);
  FUN_10528eb58(param_1,auStack_60,lVar1,lVar2,auStack_78,lVar3,param_3 & 0xff,uVar4 & 0xffffffffff)
  ;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x000100100fec(auStack_60);
  func_0x000104bdbf78(&lStack_48);
  return;
}



/* Entry: 10528eaf8; end: 10528eb57;  */

undefined1  [16] FUN_10528eaf8(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(byte *)(param_1 + 8) < 2) {
    return ZEXT816(0);
  }
  FUN_10529e420();
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10528eb58; end: 10528eb5f;  */

void FUN_10528eb58(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[7] = param_5[2];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  param_1[8] = param_6;
  *(undefined4 *)(param_1 + 9) = param_7;
  *(undefined8 *)((long)param_1 + 0x4c) = param_8;
  return;
}



/* Entry: 10528eb60; end: 10528ecdb;  */

undefined4 * FUN_10528eb60(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long lVar10;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined8 uStack_238;
  undefined4 *puStack_230;
  undefined4 *puStack_228;
  undefined1 ***pppuStack_220;
  code *pcStack_218;
  undefined1 auStack_208 [8];
  undefined4 auStack_200 [2];
  undefined4 auStack_1f8 [2];
  undefined2 uStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined4 auStack_168 [6];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined4 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [8];
  undefined4 auStack_a0 [2];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528ecdc();
  func_0x0001003b2110(auStack_a8,0x1138187a0);
  func_0x000108b80a1c(auStack_98,param_2);
  uStack_88 = *(undefined8 *)(param_2 + 0x18);
  uStack_80 = 5;
  uStack_78 = *(undefined4 *)(param_2 + 0x20);
  uStack_70 = 4;
  FUN_1052808e4(auStack_68,param_2 + 0x28);
  FUN_10528eec4(auStack_58,param_2 + 0x40);
  if (*(char *)(param_2 + 0x50) == '\x01') {
    uStack_48 = CONCAT44(uStack_48._4_4_,*(undefined4 *)(param_2 + 0x4c));
    uStack_40 = 4;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 1;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_a0,auStack_a8,auStack_98,6);
  lVar10 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_98 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_a8);
  puVar5 = auStack_a0;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_a0;
  func_0x000104bdbf78();
  FUN_10528f09c(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_48;
  lVar9 = -0x60;
  do {
    func_0x00010b9a8d98(puVar4);
    iVar7 = (int)puVar5;
    puVar4 = puVar4 + -2;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_a8);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_b8 = FUN_10528ecdc;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = 0;
  lStack_d0 = lVar9;
  puStack_c8 = puVar3;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((bRam00000001138187a8 & 1) == 0) {
    puVar5 = (undefined4 *)0x1138187a8;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x0001003a83dc(auStack_170,"_djinni_record_MediaReference");
      pcVar6 = "contentObject";
      func_0x0001003a83dc(auStack_178,"contentObject");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_168,auStack_178,pcVar6);
      pcVar6 = "mediaListId";
      func_0x0001003a83dc(auStack_180,"mediaListId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_150,auStack_180,pcVar6);
      pcVar6 = "mediaType";
      func_0x0001003a83dc(auStack_188,"mediaType");
      FUN_10528eee4();
      func_0x0001003b1b50(auStack_138,auStack_188,pcVar6);
      pcVar6 = "mediaReferenceKey";
      func_0x0001003a83dc(auStack_190,"mediaReferenceKey");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_120,auStack_190,pcVar6);
      pcVar6 = "videoDescription";
      func_0x0001003a83dc(auStack_198,"videoDescription");
      FUN_10528ef3c();
      func_0x0001003b1b50(auStack_108,auStack_198,pcVar6);
      pcVar6 = "metadataType";
      func_0x0001003a83dc(auStack_1a0,"metadataType");
      FUN_10528ef98();
      func_0x0001003b1b50(auStack_f0,auStack_1a0,pcVar6);
      puVar3 = auStack_168;
      uVar8 = 0;
      func_0x000104bdbd44(0x113818798,auStack_170,0,auStack_168,6);
      lVar9 = 0x78;
      do {
        func_0x0001003b1c5c((long)puVar3 + lVar9);
        iVar7 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1a0);
      func_0x0001003a8c94(auStack_198);
      func_0x0001003a8c94(auStack_190);
      func_0x0001003a8c94(auStack_188);
      func_0x0001003a8c94(auStack_180);
      func_0x0001003a8c94(auStack_178);
      func_0x0001003a8c94(auStack_170);
      puVar5 = (undefined4 *)0x1138187a8;
      ___cxa_guard_release();
      uVar8 = 0xffffffffffffffe8;
    }
  }
  FUN_10528f09c(uStack_d8);
  if ((bool)uVar1) {
    return (undefined4 *)0x113818798;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar5 + 2) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar5;
  }
  pcStack_1a8 = FUN_10528eec4;
  uStack_1d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = auStack_98;
  lStack_1c8 = lVar10;
  uStack_1c0 = uVar8;
  puStack_1b8 = puVar3;
  ppuStack_1b0 = &puStack_c0;
  FUN_10529e574();
  func_0x0001003b2110(auStack_208,0x113818d08);
  uStack_1f0 = 4;
  auStack_1f8[0] = *puVar5;
  uStack_1e8 = puVar5[1];
  uStack_1e0 = 4;
  func_0x000104bdb9bc(auStack_200,auStack_208,auStack_1f8,2);
  lVar10 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_1f8 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_208);
  puVar5 = auStack_200;
  func_0x00010b9a8f60(extraout_x8);
  puVar3 = auStack_200;
  func_0x000104bdbf78();
  FUN_10529e754(uStack_1d8);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar10 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_1f8 + lVar10);
    iVar7 = (int)puVar5;
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_208);
  __Unwind_Resume(puVar3);
  pcStack_218 = FUN_10529e574;
  uStack_238 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_230 = auStack_1f8;
  puStack_228 = puVar3;
  pppuStack_220 = &ppuStack_1b0;
  if ((bRam0000000113818d10 & 1) == 0) {
    iVar2 = 0x13818d10;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_270,"_djinni_record_VideoDescription");
      pcVar6 = "mediaQualityType";
      func_0x0001003a83dc(auStack_278,"mediaQualityType");
      FUN_10529e6a4();
      func_0x0001003b1b50(auStack_268,auStack_278,pcVar6);
      pcVar6 = "videoPlaybackType";
      func_0x0001003a83dc(auStack_280,"videoPlaybackType");
      FUN_10529e6fc();
      func_0x0001003b1b50(auStack_250,auStack_280,pcVar6);
      uVar8 = 0;
      func_0x000104bdbd44(0x113818d00,auStack_270,0,auStack_268,2);
      lVar10 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_268 + lVar10);
        iVar7 = (int)uVar8;
        lVar10 = lVar10 + -0x18;
        uVar1 = lVar10 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_280);
      func_0x0001003a8c94(auStack_278);
      func_0x0001003a8c94(auStack_270);
      ___cxa_guard_release(0x113818d10);
    }
  }
  FUN_10529e754(uStack_238);
  if ((bool)uVar1) {
    return (undefined4 *)0x113818d00;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc368 & 1) == 0) {
    iVar7 = 0x130cc368;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x00010b990e20(0x1130cc358);
      ___cxa_guard_release(0x1130cc368);
    }
  }
  return (undefined4 *)0x1130cc358;
}



/* Entry: 10528ecdc; end: 10528eec3;  */

undefined4 * FUN_10528ecdc(undefined4 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined8 uStack_188;
  undefined4 *puStack_180;
  undefined4 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [8];
  undefined4 auStack_150 [2];
  undefined4 auStack_148 [2];
  undefined2 uStack_140;
  undefined4 uStack_138;
  undefined2 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138187a8 & 1) == 0) {
    param_1 = (undefined4 *)0x1138187a8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_c0,"_djinni_record_MediaReference");
      pcVar3 = "contentObject";
      func_0x0001003a83dc(auStack_c8,"contentObject");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_b8,auStack_c8,pcVar3);
      pcVar3 = "mediaListId";
      func_0x0001003a83dc(auStack_d0,"mediaListId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_a0,auStack_d0,pcVar3);
      pcVar3 = "mediaType";
      func_0x0001003a83dc(auStack_d8,"mediaType");
      FUN_10528eee4();
      func_0x0001003b1b50(auStack_88,auStack_d8,pcVar3);
      pcVar3 = "mediaReferenceKey";
      func_0x0001003a83dc(auStack_e0,"mediaReferenceKey");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_70,auStack_e0,pcVar3);
      pcVar3 = "videoDescription";
      func_0x0001003a83dc(auStack_e8,"videoDescription");
      FUN_10528ef3c();
      func_0x0001003b1b50(auStack_58,auStack_e8,pcVar3);
      pcVar3 = "metadataType";
      func_0x0001003a83dc(auStack_f0,"metadataType");
      FUN_10528ef98();
      func_0x0001003b1b50(auStack_40,auStack_f0,pcVar3);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818798,auStack_c0,0,auStack_b8,6);
      lVar8 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_b8 + lVar8);
        param_2 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      param_1 = (undefined4 *)0x1138187a8;
      ___cxa_guard_release();
    }
  }
  FUN_10528f09c(uStack_28);
  if ((bool)in_ZR) {
    return (undefined4 *)0x113818798;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(param_1 + 2) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_f8 = FUN_10528eec4;
  uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_10529e574();
  func_0x0001003b2110(auStack_158,0x113818d08);
  uStack_140 = 4;
  auStack_148[0] = *param_1;
  uStack_138 = param_1[1];
  uStack_130 = 4;
  func_0x000104bdb9bc(auStack_150,auStack_158,auStack_148,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_148 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_158);
  puVar6 = auStack_150;
  func_0x00010b9a8f60(extraout_x8);
  puVar4 = auStack_150;
  func_0x000104bdbf78();
  FUN_10529e754(uStack_128);
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_148 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_158);
  __Unwind_Resume(puVar4);
  pcStack_168 = FUN_10529e574;
  uStack_188 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = auStack_148;
  puStack_178 = puVar4;
  ppuStack_170 = &puStack_100;
  if ((bRam0000000113818d10 & 1) == 0) {
    iVar2 = 0x13818d10;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_1c0,"_djinni_record_VideoDescription");
      pcVar3 = "mediaQualityType";
      func_0x0001003a83dc(auStack_1c8,"mediaQualityType");
      FUN_10529e6a4();
      func_0x0001003b1b50(auStack_1b8,auStack_1c8,pcVar3);
      pcVar3 = "videoPlaybackType";
      func_0x0001003a83dc(auStack_1d0,"videoPlaybackType");
      FUN_10529e6fc();
      func_0x0001003b1b50(auStack_1a0,auStack_1d0,pcVar3);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818d00,auStack_1c0,0,auStack_1b8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_1b8 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1d0);
      func_0x0001003a8c94(auStack_1c8);
      func_0x0001003a8c94(auStack_1c0);
      ___cxa_guard_release(0x113818d10);
    }
  }
  FUN_10529e754(uStack_188);
  if ((bool)uVar1) {
    return (undefined4 *)0x113818d00;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc368 & 1) == 0) {
    iVar5 = 0x130cc368;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x1130cc358);
      ___cxa_guard_release(0x1130cc368);
    }
  }
  return (undefined4 *)0x1130cc358;
}



/* Entry: 10528eec4; end: 10528eee3;  */

undefined4 * FUN_10528eec4(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined4 auStack_60 [2];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 2) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529e574();
  func_0x0001003b2110(auStack_68,0x113818d08);
  uStack_50 = 4;
  auStack_58[0] = *param_2;
  uStack_48 = param_2[1];
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_60;
  func_0x000104bdbf78();
  FUN_10529e754(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  __Unwind_Resume(puVar3);
  pcStack_78 = FUN_10529e574;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818d10 & 1) == 0) {
    iVar2 = 0x13818d10;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_VideoDescription");
      pcVar4 = "mediaQualityType";
      func_0x0001003a83dc(auStack_d8,"mediaQualityType");
      FUN_10529e6a4();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "videoPlaybackType";
      func_0x0001003a83dc(auStack_e0,"videoPlaybackType");
      FUN_10529e6fc();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818d00,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      ___cxa_guard_release(0x113818d10);
    }
  }
  FUN_10529e754(uStack_98);
  if ((bool)uVar1) {
    return (undefined4 *)0x113818d00;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc368 & 1) == 0) {
    iVar5 = 0x130cc368;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x1130cc358);
      ___cxa_guard_release(0x1130cc368);
    }
  }
  return (undefined4 *)0x1130cc358;
}



/* Entry: 10528eee4; end: 10528ef3b;  */

undefined8 FUN_10528eee4(void)

{
  int iVar1;
  
  if ((bRam00000001130cbdb0 & 1) == 0) {
    iVar1 = 0x130cbdb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbda0);
      ___cxa_guard_release(0x1130cbdb0);
    }
  }
  return 0x1130cbda0;
}



/* Entry: 10528ef3c; end: 10528ef97;  */

undefined8 FUN_10528ef3c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbdc8 & 1) == 0) {
    iVar1 = 0x130cbdc8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529e574();
      func_0x00010b990784(0x1130cbdb8);
      ___cxa_guard_release(0x1130cbdc8);
    }
  }
  return 0x1130cbdb8;
}



/* Entry: 10528ef98; end: 10528eff3;  */

undefined8 FUN_10528ef98(void)

{
  int iVar1;
  
  if ((bRam00000001130cbde0 & 1) == 0) {
    iVar1 = 0x130cbde0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528f044();
      func_0x00010b990784(0x1130cbdd0);
      ___cxa_guard_release(0x1130cbde0);
    }
  }
  return 0x1130cbdd0;
}



/* Entry: 10528eff4; end: 10528f043;  */

void FUN_10528eff4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[7] = param_5[2];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  param_1[8] = param_6;
  *(undefined4 *)(param_1 + 9) = param_7;
  *(undefined8 *)((long)param_1 + 0x4c) = param_8;
  return;
}



/* Entry: 10528f044; end: 10528f09b;  */

undefined8 FUN_10528f044(void)

{
  int iVar1;
  
  if ((bRam00000001130cbdf8 & 1) == 0) {
    iVar1 = 0x130cbdf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbde8);
      ___cxa_guard_release(0x1130cbdf8);
    }
  }
  return 0x1130cbde8;
}



/* Entry: 10528f09c; end: 10528f0af;  */

void FUN_10528f09c(void)

{
  return;
}



/* Entry: 10528f0b0; end: 10528f123;  */

void FUN_10528f0b0(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_10528f124(&uStack_40,lStack_28 + 0x18);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x0001006994c8(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10528f124; end: 10528f1df;  */

void FUN_10528f124(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_88 [88];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((char)param_2[1] == '\t') && (lVar2 = *param_2, lVar2 != 0)) {
    FUN_10528f4a8(param_1,*(undefined8 *)(lVar2 + 0x10));
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_10528e9fc(auStack_88,lVar1);
      func_0x00010528f5ec(param_1,auStack_88);
      func_0x0001006a0e58(auStack_88);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 10528f1e0; end: 10528f29f;  */

long * FUN_10528f1e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  char *pcVar2;
  int iVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_e8 [16];
  long lStack_d8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long lStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528f2a0();
  func_0x0001003b2110(&lStack_48,0x1138187b8);
  FUN_10528f384(auStack_38,param_2);
  func_0x000104bdb9bc(&lStack_40,&lStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(&lStack_48);
  iVar3 = (int)&lStack_40;
  func_0x00010b9a8f60(param_1);
  plVar1 = &lStack_40;
  func_0x000104bdbf78();
  func_0x00010528f710(uStack_28);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  plVar1 = &lStack_48;
  func_0x0001003b1f60();
  func_0x00010528f6e8();
  pcStack_58 = FUN_10528f2a0;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam00000001138187c0 & 1) == 0) {
    plVar1 = (long *)0x1138187c0;
    ___cxa_guard_acquire();
    if ((int)plVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_MediaReferenceList");
      pcVar2 = "mediaReferences";
      func_0x0001003a83dc(auStack_90,"mediaReferences");
      FUN_10528f44c();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x1138187b0,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      plVar1 = (long *)0x1138187c0;
      ___cxa_guard_release();
    }
  }
  func_0x00010528f710(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar3 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_d8,(plVar1[1] - *plVar1) / 0x58);
    lVar4 = 0;
    lVar6 = 0x18;
    for (uVar5 = 0; uVar5 < (ulong)((plVar1[1] - *plVar1) / 0x58); uVar5 = uVar5 + 1) {
      FUN_10528eb60(auStack_e8,*plVar1 + lVar4);
      func_0x00010b9a9020(lStack_d8 + lVar6,auStack_e8);
      func_0x00010b9a8d98(auStack_e8);
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x58;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_d8);
    plVar1 = &lStack_d8;
    func_0x000104bddf38(plVar1);
    return plVar1;
  }
  return (long *)0x1138187b0;
}



/* Entry: 10528f2a0; end: 10528f383;  */

long * FUN_10528f2a0(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138187c0 & 1) == 0) {
    param_1 = (long *)0x1138187c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_MediaReferenceList");
      pcVar1 = "mediaReferences";
      func_0x0001003a83dc(auStack_40,"mediaReferences");
      FUN_10528f44c();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x1138187b0,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = (long *)0x1138187c0;
      ___cxa_guard_release();
    }
  }
  func_0x00010528f710(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_88,(param_1[1] - *param_1) / 0x58);
    lVar3 = 0;
    lVar5 = 0x18;
    for (uVar4 = 0; uVar4 < (ulong)((param_1[1] - *param_1) / 0x58); uVar4 = uVar4 + 1) {
      FUN_10528eb60(auStack_98,*param_1 + lVar3);
      func_0x00010b9a9020(lStack_88 + lVar5,auStack_98);
      func_0x00010b9a8d98(auStack_98);
      lVar5 = lVar5 + 0x10;
      lVar3 = lVar3 + 0x58;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_88);
    plVar2 = &lStack_88;
    func_0x000104bddf38(plVar2);
    return plVar2;
  }
  return (long *)0x1138187b0;
}



/* Entry: 10528f384; end: 10528f44b;  */

void FUN_10528f384(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,(param_2[1] - *param_2) / 0x58);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((param_2[1] - *param_2) / 0x58); uVar2 = uVar2 + 1) {
    FUN_10528eb60(auStack_58,*param_2 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x58;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 10528f44c; end: 10528f4a7;  */

undefined8 FUN_10528f44c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbe10 & 1) == 0) {
    iVar1 = 0x130cbe10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528ecdc();
      func_0x00010b990868(0x1130cbe00);
      ___cxa_guard_release(0x1130cbe10);
    }
  }
  return 0x1130cbe00;
}



/* Entry: 10528f4a8; end: 10528f52b;  */

void FUN_10528f4a8(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x58) < param_2) {
    if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
      FUN_10528f52c();
      func_0x00010528f6f0();
      func_0x00010528f6e8();
      pcVar1 = "vector";
      func_0x000104bd47e8();
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      uVar2 = *param_2;
      *(undefined8 *)(pcVar1 + 8) = param_2[1];
      *(undefined8 *)pcVar1 = uVar2;
      *(undefined8 *)(pcVar1 + 0x10) = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      uVar2 = param_2[3];
      *(undefined4 *)(pcVar1 + 0x20) = *(undefined4 *)(param_2 + 4);
      *(undefined8 *)(pcVar1 + 0x18) = uVar2;
      uVar3 = param_2[6];
      uVar2 = param_2[5];
      *(undefined8 *)(pcVar1 + 0x38) = param_2[7];
      *(undefined8 *)(pcVar1 + 0x30) = uVar3;
      *(undefined8 *)(pcVar1 + 0x28) = uVar2;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[5] = 0;
      uVar3 = param_2[9];
      uVar2 = param_2[8];
      pcVar1[0x50] = *(char *)(param_2 + 10);
      *(undefined8 *)(pcVar1 + 0x48) = uVar3;
      *(undefined8 *)(pcVar1 + 0x40) = uVar2;
      return;
    }
    func_0x000100699150(auStack_48,param_2,(param_1[1] - *param_1) / 0x58);
    func_0x00010528f6f8();
    func_0x00010528f6f0();
  }
  return;
}



/* Entry: 10528f52c; end: 10528f53f;  */

void FUN_10528f52c(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = "vector";
  func_0x000104bd47e8();
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0x10] = '\0';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\0';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  uVar2 = *param_2;
  *(undefined8 *)(pcVar1 + 8) = param_2[1];
  *(undefined8 *)pcVar1 = uVar2;
  *(undefined8 *)(pcVar1 + 0x10) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_2[3];
  *(undefined4 *)(pcVar1 + 0x20) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(pcVar1 + 0x18) = uVar2;
  uVar3 = param_2[6];
  uVar2 = param_2[5];
  *(undefined8 *)(pcVar1 + 0x38) = param_2[7];
  *(undefined8 *)(pcVar1 + 0x30) = uVar3;
  *(undefined8 *)(pcVar1 + 0x28) = uVar2;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  pcVar1[0x50] = *(char *)(param_2 + 10);
  *(undefined8 *)(pcVar1 + 0x48) = uVar3;
  *(undefined8 *)(pcVar1 + 0x40) = uVar2;
  return;
}



/* Entry: 10528f540; end: 10528f5bb;  */

void FUN_10528f540(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar1;
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 10528f5bc; end: 10528f64f;  */

void FUN_10528f5bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    func_0x0001006a0e58();
  }
  return;
}



/* Entry: 10528f650; end: 10528f6e7;  */

long FUN_10528f650(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x00010069909c(param_1,(param_1[1] - *param_1) / 0x58 + 1);
  func_0x000100699150(auStack_58,plVar1,(param_1[1] - *param_1) / 0x58,param_1 + 2);
  FUN_10528f540(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x58;
  func_0x00010528f6f8();
  lVar2 = param_1[1];
  func_0x00010528f6f0();
  return lVar2;
}



/* Entry: 10528f6e8; end: 10528f723;  */

void FUN_10528f6e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10528f724; end: 10528f8a3;  */

undefined1 * FUN_10528f724(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_4f0 [8];
  undefined1 auStack_4e8 [8];
  undefined1 auStack_4e0 [8];
  undefined1 auStack_4d8 [8];
  undefined1 auStack_4d0 [8];
  undefined1 auStack_4c8 [8];
  undefined1 auStack_4c0 [8];
  undefined1 auStack_4b8 [8];
  undefined1 auStack_4b0 [8];
  undefined1 auStack_4a8 [8];
  undefined1 auStack_4a0 [8];
  undefined1 auStack_498 [8];
  undefined1 auStack_490 [8];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined8 uStack_368;
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [16];
  undefined4 uStack_308;
  undefined2 uStack_300;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [32];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined2 uStack_40;
  
  func_0x00010528fc24();
  FUN_10528f8a4();
  func_0x0001003b2110(auStack_c8,0x1138187d0);
  FUN_105290ef4(auStack_b8,param_2);
  FUN_10529dd1c(auStack_a8,param_2 + 0x20);
  FUN_10528fae0(auStack_98,param_2 + 0x38);
  FUN_1052923c0(auStack_88,param_2 + 0x3d8);
  uStack_78 = *(undefined4 *)(param_2 + 0x5a0);
  uStack_70 = 4;
  uStack_68 = *(undefined4 *)(param_2 + 0x5a4);
  uStack_60 = 4;
  FUN_10528fc38(auStack_58,param_2 + 0x5a8);
  uStack_48 = *(undefined8 *)(param_2 + 0x5d0);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_c0,auStack_c8,auStack_b8,8);
  lVar8 = 0x70;
  do {
    func_0x00010b9a8d98(auStack_b8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_c8);
  puVar5 = auStack_c0;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_c0;
  func_0x000104bdbf78();
  func_0x00010528fc0c();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x80;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar5;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_c8);
  __Unwind_Resume();
  func_0x00010528fc24();
  if ((bRam00000001138187d8 & 1) == 0) {
    puVar2 = (undefined1 *)0x1138187d8;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_1d0,"_djinni_record_Message");
      pcVar4 = "descriptor";
      func_0x0001003a83dc(auStack_1d8,"descriptor");
      FUN_105290ffc();
      func_0x0001003b1b50(auStack_1c8,auStack_1d8,pcVar4);
      pcVar4 = "senderId";
      func_0x0001003a83dc(auStack_1e0,"senderId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_1b0,auStack_1e0,pcVar4);
      pcVar4 = "messageContent";
      func_0x0001003a83dc(auStack_1e8,"messageContent");
      FUN_10528fb00();
      func_0x0001003b1b50(auStack_198,auStack_1e8,pcVar4);
      pcVar4 = "metadata";
      func_0x0001003a83dc(auStack_1f0,"metadata");
      FUN_10529279c();
      func_0x0001003b1b50(auStack_180,auStack_1f0,pcVar4);
      pcVar4 = "releasePolicy";
      func_0x0001003a83dc(auStack_1f8,"releasePolicy");
      FUN_10528fb5c();
      func_0x0001003b1b50(auStack_168,auStack_1f8,pcVar4);
      pcVar4 = "state";
      func_0x0001003a83dc(auStack_200,"state");
      FUN_10528fbb4();
      func_0x0001003b1b50(auStack_150,auStack_200,pcVar4);
      pcVar4 = "messageAnalytics";
      func_0x0001003a83dc(auStack_208,"messageAnalytics");
      FUN_10528fd48();
      func_0x0001003b1b50(auStack_138,auStack_208,pcVar4);
      pcVar4 = "orderKey";
      func_0x0001003a83dc(auStack_210,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_120,auStack_210,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138187c8,auStack_1d0,0,auStack_1c8,8);
      lVar8 = 0xa8;
      do {
        func_0x0001003b1c5c(auStack_1c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_210);
      func_0x0001003a8c94(auStack_208);
      func_0x0001003a8c94(auStack_200);
      func_0x0001003a8c94(auStack_1f8);
      func_0x0001003a8c94(auStack_1f0);
      func_0x0001003a8c94(auStack_1e8);
      func_0x0001003a8c94(auStack_1e0);
      func_0x0001003a8c94(auStack_1d8);
      func_0x0001003a8c94(auStack_1d0);
      puVar2 = (undefined1 *)0x1138187d8;
      ___cxa_guard_release();
    }
  }
  func_0x00010528fc0c();
  if ((bool)uVar1) {
    return (undefined1 *)0x1138187c8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (puVar2[0x398] != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar2;
  }
  uStack_258 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052900e8();
  func_0x0001003b2110(auStack_328,0x113818800);
  func_0x000108b80a1c(auStack_318,puVar2);
  uStack_308 = *(undefined4 *)(puVar2 + 0x18);
  uStack_300 = 4;
  FUN_10529050c(auStack_2f8,puVar2 + 0x20);
  func_0x00010528cbb4(auStack_2e8,puVar2 + 0x40);
  func_0x000105290520(auStack_2d8,puVar2 + 0x60);
  FUN_105290534(auStack_2c8,puVar2 + 0x80);
  FUN_1052905b8(auStack_2b8,puVar2 + 0x98);
  func_0x0001052905cc(auStack_2a8,puVar2 + 0x2d8);
  func_0x00010528cba0(auStack_298,puVar2 + 0x2e0);
  func_0x00010528cbdc(auStack_288,puVar2 + 800);
  func_0x0001052905e0(auStack_278,puVar2 + 0x340);
  func_0x0001052905f4(auStack_268,puVar2 + 0x370);
  func_0x000104bdb9bc(auStack_320,auStack_328,auStack_318,0xc);
  lVar8 = 0xb0;
  do {
    func_0x00010b9a8d98(auStack_318 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_328);
  func_0x00010b9a8f60(extraout_x8,auStack_320);
  puVar5 = auStack_320;
  func_0x000104bdbf78();
  func_0x000105290ecc(uStack_258);
  if ((bool)uVar1) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = auStack_268;
  lVar8 = -0xc0;
  do {
    func_0x00010b9a8d98(puVar5);
    puVar5 = puVar5 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_328);
  func_0x000105290dc4();
  uStack_368 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9958 & 1) == 0) {
    iVar6 = 0x136b9958;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x0001003a83dc(auStack_490,"_djinni_record_MessageContent");
      pcVar4 = "content";
      func_0x0001003a83dc(auStack_498,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_488,auStack_498,pcVar4);
      pcVar4 = "contentType";
      func_0x0001003a83dc(auStack_4a0,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_470,auStack_4a0,pcVar4);
      func_0x0001003a83dc(auStack_4a8,"remoteMediaInfo");
      if ((bRam00000001136b9960 & 1) == 0) goto LAB_105290414;
      goto LAB_1052901d0;
    }
  }
  while (func_0x000105290ecc(uStack_368), !(bool)uVar1) {
    ___stack_chk_fail();
LAB_105290414:
    iVar6 = 0x136b9960;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      if ((bRam00000001136b9968 & 1) == 0) {
        iVar6 = 0x136b9968;
        ___cxa_guard_acquire();
        if (iVar6 != 0) {
          FUN_10529947c();
          func_0x00010b990868(0x1136b9990);
          ___cxa_guard_release(0x1136b9968);
        }
      }
      func_0x00010b990784(0x1136b9990);
      ___cxa_guard_release(0x1136b9960);
    }
LAB_1052901d0:
    func_0x0001003b1b50(auStack_458,auStack_4a8,0x1136b9980);
    pcVar4 = "remoteMediaReferences";
    func_0x0001003a83dc(auStack_4b0,"remoteMediaReferences");
    FUN_10528cd00();
    func_0x0001003b1b50(auStack_440,auStack_4b0,pcVar4);
    pcVar4 = "localMediaReferences";
    func_0x0001003a83dc(auStack_4b8,"localMediaReferences");
    FUN_105290608();
    func_0x0001003b1b50(auStack_428,auStack_4b8,pcVar4);
    pcVar4 = "thumbnailIndexLists";
    func_0x0001003a83dc(auStack_4c0,"thumbnailIndexLists");
    FUN_105290664();
    func_0x0001003b1b50(auStack_410,auStack_4c0,pcVar4);
    func_0x0001003a83dc(auStack_4c8,"quotedMessage");
    if ((bRam00000001136b9970 & 1) == 0) {
      iVar6 = 0x136b9970;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        FUN_1052982dc();
        func_0x00010b990784(0x1136b99a0);
        ___cxa_guard_release(0x1136b9970);
      }
    }
    func_0x0001003b1b50(auStack_3f8,auStack_4c8,0x1136b99a0);
    func_0x0001003a83dc(auStack_4d0,"snapDisplayInfo");
    if ((bRam00000001136b9978 & 1) == 0) {
      iVar6 = 0x136b9978;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        FUN_10529ae4c();
        func_0x00010b990784(0x1136b99b0);
        ___cxa_guard_release(0x1136b9978);
      }
    }
    func_0x0001003b1b50(auStack_3e0,auStack_4d0,0x1136b99b0);
    pcVar4 = "messageTypeMetadata";
    func_0x0001003a83dc(auStack_4d8,"messageTypeMetadata");
    FUN_10528cca4();
    func_0x0001003b1b50(auStack_3c8,auStack_4d8,pcVar4);
    pcVar4 = "snapModeInfo";
    func_0x0001003a83dc(auStack_4e0,"snapModeInfo");
    FUN_10528cdb8();
    func_0x0001003b1b50(auStack_3b0,auStack_4e0,pcVar4);
    pcVar4 = "publicGroupMessageMetadata";
    func_0x0001003a83dc(auStack_4e8,"publicGroupMessageMetadata");
    FUN_1052906c0();
    func_0x0001003b1b50(auStack_398,auStack_4e8,pcVar4);
    pcVar4 = "massSnapMessageMetadata";
    func_0x0001003a83dc(auStack_4f0,"massSnapMessageMetadata");
    FUN_10529071c();
    func_0x0001003b1b50(auStack_380,auStack_4f0,pcVar4);
    func_0x000104bdbd44(0x1138187f8,auStack_490,0,auStack_488,0xc);
    lVar8 = 0x108;
    do {
      func_0x0001003b1c5c(auStack_488 + lVar8);
      lVar8 = lVar8 + -0x18;
      uVar1 = lVar8 == -0x18;
    } while (!(bool)uVar1);
    func_0x0001003a8c94(auStack_4f0);
    func_0x0001003a8c94(auStack_4e8);
    func_0x0001003a8c94(auStack_4e0);
    func_0x0001003a8c94(auStack_4d8);
    func_0x0001003a8c94(auStack_4d0);
    func_0x0001003a8c94(auStack_4c8);
    func_0x0001003a8c94(auStack_4c0);
    func_0x0001003a8c94(auStack_4b8);
    func_0x0001003a8c94(auStack_4b0);
    func_0x0001003a8c94(auStack_4a8);
    func_0x0001003a8c94(auStack_4a0);
    func_0x0001003a8c94(auStack_498);
    func_0x0001003a8c94(auStack_490);
    ___cxa_guard_release(0x1136b9958);
  }
  return (undefined1 *)0x1138187f8;
}



/* Entry: 10528f8a4; end: 10528fadf;  */

undefined1 * FUN_10528f8a4(undefined1 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  long lVar6;
  undefined1 auStack_420 [8];
  undefined1 auStack_418 [8];
  undefined1 auStack_410 [8];
  undefined1 auStack_408 [8];
  undefined1 auStack_400 [8];
  undefined1 auStack_3f8 [8];
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [8];
  undefined1 auStack_3e0 [8];
  undefined1 auStack_3d8 [8];
  undefined1 auStack_3d0 [8];
  undefined1 auStack_3c8 [8];
  undefined1 auStack_3c0 [8];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined8 uStack_298;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [16];
  undefined4 uStack_238;
  undefined2 uStack_230;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x00010528fc24();
  if ((bRam00000001138187d8 & 1) == 0) {
    param_1 = (undefined1 *)0x1138187d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_100,"_djinni_record_Message");
      pcVar3 = "descriptor";
      func_0x0001003a83dc(auStack_108,"descriptor");
      FUN_105290ffc();
      func_0x0001003b1b50(auStack_f8,auStack_108,pcVar3);
      pcVar3 = "senderId";
      func_0x0001003a83dc(auStack_110,"senderId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_e0,auStack_110,pcVar3);
      pcVar3 = "messageContent";
      func_0x0001003a83dc(auStack_118,"messageContent");
      FUN_10528fb00();
      func_0x0001003b1b50(auStack_c8,auStack_118,pcVar3);
      pcVar3 = "metadata";
      func_0x0001003a83dc(auStack_120,"metadata");
      FUN_10529279c();
      func_0x0001003b1b50(auStack_b0,auStack_120,pcVar3);
      pcVar3 = "releasePolicy";
      func_0x0001003a83dc(auStack_128,"releasePolicy");
      FUN_10528fb5c();
      func_0x0001003b1b50(auStack_98,auStack_128,pcVar3);
      pcVar3 = "state";
      func_0x0001003a83dc(auStack_130,"state");
      FUN_10528fbb4();
      func_0x0001003b1b50(auStack_80,auStack_130,pcVar3);
      pcVar3 = "messageAnalytics";
      func_0x0001003a83dc(auStack_138,"messageAnalytics");
      FUN_10528fd48();
      func_0x0001003b1b50(auStack_68,auStack_138,pcVar3);
      pcVar3 = "orderKey";
      func_0x0001003a83dc(auStack_140,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_50,auStack_140,pcVar3);
      uVar5 = 0;
      func_0x000104bdbd44(0x1138187c8,auStack_100,0,auStack_f8,8);
      lVar6 = 0xa8;
      do {
        func_0x0001003b1c5c(auStack_f8 + lVar6);
        param_2 = (int)uVar5;
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      func_0x0001003a8c94(auStack_118);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      param_1 = (undefined1 *)0x1138187d8;
      ___cxa_guard_release();
    }
  }
  func_0x00010528fc0c();
  if ((bool)in_ZR) {
    return (undefined1 *)0x1138187c8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (param_1[0x398] != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  uStack_188 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052900e8();
  func_0x0001003b2110(auStack_258,0x113818800);
  func_0x000108b80a1c(auStack_248,param_1);
  uStack_238 = *(undefined4 *)(param_1 + 0x18);
  uStack_230 = 4;
  FUN_10529050c(auStack_228,param_1 + 0x20);
  func_0x00010528cbb4(auStack_218,param_1 + 0x40);
  func_0x000105290520(auStack_208,param_1 + 0x60);
  FUN_105290534(auStack_1f8,param_1 + 0x80);
  FUN_1052905b8(auStack_1e8,param_1 + 0x98);
  func_0x0001052905cc(auStack_1d8,param_1 + 0x2d8);
  func_0x00010528cba0(auStack_1c8,param_1 + 0x2e0);
  func_0x00010528cbdc(auStack_1b8,param_1 + 800);
  func_0x0001052905e0(auStack_1a8,param_1 + 0x340);
  func_0x0001052905f4(auStack_198,param_1 + 0x370);
  func_0x000104bdb9bc(auStack_250,auStack_258,auStack_248,0xc);
  lVar6 = 0xb0;
  do {
    func_0x00010b9a8d98(auStack_248 + lVar6);
    lVar6 = lVar6 + -0x10;
    uVar1 = lVar6 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_258);
  func_0x00010b9a8f60(extraout_x8,auStack_250);
  puVar4 = auStack_250;
  func_0x000104bdbf78();
  func_0x000105290ecc(uStack_188);
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = auStack_198;
  lVar6 = -0xc0;
  do {
    func_0x00010b9a8d98(puVar4);
    puVar4 = puVar4 + -0x10;
    lVar6 = lVar6 + 0x10;
    uVar1 = lVar6 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_258);
  func_0x000105290dc4();
  uStack_298 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9958 & 1) == 0) {
    iVar2 = 0x136b9958;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_3c0,"_djinni_record_MessageContent");
      pcVar3 = "content";
      func_0x0001003a83dc(auStack_3c8,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_3b8,auStack_3c8,pcVar3);
      pcVar3 = "contentType";
      func_0x0001003a83dc(auStack_3d0,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_3a0,auStack_3d0,pcVar3);
      func_0x0001003a83dc(auStack_3d8,"remoteMediaInfo");
      if ((bRam00000001136b9960 & 1) == 0) goto LAB_105290414;
      goto LAB_1052901d0;
    }
  }
  while (func_0x000105290ecc(uStack_298), !(bool)uVar1) {
    ___stack_chk_fail();
LAB_105290414:
    iVar2 = 0x136b9960;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if ((bRam00000001136b9968 & 1) == 0) {
        iVar2 = 0x136b9968;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_10529947c();
          func_0x00010b990868(0x1136b9990);
          ___cxa_guard_release(0x1136b9968);
        }
      }
      func_0x00010b990784(0x1136b9990);
      ___cxa_guard_release(0x1136b9960);
    }
LAB_1052901d0:
    func_0x0001003b1b50(auStack_388,auStack_3d8,0x1136b9980);
    pcVar3 = "remoteMediaReferences";
    func_0x0001003a83dc(auStack_3e0,"remoteMediaReferences");
    FUN_10528cd00();
    func_0x0001003b1b50(auStack_370,auStack_3e0,pcVar3);
    pcVar3 = "localMediaReferences";
    func_0x0001003a83dc(auStack_3e8,"localMediaReferences");
    FUN_105290608();
    func_0x0001003b1b50(auStack_358,auStack_3e8,pcVar3);
    pcVar3 = "thumbnailIndexLists";
    func_0x0001003a83dc(auStack_3f0,"thumbnailIndexLists");
    FUN_105290664();
    func_0x0001003b1b50(auStack_340,auStack_3f0,pcVar3);
    func_0x0001003a83dc(auStack_3f8,"quotedMessage");
    if ((bRam00000001136b9970 & 1) == 0) {
      iVar2 = 0x136b9970;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_1052982dc();
        func_0x00010b990784(0x1136b99a0);
        ___cxa_guard_release(0x1136b9970);
      }
    }
    func_0x0001003b1b50(auStack_328,auStack_3f8,0x1136b99a0);
    func_0x0001003a83dc(auStack_400,"snapDisplayInfo");
    if ((bRam00000001136b9978 & 1) == 0) {
      iVar2 = 0x136b9978;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_10529ae4c();
        func_0x00010b990784(0x1136b99b0);
        ___cxa_guard_release(0x1136b9978);
      }
    }
    func_0x0001003b1b50(auStack_310,auStack_400,0x1136b99b0);
    pcVar3 = "messageTypeMetadata";
    func_0x0001003a83dc(auStack_408,"messageTypeMetadata");
    FUN_10528cca4();
    func_0x0001003b1b50(auStack_2f8,auStack_408,pcVar3);
    pcVar3 = "snapModeInfo";
    func_0x0001003a83dc(auStack_410,"snapModeInfo");
    FUN_10528cdb8();
    func_0x0001003b1b50(auStack_2e0,auStack_410,pcVar3);
    pcVar3 = "publicGroupMessageMetadata";
    func_0x0001003a83dc(auStack_418,"publicGroupMessageMetadata");
    FUN_1052906c0();
    func_0x0001003b1b50(auStack_2c8,auStack_418,pcVar3);
    pcVar3 = "massSnapMessageMetadata";
    func_0x0001003a83dc(auStack_420,"massSnapMessageMetadata");
    FUN_10529071c();
    func_0x0001003b1b50(auStack_2b0,auStack_420,pcVar3);
    func_0x000104bdbd44(0x1138187f8,auStack_3c0,0,auStack_3b8,0xc);
    lVar6 = 0x108;
    do {
      func_0x0001003b1c5c(auStack_3b8 + lVar6);
      lVar6 = lVar6 + -0x18;
      uVar1 = lVar6 == -0x18;
    } while (!(bool)uVar1);
    func_0x0001003a8c94(auStack_420);
    func_0x0001003a8c94(auStack_418);
    func_0x0001003a8c94(auStack_410);
    func_0x0001003a8c94(auStack_408);
    func_0x0001003a8c94(auStack_400);
    func_0x0001003a8c94(auStack_3f8);
    func_0x0001003a8c94(auStack_3f0);
    func_0x0001003a8c94(auStack_3e8);
    func_0x0001003a8c94(auStack_3e0);
    func_0x0001003a8c94(auStack_3d8);
    func_0x0001003a8c94(auStack_3d0);
    func_0x0001003a8c94(auStack_3c8);
    func_0x0001003a8c94(auStack_3c0);
    ___cxa_guard_release(0x1136b9958);
  }
  return (undefined1 *)0x1138187f8;
}



/* Entry: 10528fae0; end: 10528faff;  */

undefined1 * FUN_10528fae0(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined8 uStack_158;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [16];
  undefined4 uStack_f8;
  undefined2 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  if (param_2[0x398] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052900e8();
  func_0x0001003b2110(auStack_118,0x113818800);
  func_0x000108b80a1c(auStack_108,param_2);
  uStack_f8 = *(undefined4 *)(param_2 + 0x18);
  uStack_f0 = 4;
  FUN_10529050c(auStack_e8,param_2 + 0x20);
  func_0x00010528cbb4(auStack_d8,param_2 + 0x40);
  func_0x000105290520(auStack_c8,param_2 + 0x60);
  FUN_105290534(auStack_b8,param_2 + 0x80);
  FUN_1052905b8(auStack_a8,param_2 + 0x98);
  func_0x0001052905cc(auStack_98,param_2 + 0x2d8);
  func_0x00010528cba0(auStack_88,param_2 + 0x2e0);
  func_0x00010528cbdc(auStack_78,param_2 + 800);
  func_0x0001052905e0(auStack_68,param_2 + 0x340);
  func_0x0001052905f4(auStack_58,param_2 + 0x370);
  func_0x000104bdb9bc(auStack_110,auStack_118,auStack_108,0xc);
  lVar5 = 0xb0;
  do {
    func_0x00010b9a8d98(auStack_108 + lVar5);
    lVar5 = lVar5 + -0x10;
    uVar1 = lVar5 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_118);
  func_0x00010b9a8f60(param_1,auStack_110);
  puVar3 = auStack_110;
  func_0x000104bdbf78();
  func_0x000105290ecc(uStack_48);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = auStack_58;
  lVar5 = -0xc0;
  do {
    func_0x00010b9a8d98(puVar3);
    puVar3 = puVar3 + -0x10;
    lVar5 = lVar5 + 0x10;
    uVar1 = lVar5 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_118);
  func_0x000105290dc4();
  uStack_158 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9958 & 1) == 0) {
    iVar2 = 0x136b9958;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_280,"_djinni_record_MessageContent");
      pcVar4 = "content";
      func_0x0001003a83dc(auStack_288,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_278,auStack_288,pcVar4);
      pcVar4 = "contentType";
      func_0x0001003a83dc(auStack_290,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_260,auStack_290,pcVar4);
      func_0x0001003a83dc(auStack_298,"remoteMediaInfo");
      if ((bRam00000001136b9960 & 1) == 0) goto LAB_105290414;
      goto LAB_1052901d0;
    }
  }
  while (func_0x000105290ecc(uStack_158), !(bool)uVar1) {
    ___stack_chk_fail();
LAB_105290414:
    iVar2 = 0x136b9960;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if ((bRam00000001136b9968 & 1) == 0) {
        iVar2 = 0x136b9968;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_10529947c();
          func_0x00010b990868(0x1136b9990);
          ___cxa_guard_release(0x1136b9968);
        }
      }
      func_0x00010b990784(0x1136b9990);
      ___cxa_guard_release(0x1136b9960);
    }
LAB_1052901d0:
    func_0x0001003b1b50(auStack_248,auStack_298,0x1136b9980);
    pcVar4 = "remoteMediaReferences";
    func_0x0001003a83dc(auStack_2a0,"remoteMediaReferences");
    FUN_10528cd00();
    func_0x0001003b1b50(auStack_230,auStack_2a0,pcVar4);
    pcVar4 = "localMediaReferences";
    func_0x0001003a83dc(auStack_2a8,"localMediaReferences");
    FUN_105290608();
    func_0x0001003b1b50(auStack_218,auStack_2a8,pcVar4);
    pcVar4 = "thumbnailIndexLists";
    func_0x0001003a83dc(auStack_2b0,"thumbnailIndexLists");
    FUN_105290664();
    func_0x0001003b1b50(auStack_200,auStack_2b0,pcVar4);
    func_0x0001003a83dc(auStack_2b8,"quotedMessage");
    if ((bRam00000001136b9970 & 1) == 0) {
      iVar2 = 0x136b9970;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_1052982dc();
        func_0x00010b990784(0x1136b99a0);
        ___cxa_guard_release(0x1136b9970);
      }
    }
    func_0x0001003b1b50(auStack_1e8,auStack_2b8,0x1136b99a0);
    func_0x0001003a83dc(auStack_2c0,"snapDisplayInfo");
    if ((bRam00000001136b9978 & 1) == 0) {
      iVar2 = 0x136b9978;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_10529ae4c();
        func_0x00010b990784(0x1136b99b0);
        ___cxa_guard_release(0x1136b9978);
      }
    }
    func_0x0001003b1b50(auStack_1d0,auStack_2c0,0x1136b99b0);
    pcVar4 = "messageTypeMetadata";
    func_0x0001003a83dc(auStack_2c8,"messageTypeMetadata");
    FUN_10528cca4();
    func_0x0001003b1b50(auStack_1b8,auStack_2c8,pcVar4);
    pcVar4 = "snapModeInfo";
    func_0x0001003a83dc(auStack_2d0,"snapModeInfo");
    FUN_10528cdb8();
    func_0x0001003b1b50(auStack_1a0,auStack_2d0,pcVar4);
    pcVar4 = "publicGroupMessageMetadata";
    func_0x0001003a83dc(auStack_2d8,"publicGroupMessageMetadata");
    FUN_1052906c0();
    func_0x0001003b1b50(auStack_188,auStack_2d8,pcVar4);
    pcVar4 = "massSnapMessageMetadata";
    func_0x0001003a83dc(auStack_2e0,"massSnapMessageMetadata");
    FUN_10529071c();
    func_0x0001003b1b50(auStack_170,auStack_2e0,pcVar4);
    func_0x000104bdbd44(0x1138187f8,auStack_280,0,auStack_278,0xc);
    lVar5 = 0x108;
    do {
      func_0x0001003b1c5c(auStack_278 + lVar5);
      lVar5 = lVar5 + -0x18;
      uVar1 = lVar5 == -0x18;
    } while (!(bool)uVar1);
    func_0x0001003a8c94(auStack_2e0);
    func_0x0001003a8c94(auStack_2d8);
    func_0x0001003a8c94(auStack_2d0);
    func_0x0001003a8c94(auStack_2c8);
    func_0x0001003a8c94(auStack_2c0);
    func_0x0001003a8c94(auStack_2b8);
    func_0x0001003a8c94(auStack_2b0);
    func_0x0001003a8c94(auStack_2a8);
    func_0x0001003a8c94(auStack_2a0);
    func_0x0001003a8c94(auStack_298);
    func_0x0001003a8c94(auStack_290);
    func_0x0001003a8c94(auStack_288);
    func_0x0001003a8c94(auStack_280);
    ___cxa_guard_release(0x1136b9958);
  }
  return (undefined1 *)0x1138187f8;
}



/* Entry: 10528fb00; end: 10528fb5b;  */

undefined8 FUN_10528fb00(void)

{
  int iVar1;
  
  if ((bRam00000001130cbe28 & 1) == 0) {
    iVar1 = 0x130cbe28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052900e8();
      func_0x00010b990784(0x1130cbe18);
      ___cxa_guard_release(0x1130cbe28);
    }
  }
  return 0x1130cbe18;
}



/* Entry: 10528fb5c; end: 10528fbb3;  */

undefined8 FUN_10528fb5c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbe40 & 1) == 0) {
    iVar1 = 0x130cbe40;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbe30);
      ___cxa_guard_release(0x1130cbe40);
    }
  }
  return 0x1130cbe30;
}



/* Entry: 10528fbb4; end: 10528fc0b;  */

undefined8 FUN_10528fbb4(void)

{
  int iVar1;
  
  if ((bRam00000001130cbe58 & 1) == 0) {
    iVar1 = 0x130cbe58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbe48);
      ___cxa_guard_release(0x1130cbe58);
    }
  }
  return 0x1130cbe48;
}



/* Entry: 10528fc0c; end: 10528fc37;  */

void FUN_10528fc0c(void)

{
  return;
}



/* Entry: 10528fc38; end: 10528fd47;  */

undefined1 * FUN_10528fc38(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528fd48();
  func_0x0001003b2110(auStack_78,0x1138187e8);
  func_0x000105280820(auStack_68,param_2);
  uStack_58 = *(undefined4 *)(param_2 + 0x20);
  uStack_50 = 4;
  uStack_48 = *(undefined1 *)(param_2 + 0x24);
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar6 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_70;
  func_0x000104bdbf78();
  FUN_10528ff00(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  __Unwind_Resume(puVar3);
  pcStack_88 = FUN_10528fd48;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar8;
  puStack_98 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138187f0 & 1) == 0) {
    iVar2 = 0x138187f0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_MessageAnalytics");
      pcVar4 = "analyticsMessageId";
      func_0x0001003a83dc(auStack_100,"analyticsMessageId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar4);
      pcVar4 = "messageEncryption";
      func_0x0001003a83dc(auStack_108,"messageEncryption");
      FUN_10528fea8();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar4);
      pcVar4 = "isReencrypted";
      func_0x0001003a83dc(auStack_110,"isReencrypted");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138187e0,auStack_f8,0,auStack_f0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      ___cxa_guard_release(0x1138187f0);
    }
  }
  FUN_10528ff00(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138187e0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbe70 & 1) == 0) {
    iVar5 = 0x130cbe70;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x1130cbe60);
      ___cxa_guard_release(0x1130cbe70);
    }
  }
  return (undefined1 *)0x1130cbe60;
}



/* Entry: 10528fd48; end: 10528fea7;  */

undefined8 FUN_10528fd48(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138187f0 & 1) == 0) {
    iVar1 = 0x138187f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_MessageAnalytics");
      pcVar2 = "analyticsMessageId";
      func_0x0001003a83dc(auStack_80,"analyticsMessageId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar2);
      pcVar2 = "messageEncryption";
      func_0x0001003a83dc(auStack_88,"messageEncryption");
      FUN_10528fea8();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar2);
      pcVar2 = "isReencrypted";
      func_0x0001003a83dc(auStack_90,"isReencrypted");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138187e0,auStack_78,0,auStack_70,3);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      ___cxa_guard_release(0x1138187f0);
    }
  }
  FUN_10528ff00(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138187e0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbe70 & 1) == 0) {
    iVar1 = 0x130cbe70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbe60);
      ___cxa_guard_release(0x1130cbe70);
    }
  }
  return 0x1130cbe60;
}



/* Entry: 10528fea8; end: 10528feff;  */

undefined8 FUN_10528fea8(void)

{
  int iVar1;
  
  if ((bRam00000001130cbe70 & 1) == 0) {
    iVar1 = 0x130cbe70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbe60);
      ___cxa_guard_release(0x1130cbe70);
    }
  }
  return 0x1130cbe60;
}



/* Entry: 10528ff00; end: 10528ff13;  */

void FUN_10528ff00(void)

{
  return;
}



/* Entry: 10528ff14; end: 1052900e7;  */

undefined1 * FUN_10528ff14(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined8 uStack_158;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [16];
  undefined4 uStack_f8;
  undefined2 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052900e8();
  func_0x0001003b2110(auStack_118,0x113818800);
  func_0x000108b80a1c(auStack_108,param_2);
  uStack_f8 = *(undefined4 *)(param_2 + 0x18);
  uStack_f0 = 4;
  FUN_10529050c(auStack_e8,param_2 + 0x20);
  func_0x00010528cbb4(auStack_d8,param_2 + 0x40);
  func_0x000105290520(auStack_c8,param_2 + 0x60);
  FUN_105290534(auStack_b8,param_2 + 0x80);
  FUN_1052905b8(auStack_a8,param_2 + 0x98);
  func_0x0001052905cc(auStack_98,param_2 + 0x2d8);
  func_0x00010528cba0(auStack_88,param_2 + 0x2e0);
  func_0x00010528cbdc(auStack_78,param_2 + 800);
  func_0x0001052905e0(auStack_68,param_2 + 0x340);
  func_0x0001052905f4(auStack_58,param_2 + 0x370);
  func_0x000104bdb9bc(auStack_110,auStack_118,auStack_108,0xc);
  lVar5 = 0xb0;
  do {
    func_0x00010b9a8d98(auStack_108 + lVar5);
    lVar5 = lVar5 + -0x10;
    uVar1 = lVar5 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_118);
  func_0x00010b9a8f60(param_1,auStack_110);
  puVar3 = auStack_110;
  func_0x000104bdbf78();
  func_0x000105290ecc(uStack_48);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = auStack_58;
  lVar5 = -0xc0;
  do {
    func_0x00010b9a8d98(puVar3);
    puVar3 = puVar3 + -0x10;
    lVar5 = lVar5 + 0x10;
    uVar1 = lVar5 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_118);
  func_0x000105290dc4();
  uStack_158 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9958 & 1) == 0) {
    iVar2 = 0x136b9958;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_280,"_djinni_record_MessageContent");
      pcVar4 = "content";
      func_0x0001003a83dc(auStack_288,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_278,auStack_288,pcVar4);
      pcVar4 = "contentType";
      func_0x0001003a83dc(auStack_290,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_260,auStack_290,pcVar4);
      func_0x0001003a83dc(auStack_298,"remoteMediaInfo");
      if ((bRam00000001136b9960 & 1) == 0) goto LAB_105290414;
      goto LAB_1052901d0;
    }
  }
  while (func_0x000105290ecc(uStack_158), !(bool)uVar1) {
    ___stack_chk_fail();
LAB_105290414:
    iVar2 = 0x136b9960;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if ((bRam00000001136b9968 & 1) == 0) {
        iVar2 = 0x136b9968;
        ___cxa_guard_acquire();
        if (iVar2 != 0) {
          FUN_10529947c();
          func_0x00010b990868(0x1136b9990);
          ___cxa_guard_release(0x1136b9968);
        }
      }
      func_0x00010b990784(0x1136b9990);
      ___cxa_guard_release(0x1136b9960);
    }
LAB_1052901d0:
    func_0x0001003b1b50(auStack_248,auStack_298,0x1136b9980);
    pcVar4 = "remoteMediaReferences";
    func_0x0001003a83dc(auStack_2a0,"remoteMediaReferences");
    FUN_10528cd00();
    func_0x0001003b1b50(auStack_230,auStack_2a0,pcVar4);
    pcVar4 = "localMediaReferences";
    func_0x0001003a83dc(auStack_2a8,"localMediaReferences");
    FUN_105290608();
    func_0x0001003b1b50(auStack_218,auStack_2a8,pcVar4);
    pcVar4 = "thumbnailIndexLists";
    func_0x0001003a83dc(auStack_2b0,"thumbnailIndexLists");
    FUN_105290664();
    func_0x0001003b1b50(auStack_200,auStack_2b0,pcVar4);
    func_0x0001003a83dc(auStack_2b8,"quotedMessage");
    if ((bRam00000001136b9970 & 1) == 0) {
      iVar2 = 0x136b9970;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_1052982dc();
        func_0x00010b990784(0x1136b99a0);
        ___cxa_guard_release(0x1136b9970);
      }
    }
    func_0x0001003b1b50(auStack_1e8,auStack_2b8,0x1136b99a0);
    func_0x0001003a83dc(auStack_2c0,"snapDisplayInfo");
    if ((bRam00000001136b9978 & 1) == 0) {
      iVar2 = 0x136b9978;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_10529ae4c();
        func_0x00010b990784(0x1136b99b0);
        ___cxa_guard_release(0x1136b9978);
      }
    }
    func_0x0001003b1b50(auStack_1d0,auStack_2c0,0x1136b99b0);
    pcVar4 = "messageTypeMetadata";
    func_0x0001003a83dc(auStack_2c8,"messageTypeMetadata");
    FUN_10528cca4();
    func_0x0001003b1b50(auStack_1b8,auStack_2c8,pcVar4);
    pcVar4 = "snapModeInfo";
    func_0x0001003a83dc(auStack_2d0,"snapModeInfo");
    FUN_10528cdb8();
    func_0x0001003b1b50(auStack_1a0,auStack_2d0,pcVar4);
    pcVar4 = "publicGroupMessageMetadata";
    func_0x0001003a83dc(auStack_2d8,"publicGroupMessageMetadata");
    FUN_1052906c0();
    func_0x0001003b1b50(auStack_188,auStack_2d8,pcVar4);
    pcVar4 = "massSnapMessageMetadata";
    func_0x0001003a83dc(auStack_2e0,"massSnapMessageMetadata");
    FUN_10529071c();
    func_0x0001003b1b50(auStack_170,auStack_2e0,pcVar4);
    func_0x000104bdbd44(0x1138187f8,auStack_280,0,auStack_278,0xc);
    lVar5 = 0x108;
    do {
      func_0x0001003b1c5c(auStack_278 + lVar5);
      lVar5 = lVar5 + -0x18;
      uVar1 = lVar5 == -0x18;
    } while (!(bool)uVar1);
    func_0x0001003a8c94(auStack_2e0);
    func_0x0001003a8c94(auStack_2d8);
    func_0x0001003a8c94(auStack_2d0);
    func_0x0001003a8c94(auStack_2c8);
    func_0x0001003a8c94(auStack_2c0);
    func_0x0001003a8c94(auStack_2b8);
    func_0x0001003a8c94(auStack_2b0);
    func_0x0001003a8c94(auStack_2a8);
    func_0x0001003a8c94(auStack_2a0);
    func_0x0001003a8c94(auStack_298);
    func_0x0001003a8c94(auStack_290);
    func_0x0001003a8c94(auStack_288);
    func_0x0001003a8c94(auStack_280);
    ___cxa_guard_release(0x1136b9958);
  }
  return (undefined1 *)0x1138187f8;
}



/* Entry: 1052900e8; end: 10529050b;  */

undefined8 FUN_1052900e8(void)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9958 & 1) == 0) {
    iVar1 = 0x136b9958;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_160,"_djinni_record_MessageContent");
      pcVar2 = "content";
      func_0x0001003a83dc(auStack_168,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_158,auStack_168,pcVar2);
      pcVar2 = "contentType";
      func_0x0001003a83dc(auStack_170,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_140,auStack_170,pcVar2);
      func_0x0001003a83dc(auStack_178,"remoteMediaInfo");
      if ((bRam00000001136b9960 & 1) == 0) goto LAB_105290414;
      goto LAB_1052901d0;
    }
  }
  while (func_0x000105290ecc(uStack_38), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_105290414:
    iVar1 = 0x136b9960;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if ((bRam00000001136b9968 & 1) == 0) {
        iVar1 = 0x136b9968;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          FUN_10529947c();
          func_0x00010b990868(0x1136b9990);
          ___cxa_guard_release(0x1136b9968);
        }
      }
      func_0x00010b990784(0x1136b9990);
      ___cxa_guard_release(0x1136b9960);
    }
LAB_1052901d0:
    func_0x0001003b1b50(auStack_128,auStack_178,0x1136b9980);
    pcVar2 = "remoteMediaReferences";
    func_0x0001003a83dc(auStack_180,"remoteMediaReferences");
    FUN_10528cd00();
    func_0x0001003b1b50(auStack_110,auStack_180,pcVar2);
    pcVar2 = "localMediaReferences";
    func_0x0001003a83dc(auStack_188,"localMediaReferences");
    FUN_105290608();
    func_0x0001003b1b50(auStack_f8,auStack_188,pcVar2);
    pcVar2 = "thumbnailIndexLists";
    func_0x0001003a83dc(auStack_190,"thumbnailIndexLists");
    FUN_105290664();
    func_0x0001003b1b50(auStack_e0,auStack_190,pcVar2);
    func_0x0001003a83dc(auStack_198,"quotedMessage");
    if ((bRam00000001136b9970 & 1) == 0) {
      iVar1 = 0x136b9970;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_1052982dc();
        func_0x00010b990784(0x1136b99a0);
        ___cxa_guard_release(0x1136b9970);
      }
    }
    func_0x0001003b1b50(auStack_c8,auStack_198,0x1136b99a0);
    func_0x0001003a83dc(auStack_1a0,"snapDisplayInfo");
    if ((bRam00000001136b9978 & 1) == 0) {
      iVar1 = 0x136b9978;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10529ae4c();
        func_0x00010b990784(0x1136b99b0);
        ___cxa_guard_release(0x1136b9978);
      }
    }
    func_0x0001003b1b50(auStack_b0,auStack_1a0,0x1136b99b0);
    pcVar2 = "messageTypeMetadata";
    func_0x0001003a83dc(auStack_1a8,"messageTypeMetadata");
    FUN_10528cca4();
    func_0x0001003b1b50(auStack_98,auStack_1a8,pcVar2);
    pcVar2 = "snapModeInfo";
    func_0x0001003a83dc(auStack_1b0,"snapModeInfo");
    FUN_10528cdb8();
    func_0x0001003b1b50(auStack_80,auStack_1b0,pcVar2);
    pcVar2 = "publicGroupMessageMetadata";
    func_0x0001003a83dc(auStack_1b8,"publicGroupMessageMetadata");
    FUN_1052906c0();
    func_0x0001003b1b50(auStack_68,auStack_1b8,pcVar2);
    pcVar2 = "massSnapMessageMetadata";
    func_0x0001003a83dc(auStack_1c0,"massSnapMessageMetadata");
    FUN_10529071c();
    func_0x0001003b1b50(auStack_50,auStack_1c0,pcVar2);
    func_0x000104bdbd44(0x1138187f8,auStack_160,0,auStack_158,0xc);
    lVar3 = 0x108;
    do {
      func_0x0001003b1c5c(auStack_158 + lVar3);
      lVar3 = lVar3 + -0x18;
      in_ZR = lVar3 == -0x18;
    } while (!(bool)in_ZR);
    func_0x0001003a8c94(auStack_1c0);
    func_0x0001003a8c94(auStack_1b8);
    func_0x0001003a8c94(auStack_1b0);
    func_0x0001003a8c94(auStack_1a8);
    func_0x0001003a8c94(auStack_1a0);
    func_0x0001003a8c94(auStack_198);
    func_0x0001003a8c94(auStack_190);
    func_0x0001003a8c94(auStack_188);
    func_0x0001003a8c94(auStack_180);
    func_0x0001003a8c94(auStack_178);
    func_0x0001003a8c94(auStack_170);
    func_0x0001003a8c94(auStack_168);
    func_0x0001003a8c94(auStack_160);
    ___cxa_guard_release(0x1136b9958);
  }
  return 0x1138187f8;
}



/* Entry: 10529050c; end: 105290533;  */

void FUN_10529050c(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x9;
  long lVar2;
  undefined1 auStack_58 [24];
  
  uVar1 = *(char *)(param_2 + 0x18) != '\0';
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000105290ec0();
    func_0x000105290e7c();
    lVar2 = 0;
    while (func_0x000105290eac(), !(bool)uVar1) {
      FUN_105299360(auStack_58,extraout_x9 + lVar2);
      func_0x000105290e04();
      func_0x00010b9a8d98(auStack_58);
      lVar2 = lVar2 + 0x48;
    }
    func_0x000105290e94();
    func_0x000105290e2c();
    return;
  }
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 105290534; end: 1052905b7;  */

void FUN_105290534(void)

{
  undefined1 in_CY;
  long extraout_x9;
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000105290ec0();
  func_0x000105290e7c();
  lVar1 = 0;
  while (func_0x000105290eac(), !(bool)in_CY) {
    FUN_10529d854(auStack_58,extraout_x9 + lVar1);
    func_0x000105290e04();
    func_0x00010b9a8d98(auStack_58);
    lVar1 = lVar1 + 0x18;
  }
  func_0x000105290e94();
  func_0x000105290e2c();
  return;
}



/* Entry: 1052905b8; end: 105290607;  */

undefined8 *
FUN_1052905b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_520;
  undefined8 *puStack_518;
  undefined1 auStack_510 [8];
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 auStack_4c0 [8];
  undefined1 auStack_4b8 [8];
  undefined1 auStack_4b0 [8];
  undefined1 auStack_4a8 [8];
  undefined1 auStack_4a0 [8];
  undefined1 auStack_498 [8];
  undefined1 auStack_490 [8];
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  undefined1 auStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined8 uStack_2b8;
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  undefined1 auStack_268 [16];
  undefined4 uStack_258;
  undefined2 uStack_250;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined8 uStack_1f8;
  undefined2 uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined1 uStack_1d8;
  undefined2 uStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 0x47) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052982dc();
  func_0x0001003b2110(auStack_68,0x1138189d8);
  auStack_58[0] = *(undefined4 *)param_2;
  uStack_50 = 4;
  FUN_10529840c(auStack_48,param_2 + 1);
  func_0x000104bdb9bc(&uStack_60,auStack_68,auStack_58,2);
  lVar9 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = &uStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_60;
  func_0x000104bdbf78();
  FUN_1052984fc(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar9 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar5 = (int)puVar6;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = puVar2;
  __Unwind_Resume();
  pcStack_78 = FUN_1052982dc;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar9;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138189e0 & 1) == 0) {
    puVar6 = (undefined8 *)0x1138189e0;
    ___cxa_guard_acquire();
    if ((int)puVar6 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_QuotedMessage");
      pcVar4 = "status";
      func_0x0001003a83dc(auStack_d8,"status");
      FUN_10529842c();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "content";
      func_0x0001003a83dc(auStack_e0,"content");
      FUN_105298484();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar8 = 0;
      param_5 = 2;
      func_0x000104bdbd44(0x1138189d0,auStack_d0,0,auStack_c8,2);
      lVar9 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar9);
        iVar5 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar6 = (undefined8 *)0x1138189e0;
      ___cxa_guard_release();
    }
  }
  FUN_1052984fc(uStack_98);
  if ((bool)uVar1) {
    return (undefined8 *)0x1138189d0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar6 + 0x45) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar6;
  }
  uStack_138 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105298770();
  func_0x0001003b2110(auStack_278,0x1136b9a78);
  func_0x000108b80a1c(auStack_268,puVar6);
  uStack_258 = *(undefined4 *)(puVar6 + 3);
  uStack_250 = 4;
  func_0x00010528cbb4(auStack_248,puVar6 + 4);
  func_0x000105290520(auStack_238,puVar6 + 8);
  FUN_105290534(auStack_228,puVar6 + 0xc);
  FUN_10529dd1c(auStack_218,puVar6 + 0xf);
  uStack_200 = 5;
  uStack_208 = puVar6[0x12];
  uStack_1f8 = puVar6[0x13];
  uStack_1f0 = 5;
  FUN_10529dd1c(auStack_1e8,puVar6 + 0x14);
  uStack_1d0 = 7;
  uStack_1d8 = *(undefined1 *)(puVar6 + 0x17);
  uStack_1c8 = puVar6[0x18];
  uStack_1c0 = 5;
  func_0x000105280820(auStack_1b8,puVar6 + 0x19);
  FUN_105282834(auStack_1a8,puVar6 + 0x1d);
  func_0x00010528cba0(auStack_198,puVar6 + 0x20);
  if (*(char *)((long)puVar6 + 0x144) == '\x01') {
    uStack_188 = CONCAT44(uStack_188._4_4_,*(undefined4 *)(puVar6 + 0x28));
    uStack_180 = 4;
  }
  else {
    uStack_188 = 0;
    uStack_180 = 1;
  }
  uStack_17f = 0;
  func_0x00010528cbdc(auStack_178,puVar6 + 0x29);
  func_0x0001052905e0(auStack_168,puVar6 + 0x2d);
  func_0x0001052905f4(auStack_158,puVar6 + 0x33);
  FUN_105292f00(auStack_148,puVar6 + 0x38);
  uVar8 = 0x13;
  func_0x000104bdb9bc(&uStack_270,auStack_278,auStack_268);
  lVar9 = 0x120;
  do {
    func_0x00010b9a8d98(auStack_268 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_278);
  puVar6 = &uStack_270;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = &uStack_270;
  func_0x000104bdbf78();
  FUN_105298d98(uStack_138);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_148;
  lVar9 = -0x130;
  do {
    func_0x00010b9a8d98(puVar3);
    uVar7 = (undefined4)uVar8;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_278);
  __Unwind_Resume();
  uStack_2b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9a68 & 1) == 0) {
    puVar2 = (undefined8 *)0x1136b9a68;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_488,"_djinni_record_QuotedMessageContent");
      pcVar4 = "content";
      func_0x0001003a83dc(auStack_490,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_480,auStack_490,pcVar4);
      pcVar4 = "contentType";
      func_0x0001003a83dc(auStack_498,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_468,auStack_498,pcVar4);
      pcVar4 = "remoteMediaReferences";
      func_0x0001003a83dc(auStack_4a0,"remoteMediaReferences");
      FUN_10528cd00();
      func_0x0001003b1b50(auStack_450,auStack_4a0,pcVar4);
      pcVar4 = "localMediaReferences";
      func_0x0001003a83dc(auStack_4a8,"localMediaReferences");
      FUN_105290608();
      func_0x0001003b1b50(auStack_438,auStack_4a8,pcVar4);
      pcVar4 = "thumbnailIndexLists";
      func_0x0001003a83dc(auStack_4b0,"thumbnailIndexLists");
      FUN_105290664();
      func_0x0001003b1b50(auStack_420,auStack_4b0,pcVar4);
      pcVar4 = "conversationId";
      func_0x0001003a83dc(auStack_4b8,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_408,auStack_4b8,pcVar4);
      pcVar4 = "messageId";
      func_0x0001003a83dc(auStack_4c0,"messageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_3f0,auStack_4c0,pcVar4);
      pcVar4 = "orderKey";
      func_0x0001003a83dc(&uStack_4c8,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_3d8,&uStack_4c8,pcVar4);
      pcVar4 = "senderId";
      func_0x0001003a83dc(&uStack_4d0,"senderId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_3c0,&uStack_4d0,pcVar4);
      pcVar4 = "isSaved";
      func_0x0001003a83dc(&uStack_4d8,"isSaved");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_3a8,&uStack_4d8,pcVar4);
      pcVar4 = "createdAt";
      func_0x0001003a83dc(&puStack_4e0,"createdAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_390,&puStack_4e0,pcVar4);
      pcVar4 = "analyticsMessageId";
      func_0x0001003a83dc(&uStack_4e8,"analyticsMessageId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_378,&uStack_4e8,pcVar4);
      pcVar4 = "openedBy";
      func_0x0001003a83dc(&uStack_4f0,"openedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_360,&uStack_4f0,pcVar4);
      pcVar4 = "messageTypeMetadata";
      func_0x0001003a83dc(&puStack_4f8);
      FUN_10528cca4();
      func_0x0001003b1b50(auStack_348,&puStack_4f8,pcVar4);
      pcVar4 = "snapPostOpenViewingState";
      func_0x0001003a83dc(&puStack_500,"snapPostOpenViewingState");
      FUN_105292f20();
      func_0x0001003b1b50(auStack_330,&puStack_500,pcVar4);
      pcVar4 = "snapModeInfo";
      func_0x0001003a83dc(&uStack_508);
      FUN_10528cdb8();
      func_0x0001003b1b50(auStack_318,&uStack_508,pcVar4);
      pcVar4 = "publicGroupMessageMetadata";
      func_0x0001003a83dc(auStack_510);
      FUN_1052906c0();
      func_0x0001003b1b50(auStack_300,auStack_510,pcVar4);
      pcVar4 = "massSnapMessageMetadata";
      func_0x0001003a83dc(&puStack_518);
      FUN_10529071c();
      func_0x0001003b1b50(auStack_2e8,&puStack_518,pcVar4);
      pcVar4 = "pollMetadata";
      func_0x0001003a83dc(&uStack_520);
      FUN_105292f7c();
      func_0x0001003b1b50(auStack_2d0,&uStack_520,pcVar4);
      puVar3 = auStack_480;
      puVar6 = (undefined8 *)0x0;
      param_5 = 0x13;
      func_0x000104bdbd44(0x1136b9a70,auStack_488,0,puVar3,0x13);
      lVar9 = 0x1b0;
      do {
        func_0x0001003b1c5c(auStack_480 + lVar9);
        uVar7 = SUB84(puVar3,0);
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(&uStack_520);
      func_0x0001003a8c94(&puStack_518);
      func_0x0001003a8c94(auStack_510);
      func_0x0001003a8c94(&uStack_508);
      func_0x0001003a8c94(&puStack_500);
      func_0x0001003a8c94(&puStack_4f8);
      func_0x0001003a8c94(&uStack_4f0);
      func_0x0001003a8c94(&uStack_4e8);
      func_0x0001003a8c94(&puStack_4e0);
      func_0x0001003a8c94(&uStack_4d8);
      func_0x0001003a8c94(&uStack_4d0);
      func_0x0001003a8c94(&uStack_4c8);
      func_0x0001003a8c94(auStack_4c0);
      func_0x0001003a8c94(auStack_4b8);
      func_0x0001003a8c94(auStack_4b0);
      func_0x0001003a8c94(auStack_4a8);
      func_0x0001003a8c94(auStack_4a0);
      func_0x0001003a8c94(auStack_498);
      func_0x0001003a8c94(auStack_490);
      func_0x0001003a8c94(auStack_488);
      puVar2 = (undefined8 *)0x1136b9a68;
      ___cxa_guard_release();
    }
  }
  FUN_105298d98(uStack_2b8);
  if ((bool)uVar1) {
    return (undefined8 *)0x1136b9a70;
  }
  ___stack_chk_fail();
  if ((int)puVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar8 = *puVar6;
  puVar2[1] = puVar6[1];
  *puVar2 = uVar8;
  puVar2[2] = puVar6[2];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined4 *)(puVar2 + 3) = uVar7;
  func_0x000100699ef0(puVar2 + 4,param_5);
  func_0x00010069957c(puVar2 + 8,param_6);
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  uVar8 = *param_7;
  puVar2[0xd] = param_7[1];
  puVar2[0xc] = uVar8;
  puVar2[0xe] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  uVar8 = *param_8;
  puVar2[0x10] = param_8[1];
  puVar2[0xf] = uVar8;
  puVar2[0x11] = param_8[2];
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  puVar2[0x12] = param_9;
  puVar2[0x13] = uStack_520;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x14] = 0;
  uVar8 = *puStack_518;
  puVar2[0x15] = puStack_518[1];
  puVar2[0x14] = uVar8;
  puVar2[0x16] = puStack_518[2];
  *puStack_518 = 0;
  puStack_518[1] = 0;
  puStack_518[2] = 0;
  *(undefined1 *)(puVar2 + 0x19) = 0;
  *(undefined1 *)(puVar2 + 0x17) = auStack_510[0];
  puVar2[0x18] = uStack_508;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  if (*(char *)(puStack_500 + 3) == '\x01') {
    uVar10 = puStack_500[1];
    uVar8 = *puStack_500;
    puVar2[0x1b] = puStack_500[2];
    puVar2[0x1a] = uVar10;
    puVar2[0x19] = uVar8;
    puStack_500[1] = 0;
    puStack_500[2] = 0;
    *puStack_500 = 0;
    *(undefined1 *)(puVar2 + 0x1c) = 1;
  }
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  uVar8 = *puStack_4f8;
  puVar2[0x1e] = puStack_4f8[1];
  puVar2[0x1d] = uVar8;
  puVar2[0x1f] = puStack_4f8[2];
  *puStack_4f8 = 0;
  puStack_4f8[1] = 0;
  puStack_4f8[2] = 0;
  func_0x000100699f98(puVar2 + 0x20,uStack_4f0);
  puVar2[0x28] = uStack_4e8;
  uVar8 = *puStack_4e0;
  uVar11 = puStack_4e0[3];
  uVar10 = puStack_4e0[2];
  puVar2[0x2a] = puStack_4e0[1];
  puVar2[0x29] = uVar8;
  puVar2[0x2c] = uVar11;
  puVar2[0x2b] = uVar10;
  func_0x000100699fd4(puVar2 + 0x2d,uStack_4d8);
  func_0x00010069a010(puVar2 + 0x33,uStack_4d0);
  func_0x00010069aaa0(puVar2 + 0x38,uStack_4c8);
  return puVar2;
}



/* Entry: 105290608; end: 105290663;  */

undefined8 FUN_105290608(void)

{
  int iVar1;
  
  if ((bRam00000001130cbe88 & 1) == 0) {
    iVar1 = 0x130cbe88;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528cbf0();
      func_0x00010b990784(0x1130cbe78);
      ___cxa_guard_release(0x1130cbe88);
    }
  }
  return 0x1130cbe78;
}



/* Entry: 105290664; end: 1052906bf;  */

undefined8 FUN_105290664(void)

{
  int iVar1;
  
  if ((bRam00000001130cbea0 & 1) == 0) {
    iVar1 = 0x130cbea0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529d920();
      func_0x00010b990868(0x1130cbe90);
      ___cxa_guard_release(0x1130cbea0);
    }
  }
  return 0x1130cbe90;
}



/* Entry: 1052906c0; end: 10529071b;  */

undefined8 FUN_1052906c0(void)

{
  int iVar1;
  
  if ((bRam00000001130cbeb8 & 1) == 0) {
    iVar1 = 0x130cbeb8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105297ffc();
      func_0x00010b990784(0x1130cbea8);
      ___cxa_guard_release(0x1130cbeb8);
    }
  }
  return 0x1130cbea8;
}



/* Entry: 10529071c; end: 105290777;  */

undefined8 FUN_10529071c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbed0 & 1) == 0) {
    iVar1 = 0x130cbed0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528de44();
      func_0x00010b990784(0x1130cbec0);
      ___cxa_guard_release(0x1130cbed0);
    }
  }
  return 0x1130cbec0;
}



/* Entry: 105290778; end: 1052907f3;  */

void FUN_105290778(undefined8 param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x000105290ee0();
  if ((ulong)(extraout_x9 / 0x48) < param_2) {
    if (0x38e38e38e38e38e < param_2) {
      FUN_1052907f4();
      func_0x000105290e24();
      func_0x000105290dc4();
      func_0x000105290ea0();
      func_0x000105290e34();
      FUN_1052908c8();
      func_0x000105290d80();
      return;
    }
    FUN_105290838(auStack_48);
    func_0x000105290e64();
    FUN_105290800();
    func_0x000105290e24();
  }
  return;
}



/* Entry: 1052907f4; end: 1052907ff;  */

void FUN_1052907f4(void)

{
  func_0x000105290ea0();
  func_0x000105290e34();
  FUN_1052908c8();
  func_0x000105290d80();
  return;
}



/* Entry: 105290800; end: 105290837;  */

void FUN_105290800(void)

{
  func_0x000105290e34();
  FUN_1052908c8();
  func_0x000105290d80();
  return;
}



/* Entry: 105290838; end: 105290897;  */

void FUN_105290838(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x000105290874(param_4);
  }
  func_0x000105290e4c(0x48);
  return;
}



/* Entry: 105290898; end: 1052908c7;  */

void FUN_105290898(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x48) {
    func_0x00010529099c(param_4,uVar1);
    param_4 = lStack_48 + 0x48;
  }
  uStack_58 = 1;
  func_0x00010529096c(param_1,param_2,param_3);
  FUN_105290a00(&uStack_70);
  return;
}



/* Entry: 1052908c8; end: 10529096b;  */

void FUN_1052908c8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x48) {
    func_0x00010529099c(param_4,lVar1);
    param_4 = lStack_38 + 0x48;
  }
  uStack_48 = 1;
  func_0x00010529096c(param_1,param_2,param_3);
  FUN_105290a00(&uStack_60);
  return;
}



/* Entry: 10529096c; end: 1052909ff;  */

void FUN_10529096c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    func_0x000104be16a0();
  }
  return;
}



/* Entry: 105290a00; end: 105290a2f;  */

long FUN_105290a00(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105290a30(param_1);
  }
  return param_1;
}



/* Entry: 105290a30; end: 105290a4f;  */

void FUN_105290a30(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x48;
    func_0x000104be16a0();
  }
  return;
}



/* Entry: 105290a50; end: 105290aab;  */

void FUN_105290a50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x48;
    func_0x000104be16a0();
  }
  return;
}



/* Entry: 105290aac; end: 105290ab3;  */

void FUN_105290aac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x48;
    func_0x000104be16a0();
  }
  return;
}



/* Entry: 105290ab4; end: 105290b4f;  */

void FUN_105290ab4(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x48;
    func_0x000104be16a0();
  }
  return;
}



/* Entry: 105290b50; end: 105290bc7;  */

undefined8 FUN_105290b50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x000105290ec0();
  FUN_105290bc8();
  func_0x000105290de8();
  FUN_105290838();
  func_0x00010529099c(uStack_48,param_2);
  func_0x000105290e64();
  FUN_105290800();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000105290e24();
  return uVar1;
}



/* Entry: 105290bc8; end: 105290c2b;  */

ulong FUN_105290bc8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (0x38e38e38e38e38e < param_2) {
    FUN_1052907f4();
    func_0x000105290ea0();
    uVar2 = *(ulong *)param_1[2];
    uVar1 = *(ulong *)param_1[1];
    while (uVar2 != uVar1) {
      uVar2 = uVar2 - 0x18;
      func_0x0001002920a0();
    }
    return uVar2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x48;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x1c71c71c71c71c6 < uVar1) {
    uVar2 = 0x38e38e38e38e38e;
  }
  return uVar2;
}



/* Entry: 105290c2c; end: 105290c4b;  */

void FUN_105290c2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x0001002920a0();
  }
  return;
}



/* Entry: 105290c4c; end: 105290c7b;  */

void FUN_105290c4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x0001002920a0();
  }
  return;
}



/* Entry: 105290c7c; end: 105290cdf;  */

long * FUN_105290c7c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000105290c20();
    func_0x000104be7364();
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 105290ce0; end: 105290d63;  */

void FUN_105290ce0(void)

{
  undefined1 in_CY;
  long extraout_x9;
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000105290ec0();
  func_0x000105290e7c();
  lVar1 = 0;
  while (func_0x000105290eac(), !(bool)in_CY) {
    FUN_105299360(auStack_58,extraout_x9 + lVar1);
    func_0x000105290e04();
    func_0x00010b9a8d98(auStack_58);
    lVar1 = lVar1 + 0x48;
  }
  func_0x000105290e94();
  func_0x000105290e2c();
  return;
}



/* Entry: 105290d64; end: 105290ef3;  */

void FUN_105290d64(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 105290ef4; end: 105290ffb;  */

undefined1 * FUN_105290ef4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105290ffc();
  func_0x0001003b2110(auStack_68,0x113818810);
  FUN_10529dd1c(auStack_58,param_2);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_10529112c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_105290ffc;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818818 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818818;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_MessageDescriptor");
      pcVar5 = "conversationId";
      func_0x0001003a83dc(auStack_d8,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "messageId";
      func_0x0001003a83dc(auStack_e0,"messageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818808,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x113818818;
      ___cxa_guard_release(0x113818818);
    }
  }
  FUN_10529112c(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818808;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105290ffc; end: 10529112b;  */

undefined8 FUN_105290ffc(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818818 & 1) == 0) {
    param_1 = 0x113818818;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_MessageDescriptor");
      pcVar1 = "conversationId";
      func_0x0001003a83dc(auStack_68,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "messageId";
      func_0x0001003a83dc(auStack_70,"messageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818808,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818818;
      ___cxa_guard_release(0x113818818);
    }
  }
  FUN_10529112c(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818808;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529112c; end: 10529113f;  */

void FUN_10529112c(void)

{
  return;
}



/* Entry: 105291140; end: 10529122b;  */

void FUN_105291140(undefined8 param_1)

{
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  func_0x000104bede38(auStack_40,lStack_28 + 0x18);
  FUN_10529122c(auStack_58,lStack_28 + 0x28);
  FUN_1052912d0(auStack_70,lStack_28 + 0x38);
  FUN_105291374(auStack_88,lStack_28 + 0x48);
  FUN_1052916b0(param_1,auStack_40,auStack_58,auStack_70,auStack_88);
  func_0x000104bee7a0(auStack_88);
  func_0x000104bee7dc(auStack_70);
  func_0x000104bee864(auStack_58);
  func_0x0001005fb56c(auStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10529122c; end: 1052912cf;  */

void FUN_10529122c(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_88 [88];
  
  func_0x000105292284();
  if (((bool)in_ZR) && (lVar2 = *param_1, lVar2 != 0)) {
    FUN_105291718();
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_10529be90(auStack_88,lVar1);
      func_0x0001052922ec();
      func_0x000105291a88();
      func_0x000104bee8ec(auStack_88);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 1052912d0; end: 105291373;  */

void FUN_1052912d0(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000105292284();
  if (((bool)in_ZR) && (lVar2 = *param_1, lVar2 != 0)) {
    FUN_105291bb8();
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_105295f34(auStack_48,lVar1);
      func_0x0001052922ec();
      func_0x000105291ea0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 105291374; end: 105291403;  */

void FUN_105291374(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  
  func_0x000105292284();
  if (((bool)in_ZR) && (lVar1 = *param_1, lVar1 != 0)) {
    FUN_105291fc0();
    for (uVar2 = 0; uVar2 < *(ulong *)(lVar1 + 0x10); uVar2 = uVar2 + 1) {
      FUN_10528dba8();
      FUN_105292128();
    }
  }
  return;
}



/* Entry: 105291404; end: 10529159b;  */

undefined8 FUN_105291404(undefined8 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818830 & 1) == 0) {
    iVar1 = 0x13818830;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_MessageDestinations");
      pcVar2 = "conversations";
      func_0x0001003a83dc(auStack_98,"conversations");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar2);
      pcVar2 = "stories";
      func_0x0001003a83dc(auStack_a0,"stories");
      FUN_10529159c();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar2);
      pcVar2 = "phoneNumbers";
      func_0x0001003a83dc(auStack_a8,"phoneNumbers");
      FUN_1052915f8();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar2);
      pcVar2 = "massSnaps";
      func_0x0001003a83dc(auStack_b0,"massSnaps");
      FUN_105291654();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818820,auStack_90,0,auStack_88,4);
      lVar4 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      ___cxa_guard_release(0x113818830);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 0x113818820;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbee8 & 1) == 0) {
    iVar1 = 0x130cbee8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529bf60();
      func_0x00010b990868(0x1130cbed8);
      ___cxa_guard_release(0x1130cbee8);
    }
  }
  return 0x1130cbed8;
}



/* Entry: 10529159c; end: 1052915f7;  */

undefined8 FUN_10529159c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbee8 & 1) == 0) {
    iVar1 = 0x130cbee8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529bf60();
      func_0x00010b990868(0x1130cbed8);
      ___cxa_guard_release(0x1130cbee8);
    }
  }
  return 0x1130cbed8;
}


