/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10818fdd8; end: 10818fe67;  */

undefined8 FUN_10818fdd8(undefined8 param_1)

{
  undefined4 *unaff_x20;
  undefined4 uStack_34;
  
  func_0x000108191360();
  func_0x0001081912fc();
  if ((int)param_1 != 0) {
    *unaff_x20 = uStack_34;
    func_0x00010819139c();
  }
  return param_1;
}



/* Entry: 10818fe68; end: 10818ff4f;  */

void FUN_10818fe68(ulong param_1)

{
  undefined1 in_ZR;
  undefined4 *unaff_x20;
  undefined4 uStack_24;
  
  func_0x000108191380();
  func_0x00010818f018();
  if ((int)param_1 != 0) {
    func_0x000108191464();
    FUN_10818f360();
    if ((((param_1 & 1) != 0) || (func_0x00010819139c(), (param_1 & 1) != 0)) ||
       (func_0x0001081913a4(), (bool)in_ZR)) {
      *unaff_x20 = uStack_24;
      unaff_x20[1] = 1;
      func_0x00010819139c();
    }
  }
  return;
}



/* Entry: 10818ff50; end: 108190047;  */

void FUN_10818ff50(ulong param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  func_0x000108191380();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010818ef90();
  func_0x000108191358();
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if ((int)param_1 != 0) {
      func_0x000108191350();
      for (lVar3 = 0; lVar3 != 0x18; lVar3 = lVar3 + 4) {
        func_0x0001081913b0();
        if (((int)param_1 == 0) || ((lVar3 != 0x14 && (func_0x00010819139c(), (int)param_1 == 0))))
        goto LAB_108190018;
      }
      *unaff_x20 = uStack_60;
      auVar4._8_4_ = uStack_54;
      auVar4._0_8_ = uStack_5c;
      auVar4._12_4_ = uStack_50;
      auVar4 = NEON_rev64(auVar4,4);
      *(ulong *)(unaff_x20 + 3) = CONCAT44(auVar4._12_4_,auVar4._4_4_);
      *(ulong *)(unaff_x20 + 1) = CONCAT44(uStack_50,(int)((ulong)uStack_5c >> 0x20));
      unaff_x20[5] = uStack_4c;
      *(undefined8 *)(unaff_x20 + 6) = 0;
      *(undefined8 *)(unaff_x20 + 8) = 0x803f800000;
      func_0x000108191350();
      func_0x0001081912c0();
      if ((param_1 & 1) != 0) {
        param_1 = 1;
        goto LAB_10819001c;
      }
    }
  }
LAB_108190018:
  func_0x000108191470();
LAB_10819001c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108191420();
  func_0x000108191314();
  func_0x00010818ef90();
  func_0x000108191358();
  iVar1 = (int)param_1;
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if (iVar1 != 0) {
      func_0x000108191350();
      func_0x000108191350();
      func_0x0001081912fc();
      if (iVar1 != 0) {
        func_0x00010819139c();
        if (iVar1 != 0) {
          func_0x0001081913b0();
        }
        FUN_108363dac(0,0);
        func_0x000108191350();
        func_0x0001081912c0();
        if (((ulong)unaff_x20 & 1) != 0) {
          return;
        }
      }
    }
  }
  func_0x000108191470();
  return;
}



/* Entry: 108190048; end: 1081900e7;  */

void FUN_108190048(ulong param_1)

{
  int iVar1;
  ulong unaff_x20;
  
  func_0x000108191314();
  func_0x00010818ef90();
  func_0x000108191358();
  iVar1 = (int)param_1;
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if (iVar1 != 0) {
      func_0x000108191350();
      func_0x000108191350();
      func_0x0001081912fc();
      if (iVar1 != 0) {
        func_0x00010819139c();
        if (iVar1 != 0) {
          func_0x0001081913b0();
        }
        FUN_108363dac(0,0);
        func_0x000108191350();
        func_0x0001081912c0();
        if ((unaff_x20 & 1) != 0) {
          return;
        }
      }
    }
  }
  func_0x000108191470();
  return;
}



/* Entry: 1081900e8; end: 10819017f;  */

void FUN_1081900e8(ulong param_1)

{
  int iVar1;
  ulong unaff_x20;
  
  func_0x000108191314();
  func_0x00010818ef90();
  func_0x000108191358();
  iVar1 = (int)param_1;
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if (iVar1 != 0) {
      func_0x000108191350();
      func_0x0001081912fc();
      if (iVar1 != 0) {
        func_0x00010819139c();
        if (iVar1 != 0) {
          func_0x0001081913b0();
        }
        FUN_108363f9c(0,0);
        func_0x000108191350();
        func_0x0001081912c0();
        if ((unaff_x20 & 1) != 0) {
          return;
        }
      }
    }
  }
  func_0x000108191470();
  return;
}



/* Entry: 108190180; end: 10819023b;  */

void FUN_108190180(ulong param_1)

{
  int iVar1;
  ulong unaff_x20;
  undefined4 uStack_44;
  
  func_0x000108191314();
  func_0x00010818ef90();
  func_0x000108191358();
  iVar1 = (int)param_1;
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if (iVar1 != 0) {
      func_0x000108191350();
      func_0x0001081912fc();
      if ((iVar1 != 0) &&
         (((func_0x00010819139c(), iVar1 == 0 || (func_0x0001081913b0(), iVar1 == 0)) ||
          ((func_0x00010819139c(), iVar1 != 0 && (func_0x0001081913b0(), iVar1 != 0)))))) {
        FUN_10836412c(uStack_44,0,0);
        func_0x000108191350();
        func_0x0001081912c0();
        if ((unaff_x20 & 1) != 0) {
          return;
        }
      }
    }
  }
  func_0x000108191470();
  return;
}



/* Entry: 10819023c; end: 1081902c3;  */

void FUN_10819023c(ulong param_1)

{
  long unaff_x20;
  float fVar1;
  float fStack_34;
  
  func_0x000108191314();
  func_0x00010818ef90();
  func_0x000108191358();
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if ((int)param_1 != 0) {
      func_0x000108191350();
      func_0x0001081912fc();
      if ((param_1 & 1) != 0) {
        fVar1 = fStack_34 * 0.017453292;
        _tanf();
        *(float *)(unaff_x20 + 4) = fVar1;
        *(undefined4 *)(unaff_x20 + 0x24) = 0x80;
        func_0x000108191350();
        func_0x0001081912c0();
        if ((param_1 & 1) != 0) {
          return;
        }
      }
    }
  }
  func_0x000108191470();
  return;
}



/* Entry: 1081902c4; end: 10819034b;  */

void FUN_1081902c4(ulong param_1)

