/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081a3ab8; end: 1081a3ae3;  */

long * FUN_1081a3ab8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 1081a3ae4; end: 1081a3b33;  */

void FUN_1081a3ae4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  uVar1 = param_2[1];
  *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  param_2[5] = 0;
  param_2[4] = 0;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_2[7] = 0;
  param_2[6] = 0;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  return;
}



/* Entry: 1081a3b34; end: 1081a3b4b;  */

void FUN_1081a3b34(void)

{
  func_0x0001081a4178();
  func_0x0001081a4178();
  return;
}



/* Entry: 1081a3b4c; end: 1081a3b53;  */

void FUN_1081a3b4c(void)

{
  return;
}



/* Entry: 1081a3b54; end: 1081a3b73;  */

void FUN_1081a3b54(undefined8 *param_1)

{
  func_0x0001081a42b8();
  *param_1 = &PTR_FUN_110a2e798;
  return;
}



/* Entry: 1081a3b74; end: 1081a3b93;  */

void FUN_1081a3b74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a2e798;
  return;
}



/* Entry: 1081a3b94; end: 1081a3be3;  */

void FUN_1081a3b94(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  int iVar1;
  undefined1 in_OV;
  long *plVar2;
  code *extraout_x8;
  long unaff_x20;
  long lVar3;
  long *unaff_x21;
  int iVar4;
  undefined1 auStack_70 [8];
  int iStack_68;
  long lStack_58;
  
  lVar3 = *param_5;
  if (*param_4 != 0) {
    func_0x0001081a4304();
    FUN_108128258();
  }
  if (lVar3 != 0) {
    func_0x0001081a4304();
    lVar3 = *param_2;
    if (lVar3 != 0) {
      func_0x000108341f70();
      FUN_108183110(lVar3 + 4);
      func_0x000108342220();
      if (!(bool)in_OV) {
        iVar4 = 0;
        lStack_58 = unaff_x20 + 0x28;
        do {
          plVar2 = &lStack_58;
          FUN_1083a8494(plVar2,auStack_70);
          if ((int)plVar2 == 0) {
            func_0x00010834225c(*(undefined8 *)(*unaff_x21 + 0xf0),unaff_x21,unaff_x20);
            (*extraout_x8)();
            return;
          }
          iVar1 = 0x200000 - iVar4;
          iVar4 = iStack_68 + iVar4;
        } while (iStack_68 <= iVar1);
      }
    }
    return;
  }
  return;
}



/* Entry: 1081a3be4; end: 1081a3c0f;  */

void FUN_1081a3be4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001081a4278(param_2,param_1,&PTR_DAT_110a2e808);
  func_0x0001081a4244();
  return;
}



/* Entry: 1081a3c10; end: 1081a3c1b;  */

undefined ** FUN_1081a3c10(void)

{
  return &PTR_DAT_110a2e808;
}



/* Entry: 1081a3c1c; end: 1081a3c5f;  */

long * FUN_1081a3c1c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1081a3c60; end: 1081a3c67;  */

void FUN_1081a3c60(void)

{
  return;
}



/* Entry: 1081a3c68; end: 1081a3c93;  */

void FUN_1081a3c68(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001081a42b8();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_110a2e828;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1081a3c94; end: 1081a3cb7;  */

void FUN_1081a3c94(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a2e828;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1081a3cb8; end: 1081a3e3b;  */

void FUN_1081a3cb8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined4 *param_6,long *param_7)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  ulong uStack_470;
  long alStack_468 [129];
  int iStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*param_7 != 0) {
    iStack_60 = 0;
    uStack_470 = *param_7 + 0x2fU & 0xfffffffffffffff8;
    alStack_468[0] = 0;
    while (uVar2 = uStack_470, uStack_470 != 0) {
      FUN_1081a3e74(alStack_468,*(undefined4 *)(uStack_470 + 0x18));
      param_6 = (undefined4 *)(uVar2 + 0x28);
      FUN_1081836dc(uVar2,param_6,*(undefined4 *)(uVar2 + 0x18),alStack_468[0],0);
      lVar7 = 0;
      uVar8 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0x3f800000;
      uStack_488 = 0;
      uStack_490 = 0x3f800000;
      uStack_480 = 0x3f800000;
      while( true ) {
        uVar5 = (ulong)*(uint *)(uVar2 + 0x18);
        in_ZR = uVar8 == uVar5;
        if (uVar5 <= uVar8) break;
        lVar1 = uVar2 + lVar7 + (uVar5 * 2 + 3 & 0x3fffffffc);
        uStack_4a0 = CONCAT44(-*(float *)(lVar1 + 0x2c),*(undefined4 *)(lVar1 + 0x28));
        uStack_498 = CONCAT44(*(undefined4 *)(lVar1 + 0x2c),*(undefined4 *)(lVar1 + 0x30));
        uStack_490 = CONCAT44(*(undefined4 *)(lVar1 + 0x34),*(undefined4 *)(lVar1 + 0x28));
        uStack_488 = 0;
        uStack_480 = 0x3f800000;
        uStack_47c = 0xc0;
        if ((long)iStack_60 <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1081a3e24);
          (*pcVar4)();
        }
        uVar6 = *(undefined8 *)(param_5 + 8);
        uVar3 = *(undefined4 *)(lVar1 + 0x34);
        func_0x000108142084(&uStack_4a0,alStack_468[0] + lVar7,1);
        uStack_4b0 = uVar3;
        param_6 = &uStack_4b0;
        uStack_4ac = param_2;
        uStack_4a8 = param_3;
        uStack_4a4 = param_4;
        func_0x00010838ed50(uVar6);
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
      }
      FUN_1083a79c8(&uStack_470);
    }
    FUN_1081a3eec();
  }
  func_0x0001081a412c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1081a3eec(alStack_468);
  func_0x0001081a4170();
  func_0x0001081a4278(param_6);
  func_0x0001081a4244();
  return;
}



/* Entry: 1081a3e3c; end: 1081a3e67;  */

void FUN_1081a3e3c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001081a4278(param_2,param_1,&PTR_DAT_110a2e888);
  func_0x0001081a4244();
  return;
}



/* Entry: 1081a3e68; end: 1081a3e73;  */

undefined ** FUN_1081a3e68(void)

{
  return &PTR_DAT_110a2e888;
}



/* Entry: 1081a3e74; end: 1081a3eeb;  */

void FUN_1081a3e74(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (*(uint *)(param_1 + 0x81) != param_2) {
    if (0x40 < (int)*(uint *)(param_1 + 0x81)) {
      _free();
    }
    if ((int)param_2 < 0x41) {
      puVar2 = param_1 + 1;
      if ((int)param_2 < 1) {
        puVar2 = (undefined8 *)0x0;
      }
    }
    else {
      puVar2 = (undefined8 *)(ulong)param_2;
      FUN_10840ffdc(puVar2,0x10);
    }
    *param_1 = puVar2;
    *(uint *)(param_1 + 0x81) = param_2;
  }
  puVar1 = puVar2 + (long)(int)param_2 * 2;
  for (; puVar2 < puVar1; puVar2 = puVar2 + 2) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  return;
}



/* Entry: 1081a3eec; end: 1081a3f13;  */

undefined8 FUN_1081a3eec(undefined8 param_1)

{
  FUN_1081a3e74(param_1,0);
  return param_1;
}



/* Entry: 1081a3f14; end: 1081a3f1b;  */

void FUN_1081a3f14(void)

{
  return;
}



/* Entry: 1081a3f1c; end: 1081a3f47;  */

void FUN_1081a3f1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001081a42b8();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_110a2e8a8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1081a3f48; end: 1081a3f6b;  */

void FUN_1081a3f48(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a2e8a8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1081a3f6c; end: 1081a4017;  */

void FUN_1081a3f6c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uStack_28;
  
  if (*param_3 != 0) {
    uStack_28 = *param_3 + 0x2fU & 0xfffffffffffffff8;
    while (uStack_28 != 0) {
      FUN_10835077c();
      FUN_1083a79c8(&uStack_28);
    }
  }
  return;
}



/* Entry: 1081a4018; end: 1081a4023;  */

undefined ** FUN_1081a4018(void)

{
  return &PTR_DAT_110a2e908;
}



/* Entry: 1081a4024; end: 1081a40d3;  */

void FUN_1081a4024(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_58 [2];
  undefined4 uStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)param_3[1];
  param_3[1] = puVar1 + 4;
  if (param_1 != 0) {
    uStack_48 = *puVar1;
    fStack_44 = -(float)*(undefined8 *)(puVar1 + 1);
    uStack_40 = NEON_rev64(*(undefined8 *)(puVar1 + 1),4);
    uStack_34 = puVar1[3];
    uStack_30 = 0;
    uStack_28 = 0x3f800000;
    uStack_24 = 0xc0;
    uStack_38 = uStack_48;
    FUN_108363e94(&uStack_48);
    uVar2 = *param_3;
    FUN_1081a40d4(auStack_58,param_1,&uStack_48,1);
    FUN_10837da34(uVar2,auStack_58);
    FUN_10837ca5c(auStack_58[0]);
  }
  return;
}



/* Entry: 1081a40d4; end: 1081a411f;  */

void FUN_1081a40d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_108376ad8(param_1);
  FUN_1083796e4(param_2,param_3,param_1,param_4);
  return;
}



/* Entry: 1081a4120; end: 1081a4317;  */

void FUN_1081a4120(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081a4128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1081a4318; end: 1081a4353;  */

void FUN_1081a4318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10819c26c();
  *param_1 = &PTR_FUN_110a2ebc0;
  uVar3 = uRam0000000113254e38;
  uVar2 = uRam0000000113254e30;
  uVar1 = uRam0000000113254e20;
  param_1[0x5a] = uRam0000000113254e28;
  param_1[0x59] = uVar1;
  param_1[0x5c] = uVar3;
  param_1[0x5b] = uVar2;
  param_1[0x5d] = uRam0000000113254e40;
  return;
}



/* Entry: 1081a4354; end: 1081a439b;  */

bool FUN_1081a4354(long *param_1,long param_2)

{
  bool bVar1;
  int *piVar2;
  long *plVar3;
  
  plVar3 = param_1 + 0x59;
  func_0x0001081420b8();
  if (((ulong)plVar3 & 1) == 0) {
    func_0x0001081a0698(param_2);
    FUN_10833e2b0(*(undefined8 *)(param_2 + 0x308),param_1 + 0x59);
  }
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x50))();
  FUN_10819fb68(param_2,param_1 + 2,(uint)plVar3 ^ 1);
  piVar2 = (int *)(*(long *)(param_2 + 0x38) + 0x124);
  FUN_10819df08();
  if (*piVar2 == 1) {
    bVar1 = false;
  }
  else {
    bVar1 = (int)param_1[0x3d] != 2 || *(int *)((long)param_1 + 0x1ec) != 1;
  }
  return bVar1;
}



/* Entry: 1081a439c; end: 1081a43ef;  */

void FUN_1081a439c(long param_1,int param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0x24 && *param_3 == 8) {
    puVar1 = *(undefined8 **)(param_3 + 2);
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar5 = puVar1[3];
    uVar4 = puVar1[2];
    *(undefined8 *)(param_1 + 0x2e8) = puVar1[4];
    *(undefined8 *)(param_1 + 0x2d0) = uVar3;
    *(undefined8 *)(param_1 + 0x2c8) = uVar2;
    *(undefined8 *)(param_1 + 0x2e0) = uVar5;
    *(undefined8 *)(param_1 + 0x2d8) = uVar4;
  }
  return;
}



/* Entry: 1081a43f0; end: 1081a447b;  */

void FUN_1081a43f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,long param_6)

{
  long *plVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  (**(code **)(*param_5 + 0x60))();
  func_0x0001081a4484();
  if (*(long **)(param_6 + 0x338) != param_5) {
    plVar1 = param_5 + 0x59;
    uStack_50 = param_1;
    uStack_4c = param_2;
    uStack_48 = param_3;
    uStack_44 = param_4;
    func_0x0001081420b8();
    if (((ulong)plVar1 & 1) == 0) {
      func_0x000108142084(param_5 + 0x59,&uStack_50,1);
      func_0x0001081a4484();
    }
  }
  return;
}



/* Entry: 1081a447c; end: 1081a4497;  */

void FUN_1081a447c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1081a4480);
  (*pcVar1)();
}



/* Entry: 1081a4498; end: 1081a44d7;  */

void FUN_1081a4498(undefined8 *param_1)

{
  FUN_1081a4318(param_1,0x2c);
  *param_1 = &PTR_FUN_110a2ec50;
  param_1[0x5e] = 0x100000000;
  param_1[0x5f] = 0x100000000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0x1138270b0;
  return;
}



/* Entry: 1081a44d8; end: 1081a44db;  */

