/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072e97e8; end: 1072e97ef;  */

void FUN_1072e97e8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 1072e97f0; end: 1072e9837;  */

long * FUN_1072e97f0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x58;
    func_0x0001072645e8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072e9838; end: 1072e9e5b;  */

void FUN_1072e9838(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  ulong extraout_x8;
  ulong uVar5;
  long extraout_x8_00;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x28;
  ulong uVar15;
  ulong uStack_120;
  undefined1 auStack_118 [88];
  undefined1 auStack_c0 [96];
  
  uVar10 = 0x58;
  uVar12 = param_1;
  uStack_120 = param_2;
  do {
    uVar7 = uStack_120 - 0x58;
    uVar5 = param_1;
LAB_1072e9884:
    func_0x0001072f2b50();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001072e9ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10de343f4)[uVar5] * 4 + 0x1072e9aec))();
      return;
    }
    if ((long)extraout_x8 < 0x840) {
      if ((param_4 & 1) == 0) {
        if (param_1 == uStack_120) {
          return;
        }
        while (uVar12 = param_1, param_1 = uVar12 + 0x58, param_1 != uStack_120) {
          uVar10 = param_1;
          func_0x0001072f1bf4();
          if (((uint)uVar10 >> 7 & 1) != 0) {
            func_0x0001072f2158();
            do {
              uVar10 = uVar12;
              FUN_1072ea1a0(uVar10 + 0x58,uVar10);
              uVar9 = (uint)auStack_c0;
              func_0x0001072f1bf4();
              uVar12 = uVar10 - 0x58;
            } while ((uVar9 >> 7 & 1) != 0);
            FUN_1072ea1a0(uVar10,auStack_c0);
            func_0x0001072f1f18();
          }
        }
        return;
      }
      if (param_1 == uStack_120) {
        return;
      }
      lVar13 = 0;
      uVar10 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == uStack_120) {
        return;
      }
      uVar11 = uVar5 - 2 >> 1;
      uVar15 = uStack_120;
      uVar14 = uVar11;
      goto LAB_1072e9be8;
    }
    lVar13 = param_1 + (uVar5 >> 1) * 0x58;
    if (extraout_x8 < 0x2c01) {
      func_0x0001072f27b8(lVar13,param_1);
    }
    else {
      func_0x0001072f2a2c();
      func_0x0001072f27b8();
      FUN_1072e9e5c(param_1 + 0x58,lVar13 + -0x58,uStack_120 - 0xb0);
      FUN_1072e9e5c(param_1 + 0xb0,lVar13 + 0x58,uStack_120 - 0x108);
      func_0x0001072f2650();
      FUN_1072e9e5c();
      func_0x0001072f2a2c();
      FUN_1072ea14c();
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      lVar13 = param_1 - 0x58;
      func_0x000100125af4(lVar13,param_1);
      if (((uint)lVar13 >> 7 & 1) == 0) {
        func_0x0001072f2158();
        puVar4 = auStack_c0;
        func_0x0001072f1bf4();
        uVar5 = param_1;
        if (((uint)puVar4 >> 7 & 1) == 0) {
          do {
            uVar5 = uVar5 + 0x58;
            if (uStack_120 <= uVar5) break;
            func_0x0001072f214c();
          } while (((uint)puVar4 >> 7 & 1) == 0);
        }
        else {
          do {
            uVar5 = uVar5 + 0x58;
            func_0x0001072f214c();
          } while (((uint)puVar4 >> 7 & 1) == 0);
        }
        if (uVar5 < uStack_120) {
          do {
            func_0x0001072f24cc();
          } while (((uint)puVar4 >> 7 & 1) != 0);
        }
        while (uVar5 < uStack_120) {
          uVar12 = uVar5;
          FUN_1072ea14c(uVar5,uStack_120);
          do {
            uVar5 = uVar5 + 0x58;
            func_0x0001072f214c();
          } while (((uint)uVar12 >> 7 & 1) == 0);
          do {
            func_0x0001072f24cc();
          } while (((uint)uVar12 >> 7 & 1) != 0);
        }
        uVar12 = uVar5 - 0x58;
        in_CY = uVar12 <= param_1;
        in_ZR = param_1 == uVar12;
        if (!(bool)in_ZR) {
          FUN_1072ea1a0(param_1,uVar12);
        }
        FUN_1072ea1a0(uVar12,auStack_c0);
        func_0x0001072f1f18();
        param_4 = 0;
        goto LAB_1072e9884;
      }
    }
    func_0x0001072f2158();
    lVar13 = 0;
    do {
      lVar13 = lVar13 + 0x58;
      lVar6 = lVar13 + param_1;
      func_0x000100125af4(lVar6,auStack_c0);
    } while (((uint)lVar6 >> 7 & 1) != 0);
    uVar12 = param_1 + lVar13;
    uVar5 = uVar12;
    uVar15 = uStack_120;
    if (lVar13 == 0x58) {
      do {
        if (uStack_120 <= uVar12) break;
        func_0x0001072f24ec();
      } while (((uint)lVar6 >> 7 & 1) == 0);
    }
    else {
      do {
        func_0x0001072f24ec();
      } while (((uint)lVar6 >> 7 & 1) == 0);
    }
    while (uVar5 < uVar15) {
      FUN_1072ea14c(uVar5,uVar15);
      do {
        uVar5 = uVar5 + 0x58;
        uVar14 = uVar5;
        func_0x000100125af4(uVar5,auStack_c0);
      } while (((uint)uVar14 >> 7 & 1) != 0);
      do {
        uVar15 = uVar15 - 0x58;
        uVar14 = uVar15;
        func_0x000100125af4(uVar15,auStack_c0);
      } while (((uint)uVar14 >> 7 & 1) == 0);
    }
    unaff_x28 = uVar5 - 0x58;
    if (param_1 != unaff_x28) {
      func_0x0001072f2398();
      FUN_1072ea1a0();
    }
    uVar15 = unaff_x28;
    FUN_1072ea1a0(unaff_x28,auStack_c0);
    func_0x0001072f1f18();
    in_CY = uStack_120 <= uVar12;
    in_ZR = uVar12 == uStack_120;
    uVar12 = uVar15;
    if (!(bool)in_CY) goto LAB_1072e99fc;
    func_0x0001072f2398();
    FUN_1072e9fc0();
    uVar12 = uVar5;
    FUN_1072e9fc0(uVar5,uStack_120);
    if ((int)uVar12 == 0) goto code_r0x0001072e99f8;
    uStack_120 = unaff_x28;
    if ((uVar15 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1072e9b5c:
  uVar10 = uVar10 + 0x58;
  if (uVar10 == uStack_120) {
    return;
  }
  func_0x0001072f2524();
  if (((uint)uVar12 >> 7 & 1) != 0) {
    func_0x0001072f281c(auStack_c0);
    lVar6 = lVar13;
    do {
      FUN_1072ea1a0(param_1 + lVar6 + 0x58);
      uVar12 = param_1;
      if (lVar6 == 0) goto LAB_1072e9bb4;
      lVar6 = lVar6 + -0x58;
      puVar4 = auStack_c0;
      func_0x000100125af4(puVar4,lVar6 + param_1);
    } while (((uint)puVar4 >> 7 & 1) != 0);
    uVar12 = param_1 + lVar6 + 0x58;
LAB_1072e9bb4:
    FUN_1072ea1a0(uVar12,auStack_c0);
    func_0x0001072f1f18();
  }
  lVar13 = lVar13 + 0x58;
  goto LAB_1072e9b5c;
LAB_1072e9be8:
  do {
    cVar2 = SBORROW8(uVar11,uVar14);
    cVar3 = (long)(uVar11 - uVar14) < 0;
    if ((long)uVar14 <= (long)uVar11) {
      func_0x0001072f2490();
      uVar8 = uVar15;
      uVar1 = uVar7;
      if (cVar3 != cVar2) {
        func_0x0001072f1e14();
        func_0x000100125af4();
        func_0x0001072f2474();
        uVar8 = uVar10;
        uVar1 = uVar7 + 0x58;
        if (cVar3 == cVar2) {
          uVar8 = uVar15;
          uVar1 = uVar7;
        }
      }
      uVar7 = uVar1;
      uVar15 = uVar8;
      uVar10 = param_1 + uVar14 * 0x58;
      func_0x0001072f1aa0();
      if (((uint)uVar12 >> 7 & 1) == 0) {
        FUN_1072e9718(auStack_c0,uVar10);
        do {
          uVar8 = uVar7;
          uVar12 = uVar10;
          FUN_1072ea1a0(uVar10,uVar8);
          cVar2 = SBORROW8(uVar11,uVar15);
          cVar3 = (long)(uVar11 - uVar15) < 0;
          uVar7 = uVar8;
          if ((long)uVar11 < (long)uVar15) break;
          func_0x0001072f2554();
          uVar10 = unaff_x28;
          if (cVar3 != cVar2) {
            func_0x0001072f1aa0();
            func_0x0001072f2474();
            uVar7 = uVar8 + 0x58;
            uVar10 = uVar15;
            if (cVar3 == cVar2) {
              uVar7 = uVar8;
              uVar10 = unaff_x28;
            }
          }
          uVar15 = uVar10;
          func_0x0001072f2524();
          uVar10 = uVar8;
          unaff_x28 = uVar15;
        } while (((uint)uVar12 >> 7 & 1) == 0);
        func_0x0001072f2930();
        func_0x0001072f1f18();
      }
    }
    uVar14 = uVar14 - 1;
  } while (-1 < (long)uVar14);
  do {
    cVar2 = SBORROW8(uVar5,2);
    uVar12 = uVar5 - 2;
    cVar3 = (long)uVar12 < 0;
    if ((long)uVar5 < 2) {
      return;
    }
    FUN_1072e9718(auStack_118,param_1);
    uVar15 = uVar12 >> 1;
    uVar10 = param_1;
    uVar7 = 0;
    do {
      uVar14 = uVar10 + uVar7 * 0x58 + 0x58;
      func_0x0001072f2668();
      uVar10 = uVar14;
      uVar11 = uVar7;
      if (cVar3 != cVar2) {
        func_0x0001072f1aa0();
        func_0x0001072f2474();
        uVar10 = extraout_x8_00 + 0xb0;
        uVar11 = uVar12;
        if (cVar3 == cVar2) {
          uVar10 = uVar14;
          uVar11 = uVar7;
        }
      }
      func_0x0001072f1ca8();
      FUN_1072ea1a0();
      cVar2 = SBORROW8(uVar11,uVar15);
      cVar3 = (long)(uVar11 - uVar15) < 0;
      uVar7 = uVar11;
    } while ((long)uVar11 <= (long)uVar15);
    uStack_120 = uStack_120 - 0x58;
    if (uVar10 == uStack_120) {
      FUN_1072ea1a0(uVar10,auStack_118);
    }
    else {
      func_0x0001072f1c34();
      FUN_1072ea1a0();
      FUN_1072ea1a0(uStack_120,auStack_118);
      if (0x58 < (long)((uVar10 - param_1) + 0x58)) {
        func_0x0001072f25c4();
        uVar9 = (int)param_1 + (int)uVar15 * 0x58;
        func_0x0001072f1bf4();
        if ((uVar9 >> 7 & 1) != 0) {
          func_0x0001072f281c(auStack_c0);
          do {
            func_0x0001072f1f60();
            FUN_1072ea1a0();
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            lVar13 = param_1 + uVar15 * 0x58;
            func_0x000100125af4(lVar13,auStack_c0);
          } while (((uint)lVar13 >> 7 & 1) != 0);
          func_0x0001072f2930();
          func_0x0001072f1f18();
        }
      }
    }
    func_0x0001072645e8(auStack_118);
    uVar5 = uVar5 - 1;
  } while( true );
code_r0x0001072e99f8:
  if ((uVar15 & 1) == 0) {
LAB_1072e99fc:
    func_0x0001072f2398();
    FUN_1072e9838();
    param_4 = 0;
  }
  goto LAB_1072e9884;
}



/* Entry: 1072e9e5c; end: 1072e9f37;  */

void FUN_1072e9e5c(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint unaff_w19;
  undefined8 unaff_x20;
  uint unaff_w21;
  undefined1 auStack_78 [72];
  
  func_0x0001072f1ae4();
  func_0x0001072f1bf4();
  cVar1 = (char)param_2;
  func_0x0001072f19b0();
  if ((param_2 >> 7 & 1) != 0) {
    if (-1 < cVar1) {
      FUN_1072ea14c();
      func_0x0001072f19b0();
      if ((unaff_w21 >> 7 & 1) == 0) {
        return;
      }
    }
code_r0x0001072ea14c:
    func_0x0001072f1b80();
    FUN_1072e9718(auStack_78,unaff_x20);
    func_0x0001072f1b8c();
    FUN_1072ea1a0();
    func_0x0001072f2ab4();
    FUN_1072ea1a0();
    func_0x0001072645e8(auStack_78);
    return;
  }
  if (cVar1 < '\0') {
    func_0x0001072f1bcc();
    FUN_1072ea14c();
    func_0x0001072f1bf4();
    if ((unaff_w19 >> 7 & 1) != 0) {
      func_0x0001072f1c34();
      goto code_r0x0001072ea14c;
    }
  }
  return;
}



/* Entry: 1072e9f38; end: 1072e9fbf;  */

void FUN_1072e9f38(uint param_1)

{
  undefined8 unaff_x20;
  uint unaff_w22;
  undefined1 auStack_78 [56];
  
  func_0x0001072f1900();
  func_0x0001072e9ed8();
  func_0x0001072f2070();
  func_0x000100125af4();
  if ((param_1 >> 7 & 1) != 0) {
    func_0x0001072f1e88();
    FUN_1072ea14c();
    func_0x0001072f1bf4();
    if ((unaff_w22 >> 7 & 1) != 0) {
      func_0x0001072f1e14();
      FUN_1072ea14c();
      func_0x0001072f1c34();
      func_0x000100125af4();
      if ((unaff_w22 >> 7 & 1) != 0) {
        func_0x0001072f1d0c();
        FUN_1072ea14c();
        func_0x0001072f1bcc();
        func_0x000100125af4();
        if ((unaff_w22 >> 7 & 1) != 0) {
          func_0x0001072f1b8c();
          func_0x0001072f1b80();
          FUN_1072e9718(auStack_78,unaff_x20);
          func_0x0001072f1b8c();
          FUN_1072ea1a0();
          func_0x0001072f2ab4();
          FUN_1072ea1a0();
          func_0x0001072645e8(auStack_78);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1072e9fc0; end: 1072ea14b;  */

bool FUN_1072e9fc0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_98 [88];
  
  func_0x0001072f1c10();
  uVar1 = 0;
  switch((param_2 - param_1) / 0x58) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001072f19b0();
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x0001072f1bcc();
      FUN_1072ea14c();
    }
    break;
  case 3:
    FUN_1072e9e5c();
    break;
  case 4:
    func_0x0001072e9ed8();
    break;
  case 5:
    FUN_1072e9f38();
    break;
  default:
    puVar2 = unaff_x19;
    FUN_1072e9e5c();
    lVar5 = 0;
    iVar6 = 0;
    puVar3 = unaff_x19 + 0x108;
    while (puVar3 != unaff_x20) {
      func_0x0001072f241c();
      if (((uint)puVar2 >> 7 & 1) != 0) {
        func_0x0001072f281c(auStack_98);
        lVar4 = lVar5;
        do {
          FUN_1072ea1a0(unaff_x19 + lVar4 + 0x108,unaff_x19 + lVar4 + 0xb0);
          if (lVar4 == -0xb0) break;
          puVar3 = auStack_98;
          func_0x000100125af4(puVar3,unaff_x19 + lVar4 + 0x58);
          lVar4 = lVar4 + -0x58;
        } while (((uint)puVar3 >> 7 & 1) != 0);
        FUN_1072ea1a0();
        iVar6 = iVar6 + 1;
        puVar2 = auStack_98;
        func_0x0001072645e8();
        if (iVar6 == 8) {
          return (undefined1 *)(unaff_x21 + 0x58) == unaff_x20;
        }
      }
      lVar5 = lVar5 + 0x58;
      puVar3 = (undefined1 *)(unaff_x21 + 0x58);
    }
  }
  return true;
}



/* Entry: 1072ea14c; end: 1072ea19f;  */

void FUN_1072ea14c(void)

{
  undefined1 auStack_78 [88];
  
  func_0x0001072f1b80();
  FUN_1072e9718(auStack_78);
  func_0x0001072f1b8c();
  FUN_1072ea1a0();
  func_0x0001072f2ab4();
  FUN_1072ea1a0();
  func_0x0001072645e8(auStack_78);
  return;
}



/* Entry: 1072ea1a0; end: 1072ea1cb;  */

void FUN_1072ea1a0(long param_1)

{
  long unaff_x19;
  
  func_0x0001072f1b80();
  FUN_1072ea1cc();
  func_0x0001002a8208(param_1 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 1072ea1cc; end: 1072ea23b;  */

void FUN_1072ea1cc(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long lStack_28;
  
  func_0x0001072f1c10();
  func_0x000100066230();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (*(int *)(unaff_x19 + 0x30) != -1 || uVar1 != 0xffffffff) {
    lStack_28 = unaff_x19 + 0x18;
    if (uVar1 == 0xffffffff) {
      FUN_10726422c(lStack_28);
    }
    else {
      (*(code *)(&PTR_FUN_11099d5c8)[uVar1])(&lStack_28,lStack_28,unaff_x20 + 0x18);
    }
  }
  return;
}



/* Entry: 1072ea23c; end: 1072ea24b;  */

void FUN_1072ea23c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*param_1 + 0x18) != 0) {
    func_0x0001072747d8(*param_1,param_3);
    FUN_10726422c();
    uVar2 = unaff_x19[1];
    uVar1 = *unaff_x19;
    unaff_x20[2] = unaff_x19[2];
    unaff_x20[1] = uVar2;
    *unaff_x20 = uVar1;
    func_0x000107274c78();
    *(undefined4 *)(unaff_x20 + 3) = 0;
    return;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c60e14(*param_2);
  }
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_2[2] = param_3[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  *(undefined1 *)((long)param_3 + 0x17) = 0;
  *(undefined1 *)param_3 = 0;
  return;
}



/* Entry: 1072ea24c; end: 1072ea84b;  */

void FUN_1072ea24c(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong extraout_x8;
  ulong uVar6;
  long extraout_x8_00;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong unaff_x28;
  ulong uVar16;
  ulong uStack0000000000000018;
  
  func_0x0001072f2b98();
  uVar11 = 0x38;
  uVar13 = param_1;
  uStack0000000000000018 = param_2;
  do {
    uVar8 = uStack0000000000000018 - 0x38;
    uVar6 = param_1;
LAB_1072ea28c:
    func_0x0001072f2b50();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001072ea4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10de34400)[uVar6] * 4 + 0x1072ea4f4))();
      return;
    }
    if ((long)extraout_x8 < 0x540) {
      if ((param_4 & 1) == 0) {
        if (param_1 == uStack0000000000000018) {
          return;
        }
        while (uVar13 = param_1, param_1 = uVar13 + 0x38, param_1 != uStack0000000000000018) {
          uVar11 = param_1;
          func_0x0001072f1bf4();
          if (((uint)uVar11 >> 7 & 1) != 0) {
            func_0x0001072f209c();
            do {
              uVar11 = uVar13;
              FUN_1072ea1cc(uVar11 + 0x38,uVar11);
              uVar10 = 0;
              func_0x0001072f1bf4();
              uVar13 = uVar11 - 0x38;
            } while ((uVar10 >> 7 & 1) != 0);
            FUN_1072ea1cc(uVar11,&stack0x00000058);
            func_0x0001072f1ef8();
          }
        }
        return;
      }
      if (param_1 == uStack0000000000000018) {
        return;
      }
      lVar14 = 0;
      uVar11 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == uStack0000000000000018) {
        return;
      }
      uVar12 = uVar6 - 2 >> 1;
      uVar16 = uStack0000000000000018;
      uVar15 = uVar12;
      goto LAB_1072ea5f0;
    }
    lVar14 = param_1 + (uVar6 >> 1) * 0x38;
    if (extraout_x8 < 0x1c01) {
      func_0x0001072f27b0(lVar14,param_1);
    }
    else {
      func_0x0001072f2a2c();
      func_0x0001072f27b0();
      FUN_1072ea84c(param_1 + 0x38,lVar14 + -0x38,uStack0000000000000018 - 0x70);
      FUN_1072ea84c(param_1 + 0x70,lVar14 + 0x38,uStack0000000000000018 - 0xa8);
      func_0x0001072f2650();
      FUN_1072ea84c();
      func_0x0001072f2a2c();
      FUN_1072eab14();
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      lVar14 = param_1 - 0x38;
      func_0x000100125af4(lVar14,param_1);
      if (((uint)lVar14 >> 7 & 1) == 0) {
        func_0x0001072f209c();
        uVar4 = 0;
        func_0x0001072f1bf4();
        uVar6 = param_1;
        if (((uint)uVar4 >> 7 & 1) == 0) {
          do {
            uVar6 = uVar6 + 0x38;
            if (uStack0000000000000018 <= uVar6) break;
            func_0x0001072f2090();
          } while (((uint)uVar4 >> 7 & 1) == 0);
        }
        else {
          do {
            uVar6 = uVar6 + 0x38;
            func_0x0001072f2090();
          } while (((uint)uVar4 >> 7 & 1) == 0);
        }
        if (uVar6 < uStack0000000000000018) {
          do {
            func_0x0001072f23b4();
          } while (((uint)uVar4 >> 7 & 1) != 0);
        }
        while (uVar6 < uStack0000000000000018) {
          uVar13 = uVar6;
          FUN_1072eab14(uVar6,uStack0000000000000018);
          do {
            uVar6 = uVar6 + 0x38;
            func_0x0001072f2090();
          } while (((uint)uVar13 >> 7 & 1) == 0);
          do {
            func_0x0001072f23b4();
          } while (((uint)uVar13 >> 7 & 1) != 0);
        }
        uVar13 = uVar6 - 0x38;
        in_CY = uVar13 <= param_1;
        in_ZR = param_1 == uVar13;
        if (!(bool)in_ZR) {
          FUN_1072ea1cc(param_1,uVar13);
        }
        FUN_1072ea1cc(uVar13,&stack0x00000058);
        func_0x0001072f1ef8();
        param_4 = 0;
        goto LAB_1072ea28c;
      }
    }
    func_0x0001072f209c();
    lVar14 = 0;
    do {
      lVar14 = lVar14 + 0x38;
      lVar7 = lVar14 + param_1;
      func_0x000100125af4(lVar7,&stack0x00000058);
    } while (((uint)lVar7 >> 7 & 1) != 0);
    uVar13 = param_1 + lVar14;
    uVar6 = uVar13;
    uVar16 = uStack0000000000000018;
    if (lVar14 == 0x38) {
      do {
        if (uStack0000000000000018 <= uVar13) break;
        func_0x0001072f23c4();
      } while (((uint)lVar7 >> 7 & 1) == 0);
    }
    else {
      do {
        func_0x0001072f23c4();
      } while (((uint)lVar7 >> 7 & 1) == 0);
    }
    while (uVar6 < uVar16) {
      FUN_1072eab14(uVar6,uVar16);
      do {
        uVar6 = uVar6 + 0x38;
        uVar15 = uVar6;
        func_0x000100125af4(uVar6,&stack0x00000058);
      } while (((uint)uVar15 >> 7 & 1) != 0);
      do {
        uVar16 = uVar16 - 0x38;
        uVar15 = uVar16;
        func_0x000100125af4(uVar16,&stack0x00000058);
      } while (((uint)uVar15 >> 7 & 1) == 0);
    }
    unaff_x28 = uVar6 - 0x38;
    if (param_1 != unaff_x28) {
      func_0x0001072f2398();
      FUN_1072ea1cc();
    }
    uVar16 = unaff_x28;
    FUN_1072ea1cc(unaff_x28,&stack0x00000058);
    func_0x0001072f1ef8();
    in_CY = uStack0000000000000018 <= uVar13;
    in_ZR = uVar13 == uStack0000000000000018;
    uVar13 = uVar16;
    if (!(bool)in_CY) goto LAB_1072ea404;
    func_0x0001072f2398();
    FUN_1072ea9b0();
    uVar13 = uVar6;
    FUN_1072ea9b0(uVar6,uStack0000000000000018);
    if ((int)uVar13 == 0) goto code_r0x0001072ea400;
    uStack0000000000000018 = unaff_x28;
    if ((uVar16 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1072ea564:
  uVar11 = uVar11 + 0x38;
  if (uVar11 == uStack0000000000000018) {
    return;
  }
  func_0x0001072f2524();
  if (((uint)uVar13 >> 7 & 1) != 0) {
    func_0x0001072f2814(&stack0x00000058);
    lVar7 = lVar14;
    do {
      FUN_1072ea1cc(param_1 + lVar7 + 0x38);
      uVar13 = param_1;
      if (lVar7 == 0) goto LAB_1072ea5bc;
      lVar7 = lVar7 + -0x38;
      puVar5 = &stack0x00000058;
      func_0x000100125af4(puVar5,lVar7 + param_1);
    } while (((uint)puVar5 >> 7 & 1) != 0);
    uVar13 = param_1 + lVar7 + 0x38;
LAB_1072ea5bc:
    FUN_1072ea1cc(uVar13,&stack0x00000058);
    func_0x0001072f1ef8();
  }
  lVar14 = lVar14 + 0x38;
  goto LAB_1072ea564;
LAB_1072ea5f0:
  do {
    cVar2 = SBORROW8(uVar12,uVar15);
    cVar3 = (long)(uVar12 - uVar15) < 0;
    if ((long)uVar15 <= (long)uVar12) {
      func_0x0001072f2490();
      uVar9 = uVar16;
      uVar1 = uVar8;
      if (cVar3 != cVar2) {
        func_0x0001072f1e14();
        func_0x000100125af4();
        func_0x0001072f2474();
        uVar9 = uVar11;
        uVar1 = uVar8 + 0x38;
        if (cVar3 == cVar2) {
          uVar9 = uVar16;
          uVar1 = uVar8;
        }
      }
      uVar8 = uVar1;
      uVar16 = uVar9;
      uVar11 = param_1 + uVar15 * 0x38;
      func_0x0001072f1aa0();
      if (((uint)uVar13 >> 7 & 1) == 0) {
        FUN_1072e976c(&stack0x00000058,uVar11);
        do {
          uVar9 = uVar8;
          uVar13 = uVar11;
          FUN_1072ea1cc(uVar11,uVar9);
          cVar2 = SBORROW8(uVar12,uVar16);
          cVar3 = (long)(uVar12 - uVar16) < 0;
          uVar8 = uVar9;
          if ((long)uVar12 < (long)uVar16) break;
          func_0x0001072f2554();
          uVar11 = unaff_x28;
          if (cVar3 != cVar2) {
            func_0x0001072f1aa0();
            func_0x0001072f2474();
            uVar8 = uVar9 + 0x38;
            uVar11 = uVar16;
            if (cVar3 == cVar2) {
              uVar8 = uVar9;
              uVar11 = unaff_x28;
            }
          }
          uVar16 = uVar11;
          func_0x0001072f2524();
          uVar11 = uVar9;
          unaff_x28 = uVar16;
        } while (((uint)uVar13 >> 7 & 1) == 0);
        func_0x0001072f2850();
        func_0x0001072f1ef8();
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  do {
    cVar2 = SBORROW8(uVar6,2);
    uVar13 = uVar6 - 2;
    cVar3 = (long)uVar13 < 0;
    if ((long)uVar6 < 2) {
      return;
    }
    FUN_1072e976c(&stack0x00000020,param_1);
    uVar16 = uVar13 >> 1;
    uVar11 = param_1;
    uVar8 = 0;
    do {
      uVar15 = uVar11 + uVar8 * 0x38 + 0x38;
      func_0x0001072f2668();
      uVar11 = uVar15;
      uVar12 = uVar8;
      if (cVar3 != cVar2) {
        func_0x0001072f1aa0();
        func_0x0001072f2474();
        uVar11 = extraout_x8_00 + 0x70;
        uVar12 = uVar13;
        if (cVar3 == cVar2) {
          uVar11 = uVar15;
          uVar12 = uVar8;
        }
      }
      func_0x0001072f1ca8();
      FUN_1072ea1cc();
      cVar2 = SBORROW8(uVar12,uVar16);
      cVar3 = (long)(uVar12 - uVar16) < 0;
      uVar8 = uVar12;
    } while ((long)uVar12 <= (long)uVar16);
    uStack0000000000000018 = uStack0000000000000018 - 0x38;
    if (uVar11 == uStack0000000000000018) {
      FUN_1072ea1cc(uVar11,&stack0x00000020);
    }
    else {
      func_0x0001072f1c34();
      FUN_1072ea1cc();
      FUN_1072ea1cc(uStack0000000000000018,&stack0x00000020);
      if (0x38 < (long)((uVar11 - param_1) + 0x38)) {
        func_0x0001072f25c4();
        uVar10 = (int)param_1 + (int)uVar16 * 0x38;
        func_0x0001072f1bf4();
        if ((uVar10 >> 7 & 1) != 0) {
          func_0x0001072f2814(&stack0x00000058);
          do {
            func_0x0001072f1f60();
            FUN_1072ea1cc();
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            lVar14 = param_1 + uVar16 * 0x38;
            func_0x000100125af4(lVar14,&stack0x00000058);
          } while (((uint)lVar14 >> 7 & 1) != 0);
          func_0x0001072f2850();
          func_0x0001072f1ef8();
        }
      }
    }
    func_0x0001072642e8(&stack0x00000020);
    uVar6 = uVar6 - 1;
  } while( true );
code_r0x0001072ea400:
  if ((uVar16 & 1) == 0) {
LAB_1072ea404:
    func_0x0001072f2398();
    FUN_1072ea24c();
    param_4 = 0;
  }
  goto LAB_1072ea28c;
}



/* Entry: 1072ea84c; end: 1072ea927;  */

void FUN_1072ea84c(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint unaff_w19;
  undefined8 unaff_x20;
  uint unaff_w21;
  undefined1 auStack_58 [40];
  
  func_0x0001072f1ae4();
  func_0x0001072f1bf4();
  cVar1 = (char)param_2;
  func_0x0001072f19b0();
  if ((param_2 >> 7 & 1) != 0) {
    if (-1 < cVar1) {
      FUN_1072eab14();
      func_0x0001072f19b0();
      if ((unaff_w21 >> 7 & 1) == 0) {
        return;
      }
    }
code_r0x0001072eab14:
    func_0x0001072f1b80();
    FUN_1072e976c(auStack_58,unaff_x20);
    func_0x0001072f1b8c();
    FUN_1072ea1cc();
    func_0x0001072f2ab4();
    FUN_1072ea1cc();
    func_0x0001072642e8(auStack_58);
    return;
  }
  if (cVar1 < '\0') {
    func_0x0001072f1bcc();
    FUN_1072eab14();
    func_0x0001072f1bf4();
    if ((unaff_w19 >> 7 & 1) != 0) {
      func_0x0001072f1c34();
      goto code_r0x0001072eab14;
    }
  }
  return;
}



/* Entry: 1072ea928; end: 1072ea9af;  */

void FUN_1072ea928(uint param_1)

{
  undefined8 unaff_x20;
  uint unaff_w22;
  undefined1 auStack_58 [24];
  
  func_0x0001072f1900();
  func_0x0001072ea8c8();
  func_0x0001072f2070();
  func_0x000100125af4();
  if ((param_1 >> 7 & 1) != 0) {
    func_0x0001072f1e88();
    FUN_1072eab14();
    func_0x0001072f1bf4();
    if ((unaff_w22 >> 7 & 1) != 0) {
      func_0x0001072f1e14();
      FUN_1072eab14();
      func_0x0001072f1c34();
      func_0x000100125af4();
      if ((unaff_w22 >> 7 & 1) != 0) {
        func_0x0001072f1d0c();
        FUN_1072eab14();
        func_0x0001072f1bcc();
        func_0x000100125af4();
        if ((unaff_w22 >> 7 & 1) != 0) {
          func_0x0001072f1b8c();
          func_0x0001072f1b80();
          FUN_1072e976c(auStack_58,unaff_x20);
          func_0x0001072f1b8c();
          FUN_1072ea1cc();
          func_0x0001072f2ab4();
          FUN_1072ea1cc();
          func_0x0001072642e8(auStack_58);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1072ea9b0; end: 1072eab13;  */

ulong FUN_1072ea9b0(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_78 [56];
  
  func_0x0001072f1c10();
  func_0x0001072f1f9c();
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar1 = 1;
                    /* WARNING: Could not recover jumptable at 0x0001072ea9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10de34406)[extraout_x8] * 4 + 0x1072ea9f0))(1);
    return uVar1;
  }
  func_0x0001072f22c8();
  FUN_1072ea84c();
  lVar4 = 0;
  iVar5 = 0;
  lVar3 = unaff_x19 + 0xa8;
  do {
    if (lVar3 == unaff_x20) {
      return 1;
    }
    func_0x0001072f241c();
    if (((uint)param_1 >> 7 & 1) != 0) {
      func_0x0001072f2814(auStack_78);
      lVar3 = lVar4;
      do {
        FUN_1072ea1cc(unaff_x19 + lVar3 + 0xa8,unaff_x19 + lVar3 + 0x70);
        if (lVar3 == -0x70) break;
        puVar2 = auStack_78;
        func_0x000100125af4(puVar2,unaff_x19 + lVar3 + 0x38);
        lVar3 = lVar3 + -0x38;
      } while (((uint)puVar2 >> 7 & 1) != 0);
      FUN_1072ea1cc();
      iVar5 = iVar5 + 1;
      param_1 = auStack_78;
      func_0x0001072642e8();
      if (iVar5 == 8) {
        return (ulong)(unaff_x21 + 0x38 == unaff_x20);
      }
    }
    lVar3 = unaff_x21 + 0x38;
    lVar4 = lVar4 + 0x38;
  } while( true );
}



/* Entry: 1072eab14; end: 1072eab63;  */

void FUN_1072eab14(void)

{
  undefined1 auStack_58 [56];
  
  func_0x0001072f1b80();
  FUN_1072e976c(auStack_58);
  func_0x0001072f1b8c();
  FUN_1072ea1cc();
  func_0x0001072f2ab4();
  FUN_1072ea1cc();
  func_0x0001072642e8(auStack_58);
  return;
}



/* Entry: 1072eab64; end: 1072eab93;  */

undefined8 * FUN_1072eab64(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1072eab94();
  return param_1;
}



/* Entry: 1072eab94; end: 1072eac07;  */

void FUN_1072eab94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001072f2644();
    func_0x00010007e1a0();
    func_0x0001072f1ca8();
    FUN_1072eac08();
  }
  uStack_38 = 1;
  func_0x00010007e37c(&uStack_40);
  return;
}



/* Entry: 1072eac08; end: 1072eac3b;  */

void FUN_1072eac08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1072eac3c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1072eac3c; end: 1072eac4f;  */

void FUN_1072eac3c(void)

{
  FUN_1072eac50();
  return;
}



/* Entry: 1072eac50; end: 1072eacc3;  */

long FUN_1072eac50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001072f2a44();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_4,*param_2);
    param_4 = lStack_38 + 0x18;
    lStack_38 = param_4;
  }
  func_0x0001072f230c();
  func_0x00010007e34c(auStack_60);
  return param_4;
}



/* Entry: 1072eacc4; end: 1072eae5b;  */

void FUN_1072eacc4(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4)

{
  uint uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar5;
  long *plVar6;
  long *extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar7;
  ulong uVar8;
  ulong extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x23;
  long *plStack_58;
  long *plStack_50;
  
  uVar11 = (ulong)param_4;
  uVar10 = param_3[1];
  plVar3 = param_3;
  if (uVar10 != 0) {
    func_0x0001072f2aa8();
    uVar9 = (uint)uVar10;
    if ((bool)in_ZR) {
      unaff_x23 = (ulong)(uVar9 - 1 & param_4);
    }
    else {
      in_NG = (long)(uVar10 - uVar11) < 0;
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = param_4 / uVar9;
        }
        unaff_x23 = (ulong)(param_4 - uVar1 * uVar9);
      }
    }
    plVar6 = *(long **)(*param_3 + unaff_x23 * 8);
    uVar4 = extraout_x8;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1072ead70;
          uVar8 = plVar6[1];
          if (uVar8 != uVar11) break;
          in_NG = (int)(*(uint *)(plVar6 + 2) - param_4) < 0;
          if (*(uint *)(plVar6 + 2) == param_4) {
            return;
          }
        }
        if ((uVar10 & uVar4) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else if (uVar10 <= uVar8) {
          func_0x0001072f2a9c();
          uVar4 = extraout_x8_00;
          plVar6 = extraout_x9;
          uVar8 = extraout_x10;
        }
        in_NG = (long)(uVar8 - unaff_x23) < 0;
      } while (uVar8 == unaff_x23);
    }
  }
LAB_1072ead70:
  func_0x0001072f2464();
  plStack_58 = plVar3;
  plStack_50 = param_3 + 2;
  func_0x0001072f2614();
  *plVar3 = 0;
  plVar3[1] = uVar11;
  *(uint *)(plVar3 + 2) = param_4;
  func_0x0001072f17bc();
  if ((uVar10 == 0) || (func_0x0001072f1c1c(param_1,param_2,(float)uVar10), (bool)in_NG)) {
    func_0x0001072f2620();
    uVar2 = uVar10 == 3;
    func_0x0001072f16d8();
    FUN_107263c40(param_3);
    uVar10 = param_3[1];
    func_0x0001072f2aa8();
    if ((bool)uVar2) {
      unaff_x23 = (ulong)((int)uVar10 - 1U & param_4);
    }
    else {
      unaff_x23 = uVar11;
      if (uVar10 <= uVar11) {
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar11 / uVar10;
        }
        unaff_x23 = uVar11 - uVar4 * uVar10;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001072f2680(plStack_58);
    if (extraout_x10_00 != 0) {
      uVar11 = *(ulong *)(extraout_x10_00 + 8);
      uVar5 = extraout_x8_01;
      lVar7 = extraout_x9_00;
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        func_0x0001072f2a9c();
        uVar5 = extraout_x8_02;
        lVar7 = extraout_x9_01;
        uVar11 = extraout_x10_01;
      }
      *(undefined8 *)(lVar7 + uVar11 * 8) = uVar5;
    }
  }
  else {
    func_0x0001072f2598();
  }
  plStack_58 = (long *)0x0;
  func_0x0001072f25a8();
  FUN_107263f64(&plStack_58);
  return;
}



/* Entry: 1072eae5c; end: 1072eaeb3;  */

undefined8 FUN_1072eae5c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107264764(param_1 + 0x18);
  func_0x0001072745e4(param_1);
  func_0x000107264634();
  return unaff_x19;
}