{
  long unaff_x20;
  float fVar1;
  float fStack_34;
  
  func_0x000108191314();
  func_0x00010818ef90();
  func_0x000108191358();
  if ((param_1 & 1) != 0) {
    func_0x000108191350();
    func_0x0001081912d0();
    if ((int)param_1 != 0) {
      func_0x000108191350();
      func_0x0001081912fc();
      if ((param_1 & 1) != 0) {
        fVar1 = fStack_34 * 0.017453292;
        _tanf();
        *(float *)(unaff_x20 + 0xc) = fVar1;
        *(undefined4 *)(unaff_x20 + 0x24) = 0x80;
        func_0x000108191350();
        func_0x0001081912c0();
        if ((param_1 & 1) != 0) {
          return;
        }
      }
    }
  }
  func_0x000108191470();
  return;
}



/* Entry: 10819034c; end: 108190443;  */

undefined8 FUN_10819034c(undefined8 *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  bool bVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001081914d0();
  bVar3 = false;
  uStack_58 = uRam0000000113254e28;
  uStack_60 = uRam0000000113254e20;
  uStack_48 = uRam0000000113254e38;
  uStack_50 = uRam0000000113254e30;
  uStack_40 = uRam0000000113254e40;
  do {
    uStack_88 = 0;
    uStack_90 = 0x3f800000;
    uStack_78 = 0;
    uStack_80 = 0x3f800000;
    uStack_70 = 0x103f800000;
    func_0x0001081914fc();
    FUN_10818ff50();
    if (((ulong)param_1 & 1) == 0) {
      func_0x0001081914fc();
      FUN_108190048();
      if (((ulong)param_1 & 1) == 0) {
        func_0x0001081914fc();
        FUN_1081900e8();
        if (((ulong)param_1 & 1) == 0) {
          func_0x0001081914fc();
          FUN_108190180();
          if (((ulong)param_1 & 1) == 0) {
            func_0x0001081914fc();
            FUN_10819023c();
            iVar1 = (int)param_1;
            if (((ulong)param_1 & 1) == 0) {
              func_0x0001081914fc();
              FUN_1081902c4();
              if (iVar1 == 0) {
                func_0x00010818ef90();
                if ((bVar3) && (func_0x00010819158c(), (bool)in_ZR)) {
                  unaff_x19[1] = uStack_58;
                  *unaff_x19 = uStack_60;
                  unaff_x19[3] = uStack_48;
                  unaff_x19[2] = uStack_50;
                  unaff_x19[4] = uStack_40;
                  uVar2 = 1;
                }
                else {
                  uVar2 = 0;
                }
                return uVar2;
              }
            }
          }
        }
      }
    }
    param_1 = &uStack_60;
    FUN_108363e94(param_1,&uStack_90);
    func_0x000108191608();
    bVar3 = true;
  } while( true );
}



/* Entry: 108190444; end: 1081905ff;  */

/* WARNING: Removing unreachable block (ram,0x00010819058c) */
/* WARNING: Removing unreachable block (ram,0x000108190590) */
/* WARNING: Removing unreachable block (ram,0x000108190598) */

undefined1 FUN_108190444(int param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  int unaff_w19;
  
  func_0x000108191380();
  func_0x00010818ef90();
  func_0x000108191624();
  func_0x000108191508();
  iVar2 = param_1;
  func_0x0001081915ec();
  if (param_1 == 0) {
    func_0x000108191358();
    if (iVar2 == 0) {
      FUN_10818fc88();
      if (unaff_w19 == 0) {
        bVar1 = false;
        goto LAB_1081904fc;
      }
      func_0x000108191350();
      func_0x000108191624();
      func_0x000108191508();
      func_0x0001081915ec();
      in_ZR = 1;
      func_0x0001081914b4();
      goto LAB_1081904bc;
    }
    func_0x0001081914b4();
    func_0x000108191534();
  }
  else {
    func_0x0001081914b4();
LAB_1081904bc:
    func_0x000108191534();
    func_0x00010819100c(0);
  }
  bVar1 = true;
LAB_1081904fc:
  func_0x000108191350();
  if (bVar1) {
    func_0x0001081913a4();
  }
  else {
    in_ZR = 0;
  }
  FUN_1083a3ca0(0x1138270b0);
  func_0x00010819100c(0);
  return in_ZR;
}



/* Entry: 108190600; end: 10819066f;  */

undefined1 FUN_108190600(ulong param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined4 *unaff_x20;
  
  func_0x000108191380();
  func_0x000108191618();
  if ((int)param_1 == 0) {
    func_0x000108191644();
    FUN_10818fc88();
    if ((param_1 & 1) == 0) {
      in_ZR = 0;
      goto LAB_108190654;
    }
  }
  else {
    *unaff_x20 = 0;
    unaff_x20[2] = 0;
    func_0x000108191570(*(undefined8 *)(unaff_x20 + 4));
    if (!(bool)in_ZR) {
      *(undefined8 *)(unaff_x20 + 4) = extraout_x8;
    }
    FUN_1083a3ca0();
  }
  func_0x0001081913a4();
LAB_108190654:
  func_0x0001081915f4();
  return in_ZR;
}



/* Entry: 108190670; end: 10819069b;  */

void FUN_108190670(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  lVar1 = *(long *)(param_1 + 4);
  if (lVar1 != *(long *)(param_2 + 4)) {
    *(long *)(param_1 + 4) = *(long *)(param_2 + 4);
    *(long *)(param_2 + 4) = lVar1;
  }
  return;
}



/* Entry: 10819069c; end: 108190753;  */

void FUN_10819069c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined4 *unaff_x20;
  long lVar2;
  
  func_0x000108191380();
  ppuVar1 = &PTR_DAT_110a2c4f0;
  lVar2 = 4;
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) {
      return;
    }
    ppuVar1 = ppuVar1 + 2;
    func_0x000108191358();
  } while ((int)param_1 == 0);
  *unaff_x20 = *(undefined4 *)ppuVar1;
  func_0x000108191324();
  return;
}



/* Entry: 108190754; end: 10819079f;  */