void FUN_1081a44d8(void)

{
  return;
}



/* Entry: 1081a44dc; end: 1081a45bb;  */

char FUN_1081a44dc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 auStack_68 [2];
  long lStack_60;
  char cStack_58;
  undefined8 uStack_50;
  char cStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    func_0x0001081a47f8(&uStack_40,&DAT_10f62b0e2);
    if (cStack_38 == '\x01') {
      *(undefined8 *)(param_1 + 0x2f0) = uStack_40;
    }
    else {
      func_0x0001081a47f8(&uStack_50,"y");
      if (cStack_48 != '\x01') {
        FUN_10819790c(auStack_68,"xlink:href",param_2,param_3);
        if (cStack_58 == '\x01') {
          *(undefined4 *)(param_1 + 0x300) = auStack_68[0];
          lVar2 = *(long *)(param_1 + 0x308);
          if (lVar2 != lStack_60) {
            *(long *)(param_1 + 0x308) = lStack_60;
            lStack_60 = lVar2;
          }
        }
        FUN_1081940c8(auStack_68);
        return cStack_58;
      }
      *(undefined8 *)(param_1 + 0x2f8) = uStack_50;
    }
  }
  return '\x01';
}



/* Entry: 1081a45bc; end: 1081a462b;  */

void FUN_1081a45bc(long param_1,long param_2)

{
  long lVar1;
  
  if (((**(int **)(param_1 + 0x308) != 0) && (lVar1 = param_1, FUN_1081a4354(), (int)lVar1 != 0)) &&
     ((*(float *)(param_1 + 0x2f0) != 0.0 || (*(float *)(param_1 + 0x2f8) != 0.0)))) {
    func_0x0001081a0698(param_2);
    FUN_10833e1e4(*(undefined4 *)(param_1 + 0x2f0),*(undefined4 *)(param_1 + 0x2f8),
                  *(undefined8 *)(param_2 + 0x308));
  }
  return;
}



/* Entry: 1081a462c; end: 1081a466b;  */

void FUN_1081a462c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_1081a47d8();
  if (uStack_28 != 0) {
    FUN_10819c370(uStack_28,param_2);
  }
  func_0x0001081a47e8();
  return;
}



/* Entry: 1081a466c; end: 1081a46bf;  */

void FUN_1081a466c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  FUN_1081a47d8();
  if (uStack_28 == 0) {
    FUN_108376ad8(param_1);
  }
  else {
    FUN_10819c458(param_1,uStack_28,param_3);
  }
  func_0x0001081a47e8();
  return;
}



/* Entry: 1081a46c0; end: 1081a4797;  */

float FUN_1081a46c0(float param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uStack_68;
  
  FUN_1081a47d8();
  if (uStack_68 == (long *)0x0) {
    param_1 = 0.0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010819f85c(uVar1,param_2 + 0x2f0,0);
    fVar2 = param_1;
    func_0x00010819f85c(uVar1,param_2 + 0x2f8,1);
    (**(code **)(*uStack_68 + 0x58))(uStack_68,param_3);
    param_1 = param_1 + fVar2;
  }
  func_0x0001081a47e8();
  return param_1;
}



/* Entry: 1081a4798; end: 1081a479b;  */

undefined8 * FUN_1081a4798(undefined8 *param_1)

{
  FUN_1083a3c7c(param_1 + 0x61);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081a479c; end: 1081a47af;  */

void FUN_1081a479c(void)

{
  FUN_1081a47b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a47b0; end: 1081a47d7;  */

undefined8 * FUN_1081a47b0(undefined8 *param_1)

{
  FUN_1083a3c7c(param_1 + 0x61);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081a47d8; end: 1081a480f;  */

void FUN_1081a47d8(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_1 + 0x300) != 0) {
    return;
  }
  lVar1 = *(long *)(unaff_x19 + 0x18);
  FUN_108192768(lVar1,param_1 + 0x308);
  in_stack_00000008 = 0;
  if (lVar1 != 0) {
    FUN_10819b0c4(&stack0x00000008);
    FUN_10819b0f0(lVar1,0);
  }
  return;
}



/* Entry: 1081a4810; end: 1081a4d8b;  */

undefined8 FUN_1081a4810(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  undefined8 uVar14;
  undefined1 *puVar15;
  long unaff_x20;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  long *plVar21;
  long lStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 *puStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  undefined4 uStack_144;
  long lStack_140;
  undefined1 auStack_138 [192];
  long lStack_78;
  long alStack_70 [2];
  
  func_0x0001081a65ec();
  lVar7 = 0x3a8;
  __Znwm();
  FUN_1081a6630();
  lStack_140 = lVar7 + 0x2b8;
  puVar15 = auStack_138;
  *(undefined8 *)(lVar7 + 0x378) = *(undefined8 *)(lVar7 + 0x370);
  *(undefined8 *)(lVar7 + 0x370) = *(undefined8 *)(lVar7 + 0x368);
  *(undefined8 *)(lVar7 + 0x368) = *(undefined8 *)(lVar7 + 0x360);
  *(undefined1 **)(lVar7 + 0x360) = puVar15;
  lStack_78 = lVar7;
  _setjmp();
  if ((int)puVar15 != 0) {
LAB_1081a488c:
    uVar14 = 6;
    goto LAB_1081a4890;
  }
  func_0x0001081a66d8(lVar7);
  if (unaff_x19 != (undefined8 *)0x0) {
    FUN_1081d0030(lVar7,0xe1,0xffff);
    func_0x0001081a6598();
    func_0x0001081a6598();
  }
  uVar14 = 1;
  lVar16 = lVar7;
  FUN_1081c654c(lVar7,1);
  if ((int)lVar16 == 0) goto LAB_1081a4890;
  if ((int)lVar16 != 1) goto LAB_1081a488c;
  if (unaff_x19 == (undefined8 *)0x0) {
    lStack_78 = 0;
    *param_3 = lVar7;
    uVar14 = 0;
    goto LAB_1081a4890;
  }
  lVar16 = lVar7;
  func_0x0001081a6604(lVar7,&uStack_144);
  if ((int)lVar16 == 0) goto LAB_1081a488c;
  plVar21 = (long *)(lVar7 + 400);
  puStack_188 = (undefined1 *)0x0;
  puStack_180 = (undefined1 *)0x0;
  puStack_178 = (undefined1 *)0x0;
  puVar15 = (undefined1 *)0x0;
  puVar19 = (undefined1 *)0x0;
  puVar18 = (undefined1 *)0x0;
  while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
    func_0x00010813fad0(alStack_70,plVar21[3],*(undefined4 *)(plVar21 + 2));
    if (puVar19 < puVar15) {
      func_0x0001081a65cc(puVar19);
      puVar20 = puVar18;
      puVar2 = puVar19;
    }
    else {
      lVar16 = (long)puVar19 - (long)puVar18 >> 4;
      uVar1 = lVar16 + 1;
      if (uVar1 >> 0x3c != 0) {
        func_0x0001081a6480();
LAB_1081a4c98:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1081a4c9c);
        (*pcVar6)();
      }
      uVar12 = (long)puVar15 - (long)puVar18 >> 3;
      if (uVar12 <= uVar1) {
        uVar12 = uVar1;
      }
      if (0x7fffffffffffffef < (ulong)((long)puVar15 - (long)puVar18)) {
        uVar12 = 0xfffffffffffffff;
      }
      if (uVar12 == 0) {
        lVar8 = 0;
      }
      else {
        if (uVar12 >> 0x3c != 0) {
          func_0x000104bd35f4();
          goto LAB_1081a4c98;
        }
        lVar8 = uVar12 << 4;
        __Znwm();
      }
      puVar2 = (undefined1 *)(lVar8 + ((long)puVar19 - (long)puVar18));
      func_0x0001081a65cc(puVar2);
      puVar20 = puVar2 + lVar16 * -0x10;
      puVar10 = puVar20;
      for (puVar15 = puVar18; puVar17 = puVar18, puVar15 != puVar19; puVar15 = puVar15 + 0x10) {
        *puVar10 = *puVar15;
        piVar13 = *(int **)(puVar15 + 8);
        if (piVar13 != (int *)0x0) {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar5) {
              *piVar13 = *piVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(int **)(puVar10 + 8) = piVar13;
        puVar10 = puVar10 + 0x10;
      }
      for (; puVar17 != puVar19; puVar17 = puVar17 + 0x10) {
        func_0x0001078bddf8(puVar17 + 8);
      }
      puVar15 = (undefined1 *)(lVar8 + uVar12 * 0x10);
      puStack_188 = puVar20;
      puStack_178 = puVar15;
      if (puVar18 != (undefined1 *)0x0) {
        __ZdlPv(puVar18);
      }
    }
    puVar19 = puVar2 + 0x10;
    puStack_180 = puVar19;
    func_0x0001078bddf8(alStack_70);
    puVar18 = puVar20;
  }
  FUN_1081a4d8c(&plStack_150,&puStack_188);
  FUN_1081a6388(&puStack_188);
  (**(code **)(*plStack_150 + 0x10))(&lStack_158,plStack_150,0);
  puStack_188 = (undefined1 *)CONCAT44(puStack_188._4_4_,1);
  if (lStack_158 != 0) {
    FUN_10821e704(*(undefined8 *)(lStack_158 + 0x18),*(undefined8 *)(lStack_158 + 0x20),&puStack_188
                 );
  }
  func_0x0001078bddf8(&lStack_158);
  lStack_160 = 0;
  (**(code **)(*plStack_150 + 0x18))(&puStack_188,plStack_150,1);
  puVar15 = puStack_188;
  if (puStack_188 != (undefined1 *)0x0) {
    puStack_188 = (undefined1 *)0x0;
    puStack_168 = puVar15;
    FUN_10821d0e0(alStack_70,&puStack_168);
    alStack_70[0] = 0;
    func_0x0001081a65e4();
    FUN_10814cacc(alStack_70);
    func_0x0001078bddf8(&puStack_168);
  }
  func_0x0001078bddf8(&puStack_188);
  if (lStack_160 == 0) {
LAB_1081a4bb8:
    *param_4 = 0;
    func_0x0001081a65e4();
    lStack_190 = lStack_160;
  }
  else {
    iVar3 = *(int *)(lStack_160 + 0xc);
    lStack_190 = lStack_160;
    if (*(int *)(lStack_78 + 0x3c) - 4U < 2) {
      iVar11 = 0x434d594b;
LAB_1081a4b9c:
      if (iVar3 != iVar11) {
LAB_1081a4ba4:
        func_0x0001081a65e4();
        lStack_190 = lStack_160;
        if (lStack_160 == 0) goto LAB_1081a4bb8;
      }
    }
    else {
      if (*(int *)(lStack_78 + 0x3c) != 1) {
        iVar11 = 0x52474220;
        goto LAB_1081a4b9c;
      }
      if (iVar3 != 0x47524159 && iVar3 != 0x52474220) goto LAB_1081a4ba4;
    }
  }
  lStack_160 = 0;
  FUN_10814ca50(&puStack_188,*(undefined4 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x34),uStack_144,
                0,8,&lStack_190);
  FUN_10814cacc(&lStack_190);
  puVar9 = (undefined8 *)0x498;
  __Znwm();
  lVar7 = lStack_78;
  lStack_78 = 0;
  alStack_70[0] = unaff_x20;
  FUN_10821b60c();
  if (alStack_70[0] != 0) {
    func_0x0001081a6518();
  }
  *puVar9 = &PTR_FUN_110a2ece0;
  puVar9[0x8b] = lVar7;
  *(undefined4 *)(puVar9 + 0x8c) = *(undefined4 *)(lVar7 + 0x24);
  puVar9[0x90] = 0;
  puVar9[0x8f] = 0;
  puVar9[0x92] = 0;
  puVar9[0x91] = 0;
  puVar9[0x8e] = 0;
  puVar9[0x8d] = 0;
  *unaff_x19 = puVar9;
  FUN_10814cacc(auStack_170);
  FUN_10814cacc(&lStack_160);
  plVar21 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    func_0x0001081a6518();
  }
  uVar14 = 0;
LAB_1081a4890:
  func_0x0001081a64e4();
  FUN_1081a6494(&lStack_78);
  return uVar14;
}



/* Entry: 1081a4d8c; end: 1081a4df7;  */

void FUN_1081a4d8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  uVar2 = param_2[2];
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *puVar1 = &PTR_FUN_110a2edf0;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  *param_1 = puVar1;
  FUN_1081a6388(&uStack_38);
  return;
}



/* Entry: 1081a4df8; end: 1081a4eb7;  */