/* Entry: 1072eaeb4; end: 1072eaeff;  */

void FUN_1072eaeb4(void)

{
  func_0x0001072eaecc();
  return;
}



/* Entry: 1072eaf00; end: 1072eb0c7;  */

undefined1  [16]
FUN_1072eaf00(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_NG;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *in_stack_00000008;
  
  func_0x0001072f2570();
  func_0x0001072f193c();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x25 = uVar8 & param_3;
      uVar1 = true;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_3 - uVar7) < 0;
      uVar1 = param_3 == uVar7;
      unaff_x25 = param_3;
      if (uVar7 <= param_3) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = param_3 / uVar7;
        }
        unaff_x25 = param_3 - uVar3 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1072eafb0;
          func_0x0001072f26d4();
          if (!(bool)uVar1) break;
          plVar5 = plVar6 + 2;
          func_0x000104c32db4(plVar5,param_4);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_1072eb09c;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar3 = extraout_x8 & uVar8;
        }
        else {
          uVar3 = extraout_x8;
          if (uVar7 <= extraout_x8) {
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = extraout_x8 / uVar7;
            }
            uVar3 = extraout_x8 - uVar3 * uVar7;
          }
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
        uVar1 = 1;
      } while (uVar3 == unaff_x25);
    }
  }
LAB_1072eafb0:
  func_0x0001072f1bcc(&stack0x00000008);
  FUN_1072eb0c8();
  func_0x0001072f17bc();
  if ((uVar7 == 0) || (func_0x0001072f1c1c(param_1,param_2,(float)uVar7), (bool)in_NG)) {
    func_0x0001072f1998();
    func_0x0001072f16d8();
    func_0x000107270bc8();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar7 <= param_3) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_3 / uVar7;
        }
        unaff_x25 = param_3 - uVar8 * uVar7;
      }
    }
  }
  plVar6 = in_stack_00000008;
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = unaff_x19 + 2;
    *in_stack_00000008 = *plVar5;
    *plVar5 = (long)in_stack_00000008;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar5;
    if (*in_stack_00000008 != 0) {
      uVar8 = *(ulong *)(*in_stack_00000008 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      *(long **)(lVar4 + uVar8 * 8) = in_stack_00000008;
    }
  }
  else {
    *in_stack_00000008 = *plVar5;
    *plVar5 = (long)in_stack_00000008;
  }
  func_0x0001072f1780();
  FUN_107270ee8();
  uVar2 = 1;
LAB_1072eb09c:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 1072eb0c8; end: 1072eb11b;  */

void FUN_1072eb0c8(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  *param_1 = puVar2;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  puVar1 = puVar2 + 2;
  *puVar2 = 0;
  puVar2[1] = param_3;
  func_0x000104c318ec();
  puVar1[6] = 0xffffffffffffffff;
  puVar1[6] = *(undefined8 *)(param_4 + 0x30);
  return;
}



/* Entry: 1072eb11c; end: 1072eb40f;  */

long * FUN_1072eb11c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar6;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long *plVar7;
  long *extraout_x10;
  long *plVar8;
  long *plVar9;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x12;
  long *plVar10;
  long *unaff_x19;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *unaff_x25;
  
  func_0x0001072f2570();
  func_0x0001072f18cc();
  plVar14 = (long *)unaff_x19[1];
  if (plVar14 != (long *)0x0) {
    uVar13 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar13) == 0) {
      unaff_x25 = (long *)(uVar13 & (ulong)param_3);
      in_NG = false;
    }
    else {
      in_NG = (long)param_3 - (long)plVar14 < 0;
      unaff_x25 = param_3;
      if (plVar14 <= param_3) {
        uVar6 = 0;
        if (plVar14 != (long *)0x0) {
          uVar6 = (ulong)param_3 / (ulong)plVar14;
        }
        unaff_x25 = (long *)((long)param_3 - uVar6 * (long)plVar14);
      }
    }
    plVar11 = *(long **)(*unaff_x19 + (long)unaff_x25 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_1072eb1c4;
          plVar4 = (long *)plVar11[1];
          in_NG = (long)plVar4 - (long)param_3 < 0;
          if (plVar4 != param_3) break;
          plVar4 = plVar11 + 2;
          func_0x0001072f2264();
          if (((ulong)plVar4 & 1) != 0) goto LAB_1072eb3f0;
        }
        if (((ulong)plVar14 & uVar13) == 0) {
          plVar4 = (long *)((ulong)plVar4 & uVar13);
        }
        else if (plVar14 <= plVar4) {
          uVar6 = 0;
          if (plVar14 != (long *)0x0) {
            uVar6 = (ulong)plVar4 / (ulong)plVar14;
          }
          plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar14);
        }
        in_NG = (long)plVar4 - (long)unaff_x25 < 0;
      } while (plVar4 == unaff_x25);
    }
  }
LAB_1072eb1c4:
  plVar4 = unaff_x19 + 2;
  plVar11 = (long *)0x60;
  __Znwm();
  plVar12 = plVar11;
  func_0x0001072f2614();
  plVar7 = plVar12 + 2;
  *plVar12 = 0;
  plVar12[1] = (long)param_3;
  func_0x0001072f250c();
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  func_0x0001072f17bc();
  if ((plVar14 != (long *)0x0) &&
     (func_0x0001072f1c1c(param_1,param_2,(float)plVar14), !(bool)in_NG)) goto LAB_1072eb390;
  func_0x0001072f1998();
  bVar2 = (long *)0x2 < plVar14;
  bVar3 = plVar14 == (long *)0x3;
  func_0x0001072f1724();
  plVar12 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar12 = extraout_x9;
  }
  if ((long)plVar12 - 1U == 0) {
    plVar12 = (long *)0x2;
  }
  else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar7 = plVar12;
  }
  plVar14 = (long *)unaff_x19[1];
  if (plVar14 < plVar12) {
LAB_1072eb244:
    if ((ulong)plVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1072eb404);
      (*pcVar1)();
    }
    __Znwm((long)plVar12 << 3);
    FUN_1072eb574();
    plVar14 = (long *)0x0;
    unaff_x19[1] = (long)plVar12;
    lVar5 = *unaff_x19;
    while (plVar12 != plVar14) {
      func_0x0001072f1f90();
      lVar5 = extraout_x8_00;
      plVar14 = extraout_x9_00;
    }
    plVar7 = (long *)*plVar4;
    plVar14 = plVar12;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)plVar7[1];
      uVar6 = (long)plVar12 - 1;
      uVar13 = 0;
      if (plVar12 != (long *)0x0) {
        uVar13 = (ulong)plVar8 / (ulong)plVar12;
      }
      plVar9 = plVar8;
      if (plVar12 <= plVar8) {
        plVar9 = (long *)((long)plVar8 - uVar13 * (long)plVar12);
      }
      if (((ulong)plVar12 & uVar6) == 0) {
        plVar9 = (long *)((ulong)plVar8 & uVar6);
      }
      *(long **)(lVar5 + (long)plVar9 * 8) = plVar4;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        plVar10 = (long *)plVar7[1];
        if (((ulong)plVar12 & uVar6) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar6);
        }
        else if (plVar12 <= plVar10) {
          uVar13 = 0;
          if (plVar12 != (long *)0x0) {
            uVar13 = (ulong)plVar10 / (ulong)plVar12;
          }
          plVar10 = (long *)((long)plVar10 - uVar13 * (long)plVar12);
        }
        if (plVar10 != plVar9) {
          if (*(long *)(lVar5 + (long)plVar10 * 8) == 0) {
            func_0x0001072f26e0();
            lVar5 = extraout_x8_02;
            uVar6 = extraout_x9_02;
            plVar7 = extraout_x12;
            plVar9 = extraout_x11_00;
          }
          else {
            *plVar8 = *plVar7;
            func_0x0001072f189c();
            lVar5 = extraout_x8_01;
            uVar6 = extraout_x9_01;
            plVar7 = extraout_x10;
            plVar9 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar12 < plVar14) {
    func_0x0001072f19c8();
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001072f16f0();
    }
    if (plVar12 <= plVar7) {
      plVar12 = plVar7;
    }
    if (plVar12 < plVar14) {
      if (plVar12 != (long *)0x0) goto LAB_1072eb244;
      FUN_1072eb574();
      unaff_x19[1] = 0;
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)unaff_x19[1];
    }
  }
  if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar14 - 1U & (ulong)param_3);
  }
  else {
    unaff_x25 = param_3;
    if (plVar14 <= param_3) {
      uVar13 = 0;
      if (plVar14 != (long *)0x0) {
        uVar13 = (ulong)param_3 / (ulong)plVar14;
      }
      unaff_x25 = (long *)((long)param_3 - uVar13 * (long)plVar14);
    }
  }
LAB_1072eb390:
  lVar5 = *unaff_x19;
  if (*(long *)(lVar5 + (long)unaff_x25 * 8) == 0) {
    *plVar11 = *plVar4;
    *plVar4 = (long)plVar11;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar4;
    if (*plVar11 != 0) {
      plVar4 = *(long **)(*plVar11 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar4 = (long *)((ulong)plVar4 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar4) {
        uVar13 = 0;
        if (plVar14 != (long *)0x0) {
          uVar13 = (ulong)plVar4 / (ulong)plVar14;
        }
        plVar4 = (long *)((long)plVar4 - uVar13 * (long)plVar14);
      }
      *(long **)(lVar5 + (long)plVar4 * 8) = plVar11;
    }
  }
  else {
    func_0x0001072f1fe0();
  }
  func_0x0001072f1780();
  FUN_1072eb58c();
LAB_1072eb3f0:
  return plVar11 + 9;
}



/* Entry: 1072eb410; end: 1072eb573;  */

void FUN_1072eb410(long *param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  
  func_0x0001072f1c10();
  if ((ulong)(param_1[2] - *param_1) < (ulong)(param_3 * 0x38)) {
    FUN_107299900();
    func_0x0001072f1d0c();
    FUN_107299934();
    func_0x0001072f23e4();
    FUN_10726de5c();
    func_0x0001072f1bcc();
  }
  else {
    if ((ulong)(param_3 * 0x38) <= (ulong)(*(long *)(unaff_x19 + 8) - *param_1)) {
      FUN_1072eb5ec();
      func_0x0001072f23e4();
      FUN_10726e03c();
      return;
    }
    FUN_1072eb5ec();
  }
  FUN_107284b48();
  return;
}



/* Entry: 1072eb574; end: 1072eb58b;  */

void FUN_1072eb574(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072eb58c; end: 1072eb5eb;  */

void FUN_1072eb58c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001072f1d28();
  if (unaff_x20 != 0) {
    func_0x0001072f25e4();
    if ((bool)in_ZR) {
      func_0x0001072eb5c0(unaff_x20 + 0x10);
    }
    func_0x0001072f1dd8();
  }
  return;
}



/* Entry: 1072eb5ec; end: 1072eb62f;  */

long FUN_1072eb5ec(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072f1d6c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x38) {
    func_0x0001072f1ca8();
    FUN_107262f3c();
    unaff_x19 = unaff_x19 + 0x38;
  }
  return unaff_x19;
}



/* Entry: 1072eb630; end: 1072eb65b;  */

void FUN_1072eb630(long param_1)

{
  FUN_1072eb65c();
  if (param_1 != 0) {
    func_0x0001072f23e4();
    FUN_1072eb6f8();
  }
  return;
}



/* Entry: 1072eb65c; end: 1072eb6f7;  */

long FUN_1072eb65c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072f2318(), extraout_x8 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x0001072f21e8();
      if ((bool)in_CY) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x0001072f26d4();
        if (!(bool)in_ZR) break;
        func_0x0001072f1924();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x0001072f21d0();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 1072eb6f8; end: 1072eb727;  */

undefined8 FUN_1072eb6f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_1072eb728(auStack_38);
  FUN_107270ee8(auStack_38);
  return uVar1;
}



/* Entry: 1072eb728; end: 1072eb847;  */