void FUN_108190754(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x000108191380();
  func_0x00010818efe8();
  iVar1 = (int)param_1;
  if ((param_1 & 1) == 0) {
    func_0x000108191358();
    if (iVar1 == 0) {
      return;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  func_0x000108191334(uVar2);
  return;
}



/* Entry: 1081907a0; end: 108190887;  */

/* WARNING: Removing unreachable block (ram,0x000108190830) */

undefined8 FUN_1081907a0(void)

{
  bool bVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char *extraout_x8;
  undefined8 uVar5;
  ulong unaff_x20;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001081914d0();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10818ef1c();
  bVar1 = false;
  do {
    uVar4 = unaff_x20;
    func_0x00010818f018();
    if ((uVar4 & 1) == 0) {
LAB_108190834:
      if (!bVar1) goto LAB_108190840;
      break;
    }
    func_0x000108191608();
    iVar2 = (int)uVar4;
    if ((((uVar4 & 1) == 0) && (func_0x00010819158c(), !(bool)in_ZR)) &&
       (in_ZR = *extraout_x8 == '-', !(bool)in_ZR)) goto LAB_108190834;
    func_0x0001081914fc();
    func_0x00010818f018();
    if (iVar2 == 0) goto LAB_108190834;
    uStack_58 = uStack_4c;
    uStack_54 = uStack_50;
    puVar3 = &uStack_48;
    func_0x00010819107c(puVar3,&uStack_58);
    bVar1 = true;
    func_0x000108191608();
  } while (((ulong)puVar3 & 1) != 0);
  func_0x00010819158c();
  if ((bool)in_ZR) {
    FUN_108191138();
    uVar5 = 1;
  }
  else {
LAB_108190840:
    uVar5 = 0;
  }
  func_0x000108180b88(&uStack_48);
  return uVar5;
}



/* Entry: 108190888; end: 10819093b;  */

void FUN_108190888(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_x20;
  long lVar2;
  
  func_0x000108191380();
  puVar1 = (undefined4 *)&UNK_110a2c560;
  lVar2 = 4;
  do {
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) {
      return;
    }
    puVar1 = puVar1 + 4;
    func_0x000108191358();
  } while ((int)param_1 == 0);
  *unaff_x20 = *puVar1;
  func_0x000108191324();
  return;
}



/* Entry: 10819093c; end: 108190a67;  */

undefined1 FUN_10819093c(int param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  ulong unaff_x19;
  bool bVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_70;
  func_0x000108191380();
  func_0x000108191618();
  if (param_1 == 0) {
    func_0x000108191358();
    if (param_1 == 0) {
      bVar3 = false;
      func_0x000108191624();
      while( true ) {
        uStack_50 = 0;
        uVar2 = unaff_x19;
        FUN_10818fe68();
        if ((uVar2 & 1) == 0) break;
        func_0x0001081911a4(&uStack_70,&uStack_50);
        bVar3 = true;
      }
      if (!bVar3) {
        func_0x00010818e81c(&uStack_70);
        return 0;
      }
      uStack_50 = CONCAT44(uStack_50._4_4_,1);
      uStack_40 = uStack_68;
      uStack_48 = uStack_70;
      uStack_38 = uStack_60;
      func_0x000108191624();
      func_0x0001081914a8();
      func_0x00010818e81c(&uStack_48);
      goto LAB_1081909a0;
    }
    uStack_50 = CONCAT44(uStack_50._4_4_,2);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    func_0x0001081914a8();
  }
  else {
    uStack_50 = uStack_50 & 0xffffffff00000000;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    func_0x0001081914a8();
  }
  puVar1 = &uStack_48;
LAB_1081909a0:
  func_0x00010818e81c(puVar1);
  func_0x0001081913a4();
  return in_ZR;
}



/* Entry: 108190a68; end: 108190b4f;  */

void FUN_108190a68(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar1;
  long *unaff_x19;
  undefined4 *unaff_x20;
  long lVar2;
  undefined4 auStack_48 [2];
  long lStack_40;
  long lStack_38;
  
  func_0x000108191380();
  func_0x0001081915cc();
  if (param_1 == 0) {
    lVar2 = *unaff_x19;
    lVar1 = lVar2;
    _strchr(lVar2,0x2c);
    if (lVar1 == 0) {
      FUN_1083a3348(&lStack_38,lVar2);
    }
    else {
      FUN_1083a3394(&lStack_38,lVar2,lVar1 - lVar2);
    }
    func_0x00010818ee04(auStack_48,lStack_38 + 8);
    *unaff_x20 = auStack_48[0];
    lVar1 = *(long *)(unaff_x20 + 2);
    if (lVar1 != lStack_40) {
      *(long *)(unaff_x20 + 2) = lStack_40;
      lStack_40 = lVar1;
    }
    FUN_1083a3ca0(lStack_40);
    lVar2 = *unaff_x19;
    lVar1 = lVar2;
    _strlen();
    *unaff_x19 = lVar2 + lVar1;
  }
  else {
    *unaff_x20 = 1;
    func_0x000108191570(*(undefined8 *)(unaff_x20 + 2));
    if (!(bool)in_ZR) {
      *(undefined8 *)(unaff_x20 + 2) = extraout_x8;
    }
  }
  FUN_1083a3ca0();
  func_0x000108191324();
  return;
}



/* Entry: 108190b50; end: 108190be3;  */

void FUN_108190b50(int param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000108191380();
  func_0x0001081915cc();
  if (param_1 == 0) {
    func_0x000108191464();
    FUN_10818fe68();
    if (param_1 == 0) {
      return;
    }
    *(undefined4 *)unaff_x20 = 0;
    *(undefined8 *)((long)unaff_x20 + 4) = 0;
  }
  else {
    *unaff_x20 = 1;
    *(undefined4 *)(unaff_x20 + 1) = 1;
  }
  func_0x0001081913a4();
  return;
}



/* Entry: 108190be4; end: 108190c27;  */

void FUN_108190be4(int param_1)

{
  func_0x00010819138c();
  while (func_0x000108191344(), param_1 == 0) {
    func_0x000108191528();
  }
  func_0x000108191580();
  func_0x00010819153c();
  return;
}



/* Entry: 108190c28; end: 108190c63;  */

void FUN_108190c28(int param_1)

{
  undefined4 uStack_24;
  
  func_0x000108191380();
  FUN_108190c64();
  if (param_1 != 0) {
    func_0x000108191334(uStack_24);
  }
  return;
}



/* Entry: 108190c64; end: 108190ca7;  */

void FUN_108190c64(int param_1)

{
  func_0x00010819138c();
  while (func_0x000108191344(), param_1 == 0) {
    func_0x000108191528();
  }
  func_0x000108191580();
  func_0x00010819153c();
  return;
}



/* Entry: 108190ca8; end: 108190ce3;  */

void FUN_108190ca8(int param_1)

{
  undefined4 uStack_24;
  
  func_0x000108191380();
  FUN_108190ce4();
  if (param_1 != 0) {
    func_0x000108191334(uStack_24);
  }
  return;
}



/* Entry: 108190ce4; end: 108190d27;  */

void FUN_108190ce4(int param_1)

{
  func_0x00010819138c();
  while (func_0x000108191344(), param_1 == 0) {
    func_0x000108191528();
  }
  func_0x000108191580();
  func_0x00010819153c();
  return;
}



/* Entry: 108190d28; end: 108190d87;  */

void FUN_108190d28(void)

{
  int unaff_w19;
  
  func_0x000108191380();
  func_0x00010818efe8();
  func_0x000108191350();
  FUN_108190d88();
  if (unaff_w19 != 0) {
    func_0x000108191350();
    func_0x000108190dd0();
    func_0x0001081913a4();
  }
  return;
}



/* Entry: 108190d88; end: 108190e13;  */

void FUN_108190d88(int param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x21;
  
  func_0x00010819138c();
  while (func_0x000108191344(), param_1 == 0) {
    func_0x000108191528();
  }
  *unaff_x19 = *unaff_x21;
  func_0x00010819153c();
  return;
}



/* Entry: 108190e14; end: 108190ef3;  */

void FUN_108190e14(undefined8 param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 unaff_x19;
  
  func_0x000108191380();
  while( true ) {
    iVar1 = (int)param_1;
    func_0x000108191464();
    FUN_10818fe68();
    if (iVar1 == 0) break;
    func_0x0001081911a4();
    param_1 = unaff_x19;
    FUN_10818efac();
  }
  func_0x00010819158c();
  if (!(bool)in_ZR) {
    func_0x000108191324();
  }
  return;
}



/* Entry: 108190ef4; end: 108190f37;  */

void FUN_108190ef4(int param_1)

{
  func_0x00010819138c();
  while (func_0x000108191344(), param_1 == 0) {
    func_0x000108191528();
  }
  func_0x000108191580();
  func_0x00010819153c();
  return;
}



/* Entry: 108190f38; end: 108190f8f;  */

void FUN_108190f38(undefined8 param_1)

{
  undefined4 *unaff_x20;
  undefined **ppuVar1;
  long lVar2;
  
  func_0x000108191380();
  ppuVar1 = &PTR_DAT_110a2c820;
  lVar2 = 0x20;
  do {
    if (lVar2 == 0) {
      return;
    }
    func_0x000108191358();
    ppuVar1 = ppuVar1 + 2;
    lVar2 = lVar2 + -0x10;
  } while ((int)param_1 == 0);
  *unaff_x20 = *(undefined4 *)ppuVar1;
  func_0x000108191324();
  return;
}



/* Entry: 108190f90; end: 108190fdf;  */

undefined4 * FUN_108190f90(undefined4 *param_1,undefined4 param_2,long *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 1;
  param_1[1] = param_2;
  if (*param_3 == param_3[1]) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x20;
    __Znwm();
    FUN_108190fe0();
  }
  *(undefined8 *)(param_1 + 2) = uVar1;
  return param_1;
}