void FUN_1081a4df8(undefined8 *param_1,long *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *param_2;
  *param_2 = 0;
  uStack_48 = 0;
  if (lVar4 == 0) {
    *param_3 = 6;
    *param_1 = 0;
    lVar3 = lVar4;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    lVar3 = lVar4;
    FUN_1081a4810(lVar4,&uStack_38,0,&uStack_40);
    *param_3 = (int)lVar3;
    FUN_10814cacc(&uStack_40);
    iVar2 = *param_3;
    uVar1 = uStack_38;
    if (iVar2 != 0) {
      uVar1 = 0;
    }
    *param_1 = uVar1;
    lVar3 = 0;
    if (iVar2 != 0) {
      lVar3 = lVar4;
    }
  }
  FUN_10814cacc(&uStack_48);
  if (lVar3 != 0) {
    func_0x0001081a6580();
  }
  return;
}



/* Entry: 1081a4eb8; end: 1081a4efb;  */

undefined8 * FUN_1081a4eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ece0;
  func_0x0001081a64b8(param_1 + 0x92);
  func_0x00010815277c(param_1 + 0x8d);
  func_0x0001081a6494(param_1 + 0x8b);
  *param_1 = &PTR_DAT_110a32220;
  FUN_10810a400(param_1 + 8);
  func_0x00010814cb84(param_1 + 6);
  FUN_10814cacc(param_1 + 4);
  return param_1;
}



/* Entry: 1081a4efc; end: 1081a4eff;  */

undefined8 * FUN_1081a4efc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ece0;
  func_0x0001081a64b8(param_1 + 0x92);
  func_0x00010815277c(param_1 + 0x8d);
  func_0x0001081a6494(param_1 + 0x8b);
  *param_1 = &PTR_DAT_110a32220;
  FUN_10810a400(param_1 + 8);
  func_0x00010814cb84(param_1 + 6);
  FUN_10814cacc(param_1 + 4);
  return param_1;
}



/* Entry: 1081a4f00; end: 1081a4f13;  */

void FUN_1081a4f00(void)

{
  FUN_1081a4eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a4f14; end: 1081a4f23;  */

void FUN_1081a4f14(long *param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  long *plVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  undefined4 *puVar17;
  uint *puVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 9) = 8;
  iVar16 = *(int *)((long)param_1 + 0x24);
  if (iVar16 != 0xca) {
    lVar12 = *param_1;
    *(undefined4 *)(lVar12 + 0x28) = 0x14;
    *(int *)(lVar12 + 0x2c) = iVar16;
    (**(code **)*param_1)(param_1);
  }
  uVar21 = *(uint *)(param_1 + 9);
  uVar2 = *(int *)((long)param_1 + 0x44) << 3;
  if (uVar2 <= uVar21) {
    uVar14 = (ulong)*(uint *)(param_1 + 6);
    uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
    *(int *)(param_1 + 0x11) = (int)(uVar14 + 7 >> 3);
    *(int *)((long)param_1 + 0x8c) = (int)(uVar15 + 7 >> 3);
    bVar8 = true;
    *(undefined4 *)(param_1 + 0x34) = 1;
    uVar11 = 1;
    goto LAB_1081d0c18;
  }
  if (uVar21 * 2 < uVar2) {
    if (uVar21 * 3 < uVar2) {
      if (uVar21 * 4 < uVar2) {
        if (uVar21 * 5 < uVar2) {
          if (uVar21 * 6 < uVar2) {
            if (uVar21 * 7 < uVar2) {
              if (uVar2 <= uVar21 * 8) {
                uVar14 = (ulong)*(uint *)(param_1 + 6);
                uVar21 = *(uint *)((long)param_1 + 0x34);
                *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 6);
                *(uint *)((long)param_1 + 0x8c) = uVar21;
                uVar11 = 8;
LAB_1081d0d74:
                uVar15 = (ulong)uVar21;
                bVar8 = false;
                *(uint *)(param_1 + 0x34) = uVar11;
                goto LAB_1081d0c18;
              }
              if (uVar2 <= uVar21 * 9) {
                bVar8 = false;
                uVar14 = (ulong)*(uint *)(param_1 + 6);
                uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
                *(int *)(param_1 + 0x11) = (int)(uVar14 * 9 + 7 >> 3);
                *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 9 + 7 >> 3);
                uVar11 = 9;
                *(undefined4 *)(param_1 + 0x34) = 9;
                goto LAB_1081d0c18;
              }
              if (uVar21 * 10 < uVar2) {
                uVar11 = 0xb;
                if (uVar2 <= uVar21 * 0xb) {
LAB_1081d0ddc:
                  bVar8 = false;
                  uVar14 = (ulong)*(uint *)(param_1 + 6);
                  uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
                  *(int *)(param_1 + 0x11) = (int)(uVar14 * uVar11 + 7 >> 3);
                  *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * uVar11 + 7 >> 3);
                  *(uint *)(param_1 + 0x34) = uVar11;
                  goto LAB_1081d0c18;
                }
                if (uVar21 * 0xc < uVar2) {
                  uVar11 = 0xd;
                  if (uVar2 <= uVar21 * 0xd) goto LAB_1081d0ddc;
                  if (uVar21 * 0xe < uVar2) {
                    uVar14 = (ulong)*(uint *)(param_1 + 6);
                    if (uVar2 <= uVar21 * 0xf) {
                      bVar8 = false;
                      uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
                      *(int *)(param_1 + 0x11) = (int)(uVar14 * 0xf + 7 >> 3);
                      *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 0xf + 7 >> 3);
                      uVar11 = 0xf;
                      *(undefined4 *)(param_1 + 0x34) = 0xf;
                      goto LAB_1081d0c18;
                    }
                    uVar21 = *(uint *)((long)param_1 + 0x34);
                    *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 6) << 1;
                    *(uint *)((long)param_1 + 0x8c) = uVar21 << 1;
                    uVar11 = 0x10;
                    goto LAB_1081d0d74;
                  }
                  uVar11 = 0xe;
                }
                else {
                  uVar11 = 0xc;
                }
              }
              else {
                uVar11 = 10;
              }
              bVar8 = false;
              uVar14 = (ulong)*(uint *)(param_1 + 6);
              uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
              *(int *)(param_1 + 0x11) = (int)(uVar14 * uVar11 + 7 >> 3);
              *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * uVar11 + 7 >> 3);
              *(uint *)(param_1 + 0x34) = uVar11;
              goto LAB_1081d0c18;
            }
            uVar14 = (ulong)*(uint *)(param_1 + 6);
            uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
            *(int *)(param_1 + 0x11) = (int)(uVar14 * 7 + 7 >> 3);
            *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 7 + 7 >> 3);
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
            uVar14 = (ulong)*(uint *)(param_1 + 6);
            uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
            *(int *)(param_1 + 0x11) = (int)(uVar14 * 6 + 7 >> 3);
            *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 6 + 7 >> 3);
          }
        }
        else {
          uVar14 = (ulong)*(uint *)(param_1 + 6);
          uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
          *(int *)(param_1 + 0x11) = (int)(uVar14 * 5 + 7 >> 3);
          *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 5 + 7 >> 3);
          uVar11 = 5;
        }
      }
      else {
        uVar14 = (ulong)*(uint *)(param_1 + 6);
        uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
        *(int *)(param_1 + 0x11) = (int)(uVar14 * 4 + 7 >> 3);
        *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 4 + 7 >> 3);
        uVar11 = 4;
      }
    }
    else {
      uVar14 = (ulong)*(uint *)(param_1 + 6);
      uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
      *(int *)(param_1 + 0x11) = (int)(uVar14 * 3 + 7 >> 3);
      *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 3 + 7 >> 3);
      uVar11 = 3;
    }
  }
  else {
    uVar14 = (ulong)*(uint *)(param_1 + 6);
    uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
    *(int *)(param_1 + 0x11) = (int)(uVar14 * 2 + 7 >> 3);
    *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 2 + 7 >> 3);
    uVar11 = 2;
  }
  *(uint *)(param_1 + 0x34) = uVar11;
  bVar8 = true;
LAB_1081d0c18:
  iVar16 = (int)param_1[7];
  if (0 < iVar16) {
    lVar12 = param_1[0x26];
    puVar18 = (uint *)(lVar12 + 0x24);
    iVar20 = iVar16;
    do {
      *puVar18 = uVar11;
      iVar20 = iVar20 + -1;
      puVar18 = puVar18 + 0x18;
    } while (iVar20 != 0);
    iVar20 = 0;
    lVar13 = lVar12;
    do {
      uVar21 = uVar11;
      if (bVar8) {
        iVar3 = (int)param_1[0x33] * uVar11;
        while( true ) {
          iVar4 = *(int *)(lVar13 + 8) * 2 * uVar21;
          iVar5 = 0;
          if (iVar4 != 0) {
            iVar5 = iVar3 / iVar4;
          }
          if (iVar3 - iVar5 * iVar4 != 0) break;
          iVar4 = *(int *)((long)param_1 + 0x19c) * uVar11;
          uVar2 = uVar21 * 2;
          iVar5 = *(int *)(lVar13 + 0xc) * uVar2;
          iVar6 = 0;
          if (iVar5 != 0) {
            iVar6 = iVar4 / iVar5;
          }
          if ((iVar4 - iVar6 * iVar5 != 0) || (bVar1 = 3 < (int)uVar21, uVar21 = uVar2, bVar1))
          break;
        }
      }
      *(uint *)(lVar13 + 0x24) = uVar21;
      iVar20 = iVar20 + 1;
      lVar13 = lVar13 + 0x60;
    } while (iVar20 != iVar16);
    lVar13 = (long)(int)param_1[0x33] * 8;
    lVar19 = (long)*(int *)((long)param_1 + 0x19c) * 8;
    puVar17 = (undefined4 *)(lVar12 + 0x2c);
    iVar20 = iVar16;
    do {
      uVar10 = 0;
      if (lVar13 != 0) {
        uVar10 = (undefined4)
                 ((long)(lVar13 + -1 + (long)(int)puVar17[-2] * (long)(int)puVar17[-9] * uVar14) /
                 lVar13);
      }
      uVar7 = 0;
      if (lVar19 != 0) {
        uVar7 = (undefined4)
                ((long)(lVar19 + -1 + (long)(int)puVar17[-8] * (long)(int)puVar17[-2] * uVar15) /
                lVar19);
      }
      puVar17[-1] = uVar10;
      *puVar17 = uVar7;
      puVar17 = puVar17 + 0x18;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  uVar21 = (int)param_1[8] - 1;
  if (uVar21 < 0x10) {
    iVar16 = *(int *)(&UNK_10df08fc4 + (ulong)uVar21 * 4);
  }
  iVar20 = iVar16;
  if (*(int *)((long)param_1 + 0x6c) != 0) {
    iVar20 = 1;
  }
  *(int *)(param_1 + 0x12) = iVar16;
  *(int *)((long)param_1 + 0x94) = iVar20;
  plVar9 = param_1;
  FUN_1081d0e5c();
  if ((int)plVar9 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = *(undefined4 *)((long)param_1 + 0x19c);
  }
  *(undefined4 *)(param_1 + 0x13) = uVar10;
  return;
}



/* Entry: 1081a4f24; end: 1081a5017;  */

ulong FUN_1081a4f24(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x8;
  uint uVar7;
  ulong uVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined1 *puStack_2c0;
  code *pcStack_2b8;
  undefined1 auStack_2b0 [36];
  undefined4 uStack_28c;
  undefined8 uStack_280;
  ulong uStack_228;
  undefined8 uStack_38;
  
  puVar4 = auStack_2b0;
  func_0x0001081a6560();
  bVar1 = NAN((float)CONCAT13(in_register_00005003,
                              CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))));
  uVar3 = !bVar1 && (float)CONCAT13(in_register_00005003,
                                    CONCAT12(in_register_00005002,
                                             CONCAT11(in_register_00005001,in_b0))) == 0.9375;
  if ((!bVar1 &&
      (float)CONCAT13(in_register_00005003,
                      CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) < 0.9375)
      == bVar1) {
    uVar8 = 8;
  }
  else {
    bVar1 = NAN((float)CONCAT13(in_register_00005003,
                                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))
               );
    uVar7 = 2;
    if ((!bVar1 &&
        (float)CONCAT13(in_register_00005003,
                        CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) <
        0.1875) != bVar1) {
      uVar7 = 1;
    }
    bVar1 = NAN((float)CONCAT13(in_register_00005003,
                                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))
               );
    uVar2 = 3;
    if ((!bVar1 &&
        (float)CONCAT13(in_register_00005003,
                        CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) <
        0.3125) != bVar1) {
      uVar2 = uVar7;
    }
    bVar1 = NAN((float)CONCAT13(in_register_00005003,
                                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))
               );
    uVar7 = 4;
    if ((!bVar1 &&
        (float)CONCAT13(in_register_00005003,
                        CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) <
        0.4375) != bVar1) {
      uVar7 = uVar2;
    }
    bVar1 = NAN((float)CONCAT13(in_register_00005003,
                                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))
               );
    uVar2 = 5;
    if ((!bVar1 &&
        (float)CONCAT13(in_register_00005003,
                        CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) <
        0.5625) != bVar1) {
      uVar2 = uVar7;
    }
    bVar1 = NAN((float)CONCAT13(in_register_00005003,
                                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))
               );
    uVar7 = 6;
    if ((!bVar1 &&
        (float)CONCAT13(in_register_00005003,
                        CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) <
        0.6875) != bVar1) {
      uVar7 = uVar2;
    }
    bVar1 = NAN((float)CONCAT13(in_register_00005003,
                                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))
               );
    uVar3 = !bVar1 && (float)CONCAT13(in_register_00005003,
                                      CONCAT12(in_register_00005002,
                                               CONCAT11(in_register_00005001,in_b0))) == 0.8125;
    uVar2 = 7;
    if ((!bVar1 &&
        (float)CONCAT13(in_register_00005003,
                        CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))) <
        0.8125) != bVar1) {
      uVar2 = uVar7;
    }
    uVar8 = (ulong)uVar2;
  }
  uStack_38 = extraout_x8;
  FUN_1081c63a4(auStack_2b0,0x3e,0x278);
  uStack_280 = *(undefined8 *)(param_1 + 8);
  uStack_28c = *(undefined4 *)(param_1 + 0x460);
  FUN_1081a4f14(auStack_2b0,uVar8);
  FUN_1081c6514();
  func_0x0001081a6530(uStack_38);
  if ((bool)uVar3) {
    return uStack_228;
  }
  ___stack_chk_fail();
  uStack_2c8 = uStack_228;
  pcStack_2b8 = FUN_1081a5018;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uVar5 = *(undefined8 *)(puVar4 + 0x30);
  uStack_2d0 = uVar8;
  puStack_2c0 = &stack0xfffffffffffffff0;
  FUN_1081a4810(uVar5,0,&uStack_2d8,&uStack_2e0);
  FUN_10814cacc(&uStack_2e0);
  if ((int)uVar5 == 0) {
    FUN_1081a50a4(puVar4 + 0x458,uStack_2d8);
    lVar6 = *(long *)(puVar4 + 0x490);
    *(undefined8 *)(puVar4 + 0x490) = 0;
    if (lVar6 != 0) {
      func_0x0001081a6524();
    }
    *(undefined8 *)(puVar4 + 0x478) = 0;
    *(undefined8 *)(puVar4 + 0x470) = 0;
    FUN_1081a50cc(puVar4 + 0x468,0);
  }
  return (ulong)((int)uVar5 == 0);
}