void FUN_1072eb728(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *extraout_x8;
  ulong uVar3;
  ulong extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong extraout_x14;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    func_0x0001072f29b8();
    param_1 = extraout_x8;
    uVar3 = extraout_x9;
    uVar4 = extraout_x10;
    uVar7 = extraout_x14;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1072eb7e0;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_1072eb7e0;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1072eb7e0:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 1072eb848; end: 1072eb893;  */

long FUN_1072eb848(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x0001072eb5c0();
    func_0x0001072f1dd8();
  }
  func_0x0001072f2aec();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1072eb894; end: 1072eb92f;  */

long FUN_1072eb894(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072f2318(), extraout_x8 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x0001072f21e8();
      if ((bool)in_CY) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x0001072f26d4();
        if (!(bool)in_ZR) break;
        func_0x0001072f1924();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x0001072f21d0();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 1072eb930; end: 1072eb9bf;  */

bool FUN_1072eb930(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  
  if (cRam0000000113822080 == '\x01') {
    uVar5 = param_1 - param_2;
    if (uVar5 == 0 || param_1 < param_2) {
      param_2 = param_1;
    }
    uVar1 = param_3 / 1000 - param_2;
    uVar2 = -uVar1;
    if (-1 < (long)uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = -uVar5;
    if (-1 < (long)uVar5) {
      uVar1 = uVar5;
    }
    if (uVar2 < 720000) {
      uVar5 = 120000;
      if ((uVar2 < 360000) && (uVar5 = 1000, 119999 < uVar2)) {
        uVar5 = 60000;
      }
    }
    else {
      uVar5 = 300000;
    }
    bVar3 = uVar5 <= uVar1;
    bVar4 = uVar1 == uVar5;
  }
  else {
    uVar2 = param_1 - param_2;
    uVar5 = -uVar2;
    if (-1 < (long)uVar2) {
      uVar5 = uVar2;
    }
    bVar3 = 999 < uVar5;
    bVar4 = uVar5 == 1000;
  }
  return bVar3 && !bVar4;
}



/* Entry: 1072eb9c0; end: 1072eba0f;  */

uint FUN_1072eb9c0(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 != *(char *)(param_2 + 0x18);
  uVar3 = (uint)bVar2;
  if (!bVar2 && cVar1 != '\0') {
    func_0x0001000e107c(param_1);
    uVar3 = (uint)param_1 ^ 1;
  }
  return uVar3;
}



/* Entry: 1072eba10; end: 1072eba33;  */

bool FUN_1072eba10(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long *plVar7;
  
  cVar6 = (char)param_1[3];
  if (cVar6 != (char)param_2[3] || cVar6 == '\0') {
    return cVar6 == (char)param_2[3];
  }
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar7 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    func_0x000107c610b0(plVar7,plVar3);
    return (int)plVar7 == 0;
  }
  return false;
}



/* Entry: 1072eba34; end: 1072ebb67;  */

undefined *** FUN_1072eba34(long param_1,undefined *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  uint uVar5;
  long *plVar6;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_260;
  undefined1 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [504];
  undefined8 uStack_48;
  
  uVar5 = 0;
  lVar2 = param_1;
  func_0x0001072f1810();
  puStack_258 = auStack_240;
  ppuStack_260 = &PTR_DAT_11099bc38;
  uStack_248 = 500;
  uStack_250 = 0;
  plVar6 = (long *)(lVar2 + 0x10);
  uStack_48 = extraout_x8;
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
    if (uVar5 < 5) {
      if (uVar5 != 0) {
        param_2 = &DAT_10f68f19e;
        FUN_1072ebb78(&ppuStack_260);
      }
      FUN_10724ef84(&uStack_290,plVar6 + 2);
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x0001005d4650(&uStack_290);
      func_0x0001072f1b3c(&ppuStack_260);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_290);
      uVar5 = uVar5 + 1;
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x18) == 6;
  if (5 < *(ulong *)(param_1 + 0x18)) {
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x0001003a91d4(&UNK_10f40977a);
    func_0x0001072f1b3c(&ppuStack_260);
  }
  pppuVar3 = &ppuStack_260;
  func_0x0001003ac644(pppuVar3);
  func_0x0001072f1710(uStack_48);
  if ((bool)uVar1) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  func_0x0001072f1e30();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001003ac644(&ppuStack_260);
  func_0x0001072f1abc();
  puVar4 = (&PTR_DAT_11099d708)[(ulong)param_2 & 0xffffffff];
  func_0x00010002b82c();
  func_0x000107c613d0(puVar4);
  func_0x000107c60c50(&DAT_10f68f19e,param_1,puVar4);
  return (undefined ***)&DAT_10f68f19e;
}



/* Entry: 1072ebb68; end: 1072ebb77;  */

void FUN_1072ebb68(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_DAT_11099d708)[param_2 & 0xffffffff];
  func_0x00010002b82c(param_1,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 1072ebb78; end: 1072ebbb7;  */

undefined8 FUN_1072ebb78(undefined8 param_1,undefined8 param_2)

{
  func_0x0001003a91d4(param_2);
  func_0x0001072f1b3c(param_1);
  return param_1;
}



/* Entry: 1072ebbb8; end: 1072ebbd7;  */

void FUN_1072ebbb8(long param_1)

{
  if (*(char *)(param_1 + 0x250) == '\x01') {
    FUN_107264bb8();
  }
  return;
}



/* Entry: 1072ebbd8; end: 1072ebc47;  */

void FUN_1072ebbd8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x10;
  ulong extraout_x10_00;
  long unaff_x20;
  
  func_0x0001072f1b80();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001072f2b1c();
    func_0x0001072bb860();
    func_0x0001072f20a8();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (in_ZR = lVar2 == lVar1, !(bool)in_ZR) {
      func_0x0001072f20b8();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
  func_0x0001072f1d8c();
  FUN_1072e91b8();
  func_0x0001072f1738();
  if (extraout_x10 != 0) {
    func_0x0001072f1984();
    if ((!(bool)in_ZR) && (extraout_x10_00 <= extraout_x9_01)) {
      func_0x0001072f29b8();
    }
    func_0x0001072f1d7c();
  }
  return;
}



/* Entry: 1072ebc48; end: 1072ebc77;  */

/* WARNING: Possible PIC construction at 0x0001072ec38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072ec390) */
/* WARNING: Removing unreachable block (ram,0x0001072ec39c) */
/* WARNING: Removing unreachable block (ram,0x0001072ec3b0) */
/* WARNING: Removing unreachable block (ram,0x0001072ec3c4) */
/* WARNING: Removing unreachable block (ram,0x0001072ec3e4) */
/* WARNING: Removing unreachable block (ram,0x0001072f1764) */
/* WARNING: Removing unreachable block (ram,0x0001072ec3d8) */
/* WARNING: Removing unreachable block (ram,0x0001072f1964) */

code * FUN_1072ebc48(code *param_1,code *param_2)

{
  undefined8 *******pppppppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code **ppcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  code *pcVar8;
  undefined1 *puVar9;
  code *pcVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar13;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  code *unaff_x19;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  code *unaff_x24;
  undefined1 *puVar17;
  undefined1 *puVar18;
  code *pcVar19;
  long lVar20;
  code *unaff_x27;
  code *pcVar21;
  code *unaff_x28;
  undefined8 *******unaff_x29;
  code *unaff_x30;
  code *in_stack_00000008;
  code *in_stack_00000010;
  undefined8 in_stack_00000088;
  undefined8 *******in_stack_000000e0;
  code *pcStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  code *pcStack_18;
  undefined8 ******ppppppuStack_10;
  code *pcStack_8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  func_0x0001072f25b8((long)param_2 - (long)param_1);
  pcVar11 = (code *)(LZCOUNT(extraout_x8) << 1 ^ 0x7e);
  uVar12 = 1;
  func_0x0001072f2b98();
  pcVar19 = param_2;
  pcVar10 = pcVar11;
  in_stack_000000e0 = unaff_x29;
  func_0x0001072f17a8();
  pcVar16 = (code *)0x38;
  in_stack_00000088 = extraout_x8_00;
LAB_1072ebca4:
  pcVar14 = param_2 + -0x38;
  in_stack_00000010 = param_2 + -0x70;
  in_stack_00000008 = param_2 + -0xa8;
  pcVar15 = unaff_x19;
  pcVar21 = unaff_x28;
LAB_1072ebcb8:
  unaff_x19 = pcVar15;
  uVar13 = (long)param_2 - (long)unaff_x19;
  pcVar15 = (code *)((long)uVar13 / 0x38);
  uVar6 = pcVar15 == (code *)0x5;
  unaff_x28 = param_2;
  switch(pcVar15) {
  case (code *)0x0:
  case (code *)0x1:
    goto LAB_1072ebf54;
  case (code *)0x2:
    func_0x0001072f1c34();
    func_0x000104c2fc44();
    if ((int)param_1 == 0) goto LAB_1072ebf54;
    func_0x0001072f1710(in_stack_00000088);
    uVar5 = uVar6;
    if (!(bool)uVar6) goto LAB_1072ec224;
    func_0x0001072f1d0c();
    func_0x0001072f2048();
    pcVar19 = unaff_x30;
    goto code_r0x0001072ec56c;
  case (code *)0x3:
    func_0x0001072f1710(in_stack_00000088);
    uVar5 = uVar6;
    if (!(bool)uVar6) goto LAB_1072ec224;
    func_0x0001072f22c8();
    pcVar10 = pcVar14;
    func_0x0001072f2048();
    goto code_r0x0001072ec28c;
  case (code *)0x4:
    func_0x0001072f1710(in_stack_00000088);
    uVar5 = uVar6;
    if (!(bool)uVar6) goto LAB_1072ec224;
    func_0x0001072f20d8();
    func_0x0001072f2048();
    break;
  case (code *)0x5:
    func_0x0001072f1710(in_stack_00000088);
    uVar5 = uVar6;
    if (!(bool)uVar6) goto LAB_1072ec224;
    func_0x0001072f1bfc();
    pcVar16 = pcVar14;
    func_0x0001072f2048();
    uStack_38 = 0x38;
    ppppppuStack_10 = in_stack_000000e0;
    pppppppuVar1 = &ppppppuStack_10;
    pcStack_40 = unaff_x24;
    pcStack_30 = pcVar11;
    pcStack_28 = pcVar14;
    pcStack_20 = param_2;
    pcStack_18 = unaff_x19;
    pcStack_8 = unaff_x30;
    func_0x0001072f1900();
    unaff_x30 = (code *)0x1072ec390;
    register0x00000008 = (BADSPACEBASE *)&pcStack_40;
    in_stack_000000e0 = pppppppuVar1;
    break;
  default:
    goto code_r0x0001072ebccc;
  }
  *(code **)((long)register0x00000008 + -0x30) = pcVar11;
  *(code **)((long)register0x00000008 + -0x28) = pcVar14;
  *(code **)((long)register0x00000008 + -0x20) = param_2;
  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = in_stack_000000e0;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001072f1900();
  FUN_1072ec28c();
  func_0x0001072f1ca8();
  func_0x000104c2fc44();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x0001072f1e14();
  FUN_1072ec56c();
  func_0x0001072f1c34();
  func_0x000104c2fc44();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x0001072f1d0c();
  FUN_1072ec56c();
  func_0x0001072f1bcc();
  func_0x000104c2fc44();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x0001072f1b8c();
  ppcVar4 = (code **)((long)register0x00000008 + -0x30);
  in_stack_000000e0 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  pcVar19 = *(code **)((long)register0x00000008 + -8);
  goto LAB_1072f2774;
code_r0x0001072ebccc:
  if ((long)uVar13 < 0x540) {
    uVar6 = unaff_x19 == param_2;
    if ((uVar12 & 1) == 0) {
      if (!(bool)uVar6) {
        while( true ) {
          pcVar14 = unaff_x19;
          unaff_x19 = pcVar14 + 0x38;
          uVar6 = 1;
          if (unaff_x19 == param_2) break;
          func_0x0001072f1d0c();
          func_0x000104c2fc44();
          if ((int)param_1 != 0) {
            func_0x0001072f2140();
            do {
              param_1 = pcVar14;
              pcVar19 = param_1;
              func_0x000104c2f1f0(param_1 + 0x38);
              uVar13 = 0;
              func_0x0001072f1e3c();
              pcVar14 = param_1 + -0x38;
            } while ((uVar13 & 1) != 0);
            func_0x0001072f24dc();
            func_0x0001072f1c4c();
          }
        }
      }
      goto LAB_1072ebf54;
    }
    if ((bool)uVar6) goto LAB_1072ebf54;
    pcVar16 = (code *)0x0;
    pcVar19 = unaff_x19;
    goto LAB_1072ec024;
  }
  if (pcVar11 == (code *)0x0) {
    uVar6 = 1;
    if (unaff_x19 == param_2) goto LAB_1072ebf54;
    pcVar11 = (code *)((ulong)(pcVar15 + -2) >> 1);
    pcVar14 = unaff_x19 + (long)pcVar11 * 0x38;
    do {
      param_1 = unaff_x19;
      pcVar19 = pcVar15;
      pcVar10 = pcVar14;
      FUN_1072ec5c8();
      pcVar11 = pcVar11 + -1;
      pcVar14 = pcVar14 + -0x38;
    } while (-1 < (long)pcVar11);
    unaff_x24 = (code *)0x38;
    do {
      pcVar14 = pcVar15 + -2;
      uVar6 = pcVar14 == (code *)0x0;
      unaff_x28 = param_2;
      if ((long)pcVar15 < 2) goto LAB_1072ebf54;
      puVar9 = &stack0x00000018;
      func_0x000104c318bc(puVar9,unaff_x19);
      unaff_x27 = (code *)0x0;
      uVar12 = (ulong)pcVar14 >> 1;
      pcVar19 = unaff_x19;
      do {
        pcVar14 = (code *)((long)unaff_x27 << 1 | 1);
        pcVar21 = (code *)((long)unaff_x27 * 2 + 2);
        pcVar11 = pcVar19 + (long)unaff_x27 * 0x38 + 0x38;
        pcVar8 = pcVar14;
        if ((long)pcVar21 < (long)pcVar15) {
          pcVar16 = pcVar19 + (long)unaff_x27 * 0x38 + 0x70;
          func_0x0001072f1f60();
          func_0x000104c2fc44();
          pcVar11 = pcVar16;
          pcVar8 = pcVar21;
          if ((int)puVar9 == 0) {
            pcVar11 = pcVar19 + (long)unaff_x27 * 0x38 + 0x38;
            pcVar8 = pcVar14;
          }
        }
        unaff_x27 = pcVar8;
        func_0x0001072f1ca8();
        func_0x000104c2f1f0();
        iVar7 = (int)puVar9;
        pcVar19 = pcVar11;
      } while ((long)unaff_x27 <= (long)uVar12);
      param_2 = param_2 + -0x38;
      if (pcVar11 == param_2) {
        pcVar19 = (code *)&stack0x00000018;
        func_0x000104c2f1f0(pcVar11);
      }
      else {
        func_0x0001072f1c40();
        func_0x000104c2f1f0();
        pcVar19 = (code *)&stack0x00000018;
        func_0x0001072f23a4();
        if (0x38 < (long)(pcVar11 + (0x38 - (long)unaff_x19))) {
          func_0x0001072f25c4();
          pcVar11 = unaff_x19 + uVar12 * 0x38;
          func_0x0001072f1ca8();
          func_0x000104c2fc44();
          if (iVar7 != 0) {
            func_0x0001072f1b50();
            do {
              pcVar16 = pcVar11;
              func_0x0001072f1e14();
              func_0x000104c2f1f0();
              pcVar11 = pcVar16;
              uVar13 = 0;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1 >> 1;
              pcVar11 = unaff_x19 + uVar12 * 0x38;
              pcVar19 = (code *)&stack0x00000050;
              pcVar14 = pcVar11;
              func_0x000104c2fc44();
              uVar13 = uVar12;
            } while (((ulong)pcVar14 & 1) != 0);
            func_0x0001072f2128();
            func_0x0001072f1c4c();
            uVar12 = uVar13;
          }
        }
      }
      param_1 = (code *)&stack0x00000018;
      func_0x000104c2f714();
      pcVar15 = pcVar15 + -1;
    } while( true );
  }
  pcVar19 = unaff_x19 + ((ulong)pcVar15 >> 1) * 0x38;
  if (uVar13 < 0x1c01) {
    pcVar10 = pcVar14;
    FUN_1072ec28c(pcVar19,unaff_x19);
  }
  else {
    FUN_1072ec28c(unaff_x19,pcVar19,pcVar14);
    unaff_x27 = pcVar19 + -0x38;
    FUN_1072ec28c(unaff_x19 + 0x38,unaff_x27,in_stack_00000010);
    FUN_1072ec28c(unaff_x19 + 0x70,pcVar19 + 0x38,in_stack_00000008);
    pcVar10 = pcVar19 + 0x38;
    func_0x0001072f2650();
    FUN_1072ec28c();
    FUN_1072ec56c(unaff_x19,pcVar19);
  }
  pcVar11 = pcVar11 + -1;
  if ((uVar12 & 1) == 0) {
    pcVar19 = unaff_x19 + -0x38;
    func_0x000104c2fc44(pcVar19,unaff_x19);
    if (((ulong)pcVar19 & 1) == 0) {
      func_0x0001072f2140();
      puVar9 = &stack0x00000050;
      func_0x0001072f1e3c();
      pcVar15 = unaff_x19;
      if (((ulong)puVar9 & 1) == 0) {
        do {
          pcVar15 = pcVar15 + 0x38;
          if (param_2 <= pcVar15) break;
          func_0x0001072f2134();
        } while ((int)puVar9 == 0);
      }
      else {
        do {
          pcVar15 = pcVar15 + 0x38;
          func_0x0001072f2134();
        } while (((ulong)puVar9 & 1) == 0);
      }
      pcVar19 = param_2;
      if (pcVar15 < param_2) {
        do {
          pcVar19 = pcVar19 + -0x38;
          func_0x0001072f2918();
        } while (((ulong)puVar9 & 1) != 0);
      }
      while (pcVar15 < pcVar19) {
        pcVar8 = pcVar15;
        FUN_1072ec56c(pcVar15,pcVar19);
        do {
          pcVar15 = pcVar15 + 0x38;
          func_0x0001072f2134();
        } while ((int)pcVar8 == 0);
        do {
          pcVar19 = pcVar19 + -0x38;
          func_0x0001072f2918();
        } while (((ulong)pcVar8 & 1) != 0);
      }
      param_1 = pcVar15 + -0x38;
      if (unaff_x19 != param_1) {
        func_0x000104c2f1f0(unaff_x19,param_1);
      }
      pcVar19 = (code *)&stack0x00000050;
      func_0x000104c2f1f0();
      func_0x0001072f1c4c();
      uVar12 = 0;
      goto LAB_1072ebcb8;
    }
  }
  func_0x0001072f2140();
  lVar20 = 0;
  do {
    pcVar19 = unaff_x19 + lVar20 + 0x38;
    func_0x000104c2fc44(pcVar19,&stack0x00000050);
    lVar20 = lVar20 + 0x38;
  } while (((ulong)pcVar19 & 1) != 0);
  unaff_x24 = unaff_x19 + lVar20;
  pcVar21 = param_2;
  pcVar15 = unaff_x24;
  if (lVar20 == 0x38) {
    do {
      unaff_x27 = pcVar21;
      if (pcVar21 <= unaff_x24) break;
      pcVar21 = pcVar21 + -0x38;
      func_0x0001072f290c();
      unaff_x27 = pcVar21;
    } while (((ulong)pcVar19 & 1) == 0);
  }
  else {
    do {
      pcVar21 = pcVar21 + -0x38;
      func_0x0001072f290c();
      unaff_x27 = pcVar21;
    } while ((int)pcVar19 == 0);
  }
  while (pcVar15 < pcVar21) {
    FUN_1072ec56c(pcVar15,pcVar21);
    do {
      pcVar15 = pcVar15 + 0x38;
      pcVar19 = pcVar15;
      func_0x000104c2fc44(pcVar15,&stack0x00000050);
    } while (((ulong)pcVar19 & 1) != 0);
    do {
      pcVar21 = pcVar21 + -0x38;
      pcVar19 = pcVar21;
      func_0x000104c2fc44(pcVar21,&stack0x00000050);
    } while (((ulong)pcVar19 & 1) == 0);
  }
  unaff_x28 = pcVar15 + -0x38;
  if (unaff_x19 != unaff_x28) {
    func_0x000104c2f1f0(unaff_x19,unaff_x28);
  }
  func_0x000104c2f1f0(unaff_x28,&stack0x00000050);
  func_0x0001072f1c4c();
  uVar6 = unaff_x24 == unaff_x27;
  pcVar21 = unaff_x28;
  if (unaff_x24 < unaff_x27) goto LAB_1072ebe58;
  unaff_x27 = unaff_x19;
  FUN_1072ec3ec(unaff_x19,unaff_x28);
  param_1 = pcVar15;
  pcVar19 = param_2;
  FUN_1072ec3ec();
  if ((int)param_1 == 0) goto code_r0x0001072ebe54;
  param_2 = unaff_x28;
  if (((ulong)unaff_x27 & 1) != 0) goto LAB_1072ebf54;
  goto LAB_1072ebca4;
LAB_1072ec024:
  pcVar14 = pcVar19 + 0x38;
  uVar6 = 1;
  if (pcVar14 == param_2) goto LAB_1072ebf54;
  param_1 = pcVar14;
  func_0x000104c2fc44();
  if ((int)param_1 != 0) {
    func_0x0001072f1b50();
    unaff_x24 = pcVar16;
    do {
      pcVar11 = unaff_x19 + (long)unaff_x24;
      func_0x0001072f2514(pcVar11 + 0x38);
      if (unaff_x24 == (code *)0x0) {
        unaff_x24 = (code *)0x0;
        param_1 = unaff_x19;
        goto LAB_1072ec078;
      }
      puVar9 = &stack0x00000050;
      func_0x000104c2fc44(puVar9,pcVar11 + -0x38);
      unaff_x24 = unaff_x24 + -0x38;
    } while (((ulong)puVar9 & 1) != 0);
    param_1 = unaff_x19 + (long)unaff_x24 + 0x38;
LAB_1072ec078:
    func_0x0001072f24dc();
    func_0x0001072f1c4c();
  }
  pcVar16 = pcVar16 + 0x38;
  pcVar19 = pcVar14;
  goto LAB_1072ec024;
code_r0x0001072ebe54:
  if (((ulong)unaff_x27 & 1) == 0) {
LAB_1072ebe58:
    pcVar19 = unaff_x28;
    pcVar10 = pcVar11;
    FUN_1072ebc78();
    uVar12 = 0;
    param_1 = unaff_x19;
  }
  goto LAB_1072ebcb8;
LAB_1072ebf54:
  func_0x0001072f1710(in_stack_00000088);
  uVar5 = 0;
  param_2 = unaff_x28;
  if ((bool)uVar6) {
    return param_1;
  }
LAB_1072ec224:
  ___stack_chk_fail();
  func_0x000104c2f714(&stack0x00000050);
  unaff_x30 = FUN_1072ec28c;
  func_0x0001072f1abc();
  uVar6 = uVar5;
  unaff_x19 = param_1;
  in_stack_000000e0 = &stack0x000000e0;
code_r0x0001072ec28c:
  ppcVar4 = &pcStack_30;
  pcStack_30 = pcVar11;
  pcStack_28 = pcVar14;
  pcStack_20 = param_2;
  pcStack_18 = unaff_x19;
  ppppppuStack_10 = in_stack_000000e0;
  pcStack_8 = unaff_x30;
  func_0x0001072f1ae4();
  func_0x0001072f1e3c();
  pcVar11 = pcVar19;
  func_0x0001072f1b8c();
  func_0x000104c2fc44();
  if (((ulong)pcVar19 & 1) == 0) {
    if ((int)pcVar11 != 0) {
      func_0x0001072f1bcc();
      FUN_1072ec56c();
      func_0x0001072f1d0c();
      func_0x000104c2fc44();
      if ((int)pcVar11 != 0) {
        func_0x0001072f1c34();
        ppcVar4 = &pcStack_30;
        in_stack_000000e0 = (undefined8 *******)ppppppuStack_10;
        pcVar19 = pcStack_8;
        goto LAB_1072f2774;
      }
    }
    return pcVar11;
  }
  in_stack_000000e0 = (undefined8 *******)ppppppuStack_10;
  pcVar19 = pcStack_8;
  if ((int)pcVar11 == 0) {
    func_0x0001072f1c34();
    FUN_1072ec56c();
    func_0x0001072f1b8c();
    func_0x000104c2fc44();
    ppcVar4 = &pcStack_30;
    in_stack_000000e0 = (undefined8 *******)ppppppuStack_10;
    pcVar19 = pcStack_8;
    if ((int)pcVar11 == 0) {
      return pcVar11;
    }
  }
LAB_1072f2774:
  param_2 = ppcVar4[2];
  unaff_x19 = ppcVar4[3];
  register0x00000008 = (BADSPACEBASE *)(ppcVar4 + 6);
  pcVar11 = *ppcVar4;
  pcVar14 = ppcVar4[1];
  unaff_x30 = pcVar10;
code_r0x0001072ec56c:
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(code **)((long)register0x00000008 + -0x20) = param_2;
  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = in_stack_000000e0;
  *(code **)((long)register0x00000008 + -8) = pcVar19;
  func_0x0001072f1b80();
  func_0x0001072f1810();
  *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_01;
  func_0x000104c318bc((undefined1 *)((long)register0x00000008 + -0x60),param_2);
  func_0x0001072f1b8c();
  func_0x000104c2f1f0();
  pcVar10 = unaff_x19;
  func_0x000104c2f1f0();
  func_0x0001072f1cfc();
  func_0x0001072f1710(*(undefined8 *)((long)register0x00000008 + -0x28));
  if ((bool)uVar6) {
    return pcVar10;
  }
  ___stack_chk_fail();
  pcVar19 = (code *)((long)register0x00000008 + -0x100);
  *(code **)((long)register0x00000008 + -0xc0) = pcVar21;
  *(code **)((long)register0x00000008 + -0xb8) = unaff_x27;
  *(code **)((long)register0x00000008 + -0xb0) = pcVar15;
  *(ulong *)((long)register0x00000008 + -0xa8) = uVar12;
  *(code **)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(code **)((long)register0x00000008 + -0x98) = pcVar16;
  *(code **)((long)register0x00000008 + -0x90) = pcVar11;
  *(code **)((long)register0x00000008 + -0x88) = pcVar14;
  *(code **)((long)register0x00000008 + -0x80) = param_2;
  *(code **)((long)register0x00000008 + -0x78) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x68) = FUN_1072ec5c8;
  func_0x0001072f1810();
  *(undefined8 *)((long)register0x00000008 + -200) = extraout_x8_02;
  uVar6 = puVar9 + -2 == (undefined1 *)0x0;
  pcVar16 = pcVar10;
  if (1 < (long)puVar9) {
    puVar3 = (undefined1 *)(((long)unaff_x30 - (long)pcVar10) / 0x38);
    puVar17 = (undefined1 *)((ulong)(puVar9 + -2) >> 1);
    uVar6 = puVar17 == puVar3;
    param_2 = pcVar10;
    if ((long)puVar3 <= (long)puVar17) {
      puVar2 = (undefined1 *)((long)puVar3 << 1 | 1);
      pcVar15 = pcVar10 + (long)puVar2 * 0x38;
      puVar3 = (undefined1 *)((long)puVar3 * 2 + 2);
      uVar6 = puVar3 == puVar9;
      pcVar11 = pcVar15;
      puVar18 = puVar2;
      if ((long)puVar3 < (long)puVar9) {
        func_0x0001072f1f60();
        func_0x000104c2fc44();
        uVar6 = (int)pcVar16 == 0;
        pcVar11 = pcVar15 + 0x38;
        puVar18 = puVar3;
        if ((bool)uVar6) {
          pcVar11 = pcVar15;
          puVar18 = puVar2;
        }
      }
      func_0x0001072f1e14();
      func_0x000104c2fc44();
      if (((ulong)pcVar16 & 1) == 0) {
        func_0x0001072f2504();
        do {
          pcVar16 = pcVar11;
          iVar7 = (int)pcVar19;
          func_0x0001072f1ca8();
          func_0x000104c2f1f0();
          uVar6 = puVar17 == puVar18;
          if ((long)puVar17 < (long)puVar18) break;
          puVar2 = (undefined1 *)((long)puVar18 << 1 | 1);
          pcVar19 = pcVar10 + (long)puVar2 * 0x38;
          puVar3 = (undefined1 *)((long)puVar18 * 2 + 2);
          uVar6 = puVar3 == puVar9;
          pcVar11 = pcVar19;
          puVar18 = puVar2;
          if ((long)puVar3 < (long)puVar9) {
            func_0x0001072f1e14();
            func_0x000104c2fc44();
            uVar6 = iVar7 == 0;
            pcVar11 = pcVar19 + 0x38;
            puVar18 = puVar3;
            if ((bool)uVar6) {
              pcVar11 = pcVar19;
              puVar18 = puVar2;
            }
          }
          pcVar19 = pcVar11;
          func_0x000104c2fc44(pcVar11,(undefined1 *)((long)register0x00000008 + -0x100));
        } while ((int)pcVar19 == 0);
        func_0x000104c2f1f0(pcVar16,(undefined1 *)((long)register0x00000008 + -0x100));
        func_0x0001072f1cfc();
      }
    }
  }
  func_0x0001072f1710(*(undefined8 *)((long)register0x00000008 + -200));
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    pcVar10 = pcVar16;
    func_0x0001072f1cfc();
    func_0x0001072f1abc();
    *(code **)((long)register0x00000008 + -0x120) = param_2;
    *(code **)((long)register0x00000008 + -0x118) = pcVar16;
    *(undefined1 **)((long)register0x00000008 + -0x110) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0x1072ec71c;
    func_0x0001072f1c10();
    if (pcVar10[0xa0] == (code)0x1) {
      func_0x0001072ec784();
      func_0x0001072ec7f4(pcVar16 + 0x28,param_2 + 0x28);
      FUN_1072e89fc(pcVar16 + 0x50,param_2 + 0x50);
      FUN_1072ebbd8(pcVar16 + 0x78,param_2 + 0x78);
    }
    else {
      FUN_1072e94d8();
      pcVar16[0xa0] = (code)0x1;
    }
    return pcVar16;
  }
  return pcVar16;
}



/* Entry: 1072ebc78; end: 1072ec28b;  */

/* WARNING: Possible PIC construction at 0x0001072ec38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072ec390) */
/* WARNING: Removing unreachable block (ram,0x0001072ec39c) */
/* WARNING: Removing unreachable block (ram,0x0001072ec3b0) */
/* WARNING: Removing unreachable block (ram,0x0001072ec3c4) */
/* WARNING: Removing unreachable block (ram,0x0001072ec3e4) */
/* WARNING: Removing unreachable block (ram,0x0001072f1764) */
/* WARNING: Removing unreachable block (ram,0x0001072ec3d8) */
/* WARNING: Removing unreachable block (ram,0x0001072f1964) */

code * FUN_1072ebc78(code *param_1,code *param_2,code *param_3,ulong param_4)