/* Entry: 108190fe0; end: 108191053;  */

void FUN_108190fe0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 4) = param_2[1];
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 108191054; end: 1081910b3;  */

undefined4 * FUN_108191054(undefined4 *param_1)

{
  *param_1 = 1;
  FUN_10818ea28(param_1 + 2);
  return param_1;
}



/* Entry: 1081910b4; end: 108191117;  */

undefined8 FUN_1081910b4(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  func_0x000108191380();
  func_0x000108191630();
  FUN_1081850a8();
  func_0x000108191598();
  if (param_2 != 0) {
    FUN_108185044();
  }
  func_0x0001081914dc();
  func_0x000108191464();
  FUN_108191118();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_1081850e8(auStack_58);
  return uVar1;
}



/* Entry: 108191118; end: 108191137;  */

void FUN_108191118(void)

{
  func_0x000108191444();
  func_0x0001081913c4();
  return;
}



/* Entry: 108191138; end: 1081911db;  */

void FUN_108191138(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x0001081914d0();
  func_0x000108191170();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 1081911dc; end: 10819123f;  */

undefined8 FUN_1081911dc(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  func_0x000108191380();
  func_0x000108191630();
  FUN_10818ec34();
  func_0x000108191598();
  if (param_2 != 0) {
    FUN_10818ec88();
  }
  func_0x0001081914dc();
  func_0x000108191464();
  FUN_108191240();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_108191260(auStack_58);
  return uVar1;
}



/* Entry: 108191240; end: 10819125f;  */

void FUN_108191240(void)

{
  func_0x000108191444();
  func_0x0001081913c4();
  return;
}



/* Entry: 108191260; end: 10819128b;  */

long * FUN_108191260(long *param_1)

{
  FUN_10819128c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10819128c; end: 10819166f;  */

void FUN_10819128c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 108191670; end: 1081916a3;  */

void FUN_108191670(undefined8 *param_1)

{
  func_0x0001081a1554(param_1,0);
  *param_1 = &PTR_FUN_110a2c860;
  param_1[0x5e] = 0x100000000;
  param_1[0x5f] = 0x100000000;
  param_1[0x60] = 0x100000000;
  return;
}



/* Entry: 1081916a4; end: 10819175f;  */

undefined8 FUN_1081916a4(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_54;
  char cStack_4c;
  undefined8 uStack_48;
  byte bStack_40;
  undefined8 uStack_3c;
  byte bStack_34;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    puVar3 = &uStack_3c;
    FUN_108191990(&uStack_3c,"cx");
    if ((bStack_34 & 1) == 0) {
      puVar3 = &uStack_48;
      FUN_108191990(&uStack_48,"cy");
      if ((bStack_40 & 1) == 0) {
        puVar3 = &uStack_54;
        FUN_108191990(&uStack_54,"r");
        if (cStack_4c != '\x01') {
          return 0;
        }
        lVar2 = 0x300;
      }
      else {
        lVar2 = 0x2f8;
      }
    }
    else {
      lVar2 = 0x2f0;
    }
    *(undefined8 *)(param_1 + lVar2) = *puVar3;
  }
  return 1;
}



/* Entry: 108191760; end: 1081917ab;  */

void FUN_108191760(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _strcmp(param_3,param_2);
  if ((int)param_3 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_28 = 0;
  lVar1 = param_4;
  lStack_38 = param_4;
  _strlen();
  lStack_30 = param_4 + lVar1;
  plVar2 = &lStack_38;
  FUN_10818fe68(plVar2,&uStack_28);
  if ((int)plVar2 != 0) {
    FUN_10819195c(param_1,&uStack_28);
  }
  return;
}



/* Entry: 1081917ac; end: 108191817;  */

undefined8 FUN_1081917ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x00010819f85c(param_3,param_2 + 0x2f0,0);
  func_0x00010819f85c(param_3,param_2 + 0x2f8,1);
  func_0x00010819f85c(param_3,param_2 + 0x300,2);
  return param_1;
}



/* Entry: 108191818; end: 108191857;  */

void FUN_108191818(undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1081917ac(param_4,param_6);
  if (0.0 < param_3) {
    FUN_10833eafc(param_5,&stack0xffffffffffffffe0,param_7);
    return;
  }
  return;
}



/* Entry: 108191858; end: 1081918a7;  */

void FUN_108191858(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1081917ac(param_2,*(undefined8 *)(param_3 + 0x20));
  FUN_10837bca8(param_1,0);
  func_0x0001081a43c8(param_2,param_1);
  return;
}



/* Entry: 1081918a8; end: 1081918d3;  */

void FUN_1081918a8(undefined8 param_1,long param_2)

{
  FUN_1081917ac(param_1,*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 1081918d4; end: 1081918d7;  */

undefined8 * FUN_1081918d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081918d8; end: 1081918eb;  */

void FUN_1081918d8(void)

{
  FUN_10819c344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081918ec; end: 1081918fb;  */

undefined8 FUN_1081918ec(void)

{
  return 0;
}



/* Entry: 1081918fc; end: 10819195b;  */

void FUN_1081918fc(undefined1 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  param_1[8] = 0;
  uStack_28 = 0;
  lVar1 = param_2;
  lStack_38 = param_2;
  _strlen();
  lStack_30 = param_2 + lVar1;
  plVar2 = &lStack_38;
  FUN_10818fe68(plVar2,&uStack_28);
  if ((int)plVar2 != 0) {
    FUN_10819195c(param_1,&uStack_28);
  }
  return;
}



/* Entry: 10819195c; end: 108191977;  */

void FUN_10819195c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *extraout_x8;
  int unaff_w21;
  undefined8 uStack_38;
  
  uVar2 = *param_2;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *param_1 = uVar2;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  _strcmp();
  if (unaff_w21 != 0) {
    *(undefined4 *)(extraout_x8 + 1) = 0;
    *extraout_x8 = 0;
    return;
  }
  *(undefined1 *)extraout_x8 = 0;
  *(undefined1 *)(extraout_x8 + 1) = 0;
  uStack_38 = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffb8;
  FUN_10818fe68(puVar1,&uStack_38);
  if ((int)puVar1 != 0) {
    FUN_10819195c(extraout_x8,&uStack_38);
  }
  return;
}



/* Entry: 108191978; end: 10819198f;  */

void FUN_108191978(long param_1)

{
  undefined1 *puVar1;
  undefined8 *extraout_x8;
  int unaff_w21;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  _strcmp();
  if (unaff_w21 != 0) {
    *(undefined4 *)(extraout_x8 + 1) = 0;
    *extraout_x8 = 0;
    return;
  }
  *(undefined1 *)extraout_x8 = 0;
  *(undefined1 *)(extraout_x8 + 1) = 0;
  uStack_38 = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffb8;
  FUN_10818fe68(puVar1,&uStack_38);
  if ((int)puVar1 != 0) {
    FUN_10819195c(extraout_x8,&uStack_38);
  }
  return;
}



/* Entry: 108191990; end: 1081919a3;  */

void FUN_108191990(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined8 uStack_28;
  
  _strcmp();
  if (unaff_w21 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_28 = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fe68(puVar1,&uStack_28);
  if ((int)puVar1 != 0) {
    FUN_10819195c(param_1,&uStack_28);
  }
  return;
}



/* Entry: 1081919a4; end: 1081919ef;  */

void FUN_1081919a4(undefined8 *param_1)

{
  func_0x0001081919cc(param_1,1);
  *param_1 = &PTR_FUN_110a2c8f8;
  *(undefined4 *)(param_1 + 0x61) = 0;
  return;
}



/* Entry: 1081919f0; end: 108191a63;  */

undefined8 FUN_1081919f0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 uStack_38;
  char cStack_34;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    FUN_108191a64(&uStack_38,"clipPathUnits",param_2,param_3);
    if (cStack_34 != '\x01') {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x308) = uStack_38;
  }
  return 1;
}



/* Entry: 108191a64; end: 108191aaf;  */

void FUN_108191a64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  long lStack_30;
  undefined4 uStack_24;
  
  _strcmp(param_3,param_2);
  if ((int)param_3 != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 4) = 0;
  uStack_24 = 0;
  lVar1 = param_4;
  lStack_38 = param_4;
  _strlen();
  lStack_30 = param_4 + lVar1;
  plVar2 = &lStack_38;
  FUN_108190754(plVar2,&uStack_24);
  if ((int)plVar2 != 0) {
    FUN_108191ce8(param_1,&uStack_24);
  }
  return;
}



/* Entry: 108191ab0; end: 108191b5b;  */

void FUN_108191ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  
  FUN_10819c458();
  func_0x0001081a0c84(param_7,*(undefined4 *)(param_6 + 0x308));
  FUN_10814bdfc(auStack_90);
  func_0x00010815f6c0(auStack_b8,param_4,param_5);
  FUN_1081600e0(auStack_68,auStack_90,auStack_b8);
  func_0x000108142294(param_1,auStack_68,1);
  return;
}