/* Entry: 1081a5018; end: 1081a50a3;  */

bool FUN_1081a5018(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1081a4810(uVar1,0,&uStack_28,&uStack_30);
  FUN_10814cacc(&uStack_30);
  if ((int)uVar1 == 0) {
    FUN_1081a50a4(param_1 + 0x458,uStack_28);
    lVar2 = *(long *)(param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x490) = 0;
    if (lVar2 != 0) {
      func_0x0001081a6524();
    }
    *(undefined8 *)(param_1 + 0x478) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    FUN_1081a50cc(param_1 + 0x468,0);
  }
  return (int)uVar1 == 0;
}



/* Entry: 1081a50a4; end: 1081a50cb;  */

void FUN_1081a50a4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1081a6754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1081a50cc; end: 1081a5103;  */

undefined8 FUN_1081a50cc(undefined8 *param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10840ffdc(param_2,1);
  }
  FUN_1081527a0(param_1,param_2);
  return *param_1;
}



/* Entry: 1081a5104; end: 1081a51a3;  */

undefined8 FUN_1081a5104(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return 0;
  }
  uVar1 = 0;
  if (0xe < *(int *)(param_2 + 8) - 2U) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x458);
  switch(*(int *)(param_2 + 8)) {
  case 2:
    if (param_4 != 0) break;
    *(undefined4 *)(lVar2 + 0x70) = 0;
    uVar4 = 0x10;
    goto code_r0x0001081a5148;
  default:
    goto LAB_1081a5160;
  case 4:
  case 0xb:
  case 0xc:
  case 0x10:
    break;
  case 6:
    if (param_4 == 0) {
      uVar4 = 0xd;
      goto code_r0x0001081a5148;
    }
    break;
  case 0xe:
    if (*(uint *)(lVar2 + 0x3c) != 1) {
      return 0;
    }
    if (param_4 == 0) {
      *(undefined4 *)(lVar2 + 0x40) = 1;
      return 1;
    }
    uVar3 = 0xc;
    goto code_r0x0001081a5158;
  }
  uVar4 = 0xc;
code_r0x0001081a5148:
  *(undefined4 *)(lVar2 + 0x40) = uVar4;
  uVar3 = *(uint *)(lVar2 + 0x3c) & 0xfffffffe;
  if (uVar3 == 4) {
code_r0x0001081a5158:
    *(uint *)(lVar2 + 0x40) = uVar3;
  }
  uVar1 = 1;
LAB_1081a5160:
  return uVar1;
}



/* Entry: 1081a51a4; end: 1081a52df;  */

void FUN_1081a51a4(long param_1,uint *param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,uint *param_7)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 extraout_x8;
  long lVar9;
  long extraout_x8_00;
  int *piVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long alStack_4d8 [2];
  undefined1 auStack_4c8 [200];
  undefined1 auStack_2d0 [36];
  undefined4 uStack_2ac;
  undefined8 uStack_2a0;
  uint uStack_248;
  uint uStack_244;
  undefined8 uStack_58;
  
  lVar9 = param_1;
  puVar6 = param_2;
  func_0x0001081a6560();
  iVar2 = (int)lVar9;
  uStack_58 = extraout_x8;
  func_0x0001081a65f8();
  func_0x0001081a64f8();
  _setjmp();
  uVar8 = (uint)param_5;
  if (iVar2 == 0) {
    uVar1 = *param_2;
    uVar12 = param_2[1];
    param_3 = 0x278;
    FUN_1081c63a4(auStack_2d0,0x3e);
    uStack_2a0 = *(undefined8 *)(param_1 + 8);
    uStack_2ac = *(undefined4 *)(param_1 + 0x460);
    puVar6 = (uint *)0x8;
    FUN_1081a4f14(auStack_2d0);
    puVar7 = (uint *)0x7;
    while( true ) {
      uVar8 = (uint)param_5;
      in_ZR = uStack_248 == uVar1 && uStack_244 == uVar12;
      uVar3 = (ulong)(byte)in_ZR;
      iVar2 = (int)puVar7;
      if ((bool)in_ZR) break;
      if ((iVar2 == 0) ||
         (in_ZR = uVar1 <= uStack_248 && uVar12 == uStack_244,
         uStack_248 < uVar1 || uStack_244 <= uVar12 && uVar12 != uStack_244)) {
        FUN_1081c6514(auStack_2d0);
        goto LAB_1081a5298;
      }
      FUN_1081a4f14(auStack_2d0);
      puVar6 = puVar7;
      puVar7 = (uint *)(ulong)(iVar2 - 1);
    }
    FUN_1081c6514(auStack_2d0);
    lVar9 = *(long *)(param_1 + 0x458);
    *(int *)(lVar9 + 0x44) = iVar2 + 1;
    *(undefined4 *)(lVar9 + 0x48) = 8;
  }
  else {
    uVar3 = 0;
  }
LAB_1081a5298:
  func_0x0001081a64e4();
  func_0x0001081a6530(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001081a64e4();
  __Unwind_Resume();
  func_0x0001081a65f8();
  puVar4 = auStack_4c8;
  *(undefined8 *)(extraout_x8_00 + 0x378) = *(undefined8 *)(extraout_x8_00 + 0x370);
  *(undefined8 *)(extraout_x8_00 + 0x370) = *(undefined8 *)(extraout_x8_00 + 0x368);
  *(undefined8 *)(extraout_x8_00 + 0x368) = *(undefined8 *)(extraout_x8_00 + 0x360);
  *(undefined1 **)(extraout_x8_00 + 0x360) = puVar4;
  _setjmp();
  if ((int)puVar4 == 0) {
    piVar10 = *(int **)(param_6 + 8);
    if (piVar10 == (int *)0x0) {
      uVar1 = puVar6[4];
    }
    else {
      uVar1 = piVar10[2] - *piVar10;
    }
    lVar11 = *(long *)(uVar3 + 0x478);
    lVar14 = param_4;
    lVar9 = param_3;
    if (*(long *)(uVar3 + 0x470) == 0) {
      lVar15 = param_4;
      alStack_4d8[0] = param_3;
      if (lVar11 != 0) {
        lVar9 = lVar11;
        lVar14 = 0;
        lVar15 = 0;
        alStack_4d8[0] = lVar11;
      }
    }
    else {
      uVar1 = *(uint *)(*(long *)(uVar3 + 0x490) + 0x48);
      if (lVar11 != 0) {
        lVar14 = 0;
        lVar9 = lVar11;
      }
      lVar15 = 0;
      alStack_4d8[0] = *(long *)(uVar3 + 0x470);
    }
    for (uVar12 = 0; uVar13 = uVar8, (uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) != uVar12;
        uVar12 = uVar12 + 1) {
      uVar5 = *(undefined8 *)(uVar3 + 0x458);
      func_0x0001081c6dd0(uVar5,alStack_4d8,1);
      uVar13 = uVar12;
      if ((int)uVar5 == 0) break;
      if (*(long *)(uVar3 + 0x490) != 0) {
        func_0x0001082200cc(*(long *)(uVar3 + 0x490),lVar9,alStack_4d8[0]);
      }
      if (*(int *)(uVar3 + 0x70) != 0) {
        FUN_10821c06c(uVar3,param_3,lVar9,uVar1);
        param_3 = param_3 + param_4;
      }
      alStack_4d8[0] = alStack_4d8[0] + lVar15;
      lVar9 = lVar9 + lVar14;
    }
    uVar5 = 0;
    *param_7 = uVar13;
  }
  else {
    *param_7 = 0;
    uVar5 = 6;
  }
  func_0x0001081a64e4(uVar5);
  return;
}



/* Entry: 1081a52e0; end: 1081a5493;  */

void FUN_1081a52e0(long param_1,long param_2,long param_3,long param_4,uint param_5,long param_6,
                  uint *param_7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  int *piVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long alStack_138 [2];
  undefined1 auStack_128 [200];
  
  func_0x0001081a65f8();
  puVar2 = auStack_128;
  *(undefined8 *)(extraout_x8 + 0x378) = *(undefined8 *)(extraout_x8 + 0x370);
  *(undefined8 *)(extraout_x8 + 0x370) = *(undefined8 *)(extraout_x8 + 0x368);
  *(undefined8 *)(extraout_x8 + 0x368) = *(undefined8 *)(extraout_x8 + 0x360);
  *(undefined1 **)(extraout_x8 + 0x360) = puVar2;
  _setjmp();
  if ((int)puVar2 == 0) {
    piVar5 = *(int **)(param_6 + 8);
    if (piVar5 == (int *)0x0) {
      iVar1 = *(int *)(param_2 + 0x10);
    }
    else {
      iVar1 = piVar5[2] - *piVar5;
    }
    lVar6 = *(long *)(param_1 + 0x478);
    lVar9 = param_4;
    lVar4 = param_3;
    if (*(long *)(param_1 + 0x470) == 0) {
      lVar10 = param_4;
      alStack_138[0] = param_3;
      if (lVar6 != 0) {
        lVar4 = lVar6;
        lVar9 = 0;
        lVar10 = 0;
        alStack_138[0] = lVar6;
      }
    }
    else {
      iVar1 = *(int *)(*(long *)(param_1 + 0x490) + 0x48);
      if (lVar6 != 0) {
        lVar9 = 0;
        lVar4 = lVar6;
      }
      lVar10 = 0;
      alStack_138[0] = *(long *)(param_1 + 0x470);
    }
    for (uVar7 = 0; uVar8 = param_5, (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)) != uVar7;
        uVar7 = uVar7 + 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x458);
      func_0x0001081c6dd0(uVar3,alStack_138,1);
      uVar8 = uVar7;
      if ((int)uVar3 == 0) break;
      if (*(long *)(param_1 + 0x490) != 0) {
        func_0x0001082200cc(*(long *)(param_1 + 0x490),lVar4,alStack_138[0]);
      }
      if (*(int *)(param_1 + 0x70) != 0) {
        FUN_10821c06c(param_1,param_3,lVar4,iVar1);
        param_3 = param_3 + param_4;
      }
      alStack_138[0] = alStack_138[0] + lVar10;
      lVar4 = lVar4 + lVar9;
    }
    uVar3 = 0;
    *param_7 = uVar8;
  }
  else {
    *param_7 = 0;
    uVar3 = 6;
  }
  func_0x0001081a64e4(uVar3);
  return;
}