{
  undefined8 *******pppppppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code **ppcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  code *pcVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  code *pcVar12;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  code *unaff_x19;
  code *pcVar13;
  code *pcVar14;
  code *unaff_x24;
  undefined1 *puVar15;
  undefined1 *puVar16;
  code *pcVar17;
  long lVar18;
  code *unaff_x27;
  code *pcVar19;
  code *unaff_x28;
  undefined8 *******unaff_x29;
  code *unaff_x30;
  code *in_stack_00000008;
  code *in_stack_00000010;
  undefined8 in_stack_00000088;
  undefined8 *******in_stack_000000e0;
  code *pcStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  code *pcStack_18;
  undefined8 ******ppppppuStack_10;
  code *pcStack_8;
  
  func_0x0001072f2b98();
  pcVar17 = param_2;
  pcVar10 = param_3;
  in_stack_000000e0 = unaff_x29;
  func_0x0001072f17a8();
  pcVar14 = (code *)0x38;
  in_stack_00000088 = extraout_x8;
LAB_1072ebca4:
  pcVar13 = param_2 + -0x38;
  in_stack_00000010 = param_2 + -0x70;
  in_stack_00000008 = param_2 + -0xa8;
  pcVar12 = unaff_x19;
  pcVar19 = unaff_x28;
LAB_1072ebcb8:
  unaff_x19 = pcVar12;
  uVar11 = (long)param_2 - (long)unaff_x19;
  pcVar12 = (code *)((long)uVar11 / 0x38);
  uVar6 = pcVar12 == (code *)0x5;
  unaff_x28 = param_2;
  switch(pcVar12) {
  case (code *)0x0:
  case (code *)0x1:
    goto LAB_1072ebf54;
  case (code *)0x2:
    func_0x0001072f1c34();
    func_0x000104c2fc44();
    if ((int)param_1 == 0) goto LAB_1072ebf54;
    func_0x0001072f1710(in_stack_00000088);
    uVar5 = uVar6;
    if (!(bool)uVar6) goto LAB_1072ec224;
    func_0x0001072f1d0c();
    func_0x0001072f2048();
    pcVar17 = unaff_x30;
    goto code_r0x0001072ec56c;
  case (code *)0x3:
    func_0x0001072f1710(in_stack_00000088);
    uVar5 = uVar6;
    if (!(bool)uVar6) goto LAB_1072ec224;
    func_0x0001072f22c8();
    pcVar10 = pcVar13;
    func_0x0001072f2048();
    goto code_r0x0001072ec28c;
  case (code *)0x4:
    func_0x0001072f1710(in_stack_00000088);
    uVar5 = uVar6;
    if (!(bool)uVar6) goto LAB_1072ec224;
    func_0x0001072f20d8();
    func_0x0001072f2048();
    break;
  case (code *)0x5:
    func_0x0001072f1710(in_stack_00000088);
    uVar5 = uVar6;
    if (!(bool)uVar6) goto LAB_1072ec224;
    func_0x0001072f1bfc();
    pcVar14 = pcVar13;
    func_0x0001072f2048();
    uStack_38 = 0x38;
    ppppppuStack_10 = in_stack_000000e0;
    pppppppuVar1 = &ppppppuStack_10;
    pcStack_40 = unaff_x24;
    pcStack_30 = param_3;
    pcStack_28 = pcVar13;
    pcStack_20 = param_2;
    pcStack_18 = unaff_x19;
    pcStack_8 = unaff_x30;
    func_0x0001072f1900();
    unaff_x30 = (code *)0x1072ec390;
    register0x00000008 = (BADSPACEBASE *)&pcStack_40;
    in_stack_000000e0 = pppppppuVar1;
    break;
  default:
    goto code_r0x0001072ebccc;
  }
  *(code **)((long)register0x00000008 + -0x30) = param_3;
  *(code **)((long)register0x00000008 + -0x28) = pcVar13;
  *(code **)((long)register0x00000008 + -0x20) = param_2;
  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = in_stack_000000e0;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001072f1900();
  FUN_1072ec28c();
  func_0x0001072f1ca8();
  func_0x000104c2fc44();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x0001072f1e14();
  FUN_1072ec56c();
  func_0x0001072f1c34();
  func_0x000104c2fc44();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x0001072f1d0c();
  FUN_1072ec56c();
  func_0x0001072f1bcc();
  func_0x000104c2fc44();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x0001072f1b8c();
  ppcVar4 = (code **)((long)register0x00000008 + -0x30);
  in_stack_000000e0 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  pcVar17 = *(code **)((long)register0x00000008 + -8);
  goto LAB_1072f2774;
code_r0x0001072ebccc:
  if ((long)uVar11 < 0x540) {
    uVar6 = unaff_x19 == param_2;
    if ((param_4 & 1) == 0) {
      if (!(bool)uVar6) {
        while( true ) {
          pcVar13 = unaff_x19;
          unaff_x19 = pcVar13 + 0x38;
          uVar6 = 1;
          if (unaff_x19 == param_2) break;
          func_0x0001072f1d0c();
          func_0x000104c2fc44();
          if ((int)param_1 != 0) {
            func_0x0001072f2140();
            do {
              param_1 = pcVar13;
              pcVar17 = param_1;
              func_0x000104c2f1f0(param_1 + 0x38);
              uVar11 = 0;
              func_0x0001072f1e3c();
              pcVar13 = param_1 + -0x38;
            } while ((uVar11 & 1) != 0);
            func_0x0001072f24dc();
            func_0x0001072f1c4c();
          }
        }
      }
      goto LAB_1072ebf54;
    }
    if ((bool)uVar6) goto LAB_1072ebf54;
    pcVar14 = (code *)0x0;
    pcVar17 = unaff_x19;
    goto LAB_1072ec024;
  }
  if (param_3 == (code *)0x0) {
    uVar6 = 1;
    if (unaff_x19 == param_2) goto LAB_1072ebf54;
    param_3 = (code *)((ulong)(pcVar12 + -2) >> 1);
    pcVar13 = unaff_x19 + (long)param_3 * 0x38;
    do {
      param_1 = unaff_x19;
      pcVar17 = pcVar12;
      pcVar10 = pcVar13;
      FUN_1072ec5c8();
      param_3 = param_3 + -1;
      pcVar13 = pcVar13 + -0x38;
    } while (-1 < (long)param_3);
    unaff_x24 = (code *)0x38;
    do {
      pcVar13 = pcVar12 + -2;
      uVar6 = pcVar13 == (code *)0x0;
      unaff_x28 = param_2;
      if ((long)pcVar12 < 2) goto LAB_1072ebf54;
      puVar9 = &stack0x00000018;
      func_0x000104c318bc(puVar9,unaff_x19);
      unaff_x27 = (code *)0x0;
      param_4 = (ulong)pcVar13 >> 1;
      pcVar17 = unaff_x19;
      do {
        pcVar13 = (code *)((long)unaff_x27 << 1 | 1);
        pcVar19 = (code *)((long)unaff_x27 * 2 + 2);
        param_3 = pcVar17 + (long)unaff_x27 * 0x38 + 0x38;
        pcVar8 = pcVar13;
        if ((long)pcVar19 < (long)pcVar12) {
          pcVar14 = pcVar17 + (long)unaff_x27 * 0x38 + 0x70;
          func_0x0001072f1f60();
          func_0x000104c2fc44();
          param_3 = pcVar14;
          pcVar8 = pcVar19;
          if ((int)puVar9 == 0) {
            param_3 = pcVar17 + (long)unaff_x27 * 0x38 + 0x38;
            pcVar8 = pcVar13;
          }
        }
        unaff_x27 = pcVar8;
        func_0x0001072f1ca8();
        func_0x000104c2f1f0();
        iVar7 = (int)puVar9;
        pcVar17 = param_3;
      } while ((long)unaff_x27 <= (long)param_4);
      param_2 = param_2 + -0x38;
      if (param_3 == param_2) {
        pcVar17 = (code *)&stack0x00000018;
        func_0x000104c2f1f0(param_3);
      }
      else {
        func_0x0001072f1c40();
        func_0x000104c2f1f0();
        pcVar17 = (code *)&stack0x00000018;
        func_0x0001072f23a4();
        if (0x38 < (long)(param_3 + (0x38 - (long)unaff_x19))) {
          func_0x0001072f25c4();
          param_3 = unaff_x19 + param_4 * 0x38;
          func_0x0001072f1ca8();
          func_0x000104c2fc44();
          if (iVar7 != 0) {
            func_0x0001072f1b50();
            do {
              pcVar14 = param_3;
              func_0x0001072f1e14();
              func_0x000104c2f1f0();
              param_3 = pcVar14;
              uVar11 = 0;
              if (param_4 == 0) break;
              param_4 = param_4 - 1 >> 1;
              param_3 = unaff_x19 + param_4 * 0x38;
              pcVar17 = (code *)&stack0x00000050;
              pcVar13 = param_3;
              func_0x000104c2fc44();
              uVar11 = param_4;
            } while (((ulong)pcVar13 & 1) != 0);
            func_0x0001072f2128();
            func_0x0001072f1c4c();
            param_4 = uVar11;
          }
        }
      }
      param_1 = (code *)&stack0x00000018;
      func_0x000104c2f714();
      pcVar12 = pcVar12 + -1;
    } while( true );
  }
  pcVar17 = unaff_x19 + ((ulong)pcVar12 >> 1) * 0x38;
  if (uVar11 < 0x1c01) {
    pcVar10 = pcVar13;
    FUN_1072ec28c(pcVar17,unaff_x19);
  }
  else {
    FUN_1072ec28c(unaff_x19,pcVar17,pcVar13);
    unaff_x27 = pcVar17 + -0x38;
    FUN_1072ec28c(unaff_x19 + 0x38,unaff_x27,in_stack_00000010);
    FUN_1072ec28c(unaff_x19 + 0x70,pcVar17 + 0x38,in_stack_00000008);
    pcVar10 = pcVar17 + 0x38;
    func_0x0001072f2650();
    FUN_1072ec28c();
    FUN_1072ec56c(unaff_x19,pcVar17);
  }
  param_3 = param_3 + -1;
  if ((param_4 & 1) == 0) {
    pcVar17 = unaff_x19 + -0x38;
    func_0x000104c2fc44(pcVar17,unaff_x19);
    if (((ulong)pcVar17 & 1) == 0) {
      func_0x0001072f2140();
      puVar9 = &stack0x00000050;
      func_0x0001072f1e3c();
      pcVar12 = unaff_x19;
      if (((ulong)puVar9 & 1) == 0) {
        do {
          pcVar12 = pcVar12 + 0x38;
          if (param_2 <= pcVar12) break;
          func_0x0001072f2134();
        } while ((int)puVar9 == 0);
      }
      else {
        do {
          pcVar12 = pcVar12 + 0x38;
          func_0x0001072f2134();
        } while (((ulong)puVar9 & 1) == 0);
      }
      pcVar17 = param_2;
      if (pcVar12 < param_2) {
        do {
          pcVar17 = pcVar17 + -0x38;
          func_0x0001072f2918();
        } while (((ulong)puVar9 & 1) != 0);
      }
      while (pcVar12 < pcVar17) {
        pcVar8 = pcVar12;
        FUN_1072ec56c(pcVar12,pcVar17);
        do {
          pcVar12 = pcVar12 + 0x38;
          func_0x0001072f2134();
        } while ((int)pcVar8 == 0);
        do {
          pcVar17 = pcVar17 + -0x38;
          func_0x0001072f2918();
        } while (((ulong)pcVar8 & 1) != 0);
      }
      param_1 = pcVar12 + -0x38;
      if (unaff_x19 != param_1) {
        func_0x000104c2f1f0(unaff_x19,param_1);
      }
      pcVar17 = (code *)&stack0x00000050;
      func_0x000104c2f1f0();
      func_0x0001072f1c4c();
      param_4 = 0;
      goto LAB_1072ebcb8;
    }
  }
  func_0x0001072f2140();
  lVar18 = 0;
  do {
    pcVar17 = unaff_x19 + lVar18 + 0x38;
    func_0x000104c2fc44(pcVar17,&stack0x00000050);
    lVar18 = lVar18 + 0x38;
  } while (((ulong)pcVar17 & 1) != 0);
  unaff_x24 = unaff_x19 + lVar18;
  pcVar19 = param_2;
  pcVar12 = unaff_x24;
  if (lVar18 == 0x38) {
    do {
      unaff_x27 = pcVar19;
      if (pcVar19 <= unaff_x24) break;
      pcVar19 = pcVar19 + -0x38;
      func_0x0001072f290c();
      unaff_x27 = pcVar19;
    } while (((ulong)pcVar17 & 1) == 0);
  }
  else {
    do {
      pcVar19 = pcVar19 + -0x38;
      func_0x0001072f290c();
      unaff_x27 = pcVar19;
    } while ((int)pcVar17 == 0);
  }
  while (pcVar12 < pcVar19) {
    FUN_1072ec56c(pcVar12,pcVar19);
    do {
      pcVar12 = pcVar12 + 0x38;
      pcVar17 = pcVar12;
      func_0x000104c2fc44(pcVar12,&stack0x00000050);
    } while (((ulong)pcVar17 & 1) != 0);
    do {
      pcVar19 = pcVar19 + -0x38;
      pcVar17 = pcVar19;
      func_0x000104c2fc44(pcVar19,&stack0x00000050);
    } while (((ulong)pcVar17 & 1) == 0);
  }
  unaff_x28 = pcVar12 + -0x38;
  if (unaff_x19 != unaff_x28) {
    func_0x000104c2f1f0(unaff_x19,unaff_x28);
  }
  func_0x000104c2f1f0(unaff_x28,&stack0x00000050);
  func_0x0001072f1c4c();
  uVar6 = unaff_x24 == unaff_x27;
  pcVar19 = unaff_x28;
  if (unaff_x24 < unaff_x27) goto LAB_1072ebe58;
  unaff_x27 = unaff_x19;
  FUN_1072ec3ec(unaff_x19,unaff_x28);
  param_1 = pcVar12;
  pcVar17 = param_2;
  FUN_1072ec3ec();
  if ((int)param_1 == 0) goto code_r0x0001072ebe54;
  param_2 = unaff_x28;
  if (((ulong)unaff_x27 & 1) != 0) goto LAB_1072ebf54;
  goto LAB_1072ebca4;
LAB_1072ec024:
  pcVar13 = pcVar17 + 0x38;
  uVar6 = 1;
  if (pcVar13 == param_2) goto LAB_1072ebf54;
  param_1 = pcVar13;
  func_0x000104c2fc44();
  if ((int)param_1 != 0) {
    func_0x0001072f1b50();
    unaff_x24 = pcVar14;
    do {
      param_3 = unaff_x19 + (long)unaff_x24;
      func_0x0001072f2514(param_3 + 0x38);
      if (unaff_x24 == (code *)0x0) {
        unaff_x24 = (code *)0x0;
        param_1 = unaff_x19;
        goto LAB_1072ec078;
      }
      puVar9 = &stack0x00000050;
      func_0x000104c2fc44(puVar9,param_3 + -0x38);
      unaff_x24 = unaff_x24 + -0x38;
    } while (((ulong)puVar9 & 1) != 0);
    param_1 = unaff_x19 + (long)unaff_x24 + 0x38;
LAB_1072ec078:
    func_0x0001072f24dc();
    func_0x0001072f1c4c();
  }
  pcVar14 = pcVar14 + 0x38;
  pcVar17 = pcVar13;
  goto LAB_1072ec024;
code_r0x0001072ebe54:
  if (((ulong)unaff_x27 & 1) == 0) {
LAB_1072ebe58:
    pcVar17 = unaff_x28;
    pcVar10 = param_3;
    FUN_1072ebc78();
    param_4 = 0;
    param_1 = unaff_x19;
  }
  goto LAB_1072ebcb8;
LAB_1072ebf54:
  func_0x0001072f1710(in_stack_00000088);
  uVar5 = 0;
  param_2 = unaff_x28;
  if ((bool)uVar6) {
    return param_1;
  }
LAB_1072ec224:
  ___stack_chk_fail();
  func_0x000104c2f714(&stack0x00000050);
  unaff_x30 = FUN_1072ec28c;
  func_0x0001072f1abc();
  uVar6 = uVar5;
  unaff_x19 = param_1;
  in_stack_000000e0 = &stack0x000000e0;
code_r0x0001072ec28c:
  ppcVar4 = &pcStack_30;
  pcStack_30 = param_3;
  pcStack_28 = pcVar13;
  pcStack_20 = param_2;
  pcStack_18 = unaff_x19;
  ppppppuStack_10 = in_stack_000000e0;
  pcStack_8 = unaff_x30;
  func_0x0001072f1ae4();
  func_0x0001072f1e3c();
  pcVar13 = pcVar17;
  func_0x0001072f1b8c();
  func_0x000104c2fc44();
  if (((ulong)pcVar17 & 1) == 0) {
    if ((int)pcVar13 != 0) {
      func_0x0001072f1bcc();
      FUN_1072ec56c();
      func_0x0001072f1d0c();
      func_0x000104c2fc44();
      if ((int)pcVar13 != 0) {
        func_0x0001072f1c34();
        ppcVar4 = &pcStack_30;
        in_stack_000000e0 = (undefined8 *******)ppppppuStack_10;
        pcVar17 = pcStack_8;
        goto LAB_1072f2774;
      }
    }
    return pcVar13;
  }
  in_stack_000000e0 = (undefined8 *******)ppppppuStack_10;
  pcVar17 = pcStack_8;
  if ((int)pcVar13 == 0) {
    func_0x0001072f1c34();
    FUN_1072ec56c();
    func_0x0001072f1b8c();
    func_0x000104c2fc44();
    ppcVar4 = &pcStack_30;
    in_stack_000000e0 = (undefined8 *******)ppppppuStack_10;
    pcVar17 = pcStack_8;
    if ((int)pcVar13 == 0) {
      return pcVar13;
    }
  }
LAB_1072f2774:
  param_2 = ppcVar4[2];
  unaff_x19 = ppcVar4[3];
  register0x00000008 = (BADSPACEBASE *)(ppcVar4 + 6);
  param_3 = *ppcVar4;
  pcVar13 = ppcVar4[1];
  unaff_x30 = pcVar10;
code_r0x0001072ec56c:
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(code **)((long)register0x00000008 + -0x20) = param_2;
  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = in_stack_000000e0;
  *(code **)((long)register0x00000008 + -8) = pcVar17;
  func_0x0001072f1b80();
  func_0x0001072f1810();
  *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_00;
  func_0x000104c318bc((undefined1 *)((long)register0x00000008 + -0x60),param_2);
  func_0x0001072f1b8c();
  func_0x000104c2f1f0();
  pcVar10 = unaff_x19;
  func_0x000104c2f1f0();
  func_0x0001072f1cfc();
  func_0x0001072f1710(*(undefined8 *)((long)register0x00000008 + -0x28));
  if ((bool)uVar6) {
    return pcVar10;
  }
  ___stack_chk_fail();
  pcVar17 = (code *)((long)register0x00000008 + -0x100);
  *(code **)((long)register0x00000008 + -0xc0) = pcVar19;
  *(code **)((long)register0x00000008 + -0xb8) = unaff_x27;
  *(code **)((long)register0x00000008 + -0xb0) = pcVar12;
  *(ulong *)((long)register0x00000008 + -0xa8) = param_4;
  *(code **)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(code **)((long)register0x00000008 + -0x98) = pcVar14;
  *(code **)((long)register0x00000008 + -0x90) = param_3;
  *(code **)((long)register0x00000008 + -0x88) = pcVar13;
  *(code **)((long)register0x00000008 + -0x80) = param_2;
  *(code **)((long)register0x00000008 + -0x78) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x68) = FUN_1072ec5c8;
  func_0x0001072f1810();
  *(undefined8 *)((long)register0x00000008 + -200) = extraout_x8_01;
  uVar6 = puVar9 + -2 == (undefined1 *)0x0;
  pcVar14 = pcVar10;
  if (1 < (long)puVar9) {
    puVar3 = (undefined1 *)(((long)unaff_x30 - (long)pcVar10) / 0x38);
    puVar15 = (undefined1 *)((ulong)(puVar9 + -2) >> 1);
    uVar6 = puVar15 == puVar3;
    param_2 = pcVar10;
    if ((long)puVar3 <= (long)puVar15) {
      puVar2 = (undefined1 *)((long)puVar3 << 1 | 1);
      pcVar13 = pcVar10 + (long)puVar2 * 0x38;
      puVar3 = (undefined1 *)((long)puVar3 * 2 + 2);
      uVar6 = puVar3 == puVar9;
      pcVar12 = pcVar13;
      puVar16 = puVar2;
      if ((long)puVar3 < (long)puVar9) {
        func_0x0001072f1f60();
        func_0x000104c2fc44();
        uVar6 = (int)pcVar14 == 0;
        pcVar12 = pcVar13 + 0x38;
        puVar16 = puVar3;
        if ((bool)uVar6) {
          pcVar12 = pcVar13;
          puVar16 = puVar2;
        }
      }
      func_0x0001072f1e14();
      func_0x000104c2fc44();
      if (((ulong)pcVar14 & 1) == 0) {
        func_0x0001072f2504();
        do {
          pcVar14 = pcVar12;
          iVar7 = (int)pcVar17;
          func_0x0001072f1ca8();
          func_0x000104c2f1f0();
          uVar6 = puVar15 == puVar16;
          if ((long)puVar15 < (long)puVar16) break;
          puVar2 = (undefined1 *)((long)puVar16 << 1 | 1);
          pcVar17 = pcVar10 + (long)puVar2 * 0x38;
          puVar3 = (undefined1 *)((long)puVar16 * 2 + 2);
          uVar6 = puVar3 == puVar9;
          pcVar12 = pcVar17;
          puVar16 = puVar2;
          if ((long)puVar3 < (long)puVar9) {
            func_0x0001072f1e14();
            func_0x000104c2fc44();
            uVar6 = iVar7 == 0;
            pcVar12 = pcVar17 + 0x38;
            puVar16 = puVar3;
            if ((bool)uVar6) {
              pcVar12 = pcVar17;
              puVar16 = puVar2;
            }
          }
          pcVar17 = pcVar12;
          func_0x000104c2fc44(pcVar12,(undefined1 *)((long)register0x00000008 + -0x100));
        } while ((int)pcVar17 == 0);
        func_0x000104c2f1f0(pcVar14,(undefined1 *)((long)register0x00000008 + -0x100));
        func_0x0001072f1cfc();
      }
    }
  }
  func_0x0001072f1710(*(undefined8 *)((long)register0x00000008 + -200));
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    pcVar10 = pcVar14;
    func_0x0001072f1cfc();
    func_0x0001072f1abc();
    *(code **)((long)register0x00000008 + -0x120) = param_2;
    *(code **)((long)register0x00000008 + -0x118) = pcVar14;
    *(undefined1 **)((long)register0x00000008 + -0x110) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0x1072ec71c;
    func_0x0001072f1c10();
    if (pcVar10[0xa0] == (code)0x1) {
      func_0x0001072ec784();
      func_0x0001072ec7f4(pcVar14 + 0x28,param_2 + 0x28);
      FUN_1072e89fc(pcVar14 + 0x50,param_2 + 0x50);
      FUN_1072ebbd8(pcVar14 + 0x78,param_2 + 0x78);
    }
    else {
      FUN_1072e94d8();
      pcVar14[0xa0] = (code)0x1;
    }
    return pcVar14;
  }
  return pcVar14;
}



/* Entry: 1072ec28c; end: 1072ec36f;  */

undefined1 * FUN_1072ec28c(undefined8 param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_100 [56];
  undefined8 uStack_c8;
  undefined1 auStack_60 [48];
  
  func_0x0001072f1ae4();
  func_0x0001072f1e3c();
  puVar4 = param_2;
  func_0x0001072f1b8c();
  func_0x000104c2fc44();
  if (((ulong)param_2 & 1) != 0) {
    if ((int)puVar4 == 0) {
      func_0x0001072f1c34();
      FUN_1072ec56c();
      func_0x0001072f1b8c();
      func_0x000104c2fc44();
      if ((int)puVar4 == 0) {
        return puVar4;
      }
    }
LAB_1072ec300:
    puVar4 = auStack_60;
    func_0x0001072f1b80();
    func_0x0001072f1810();
    func_0x000104c318bc(auStack_60,unaff_x20);
    func_0x0001072f1b8c();
    func_0x000104c2f1f0();
    func_0x000104c2f1f0();
    func_0x0001072f1cfc();
    func_0x0001072f1710(extraout_x8);
    if ((bool)in_ZR) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    puVar6 = auStack_100;
    func_0x0001072f1810();
    uVar2 = puVar4 + -2 == (undefined1 *)0x0;
    puVar5 = unaff_x19;
    uStack_c8 = extraout_x8_00;
    if (1 < (long)puVar4) {
      puVar1 = (undefined1 *)((param_3 - (long)unaff_x19) / 0x38);
      puVar10 = (undefined1 *)((ulong)(puVar4 + -2) >> 1);
      uVar2 = puVar10 == puVar1;
      unaff_x20 = unaff_x19;
      if ((long)puVar1 <= (long)puVar10) {
        puVar8 = (undefined1 *)((long)puVar1 << 1 | 1);
        puVar7 = unaff_x19 + (long)puVar8 * 0x38;
        puVar1 = (undefined1 *)((long)puVar1 * 2 + 2);
        uVar2 = puVar1 == puVar4;
        puVar9 = puVar7;
        puVar11 = puVar8;
        if ((long)puVar1 < (long)puVar4) {
          func_0x0001072f1f60();
          func_0x000104c2fc44();
          uVar2 = (int)puVar5 == 0;
          puVar9 = puVar7 + 0x38;
          puVar11 = puVar1;
          if ((bool)uVar2) {
            puVar9 = puVar7;
            puVar11 = puVar8;
          }
        }
        func_0x0001072f1e14();
        func_0x000104c2fc44();
        if (((ulong)puVar5 & 1) == 0) {
          func_0x0001072f2504();
          do {
            puVar5 = puVar9;
            iVar3 = (int)puVar6;
            func_0x0001072f1ca8();
            func_0x000104c2f1f0();
            uVar2 = puVar10 == puVar11;
            if ((long)puVar10 < (long)puVar11) break;
            puVar1 = (undefined1 *)((long)puVar11 << 1 | 1);
            puVar8 = unaff_x19 + (long)puVar1 * 0x38;
            puVar6 = (undefined1 *)((long)puVar11 * 2 + 2);
            uVar2 = puVar6 == puVar4;
            puVar9 = puVar8;
            puVar11 = puVar1;
            if ((long)puVar6 < (long)puVar4) {
              func_0x0001072f1e14();
              func_0x000104c2fc44();
              uVar2 = iVar3 == 0;
              puVar9 = puVar8 + 0x38;
              puVar11 = puVar6;
              if ((bool)uVar2) {
                puVar9 = puVar8;
                puVar11 = puVar1;
              }
            }
            puVar6 = puVar9;
            func_0x000104c2fc44(puVar9,auStack_100);
          } while ((int)puVar6 == 0);
          func_0x000104c2f1f0(puVar5,auStack_100);
          func_0x0001072f1cfc();
        }
      }
    }
    func_0x0001072f1710(uStack_c8);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      puVar4 = puVar5;
      func_0x0001072f1cfc();
      func_0x0001072f1abc();
      func_0x0001072f1c10();
      if (puVar4[0xa0] == '\x01') {
        func_0x0001072ec784();
        func_0x0001072ec7f4(puVar5 + 0x28,unaff_x20 + 0x28);
        FUN_1072e89fc(puVar5 + 0x50,unaff_x20 + 0x50);
        FUN_1072ebbd8(puVar5 + 0x78,unaff_x20 + 0x78);
      }
      else {
        FUN_1072e94d8();
        puVar5[0xa0] = 1;
      }
      return puVar5;
    }
    return puVar5;
  }
  if ((int)puVar4 != 0) {
    func_0x0001072f1bcc();
    FUN_1072ec56c();
    func_0x0001072f1d0c();
    func_0x000104c2fc44();
    if ((int)puVar4 != 0) {
      func_0x0001072f1c34();
      goto LAB_1072ec300;
    }
  }
  return puVar4;
}



/* Entry: 1072ec370; end: 1072ec3eb;  */