/* Entry: 108191b5c; end: 108191b5f;  */

undefined8 * FUN_108191b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108191b60; end: 108191b73;  */

void FUN_108191b60(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108191b74; end: 108191b7b;  */

void FUN_108191b74(void)

{
  return;
}



/* Entry: 108191b7c; end: 108191b8f;  */

void FUN_108191b7c(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108191b90; end: 108191bc7;  */

undefined8 * FUN_108191b90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108191bc8; end: 108191bff;  */

undefined8 * FUN_108191bc8(undefined8 *param_1)

{
  FUN_108191c00();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 108191c00; end: 108191c37;  */

void FUN_108191c00(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_108191c38();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 108191c38; end: 108191c87;  */

long * FUN_108191c38(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108191c88; end: 108191ce7;  */

void FUN_108191c88(undefined1 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  long lStack_30;
  undefined4 uStack_24;
  
  *param_1 = 0;
  param_1[4] = 0;
  uStack_24 = 0;
  lVar1 = param_2;
  lStack_38 = param_2;
  _strlen();
  lStack_30 = param_2 + lVar1;
  plVar2 = &lStack_38;
  FUN_108190754(plVar2,&uStack_24);
  if ((int)plVar2 != 0) {
    FUN_108191ce8(param_1,&uStack_24);
  }
  return;
}



/* Entry: 108191ce8; end: 108191d03;  */

void FUN_108191ce8(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  if ((*(byte *)((long)param_1 + 4) & 1) == 0) {
    *(undefined1 *)((long)param_1 + 4) = 1;
  }
  *(undefined4 *)param_1 = uVar1;
  if ((*(byte *)((long)param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_1081a4318();
  *param_1 = &PTR_FUN_110a2ca18;
  param_1[0x5f] = param_1 + 0x5e;
  param_1[0x60] = 0x200000000;
  return;
}



/* Entry: 108191d04; end: 108191d4f;  */

void FUN_108191d04(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_1081a4318();
  *param_1 = &PTR_FUN_110a2ca18;
  param_1[0x5f] = param_1 + 0x5e;
  param_1[0x60] = 0x200000000;
  return;
}



/* Entry: 108191d50; end: 108191e2b;  */

undefined1 * FUN_108191d50(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  iVar4 = *(int *)(param_1 + 0x300);
  if (iVar4 < (int)(*(uint *)(param_1 + 0x304) >> 1)) {
    lVar5 = *(long *)(param_1 + 0x2f8);
    uVar6 = *param_2;
    *param_2 = 0;
    *(undefined8 *)(lVar5 + (long)iVar4 * 8) = uVar6;
    puVar2 = param_1;
  }
  else {
    if (iVar4 == 0x7fffffff) {
      func_0x00010bdb1a68();
      return (undefined1 *)(ulong)(*(int *)(param_1 + 0x300) != 0);
    }
    uStack_38 = 0x7fffffff;
    uStack_40 = 8;
    uVar3 = (ulong)(iVar4 + 1);
    FUN_10840fe24(0x3ff8000000000000);
    iVar4 = *(int *)(param_1 + 0x300);
    uVar6 = *param_2;
    *param_2 = 0;
    *(undefined8 *)((long)puVar1 + (long)iVar4 * 8) = uVar6;
    puVar2 = (undefined1 *)puVar1;
    if (iVar4 != 0) {
      _memcpy(puVar1,*(undefined8 *)(param_1 + 0x2f8),(long)iVar4 << 3);
    }
    if ((param_1[0x304] & 1) != 0) {
      puVar2 = *(undefined1 **)(param_1 + 0x2f8);
      _free(puVar2);
    }
    uVar3 = uVar3 >> 3;
    if (0x7ffffffe < uVar3) {
      uVar3 = 0x7fffffff;
    }
    *(undefined8 **)(param_1 + 0x2f8) = puVar1;
    *(uint *)(param_1 + 0x304) = (int)uVar3 << 1 | 1;
    iVar4 = *(int *)(param_1 + 0x300);
  }
  *(int *)(param_1 + 0x300) = iVar4 + 1;
  return puVar2;
}



/* Entry: 108191e2c; end: 108191e3b;  */

bool FUN_108191e2c(long param_1)

{
  return *(int *)(param_1 + 0x300) != 0;
}



/* Entry: 108191e3c; end: 108191e8b;  */

void FUN_108191e3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 < *(int *)(param_1 + 0x300); lVar1 = lVar1 + 1) {
    FUN_10819c370(*(undefined8 *)(*(long *)(param_1 + 0x2f8) + lVar1 * 8),param_2);
  }
  return;
}



/* Entry: 108191e8c; end: 108191f37;  */

void FUN_108191e8c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 auStack_40 [2];
  
  FUN_108376ad8(param_1);
  for (lVar1 = 0; lVar1 < *(int *)(param_2 + 0x300); lVar1 = lVar1 + 1) {
    FUN_10819c458(auStack_40,*(undefined8 *)(*(long *)(param_2 + 0x2f8) + lVar1 * 8),param_3);
    FUN_1081f0148(param_1,auStack_40,2,param_1);
    FUN_10837ca5c(auStack_40[0]);
  }
  func_0x0001081a43c8(param_2,param_1);
  return;
}



/* Entry: 108191f38; end: 108191fb7;  */

ulong FUN_108191f38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   long param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong auStack_40 [2];
  
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  for (lVar2 = 0; lVar2 < *(int *)(param_5 + 0x300); lVar2 = lVar2 + 1) {
    plVar1 = *(long **)(*(long *)(param_5 + 0x2f8) + lVar2 * 8);
    (**(code **)(*plVar1 + 0x58))(plVar1,param_6);
    uStack_50 = param_1;
    uStack_4c = param_2;
    uStack_48 = param_3;
    uStack_44 = param_4;
    func_0x00010838ed50(auStack_40,&uStack_50);
  }
  return auStack_40[0] & 0xffffffff;
}



/* Entry: 108191fb8; end: 108191fbb;  */

undefined8 * FUN_108191fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108191fbc; end: 108191fcf;  */

void FUN_108191fbc(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108191fd0; end: 108191fdf;  */

void FUN_108191fd0(void)

{
  return;
}



/* Entry: 108191fe0; end: 108192273;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108191fe0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long lVar10;
  int extraout_w10;
  int extraout_w11;
  undefined4 uVar11;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long alStack_c8 [2];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  FUN_1081fdf90(auStack_a0);
  puVar7 = auStack_a0;
  FUN_1081fdfe4(puVar7,param_5);
  if (puVar7 == (undefined1 *)0x0) {
    *param_1 = 0;
  }
  else {
    uStack_b0 = 0;
    uStack_a8 = 0;
    puStack_b8 = &uStack_b0;
    alStack_c8[1] = 0;
    FUN_108192274(alStack_c8,alStack_c8 + 1,uStack_70);
    if ((alStack_c8[0] == 0) || (*(int *)(alStack_c8[0] + 0xc) != 0x27)) {
      *param_1 = 0;
    }
    else {
      puVar8 = (undefined8 *)param_4[1];
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x10;
        __Znwm();
        *puVar8 = &PTR_FUN_110a2cd18;
        puVar8[1] = 0;
        *(undefined4 *)(puVar8 + 1) = 1;
      }
      else {
        do {
          func_0x0001081943bc();
        } while (extraout_w10 != 0);
      }
      puStack_d0 = puVar8;
      if (param_4[2] == 0) {
        FUN_1081fd994(&uStack_d8);
      }
      else {
        do {
          func_0x0001081943a0();
          uStack_d8 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puVar9 = (undefined8 *)0x48;
      __Znwm();
      uVar6 = uStack_a8;
      lVar5 = alStack_c8[0];
      puVar8 = puStack_d0;
      uVar4 = uStack_d8;
      alStack_c8[0] = 0;
      lVar10 = *param_4;
      if (lVar10 != 0) {
        piVar1 = (int *)(lVar10 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_d8 = 0;
      puStack_d0 = (undefined8 *)0x0;
      *(undefined4 *)(puVar9 + 1) = 1;
      *puVar9 = &PTR_FUN_110a2caa8;
      puVar9[2] = lVar5;
      uStack_e8 = 0;
      uStack_e0 = 0;
      puVar9[3] = lVar10;
      puVar9[4] = uVar4;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puVar9[5] = puVar8;
      puVar9[7] = 0;
      puVar9[6] = uStack_b0;
      uStack_a8 = 0;
      FUN_108193828(puVar9 + 7,uVar6);
      uVar11 = 0;
      uStack_b0 = 0;
      uStack_60 = 0;
      uStack_58 = 0x42b40000;
      FUN_1081a14c8(puVar9[2],&uStack_60);
      *(undefined4 *)(puVar9 + 8) = uVar11;
      *(undefined4 *)((long)puVar9 + 0x44) = param_3;
      *param_1 = puVar9;
      func_0x000108143710(&uStack_f8);
      func_0x0001081419f4(&uStack_f0);
      FUN_10812cc0c(&uStack_e8);
      FUN_1081940f8(&uStack_e0);
      func_0x000108143710(&uStack_d8);
      func_0x0001081419f4(&puStack_d0);
    }
    func_0x000108194374();
    func_0x000108194420();
  }
  FUN_1081fdfbc(auStack_a0);
  return;
}



/* Entry: 108192274; end: 108192687;  */

void FUN_108192274(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long lVar11;
  int extraout_w11;
  undefined8 uVar12;
  int *piVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  
  if (*(char *)((long)param_3 + 0x22) == '\x01') {
    plVar5 = (long *)0x2f8;
    __Znwm();
    func_0x000108192834();
    *plVar5 = (long)&PTR_FUN_110a2e928;
    func_0x0001081943b0();
    plVar5[0x5e] = extraout_x8;
    plStack_78 = plVar5;
    FUN_1083a3348(&lStack_68,*param_3);
    lVar10 = plVar5[0x5e];
    if (lVar10 != lStack_68) {
      plVar5[0x5e] = lStack_68;
      lStack_68 = lVar10;
    }
    FUN_1083a3ca0(lStack_68);
    plStack_78 = (long *)0x0;
    plStack_90 = plVar5;
    (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,&plStack_90);
    FUN_108191c38(&plStack_90);
    *param_1 = 0;
    FUN_108192854(&plStack_78);
    return;
  }
  uVar12 = *param_3;
  uVar6 = uVar12;
  _strcmp(uVar12,"svg");
  if ((int)uVar6 == 0) {
    lVar10 = *param_2;
    plVar5 = (long *)0x348;
    __Znwm();
    func_0x000108191d1c();
    *plVar5 = (long)&PTR_FUN_110a2e500;
    plVar5[0x61] = 0x100000000;
    plVar5[0x62] = 0x100000000;
    plVar5[99] = 0x242c80000;
    plVar5[100] = 0x242c80000;
    plVar5[0x65] = 5;
    *(undefined1 *)(plVar5 + 0x66) = 0;
    *(undefined1 *)(plVar5 + 0x68) = 0;
    *(uint *)((long)plVar5 + 0x344) = (uint)(lVar10 != 0);
    plStack_78 = (long *)0x0;
    plStack_98 = plVar5;
    FUN_1081940f8(&plStack_78);
LAB_1081923f8:
    if (plStack_98 != (long *)0x0) {
      piVar13 = (int *)param_2[1];
      puVar14 = (undefined8 *)param_3[3];
      puVar1 = puVar14 + (ulong)*(ushort *)(param_3 + 4) * 2;
      while ((puVar14 < puVar1 && (pcVar9 = (char *)*puVar14, pcVar9 != (char *)0x0))) {
        puVar8 = puVar14 + 1;
        puVar14 = puVar14 + 2;
        if ((*pcVar9 == 'i') && ((pcVar9[1] == 'd' && (pcVar9[2] == '\0')))) {
          FUN_1083a3348(&uStack_80,*puVar8);
          lVar10 = 0;
          if (plStack_98 != (long *)0x0) {
            do {
              func_0x0001081943a0();
              lVar10 = extraout_x8_00;
            } while (extraout_w11 != 0);
          }
          lStack_88 = lVar10;
          FUN_1083a33c4(&plStack_78,&uStack_80);
          lStack_70 = lStack_88;
          lStack_88 = 0;
          uVar2 = piVar13[1];
          if ((int)(uVar2 * 3) <= *piVar13 * 4) {
            uVar3 = uVar2 << 1;
            if ((int)uVar2 < 1) {
              uVar3 = 4;
            }
            *piVar13 = 0;
            piVar13[1] = uVar3;
            lVar10 = *(long *)(piVar13 + 2);
            piVar13[2] = 0;
            piVar13[3] = 0;
            puVar8 = (undefined8 *)((ulong)uVar3 * 0x18 + 0x10);
            lStack_68 = lVar10;
            __Znam();
            *puVar8 = 0x18;
            puVar8[1] = (ulong)uVar3;
            if (uVar3 != 0) {
              lVar11 = (ulong)uVar3 * 0x18;
              puVar8 = puVar8 + 2;
              do {
                *(undefined4 *)puVar8 = 0;
                lVar11 = lVar11 + -0x18;
                puVar8 = puVar8 + 3;
              } while (lVar11 != 0);
            }
            FUN_108193828(piVar13 + 2);
            lVar10 = lVar10 + 8;
            for (uVar15 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar15 != 0;
                uVar15 = uVar15 - 1) {
              if (*(int *)(lVar10 + -8) != 0) {
                FUN_108193764(piVar13,lVar10);
              }
              lVar10 = lVar10 + 0x18;
            }
            func_0x0001081938c4(&lStack_68);
          }
          FUN_108193764(piVar13,&plStack_78);
          FUN_10819397c(&plStack_78);
          FUN_108191c38(&lStack_88);
          FUN_1083a3ca0(uStack_80);
        }
        else {
          FUN_108192788(&plStack_98);
        }
      }
      lStack_70 = param_2[1];
      plStack_78 = plStack_98;
      plVar5 = param_3 + 1;
      while (plVar4 = plStack_98, lVar10 = *plVar5, lVar10 != 0) {
        FUN_108192274(&lStack_68,&plStack_78,lVar10);
        lVar11 = lStack_68;
        if (lStack_68 != 0) {
          lStack_68 = 0;
          lStack_a0 = lVar11;
          (**(code **)(*plStack_98 + 0x18))(plStack_98,&lStack_a0);
          FUN_108191c38(&lStack_a0);
        }
        func_0x000108194374();
        plVar5 = (long *)(lVar10 + 0x10);
      }
      plStack_98 = (long *)0x0;
      *param_1 = plVar4;
      goto LAB_1081925d0;
    }
  }
  else {
    ppuVar7 = &PTR_DAT_113254310;
    FUN_10840f5ac(&PTR_DAT_113254310,0x2c,uVar12,0x10);
    if (-1 < (int)ppuVar7) {
      (*(code *)(&PTR_FUN_113254318)[((ulong)ppuVar7 & 0xffffffff) * 2])(&plStack_98);
      goto LAB_1081923f8;
    }
    plStack_98 = (long *)0x0;
  }
  *param_1 = 0;
LAB_1081925d0:
  FUN_108191c38(&plStack_98);
  return;
}



/* Entry: 108192688; end: 108192767;  */

void FUN_108192688(long param_1,long param_2)

{
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  undefined8 *puStack_628;
  undefined1 uStack_620;
  undefined1 uStack_614;
  undefined1 *puStack_610;
  undefined1 uStack_608;
  undefined1 uStack_348;
  long lStack_340;
  undefined4 uStack_338;
  undefined1 uStack_330;
  undefined1 uStack_320;
  undefined4 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [696];
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x40);
    uStack_38 = 0x42b40000;
    FUN_10819f9f0(auStack_300);
    uStack_308 = 0;
    uStack_310 = 0;
    lStack_648 = param_1 + 0x18;
    lStack_638 = param_1 + 0x28;
    lStack_630 = param_1 + 0x30;
    lStack_640 = param_1 + 0x20;
    puStack_628 = &uStack_40;
    uStack_620 = 0;
    uStack_614 = 0;
    uStack_608 = 0;
    uStack_348 = 0;
    uStack_338 = *(undefined4 *)(param_2 + 0xc60);
    uStack_330 = 0;
    uStack_320 = 0;
    uStack_318 = 0x3f800000;
    puStack_610 = auStack_300;
    lStack_340 = param_2;
    FUN_10819c370(*(undefined8 *)(param_1 + 0x10),&lStack_648);
    FUN_10819fae8(&lStack_648);
    FUN_10818e868(auStack_2f8);
  }
  return;
}



/* Entry: 108192768; end: 108192787;  */

long FUN_108192768(long param_1)

{
  long lVar1;
  
  FUN_108194148();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 108192788; end: 10819281b;  */

void FUN_108192788(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x20))();
  if (((ulong)plVar1 & 1) == 0) {
    ppuVar2 = &PTR_s_cx_1132545d0;
    FUN_10840f5ac(&PTR_s_cx_1132545d0,0x16,param_2,0x18);
    if (-1 < (int)ppuVar2) {
                    /* WARNING: Could not recover jumptable at 0x000108192804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_FUN_1132545e0)[((ulong)ppuVar2 & 0xffffffff) * 3])
                (param_1,*(undefined4 *)(((ulong)ppuVar2 & 0xffffffff) * 0x18 + 0x1132545d8),param_3
                );
      return;
    }
  }
  return;
}



/* Entry: 10819281c; end: 10819281f;  */

undefined8 * FUN_10819281c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2caa8;
  func_0x0001081938c4(param_1 + 7);
  func_0x0001081419f4(param_1 + 5);
  func_0x000108143710(param_1 + 4);
  FUN_10812cc0c(param_1 + 3);
  FUN_1081940f8(param_1 + 2);
  return param_1;
}



/* Entry: 108192820; end: 108192853;  */

void FUN_108192820(void)

{
  FUN_1081941d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108192854; end: 108192893;  */

void FUN_108192854(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108194320();
  if (param_1 != 0) {
    do {
      func_0x00010819437c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108194358();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108192894; end: 1081928b3;  */

void FUN_108192894(void)

{
  func_0x00010819445c();
  func_0x00010819432c();
  return;
}



/* Entry: 1081928b4; end: 1081928e3;  */

void FUN_1081928b4(undefined8 *param_1,undefined8 param_2)

{
  func_0x000108194418();
  FUN_108191670();
  *param_1 = param_2;
  return;
}



/* Entry: 1081928e4; end: 10819290f;  */

void FUN_1081928e4(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108194294();
  FUN_1081919a4();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108192910; end: 10819294f;  */

void FUN_108192910(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000108194418();
  func_0x0001081919cc();
  *param_2 = &PTR_FUN_110a2cb78;
  *param_1 = param_2;
  return;
}



/* Entry: 108192950; end: 10819297b;  */

void FUN_108192950(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000108194288();
  FUN_1081944a4();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10819297c; end: 1081929cb;  */

void FUN_10819297c(long param_1)

{
  undefined8 extraout_x8;
  long *unaff_x19;
  
  func_0x00010819426c();
  func_0x0001081933f0();
  func_0x0001081942a0(&UNK_110a2cf78);
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x358) = 7;
  func_0x0001081943b0();
  *(undefined8 *)(param_1 + 0x360) = extraout_x8;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1081929cc; end: 108192a17;  */

void FUN_1081929cc(long param_1)

{
  long *unaff_x19;
  
  func_0x000108194450();
  func_0x0001081933f0();
  func_0x0001081942a0(&UNK_110a2d078);
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108192a18; end: 108192a53;  */

void FUN_108192a18(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001081942e8();
  func_0x0001081933f0();
  func_0x0001081942a0(&UNK_110a2d1e8);
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108192a54; end: 108192aaf;  */

void FUN_108192a54(long param_1)

{
  undefined8 extraout_x8;
  long *unaff_x19;
  
  func_0x0001081942dc();
  func_0x0001081933f0();
  func_0x0001081942a0(&UNK_110a2d2f0);
  func_0x0001081943b0();
  *(undefined4 *)(param_1 + 0x350) = 7;
  *(undefined8 *)(param_1 + 0x358) = extraout_x8;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108192ab0; end: 108192af3;  */

void FUN_108192ab0(long param_1)

{
  long *unaff_x19;
  
  func_0x00010819426c();
  FUN_108193484();
  func_0x0001081942a0(&UNK_110a2d870);
  *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108192af4; end: 108192b4f;  */

void FUN_108192af4(long param_1)

{
  long *unaff_x19;
  
  func_0x000108194450();
  func_0x0001081933f0();
  func_0x0001081942a0(&UNK_110a2d3d8);
  *(undefined4 *)(param_1 + 0x350) = 7;
  *(undefined8 *)(param_1 + 0x358) = 0x1138270b0;
  *(undefined8 *)(param_1 + 0x360) = 0x300000003;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108192b50; end: 108192b93;  */

void FUN_108192b50(long param_1)

{
  long *unaff_x19;
  
  func_0x000108194294();
  func_0x0001081934b4();
  func_0x0001081942a0(&UNK_110a2d678);
  *(undefined8 *)(param_1 + 0x308) = 0;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108192b94; end: 108192bcf;  */

void FUN_108192b94(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001081942e8();
  func_0x0001081933f0();
  func_0x0001081942a0(&UNK_110a2d480);
  *unaff_x19 = param_1;
  return;
}



/* Entry: 108192bd0; end: 108192c03;  */

void FUN_108192bd0(void)

{
  func_0x0001081942bc();
  FUN_1081934f0();
  func_0x00010819425c();
  return;
}



/* Entry: 108192c04; end: 108192c37;  */

void FUN_108192c04(void)

{
  func_0x0001081942bc();
  FUN_1081934f0();
  func_0x00010819425c();
  return;
}



/* Entry: 108192c38; end: 108192c6b;  */

void FUN_108192c38(void)

{
  func_0x0001081942bc();
  FUN_1081934f0();
  func_0x00010819425c();
  return;
}