/* Entry: 1081a5494; end: 1081a5683;  */

void FUN_1081a5494(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined4 *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined1 auStack_120 [192];
  
  if (*(long *)(param_5 + 8) != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x458);
  puVar1 = auStack_120;
  *(undefined8 *)(lVar3 + 0x378) = *(undefined8 *)(lVar3 + 0x370);
  *(undefined8 *)(lVar3 + 0x370) = *(undefined8 *)(lVar3 + 0x368);
  *(undefined8 *)(lVar3 + 0x368) = *(undefined8 *)(lVar3 + 0x360);
  *(undefined1 **)(lVar3 + 0x360) = puVar1;
  _setjmp();
  if ((int)puVar1 != 0) {
LAB_1081a5510:
    lVar2 = 6;
    goto LAB_1081a5514;
  }
  iVar4 = *(int *)(lVar3 + 0x138);
  if (iVar4 == 0) {
    lVar2 = lVar3;
    func_0x0001081c69c0();
    if ((int)lVar2 == 0) goto LAB_1081a5510;
  }
  else {
    *(undefined4 *)(lVar3 + 0x58) = 1;
    func_0x0001081c69c0(lVar3);
  }
  if ((*(int *)(lVar3 + 0x40) == 4) &&
     (((*(long *)(param_1 + 0x20) == 0 || (*(int *)(param_1 + 0x70) == 0)) ||
      (*(int *)(*(long *)(param_1 + 0x20) + 0xc) != 0x434d594b)))) {
    func_0x0001081a65c0(param_1,param_2);
  }
  FUN_1081a5840(param_1,param_2);
  if ((int)param_1 == 0) {
    lVar2 = 8;
    goto LAB_1081a5514;
  }
  if (iVar4 == 0) {
    func_0x0001081a6544();
LAB_1081a5640:
    if (*(int *)(param_2 + 0x14) < 1) {
      lVar2 = 0;
      goto LAB_1081a5514;
    }
    *param_6 = 0;
  }
  else {
    iVar4 = 0;
    while (lVar2 = lVar3, func_0x0001081c6860(), (int)lVar2 == 0) {
      if (*(undefined8 **)(lVar3 + 0x10) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)(lVar3 + 0x10))(lVar3);
      }
      lVar2 = lVar3;
      func_0x0001081c660c();
      if ((int)lVar2 == 0) break;
      if ((int)lVar2 == 4) {
        iVar4 = *(int *)(lVar3 + 0xac);
      }
    }
    if (0 < iVar4) {
      lVar2 = lVar3;
      FUN_1081c751c(lVar3,iVar4);
      func_0x0001081a6544();
      func_0x0001081c7594(lVar3);
      if ((int)lVar2 != 0) goto LAB_1081a5514;
      goto LAB_1081a5640;
    }
  }
  lVar2 = 1;
LAB_1081a5514:
  FUN_1081a64e4(lVar2);
  return;
}



/* Entry: 1081a5684; end: 1081a583f;  */

void FUN_1081a5684(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_80;
  undefined8 auStack_78 [3];
  undefined1 auStack_60 [8];
  int *piStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  lStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  if (param_3[1] != 0) {
    lStack_38 = param_1 + 0x480;
  }
  piStack_58 = (int *)*param_2;
  if (piStack_58 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
      if (bVar3) {
        *piStack_58 = *piStack_58 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_48 = param_2[2];
  uStack_50 = param_2[1];
  if (*(int *)(param_1 + 0x70) != 0) {
    func_0x0001078bdd84(auStack_78,&piStack_58,4);
    func_0x0001078bddd4(&piStack_58,auStack_78);
    FUN_10810a400(auStack_78);
  }
  if (param_4 != 0) {
    FUN_10814c3c0(auStack_78,0,0,0xc,0,8);
    FUN_10821edc8(&lStack_80,auStack_78,0,&piStack_58,&uStack_40,0);
    lVar6 = lStack_80;
    lStack_80 = 0;
    lVar4 = *(long *)(param_1 + 0x490);
    *(long *)(param_1 + 0x490) = lVar6;
    if (lVar4 != 0) {
      func_0x0001081a6524();
      lVar6 = lStack_80;
      lStack_80 = 0;
      if (lVar6 != 0) {
        func_0x0001081a6524();
      }
    }
    FUN_10814cacc(auStack_60);
    goto LAB_1081a57f0;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x458) + 0x40);
  if (iVar1 - 0xcU < 2) {
LAB_1081a57ac:
    uVar5 = 4;
  }
  else if (iVar1 == 1) {
    uVar5 = 1;
  }
  else if (iVar1 == 0x10) {
    uVar5 = 2;
  }
  else {
    if (iVar1 == 4) goto LAB_1081a57ac;
    uVar5 = 0;
  }
  FUN_10821eb80(auStack_78,uVar5,&piStack_58,&uStack_40,0);
  lVar6 = *(long *)(param_1 + 0x490);
  *(undefined8 *)(param_1 + 0x490) = auStack_78[0];
  if (lVar6 != 0) {
    func_0x0001081a6524();
  }
LAB_1081a57f0:
  FUN_10810a400(&piStack_58);
  return;
}



/* Entry: 1081a5840; end: 1081a590f;  */

void FUN_1081a5840(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x490) == 0) {
    lVar7 = 0;
    piVar4 = (int *)(param_2 + 0x10);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x458);
    if (*(int *)(lVar6 + 0x40) == 0x10) {
      lVar7 = 2;
    }
    else {
      lVar7 = (long)*(int *)(lVar6 + 0x90);
    }
    lVar7 = lVar7 * (ulong)*(uint *)(lVar6 + 0x88);
    piVar4 = (int *)(*(long *)(param_1 + 0x490) + 0x48);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    lVar6 = 0;
  }
  else {
    iVar2 = *piVar4;
    func_0x00010835c63c();
    lVar6 = 0;
    if ((int)param_2 != 4) {
      lVar6 = (long)iVar2 << 2;
    }
  }
  if (lVar6 + lVar7 != 0) {
    plVar1 = (long *)(param_1 + 0x468);
    plVar3 = plVar1;
    FUN_1081a50cc(plVar1,lVar6 + lVar7);
    if (plVar3 != (long *)0x0) {
      if (lVar7 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar1;
      }
      *(long *)(param_1 + 0x470) = lVar5;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar1 + lVar7;
      }
      *(long *)(param_1 + 0x478) = lVar7;
    }
  }
  return;
}



/* Entry: 1081a5910; end: 1081a5997;  */

long FUN_1081a5910(long param_1,int param_2)

{
  long lVar1;
  int extraout_w8;
  int iVar2;
  undefined4 extraout_w9;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x490);
  if ((param_2 != 0) && (lVar1 == 0)) {
    if (*(int *)(*(long *)(param_1 + 0x458) + 0x40) == 4) {
      iVar2 = *(int *)(param_1 + 0x70);
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar3 = 1;
      }
      else {
        func_0x0001081a65a8();
        uVar3 = extraout_w9;
        iVar2 = extraout_w8;
      }
      if (iVar2 == 0) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
    FUN_1081a5684(param_1,param_1 + 0x40,param_1 + 0x58,uVar3);
    lVar1 = param_1;
    FUN_1081a5840(param_1,param_1 + 0x40);
    if ((int)lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x490);
    }
  }
  return lVar1;
}



/* Entry: 1081a5998; end: 1081a5b13;  */

void FUN_1081a5998(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int extraout_w8;
  int iVar2;
  int *piVar3;
  uint extraout_w9;
  uint uVar4;
  undefined4 uVar5;
  long unaff_x20;
  
  func_0x0001081a65ec();
  func_0x0001081a65f8();
  func_0x0001081a64f8();
  _setjmp();
  if (param_1 == 0) {
    iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x458);
    func_0x0001081c69c0();
    if (iVar2 != 0) {
      if (*(int *)(*(long *)(unaff_x20 + 0x458) + 0x40) == 4) {
        iVar2 = *(int *)(unaff_x20 + 0x70);
        if (*(long *)(unaff_x20 + 0x20) == 0) {
          uVar4 = 1;
        }
        else {
          func_0x0001081a65a8();
          iVar2 = extraout_w8;
          uVar4 = extraout_w9;
        }
        if (iVar2 == 0) {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
      piVar3 = *(int **)(param_3 + 8);
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar3;
        iVar1 = piVar3[2];
        func_0x0001081c6bd4();
        piVar3 = *(int **)(param_3 + 8);
        func_0x00010814c934(unaff_x20 + 0x480,*piVar3 - iVar2,0,piVar3[2] - *piVar3,
                            piVar3[3] - piVar3[1]);
        if ((iVar2 != **(int **)(param_3 + 8)) ||
           (iVar1 - iVar2 != (*(int **)(param_3 + 8))[2] - iVar2)) {
          FUN_1081a5684();
        }
      }
      if ((*(long *)(unaff_x20 + 0x490) == 0 & uVar4) == 1) {
        func_0x0001081a65c0();
      }
      FUN_1081a5840();
      uVar5 = 0;
      if ((int)unaff_x20 == 0) {
        uVar5 = 8;
      }
      goto LAB_1081a5ae0;
    }
  }
  uVar5 = 6;
LAB_1081a5ae0:
  func_0x0001081a64e4(uVar5);
  return;
}



/* Entry: 1081a5b14; end: 1081a5b67;  */

void FUN_1081a5b14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iStack_24;
  
  iStack_24 = 0;
  FUN_1081a52e0(param_1,param_1 + 0x40,param_2,param_4,param_3,param_1 + 0x58,&iStack_24);
  if (iStack_24 < (int)param_3) {
    *(undefined4 *)(*(long *)(param_1 + 0x458) + 0xa8) = *(undefined4 *)(param_1 + 0x54);
  }
  return;
}



/* Entry: 1081a5b68; end: 1081a5bd7;  */

void FUN_1081a5b68(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1;
  func_0x0001081a65f8();
  iVar2 = (int)lVar3;
  func_0x0001081a64f8();
  _setjmp();
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x458);
    FUN_1081c6ea8(uVar4,param_2);
    bVar1 = (int)param_2 == (int)uVar4;
  }
  else {
    bVar1 = false;
  }
  func_0x0001081a64e4(bVar1);
  return;
}



/* Entry: 1081a5bd8; end: 1081a5beb;  */