undefined1 * FUN_1072ec370(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_100 [56];
  undefined8 uStack_c8;
  undefined1 auStack_60 [32];
  
  func_0x0001072f1900();
  func_0x0001072ec310();
  func_0x0001072f2070();
  func_0x000104c2fc44();
  if ((int)param_1 != 0) {
    func_0x0001072f1e88();
    FUN_1072ec56c();
    func_0x0001072f1ca8();
    func_0x000104c2fc44();
    if ((int)param_1 != 0) {
      func_0x0001072f1e14();
      FUN_1072ec56c();
      func_0x0001072f1c34();
      func_0x000104c2fc44();
      if ((int)param_1 != 0) {
        func_0x0001072f1d0c();
        FUN_1072ec56c();
        func_0x0001072f1bcc();
        func_0x000104c2fc44();
        if ((int)param_1 != 0) {
          func_0x0001072f1b8c();
          puVar6 = auStack_60;
          func_0x0001072f1b80();
          func_0x0001072f1810();
          func_0x000104c318bc(auStack_60,unaff_x20);
          func_0x0001072f1b8c();
          func_0x000104c2f1f0();
          func_0x000104c2f1f0();
          func_0x0001072f1cfc();
          func_0x0001072f1710(extraout_x8);
          if ((bool)in_ZR) {
            return unaff_x19;
          }
          ___stack_chk_fail();
          puVar5 = auStack_100;
          func_0x0001072f1810();
          uVar2 = puVar6 + -2 == (undefined1 *)0x0;
          puVar4 = unaff_x19;
          uStack_c8 = extraout_x8_00;
          if (1 < (long)puVar6) {
            puVar1 = (undefined1 *)((param_3 - (long)unaff_x19) / 0x38);
            puVar10 = (undefined1 *)((ulong)(puVar6 + -2) >> 1);
            uVar2 = puVar10 == puVar1;
            unaff_x20 = unaff_x19;
            if ((long)puVar1 <= (long)puVar10) {
              puVar8 = (undefined1 *)((long)puVar1 << 1 | 1);
              puVar7 = unaff_x19 + (long)puVar8 * 0x38;
              puVar1 = (undefined1 *)((long)puVar1 * 2 + 2);
              uVar2 = puVar1 == puVar6;
              puVar9 = puVar7;
              puVar11 = puVar8;
              if ((long)puVar1 < (long)puVar6) {
                func_0x0001072f1f60();
                func_0x000104c2fc44();
                uVar2 = (int)puVar4 == 0;
                puVar9 = puVar7 + 0x38;
                puVar11 = puVar1;
                if ((bool)uVar2) {
                  puVar9 = puVar7;
                  puVar11 = puVar8;
                }
              }
              func_0x0001072f1e14();
              func_0x000104c2fc44();
              if (((ulong)puVar4 & 1) == 0) {
                func_0x0001072f2504();
                do {
                  puVar4 = puVar9;
                  iVar3 = (int)puVar5;
                  func_0x0001072f1ca8();
                  func_0x000104c2f1f0();
                  uVar2 = puVar10 == puVar11;
                  if ((long)puVar10 < (long)puVar11) break;
                  puVar1 = (undefined1 *)((long)puVar11 << 1 | 1);
                  puVar8 = unaff_x19 + (long)puVar1 * 0x38;
                  puVar5 = (undefined1 *)((long)puVar11 * 2 + 2);
                  uVar2 = puVar5 == puVar6;
                  puVar9 = puVar8;
                  puVar11 = puVar1;
                  if ((long)puVar5 < (long)puVar6) {
                    func_0x0001072f1e14();
                    func_0x000104c2fc44();
                    uVar2 = iVar3 == 0;
                    puVar9 = puVar8 + 0x38;
                    puVar11 = puVar5;
                    if ((bool)uVar2) {
                      puVar9 = puVar8;
                      puVar11 = puVar1;
                    }
                  }
                  puVar5 = puVar9;
                  func_0x000104c2fc44(puVar9,auStack_100);
                } while ((int)puVar5 == 0);
                func_0x000104c2f1f0(puVar4,auStack_100);
                func_0x0001072f1cfc();
              }
            }
          }
          func_0x0001072f1710(uStack_c8);
          if ((bool)uVar2) {
            return puVar4;
          }
          ___stack_chk_fail();
          puVar6 = puVar4;
          func_0x0001072f1cfc();
          func_0x0001072f1abc();
          func_0x0001072f1c10();
          if (puVar6[0xa0] == '\x01') {
            func_0x0001072ec784();
            func_0x0001072ec7f4(puVar4 + 0x28,unaff_x20 + 0x28);
            FUN_1072e89fc(puVar4 + 0x50,unaff_x20 + 0x50);
            FUN_1072ebbd8(puVar4 + 0x78,unaff_x20 + 0x78);
          }
          else {
            FUN_1072e94d8();
            puVar4[0xa0] = 1;
          }
          return puVar4;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 1072ec3ec; end: 1072ec56b;  */

undefined1 * FUN_1072ec3ec(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x19;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_190 [56];
  undefined8 uStack_158;
  undefined1 auStack_f0 [56];
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  func_0x0001072f17a8();
  uStack_58 = extraout_x8;
  func_0x0001072f1f9c();
  if (!(bool)in_CY || (bool)in_ZR) {
    puVar4 = (undefined1 *)0x1;
                    /* WARNING: Could not recover jumptable at 0x0001072ec434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10de34412)[extraout_x8_00] * 4 + 0x1072ec438))(1);
    return puVar4;
  }
  func_0x0001072f22c8();
  puVar4 = (undefined1 *)(unaff_x19 + 0x70);
  FUN_1072ec28c();
  lVar14 = 0;
  iVar3 = 0;
  puVar6 = (undefined1 *)(unaff_x19 + 0xa8);
  puVar9 = (undefined1 *)(unaff_x19 + 0x70);
  while (puVar8 = puVar6, uVar2 = puVar8 == param_2, !(bool)uVar2) {
    puVar6 = puVar8;
    func_0x000104c2fc44(puVar8,puVar9);
    if ((int)puVar6 != 0) {
      func_0x000104c318bc(auStack_90,puVar8);
      lVar13 = lVar14;
      do {
        lVar1 = unaff_x19 + lVar13;
        func_0x000104c2f1f0(lVar1 + 0xa8,lVar1 + 0x70);
        if (lVar13 == -0x70) break;
        uVar5 = 0;
        func_0x000104c2fc44(auStack_90,lVar1 + 0x38);
        lVar13 = lVar13 + -0x38;
      } while ((uVar5 & 1) != 0);
      func_0x000104c2f1f0();
      iVar3 = iVar3 + 1;
      func_0x0001072f1cfc();
      if (iVar3 == 8) {
        uVar2 = puVar8 + 0x38 == param_2;
        puVar6 = (undefined1 *)(ulong)(byte)uVar2;
        goto LAB_1072ec530;
      }
    }
    lVar14 = lVar14 + 0x38;
    puVar9 = puVar8;
    puVar6 = puVar8 + 0x38;
  }
  puVar6 = (undefined1 *)0x1;
LAB_1072ec530:
  func_0x0001072f1710(uStack_58);
  if ((bool)uVar2) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001072f1abc();
  puVar9 = auStack_f0;
  pcStack_98 = FUN_1072ec56c;
  puStack_b0 = param_2;
  puStack_a8 = puVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001072f1b80();
  func_0x0001072f1810();
  uStack_b8 = extraout_x8_01;
  func_0x000104c318bc(auStack_f0,param_2);
  func_0x0001072f1b8c();
  func_0x000104c2f1f0();
  func_0x000104c2f1f0();
  func_0x0001072f1cfc();
  func_0x0001072f1710(uStack_b8);
  if ((bool)uVar2) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar8 = auStack_190;
  func_0x0001072f1810();
  uVar2 = puVar9 + -2 == (undefined1 *)0x0;
  puVar7 = puVar6;
  uStack_158 = extraout_x8_02;
  if (1 < (long)puVar9) {
    puVar4 = (undefined1 *)(((long)puVar4 - (long)puVar6) / 0x38);
    puVar15 = (undefined1 *)((ulong)(puVar9 + -2) >> 1);
    uVar2 = puVar15 == puVar4;
    param_2 = puVar6;
    if ((long)puVar4 <= (long)puVar15) {
      puVar11 = (undefined1 *)((long)puVar4 << 1 | 1);
      puVar10 = puVar6 + (long)puVar11 * 0x38;
      puVar4 = (undefined1 *)((long)puVar4 * 2 + 2);
      uVar2 = puVar4 == puVar9;
      puVar12 = puVar10;
      puVar16 = puVar11;
      if ((long)puVar4 < (long)puVar9) {
        func_0x0001072f1f60();
        func_0x000104c2fc44();
        uVar2 = (int)puVar7 == 0;
        puVar12 = puVar10 + 0x38;
        puVar16 = puVar4;
        if ((bool)uVar2) {
          puVar12 = puVar10;
          puVar16 = puVar11;
        }
      }
      func_0x0001072f1e14();
      func_0x000104c2fc44();
      if (((ulong)puVar7 & 1) == 0) {
        func_0x0001072f2504();
        do {
          puVar7 = puVar12;
          iVar3 = (int)puVar8;
          func_0x0001072f1ca8();
          func_0x000104c2f1f0();
          uVar2 = puVar15 == puVar16;
          if ((long)puVar15 < (long)puVar16) break;
          puVar8 = (undefined1 *)((long)puVar16 << 1 | 1);
          puVar11 = puVar6 + (long)puVar8 * 0x38;
          puVar4 = (undefined1 *)((long)puVar16 * 2 + 2);
          uVar2 = puVar4 == puVar9;
          puVar12 = puVar11;
          puVar16 = puVar8;
          if ((long)puVar4 < (long)puVar9) {
            func_0x0001072f1e14();
            func_0x000104c2fc44();
            uVar2 = iVar3 == 0;
            puVar12 = puVar11 + 0x38;
            puVar16 = puVar4;
            if ((bool)uVar2) {
              puVar12 = puVar11;
              puVar16 = puVar8;
            }
          }
          puVar8 = puVar12;
          func_0x000104c2fc44(puVar12,auStack_190);
        } while ((int)puVar8 == 0);
        func_0x000104c2f1f0(puVar7,auStack_190);
        func_0x0001072f1cfc();
      }
    }
  }
  func_0x0001072f1710(uStack_158);
  if ((bool)uVar2) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = puVar7;
  func_0x0001072f1cfc();
  func_0x0001072f1abc();
  func_0x0001072f1c10();
  if (puVar4[0xa0] == '\x01') {
    func_0x0001072ec784();
    func_0x0001072ec7f4(puVar7 + 0x28,param_2 + 0x28);
    FUN_1072e89fc(puVar7 + 0x50,param_2 + 0x50);
    FUN_1072ebbd8(puVar7 + 0x78,param_2 + 0x78);
  }
  else {
    FUN_1072e94d8();
    puVar7[0xa0] = 1;
  }
  return puVar7;
}



/* Entry: 1072ec56c; end: 1072ec5c7;  */

undefined1 * FUN_1072ec56c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_100 [56];
  undefined8 uStack_c8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar6 = auStack_60;
  func_0x0001072f1b80();
  func_0x0001072f1810();
  uStack_28 = extraout_x8;
  func_0x000104c318bc(auStack_60);
  func_0x0001072f1b8c();
  func_0x000104c2f1f0();
  func_0x000104c2f1f0();
  func_0x0001072f1cfc();
  func_0x0001072f1710(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  puVar5 = auStack_100;
  func_0x0001072f1810();
  uVar2 = puVar6 + -2 == (undefined1 *)0x0;
  puVar4 = unaff_x19;
  uStack_c8 = extraout_x8_00;
  if (1 < (long)puVar6) {
    puVar1 = (undefined1 *)((param_3 - (long)unaff_x19) / 0x38);
    puVar10 = (undefined1 *)((ulong)(puVar6 + -2) >> 1);
    uVar2 = puVar10 == puVar1;
    unaff_x20 = unaff_x19;
    if ((long)puVar1 <= (long)puVar10) {
      puVar8 = (undefined1 *)((long)puVar1 << 1 | 1);
      puVar7 = unaff_x19 + (long)puVar8 * 0x38;
      puVar1 = (undefined1 *)((long)puVar1 * 2 + 2);
      uVar2 = puVar1 == puVar6;
      puVar9 = puVar7;
      puVar11 = puVar8;
      if ((long)puVar1 < (long)puVar6) {
        func_0x0001072f1f60();
        func_0x000104c2fc44();
        uVar2 = (int)puVar4 == 0;
        puVar9 = puVar7 + 0x38;
        puVar11 = puVar1;
        if ((bool)uVar2) {
          puVar9 = puVar7;
          puVar11 = puVar8;
        }
      }
      func_0x0001072f1e14();
      func_0x000104c2fc44();
      if (((ulong)puVar4 & 1) == 0) {
        func_0x0001072f2504();
        do {
          puVar4 = puVar9;
          iVar3 = (int)puVar5;
          func_0x0001072f1ca8();
          func_0x000104c2f1f0();
          uVar2 = puVar10 == puVar11;
          if ((long)puVar10 < (long)puVar11) break;
          puVar1 = (undefined1 *)((long)puVar11 << 1 | 1);
          puVar8 = unaff_x19 + (long)puVar1 * 0x38;
          puVar5 = (undefined1 *)((long)puVar11 * 2 + 2);
          uVar2 = puVar5 == puVar6;
          puVar9 = puVar8;
          puVar11 = puVar1;
          if ((long)puVar5 < (long)puVar6) {
            func_0x0001072f1e14();
            func_0x000104c2fc44();
            uVar2 = iVar3 == 0;
            puVar9 = puVar8 + 0x38;
            puVar11 = puVar5;
            if ((bool)uVar2) {
              puVar9 = puVar8;
              puVar11 = puVar1;
            }
          }
          puVar5 = puVar9;
          func_0x000104c2fc44(puVar9,auStack_100);
        } while ((int)puVar5 == 0);
        func_0x000104c2f1f0(puVar4,auStack_100);
        func_0x0001072f1cfc();
      }
    }
  }
  func_0x0001072f1710(uStack_c8);
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar6 = puVar4;
  func_0x0001072f1cfc();
  func_0x0001072f1abc();
  func_0x0001072f1c10();
  if (puVar6[0xa0] == '\x01') {
    func_0x0001072ec784();
    func_0x0001072ec7f4(puVar4 + 0x28,unaff_x20 + 0x28);
    FUN_1072e89fc(puVar4 + 0x50,unaff_x20 + 0x50);
    FUN_1072ebbd8(puVar4 + 0x78,unaff_x20 + 0x78);
  }
  else {
    FUN_1072e94d8();
    puVar4[0xa0] = 1;
  }
  return puVar4;
}



/* Entry: 1072ec5c8; end: 1072ec71b;  */

undefined1 * FUN_1072ec5c8(undefined1 *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined1 *unaff_x20;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  
  puVar7 = auStack_a0;
  func_0x0001072f1810();
  uVar3 = param_2 - 2 == 0;
  puVar5 = param_1;
  uStack_68 = extraout_x8;
  if (1 < (long)param_2) {
    uVar2 = (param_3 - (long)param_1) / 0x38;
    uVar9 = param_2 - 2 >> 1;
    uVar3 = uVar9 == uVar2;
    unaff_x20 = param_1;
    if ((long)uVar2 <= (long)uVar9) {
      uVar1 = uVar2 << 1 | 1;
      puVar6 = param_1 + uVar1 * 0x38;
      uVar2 = uVar2 * 2 + 2;
      uVar3 = uVar2 == param_2;
      puVar8 = puVar6;
      uVar10 = uVar1;
      if ((long)uVar2 < (long)param_2) {
        func_0x0001072f1f60();
        func_0x000104c2fc44();
        uVar3 = (int)puVar5 == 0;
        puVar8 = puVar6 + 0x38;
        uVar10 = uVar2;
        if ((bool)uVar3) {
          puVar8 = puVar6;
          uVar10 = uVar1;
        }
      }
      func_0x0001072f1e14();
      func_0x000104c2fc44();
      if (((ulong)puVar5 & 1) == 0) {
        func_0x0001072f2504();
        do {
          puVar5 = puVar8;
          iVar4 = (int)puVar7;
          func_0x0001072f1ca8();
          func_0x000104c2f1f0();
          uVar3 = uVar9 == uVar10;
          if ((long)uVar9 < (long)uVar10) break;
          uVar1 = uVar10 << 1 | 1;
          puVar7 = param_1 + uVar1 * 0x38;
          uVar2 = uVar10 * 2 + 2;
          uVar3 = uVar2 == param_2;
          puVar8 = puVar7;
          uVar10 = uVar1;
          if ((long)uVar2 < (long)param_2) {
            func_0x0001072f1e14();
            func_0x000104c2fc44();
            uVar3 = iVar4 == 0;
            puVar8 = puVar7 + 0x38;
            uVar10 = uVar2;
            if ((bool)uVar3) {
              puVar8 = puVar7;
              uVar10 = uVar1;
            }
          }
          puVar7 = puVar8;
          func_0x000104c2fc44(puVar8,auStack_a0);
        } while ((int)puVar7 == 0);
        func_0x000104c2f1f0(puVar5,auStack_a0);
        func_0x0001072f1cfc();
      }
    }
  }
  func_0x0001072f1710(uStack_68);
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar7 = puVar5;
  func_0x0001072f1cfc();
  func_0x0001072f1abc();
  func_0x0001072f1c10();
  if (puVar7[0xa0] == '\x01') {
    func_0x0001072ec784();
    func_0x0001072ec7f4(puVar5 + 0x28,unaff_x20 + 0x28);
    FUN_1072e89fc(puVar5 + 0x50,unaff_x20 + 0x50);
    FUN_1072ebbd8(puVar5 + 0x78,unaff_x20 + 0x78);
  }
  else {
    FUN_1072e94d8();
    puVar5[0xa0] = 1;
  }
  return puVar5;
}



/* Entry: 1072ec71c; end: 1072ec99f;  */

void FUN_1072ec71c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1c10();
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    func_0x0001072ec784();
    func_0x0001072ec7f4(unaff_x19 + 0x28,unaff_x20 + 0x28);
    FUN_1072e89fc(unaff_x19 + 0x50,unaff_x20 + 0x50);
    FUN_1072ebbd8(unaff_x19 + 0x78,unaff_x20 + 0x78);
  }
  else {
    FUN_1072e94d8();
    *(undefined1 *)(unaff_x19 + 0xa0) = 1;
  }
  return;
}



/* Entry: 1072ec9a0; end: 1072eca3b;  */

long FUN_1072ec9a0(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar1;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x0001072f2318(), extraout_x8 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x0001072f21e8();
      if ((bool)in_CY) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        func_0x0001072f26d4();
        if (!(bool)in_ZR) break;
        func_0x0001072f1924();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = extraout_x8_00 & unaff_x23;
      }
      else {
        uVar1 = extraout_x8_00;
        if (uVar2 <= extraout_x8_00) {
          func_0x0001072f21d0();
          uVar1 = extraout_x8_01;
        }
      }
      in_ZR = 1;
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 1072eca3c; end: 1072ecdcf;  */

void FUN_1072eca3c(ulong param_1)

{
  undefined1 in_NG;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  ulong extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long *plVar6;
  long *plVar7;
  ulong extraout_x9;
  ulong uVar8;
  ulong extraout_x9_00;
  ulong uVar9;
  long *unaff_x19;
  long *unaff_x20;
  ulong *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  byte bVar17;
  
  func_0x0001072f1c10();
  func_0x0001072f2884();
  puVar10 = (ulong *)(unaff_x19 + 1);
  uVar11 = *puVar10;
  unaff_x20[1] = param_1;
  uVar8 = param_1;
  func_0x0001072f1c28(unaff_x19[3]);
  if ((uVar11 != 0) && (func_0x0001072f1c1c(), !(bool)in_NG)) goto LAB_1072ecc20;
  func_0x0001072f1998();
  bVar1 = 2 < uVar11;
  bVar2 = uVar11 == 3;
  func_0x0001072f1724();
  uVar13 = extraout_x8;
  if (!bVar1 || bVar2) {
    uVar13 = extraout_x9;
  }
  if (uVar13 - 1 == 0) {
    uVar13 = 2;
  }
  else if ((uVar13 & uVar13 - 1) != 0) {
    func_0x0001072f2848();
    uVar11 = *puVar10;
    uVar13 = uVar8;
  }
  if (uVar11 < uVar13) {
LAB_1072ecad0:
    func_0x0001072f1e88();
    FUN_107271880();
    func_0x0001072f23e4();
    FUN_107271868();
    uVar8 = 0;
    unaff_x19[1] = uVar13;
    lVar5 = *unaff_x19;
    while (uVar13 != uVar8) {
      func_0x0001072f1f90();
      lVar5 = extraout_x8_00;
      uVar8 = extraout_x9_00;
    }
    plVar12 = (long *)unaff_x19[2];
    if (plVar12 != (long *)0x0) {
      uVar8 = plVar12[1];
      uVar11 = uVar13 - 1;
      if ((uVar13 & uVar11) == 0) {
        uVar8 = uVar8 & uVar11;
      }
      else if (uVar13 <= uVar8) {
        uVar16 = 0;
        if (uVar13 != 0) {
          uVar16 = uVar8 / uVar13;
        }
        uVar8 = uVar8 - uVar16 * uVar13;
      }
      *(long **)(lVar5 + uVar8 * 8) = unaff_x19 + 2;
      while (plVar15 = plVar12, plVar12 = (long *)*plVar15, plVar12 != (long *)0x0) {
        uVar16 = plVar12[1];
        if ((uVar13 & uVar11) == 0) {
          uVar16 = uVar16 & uVar11;
        }
        else if (uVar13 <= uVar16) {
          uVar9 = 0;
          if (uVar13 != 0) {
            uVar9 = uVar16 / uVar13;
          }
          uVar16 = uVar16 - uVar9 * uVar13;
        }
        if (uVar16 != uVar8) {
          plVar7 = plVar12;
          if (*(long *)(lVar5 + uVar16 * 8) == 0) {
            *(long **)(lVar5 + uVar16 * 8) = plVar15;
            uVar8 = uVar16;
          }
          else {
            do {
              plVar6 = plVar7;
              plVar7 = (long *)0x0;
              if (*plVar6 == 0) break;
              plVar4 = plVar12 + 2;
              func_0x000104c32db4(plVar4,*plVar6 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (((ulong)plVar4 & 1) != 0);
            *plVar15 = (long)plVar7;
            lVar5 = *unaff_x19;
            *plVar6 = **(long **)(lVar5 + uVar16 * 8);
            **(undefined8 **)(lVar5 + uVar16 * 8) = plVar12;
            plVar12 = plVar15;
          }
        }
      }
    }
  }
  else if (uVar13 < uVar11) {
    func_0x0001072f19c8();
    if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001072f16f0();
    }
    if (uVar13 <= uVar8) {
      uVar13 = uVar8;
    }
    if (uVar13 < uVar11) {
      if (uVar13 != 0) goto LAB_1072ecad0;
      FUN_107271868();
      unaff_x19[1] = 0;
    }
  }
  uVar11 = *puVar10;
LAB_1072ecc20:
  uVar8 = uVar11 - 1;
  if ((uVar11 & uVar8) == 0) {
    uVar13 = uVar8 & param_1;
  }
  else {
    uVar13 = param_1;
    if (uVar11 <= param_1) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = param_1 / uVar11;
      }
      uVar13 = param_1 - uVar13 * uVar11;
    }
  }
  plVar12 = *(long **)(*unaff_x19 + uVar13 * 8);
  if (plVar12 != (long *)0x0) {
    uVar14 = 0;
    bVar17 = 0;
    for (; lVar5 = *plVar12, lVar5 != 0; plVar12 = (long *)*plVar12) {
      uVar16 = *(ulong *)(lVar5 + 8);
      if ((uVar11 & uVar8) == 0) {
        uVar9 = uVar16 & uVar8;
      }
      else {
        uVar9 = uVar16;
        if (uVar11 <= uVar16) {
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = uVar16 / uVar11;
          }
          uVar9 = uVar16 - uVar9 * uVar11;
        }
      }
      if (uVar9 != uVar13) break;
      if (uVar16 == param_1) {
        lVar5 = lVar5 + 0x10;
        func_0x000104c32db4(lVar5,unaff_x20 + 2);
        uVar3 = (uint)lVar5;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar14;
      if ((bool)(bVar17 & bVar2)) break;
      uVar14 = uVar14 | bVar2;
      bVar17 = bVar17 | bVar2;
    }
    uVar11 = *puVar10;
  }
  bVar17 = POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) + POPCOUNT((char)(uVar11 >> 0x10))
           + POPCOUNT((char)(uVar11 >> 0x18)) + POPCOUNT((char)(uVar11 >> 0x20)) +
           POPCOUNT((char)(uVar11 >> 0x28)) + POPCOUNT((char)(uVar11 >> 0x30)) +
           POPCOUNT((char)(uVar11 >> 0x38));
  uVar8 = unaff_x20[1];
  if (bVar17 < 2) {
    uVar8 = uVar11 - 1 & uVar8;
  }
  else if (uVar11 <= uVar8) {
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar13 = uVar8 / uVar11;
    }
    uVar8 = uVar8 - uVar13 * uVar11;
  }
  if (plVar12 == (long *)0x0) {
    plVar12 = unaff_x19 + 2;
    *unaff_x20 = *plVar12;
    *plVar12 = (long)unaff_x20;
    lVar5 = *unaff_x19;
    *(long **)(lVar5 + uVar8 * 8) = plVar12;
    if (*unaff_x20 != 0) {
      uVar8 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar8 = uVar8 & uVar11 - 1;
      }
      else if (uVar11 <= uVar8) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar8 / uVar11;
        }
        uVar8 = uVar8 - uVar13 * uVar11;
      }
      *(long **)(lVar5 + uVar8 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *plVar12;
    *plVar12 = (long)unaff_x20;
    if (*unaff_x20 != 0) {
      uVar13 = *(ulong *)(*unaff_x20 + 8);
      if (bVar17 < 2) {
        uVar13 = uVar13 & uVar11 - 1;
      }
      else if (uVar11 <= uVar13) {
        uVar16 = 0;
        if (uVar11 != 0) {
          uVar16 = uVar13 / uVar11;
        }
        uVar13 = uVar13 - uVar16 * uVar11;
      }
      if (uVar13 != uVar8) {
        *(long **)(*unaff_x19 + uVar13 * 8) = unaff_x20;
      }
    }
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 1072ecdd0; end: 1072ed0ff;  */

void FUN_1072ecdd0(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long *plVar8;
  long *extraout_x10;
  ulong uVar9;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  ulong uVar10;
  long *plVar11;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  func_0x0001072f1c10();
  uVar14 = (ulong)*(int *)(param_3 + 0x10);
  puVar13 = (ulong *)(param_2 + 8);
  uVar15 = *puVar13;
  *(ulong *)(param_3 + 8) = uVar14;
  uVar7 = param_2;
  func_0x0001072f1c28(*(undefined8 *)(param_2 + 0x18));
  if ((uVar15 == 0) ||
     (func_0x0001072f1c1c(param_1,*(undefined4 *)(param_2 + 0x20),(float)uVar15), (bool)in_NG)) {
    func_0x0001072f1998();
    bVar3 = 2 < uVar15;
    bVar4 = uVar15 == 3;
    func_0x0001072f1724();
    uVar12 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar12 = extraout_x9;
    }
    if (uVar12 - 1 == 0) {
      uVar12 = 2;
    }
    else if ((uVar12 & uVar12 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar15 = *puVar13;
      uVar7 = uVar12;
    }
    if (uVar15 < uVar12) {
LAB_1072ece58:
      func_0x0001072f1ca8();
      FUN_107271c78();
      func_0x0001072f23e4();
      FUN_107271c60();
      uVar7 = 0;
      unaff_x19[1] = uVar12;
      lVar6 = *unaff_x19;
      while (uVar12 != uVar7) {
        func_0x0001072f1f90();
        lVar6 = extraout_x8_00;
        uVar7 = extraout_x9_00;
      }
      plVar8 = (long *)unaff_x19[2];
      uVar15 = uVar12;
      if (plVar8 != (long *)0x0) {
        uVar9 = plVar8[1];
        uVar7 = uVar12 - 1;
        if ((uVar12 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar12 <= uVar9) {
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = uVar9 / uVar12;
          }
          uVar9 = uVar9 - uVar10 * uVar12;
        }
        *(long **)(lVar6 + uVar9 * 8) = unaff_x19 + 2;
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar10 = plVar8[1];
          if ((uVar12 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar12 <= uVar10) {
            uVar1 = 0;
            if (uVar12 != 0) {
              uVar1 = uVar10 / uVar12;
            }
            uVar10 = uVar10 - uVar1 * uVar12;
          }
          if (uVar10 != uVar9) {
            plVar11 = plVar8;
            if (*(long *)(lVar6 + uVar10 * 8) == 0) {
              func_0x0001072f26e0();
              lVar6 = extraout_x8_02;
              uVar7 = extraout_x9_02;
              plVar8 = extraout_x12;
              uVar9 = extraout_x11_00;
            }
            else {
              do {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) break;
              } while (*(int *)(plVar8 + 2) == *(int *)(plVar11 + 2));
              func_0x0001072f23f0();
              lVar6 = extraout_x8_01;
              uVar7 = extraout_x9_01;
              plVar8 = extraout_x10;
              uVar9 = extraout_x11;
            }
          }
        }
      }
    }
    else if (uVar12 < uVar15) {
      func_0x0001072f19c8();
      if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x0001072f16f0();
      }
      if (uVar12 <= uVar7) {
        uVar12 = uVar7;
      }
      if (uVar12 < uVar15) {
        if (uVar12 != 0) goto LAB_1072ece58;
        FUN_107271c60();
        unaff_x19[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = *puVar13;
      }
    }
  }
  uVar7 = uVar15 - 1;
  if ((uVar15 & uVar7) == 0) {
    uVar12 = uVar7 & uVar14;
  }
  else {
    uVar12 = uVar14;
    if (uVar15 <= uVar14) {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar14 / uVar15;
      }
      uVar12 = uVar14 - uVar12 * uVar15;
    }
  }
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + uVar12 * 8);
  if (plVar8 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    bVar4 = false;
    bVar2 = 0;
    do {
      plVar11 = plVar8;
      plVar8 = (long *)*plVar11;
      if (plVar8 == (long *)0x0) break;
      uVar9 = plVar8[1];
      if ((uVar15 & uVar7) == 0) {
        uVar10 = uVar9 & uVar7;
      }
      else {
        uVar10 = uVar9;
        if (uVar15 <= uVar9) {
          uVar10 = 0;
          if (uVar15 != 0) {
            uVar10 = uVar9 / uVar15;
          }
          uVar10 = uVar9 - uVar10 * uVar15;
        }
      }
      if (uVar10 != uVar12) break;
      if (uVar9 == uVar14) {
        bVar3 = (int)plVar8[2] == (int)unaff_x20[2];
      }
      else {
        bVar3 = false;
      }
      bVar5 = bVar3 != bVar4;
      bVar3 = (bool)(bVar2 & bVar5);
      bVar4 = (bool)(bVar4 | bVar5);
      bVar2 = bVar2 | bVar5;
    } while (!bVar3);
  }
  uVar14 = unaff_x20[1];
  if ((uVar15 & uVar7) == 0) {
    uVar14 = uVar7 & uVar14;
    if (plVar11 == (long *)0x0) goto LAB_1072ed068;
LAB_1072ed02c:
    *unaff_x20 = *plVar11;
    *plVar11 = (long)unaff_x20;
    if (*unaff_x20 == 0) goto LAB_1072ed0bc;
    uVar12 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar15 & uVar7) == 0) {
      uVar12 = uVar12 & uVar7;
    }
    else if (uVar15 <= uVar12) {
      uVar7 = 0;
      if (uVar15 != 0) {
        uVar7 = uVar12 / uVar15;
      }
      uVar12 = uVar12 - uVar7 * uVar15;
    }
    if (uVar12 == uVar14) goto LAB_1072ed0bc;
  }
  else {
    if (uVar15 <= uVar14) {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar14 / uVar15;
      }
      uVar14 = uVar14 - uVar12 * uVar15;
    }
    if (plVar11 != (long *)0x0) goto LAB_1072ed02c;
LAB_1072ed068:
    plVar8 = unaff_x19 + 2;
    *unaff_x20 = *plVar8;
    *plVar8 = (long)unaff_x20;
    *(long **)(lVar6 + uVar14 * 8) = plVar8;
    if (*unaff_x20 == 0) goto LAB_1072ed0bc;
    uVar12 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar15 & uVar7) == 0) {
      uVar12 = uVar12 & uVar7;
    }
    else if (uVar15 <= uVar12) {
      uVar7 = 0;
      if (uVar15 != 0) {
        uVar7 = uVar12 / uVar15;
      }
      uVar12 = uVar12 - uVar7 * uVar15;
    }
  }
  *(long **)(lVar6 + uVar12 * 8) = unaff_x20;
LAB_1072ed0bc:
  func_0x0001072f25a8();
  return;
}



/* Entry: 1072ed100; end: 1072ed13b;  */

long FUN_1072ed100(long param_1,long param_2)

{
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_1072ed13c(param_1,*(undefined8 *)(param_2 + 0x10),0);
  }
  return param_1;
}



/* Entry: 1072ed13c; end: 1072ed1ef;  */

void FUN_1072ed13c(long param_1)

{
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar1;
  
  func_0x0001072f2644();
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)param_1;
    FUN_1072ed1f0();
    for (; (plVar1 != (long *)0x0 && (unaff_x21 != unaff_x20)); unaff_x21 = (long *)*unaff_x21) {
      FUN_107262f3c(plVar1 + 2,unaff_x21 + 2);
      plVar1 = (long *)*plVar1;
      func_0x0001072f22a4();
      FUN_1072ed220();
    }
    func_0x0001072f22a4();
    func_0x00010726ea94();
  }
  for (; unaff_x21 != unaff_x20; unaff_x21 = (long *)*unaff_x21) {
    FUN_1072ed260(param_1,unaff_x21 + 2);
  }
  return;
}



/* Entry: 1072ed1f0; end: 1072ed21f;  */

long FUN_1072ed1f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 1072ed220; end: 1072ed25f;  */

void FUN_1072ed220(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072f1b80();
  func_0x0001072f2884();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  FUN_1072ed2b0();
  func_0x0001072f1b8c();
  FUN_1072ed3d4();
  return;
}



/* Entry: 1072ed260; end: 1072ed2af;  */

undefined8 FUN_1072ed260(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_1072ed674(auStack_38);
  FUN_1072ed220(param_1,auStack_38[0]);
  auStack_38[0] = 0;
  FUN_107270ee8(auStack_38);
  return param_1;
}



/* Entry: 1072ed2b0; end: 1072ed3d3;  */

long * FUN_1072ed2b0(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined1 in_NG;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  uint uVar9;
  
  func_0x0001072f1d6c();
  uVar7 = *(ulong *)(param_2 + 8);
  func_0x0001072f1c28(*(undefined8 *)(param_2 + 0x18));
  if ((uVar7 == 0) ||
     (func_0x0001072f1c1c(param_1,*(undefined4 *)(param_2 + 0x20),(float)uVar7), (bool)in_NG)) {
    func_0x0001072f16d8(uVar7 << 1);
    FUN_1072ed4a8();
    uVar7 = unaff_x21[1];
  }
  uVar8 = uVar7 - 1;
  bVar2 = false;
  if ((uVar7 & uVar8) == 0) {
    unaff_x24 = uVar8 & unaff_x20;
  }
  else {
    func_0x0001072f21e8();
    if (bVar2) {
      func_0x0001072f220c();
    }
  }
  func_0x0001072f2200();
  if (unaff_x21 != (long *)0x0) {
    uVar9 = 0;
    bVar1 = 0;
    for (; lVar4 = *unaff_x21, lVar4 != 0; unaff_x21 = (long *)*unaff_x21) {
      uVar5 = *(ulong *)(lVar4 + 8);
      if ((uVar7 & uVar8) == 0) {
        uVar6 = uVar5 & uVar8;
      }
      else {
        uVar6 = uVar5;
        if (uVar7 <= uVar5) {
          uVar6 = 0;
          if (uVar7 != 0) {
            uVar6 = uVar5 / uVar7;
          }
          uVar6 = uVar5 - uVar6 * uVar7;
        }
      }
      if (uVar6 != unaff_x24) {
        return unaff_x21;
      }
      if (uVar5 == unaff_x20) {
        uVar3 = (int)lVar4 + 0x10;
        func_0x000104c32db4();
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar9;
      if ((bool)(bVar1 & bVar2)) {
        return unaff_x21;
      }
      uVar9 = uVar9 | bVar2;
      bVar1 = bVar1 | bVar2;
    }
  }
  return unaff_x21;
}



/* Entry: 1072ed3d4; end: 1072ed4a7;  */

void FUN_1072ed3d4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    lVar5 = *param_1;
    *(long **)(lVar5 + uVar2 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar2 = uVar2 & uVar3;
      }
      else if (uVar1 <= uVar2) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = uVar2 - uVar3 * uVar1;
      }
      *(long **)(lVar5 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar4 = uVar4 & uVar3;
      }
      else if (uVar1 <= uVar4) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar4 / uVar1;
        }
        uVar4 = uVar4 - uVar3 * uVar1;
      }
      if (uVar4 != uVar2) {
        *(long **)(*param_1 + uVar4 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1072ed4a8; end: 1072ed543;  */

void FUN_1072ed4a8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long *plVar6;
  long *plVar7;
  long *extraout_x9;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  plVar2 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      func_0x0001072f19c8();
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x0001072f16f0();
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_1072ed4f0;
    }
    return;
  }