long * FUN_1081a5bd8(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  long *unaff_x20;
  long *plVar19;
  undefined8 uVar20;
  long lStack_3f0;
  long lStack_3e8;
  undefined1 auStack_3dc [4];
  long lStack_3d8;
  long *plStack_3d0;
  long lStack_3c8;
  undefined1 **ppuStack_3c0;
  code *pcStack_3b8;
  long *plStack_3a8;
  long *plStack_3a0;
  long lStack_398;
  long lStack_390;
  long alStack_2c8 [16];
  long alStack_248 [16];
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_150;
  code *pcStack_148;
  long alStack_140 [4];
  undefined1 auStack_120 [136];
  undefined1 auStack_98 [32];
  ulong auStack_78 [4];
  undefined4 auStack_58 [4];
  undefined8 uStack_48;
  
  lVar8 = param_1[0x8b];
  plVar9 = alStack_140;
  func_0x0001081a6560();
  uVar6 = *(int *)(lVar8 + 0x3c) == 3;
  plVar18 = param_1;
  uStack_48 = extraout_x8;
  if ((bool)uVar6) {
    lVar12 = *(long *)(lVar8 + 0x130);
    uVar6 = *(int *)(lVar12 + 0x68) == 1;
    if ((((!(bool)uVar6) || (uVar6 = *(int *)(lVar12 + 0x6c) == 1, !(bool)uVar6)) ||
        (uVar6 = *(int *)(lVar12 + 200) == 1, !(bool)uVar6)) ||
       (uVar6 = *(int *)(lVar12 + 0xcc) == 1, !(bool)uVar6)) goto LAB_1081a5ca4;
    iVar7 = *(int *)(lVar12 + 8);
    iVar1 = *(int *)(lVar12 + 0xc);
    unaff_x20 = param_1;
    if (iVar7 == 1 && iVar1 == 1) {
      uVar20 = 1;
      uVar6 = true;
    }
    else if (iVar7 == 2 && iVar1 == 1) {
      uVar20 = 2;
      uVar6 = true;
    }
    else if (iVar7 == 2 && iVar1 == 2) {
      uVar20 = 3;
      uVar6 = true;
    }
    else if (iVar7 == 1 && iVar1 == 2) {
      uVar20 = 4;
      uVar6 = true;
    }
    else if (iVar7 == 4 && iVar1 == 1) {
      uVar20 = 5;
      uVar6 = true;
    }
    else {
      uVar6 = iVar7 == 4 && iVar1 == 2;
      if (iVar7 != 4 || iVar1 != 2) goto LAB_1081a5ca4;
      uVar20 = 6;
    }
    if (param_2 == (long *)0x0) {
LAB_1081a5d10:
      param_2 = (long *)0x1;
      if (param_3 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0x130) + 0x1c);
        for (lVar12 = 0; uVar6 = lVar12 == 3, !(bool)uVar6; lVar12 = lVar12 + 1) {
          auStack_58[lVar12] = 1;
          auStack_78[lVar12] = (ulong)(uint)(*piVar13 << 3);
          piVar13 = piVar13 + 0x18;
        }
        FUN_1083aad14(auStack_98,param_1[1],1,uVar20,0,*(undefined4 *)((long)param_1 + 0x3c),0,0);
        FUN_1083aaea8(alStack_140,auStack_98,auStack_58,auStack_78);
        FUN_1081a6260(param_3);
        FUN_1081526d4(auStack_120);
        param_2 = (long *)0x1;
        plVar18 = plVar9;
        unaff_x20 = alStack_140;
      }
    }
    else {
      plVar18 = (long *)0x1;
      FUN_1081a61dc(param_2,1,0);
      if ((int)param_2 != 0) goto LAB_1081a5d10;
    }
  }
  else {
LAB_1081a5ca4:
    param_2 = (long *)0x0;
  }
  func_0x0001081a6530(uStack_48);
  if ((bool)uVar6) {
    return param_2;
  }
  ___stack_chk_fail();
  plVar9 = unaff_x20 + 4;
  FUN_1081526d4();
  func_0x0001081a6570();
  pcStack_148 = FUN_1081a5dc0;
  plVar10 = plVar9;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x0001081a6560();
  uStack_1b0 = extraout_x8_00;
  lVar12 = plVar10[0x8b];
  plVar10 = (long *)0x0;
  lVar8 = lVar12;
  FUN_1081a5bec(lVar12,plVar9,0,0);
  iVar7 = (int)lVar8;
  if (iVar7 == 0) {
    plVar9 = (long *)0x6;
  }
  else {
    lStack_390 = plVar9[0x8b] + 0x2b8;
    func_0x0001081a64f8();
    _setjmp();
    plVar19 = plVar18;
    if (iVar7 == 0) {
      *(undefined4 *)(lVar12 + 0x5c) = 1;
      lVar8 = lVar12;
      func_0x0001081c69c0();
      if ((int)lVar8 == 0) goto LAB_1081a5e28;
      plStack_1c8 = alStack_2c8;
      plStack_1c0 = alStack_248;
      plStack_1b8 = alStack_248 + 8;
      plVar9 = (long *)((long)*(int *)(*(long *)(lVar12 + 0x130) + 0xc) * 8);
      lVar15 = *plVar18;
      lVar2 = plVar18[1];
      uVar17 = (uint)plVar9;
      uVar14 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
      for (lVar8 = 0; uVar14 << 3 != lVar8; lVar8 = lVar8 + 8) {
        *(long *)((long)alStack_2c8 + lVar8) = lVar15;
        lVar15 = lVar15 + lVar2;
      }
      lVar15 = plVar18[5];
      lVar3 = plVar18[6];
      lVar16 = plVar18[10];
      lVar4 = plVar18[0xb];
      for (lVar8 = 0; lVar8 != 0x40; lVar8 = lVar8 + 8) {
        *(long *)((long)alStack_248 + lVar8) = lVar15;
        *(long *)((long)alStack_248 + lVar8 + 0x40) = lVar16;
        lVar15 = lVar15 + lVar3;
        lVar16 = lVar16 + lVar4;
      }
      plVar19 = (long *)0x0;
      uVar5 = 0;
      plStack_3a8 = plVar9;
      plStack_3a0 = plVar18;
      if (uVar17 != 0) {
        uVar5 = *(uint *)(lVar12 + 0x8c) / uVar17;
      }
      for (; (int)plVar19 < (int)uVar5; plVar19 = (long *)(ulong)((int)plVar19 + 1)) {
        lVar8 = lVar12;
        plVar10 = plVar9;
        FUN_1081c7428(lVar12,&plStack_1c8);
        uVar6 = (uint)lVar8 == uVar17;
        if ((uint)lVar8 < uVar17) goto LAB_1081a5e28;
        plVar18 = alStack_2c8;
        for (uVar11 = uVar14; uVar11 != 0; uVar11 = uVar11 - 1) {
          *plVar18 = *plVar18 + lVar2 * (long)plVar9;
          plVar18 = plVar18 + 1;
        }
        lVar8 = 8;
        plVar18 = alStack_248 + 8;
        do {
          plVar18[-8] = plVar18[-8] + lVar3 * 8;
          *plVar18 = *plVar18 + lVar4 * 8;
          lVar8 = lVar8 + -1;
          plVar18 = plVar18 + 1;
        } while (lVar8 != 0);
      }
      uVar17 = *(int *)(lVar12 + 0x8c) - *(int *)(lVar12 + 0xa8);
      uVar6 = uVar17 == 0;
      if (!(bool)uVar6) {
        FUN_108152710(&lStack_398,plStack_3a0[1]);
        for (lVar8 = (long)(int)uVar17; lVar8 < (long)plStack_3a8; lVar8 = lVar8 + 1) {
          alStack_2c8[lVar8] = lStack_398;
        }
        for (lVar8 = (long)(int)(*(int *)(*(long *)(lVar12 + 0x130) + 0x8c) + uVar5 * -8); lVar8 < 8
            ; lVar8 = lVar8 + 1) {
          alStack_248[lVar8] = lStack_398;
          alStack_248[lVar8 + 8] = lStack_398;
        }
        FUN_1081c7428(lVar12,&plStack_1c8);
        func_0x00010815277c(&lStack_398);
        uVar6 = (uint)lVar12 == uVar17;
        plVar10 = plVar9;
        if ((uint)lVar12 < uVar17) goto LAB_1081a5e28;
      }
      plVar9 = (long *)0x0;
    }
    else {
LAB_1081a5e28:
      plVar9 = (long *)0x6;
    }
    func_0x0001081a64e4();
    plVar18 = plVar19;
  }
  func_0x0001081a6530(uStack_1b0);
  if ((bool)uVar6) {
    return plVar9;
  }
  ___stack_chk_fail();
  func_0x0001081a64e4();
  __Unwind_Resume();
  __Unwind_Resume();
  pcStack_3b8 = FUN_1081a6054;
  lStack_3d8 = 0;
  plStack_3d0 = plVar18;
  lStack_3c8 = lVar12;
  ppuStack_3c0 = &puStack_150;
  (**(code **)(*plVar9 + 0x28))();
  lVar8 = lStack_3d8;
  if (((ulong)plVar9 & 1) == 0) {
LAB_1081a60d0:
    plVar18 = (long *)0x0;
  }
  else {
    if (plVar10 != (long *)0x0) {
      lStack_3d8 = 0;
      lStack_3f0 = lVar8;
      FUN_1081a4df8(&lStack_3e8,&lStack_3f0,auStack_3dc);
      lVar8 = *plVar10;
      *plVar10 = lStack_3e8;
      if (lVar8 != 0) {
        func_0x0001081a6518();
      }
      if (lStack_3f0 != 0) {
        func_0x0001081a6518();
      }
      if (*plVar10 == 0) goto LAB_1081a60d0;
    }
    plVar18 = (long *)0x1;
  }
  lVar8 = lStack_3d8;
  lStack_3d8 = 0;
  if (lVar8 != 0) {
    func_0x0001081a6518();
  }
  return plVar18;
}



/* Entry: 1081a5bec; end: 1081a5dbf;  */

long * FUN_1081a5bec(long param_1,long *param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long *unaff_x20;
  long *plVar19;
  undefined8 uVar20;
  long lStack_3f0;
  long lStack_3e8;
  undefined1 auStack_3dc [4];
  long lStack_3d8;
  long *plStack_3d0;
  long lStack_3c8;
  undefined1 **ppuStack_3c0;
  code *pcStack_3b8;
  long *plStack_3a8;
  long *plStack_3a0;
  long lStack_398;
  long lStack_390;
  long alStack_2c8 [16];
  long alStack_248 [16];
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_150;
  code *pcStack_148;
  long alStack_140 [4];
  undefined1 auStack_120 [136];
  undefined1 auStack_98 [32];
  ulong auStack_78 [4];
  undefined4 auStack_58 [4];
  undefined8 uStack_48;
  
  plVar8 = alStack_140;
  func_0x0001081a6560();
  uVar6 = *(int *)(param_1 + 0x3c) == 3;
  plVar18 = param_2;
  uStack_48 = extraout_x8;
  if ((bool)uVar6) {
    lVar11 = *(long *)(param_1 + 0x130);
    uVar6 = *(int *)(lVar11 + 0x68) == 1;
    if ((((!(bool)uVar6) || (uVar6 = *(int *)(lVar11 + 0x6c) == 1, !(bool)uVar6)) ||
        (uVar6 = *(int *)(lVar11 + 200) == 1, !(bool)uVar6)) ||
       (uVar6 = *(int *)(lVar11 + 0xcc) == 1, !(bool)uVar6)) goto LAB_1081a5ca4;
    iVar7 = *(int *)(lVar11 + 8);
    iVar1 = *(int *)(lVar11 + 0xc);
    unaff_x20 = param_2;
    if (iVar7 == 1 && iVar1 == 1) {
      uVar20 = 1;
      uVar6 = true;
    }
    else if (iVar7 == 2 && iVar1 == 1) {
      uVar20 = 2;
      uVar6 = true;
    }
    else if (iVar7 == 2 && iVar1 == 2) {
      uVar20 = 3;
      uVar6 = true;
    }
    else if (iVar7 == 1 && iVar1 == 2) {
      uVar20 = 4;
      uVar6 = true;
    }
    else if (iVar7 == 4 && iVar1 == 1) {
      uVar20 = 5;
      uVar6 = true;
    }
    else {
      uVar6 = iVar7 == 4 && iVar1 == 2;
      if (iVar7 != 4 || iVar1 != 2) goto LAB_1081a5ca4;
      uVar20 = 6;
    }
    if (param_3 == (long *)0x0) {
LAB_1081a5d10:
      param_3 = (long *)0x1;
      if (param_4 != 0) {
        piVar12 = (int *)(*(long *)(param_1 + 0x130) + 0x1c);
        for (lVar11 = 0; uVar6 = lVar11 == 3, !(bool)uVar6; lVar11 = lVar11 + 1) {
          auStack_58[lVar11] = 1;
          auStack_78[lVar11] = (ulong)(uint)(*piVar12 << 3);
          piVar12 = piVar12 + 0x18;
        }
        FUN_1083aad14(auStack_98,param_2[1],1,uVar20,0,*(undefined4 *)((long)param_2 + 0x3c),0,0);
        FUN_1083aaea8(alStack_140,auStack_98,auStack_58,auStack_78);
        FUN_1081a6260(param_4);
        FUN_1081526d4(auStack_120);
        param_3 = (long *)0x1;
        plVar18 = plVar8;
        unaff_x20 = alStack_140;
      }
    }
    else {
      plVar18 = (long *)0x1;
      FUN_1081a61dc(param_3,1,0);
      if ((int)param_3 != 0) goto LAB_1081a5d10;
    }
  }
  else {
LAB_1081a5ca4:
    param_3 = (long *)0x0;
  }
  func_0x0001081a6530(uStack_48);
  if ((bool)uVar6) {
    return param_3;
  }
  ___stack_chk_fail();
  plVar8 = unaff_x20 + 4;
  FUN_1081526d4();
  func_0x0001081a6570();
  pcStack_148 = FUN_1081a5dc0;
  plVar9 = plVar8;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x0001081a6560();
  uStack_1b0 = extraout_x8_00;
  lVar17 = plVar9[0x8b];
  plVar9 = (long *)0x0;
  lVar11 = lVar17;
  FUN_1081a5bec(lVar17,plVar8,0,0);
  iVar7 = (int)lVar11;
  if (iVar7 == 0) {
    plVar8 = (long *)0x6;
  }
  else {
    lStack_390 = plVar8[0x8b] + 0x2b8;
    func_0x0001081a64f8();
    _setjmp();
    plVar19 = plVar18;
    if (iVar7 == 0) {
      *(undefined4 *)(lVar17 + 0x5c) = 1;
      lVar11 = lVar17;
      func_0x0001081c69c0();
      if ((int)lVar11 == 0) goto LAB_1081a5e28;
      plStack_1c8 = alStack_2c8;
      plStack_1c0 = alStack_248;
      plStack_1b8 = alStack_248 + 8;
      plVar8 = (long *)((long)*(int *)(*(long *)(lVar17 + 0x130) + 0xc) * 8);
      lVar14 = *plVar18;
      lVar2 = plVar18[1];
      uVar16 = (uint)plVar8;
      uVar13 = (ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU));
      for (lVar11 = 0; uVar13 << 3 != lVar11; lVar11 = lVar11 + 8) {
        *(long *)((long)alStack_2c8 + lVar11) = lVar14;
        lVar14 = lVar14 + lVar2;
      }
      lVar14 = plVar18[5];
      lVar3 = plVar18[6];
      lVar15 = plVar18[10];
      lVar4 = plVar18[0xb];
      for (lVar11 = 0; lVar11 != 0x40; lVar11 = lVar11 + 8) {
        *(long *)((long)alStack_248 + lVar11) = lVar14;
        *(long *)((long)alStack_248 + lVar11 + 0x40) = lVar15;
        lVar14 = lVar14 + lVar3;
        lVar15 = lVar15 + lVar4;
      }
      plVar19 = (long *)0x0;
      uVar5 = 0;
      plStack_3a8 = plVar8;
      plStack_3a0 = plVar18;
      if (uVar16 != 0) {
        uVar5 = *(uint *)(lVar17 + 0x8c) / uVar16;
      }
      for (; (int)plVar19 < (int)uVar5; plVar19 = (long *)(ulong)((int)plVar19 + 1)) {
        lVar11 = lVar17;
        plVar9 = plVar8;
        FUN_1081c7428(lVar17,&plStack_1c8);
        uVar6 = (uint)lVar11 == uVar16;
        if ((uint)lVar11 < uVar16) goto LAB_1081a5e28;
        plVar18 = alStack_2c8;
        for (uVar10 = uVar13; uVar10 != 0; uVar10 = uVar10 - 1) {
          *plVar18 = *plVar18 + lVar2 * (long)plVar8;
          plVar18 = plVar18 + 1;
        }
        lVar11 = 8;
        plVar18 = alStack_248 + 8;
        do {
          plVar18[-8] = plVar18[-8] + lVar3 * 8;
          *plVar18 = *plVar18 + lVar4 * 8;
          lVar11 = lVar11 + -1;
          plVar18 = plVar18 + 1;
        } while (lVar11 != 0);
      }
      uVar16 = *(int *)(lVar17 + 0x8c) - *(int *)(lVar17 + 0xa8);
      uVar6 = uVar16 == 0;
      if (!(bool)uVar6) {
        FUN_108152710(&lStack_398,plStack_3a0[1]);
        for (lVar11 = (long)(int)uVar16; lVar11 < (long)plStack_3a8; lVar11 = lVar11 + 1) {
          alStack_2c8[lVar11] = lStack_398;
        }
        for (lVar11 = (long)(int)(*(int *)(*(long *)(lVar17 + 0x130) + 0x8c) + uVar5 * -8);
            lVar11 < 8; lVar11 = lVar11 + 1) {
          alStack_248[lVar11] = lStack_398;
          alStack_248[lVar11 + 8] = lStack_398;
        }
        FUN_1081c7428(lVar17,&plStack_1c8);
        func_0x00010815277c(&lStack_398);
        uVar6 = (uint)lVar17 == uVar16;
        plVar9 = plVar8;
        if ((uint)lVar17 < uVar16) goto LAB_1081a5e28;
      }
      plVar8 = (long *)0x0;
    }
    else {
LAB_1081a5e28:
      plVar8 = (long *)0x6;
    }
    func_0x0001081a64e4();
    plVar18 = plVar19;
  }
  func_0x0001081a6530(uStack_1b0);
  if ((bool)uVar6) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x0001081a64e4();
  __Unwind_Resume();
  __Unwind_Resume();
  pcStack_3b8 = FUN_1081a6054;
  lStack_3d8 = 0;
  plStack_3d0 = plVar18;
  lStack_3c8 = lVar17;
  ppuStack_3c0 = &puStack_150;
  (**(code **)(*plVar8 + 0x28))();
  lVar11 = lStack_3d8;
  if (((ulong)plVar8 & 1) == 0) {
LAB_1081a60d0:
    plVar18 = (long *)0x0;
  }
  else {
    if (plVar9 != (long *)0x0) {
      lStack_3d8 = 0;
      lStack_3f0 = lVar11;
      FUN_1081a4df8(&lStack_3e8,&lStack_3f0,auStack_3dc);
      lVar11 = *plVar9;
      *plVar9 = lStack_3e8;
      if (lVar11 != 0) {
        func_0x0001081a6518();
      }
      if (lStack_3f0 != 0) {
        func_0x0001081a6518();
      }
      if (*plVar9 == 0) goto LAB_1081a60d0;
    }
    plVar18 = (long *)0x1;
  }
  lVar11 = lStack_3d8;
  lStack_3d8 = 0;
  if (lVar11 != 0) {
    func_0x0001081a6518();
  }
  return plVar18;
}



/* Entry: 1081a5dc0; end: 1081a6053;  */

long * FUN_1081a5dc0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 in_ZR;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 auStack_29c [4];
  long lStack_298;
  long *plStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  long *plStack_268;
  long *plStack_260;
  long lStack_258;
  long lStack_250;
  long alStack_188 [16];
  long alStack_108 [16];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  lVar7 = param_1;
  func_0x0001081a6560();
  lVar15 = *(long *)(lVar7 + 0x458);
  plVar8 = (long *)0x0;
  lVar7 = lVar15;
  uStack_70 = extraout_x8;
  FUN_1081a5bec(lVar15,param_1,0,0);
  iVar5 = (int)lVar7;
  if (iVar5 == 0) {
    plVar6 = (long *)0x6;
  }
  else {
    lStack_250 = *(long *)(param_1 + 0x458) + 0x2b8;
    func_0x0001081a64f8();
    _setjmp();
    plVar16 = param_2;
    if (iVar5 == 0) {
      *(undefined4 *)(lVar15 + 0x5c) = 1;
      lVar7 = lVar15;
      func_0x0001081c69c0();
      if ((int)lVar7 == 0) goto LAB_1081a5e28;
      plStack_80 = alStack_108;
      plStack_78 = alStack_108 + 8;
      plVar6 = (long *)((long)*(int *)(*(long *)(lVar15 + 0x130) + 0xc) * 8);
      lVar12 = *param_2;
      lVar1 = param_2[1];
      uVar14 = (uint)plVar6;
      uVar11 = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU));
      plStack_88 = alStack_188;
      for (lVar7 = 0; uVar11 << 3 != lVar7; lVar7 = lVar7 + 8) {
        *(long *)((long)alStack_188 + lVar7) = lVar12;
        lVar12 = lVar12 + lVar1;
      }
      lVar12 = param_2[5];
      lVar2 = param_2[6];
      lVar13 = param_2[10];
      lVar3 = param_2[0xb];
      for (lVar7 = 0; lVar7 != 0x40; lVar7 = lVar7 + 8) {
        *(long *)((long)alStack_108 + lVar7) = lVar12;
        *(long *)((long)alStack_108 + lVar7 + 0x40) = lVar13;
        lVar12 = lVar12 + lVar2;
        lVar13 = lVar13 + lVar3;
      }
      plVar16 = (long *)0x0;
      uVar4 = 0;
      plStack_268 = plVar6;
      plStack_260 = param_2;
      if (uVar14 != 0) {
        uVar4 = *(uint *)(lVar15 + 0x8c) / uVar14;
      }
      for (; (int)plVar16 < (int)uVar4; plVar16 = (long *)(ulong)((int)plVar16 + 1)) {
        lVar7 = lVar15;
        plVar8 = plVar6;
        FUN_1081c7428(lVar15,&plStack_88);
        in_ZR = (uint)lVar7 == uVar14;
        if ((uint)lVar7 < uVar14) goto LAB_1081a5e28;
        plVar10 = alStack_188;
        for (uVar9 = uVar11; uVar9 != 0; uVar9 = uVar9 - 1) {
          *plVar10 = *plVar10 + lVar1 * (long)plVar6;
          plVar10 = plVar10 + 1;
        }
        lVar7 = 8;
        plVar10 = alStack_108 + 8;
        do {
          plVar10[-8] = plVar10[-8] + lVar2 * 8;
          *plVar10 = *plVar10 + lVar3 * 8;
          lVar7 = lVar7 + -1;
          plVar10 = plVar10 + 1;
        } while (lVar7 != 0);
      }
      uVar14 = *(int *)(lVar15 + 0x8c) - *(int *)(lVar15 + 0xa8);
      in_ZR = uVar14 == 0;
      if (!(bool)in_ZR) {
        FUN_108152710(&lStack_258,plStack_260[1]);
        for (lVar7 = (long)(int)uVar14; lVar7 < (long)plStack_268; lVar7 = lVar7 + 1) {
          alStack_188[lVar7] = lStack_258;
        }
        for (lVar7 = (long)(int)(*(int *)(*(long *)(lVar15 + 0x130) + 0x8c) + uVar4 * -8); lVar7 < 8
            ; lVar7 = lVar7 + 1) {
          alStack_108[lVar7] = lStack_258;
          alStack_108[lVar7 + 8] = lStack_258;
        }
        FUN_1081c7428(lVar15,&plStack_88);
        func_0x00010815277c(&lStack_258);
        in_ZR = (uint)lVar15 == uVar14;
        plVar8 = plVar6;
        if ((uint)lVar15 < uVar14) goto LAB_1081a5e28;
      }
      plVar6 = (long *)0x0;
    }
    else {
LAB_1081a5e28:
      plVar6 = (long *)0x6;
    }
    func_0x0001081a64e4();
    param_2 = plVar16;
  }
  func_0x0001081a6530(uStack_70);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x0001081a64e4();
  __Unwind_Resume();
  __Unwind_Resume();
  pcStack_278 = FUN_1081a6054;
  lStack_298 = 0;
  plStack_290 = param_2;
  lStack_288 = lVar15;
  puStack_280 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar6 + 0x28))();
  lVar7 = lStack_298;
  if (((ulong)plVar6 & 1) == 0) {
LAB_1081a60d0:
    plVar8 = (long *)0x0;
  }
  else {
    if (plVar8 != (long *)0x0) {
      lStack_298 = 0;
      lStack_2b0 = lVar7;
      FUN_1081a4df8(&lStack_2a8,&lStack_2b0,auStack_29c);
      lVar7 = *plVar8;
      *plVar8 = lStack_2a8;
      if (lVar7 != 0) {
        func_0x0001081a6518();
      }
      if (lStack_2b0 != 0) {
        func_0x0001081a6518();
      }
      if (*plVar8 == 0) goto LAB_1081a60d0;
    }
    plVar8 = (long *)0x1;
  }
  lVar7 = lStack_298;
  lStack_298 = 0;
  if (lVar7 != 0) {
    func_0x0001081a6518();
  }
  return plVar8;
}



/* Entry: 1081a6054; end: 1081a6123;  */

undefined8 FUN_1081a6054(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&lStack_28);
  lVar1 = lStack_28;
  if (((ulong)param_1 & 1) == 0) {
LAB_1081a60d0:
    uVar2 = 0;
  }
  else {
    if (param_3 != (long *)0x0) {
      lStack_28 = 0;
      lStack_40 = lVar1;
      FUN_1081a4df8(&lStack_38,&lStack_40,auStack_2c);
      lVar1 = *param_3;
      *param_3 = lStack_38;
      if (lVar1 != 0) {
        func_0x0001081a6518();
      }
      if (lStack_40 != 0) {
        func_0x0001081a6518();
      }
      if (*param_3 == 0) goto LAB_1081a60d0;
    }
    uVar2 = 1;
  }
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x0001081a6518();
  }
  return uVar2;
}



/* Entry: 1081a6124; end: 1081a6127;  */

undefined8 FUN_1081a6124(void)

{
  return 0;
}



/* Entry: 1081a6128; end: 1081a615b;  */

bool FUN_1081a6128(undefined8 param_1,ulong param_2)

{
  if (2 < param_2) {
    _memcmp(param_1,&UNK_10df07e4f,3);
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 1081a615c; end: 1081a61d3;  */

void FUN_1081a615c(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long *plStack_30;
  undefined1 auStack_24 [4];
  
  plStack_30 = (long *)*param_2;
  puVar1 = auStack_24;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = param_3;
  }
  *param_2 = 0;
  FUN_1081a4df8(param_1,&plStack_30,puVar1);
  if (plStack_30 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001081a61ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_30 + 8))();
    return;
  }
  return;
}



/* Entry: 1081a61d4; end: 1081a61db;  */

undefined8 FUN_1081a61d4(void)

{
  return 3;
}



/* Entry: 1081a61dc; end: 1081a625f;  */