LAB_1072ed4f0:
  func_0x0001072f1bcc();
  if (plVar4 == (long *)0x0) {
    FUN_107270cf0(plVar2);
    plVar2[1] = 0;
  }
  else {
    FUN_107270d08(plVar2 + 1);
    func_0x0001072f23e4();
    FUN_107270cf0();
    plVar8 = (long *)0x0;
    plVar2[1] = (long)plVar4;
    lVar5 = *plVar2;
    while (plVar4 != plVar8) {
      func_0x0001072f1f90();
      lVar5 = extraout_x8;
      plVar8 = extraout_x9;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar9 = (long)plVar4 - 1;
      if (((ulong)plVar4 & uVar9) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar9);
      }
      else if (plVar4 <= plVar10) {
        uVar1 = 0;
        if (plVar4 != (long *)0x0) {
          uVar1 = (ulong)plVar10 / (ulong)plVar4;
        }
        plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar4);
      }
      *(long **)(lVar5 + (long)plVar10 * 8) = plVar2 + 2;
      while (plVar11 = plVar8, plVar8 = (long *)*plVar11, plVar8 != (long *)0x0) {
        plVar12 = (long *)plVar8[1];
        if (((ulong)plVar4 & uVar9) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar9);
        }
        else if (plVar4 <= plVar12) {
          uVar1 = 0;
          if (plVar4 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar4;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar4);
        }
        if (plVar12 != plVar10) {
          plVar7 = plVar8;
          if (*(long *)(lVar5 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar12 * 8) = plVar11;
            plVar10 = plVar12;
          }
          else {
            do {
              plVar6 = plVar7;
              plVar7 = (long *)0x0;
              if (*plVar6 == 0) break;
              plVar3 = plVar8 + 2;
              func_0x000104c32db4(plVar3,*plVar6 + 0x10);
              plVar7 = (long *)*plVar6;
            } while (((ulong)plVar3 & 1) != 0);
            *plVar11 = (long)plVar7;
            lVar5 = *plVar2;
            *plVar6 = **(long **)(lVar5 + (long)plVar12 * 8);
            **(undefined8 **)(lVar5 + (long)plVar12 * 8) = plVar8;
            plVar8 = plVar11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072ed544; end: 1072ed673;  */

void FUN_1072ed544(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong extraout_x9;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    FUN_107270cf0(param_1);
    param_1[1] = 0;
  }
  else {
    FUN_107270d08(param_1 + 1);
    func_0x0001072f23e4();
    FUN_107270cf0();
    uVar6 = 0;
    param_1[1] = param_2;
    lVar3 = *param_1;
    while (param_2 != uVar6) {
      func_0x0001072f1f90();
      lVar3 = extraout_x8;
      uVar6 = extraout_x9;
    }
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar6 = plVar8[1];
      uVar7 = param_2 - 1;
      if ((param_2 & uVar7) == 0) {
        uVar6 = uVar6 & uVar7;
      }
      else if (param_2 <= uVar6) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar10 * param_2;
      }
      *(long **)(lVar3 + uVar6 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        if (uVar10 != uVar6) {
          plVar5 = plVar8;
          if (*(long *)(lVar3 + uVar10 * 8) == 0) {
            *(long **)(lVar3 + uVar10 * 8) = plVar9;
            uVar6 = uVar10;
          }
          else {
            do {
              plVar4 = plVar5;
              plVar5 = (long *)0x0;
              if (*plVar4 == 0) break;
              plVar2 = plVar8 + 2;
              func_0x000104c32db4(plVar2,*plVar4 + 0x10);
              plVar5 = (long *)*plVar4;
            } while (((ulong)plVar2 & 1) != 0);
            *plVar9 = (long)plVar5;
            lVar3 = *param_1;
            *plVar4 = **(long **)(lVar3 + uVar10 * 8);
            **(undefined8 **)(lVar3 + uVar10 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072ed674; end: 1072ed6cf;  */

void FUN_1072ed674(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *extraout_x8;
  long unaff_x20;
  
  func_0x0001072f1b80();
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *extraout_x8 = puVar1;
  extraout_x8[1] = param_1 + 0x10;
  extraout_x8[2] = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000104c2fe00(puVar1 + 2);
  lVar2 = unaff_x20 + 0x18;
  FUN_10726364c(lVar2,puVar1 + 2);
  puVar1[1] = lVar2;
  return;
}



/* Entry: 1072ed6d0; end: 1072ed6e7;  */

void FUN_1072ed6d0(long param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined ***pppuStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  long *plStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 auStack_180 [8];
  undefined8 *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 auStack_160 [32];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  pcStack_18 = FUN_1072ed6e8;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x0001072f17a8();
  puStack_1b0 = &UNK_10f406dcf;
  uStack_1a8 = 4;
  lStack_190 = *param_2;
  lStack_188 = param_2[1];
  ppuStack_1a0 = (undefined **)PTR_DAT_1131ad280;
  uStack_198 = 0;
  puStack_178 = auStack_160;
  lStack_168 = 0x100;
  lStack_170 = 0;
  auStack_180 = (undefined1  [8])&PTR_FUN_1109965d0;
  lStack_60 = 0;
  uStack_58 = extraout_x8;
  func_0x0001003a9984(auStack_180,&UNK_10f406dcf,4,0xdc,&ppuStack_1a0,0);
  uVar1 = lStack_170 + lStack_60;
  ppuStack_1c8 = &puStack_1b0;
  ppuStack_1c0 = &PTR_DAT_1131ad280;
  uVar2 = uVar1 == 0x25;
  plStack_1b8 = param_2;
  if (uVar1 < 0x26) {
    pppuVar5 = (undefined ***)(auStack_180 + 2);
    auStack_180 = (undefined1  [8])(CONCAT62(auStack_180._2_6_,(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)pppuVar5 + uVar1) = 0;
    pppuVar3 = &ppuStack_1c8;
    lVar6 = 0x26;
    FUN_1072ed8d0();
    unaff_x19[1] = puStack_178;
    *unaff_x19 = auStack_180;
    unaff_x19[3] = lStack_168;
    unaff_x19[2] = lStack_170;
    unaff_x19[4] = auStack_160[0];
    *(undefined4 *)(unaff_x19 + 5) = 1;
    unaff_x19[6] = 0xffffffffffffffff;
  }
  else {
    uVar2 = uVar1 == 0x51;
    if (uVar1 < 0x52) {
      func_0x000104c302d8(auStack_180,0,0);
      *(short *)auStack_180 = (short)uVar1;
      *(undefined1 *)((long)auStack_180 + uVar1 + 2) = 0;
      pppuVar5 = (undefined ***)((long)auStack_180 + 2);
      lVar6 = 0x52;
      FUN_1072ed8d0(&ppuStack_1c8);
      unaff_x19[1] = puStack_178;
      *unaff_x19 = auStack_180;
      if (puStack_178 != (undefined8 *)0x0) {
        do {
          func_0x0001072f1cd8();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(unaff_x19 + 5) = 2;
      unaff_x19[6] = 0xffffffffffffffff;
      pppuVar3 = (undefined ***)auStack_180;
      func_0x000104c2f784();
    }
    else {
      lStack_170 = *param_2;
      lStack_168 = param_2[1];
      auStack_180 = (undefined1  [8])PTR_DAT_1131ad280;
      puStack_178 = (undefined8 *)0x0;
      lVar6 = 0xdc;
      func_0x0001003a9204(&ppuStack_1a0,&UNK_10f406dcf,4,0xdc,auStack_180);
      pppuVar5 = &ppuStack_1a0;
      FUN_1072625b4();
      pppuVar3 = &ppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  func_0x0001072f1710(uStack_58);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    plVar4 = (long *)auStack_180;
    func_0x000104c2f784();
    func_0x0001072f1abc();
    pcStack_1d8 = FUN_1072ed8d0;
    uStack_210 = *(undefined8 *)plVar4[1];
    uStack_200 = *(undefined8 *)plVar4[2];
    uStack_1f8 = ((undefined8 *)plVar4[2])[1];
    uStack_208 = 0;
    plStack_1f0 = param_2;
    pppuStack_1e8 = pppuVar3;
    ppuStack_1e0 = &puStack_20;
    FUN_107268a34(pppuVar5,lVar6,*(undefined8 *)*plVar4,((undefined8 *)*plVar4)[1],0xdc,&uStack_210)
    ;
    *(undefined1 *)((long)pppuVar5 + lVar6) = 0;
    return;
  }
  return;
}



/* Entry: 1072ed6e8; end: 1072ed8cf;  */

void FUN_1072ed6e8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined ***pppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  long *plStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_170 [8];
  undefined8 *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 auStack_150 [32];
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x0001072f17a8();
  puStack_1a0 = &UNK_10f406dcf;
  uStack_198 = 4;
  lStack_180 = *param_2;
  lStack_178 = param_2[1];
  ppuStack_190 = (undefined **)PTR_DAT_1131ad280;
  uStack_188 = 0;
  puStack_168 = auStack_150;
  lStack_158 = 0x100;
  lStack_160 = 0;
  auStack_170 = (undefined1  [8])&PTR_FUN_1109965d0;
  lStack_50 = 0;
  uStack_48 = extraout_x8;
  func_0x0001003a9984(auStack_170,&UNK_10f406dcf,4,0xdc,&ppuStack_190,0);
  uVar1 = lStack_160 + lStack_50;
  ppuStack_1b8 = &puStack_1a0;
  ppuStack_1b0 = &PTR_DAT_1131ad280;
  uVar2 = uVar1 == 0x25;
  plStack_1a8 = param_2;
  if (uVar1 < 0x26) {
    pppuVar5 = (undefined ***)(auStack_170 + 2);
    auStack_170 = (undefined1  [8])(CONCAT62(auStack_170._2_6_,(short)uVar1) & 0xffffffffff00ffff);
    *(undefined1 *)((long)pppuVar5 + uVar1) = 0;
    pppuVar3 = &ppuStack_1b8;
    lVar6 = 0x26;
    FUN_1072ed8d0();
    unaff_x19[1] = puStack_168;
    *unaff_x19 = auStack_170;
    unaff_x19[3] = lStack_158;
    unaff_x19[2] = lStack_160;
    unaff_x19[4] = auStack_150[0];
    *(undefined4 *)(unaff_x19 + 5) = 1;
    unaff_x19[6] = 0xffffffffffffffff;
  }
  else {
    uVar2 = uVar1 == 0x51;
    if (uVar1 < 0x52) {
      func_0x000104c302d8(auStack_170,0,0);
      *(short *)auStack_170 = (short)uVar1;
      *(undefined1 *)((long)auStack_170 + uVar1 + 2) = 0;
      pppuVar5 = (undefined ***)((long)auStack_170 + 2);
      lVar6 = 0x52;
      FUN_1072ed8d0(&ppuStack_1b8);
      unaff_x19[1] = puStack_168;
      *unaff_x19 = auStack_170;
      if (puStack_168 != (undefined8 *)0x0) {
        do {
          func_0x0001072f1cd8();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(unaff_x19 + 5) = 2;
      unaff_x19[6] = 0xffffffffffffffff;
      pppuVar3 = (undefined ***)auStack_170;
      func_0x000104c2f784();
    }
    else {
      lStack_160 = *param_2;
      lStack_158 = param_2[1];
      auStack_170 = (undefined1  [8])PTR_DAT_1131ad280;
      puStack_168 = (undefined8 *)0x0;
      lVar6 = 0xdc;
      func_0x0001003a9204(&ppuStack_190,&UNK_10f406dcf,4,0xdc,auStack_170);
      pppuVar5 = &ppuStack_190;
      FUN_1072625b4();
      pppuVar3 = &ppuStack_190;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
  }
  func_0x0001072f1710(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    plVar4 = (long *)auStack_170;
    func_0x000104c2f784();
    func_0x0001072f1abc();
    pcStack_1c8 = FUN_1072ed8d0;
    uStack_200 = *(undefined8 *)plVar4[1];
    uStack_1f0 = *(undefined8 *)plVar4[2];
    uStack_1e8 = ((undefined8 *)plVar4[2])[1];
    uStack_1f8 = 0;
    plStack_1e0 = param_2;
    pppuStack_1d8 = pppuVar3;
    puStack_1d0 = &stack0xfffffffffffffff0;
    FUN_107268a34(pppuVar5,lVar6,*(undefined8 *)*plVar4,((undefined8 *)*plVar4)[1],0xdc,&uStack_200)
    ;
    *(undefined1 *)((long)pppuVar5 + lVar6) = 0;
    return;
  }
  return;
}



/* Entry: 1072ed8d0; end: 1072ed9c7;  */

void FUN_1072ed8d0(long *param_1,long param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = *(undefined8 *)param_1[1];
  uStack_30 = *(undefined8 *)param_1[2];
  uStack_28 = ((undefined8 *)param_1[2])[1];
  uStack_38 = 0;
  FUN_107268a34(param_2,param_3,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],0xdc,&uStack_40)
  ;
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 1072ed9c8; end: 1072ed9e7;  */

void FUN_1072ed9c8(void)

{
  FUN_1072ed9e8();
  return;
}



/* Entry: 1072ed9e8; end: 1072eda2b;  */

bool FUN_1072ed9e8(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001072f1ae4();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x38) {
    func_0x0001072f1c40();
    func_0x000104c32db4();
    if ((int)param_1 == 0) break;
  }
  return unaff_x21 == unaff_x19;
}



/* Entry: 1072eda2c; end: 1072eda53;  */

void FUN_1072eda2c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1b80();
  func_0x000107299810();
  *(undefined1 *)(unaff_x20 + 0x18) = *(undefined1 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1072eda54; end: 1072eda77;  */

void FUN_1072eda54(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10726e078();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1072eda78; end: 1072edb23;  */

void FUN_1072eda78(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long unaff_x19;
  long lStack_28;
  
  cVar2 = *(char *)(param_1 + 0x20);
  if (cVar2 == *(char *)(param_2 + 0x20)) {
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (*(int *)(param_1 + 0x18) != -1 || uVar1 != 0xffffffff) {
        bVar3 = uVar1 == 0xffffffff;
        if (bVar3) {
          func_0x0001072753a4(param_1);
          if (!bVar3) {
            func_0x0001072745a8((&PTR_FUN_110996068)[extraout_x8]);
          }
          *(undefined4 *)(unaff_x19 + 0x18) = 0xffffffff;
          return;
        }
        lStack_28 = param_1;
        (*(code *)(&PTR_FUN_11099d5d8)[uVar1])(&lStack_28,param_1);
      }
    }
  }
  else {
    if (cVar2 == '\0') {
      FUN_107270810(param_1,param_2);
      *(undefined1 *)(param_1 + 0x20) = 1;
      return;
    }
    func_0x0001072f27c8();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1072edb24; end: 1072edc2b;  */

void FUN_1072edb24(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) != 0) {
    func_0x0001072f27c8();
    *(undefined4 *)(lVar1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1072edc2c; end: 1072ede2f;  */

void FUN_1072edc2c(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  ulong extraout_x9;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  
  func_0x0001072f1c10();
  func_0x000104c2f1f0();
  FUN_1072ede30(unaff_x19 + 0x38,unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  func_0x0001002a8208(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  func_0x00010014d224(unaff_x19 + 0xc0,unaff_x20 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined1 *)(unaff_x19 + 0xe8) = *(undefined1 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar8;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar3;
  FUN_1072e948c(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  func_0x0001002a8208(unaff_x19 + 0x130,unaff_x20 + 0x130);
  func_0x0001002a8208(unaff_x19 + 0x150,unaff_x20 + 0x150);
  func_0x0001002a8208(unaff_x19 + 0x170,unaff_x20 + 0x170);
  if (*(long *)(unaff_x19 + 0x1a8) != 0) {
    func_0x000107263fc0(unaff_x19 + 400,*(undefined8 *)(unaff_x19 + 0x1a0));
    *(undefined8 *)(unaff_x19 + 0x1a0) = 0;
    lVar5 = *(long *)(unaff_x19 + 0x198);
    for (lVar4 = 0; lVar5 != lVar4; lVar4 = lVar4 + 1) {
      *(undefined8 *)(*(long *)(unaff_x19 + 400) + lVar4 * 8) = 0;
    }
    *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x20 + 400) = 0;
  FUN_107263d68(unaff_x19 + 400,uVar3);
  lVar4 = *(long *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x198) = *(undefined8 *)(unaff_x20 + 0x198);
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  lVar5 = *(long *)(unaff_x20 + 0x1a8);
  *(long *)(unaff_x19 + 0x1a8) = lVar5;
  *(undefined4 *)(unaff_x19 + 0x1b0) = *(undefined4 *)(unaff_x20 + 0x1b0);
  *(long *)(unaff_x19 + 0x1a0) = lVar4;
  if (lVar5 != 0) {
    lVar5 = unaff_x19 + 0x1a0;
    uVar6 = *(ulong *)(lVar4 + 8);
    uVar7 = *(ulong *)(unaff_x19 + 0x198);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar6 = uVar7 - 1 & uVar6;
    }
    else if (uVar7 <= uVar6) {
      func_0x0001072f29b8();
      lVar5 = extraout_x8;
      uVar6 = extraout_x9;
    }
    *(long *)(*(long *)(unaff_x19 + 400) + uVar6 * 8) = lVar5;
    *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
    *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  }
  func_0x0001002a8208(unaff_x19 + 0x1b8,unaff_x20 + 0x1b8);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x1e0);
  *(undefined8 *)(unaff_x19 + 0x1d8) = *(undefined8 *)(unaff_x20 + 0x1d8);
  *(undefined4 *)(unaff_x19 + 0x1e0) = uVar1;
  FUN_107265fcc(unaff_x19 + 0x1e8);
  *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1f0);
  *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x20 + 0x1f8);
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  FUN_107266358(unaff_x19 + 0x200);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x200);
  *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x20 + 0x208);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x20 + 0x210);
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined4 *)(unaff_x19 + 0x218) = *(undefined4 *)(unaff_x20 + 0x218);
  cVar2 = *(char *)(unaff_x19 + 0x240);
  if (cVar2 == *(char *)(unaff_x20 + 0x240)) {
    if (cVar2 != '\0') {
      func_0x000100066230();
      *(undefined1 *)(unaff_x19 + 0x238) = *(undefined1 *)(unaff_x20 + 0x238);
    }
  }
  else if (cVar2 == '\0') {
    func_0x0001072f252c(unaff_x19 + 0x220,unaff_x20 + 0x220);
    *(undefined1 *)(unaff_x19 + 0x238) = *(undefined1 *)(unaff_x20 + 0x238);
    *(undefined1 *)(unaff_x19 + 0x240) = 1;
  }
  else {
    FUN_1072664c8();
  }
  *(undefined2 *)(unaff_x19 + 0x248) = *(undefined2 *)(unaff_x20 + 0x248);
  return;
}



/* Entry: 1072ede30; end: 1072ede9b;  */

void FUN_1072ede30(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1b80();
  func_0x000100066230();
  func_0x000100066230(unaff_x20 + 0x18,unaff_x19 + 0x18);
  func_0x000100066230(unaff_x20 + 0x30,unaff_x19 + 0x30);
  *(undefined2 *)(unaff_x20 + 0x48) = *(undefined2 *)(unaff_x19 + 0x48);
  return;
}



/* Entry: 1072ede9c; end: 1072edea7;  */

void FUN_1072ede9c(long *param_1)

{
  long lVar1;
  
  func_0x0001072f1cb4();
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    func_0x000107270b28(param_1 + 3);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 1072edea8; end: 1072ededf;  */

void FUN_1072edea8(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    func_0x000107270b28(param_1 + 3);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 1072edee0; end: 1072ee027;  */

long * FUN_1072edee0(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long *plVar4;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long *unaff_x19;
  long alStack_60 [3];
  long *plStack_48;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar3 = alStack_60;
  plVar2 = alStack_60;
  func_0x0001072f17a8();
  uStack_28 = extraout_x8;
  FUN_1072ee028(alStack_60);
  uVar1 = unaff_x19 == alStack_60;
  if (!(bool)uVar1) {
    plVar4 = (long *)unaff_x19[3];
    if (plStack_48 == alStack_60) {
      uVar1 = plVar4 == unaff_x19;
      param_2 = unaff_x19;
      if ((bool)uVar1) {
        func_0x0001072f2548();
        (*extraout_x8_01)();
        func_0x0001072f1ccc(plStack_48);
        plStack_48 = (long *)0x0;
        func_0x0001072f2548(unaff_x19[3]);
        (*extraout_x8_02)();
        func_0x0001072f1ccc(unaff_x19[3]);
        unaff_x19[3] = 0;
        plStack_48 = alStack_60;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        func_0x0001072f2548();
        (*extraout_x8_00)();
        func_0x0001072f1ccc(plStack_48);
        plStack_48 = (long *)unaff_x19[3];
      }
      unaff_x19[3] = (long)unaff_x19;
    }
    else {
      uVar1 = plVar4 == unaff_x19;
      if ((bool)uVar1) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        func_0x0001072f1ccc(unaff_x19[3]);
        unaff_x19[3] = (long)plStack_48;
        param_2 = plVar3;
        plStack_48 = alStack_60;
      }
      else {
        unaff_x19[3] = (long)plStack_48;
        plStack_48 = plVar4;
      }
    }
  }
  func_0x000107270b28();
  func_0x0001072f1710(uStack_28);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  plVar3 = (long *)param_2[3];
  if (plVar3 == (long *)0x0) {
    plVar2[3] = 0;
  }
  else if (plVar3 == param_2) {
    func_0x0001072f2104();
  }
  else {
    func_0x0001072f2698();
    (*extraout_x8_03)();
    plVar2[3] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 1072ee028; end: 1072ee06f;  */

long FUN_1072ee028(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001072f2104();
  }
  else {
    func_0x0001072f2698();
    (*extraout_x8)();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 1072ee070; end: 1072ee087;  */

void FUN_1072ee070(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072ee088; end: 1072ee0a3;  */

void FUN_1072ee088(ulong param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  if (param_1 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072f1d28();
  if (unaff_x20 != 0) {
    func_0x0001072f25e4();
    if ((bool)in_ZR) {
      func_0x000107270b28(unaff_x20 + 0x18);
    }
    func_0x0001072f1dd8();
  }
  return;
}



/* Entry: 1072ee0a4; end: 1072ee14f;  */

void FUN_1072ee0a4(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001072f1d28();
  if (unaff_x20 != 0) {
    func_0x0001072f25e4();
    if ((bool)in_ZR) {
      func_0x000107270b28(unaff_x20 + 0x18);
    }
    func_0x0001072f1dd8();
  }
  return;
}



/* Entry: 1072ee150; end: 1072ee177;  */

bool FUN_1072ee150(long param_1)

{
  FUN_1072ef280();
  return param_1 != 0;
}



/* Entry: 1072ee178; end: 1072ee1f7;  */

void FUN_1072ee178(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001072f1b80();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x250) * 0x250;
  FUN_1072ee298(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1072ee1f8; end: 1072ee267;  */

long * FUN_1072ee1f8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001072ee244();
  }
  lVar1 = param_4 + param_3 * 0x250;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x250;
  return param_1;
}



/* Entry: 1072ee268; end: 1072ee297;  */

void FUN_1072ee268(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x6eb3e45306eb3f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x250);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072f1d6c();
  func_0x0001072f2a44();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x250) {
    func_0x0001072f293c(param_4);
    param_4 = lStack_48 + 0x250;
    lStack_48 = param_4;
  }
  func_0x0001072f230c();
  func_0x0001072f1c40();
  FUN_1072ee30c();
  FUN_1072ee33c(auStack_70);
  return;
}



/* Entry: 1072ee298; end: 1072ee30b;  */

void FUN_1072ee298(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072f1d6c();
  func_0x0001072f2a44();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x250) {
    func_0x0001072f293c(param_4);
    param_4 = lStack_38 + 0x250;
    lStack_38 = param_4;
  }
  func_0x0001072f230c();
  func_0x0001072f1c40();
  FUN_1072ee30c();
  FUN_1072ee33c(auStack_60);
  return;
}



/* Entry: 1072ee30c; end: 1072ee33b;  */

void FUN_1072ee30c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x250) {
    FUN_107264bb8();
  }
  return;
}



/* Entry: 1072ee33c; end: 1072ee367;  */

void FUN_1072ee33c(void)

{
  uint extraout_w8;
  
  func_0x0001072f2a84();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072ee368();
  }
  return;
}



/* Entry: 1072ee368; end: 1072ee387;  */

void FUN_1072ee368(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x250;
    FUN_107264bb8();
  }
  return;
}



/* Entry: 1072ee388; end: 1072ee3e3;  */

void FUN_1072ee388(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x250;
    FUN_107264bb8();
  }
  return;
}



/* Entry: 1072ee3e4; end: 1072ee3eb;  */

void FUN_1072ee3e4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1b80(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x250;
    FUN_107264bb8();
  }
  return;
}



/* Entry: 1072ee3ec; end: 1072ee483;  */

void FUN_1072ee3ec(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072f1b80();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x250;
    FUN_107264bb8();
  }
  return;
}



/* Entry: 1072ee484; end: 1072ee513;  */

long FUN_1072ee484(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001072f1c10();
  FUN_1072ee514();
  FUN_1072ee1f8(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x250,unaff_x19 + 2);
  func_0x0001072647dc(lStack_48);
  lStack_48 = lStack_48 + 0x250;
  func_0x0001072f2ab4();
  FUN_1072ee178();
  lVar1 = unaff_x19[1];
  func_0x0001072ee3b8(auStack_58);
  return lVar1;
}



/* Entry: 1072ee514; end: 1072ee56b;  */

ulong * FUN_1072ee514(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  ulong *puVar12;
  ulong *extraout_x8_03;
  ulong *puVar13;
  ulong *unaff_x20;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *unaff_x28;
  undefined1 *in_stack_00000040;
  code *in_stack_00000048;
  ulong auStack_770 [74];
  undefined8 uStack_520;
  ulong auStack_508 [9];
  undefined8 **ppuStack_4c0;
  code *pcStack_4b8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  ulong auStack_270 [74];
  undefined8 uStack_20;
  
  if (param_2 < (ulong *)0x6eb3e45306eb3f) {
    uVar7 = (long)(param_1[2] - *param_1) / 0x250;
    puVar13 = (ulong *)(uVar7 * 2);
    if (puVar13 < param_2 || (long)puVar13 - (long)param_2 == 0) {
      puVar13 = param_2;
    }
    if (0x3759f22983759e < uVar7) {
      puVar13 = (ulong *)0x6eb3e45306eb3e;
    }
    return puVar13;
  }
  func_0x0001072ee16c();
  pcVar10 = FUN_1072ee56c;
  func_0x0001072f29a0();
  puVar13 = param_1;
  puVar18 = param_2;
  puVar8 = param_4;
  in_stack_00000040 = &stack0xfffffffffffffff0;
  in_stack_00000048 = pcVar10;
  func_0x0001072f1810();
  uStack_20 = extraout_x8;
  do {
    puVar16 = param_2 + -0x4a;
    puStack_278 = param_2 + -0x94;
    puStack_280 = param_2 + -0xde;
LAB_1072ee5b8:
    uVar11 = (long)param_2 - (long)param_1;
    uVar7 = (long)uVar11 / 0x250;
    uVar3 = uVar7 == 5;
    puVar12 = param_1;
    switch(uVar7) {
    case 0:
    case 1:
      goto LAB_1072ee964;
    case 2:
      func_0x0001072f1ca8();
      FUN_1072eefa4();
      if ((int)puVar13 != 0) {
        func_0x0001072f1e14();
        FUN_1072ef0c4();
      }
      goto LAB_1072ee964;
    case 3:
      puVar18 = param_1 + 0x4a;
      puVar13 = param_1;
      func_0x0001072f2030(param_1,puVar18,puVar16);
      goto LAB_1072ee964;
    case 4:
      puVar18 = param_1 + 0x4a;
      puVar13 = param_1;
      puVar8 = puVar16;
      func_0x0001072eeaa4(param_1,puVar18,param_1 + 0x94,puVar16,param_3);
      goto LAB_1072ee964;
    case 5:
      puVar18 = param_1 + 0x4a;
      puVar8 = param_1 + 0xde;
      puVar13 = param_1;
      func_0x0001072eeb0c(param_1,puVar18,param_1 + 0x94,puVar8,puVar16,param_3);
      goto LAB_1072ee964;
    }
    uVar3 = uVar11 == 0x377f;
    if ((long)uVar11 < 0x3780) {
      uVar3 = param_1 == param_2;
      if ((param_5 & 1) == 0) {
        if (!(bool)uVar3) {
          while( true ) {
            unaff_x20 = param_1;
            param_1 = unaff_x20 + 0x4a;
            uVar3 = 1;
            if (param_1 == param_2) break;
            func_0x0001072f1c40();
            FUN_1072eefa4();
            if ((int)puVar13 != 0) {
              func_0x0001072f1c90();
              do {
                puVar13 = unaff_x20;
                func_0x0001072f2890();
                uVar7 = 0;
                func_0x0001072f1d04();
                unaff_x20 = puVar13 + -0x4a;
              } while ((uVar7 & 1) != 0);
              puVar18 = auStack_270;
              FUN_1072edc2c();
              func_0x0001072f1ee8();
            }
          }
        }
        break;
      }
      if ((bool)uVar3) break;
      param_4 = (ulong *)0x0;
      puVar18 = param_1;
      goto LAB_1072ee8e0;
    }
    if (param_4 == (ulong *)0x0) {
      puVar13 = param_1;
      puVar18 = param_2;
      FUN_1072eeb90(param_1,param_2,param_2);
      puVar8 = param_3;
      break;
    }
    if (uVar11 < 0x12801) {
      func_0x0001072f22b0();
      func_0x0001072f2030();
    }
    else {
      func_0x0001072f1c40();
      func_0x0001072f2030();
      func_0x0001072f2030(param_1 + 0x4a,param_1 + (uVar7 >> 1) * 0x4a + -0x4a,puStack_278);
      puVar18 = param_1 + (uVar7 >> 1) * 0x4a + 0x4a;
      func_0x0001072f2030(param_1 + 0x94,puVar18,puStack_280);
      func_0x0001072f2af8();
      func_0x0001072f2030();
      func_0x0001072f1c40();
      FUN_1072ef0c4();
    }
    param_4 = (ulong *)((long)param_4 + -1);
    if ((param_5 & 1) == 0) {
      puVar13 = param_1 + -0x4a;
      func_0x0001072f1de0();
      if (((ulong)puVar13 & 1) != 0) goto LAB_1072ee660;
      func_0x0001072f1c90();
      puVar13 = auStack_270;
      func_0x0001072f1f20();
      if (((ulong)puVar13 & 1) == 0) {
        do {
          puVar12 = puVar12 + 0x4a;
          if (param_2 <= puVar12) break;
          func_0x0001072f1ffc();
        } while ((int)puVar13 == 0);
      }
      else {
        do {
          puVar12 = puVar12 + 0x4a;
          func_0x0001072f1ffc();
        } while (((ulong)puVar13 & 1) == 0);
      }
      puVar9 = param_2;
      if (puVar12 < param_2) {
        do {
          puVar9 = puVar9 + -0x4a;
          puVar13 = auStack_270;
          func_0x0001072f251c();
        } while (((ulong)puVar13 & 1) != 0);
      }
      while (puVar12 < puVar9) {
        func_0x0001072f2650();
        FUN_1072ef0c4();
        do {
          puVar12 = puVar12 + 0x4a;
          func_0x0001072f1ffc();
        } while ((int)puVar13 == 0);
        do {
          puVar9 = puVar9 + -0x4a;
          puVar13 = auStack_270;
          func_0x0001072f251c();
        } while (((ulong)puVar13 & 1) != 0);
      }
      unaff_x20 = puVar12 + -0x4a;
      if (param_1 != unaff_x20) {
        func_0x0001072f1c40();
        FUN_1072edc2c();
      }
      func_0x0001072f2798();
      func_0x0001072f1ee8();
      param_1 = puVar12;
      goto LAB_1072ee834;
    }
LAB_1072ee660:
    func_0x0001072f1c90();
    lVar14 = 0;
    do {
      puVar13 = (ulong *)((long)param_1 + lVar14 + 0x250);
      puVar18 = auStack_270;
      FUN_1072eefa4(puVar13,puVar18,*param_3);
      lVar14 = lVar14 + 0x250;
    } while (((ulong)puVar13 & 1) != 0);
    puVar9 = (ulong *)((long)param_1 + lVar14);
    puVar15 = param_2;
    puVar12 = puVar9;
    if (lVar14 == 0x250) {
      do {
        unaff_x28 = puVar15;
        if (puVar15 <= puVar9) break;
        puVar15 = puVar15 + -0x4a;
        puVar18 = auStack_270;
        func_0x0001072f2488();
        unaff_x28 = puVar15;
      } while (((ulong)puVar13 & 1) == 0);
    }
    else {
      do {
        puVar15 = puVar15 + -0x4a;
        puVar18 = auStack_270;
        func_0x0001072f2488();
        unaff_x28 = puVar15;
      } while ((int)puVar13 == 0);
    }
    while (puVar12 < puVar15) {
      func_0x0001072f2af8();
      FUN_1072ef0c4();
      do {
        puVar12 = puVar12 + 0x4a;
        puVar13 = puVar12;
        FUN_1072eefa4(puVar12,auStack_270,*param_3);
      } while (((ulong)puVar13 & 1) != 0);
      do {
        puVar15 = puVar15 + -0x4a;
        puVar18 = auStack_270;
        func_0x0001072f27e4();
      } while (((ulong)puVar13 & 1) == 0);
    }
    unaff_x20 = puVar12 + -0x4a;
    if (param_1 != unaff_x20) {
      func_0x0001072f1c40();
      FUN_1072edc2c();
    }
    func_0x0001072f2798();
    func_0x0001072f1ee8();
    uVar3 = puVar9 == unaff_x28;
    if (puVar9 < unaff_x28) goto LAB_1072ee758;
    func_0x0001072f1c40();
    FUN_1072eedd0();
    func_0x0001072f2ac0();
    FUN_1072eedd0();
    if ((int)puVar13 == 0) goto code_r0x0001072ee754;
    param_2 = unaff_x20;
  } while (((ulong)unaff_x28 & 1) == 0);
LAB_1072ee964:
  func_0x0001072f1710(uStack_20);
  if ((bool)uVar3) {
    return puVar13;
  }
  ___stack_chk_fail();
  func_0x0001072f1ee8();
  func_0x0001072f1abc();
  uStack_288 = 0x1072eea18;
  puVar9 = puVar8;
  puStack_2c0 = param_2;
  puStack_2b8 = param_4;
  puStack_2b0 = puVar16;
  puStack_2a8 = param_1;
  puStack_2a0 = unaff_x20;
  puStack_298 = puVar13;
  puStack_290 = &stack0x00000040;
  func_0x0001072f1ae4();
  uVar7 = *puVar9;
  func_0x0001072f1de0();
  puVar13 = puVar18;
  func_0x0001072f1a10();
  if (((ulong)puVar18 & 1) == 0) {
    if ((int)puVar13 == 0) {
      return puVar13;
    }
    func_0x0001072f1bcc();
    FUN_1072ef0c4();
    uVar7 = *puVar8;
    func_0x0001072f1d0c();
    FUN_1072eefa4();
    if ((int)puVar13 == 0) {
      return puVar13;
    }
    func_0x0001072f1c34();
  }
  else if ((int)puVar13 == 0) {
    func_0x0001072f1c34();
    FUN_1072ef0c4();
    func_0x0001072f1a10();
    if ((int)puVar13 == 0) {
      return puVar13;
    }
  }
  puVar15 = puStack_2a0;
  puVar16 = puStack_2a8;
  puVar8 = puStack_2b8;
  puVar18 = puStack_2c0;
  puStack_2b0 = unaff_x28;
  puStack_2a8 = puVar12;
  func_0x0001072f1b80();
  func_0x0001072f1810();
  puVar12 = puVar15;
  puStack_2b8 = (ulong *)extraout_x8_00;
  func_0x0001072647dc(auStack_508);
  func_0x0001072f1b8c();
  FUN_1072edc2c();
  func_0x0001072f2ab4();
  FUN_1072edc2c();
  puVar13 = auStack_508;
  FUN_107264bb8();
  func_0x0001072f1710(puStack_2b8);
  if ((bool)uVar3) {
    return puVar13;
  }
  ___stack_chk_fail();
  pcVar10 = FUN_1072ef12c;
  func_0x0001072f29a0();
  puVar5 = auStack_770;
  puVar6 = auStack_770;
  ppuStack_4c0 = &puStack_290;
  pcStack_4b8 = pcVar10;
  func_0x0001072f1810();
  uVar2 = 1 < uVar7;
  uVar3 = uVar7 - 2 == 0;
  puVar4 = puVar13;
  uStack_520 = extraout_x8_01;
  if (1 < (long)uVar7) {
    uVar11 = ((long)puVar9 - (long)puVar13) / 0x250;
    uVar19 = uVar7 - 2 >> 1;
    uVar2 = uVar11 <= uVar19;
    uVar3 = uVar19 == uVar11;
    puVar16 = puVar13;
    puVar8 = puVar9;
    if ((long)uVar11 <= (long)uVar19) {
      uVar1 = uVar11 << 1 | 1;
      puVar15 = puVar13 + uVar1 * 0x4a;
      uVar11 = uVar11 * 2 + 2;
      uVar2 = uVar7 <= uVar11;
      uVar3 = uVar11 == uVar7;
      puVar17 = puVar15;
      uVar20 = uVar1;
      if ((long)uVar11 < (long)uVar7) {
        puVar18 = puVar15 + 0x4a;
        puVar4 = puVar15;
        FUN_1072eefa4(puVar15,puVar18,*puVar12);
        uVar3 = (int)puVar4 == 0;
        uVar2 = true;
        puVar17 = puVar18;
        uVar20 = uVar11;
        if ((bool)uVar3) {
          puVar17 = puVar15;
          uVar20 = uVar1;
        }
      }
      puVar4 = puVar17;
      func_0x0001072f1e54();
      puVar15 = puVar12;
      if (((ulong)puVar4 & 1) == 0) {
        func_0x0001072647dc(auStack_770,puVar9);
        do {
          puVar18 = puVar17;
          func_0x0001072f2070();
          FUN_1072edc2c();
          uVar2 = uVar20 <= uVar19;
          uVar3 = uVar19 == uVar20;
          puVar8 = puVar9;
          if ((long)uVar19 < (long)uVar20) break;
          uVar1 = uVar20 << 1 | 1;
          puVar8 = puVar13 + uVar1 * 0x4a;
          uVar11 = uVar20 * 2 + 2;
          uVar2 = uVar7 <= uVar11;
          uVar3 = uVar11 == uVar7;
          puVar17 = puVar8;
          uVar20 = uVar1;
          if ((long)uVar11 < (long)uVar7) {
            puVar5 = puVar8;
            func_0x0001072f1e54();
            uVar3 = (int)puVar5 == 0;
            uVar2 = true;
            puVar17 = puVar8 + 0x4a;
            uVar20 = uVar11;
            if ((bool)uVar3) {
              puVar17 = puVar8;
              uVar20 = uVar1;
            }
          }
          func_0x0001072f23ac();
          puVar9 = puVar18;
          puVar8 = puVar18;
        } while ((int)puVar5 == 0);
        FUN_1072edc2c(puVar18,auStack_770);
        FUN_107264bb8();
        puVar4 = puVar6;
      }
    }
  }
  func_0x0001072f1710(uStack_520);
  if ((bool)uVar3) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001072f1e30();
  FUN_107264bb8();
  func_0x0001072f1abc();
  puVar13 = (ulong *)puVar4[1];
  if ((puVar13 != (ulong *)0x0) && (func_0x0001072f2318(), extraout_x8_02 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)uVar3) {
      puVar18 = (ulong *)((ulong)puVar15 & (ulong)puVar8);
    }
    else {
      func_0x0001072f21e8();
      if ((bool)uVar2) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (puVar16 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    do {
      while( true ) {
        puVar16 = (ulong *)*puVar16;
        if (puVar16 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        puVar12 = (ulong *)puVar16[1];
        if (puVar15 != puVar12) break;
        func_0x0001072f1924();
        if ((int)puVar4 != 0) {
          return puVar16;
        }
      }
      if (((ulong)puVar13 & (ulong)puVar8) == 0) {
        puVar12 = (ulong *)((ulong)puVar12 & (ulong)puVar8);
      }
      else if (puVar13 <= puVar12) {
        func_0x0001072f21d0();
        puVar12 = extraout_x8_03;
      }
    } while (puVar12 == puVar18);
  }
  return (ulong *)0x0;
LAB_1072ee8e0:
  puVar16 = puVar18 + 0x4a;
  uVar3 = 1;
  if (puVar16 == param_2) goto LAB_1072ee964;
  func_0x0001072f23ac();
  if ((int)puVar13 != 0) {
    func_0x0001072f293c(auStack_270);
    puVar18 = param_4;
    do {
      unaff_x20 = (ulong *)((long)param_1 + (long)puVar18);
      func_0x0001072f2890();
      puVar13 = param_1;
      if (puVar18 == (ulong *)0x0) goto LAB_1072ee938;
      puVar13 = auStack_270;
      FUN_1072eefa4(puVar13,unaff_x20 + -0x4a,*param_3);
      puVar18 = puVar18 + -0x4a;
    } while (((ulong)puVar13 & 1) != 0);
    puVar13 = (ulong *)((long)param_1 + (long)puVar18 + 0x250);
LAB_1072ee938:
    FUN_1072edc2c(puVar13,auStack_270);
    func_0x0001072f1ee8();
  }
  param_4 = param_4 + 0x4a;
  puVar18 = puVar16;
  goto LAB_1072ee8e0;
code_r0x0001072ee754:
  param_1 = puVar12;
  if (((ulong)unaff_x28 & 1) == 0) {
LAB_1072ee758:
    func_0x0001072f1c40();
    puVar8 = param_4;
    FUN_1072ee56c();
    param_1 = puVar12;
LAB_1072ee834:
    param_5 = 0;
  }
  goto LAB_1072ee5b8;
}



/* Entry: 1072ee56c; end: 1072eea17;  */

ulong * FUN_1072ee56c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  ulong *puVar12;
  ulong *extraout_x8_03;
  ulong *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *unaff_x28;
  undefined8 in_stack_00000050;
  ulong auStack_760 [74];
  undefined8 uStack_510;
  ulong auStack_4f8 [9];
  undefined8 **ppuStack_4b0;
  code *pcStack_4a8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_298;
  ulong *puStack_290;
  ulong *puStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  ulong auStack_260 [74];
  undefined8 uStack_10;
  
  func_0x0001072f29a0();
  puVar17 = param_1;
  puVar18 = param_2;
  puVar8 = param_4;
  func_0x0001072f1810();
  uStack_10 = extraout_x8;
  do {
    puVar15 = param_2 + -0x4a;
    puStack_268 = param_2 + -0x94;
    puStack_270 = param_2 + -0xde;
LAB_1072ee5b8:
    uVar11 = (long)param_2 - (long)param_1;
    uVar7 = (long)uVar11 / 0x250;
    uVar3 = uVar7 == 5;
    puVar12 = param_1;
    switch(uVar7) {
    case 0:
    case 1:
      goto LAB_1072ee964;
    case 2:
      func_0x0001072f1ca8();
      FUN_1072eefa4();
      if ((int)puVar17 != 0) {
        func_0x0001072f1e14();
        FUN_1072ef0c4();
      }
      goto LAB_1072ee964;
    case 3:
      puVar18 = param_1 + 0x4a;
      puVar17 = param_1;
      func_0x0001072f2030(param_1,puVar18,puVar15);
      goto LAB_1072ee964;
    case 4:
      puVar18 = param_1 + 0x4a;
      puVar17 = param_1;
      puVar8 = puVar15;
      func_0x0001072eeaa4(param_1,puVar18,param_1 + 0x94,puVar15,param_3);
      goto LAB_1072ee964;
    case 5:
      puVar18 = param_1 + 0x4a;
      puVar8 = param_1 + 0xde;
      puVar17 = param_1;
      func_0x0001072eeb0c(param_1,puVar18,param_1 + 0x94,puVar8,puVar15,param_3);
      goto LAB_1072ee964;
    }
    uVar3 = uVar11 == 0x377f;
    if ((long)uVar11 < 0x3780) {
      uVar3 = param_1 == param_2;
      if ((param_5 & 1) == 0) {
        if (!(bool)uVar3) {
          while( true ) {
            unaff_x20 = param_1;
            param_1 = unaff_x20 + 0x4a;
            uVar3 = 1;
            if (param_1 == param_2) break;
            func_0x0001072f1c40();
            FUN_1072eefa4();
            if ((int)puVar17 != 0) {
              func_0x0001072f1c90();
              do {
                puVar17 = unaff_x20;
                func_0x0001072f2890();
                uVar7 = 0;
                func_0x0001072f1d04();
                unaff_x20 = puVar17 + -0x4a;
              } while ((uVar7 & 1) != 0);
              puVar18 = auStack_260;
              FUN_1072edc2c();
              func_0x0001072f1ee8();
            }
          }
        }
        break;
      }
      if ((bool)uVar3) break;
      param_4 = (ulong *)0x0;
      puVar18 = param_1;
      goto LAB_1072ee8e0;
    }
    if (param_4 == (ulong *)0x0) {
      puVar17 = param_1;
      puVar18 = param_2;
      FUN_1072eeb90(param_1,param_2,param_2);
      puVar8 = param_3;
      break;
    }
    if (uVar11 < 0x12801) {
      func_0x0001072f22b0();
      func_0x0001072f2030();
    }
    else {
      func_0x0001072f1c40();
      func_0x0001072f2030();
      func_0x0001072f2030(param_1 + 0x4a,param_1 + (uVar7 >> 1) * 0x4a + -0x4a,puStack_268);
      puVar18 = param_1 + (uVar7 >> 1) * 0x4a + 0x4a;
      func_0x0001072f2030(param_1 + 0x94,puVar18,puStack_270);
      func_0x0001072f2af8();
      func_0x0001072f2030();
      func_0x0001072f1c40();
      FUN_1072ef0c4();
    }
    param_4 = (ulong *)((long)param_4 + -1);
    if ((param_5 & 1) == 0) {
      puVar17 = param_1 + -0x4a;
      func_0x0001072f1de0();
      if (((ulong)puVar17 & 1) != 0) goto LAB_1072ee660;
      func_0x0001072f1c90();
      puVar17 = auStack_260;
      func_0x0001072f1f20();
      if (((ulong)puVar17 & 1) == 0) {
        do {
          puVar12 = puVar12 + 0x4a;
          if (param_2 <= puVar12) break;
          func_0x0001072f1ffc();
        } while ((int)puVar17 == 0);
      }
      else {
        do {
          puVar12 = puVar12 + 0x4a;
          func_0x0001072f1ffc();
        } while (((ulong)puVar17 & 1) == 0);
      }
      puVar9 = param_2;
      if (puVar12 < param_2) {
        do {
          puVar9 = puVar9 + -0x4a;
          puVar17 = auStack_260;
          func_0x0001072f251c();
        } while (((ulong)puVar17 & 1) != 0);
      }
      while (puVar12 < puVar9) {
        func_0x0001072f2650();
        FUN_1072ef0c4();
        do {
          puVar12 = puVar12 + 0x4a;
          func_0x0001072f1ffc();
        } while ((int)puVar17 == 0);
        do {
          puVar9 = puVar9 + -0x4a;
          puVar17 = auStack_260;
          func_0x0001072f251c();
        } while (((ulong)puVar17 & 1) != 0);
      }
      unaff_x20 = puVar12 + -0x4a;
      if (param_1 != unaff_x20) {
        func_0x0001072f1c40();
        FUN_1072edc2c();
      }
      func_0x0001072f2798();
      func_0x0001072f1ee8();
      param_1 = puVar12;
      goto LAB_1072ee834;
    }
LAB_1072ee660:
    func_0x0001072f1c90();
    lVar13 = 0;
    do {
      puVar17 = (ulong *)((long)param_1 + lVar13 + 0x250);
      puVar18 = auStack_260;
      FUN_1072eefa4(puVar17,puVar18,*param_3);
      lVar13 = lVar13 + 0x250;
    } while (((ulong)puVar17 & 1) != 0);
    puVar9 = (ulong *)((long)param_1 + lVar13);
    puVar14 = param_2;
    puVar12 = puVar9;
    if (lVar13 == 0x250) {
      do {
        unaff_x28 = puVar14;
        if (puVar14 <= puVar9) break;
        puVar14 = puVar14 + -0x4a;
        puVar18 = auStack_260;
        func_0x0001072f2488();
        unaff_x28 = puVar14;
      } while (((ulong)puVar17 & 1) == 0);
    }
    else {
      do {
        puVar14 = puVar14 + -0x4a;
        puVar18 = auStack_260;
        func_0x0001072f2488();
        unaff_x28 = puVar14;
      } while ((int)puVar17 == 0);
    }
    while (puVar12 < puVar14) {
      func_0x0001072f2af8();
      FUN_1072ef0c4();
      do {
        puVar12 = puVar12 + 0x4a;
        puVar17 = puVar12;
        FUN_1072eefa4(puVar12,auStack_260,*param_3);
      } while (((ulong)puVar17 & 1) != 0);
      do {
        puVar14 = puVar14 + -0x4a;
        puVar18 = auStack_260;
        func_0x0001072f27e4();
      } while (((ulong)puVar17 & 1) == 0);
    }
    unaff_x20 = puVar12 + -0x4a;
    if (param_1 != unaff_x20) {
      func_0x0001072f1c40();
      FUN_1072edc2c();
    }
    func_0x0001072f2798();
    func_0x0001072f1ee8();
    uVar3 = puVar9 == unaff_x28;
    if (puVar9 < unaff_x28) goto LAB_1072ee758;
    func_0x0001072f1c40();
    FUN_1072eedd0();
    func_0x0001072f2ac0();
    FUN_1072eedd0();
    if ((int)puVar17 == 0) goto code_r0x0001072ee754;
    param_2 = unaff_x20;
  } while (((ulong)unaff_x28 & 1) == 0);
LAB_1072ee964:
  func_0x0001072f1710(uStack_10);
  if ((bool)uVar3) {
    return puVar17;
  }
  ___stack_chk_fail();
  func_0x0001072f1ee8();
  func_0x0001072f1abc();
  uStack_278 = 0x1072eea18;
  puVar9 = puVar8;
  puStack_2b0 = param_2;
  puStack_2a8 = param_4;
  puStack_2a0 = puVar15;
  puStack_298 = param_1;
  puStack_290 = unaff_x20;
  puStack_288 = puVar17;
  puStack_280 = &stack0x00000050;
  func_0x0001072f1ae4();
  uVar7 = *puVar9;
  func_0x0001072f1de0();
  puVar17 = puVar18;
  func_0x0001072f1a10();
  if (((ulong)puVar18 & 1) == 0) {
    if ((int)puVar17 == 0) {
      return puVar17;
    }
    func_0x0001072f1bcc();
    FUN_1072ef0c4();
    uVar7 = *puVar8;
    func_0x0001072f1d0c();
    FUN_1072eefa4();
    if ((int)puVar17 == 0) {
      return puVar17;
    }
    func_0x0001072f1c34();
  }
  else if ((int)puVar17 == 0) {
    func_0x0001072f1c34();
    FUN_1072ef0c4();
    func_0x0001072f1a10();
    if ((int)puVar17 == 0) {
      return puVar17;
    }
  }
  puVar14 = puStack_290;
  puVar15 = puStack_298;
  puVar8 = puStack_2a8;
  puVar18 = puStack_2b0;
  puStack_2a0 = unaff_x28;
  puStack_298 = puVar12;
  func_0x0001072f1b80();
  func_0x0001072f1810();
  puVar12 = puVar14;
  puStack_2a8 = (ulong *)extraout_x8_00;
  func_0x0001072647dc(auStack_4f8);
  func_0x0001072f1b8c();
  FUN_1072edc2c();
  func_0x0001072f2ab4();
  FUN_1072edc2c();
  puVar17 = auStack_4f8;
  FUN_107264bb8();
  func_0x0001072f1710(puStack_2a8);
  if ((bool)uVar3) {
    return puVar17;
  }
  ___stack_chk_fail();
  pcVar10 = FUN_1072ef12c;
  func_0x0001072f29a0();
  puVar5 = auStack_760;
  puVar6 = auStack_760;
  ppuStack_4b0 = &puStack_280;
  pcStack_4a8 = pcVar10;
  func_0x0001072f1810();
  uVar2 = 1 < uVar7;
  uVar3 = uVar7 - 2 == 0;
  puVar4 = puVar17;
  uStack_510 = extraout_x8_01;
  if (1 < (long)uVar7) {
    uVar11 = ((long)puVar9 - (long)puVar17) / 0x250;
    uVar19 = uVar7 - 2 >> 1;
    uVar2 = uVar11 <= uVar19;
    uVar3 = uVar19 == uVar11;
    puVar15 = puVar17;
    puVar8 = puVar9;
    if ((long)uVar11 <= (long)uVar19) {
      uVar1 = uVar11 << 1 | 1;
      puVar14 = puVar17 + uVar1 * 0x4a;
      uVar11 = uVar11 * 2 + 2;
      uVar2 = uVar7 <= uVar11;
      uVar3 = uVar11 == uVar7;
      puVar16 = puVar14;
      uVar20 = uVar1;
      if ((long)uVar11 < (long)uVar7) {
        puVar18 = puVar14 + 0x4a;
        puVar4 = puVar14;
        FUN_1072eefa4(puVar14,puVar18,*puVar12);
        uVar3 = (int)puVar4 == 0;
        uVar2 = true;
        puVar16 = puVar18;
        uVar20 = uVar11;
        if ((bool)uVar3) {
          puVar16 = puVar14;
          uVar20 = uVar1;
        }
      }
      puVar4 = puVar16;
      func_0x0001072f1e54();
      puVar14 = puVar12;
      if (((ulong)puVar4 & 1) == 0) {
        func_0x0001072647dc(auStack_760,puVar9);
        do {
          puVar18 = puVar16;
          func_0x0001072f2070();
          FUN_1072edc2c();
          uVar2 = uVar20 <= uVar19;
          uVar3 = uVar19 == uVar20;
          puVar8 = puVar9;
          if ((long)uVar19 < (long)uVar20) break;
          uVar1 = uVar20 << 1 | 1;
          puVar8 = puVar17 + uVar1 * 0x4a;
          uVar11 = uVar20 * 2 + 2;
          uVar2 = uVar7 <= uVar11;
          uVar3 = uVar11 == uVar7;
          puVar16 = puVar8;
          uVar20 = uVar1;
          if ((long)uVar11 < (long)uVar7) {
            puVar5 = puVar8;
            func_0x0001072f1e54();
            uVar3 = (int)puVar5 == 0;
            uVar2 = true;
            puVar16 = puVar8 + 0x4a;
            uVar20 = uVar11;
            if ((bool)uVar3) {
              puVar16 = puVar8;
              uVar20 = uVar1;
            }
          }
          func_0x0001072f23ac();
          puVar9 = puVar18;
          puVar8 = puVar18;
        } while ((int)puVar5 == 0);
        FUN_1072edc2c(puVar18,auStack_760);
        FUN_107264bb8();
        puVar4 = puVar6;
      }
    }
  }
  func_0x0001072f1710(uStack_510);
  if ((bool)uVar3) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001072f1e30();
  FUN_107264bb8();
  func_0x0001072f1abc();
  puVar17 = (ulong *)puVar4[1];
  if ((puVar17 != (ulong *)0x0) && (func_0x0001072f2318(), extraout_x8_02 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)uVar3) {
      puVar18 = (ulong *)((ulong)puVar14 & (ulong)puVar8);
    }
    else {
      func_0x0001072f21e8();
      if ((bool)uVar2) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (puVar15 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    do {
      while( true ) {
        puVar15 = (ulong *)*puVar15;
        if (puVar15 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        puVar12 = (ulong *)puVar15[1];
        if (puVar14 != puVar12) break;
        func_0x0001072f1924();
        if ((int)puVar4 != 0) {
          return puVar15;
        }
      }
      if (((ulong)puVar17 & (ulong)puVar8) == 0) {
        puVar12 = (ulong *)((ulong)puVar12 & (ulong)puVar8);
      }
      else if (puVar17 <= puVar12) {
        func_0x0001072f21d0();
        puVar12 = extraout_x8_03;
      }
    } while (puVar12 == puVar18);
  }
  return (ulong *)0x0;
LAB_1072ee8e0:
  puVar15 = puVar18 + 0x4a;
  uVar3 = 1;
  if (puVar15 == param_2) goto LAB_1072ee964;
  func_0x0001072f23ac();
  if ((int)puVar17 != 0) {
    func_0x0001072f293c(auStack_260);
    puVar18 = param_4;
    do {
      unaff_x20 = (ulong *)((long)param_1 + (long)puVar18);
      func_0x0001072f2890();
      puVar17 = param_1;
      if (puVar18 == (ulong *)0x0) goto LAB_1072ee938;
      puVar17 = auStack_260;
      FUN_1072eefa4(puVar17,unaff_x20 + -0x4a,*param_3);
      puVar18 = puVar18 + -0x4a;
    } while (((ulong)puVar17 & 1) != 0);
    puVar17 = (ulong *)((long)param_1 + (long)puVar18 + 0x250);
LAB_1072ee938:
    FUN_1072edc2c(puVar17,auStack_260);
    func_0x0001072f1ee8();
  }
  param_4 = param_4 + 0x4a;
  puVar18 = puVar15;
  goto LAB_1072ee8e0;
code_r0x0001072ee754:
  param_1 = puVar12;
  if (((ulong)unaff_x28 & 1) == 0) {
LAB_1072ee758:
    func_0x0001072f1c40();
    puVar8 = param_4;
    FUN_1072ee56c();
    param_1 = puVar12;
LAB_1072ee834:
    param_5 = 0;
  }
  goto LAB_1072ee5b8;
}



/* Entry: 1072eea18; end: 1072eeb8f;  */

ulong * FUN_1072eea18(undefined8 param_1,ulong *param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong *puVar12;
  ulong *extraout_x8_02;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar13;
  ulong *unaff_x23;
  ulong *unaff_x24;
  ulong uVar14;
  ulong uVar15;
  ulong auStack_4f0 [74];
  undefined8 uStack_2a0;
  ulong auStack_288 [9];
  undefined1 *puStack_240;
  code *pcStack_238;
  
  puVar12 = param_4;
  func_0x0001072f1ae4();
  uVar10 = *puVar12;
  func_0x0001072f1de0();
  puVar13 = param_2;
  func_0x0001072f1a10();
  if (((ulong)param_2 & 1) == 0) {
    if ((int)puVar13 == 0) {
      return puVar13;
    }
    func_0x0001072f1bcc();
    FUN_1072ef0c4();
    uVar10 = *param_4;
    func_0x0001072f1d0c();
    FUN_1072eefa4();
    if ((int)puVar13 == 0) {
      return puVar13;
    }
    func_0x0001072f1c34();
  }
  else if ((int)puVar13 == 0) {
    func_0x0001072f1c34();
    FUN_1072ef0c4();
    func_0x0001072f1a10();
    if ((int)puVar13 == 0) {
      return puVar13;
    }
  }
  func_0x0001072f1b80();
  func_0x0001072f1810();
  puVar9 = unaff_x20;
  func_0x0001072647dc(auStack_288);
  func_0x0001072f1b8c();
  FUN_1072edc2c();
  func_0x0001072f2ab4();
  FUN_1072edc2c();
  puVar13 = auStack_288;
  FUN_107264bb8();
  func_0x0001072f1710(extraout_x8);
  if ((bool)in_ZR) {
    return puVar13;
  }
  ___stack_chk_fail();
  pcVar11 = FUN_1072ef12c;
  func_0x0001072f29a0();
  puVar7 = auStack_4f0;
  puVar8 = auStack_4f0;
  puStack_240 = &stack0xfffffffffffffff0;
  pcStack_238 = pcVar11;
  func_0x0001072f1810();
  uVar3 = 1 < uVar10;
  uVar4 = uVar10 - 2 == 0;
  puVar6 = puVar13;
  uStack_2a0 = extraout_x8_00;
  if (1 < (long)uVar10) {
    uVar2 = ((long)puVar12 - (long)puVar13) / 0x250;
    uVar14 = uVar10 - 2 >> 1;
    uVar3 = uVar2 <= uVar14;
    uVar4 = uVar14 == uVar2;
    unaff_x21 = puVar13;
    unaff_x23 = puVar12;
    if ((long)uVar2 <= (long)uVar14) {
      uVar1 = uVar2 << 1 | 1;
      puVar6 = puVar13 + uVar1 * 0x4a;
      uVar2 = uVar2 * 2 + 2;
      uVar3 = uVar10 <= uVar2;
      uVar4 = uVar2 == uVar10;
      puVar5 = puVar6;
      uVar15 = uVar1;
      if ((long)uVar2 < (long)uVar10) {
        unaff_x24 = puVar6 + 0x4a;
        FUN_1072eefa4(puVar6,unaff_x24,*puVar9);
        uVar4 = (int)puVar5 == 0;
        uVar3 = true;
        puVar5 = unaff_x24;
        uVar15 = uVar2;
        if ((bool)uVar4) {
          puVar5 = puVar6;
          uVar15 = uVar1;
        }
      }
      puVar6 = puVar5;
      func_0x0001072f1e54();
      unaff_x20 = puVar9;
      if (((ulong)puVar6 & 1) == 0) {
        func_0x0001072647dc(auStack_4f0,puVar12);
        do {
          unaff_x24 = puVar5;
          func_0x0001072f2070();
          FUN_1072edc2c();
          uVar3 = uVar15 <= uVar14;
          uVar4 = uVar14 == uVar15;
          unaff_x23 = puVar12;
          if ((long)uVar14 < (long)uVar15) break;
          uVar1 = uVar15 << 1 | 1;
          puVar12 = puVar13 + uVar1 * 0x4a;
          uVar2 = uVar15 * 2 + 2;
          uVar3 = uVar10 <= uVar2;
          uVar4 = uVar2 == uVar10;
          puVar5 = puVar12;
          uVar15 = uVar1;
          if ((long)uVar2 < (long)uVar10) {
            puVar7 = puVar12;
            func_0x0001072f1e54();
            uVar4 = (int)puVar7 == 0;
            uVar3 = true;
            puVar5 = puVar12 + 0x4a;
            uVar15 = uVar2;
            if ((bool)uVar4) {
              puVar5 = puVar12;
              uVar15 = uVar1;
            }
          }
          func_0x0001072f23ac();
          puVar12 = unaff_x24;
          unaff_x23 = unaff_x24;
        } while ((int)puVar7 == 0);
        FUN_1072edc2c(unaff_x24,auStack_4f0);
        FUN_107264bb8();
        puVar6 = puVar8;
      }
    }
  }
  func_0x0001072f1710(uStack_2a0);
  if ((bool)uVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x0001072f1e30();
  FUN_107264bb8();
  func_0x0001072f1abc();
  puVar13 = (ulong *)puVar6[1];
  if ((puVar13 != (ulong *)0x0) && (func_0x0001072f2318(), extraout_x8_01 != 0)) {
    func_0x0001072f1ef0();
    func_0x0001072f1ad4();
    if ((bool)uVar4) {
      unaff_x24 = (ulong *)((ulong)unaff_x20 & (ulong)unaff_x23);
    }
    else {
      func_0x0001072f21e8();
      if ((bool)uVar3) {
        func_0x0001072f220c();
      }
    }
    func_0x0001072f2200();
    if (unaff_x21 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    do {
      while( true ) {
        unaff_x21 = (ulong *)*unaff_x21;
        if (unaff_x21 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        puVar12 = (ulong *)unaff_x21[1];
        if (unaff_x20 != puVar12) break;
        func_0x0001072f1924();
        if ((int)puVar6 != 0) {
          return unaff_x21;
        }
      }
      if (((ulong)puVar13 & (ulong)unaff_x23) == 0) {
        puVar12 = (ulong *)((ulong)puVar12 & (ulong)unaff_x23);
      }
      else if (puVar13 <= puVar12) {
        func_0x0001072f21d0();
        puVar12 = extraout_x8_02;
      }
    } while (puVar12 == unaff_x24);
  }
  return (ulong *)0x0;
}



/* Entry: 1072eeb90; end: 1072eedcf;  */

undefined1 *
FUN_1072eeb90(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 in_stack_00000050;
  undefined1 auStack_718 [592];
  undefined8 uStack_4c8;
  undefined1 *puStack_4b8;
  undefined1 auStack_4b0 [64];
  undefined8 *puStack_470;
  code *pcStack_468;
  undefined1 auStack_260 [592];
  undefined8 uStack_10;
  
  func_0x0001072f29a0();
  func_0x0001072f1810();
  bVar5 = param_1 == param_2;
  puVar9 = param_1;
  puVar16 = param_2;
  puVar12 = param_3;
  uStack_10 = extraout_x8;
  if (!bVar5) {
    puVar14 = (undefined1 *)(((long)param_2 - (long)param_1) / 0x250);
    puVar11 = param_2;
    if (0x250 < (long)param_2 - (long)param_1) {
      uVar18 = (ulong)(puVar14 + -2) >> 1;
      do {
        func_0x0001072f1c34();
        puVar12 = puVar14;
        FUN_1072ef12c();
        uVar18 = uVar18 - 1;
      } while (-1 < (long)uVar18);
    }
    for (; puVar11 != param_3; puVar11 = puVar11 + 0x250) {
      puVar12 = (undefined1 *)*param_4;
      puVar9 = puVar11;
      func_0x0001072f1de0();
      if ((int)puVar9 != 0) {
        puVar9 = puVar11;
        puVar16 = param_1;
        FUN_1072ef0c4();
        func_0x0001072f1c34();
        puVar12 = puVar14;
        FUN_1072ef12c();
      }
    }
    while( true ) {
      unaff_x20 = (long *)(puVar14 + -2);
      bVar5 = unaff_x20 == (long *)0x0;
      unaff_x21 = param_1;
      if ((long)puVar14 < 2) break;
      puStack_4b8 = param_2;
      func_0x0001072f1c90();
      uVar18 = 0;
      puVar16 = param_1;
      do {
        puVar9 = puVar16 + uVar18 * 0x250 + 0x250;
        uVar2 = uVar18 << 1 | 1;
        uVar1 = uVar18 * 2 + 2;
        puVar11 = puVar9;
        uVar4 = uVar2;
        if ((long)uVar1 < (long)puVar14) {
          puVar12 = (undefined1 *)*param_4;
          puVar10 = puVar9;
          FUN_1072eefa4(puVar9,puVar16 + uVar18 * 0x250 + 0x4a0);
          puVar11 = puVar16 + uVar18 * 0x250 + 0x4a0;
          uVar4 = uVar1;
          if ((int)puVar10 == 0) {
            puVar11 = puVar9;
            uVar4 = uVar2;
          }
        }
        uVar18 = uVar4;
        FUN_1072edc2c(puVar16,puVar11);
        puVar16 = puVar11;
      } while ((long)uVar18 <= (long)((ulong)unaff_x20 >> 1));
      param_2 = puStack_4b8 + -0x250;
      if (puVar11 == param_2) {
        puVar16 = auStack_4b0;
        FUN_1072edc2c();
        puVar9 = puVar11;
      }
      else {
        FUN_1072edc2c(puVar11,param_2);
        puVar16 = auStack_4b0;
        puVar9 = param_2;
        FUN_1072edc2c();
        if (0x250 < (long)(puVar11 + (0x250 - (long)param_1))) {
          uVar18 = (ulong)(puVar11 + (0x250 - (long)param_1)) / 0x250 - 2 >> 1;
          puVar12 = (undefined1 *)*param_4;
          puVar9 = param_1 + uVar18 * 0x250;
          func_0x0001072f1e54();
          if ((int)puVar9 != 0) {
            func_0x0001072647dc(auStack_260,puVar11);
            puVar16 = param_1 + uVar18 * 0x250;
            do {
              puVar9 = puVar16;
              func_0x0001072f207c();
              FUN_1072edc2c();
              if (uVar18 == 0) break;
              uVar18 = uVar18 - 1 >> 1;
              puVar16 = param_1 + uVar18 * 0x250;
              puVar12 = (undefined1 *)*param_4;
              puVar11 = puVar16;
              FUN_1072eefa4(puVar16,auStack_260);
            } while (((ulong)puVar11 & 1) != 0);
            puVar16 = auStack_260;
            FUN_1072edc2c(puVar9);
            puVar9 = auStack_260;
            FUN_107264bb8();
          }
        }
      }
      func_0x0001072f1ee8();
      puVar14 = puVar14 + -1;
    }
  }
  func_0x0001072f1710(uStack_10);
  if (bVar5) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar14 = puVar9;
  func_0x0001072f1ee8();
  func_0x0001072f1abc();
  pcVar13 = FUN_1072eedd0;
  func_0x0001072f29a0();
  puStack_470 = &stack0x00000050;
  pcStack_468 = pcVar13;
  func_0x0001072f2644();
  func_0x0001072f17a8();
  lVar17 = ((long)puVar16 - (long)puVar14) / 0x250;
  uVar6 = lVar17 == 5;
  puVar16 = (undefined1 *)0x1;
  uStack_4c8 = extraout_x8_00;
  switch(lVar17) {
  case 0:
  case 1:
    goto LAB_1072eef50;
  case 2:
    puVar12 = (undefined1 *)*unaff_x20;
    func_0x0001072f1c34();
    iVar7 = (int)puVar16;
    FUN_1072eefa4();
    if (iVar7 != 0) {
      func_0x0001072f1d0c();
      FUN_1072ef0c4();
    }
    break;
  case 3:
    puVar12 = unaff_x21 + -0x250;
    FUN_1072eea18(puVar9,puVar9 + 0x250,puVar12,unaff_x20);
    break;
  case 4:
    puVar12 = puVar9 + 0x4a0;
    func_0x0001072eeaa4(puVar9,puVar9 + 0x250,puVar12,unaff_x21 + -0x250,unaff_x20);
    break;
  case 5:
    puVar12 = puVar9 + 0x4a0;
    func_0x0001072eeb0c(puVar9,puVar9 + 0x250,puVar12,puVar9 + 0x6f0,unaff_x21 + -0x250,unaff_x20);
    break;
  default:
    puVar12 = puVar9 + 0x4a0;
    FUN_1072eea18(puVar9,puVar9 + 0x250,puVar12,unaff_x20);
    lVar17 = 0;
    iVar7 = 0;
    for (puVar16 = puVar9 + 0x6f0; uVar6 = puVar16 == unaff_x21, !(bool)uVar6;
        puVar16 = puVar16 + 0x250) {
      puVar12 = (undefined1 *)*unaff_x20;
      puVar14 = puVar16;
      func_0x0001072f1e54();
      if ((int)puVar14 != 0) {
        func_0x0001072f293c(auStack_718);
        lVar3 = lVar17;
        do {
          lVar15 = lVar3;
          FUN_1072edc2c(puVar9 + lVar15 + 0x6f0,puVar9 + lVar15 + 0x4a0);
          puVar14 = puVar9;
          if (lVar15 == -0x4a0) goto LAB_1072eef08;
          puVar12 = (undefined1 *)*unaff_x20;
          puVar14 = auStack_718;
          FUN_1072eefa4(puVar14,puVar9 + lVar15 + 0x250);
          lVar3 = lVar15 + -0x250;
        } while (((ulong)puVar14 & 1) != 0);
        puVar14 = puVar9 + lVar15 + 0x4a0;
LAB_1072eef08:
        FUN_1072edc2c(puVar14,auStack_718);
        iVar7 = iVar7 + 1;
        FUN_107264bb8(auStack_718);
        if (iVar7 == 8) {
          uVar6 = puVar16 + 0x250 == unaff_x21;
          puVar16 = (undefined1 *)(ulong)(byte)uVar6;
          goto LAB_1072eef50;
        }
      }
      lVar17 = lVar17 + 0x250;
    }
  }
  puVar16 = (undefined1 *)0x1;
LAB_1072eef50:
  func_0x0001072f1710(uStack_4c8);
  if ((bool)uVar6) {
    return puVar16;
  }
  ___stack_chk_fail();
  func_0x0001072f1abc();
  puVar14 = puVar12;
  func_0x0001072f1b80();
  FUN_1072ef024(puVar14,unaff_x20);
  puVar9 = puVar16;
  FUN_1072ef024(puVar12,puVar16);
  if (puVar14 == (undefined1 *)0x0) {
    if (puVar12 == (undefined1 *)0x0) {
LAB_1072ef004:
      func_0x0001072f1b8c();
      func_0x000104c342bc();
      func_0x000104c2fcd4(puVar9);
      func_0x000104c2fcf0(puVar16);
      plVar8 = unaff_x20;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(unaff_x20);
      func_0x00010006725c(plVar8,unaff_x20,puVar9,puVar16);
      return (undefined1 *)(ulong)((uint)plVar8 >> 7 & 1);
    }
    puVar16 = (undefined1 *)0x0;
  }
  else if (puVar12 == (undefined1 *)0x0) {
    puVar16 = (undefined1 *)0x1;
  }
  else {
    if (*(uint *)(puVar14 + 0x48) == *(uint *)(puVar12 + 0x48)) goto LAB_1072ef004;
    puVar16 = (undefined1 *)(ulong)(*(uint *)(puVar14 + 0x48) < *(uint *)(puVar12 + 0x48));
  }
  return puVar16;
}



/* Entry: 1072eedd0; end: 1072eefa3;  */

ulong FUN_1072eedd0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined1 auStack_258 [592];
  undefined8 uStack_8;
  
  func_0x0001072f29a0();
  func_0x0001072f2644();
  func_0x0001072f17a8();
  lVar8 = (param_2 - param_1) / 0x250;
  uVar2 = lVar8 == 5;
  uVar6 = 1;
  uStack_8 = extraout_x8;
  switch(lVar8) {
  case 0:
  case 1:
    goto LAB_1072eef50;
  case 2:
    param_3 = *unaff_x20;
    func_0x0001072f1c34();
    iVar3 = (int)uVar6;
    FUN_1072eefa4();
    if (iVar3 != 0) {
      func_0x0001072f1d0c();
      FUN_1072ef0c4();
    }
    break;
  case 3:
    param_3 = unaff_x21 + -0x250;
    FUN_1072eea18();
    break;
  case 4:
    param_3 = unaff_x19 + 0x4a0;
    func_0x0001072eeaa4();
    break;
  case 5:
    param_3 = unaff_x19 + 0x4a0;
    func_0x0001072eeb0c();
    break;
  default:
    param_3 = unaff_x19 + 0x4a0;
    FUN_1072eea18();
    lVar10 = 0;
    iVar3 = 0;
    for (lVar8 = unaff_x19 + 0x6f0; uVar2 = lVar8 == unaff_x21, !(bool)uVar2; lVar8 = lVar8 + 0x250)
    {
      param_3 = *unaff_x20;
      lVar9 = lVar8;
      func_0x0001072f1e54();
      if ((int)lVar9 != 0) {
        func_0x0001072f293c(auStack_258);
        lVar9 = lVar10;
        do {
          lVar1 = unaff_x19 + lVar9;
          FUN_1072edc2c(lVar1 + 0x6f0,lVar1 + 0x4a0);
          if (lVar9 == -0x4a0) break;
          param_3 = *unaff_x20;
          puVar7 = auStack_258;
          FUN_1072eefa4(puVar7,lVar1 + 0x250);
          lVar9 = lVar9 + -0x250;
        } while (((ulong)puVar7 & 1) != 0);
        FUN_1072edc2c();
        iVar3 = iVar3 + 1;
        FUN_107264bb8(auStack_258);
        if (iVar3 == 8) {
          uVar2 = lVar8 + 0x250 == unaff_x21;
          uVar6 = (ulong)(byte)uVar2;
          goto LAB_1072eef50;
        }
      }
      lVar10 = lVar10 + 0x250;
    }
  }
  uVar6 = 1;
LAB_1072eef50:
  func_0x0001072f1710(uStack_8);
  if ((bool)uVar2) {
    return uVar6;
  }
  ___stack_chk_fail();
  func_0x0001072f1abc();
  lVar8 = param_3;
  func_0x0001072f1b80();
  FUN_1072ef024();
  uVar4 = uVar6;
  FUN_1072ef024(param_3,uVar6);
  if (lVar8 == 0) {
    if (param_3 == 0) {
LAB_1072ef004:
      func_0x0001072f1b8c();
      func_0x000104c342bc();
      func_0x000104c2fcd4(uVar4);
      func_0x000104c2fcf0(uVar6);
      plVar5 = unaff_x20;
      func_0x000104c2fcd4();
      func_0x000104c2fcf0(unaff_x20);
      func_0x00010006725c(plVar5,unaff_x20,uVar4,uVar6);
      return (ulong)((uint)plVar5 >> 7 & 1);
    }
    uVar6 = 0;
  }
  else if (param_3 == 0) {
    uVar6 = 1;
  }
  else {
    if (*(uint *)(lVar8 + 0x48) == *(uint *)(param_3 + 0x48)) goto LAB_1072ef004;
    uVar6 = (ulong)(*(uint *)(lVar8 + 0x48) < *(uint *)(param_3 + 0x48));
  }
  return uVar6;
}