bool FUN_1081a61dc(ulong *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_2;
  FUN_1081a6298();
  uVar2 = (uint)uVar3;
  uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar4 = 0;
  do {
    uVar5 = uVar1;
    if (uVar1 == uVar4) break;
    uVar3 = param_2;
    func_0x0001081a62b4(param_2,uVar4);
    uVar5 = uVar4;
    uVar4 = uVar4 + 1;
  } while ((*param_1 >> ((long)param_3 + -4 + (long)(int)uVar3 * 4 & 0x3fU) & 1) != 0);
  return (int)uVar2 <= (int)uVar5;
}



/* Entry: 1081a6260; end: 1081a6297;  */

void FUN_1081a6260(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001081a65ec();
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  FUN_1081a633c(param_1 + 4,param_2 + 4);
  uVar1 = *(undefined4 *)(unaff_x19 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar2;
  *(undefined4 *)(unaff_x20 + 0xa0) = uVar1;
  return;
}



/* Entry: 1081a6298; end: 1081a633b;  */

undefined4 FUN_1081a6298(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 0xd) {
    return *(undefined4 *)(&UNK_10df07e60 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1081a62b4);
  (*pcVar1)();
}



/* Entry: 1081a633c; end: 1081a6387;  */

long FUN_1081a633c(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0x60; lVar1 = lVar1 + 0x18) {
    func_0x000108152830(param_1 + lVar1,param_2 + lVar1);
  }
  return param_1;
}



/* Entry: 1081a6388; end: 1081a63fb;  */

undefined8 FUN_1081a6388(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001081a63bc(&uStack_28);
  return param_1;
}



/* Entry: 1081a63fc; end: 1081a6403;  */

void FUN_1081a63fc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081a65ec(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x10) {
    func_0x0001078bddf8(lVar1 + -8);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1081a6404; end: 1081a644b;  */

void FUN_1081a6404(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081a65ec();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x10) {
    func_0x0001078bddf8(lVar1 + -8);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1081a644c; end: 1081a6493;  */

void FUN_1081a644c(undefined1 *param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = *param_3;
  *param_3 = 0;
  *param_1 = param_2;
  uStack_18 = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x0001078bddf8(&uStack_18);
  return;
}



/* Entry: 1081a6494; end: 1081a64e3;  */

undefined8 FUN_1081a6494(undefined8 param_1)

{
  FUN_1081a50a4(param_1,0);
  return param_1;
}



/* Entry: 1081a64e4; end: 1081a662f;  */

void FUN_1081a64e4(void)

{
  long in_x9;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(in_x9 + 0xb0);
  *(undefined8 *)(in_x9 + 0xb0) = *(undefined8 *)(in_x9 + 0xb8);
  *(undefined8 *)(in_x9 + 0xa8) = uVar1;
  *(undefined8 *)(in_x9 + 0xb8) = *(undefined8 *)(in_x9 + 0xc0);
  *(undefined8 *)(in_x9 + 0xc0) = 0;
  return;
}



/* Entry: 1081a6630; end: 1081a6733;  */

long * FUN_1081a6630(long *param_1,undefined8 param_2)

{
  long lStack_28;
  
  FUN_1081a6e10(&lStack_28,param_2,0x400);
  param_1[0x56] = lStack_28;
  param_1[0x51] = (long)FUN_1081a6790;
  param_1[0x52] = 0x1081a6800;
  param_1[0x53] = (long)FUN_1081a67a8;
  param_1[0x54] = (long)FUN_1081ceb8c;
  param_1[0x55] = (long)FUN_1081a6848;
  _bzero(param_1 + 0x58,0xc0);
  *(undefined1 *)(param_1 + 0x74) = 0;
  FUN_1081d508c(param_1 + 0x57);
  *param_1 = (long)(param_1 + 0x57);
  param_1[0x57] = (long)FUN_1081a716c;
  return param_1;
}



/* Entry: 1081a6734; end: 1081a6737;  */

void FUN_1081a6734(void)

{
  return;
}



/* Entry: 1081a6738; end: 1081a6753;  */

long FUN_1081a6738(long param_1)

{
  if (*(int *)(param_1 + 0xac) < 100) {
    return param_1;
  }
  FUN_1081a716c();
  if (*(char *)(param_1 + 0x3a0) == '\x01') {
    FUN_1081c6514(param_1);
  }
  FUN_1081a684c(param_1 + 0x2b0);
  return param_1;
}



/* Entry: 1081a6754; end: 1081a678f;  */

long FUN_1081a6754(long param_1)

{
  if (*(char *)(param_1 + 0x3a0) == '\x01') {
    FUN_1081c6514(param_1);
  }
  FUN_1081a684c(param_1 + 0x2b0);
  return param_1;
}



/* Entry: 1081a6790; end: 1081a67a7;  */

void FUN_1081a6790(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0001081a67a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x38) + 0x10))(*(long **)(lVar1 + 0x38),lVar1,lVar1 + 8);
  return;
}



/* Entry: 1081a67a8; end: 1081a6847;  */

void FUN_1081a67a8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[5];
  plVar1 = (long *)puVar2[7];
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2,puVar2,puVar2 + 1);
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001081a67fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1);
  return;
}



/* Entry: 1081a6848; end: 1081a684b;  */

void FUN_1081a6848(void)

{
  return;
}



/* Entry: 1081a684c; end: 1081a6883;  */

long * FUN_1081a684c(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 1081a6884; end: 1081a68b7;  */

void FUN_1081a6884(void)

{
  func_0x0001081a6e04();
  func_0x0001081a6df8();
  func_0x0001081a6de8();
  return;
}



/* Entry: 1081a68b8; end: 1081a6c67;  */

void FUN_1081a68b8(long *param_1,byte *param_2,byte *param_3,uint param_4,undefined8 param_5,
                  ulong param_6,long param_7,long param_8,byte param_9)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lStack_a0;
  uint uStack_94;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  plVar23 = (long *)0x0;
  uVar21 = 0;
  uStack_94 = 0;
  lStack_a0 = 0;
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  lStack_68 = 0;
  uVar1 = param_7 + param_6 + param_8 * 2;
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    if (param_4 == *param_2) {
      uVar24 = *(ulong *)(*(long *)(param_2 + 8) + 0x20);
      if (param_6 < uVar24) {
        lVar26 = *(long *)(*(long *)(param_2 + 8) + 0x18);
        lVar25 = lVar26;
        _memcmp(lVar26,param_5,param_6);
        plVar7 = plStack_70;
        if ((int)lVar25 == 0 && uVar1 < uVar24) {
          if (param_8 == 0) {
            uVar22 = 1;
            uVar12 = 1;
          }
          else {
            pbVar2 = (byte *)(lVar26 + param_7 + param_6);
            bVar4 = pbVar2[1];
            uVar22 = (uint)bVar4;
            if (bVar4 == 0) goto LAB_1081a6bac;
            uVar12 = (uint)*pbVar2;
          }
          if (uVar22 <= uVar12 - 1) goto LAB_1081a6bac;
          if (uVar21 == 0) {
            uVar13 = (ulong)uVar22;
            lVar25 = (long)plStack_70 - (long)plVar23;
            uVar19 = lVar25 >> 3;
            if (uVar19 < uVar13) {
              uVar20 = uVar13 - uVar19;
              if ((ulong)(lStack_68 - (long)plStack_70 >> 3) < uVar20) {
                uVar17 = lStack_68 - (long)plVar23 >> 2;
                if (uVar17 <= uVar13) {
                  uVar17 = uVar13;
                }
                if (0x7ffffffffffffff7 < (ulong)(lStack_68 - (long)plVar23)) {
                  uVar17 = 0x1fffffffffffffff;
                }
                if (uVar17 >> 0x3d != 0) {
                  func_0x000104bd35f4();
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x1081a6c3c);
                  (*pcVar9)();
                }
                lVar10 = uVar17 << 3;
                __Znwm();
                puVar3 = (undefined8 *)(lVar10 + lVar25);
                puVar8 = puVar3;
                for (lVar25 = uVar13 * 8 + uVar19 * -8; lVar25 != 0; lVar25 = lVar25 + -8) {
                  *puVar8 = 0;
                  puVar8 = puVar8 + 1;
                }
                plVar14 = puVar3 + -uVar19;
                plVar15 = plVar14;
                for (plVar16 = plVar23; plVar11 = plVar23, plVar16 != plVar7; plVar16 = plVar16 + 1)
                {
                  piVar18 = (int *)*plVar16;
                  if (piVar18 != (int *)0x0) {
                    do {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(piVar18,0x10);
                      if (bVar6) {
                        *piVar18 = *piVar18 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  *plVar15 = (long)piVar18;
                  plVar15 = plVar15 + 1;
                }
                for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
                  func_0x0001078bddf8();
                }
                lStack_68 = lVar10 + uVar17 * 8;
                uVar21 = uVar22;
                plStack_78 = plVar14;
                plStack_70 = puVar3 + uVar20;
                if (plVar23 != (long *)0x0) {
                  __ZdlPv(plVar23);
                }
              }
              else {
                plVar23 = plStack_70 + uVar20;
                for (lVar25 = uVar13 * 8 + uVar19 * -8; uVar21 = uVar22, plStack_70 = plVar23,
                    lVar25 != 0; lVar25 = lVar25 + -8) {
                  *plVar7 = 0;
                  plVar7 = plVar7 + 1;
                }
              }
            }
            else {
              uVar21 = uVar22;
              if (uVar13 < uVar19) {
                FUN_1081a6d30(&plStack_78,plVar23 + uVar13);
              }
            }
          }
          if (uVar22 != uVar21) goto LAB_1081a6bac;
          func_0x00010813fad0(&lStack_80,lVar26 + uVar1,uVar24 - uVar1);
          plVar23 = plStack_78;
          lVar25 = plStack_78[uVar12 - 1];
          if (lVar25 == 0) {
            lVar26 = *(long *)(lStack_80 + 0x20);
            lStack_80 = 0;
            FUN_108166048();
            lStack_a0 = lVar26 + lStack_a0;
            uVar12 = uStack_94 + 1;
            uStack_94 = uVar22;
            if (uVar12 != uVar22) {
              func_0x0001081a6df0();
              uVar21 = uVar22;
              uStack_94 = uVar12;
              goto LAB_1081a6970;
            }
          }
          else {
            *param_1 = 0;
          }
          func_0x0001081a6df0();
          uVar21 = uVar22;
          if (lVar25 == 0) goto LAB_1081a6b84;
          goto LAB_1081a6bb4;
        }
      }
    }
LAB_1081a6970:
  }
  if (uVar21 == 0) {
LAB_1081a6bac:
    lVar25 = 0;
  }
  else {
LAB_1081a6b84:
    if (uStack_94 != uVar21) goto LAB_1081a6bac;
    if (((param_9 & 1) != 0) || (uVar21 != 1)) {
      FUN_1083464d4(param_1,lStack_a0);
      plVar7 = plStack_70;
      lVar25 = *(long *)(*param_1 + 0x18);
      for (; plVar23 != plVar7; plVar23 = plVar23 + 1) {
        _memcpy(lVar25,*(undefined8 *)(*plVar23 + 0x18),*(undefined8 *)(*plVar23 + 0x20));
        lVar25 = lVar25 + *(long *)(*plVar23 + 0x20);
      }
      goto LAB_1081a6bb4;
    }
    lVar25 = *plVar23;
    *plVar23 = 0;
  }
  *param_1 = lVar25;
LAB_1081a6bb4:
  FUN_1081a6d78(&plStack_78);
  return;
}



/* Entry: 1081a6c68; end: 1081a6cd3;  */

void FUN_1081a6c68(void)

{
  func_0x0001081a6e04();
  func_0x0001081a6df8();
  FUN_1081a68b8();
  return;
}



/* Entry: 1081a6cd4; end: 1081a6ce3;  */

undefined8 FUN_1081a6cd4(void)

{
  return 0;
}



/* Entry: 1081a6ce4; end: 1081a6d17;  */

void FUN_1081a6ce4(void)

{
  func_0x0001081a6e04();
  func_0x0001081a6df8();
  func_0x0001081a6de8();
  return;
}



/* Entry: 1081a6d18; end: 1081a6d1b;  */

undefined8 * FUN_1081a6d18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2edf0;
  FUN_1081a6388(param_1 + 1);
  return param_1;
}



/* Entry: 1081a6d1c; end: 1081a6d2f;  */

void FUN_1081a6d1c(void)

{
  func_0x0001081a6db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a6d30; end: 1081a6d6b;  */

void FUN_1081a6d30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    func_0x0001078bddf8();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1081a6d6c; end: 1081a6d77;  */

void FUN_1081a6d6c(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1081a6d78; end: 1081a6ddf;  */

long * FUN_1081a6d78(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1081a6d30(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1081a6de0; end: 1081a6e0f;  */

void FUN_1081a6de0(void)

{
  return;
}


