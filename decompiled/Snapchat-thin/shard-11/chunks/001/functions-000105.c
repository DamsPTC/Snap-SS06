/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10819f47c; end: 10819f47f;  */

undefined8 * FUN_10819f47c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819bf18();
  FUN_1083a3c7c(puVar1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819f480; end: 10819f493;  */

void FUN_10819f480(void)

{
  FUN_10819bc8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819f494; end: 10819f49f;  */

void FUN_10819f494(undefined8 *param_1)

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



/* Entry: 10819f4a0; end: 10819f527;  */

undefined4 FUN_10819f4a0(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_2 + 8);
  uVar2 = 0;
  if (cVar1 == '\x01') {
    func_0x00010819f85c(param_4,param_2,0);
    uVar2 = param_1;
  }
  uVar3 = 0;
  if (*(char *)(param_3 + 8) == '\x01') {
    func_0x00010819f85c(param_4,param_3,1);
    uVar3 = param_1;
  }
  if (cVar1 == '\0') {
    uVar2 = uVar3;
  }
  return uVar2;
}



/* Entry: 10819f528; end: 10819f56f;  */

void FUN_10819f528(undefined8 *param_1)

{
  func_0x0001081a1554(param_1,0x25);
  *param_1 = &PTR_DAT_110a2e450;
  param_1[0x5e] = 0x100000000;
  param_1[0x5f] = 0x100000000;
  param_1[0x60] = 0x100000000;
  param_1[0x61] = 0x100000000;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)((long)param_1 + 0x31c) = 0;
  *(undefined1 *)((long)param_1 + 0x324) = 0;
  return;
}



/* Entry: 10819f570; end: 10819f6b7;  */

byte FUN_10819f570(ulong param_1)

{
  ulong uVar1;
  undefined1 auStack_88 [8];
  byte bStack_80;
  undefined1 auStack_7c [8];
  byte bStack_74;
  undefined8 uStack_70;
  char cStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  char cStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    FUN_10819f848(&uStack_40,&DAT_10f62b0e2);
    if (cStack_38 == '\x01') {
      *(undefined8 *)(param_1 + 0x2f0) = uStack_40;
    }
    else {
      FUN_10819f848(&uStack_50,"y");
      if (cStack_48 == '\x01') {
        *(undefined8 *)(param_1 + 0x2f8) = uStack_50;
      }
      else {
        FUN_10819f848(&uStack_60,"width");
        if (cStack_58 == '\x01') {
          *(undefined8 *)(param_1 + 0x300) = uStack_60;
        }
        else {
          FUN_10819f848(&uStack_70,"height");
          if (cStack_68 == '\x01') {
            *(undefined8 *)(param_1 + 0x308) = uStack_70;
          }
          else {
            FUN_10819f848(auStack_7c,"rx");
            if ((bStack_74 != 1) ||
               (FUN_10819195c(param_1 + 0x310,auStack_7c), (bStack_74 & 1) == 0)) {
              FUN_10819f848(auStack_88,"ry");
              if (bStack_80 == 1) {
                FUN_10819195c(param_1 + 0x31c,auStack_88);
              }
              else {
                bStack_80 = 0;
              }
              goto LAB_10819f638;
            }
          }
        }
      }
    }
  }
  bStack_80 = 1;
LAB_10819f638:
  return bStack_80 & 1;
}



/* Entry: 10819f6b8; end: 10819f767;  */

void FUN_10819f6b8(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  FUN_10819f95c(param_7,param_6 + 0x2f0,param_6 + 0x2f8,param_6 + 0x300,param_6 + 0x308);
  fVar3 = param_1;
  fVar1 = param_2;
  fStack_60 = param_1;
  fStack_5c = param_2;
  fStack_58 = param_3;
  fStack_54 = param_4;
  FUN_10819f4a0(param_6 + 0x310,param_6 + 0x31c,param_7);
  fVar2 = (param_3 - param_1) * 0.5;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  fVar3 = (param_4 - param_2) * 0.5;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  FUN_10817af74(param_5,fVar2,fVar3,&fStack_60);
  return;
}



/* Entry: 10819f768; end: 10819f7af;  */

void FUN_10819f768(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_54 [52];
  
  FUN_10819f6b8(auStack_54,param_1);
  (**(code **)(*param_2 + 0xc0))(param_2,auStack_54,param_4);
  return;
}



/* Entry: 10819f7b0; end: 10819f813;  */

void FUN_10819f7b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_54 [52];
  
  FUN_10819f6b8(auStack_54,param_2,*(undefined8 *)(param_3 + 0x20));
  FUN_10837bd30(param_1,auStack_54,0);
  func_0x0001081a43c8(param_2,param_1);
  return;
}



/* Entry: 10819f814; end: 10819f833;  */

undefined8 FUN_10819f814(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010819f85c(uVar1,param_2 + 0x2f0,0);
  func_0x00010819f85c(uVar1,param_2 + 0x2f8,1);
  func_0x00010819f85c(uVar1,param_2 + 0x300,0);
  func_0x00010819f85c(uVar1,param_2 + 0x308,1);
  return param_1;
}



/* Entry: 10819f834; end: 10819f847;  */

void FUN_10819f834(void)

{
  FUN_10819c344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819f848; end: 10819f95b;  */

void FUN_10819f848(undefined8 *param_1)

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



/* Entry: 10819f95c; end: 10819f9ef;  */

undefined8
FUN_10819f95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x00010819f85c(param_2,param_3,0);
  func_0x00010819f85c(param_2,param_4,1);
  func_0x00010819f85c(param_2,param_5,0);
  func_0x00010819f85c(param_2,param_6,1);
  return param_1;
}



/* Entry: 10819f9f0; end: 10819fa17;  */

undefined8 * FUN_10819f9f0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_10818e208(param_1 + 1);
  return param_1;
}



/* Entry: 10819fa18; end: 10819fa67;  */

void FUN_10819fa18(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  *param_1 = param_3;
  param_1[1] = param_9;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[7] = param_7;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x61] = param_2;
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0xc60);
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x3f800000;
  uVar1 = *param_8;
  param_1[0x68] = param_8[1];
  param_1[0x67] = uVar1;
  return;
}



/* Entry: 10819fa68; end: 10819fae7;  */

void FUN_10819fa68(undefined8 param_1,long param_2)

{
  func_0x0001081a11b4(*(undefined8 *)(param_2 + 0x308));
  return;
}



/* Entry: 10819fae8; end: 10819fb23;  */

long FUN_10819fae8(long param_1)

{
  FUN_10833baf4(*(undefined8 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x310));
  func_0x00010819e850(param_1 + 0x318);
  func_0x0001081a0dfc(param_1 + 0x40);
  return param_1;
}



/* Entry: 10819fb24; end: 10819fb67;  */

long * FUN_10819fb24(long *param_1,long *param_2,int *param_3)

{
  long lVar1;
  
  if (*param_3 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_2;
  }
  lVar1 = param_2[3];
  FUN_108192768(lVar1,param_3 + 2);
  *param_1 = lVar1;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_10819b0c4(param_1 + 1);
    FUN_10819b0f0(*param_1,0);
  }
  return param_1;
}



/* Entry: 10819fb68; end: 1081a0453;  */

void FUN_10819fb68(ulong param_1,float param_2,undefined4 param_3,undefined4 param_4,long *param_5,
                  int *param_6,ulong param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 uVar7;
  float *pfVar8;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long lVar9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar6 = param_5;
  if (*param_6 == 2) {
    plVar6 = (long *)(param_6 + 2);
    FUN_1081a0454(plVar6,param_5[7] + 0x10);
    if ((int)plVar6 != 0) {
      func_0x0001081a1210();
      plVar6 = plVar6 + 1;
      FUN_1081a068c(plVar6,param_6 + 2);
    }
  }
  if (param_6[0xe] == 2) {
    param_1 = (ulong)(uint)param_6[0xf];
    func_0x0001081a11a8();
    param_2 = *(float *)(extraout_x8 + 0x44);
    if ((float)param_1 != param_2) {
      FUN_1081a04cc();
      *(int *)(plVar6 + 8) = 2;
      param_1 = (ulong)(uint)param_6[0xf];
      *(int *)((long)plVar6 + 0x44) = param_6[0xf];
      *(undefined1 *)(plVar6 + 9) = 1;
    }
  }
  if ((param_6[0x11] == 2) &&
     (func_0x0001081a11a8(), param_6[0x12] != *(int *)(extraout_x8_00 + 0x50))) {
    FUN_1081a04cc();
    *(int *)((long)plVar6 + 0x4c) = 2;
    iVar2 = param_6[0x12];
    if ((*(byte *)((long)plVar6 + 0x54) & 1) == 0) {
      *(undefined1 *)((long)plVar6 + 0x54) = 1;
    }
    *(int *)(plVar6 + 10) = iVar2;
  }
  if (param_6[0x52] == 2) {
    if (param_6[0x54] == *(int *)(param_5[7] + 0x158)) {
      plVar6 = (long *)(param_6 + 0x56);
      FUN_1083a3440(plVar6,param_5[7] + 0x160);
      if (((ulong)plVar6 & 1) != 0) goto LAB_10819fc90;
    }
    func_0x0001081a1210();
    *(int *)(plVar6 + 0x2a) = 2;
    plVar6 = plVar6 + 0x2b;
    FUN_10819e2dc(plVar6,param_6 + 0x54);
  }
LAB_10819fc90:
  if (param_6[0x5d] == 2) {
    func_0x0001081a11a8();
    if ((param_6[0x5e] == *(int *)(extraout_x8_01 + 0x180)) &&
       (param_6[0x60] == *(int *)(extraout_x8_01 + 0x188))) {
      param_1 = (ulong)(uint)param_6[0x5f];
      param_2 = *(float *)(extraout_x8_01 + 0x184);
      if ((float)param_6[0x5f] == param_2) goto LAB_10819fd00;
    }
    FUN_1081a04cc();
    *(int *)((long)plVar6 + 0x17c) = 2;
    lVar9 = *(long *)(param_6 + 0x5e);
    *(int *)(plVar6 + 0x31) = param_6[0x60];
    plVar6[0x30] = lVar9;
    if ((*(byte *)((long)plVar6 + 0x18c) & 1) == 0) {
      *(undefined1 *)((long)plVar6 + 0x18c) = 1;
    }
  }
LAB_10819fd00:
  if ((param_6[0x5a] == 2) &&
     (func_0x0001081a11a8(), param_6[0x5b] != *(int *)(extraout_x8_02 + 0x174))) {
    FUN_1081a04cc();
    *(int *)(plVar6 + 0x2e) = 2;
    iVar2 = param_6[0x5b];
    if ((*(byte *)(plVar6 + 0x2f) & 1) == 0) {
      *(undefined1 *)(plVar6 + 0x2f) = 1;
    }
    *(int *)((long)plVar6 + 0x174) = iVar2;
  }
  if ((param_6[0x62] == 2) &&
     (func_0x0001081a11a8(), param_6[99] != *(int *)(extraout_x8_03 + 0x194))) {
    FUN_1081a04cc();
    *(int *)(plVar6 + 0x32) = 2;
    iVar2 = param_6[99];
    if ((*(byte *)(plVar6 + 0x33) & 1) == 0) {
      *(undefined1 *)(plVar6 + 0x33) = 1;
    }
    *(int *)((long)plVar6 + 0x194) = iVar2;
  }
  if ((param_6[0x14] == 2) &&
     (func_0x0001081a11a8(), param_6[0x15] != *(int *)(extraout_x8_04 + 0x5c))) {
    FUN_1081a04cc();
    *(int *)(plVar6 + 0xb) = 2;
    iVar2 = param_6[0x15];
    if ((*(byte *)(plVar6 + 0xc) & 1) == 0) {
      *(undefined1 *)(plVar6 + 0xc) = 1;
    }
    *(int *)((long)plVar6 + 0x5c) = iVar2;
  }
  if (param_6[0x18] == 2) {
    plVar6 = (long *)(param_6 + 0x1a);
    FUN_1081a0454(plVar6,param_5[7] + 0x70);
    if ((int)plVar6 != 0) {
      func_0x0001081a1210();
      plVar6 = plVar6 + 0xd;
      FUN_1081a068c(plVar6,param_6 + 0x1a);
    }
  }
  if (param_6[0x32] == 2) {
    func_0x0001081a11a8();
    if (param_6[0x34] == *(int *)(extraout_x8_05 + 0xd8)) {
      param_1 = (ulong)(uint)param_6[0x33];
      param_2 = *(float *)(extraout_x8_05 + 0xd4);
      if ((float)param_6[0x33] == param_2) goto LAB_10819fe54;
    }
    FUN_1081a04cc();
    *(int *)(plVar6 + 0x1a) = 2;
    uVar7 = *(undefined8 *)(param_6 + 0x33);
    if ((*(byte *)((long)plVar6 + 0xdc) & 1) == 0) {
      *(undefined1 *)((long)plVar6 + 0xdc) = 1;
    }
    *(undefined8 *)((long)plVar6 + 0xd4) = uVar7;
  }
LAB_10819fe54:
  fVar11 = (float)param_1;
  if (param_6[0x26] == 2) {
    plVar6 = param_5 + 7;
    lVar9 = *plVar6;
    if (param_6[0x28] == *(int *)(lVar9 + 0xa8)) {
      if ((long)*(float **)(param_6 + 0x2c) - (long)*(float **)(param_6 + 0x2a) ==
          *(long *)(lVar9 + 0xb8) - *(long *)(lVar9 + 0xb0)) {
        pfVar10 = (float *)(*(long *)(lVar9 + 0xb0) + 4);
        pfVar8 = *(float **)(param_6 + 0x2a);
        while (fVar11 = (float)param_1, pfVar8 != *(float **)(param_6 + 0x2c)) {
          fVar11 = *pfVar8;
          param_1 = (ulong)(uint)fVar11;
          param_2 = pfVar10[-1];
          bVar5 = false;
          if ((pfVar8[1] == *pfVar10) && (bVar5 = false, !NAN(fVar11) && !NAN(param_2))) {
            bVar5 = fVar11 == param_2;
          }
          if (!bVar5) goto LAB_10819fec4;
          pfVar10 = pfVar10 + 2;
          pfVar8 = pfVar8 + 2;
        }
        goto LAB_10819fedc;
      }
    }
LAB_10819fec4:
    FUN_1081a04cc();
    *(int *)(plVar6 + 0x14) = 2;
    plVar6 = plVar6 + 0x15;
    FUN_10819e3cc(plVar6,param_6 + 0x28);
  }
LAB_10819fedc:
  if ((param_6[0x36] == 2) &&
     (func_0x0001081a1248(param_6[0x37]), extraout_w8 != *(int *)(extraout_x9 + 0xe4))) {
    FUN_1081a04cc();
    *(int *)(plVar6 + 0x1c) = 2;
    *(int *)((long)plVar6 + 0xe4) = param_6[0x37];
    *(undefined1 *)(plVar6 + 0x1d) = 1;
  }
  if ((param_6[0x39] == 2) &&
     (func_0x0001081a11a8(), param_6[0x3a] != *(int *)(extraout_x8_06 + 0xf0))) {
    FUN_1081a04cc();
    *(int *)((long)plVar6 + 0xec) = 2;
    iVar2 = param_6[0x3a];
    if ((*(byte *)((long)plVar6 + 0xf4) & 1) == 0) {
      *(undefined1 *)((long)plVar6 + 0xf4) = 1;
    }
    *(int *)(plVar6 + 0x1e) = iVar2;
  }
  if (param_6[0x3c] == 2) {
    fVar11 = (float)param_6[0x3d];
    func_0x0001081a11a8();
    param_2 = *(float *)(extraout_x8_07 + 0xfc);
    if (fVar11 != param_2) {
      FUN_1081a04cc();
      *(int *)(plVar6 + 0x1f) = 2;
      fVar11 = (float)param_6[0x3d];
      *(float *)((long)plVar6 + 0xfc) = fVar11;
      *(undefined1 *)(plVar6 + 0x20) = 1;
    }
  }
  if (param_6[0x3f] == 2) {
    fVar11 = (float)param_6[0x40];
    func_0x0001081a11a8();
    param_2 = *(float *)(extraout_x8_08 + 0x108);
    if (fVar11 != param_2) {
      FUN_1081a04cc();
      *(int *)((long)plVar6 + 0x104) = 2;
      fVar11 = (float)param_6[0x40];
      *(float *)(plVar6 + 0x21) = fVar11;
      *(undefined1 *)((long)plVar6 + 0x10c) = 1;
    }
  }
  if (param_6[0x42] == 2) {
    func_0x0001081a11a8();
    if (param_6[0x44] == *(int *)(extraout_x8_09 + 0x118)) {
      fVar11 = (float)param_6[0x43];
      param_2 = *(float *)(extraout_x8_09 + 0x114);
      if (fVar11 == param_2) goto LAB_1081a0030;
    }
    FUN_1081a04cc();
    *(int *)(plVar6 + 0x22) = 2;
    uVar7 = *(undefined8 *)(param_6 + 0x43);
    if ((*(byte *)((long)plVar6 + 0x11c) & 1) == 0) {
      *(undefined1 *)((long)plVar6 + 0x11c) = 1;
    }
    *(undefined8 *)((long)plVar6 + 0x114) = uVar7;
  }
LAB_1081a0030:
  if ((param_6[0x65] == 2) &&
     (func_0x0001081a11a8(), param_6[0x66] != *(int *)(extraout_x8_10 + 0x1a0))) {
    FUN_1081a04cc();
    *(int *)((long)plVar6 + 0x19c) = 2;
    iVar2 = param_6[0x66];
    if ((*(byte *)((long)plVar6 + 0x1a4) & 1) == 0) {
      *(undefined1 *)((long)plVar6 + 0x1a4) = 1;
    }
    *(int *)(plVar6 + 0x34) = iVar2;
  }
  if ((param_6[0x46] == 2) &&
     (func_0x0001081a11a8(), param_6[0x47] != *(int *)(extraout_x8_11 + 0x124))) {
    FUN_1081a04cc();
    *(int *)(plVar6 + 0x24) = 2;
    iVar2 = param_6[0x47];
    if ((*(byte *)(plVar6 + 0x25) & 1) == 0) {
      *(undefined1 *)(plVar6 + 0x25) = 1;
    }
    *(int *)((long)plVar6 + 0x124) = iVar2;
  }
  if ((param_6[0x49] == 2) &&
     (func_0x0001081a1248(param_6[0x4a]), extraout_w8_00 != *(int *)(extraout_x9_00 + 0x130))) {
    FUN_1081a04cc();
    *(int *)((long)plVar6 + 300) = 2;
    *(int *)(plVar6 + 0x26) = param_6[0x4a];
    *(undefined1 *)((long)plVar6 + 0x134) = 1;
  }
  if ((param_6[0x4c] == 2) &&
     (func_0x0001081a1248(param_6[0x4d]), extraout_w8_01 != *(int *)(extraout_x9_01 + 0x13c))) {
    FUN_1081a04cc();
    *(int *)(plVar6 + 0x27) = 2;
    *(int *)((long)plVar6 + 0x13c) = param_6[0x4d];
    *(undefined1 *)(plVar6 + 0x28) = 1;
  }
  if ((param_6[0x4f] == 2) &&
     (func_0x0001081a1248(param_6[0x50]), extraout_w8_02 != *(int *)(extraout_x9_02 + 0x148))) {
    FUN_1081a04cc();
    *(int *)((long)plVar6 + 0x144) = 2;
    *(int *)(plVar6 + 0x29) = param_6[0x50];
    *(undefined1 *)((long)plVar6 + 0x14c) = 1;
  }
  iVar2 = param_6[0x84];
  if (param_6[0x68] == 2) {
    fVar12 = (float)param_6[0x69];
    fVar11 = 1.0;
    if (fVar12 < 1.0) {
      lVar9 = param_5[7];
      func_0x0001081a0f58(lVar9 + 0x10);
      iVar3 = *(int *)(lVar9 + 0x10);
      func_0x0001081a0f58(lVar9 + 0x70);
      if ((param_7 & 1) != 0) {
        if ((iVar2 != 2) && ((iVar3 != 0) == (*(int *)(lVar9 + 0x70) == 0))) {
          fVar11 = fVar12 * *(float *)(param_5 + 0x66);
          *(float *)(param_5 + 0x66) = fVar11;
          goto LAB_1081a0214;
        }
      }
      func_0x0001081a11e4();
      uStack_70 = 0;
      uStack_6c = 0x40800000;
      uStack_68 = 0;
      fStack_74 = 1.0;
      if (fVar12 <= 1.0) {
        fStack_74 = fVar12;
      }
      param_2 = 0.0;
      if (fStack_74 <= 0.0) {
        fStack_74 = 0.0;
      }
      fVar11 = fStack_74;
      func_0x0001081a122c(param_5[0x61]);
      func_0x0001081a11dc();
    }
  }
LAB_1081a0214:
  if (param_6[0x6c] == 2 && param_6[0x6e] == 1) {
    func_0x0001081a1238(auStack_b0);
    if ((lStack_a8 != 0) && (*(int *)(lStack_a8 + 0xc) == 1)) {
      FUN_108191ab0(&uStack_60,lStack_a8,param_5);
      func_0x0001081a0698(param_5);
      FUN_108110420(param_5[0x61],&uStack_60,1);
      FUN_1081a06c8(param_5 + 99,&uStack_60);
      FUN_10837ca5c(uStack_60);
    }
    FUN_10819b08c(auStack_b0);
  }
  if (param_6[0x7a] == 2 && param_6[0x7c] == 1) {
    func_0x0001081a1238(&uStack_60);
    lVar9 = lStack_58;
    if ((lStack_58 != 0) && (*(int *)(lStack_58 + 0xc) == 0x1f)) {
      FUN_10819c060(lStack_58,param_5);
      fStack_c8 = fVar11;
      fStack_c4 = param_2;
      uStack_c0 = param_3;
      uStack_bc = param_4;
      FUN_10833c3b4(param_5[0x61],&fStack_c8,0);
      FUN_10819c080(lVar9,param_5);
      func_0x0001081a11e4();
      fStack_74 = 1.0;
      uStack_70 = 0;
      uStack_6c = 0x40800000;
      uStack_68 = 0;
      FUN_1083762f4(auStack_b0,5);
      FUN_10833c3b4(param_5[0x61],&fStack_c8,auStack_b0);
      FUN_10810f48c(param_5[0x61],&fStack_c8,1);
      func_0x0001081a11dc();
    }
    FUN_10819b08c(&uStack_60);
  }
  if ((iVar2 == 2) && (param_6[0x86] == 1)) {
    func_0x0001081a1238(&uStack_60);
    if ((lStack_58 != 0) && (*(int *)(lStack_58 + 0xc) == 0x1a)) {
      FUN_108199a7c(&fStack_c8,lStack_58,param_5);
      if (CONCAT44(fStack_c4,fStack_c8) != 0) {
        func_0x0001081a11e4();
        fStack_74 = 1.0;
        uStack_70 = 0;
        uStack_6c = 0x40800000;
        uStack_68 = 0;
        piVar1 = (int *)(extraout_x8_12 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uStack_b8 = 0;
        FUN_10811e834(&uStack_b8);
        func_0x0001081a122c(param_5[0x61]);
        func_0x0001081a11dc();
      }
      FUN_10811e834(&fStack_c8);
    }
    FUN_10819b08c(&uStack_60);
  }
  return;
}



/* Entry: 1081a0454; end: 1081a04cb;  */

uint FUN_1081a0454(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[2] == param_2[2])) && (param_1[3] == param_2[3])) &&
     ((*(long *)(param_1 + 4) == *(long *)(param_2 + 4) && (param_1[6] == param_2[6])))) {
    param_1 = param_1 + 8;
    FUN_1083a3440(param_1,param_2 + 8);
    return (uint)param_1 ^ 1;
  }
  return 1;
}



/* Entry: 1081a04cc; end: 1081a068b;  */

/* WARNING: Possible PIC construction at 0x0001081a05e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081a05e4) */

undefined8 * FUN_1081a04cc(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = param_1 + 1;
  if ((*(byte *)(param_1 + 0x59) & 1) == 0) {
    puVar4 = (undefined8 *)*param_1;
    param_1[1] = *puVar4;
    FUN_10819e018(param_1 + 2,puVar4 + 1);
    uVar5 = puVar4[9];
    uVar3 = puVar4[8];
    uVar7 = puVar4[0xb];
    uVar6 = puVar4[10];
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(puVar4 + 0xc);
    param_1[0xc] = uVar7;
    param_1[0xb] = uVar6;
    param_1[10] = uVar5;
    param_1[9] = uVar3;
    FUN_10819e018(param_1 + 0xe,puVar4 + 0xd);
    FUN_10819e34c(param_1 + 0x15,puVar4 + 0x14);
    _memcpy(param_1 + 0x1b,puVar4 + 0x1a,0x80);
    FUN_10819e220(param_1 + 0x2b,puVar4 + 0x2a);
    _memcpy(param_1 + 0x2f,puVar4 + 0x2e,0x44);
    FUN_10819df3c(param_1 + 0x38,puVar4 + 0x37);
    uVar3 = puVar4[0x3c];
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(puVar4 + 0x3d);
    param_1[0x3d] = uVar3;
    FUN_10819df3c(param_1 + 0x3f,puVar4 + 0x3e);
    FUN_10819df3c(param_1 + 0x44,puVar4 + 0x43);
    FUN_1081974e8(param_1 + 0x49,puVar4 + 0x48);
    uVar3 = puVar4[0x4c];
    *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)(puVar4 + 0x4d);
    param_1[0x4d] = uVar3;
    FUN_1081974e8(param_1 + 0x4f,puVar4 + 0x4e);
    uVar3 = puVar4[0x52];
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(puVar4 + 0x53);
    param_1[0x53] = uVar3;
    FUN_1081974e8(param_1 + 0x55,puVar4 + 0x54);
    *(undefined1 *)(param_1 + 0x59) = 1;
    unaff_x30 = 0x1081a05e4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = puVar2;
    unaff_x29 = puVar1;
  }
  if ((*(byte *)(param_1 + 0x59) & 1) == 0) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000104bdc2c8();
    if ((*(byte *)(puVar2 + 5) & 1) == 0) {
      *(undefined1 **)((long)register0x00000008 + -0x20) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0x1081a0f58;
      func_0x000104bdc2c8();
      *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x20;
      *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x30) =
           (undefined1 *)((long)register0x00000008 + -0x20);
      *(code **)((long)register0x00000008 + -0x28) = FUN_1081a0f70;
      if (*(char *)(puVar2 + 2) == '\x01') {
        FUN_108376b90();
      }
      else {
        FUN_1081a0fa4();
      }
      return puVar2;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1081a068c; end: 1081a06c7;  */

undefined4 * FUN_1081a068c(undefined4 *param_1)

{
  *param_1 = 2;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    FUN_10819e12c();
  }
  else {
    FUN_10819e07c();
  }
  return param_1 + 2;
}



/* Entry: 1081a06c8; end: 1081a06eb;  */

void FUN_1081a06c8(undefined8 *param_1)

{
  FUN_1081a0f70();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)((long)param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x0001081919cc();
  *param_1 = &PTR_FUN_110a2e290;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0x1138270b0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x324) = 0;
  *(undefined1 *)((long)param_1 + 0x32c) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)((long)param_1 + 0x33c) = 0;
  *(undefined1 *)((long)param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  return;
}



/* Entry: 1081a06ec; end: 1081a08d7;  */

void FUN_1081a06ec(undefined8 *param_1,float param_2,undefined8 *param_3,int *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x22;
  float fVar4;
  float fVar5;
  undefined1 auStack_670 [8];
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined1 uStack_62c;
  undefined8 *puStack_628;
  undefined1 uStack_620;
  undefined1 uStack_360;
  long lStack_358;
  undefined4 uStack_350;
  undefined1 uStack_348;
  undefined1 uStack_338;
  undefined4 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 auStack_310 [88];
  
  if (*param_4 == 0) {
    param_1[10] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_1081a08d8(param_1);
  if (*param_4 == 1) {
    FUN_1081a11a0();
    func_0x0001081a1200();
    FUN_108376208();
    goto LAB_1081a083c;
  }
  if (*param_4 != 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1081a08a0);
    (*pcVar1)();
  }
  FUN_10819f9f0(auStack_310);
  auStack_310[0] = *(undefined8 *)param_3[7];
  lStack_358 = param_3[0x61];
  uStack_640 = param_3[4];
  uStack_658 = param_3[1];
  uStack_660 = *param_3;
  uStack_648 = param_3[3];
  uStack_650 = param_3[2];
  uStack_638 = 0;
  uStack_62c = 0;
  uStack_620 = 0;
  uStack_360 = 0;
  uStack_350 = *(undefined4 *)(lStack_358 + 0xc60);
  uStack_348 = 0;
  uStack_338 = 0;
  uStack_330 = 0x3f800000;
  uStack_320 = param_3[0x68];
  uStack_328 = param_3[0x67];
  puVar2 = param_3;
  puStack_628 = auStack_310;
  FUN_10819fb24(auStack_670,param_3,param_4 + 6);
  puVar3 = puVar2;
  if (puStack_668 == (undefined8 *)0x0) {
LAB_1081a07e4:
    FUN_1081a11a0();
    func_0x0001081a1200();
    FUN_108376208(puStack_668,puVar3);
  }
  else {
    FUN_1081a11a0();
    puVar3 = puStack_668;
    FUN_10819c3d8(puStack_668,&uStack_660,puVar2);
    if (((ulong)puVar3 & 1) == 0) goto LAB_1081a07e4;
  }
  FUN_10819b08c(auStack_670);
  unaff_x22 = &uStack_660;
  FUN_10819fae8();
  func_0x0001081a1220();
LAB_1081a083c:
  FUN_1081a11a0();
  *(uint *)(unaff_x22 + 9) = *(uint *)(unaff_x22 + 9) | 1;
  FUN_1081a11a0();
  puVar2 = unaff_x22;
  FUN_1081a11a0();
  fVar4 = param_2 * *(float *)((long)puVar2 + 0x3c) * *(float *)(param_3 + 0x66);
  fVar5 = 1.0;
  if (fVar4 <= 1.0) {
    fVar5 = fVar4;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)((long)unaff_x22 + 0x3c) = fVar5;
  return;
}



/* Entry: 1081a08d8; end: 1081a08fb;  */

uint * FUN_1081a08d8(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  FUN_1081a0fc0();
  if ((param_1[0x14] & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  uVar5 = param_2;
  FUN_1081a10f0();
  uVar3 = param_1[1];
  uVar1 = uVar3 - 1 & (uint)uVar5;
  uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return (uint *)0x0;
    }
    puVar7 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 0x18);
    uVar4 = *puVar7;
    if (uVar4 == 0) break;
    if ((uint)uVar5 == uVar4) {
      puVar7 = puVar7 + 2;
      uVar6 = param_2;
      FUN_1083a3440(param_2,puVar7);
      if ((uVar6 & 1) != 0) {
        return puVar7;
      }
    }
    uVar4 = 0;
    if ((int)uVar1 < 1) {
      uVar4 = uVar3;
    }
    uVar1 = (uVar1 + uVar4) - 1;
    uVar2 = uVar2 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 1081a08fc; end: 1081a099b;  */

int FUN_1081a08fc(long param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  
  if (**(long **)(param_1 + 0x38) == 0) {
LAB_1081a0958:
    iVar2 = *param_2;
    if (iVar2 == 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0x130);
    }
    else if (iVar2 == 2) {
      iVar2 = -0x1000000;
    }
    else {
      if (iVar2 != 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1081a099c);
        (*pcVar1)();
      }
      iVar2 = param_2[1];
    }
  }
  else {
    piVar3 = param_2;
    piVar4 = param_2;
    FUN_1081a0c40(param_2);
    lVar5 = (long)piVar4 << 3;
    do {
      if (lVar5 == 0) goto LAB_1081a0958;
      piVar4 = (int *)**(undefined8 **)(param_1 + 0x38);
      FUN_1081a0c64(piVar4,piVar3);
      piVar3 = piVar3 + 2;
      lVar5 = lVar5 + -8;
    } while (piVar4 == (int *)0x0);
    iVar2 = *piVar4;
  }
  return iVar2;
}



/* Entry: 1081a099c; end: 1081a09f3;  */

void FUN_1081a099c(long param_1,long param_2)

{
  FUN_1081a06ec(param_1,*(undefined4 *)(*(long *)(param_2 + 0x38) + 0x44),param_2,
                *(long *)(param_2 + 0x38) + 0x10);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1081a11a0();
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffff3f;
  }
  return;
}



/* Entry: 1081a09f4; end: 1081a0c3f;  */

void FUN_1081a09f4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined8 uStack_288;
  undefined4 uStack_27c;
  undefined1 auStack_278 [512];
  undefined1 *puStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_2 + 0x38);
  fVar12 = *(float *)(lVar10 + 0x108);
  lVar4 = param_2;
  FUN_1081a06ec(param_1,param_2,lVar10 + 0x70);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1081a11a0();
    *(uint *)(lVar4 + 0x48) = *(uint *)(lVar4 + 0x48) & 0xffffff3f | 0x40;
    FUN_1081a11a0();
    lVar5 = *(long *)(param_2 + 0x20);
    func_0x0001081a1218(lVar5,lVar10 + 0x114);
    if (0.0 <= fVar12) {
      *(float *)(lVar4 + 0x40) = fVar12;
    }
    FUN_1081a11a0();
    if (2 < *(uint *)(lVar10 + 0xe4)) goto LAB_1081a0c04;
    *(uint *)(lVar5 + 0x48) = *(uint *)(lVar5 + 0x48) & 0xfffffff3 | *(uint *)(lVar10 + 0xe4) << 2;
    FUN_1081a11a0();
    uVar7 = 0x10;
    if (*(int *)(lVar10 + 0xf0) != 1) {
      uVar7 = 0;
    }
    uVar1 = 0x20;
    if (*(int *)(lVar10 + 0xf0) != 2) {
      uVar1 = uVar7;
    }
    *(uint *)(lVar5 + 0x48) = uVar1 | *(uint *)(lVar5 + 0x48) & 0xffffffcf;
    FUN_1081a11a0();
    if (0.0 <= *(float *)(lVar10 + 0xfc)) {
      *(float *)(lVar5 + 0x44) = *(float *)(lVar10 + 0xfc);
    }
    FUN_1081a11a0();
    if ((*(byte *)(lVar10 + 200) & 1) != 0) {
      if (*(int *)(lVar10 + 0xa8) == 1) {
        uVar8 = *(undefined8 *)(param_2 + 0x20);
        lVar11 = *(long *)(lVar10 + 0xb8) - *(long *)(lVar10 + 0xb0);
        lVar9 = lVar11 >> 3;
        puStack_78 = auStack_278;
        uVar6 = 0;
        uStack_70 = 0x10000000000;
        FUN_1081a0f10(&puStack_78,lVar9);
        lVar2 = *(long *)(lVar10 + 0xb8);
        for (lVar4 = *(long *)(lVar10 + 0xb0); lVar4 != lVar2; lVar4 = lVar4 + 8) {
          func_0x0001081a1218(uVar8,lVar4);
          uStack_27c = (undefined4)uVar6;
          FUN_1081a0e80(&puStack_78,&uStack_27c);
        }
        if (((uint)lVar11 >> 3 & 1) != 0) {
          FUN_108184cd4(&puStack_78,lVar9);
          _memcpy(puStack_78 + lVar9 * 4,puStack_78,lVar11 >> 1);
        }
        func_0x0001081a1218(uVar8,lVar10 + 0xd4);
        FUN_1083ad04c(&uStack_288,puStack_78,uStack_70 & 0xffffffff);
        FUN_1081842d4(&puStack_78);
        uVar6 = uStack_288;
      }
      else {
        uVar6 = 0;
      }
      uStack_288 = 0;
      FUN_1082b15a4(lVar5,uVar6);
      func_0x000108115b70(&uStack_288);
      goto LAB_1081a0bc4;
    }
  }
  else {
LAB_1081a0bc4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bdc2c8();
LAB_1081a0c04:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1081a0c08);
  (*pcVar3)();
}



/* Entry: 1081a0c40; end: 1081a0c63;  */

undefined1  [16] FUN_1081a0c40(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    auVar2._8_8_ = *(long *)(lVar1 + 0x10) - *(long *)(lVar1 + 8) >> 3;
    auVar2._0_8_ = *(long *)(lVar1 + 8);
    return auVar2;
  }
  return ZEXT816(0);
}



/* Entry: 1081a0c64; end: 1081a0ccf;  */

long FUN_1081a0c64(long param_1)

{
  long lVar1;
  
  FUN_1081a1048();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 1081a0cd0; end: 1081a0dab;  */

void FUN_1081a0cd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_78 [3];
  
  FUN_1081a1130(auStack_78,param_1 + 0x20);
  if (param_6 == 1) {
    puVar1 = auStack_78;
    FUN_1081a0dac();
    uVar2 = NEON_fmov(0x3f800000,4);
    *puVar1 = uVar2;
    *(undefined4 *)(puVar1 + 1) = 0x42b40000;
  }
  FUN_10819f95c(auStack_78[0],param_2,param_3,param_4,param_5);
  func_0x0001081a0c84(param_1,param_6);
  return;
}



/* Entry: 1081a0dac; end: 1081a0e2b;  */

long * FUN_1081a0dac(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
    lVar1 = ((long *)*param_1)[1];
    param_1[1] = *(long *)*param_1;
    *(int *)(param_1 + 2) = (int)lVar1;
    *(undefined1 *)((long)param_1 + 0x14) = 1;
    plVar2 = param_1 + 1;
    FUN_1081a0f28();
    *param_1 = (long)plVar2;
  }
  plVar2 = param_1 + 1;
  if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
    return plVar2;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(plVar2 + 0x58) & 1) != 0) {
    return plVar2;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(plVar2 + 5) & 1) != 0) {
    return plVar2;
  }
  func_0x000104bdc2c8();
  if ((char)plVar2[2] == '\x01') {
    FUN_108376b90();
  }
  else {
    FUN_1081a0fa4();
  }
  return plVar2;
}



/* Entry: 1081a0e2c; end: 1081a0e7f;  */

long * FUN_1081a0e2c(long *param_1,long param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_10819b0c4(param_1 + 1);
    FUN_10819b0f0(*param_1,0);
  }
  return param_1;
}



/* Entry: 1081a0e80; end: 1081a0f0f;  */

undefined4 * FUN_1081a0e80(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    puVar4 = (undefined4 *)(*param_1 + (long)iVar3 * 4);
    *puVar4 = *param_2;
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_108184cb0(0x3ff8000000000000,param_1,1);
    puVar4 = (undefined4 *)((long)plVar1 + (long)(int)param_1[1] * 4);
    *puVar4 = *param_2;
    FUN_108184c40(param_1,plVar1,uVar2);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  return puVar4;
}



/* Entry: 1081a0f10; end: 1081a0f27;  */

void FUN_1081a0f10(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar1 = param_2 - (int)param_1[1];
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0 || param_2 < (int)param_1[1]) {
    return;
  }
  if ((int)((*(uint *)((long)param_1 + 0xc) >> 1) - (int)param_1[1]) < (int)uVar1) {
    plVar2 = param_1;
    FUN_108184cb0(0x3ff0000000000000);
    if ((int)param_1[1] != 0) {
      _memcpy(plVar2,*param_1,(long)(int)param_1[1] << 2);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      func_0x000108185818();
    }
    uVar3 = uVar3 >> 2;
    if (0x7ffffffe < uVar3) {
      uVar3 = 0x7fffffff;
    }
    *param_1 = (long)plVar2;
    *(uint *)((long)param_1 + 0xc) = (int)uVar3 << 1 | 1;
    return;
  }
  return;
}



/* Entry: 1081a0f28; end: 1081a0f6f;  */

long FUN_1081a0f28(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 0x2c0) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_108376b90();
  }
  else {
    FUN_1081a0fa4();
  }
  return param_1;
}



/* Entry: 1081a0f70; end: 1081a0fa3;  */

long FUN_1081a0f70(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_108376b90();
  }
  else {
    FUN_1081a0fa4();
  }
  return param_1;
}



/* Entry: 1081a0fa4; end: 1081a0fbf;  */

void FUN_1081a0fa4(long param_1)

{
  func_0x000108376b14();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 1081a0fc0; end: 1081a100b;  */

undefined8 * FUN_1081a0fc0(undefined8 *param_1)

{
  FUN_1081a100c();
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x40800000;
  *(undefined1 *)(param_1 + 10) = 1;
  return param_1;
}



/* Entry: 1081a100c; end: 1081a1047;  */

void FUN_1081a100c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108375e94();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 1081a1048; end: 1081a10ef;  */

uint * FUN_1081a1048(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  uVar5 = param_2;
  FUN_1081a10f0();
  uVar3 = *(uint *)(param_1 + 4);
  uVar1 = uVar3 - 1 & (uint)uVar5;
  uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return (uint *)0x0;
    }
    puVar7 = (uint *)(*(long *)(param_1 + 8) + (long)(int)uVar1 * 0x18);
    uVar4 = *puVar7;
    if (uVar4 == 0) break;
    if ((uint)uVar5 == uVar4) {
      puVar7 = puVar7 + 2;
      uVar6 = param_2;
      FUN_1083a3440(param_2,puVar7);
      if ((uVar6 & 1) != 0) {
        return puVar7;
      }
    }
    uVar4 = 0;
    if ((int)uVar1 < 1) {
      uVar4 = uVar3;
    }
    uVar1 = (uVar1 + uVar4) - 1;
    uVar2 = uVar2 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 1081a10f0; end: 1081a112f;  */

uint FUN_1081a10f0(uint param_1)

{
  func_0x0001081a110c();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1081a1130; end: 1081a119f;  */

long FUN_1081a1130(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  func_0x0001081a1158();
  return param_1;
}



/* Entry: 1081a11a0; end: 1081a1253;  */

uint * FUN_1081a11a0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *unaff_x19;
  
  if ((unaff_x19[0x14] & 1) != 0) {
    return unaff_x19;
  }
  func_0x000104bdc2c8();
  uVar5 = param_2;
  FUN_1081a10f0();
  uVar3 = unaff_x19[1];
  uVar1 = uVar3 - 1 & (uint)uVar5;
  uVar2 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return (uint *)0x0;
    }
    puVar7 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)uVar1 * 0x18);
    uVar4 = *puVar7;
    if (uVar4 == 0) break;
    if ((uint)uVar5 == uVar4) {
      puVar7 = puVar7 + 2;
      uVar6 = param_2;
      FUN_1083a3440(param_2,puVar7);
      if ((uVar6 & 1) != 0) {
        return puVar7;
      }
    }
    uVar4 = 0;
    if ((int)uVar1 < 1) {
      uVar4 = uVar3;
    }
    uVar1 = (uVar1 + uVar4) - 1;
    uVar2 = uVar2 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 1081a1254; end: 1081a13ab;  */

void FUN_1081a1254(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6
                  )

{
  bool bVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(int *)(param_5 + 0x344) == 1) {
    uStack_58 = *(undefined8 *)(param_5 + 0x308);
    uStack_60 = *(undefined8 *)(param_5 + 0x310);
  }
  else {
    uStack_60 = 0x100000000;
    uStack_58 = 0x100000000;
  }
  pfVar3 = (float *)(param_6 + 0x20);
  FUN_10819f95c(*(long *)pfVar3,&uStack_58,&uStack_60,param_5 + 0x318,param_5 + 800);
  fStack_70 = param_1;
  fStack_6c = param_2;
  fStack_68 = param_3;
  fStack_64 = param_4;
  FUN_10814bdfc(auStack_98);
  if (*(char *)(param_5 + 0x340) == '\x01') {
    if (*(float *)(param_5 + 0x338) <= *(float *)(param_5 + 0x330)) {
      return;
    }
    if (*(float *)(param_5 + 0x33c) <= *(float *)(param_5 + 0x334)) {
      return;
    }
    param_3 = *(float *)(param_5 + 0x338) - *(float *)(param_5 + 0x330);
    param_4 = *(float *)(param_5 + 0x33c) - *(float *)(param_5 + 0x334);
    FUN_10819da88(auStack_c0,param_5 + 0x330,&fStack_70,*(undefined8 *)(param_5 + 0x328));
    FUN_108363e94(auStack_98,auStack_c0);
  }
  else {
    param_3 = param_3 - param_1;
    param_4 = param_4 - param_2;
  }
  uVar2 = 0;
  func_0x0001081420b8();
  if ((uVar2 & 1) == 0) {
    func_0x0001081a0698(param_6);
    FUN_10833e2b0(*(undefined8 *)(param_6 + 0x308),auStack_98);
  }
  fVar4 = (*(float **)pfVar3)[1];
  bVar1 = false;
  if ((param_3 == **(float **)pfVar3) && (bVar1 = false, !NAN(param_4) && !NAN(fVar4))) {
    bVar1 = param_4 == fVar4;
  }
  if (!bVar1) {
    FUN_1081a0dac();
    *pfVar3 = param_3;
    pfVar3[1] = param_4;
  }
  FUN_1081a4354(param_5,param_6);
  return;
}



/* Entry: 1081a13ac; end: 1081a14c7;  */

void FUN_1081a13ac(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  iVar2 = (int)param_2;
  switch(iVar2) {
  case 0x27:
    if (*param_3 == 9) {
      uVar4 = **(undefined8 **)(param_3 + 2);
      *(undefined8 *)(param_1 + 0x338) = (*(undefined8 **)(param_3 + 2))[1];
      *(undefined8 *)(param_1 + 0x330) = uVar4;
      if ((*(byte *)(param_1 + 0x340) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x340) = 1;
      }
      lVar1 = param_1 + 0x330;
      if ((*(byte *)(param_1 + 0x340) & 1) == 0) {
        func_0x000104bdc2c8();
        func_0x000108185380();
        uVar4 = *(undefined8 *)(CONCAT44(uVar3,iVar2) + 0x18);
        *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(CONCAT44(uVar3,iVar2) + 0x20);
        *(undefined8 *)(lVar1 + 0x18) = uVar4;
        return;
      }
      return;
    }
    break;
  case 0x29:
    if (*param_3 == 2) {
      *(undefined8 *)(param_1 + 0x318) = **(undefined8 **)(param_3 + 2);
      return;
    }
    break;
  case 0x2a:
    if (*param_3 == 2) {
      *(undefined8 *)(param_1 + 0x308) = **(undefined8 **)(param_3 + 2);
      return;
    }
    break;
  case 0x2d:
    if (*param_3 == 2) {
      *(undefined8 *)(param_1 + 0x310) = **(undefined8 **)(param_3 + 2);
      return;
    }
    break;
  default:
    if (iVar2 == 0x13) {
      if (*param_3 != 2) {
        return;
      }
      *(undefined8 *)(param_1 + 800) = **(undefined8 **)(param_3 + 2);
      return;
    }
    if (iVar2 == 0x17) {
      if (*param_3 != 5) {
        return;
      }
      *(undefined8 *)(param_1 + 0x328) = **(undefined8 **)(param_3 + 2);
      return;
    }
  case 0x28:
  case 0x2b:
  case 0x2c:
    if (iVar2 == 0x24 && *param_3 == 8) {
      puVar5 = *(undefined8 **)(param_3 + 2);
      uVar6 = puVar5[1];
      uVar4 = *puVar5;
      uVar8 = puVar5[3];
      uVar7 = puVar5[2];
      *(undefined8 *)(param_1 + 0x2e8) = puVar5[4];
      *(undefined8 *)(param_1 + 0x2d0) = uVar6;
      *(undefined8 *)(param_1 + 0x2c8) = uVar4;
      *(undefined8 *)(param_1 + 0x2e0) = uVar8;
      *(undefined8 *)(param_1 + 0x2d8) = uVar7;
    }
  }
  return;
}



/* Entry: 1081a14c8; end: 1081a153b;  */

undefined1  [16] FUN_1081a14c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0;
  uVar2 = 0;
  if ((*(int *)(param_2 + 0x31c) != 2) && (*(int *)(param_2 + 0x324) != 2)) {
    func_0x00010819f85c(param_1,0,param_3,param_2 + 0x318,0);
    uVar1 = param_1;
    func_0x00010819f85c(param_3,param_2 + 800,1);
    uVar2 = param_1;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1081a153c; end: 1081a153f;  */

undefined8 * FUN_1081a153c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081a1540; end: 1081a1573;  */

void FUN_1081a1540(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a1574; end: 1081a1637;  */

void FUN_1081a1574(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_e0 [80];
  char cStack_90;
  undefined1 auStack_88 [80];
  char cStack_38;
  
  func_0x00010819e8b0();
  FUN_1081a099c(auStack_88,param_2);
  FUN_1081a09f4(auStack_e0,param_2);
  if (cStack_38 == '\x01') {
    func_0x0001081a1650();
    func_0x0001081a1644();
  }
  if (cStack_90 == '\x01') {
    func_0x0001081a1650();
    func_0x0001081a1644();
  }
  FUN_10819a688(auStack_e0);
  FUN_10819a688(auStack_88);
  return;
}



/* Entry: 1081a1638; end: 1081a1663;  */

void FUN_1081a1638(void)

{
  return;
}



/* Entry: 1081a1664; end: 1081a168f;  */

void FUN_1081a1664(undefined8 *param_1)

{
  func_0x0001081919cc(param_1,0x26);
  *param_1 = &PTR_FUN_110a2e610;
  param_1[0x61] = 0x200000000;
  return;
}



/* Entry: 1081a1690; end: 1081a1703;  */

undefined8 FUN_1081a1690(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    FUN_108191760(&uStack_40,&DAT_10f63975c,param_2,param_3);
    if (cStack_38 != '\x01') {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x308) = uStack_40;
  }
  return 1;
}



/* Entry: 1081a1704; end: 1081a1707;  */

undefined8 * FUN_1081a1704(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081a1708; end: 1081a171b;  */

void FUN_1081a1708(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a171c; end: 1081a17bb;  */

void FUN_1081a171c(undefined4 param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_44;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x0001073b504c(param_2,param_4[1] - *param_4 >> 3);
  lVar1 = param_4[1];
  for (lVar2 = *param_4; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    func_0x00010819f85c(param_3,lVar2,param_5);
    uStack_44 = param_1;
    func_0x0001074c4f8c(param_2,&uStack_44);
  }
  return;
}



/* Entry: 1081a17bc; end: 1081a17fb;  */

long * FUN_1081a17bc(long *param_1)

{
  *(long *)(*param_1 + 0x38) = param_1[1];
  func_0x0001056d1ce4(param_1 + 0xc);
  func_0x0001056d1ce4(param_1 + 9);
  func_0x0001056d1ce4(param_1 + 6);
  func_0x0001056d1ce4(param_1 + 3);
  return param_1;
}



/* Entry: 1081a17fc; end: 1081a19db;  */

void FUN_1081a17fc(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  *(undefined4 *)(param_1 + 2) = 0x7f800000;
  param_1[1] = 0x7f8000007f800000;
  *param_1 = 0x7f8000007f800000;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  if (*(ulong *)(param_2 + 0x80) <= param_3) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x18);
  uVar6 = param_3 - *(long *)(param_2 + 0x10);
  uVar5 = *(long *)(param_2 + 0x20) - lVar4 >> 2;
  if (((((uVar5 <= uVar6) ||
        ((ulong)(*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 2) <= uVar6)) ||
       ((ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 2) <= uVar6)) ||
      (((ulong)(*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 2) <= uVar6 ||
       ((ulong)((*(long **)(param_2 + 0x78))[1] - **(long **)(param_2 + 0x78) >> 2) <= uVar6)))) &&
     (*(long *)(param_2 + 8) != 0)) {
    FUN_1081a17fc(&uStack_48,*(long *)(param_2 + 8),param_3);
    param_1[1] = CONCAT35(uStack_3b,uStack_40);
    *param_1 = uStack_48;
    *(ulong *)((long)param_1 + 0xd) = CONCAT53(uStack_38,uStack_3b);
    lVar4 = *(long *)(param_2 + 0x18);
    uVar5 = *(long *)(param_2 + 0x20) - lVar4 >> 2;
  }
  if (uVar6 < uVar5) {
    *(undefined4 *)param_1 = *(undefined4 *)(lVar4 + uVar6 * 4);
  }
  if (uVar6 < (ulong)(*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 2)) {
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(*(long *)(param_2 + 0x30) + uVar6 * 4);
  }
  if (uVar6 < (ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 2)) {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(*(long *)(param_2 + 0x48) + uVar6 * 4);
  }
  if (uVar6 < (ulong)(*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 2)) {
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(*(long *)(param_2 + 0x60) + uVar6 * 4);
  }
  lVar4 = **(long **)(param_2 + 0x78);
  lVar1 = (*(long **)(param_2 + 0x78))[1];
  bVar2 = lVar4 == lVar1;
  if (!bVar2) {
    uVar5 = lVar1 - lVar4 >> 2;
    bVar2 = uVar6 == uVar5;
    if (uVar6 < uVar5) {
      uVar3 = 0;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar4 + uVar6 * 4);
    }
    else {
      bVar2 = *(float *)(param_1 + 2) == INFINITY;
      if ((!bVar2) && ((*(byte *)((long)param_1 + 0x14) & 1) == 0)) goto LAB_1081a1984;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar1 + -4);
      uVar3 = 1;
    }
    *(undefined1 *)((long)param_1 + 0x14) = uVar3;
  }
LAB_1081a1984:
  func_0x0001081a4254(0x7f800000,*(undefined4 *)param_1);
  if ((((bVar2) && (func_0x0001081a4254(*(undefined4 *)((long)param_1 + 4)), bVar2)) &&
      (func_0x0001081a4254(*(undefined4 *)(param_1 + 1)), bVar2)) &&
     ((func_0x0001081a4254(*(undefined4 *)((long)param_1 + 0xc)), bVar2 &&
      (func_0x0001081a4254(*(undefined4 *)(param_1 + 2)), bVar2)))) {
    *(ulong *)(param_2 + 0x80) = param_3;
  }
  return;
}



/* Entry: 1081a19dc; end: 1081a1c5f;  */

void FUN_1081a19dc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 uVar4;
  long alStack_a0 [4];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined4 uStack_6c;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  uVar4 = *(undefined8 *)(param_1 + 200);
  iVar1 = *(int *)(param_1 + 0xd0);
  FUN_1081a1c60(auStack_50,*(undefined8 *)*param_2);
  FUN_1081fd20c(&lStack_48,uVar4,(long)iVar1,param_3,auStack_50);
  FUN_10812cc0c(auStack_50);
  if (lStack_48 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x7d1) & 1) == 0) {
    func_0x0001081a42f8(alStack_a0);
    (*extraout_x9)();
    FUN_1081fd3e8(&ppuStack_68,uVar4,(long)iVar1);
    func_0x0001081a42f8(&ppuStack_80);
    (*extraout_x9_00)();
    ppuVar3 = ppuStack_80;
    if (alStack_a0[0] == 0) {
      ppuStack_80 = (undefined **)0x0;
      if (ppuVar3 != (undefined **)0x0) goto LAB_1081a1b20;
    }
    else if (ppuStack_80 != (undefined **)0x0) {
      if (ppuStack_68 != (undefined **)0x0) {
        func_0x0001081a42f8(*(undefined8 *)(**(long **)(param_1 + 0x18) + 0x10),0x7f7fffff);
        (*extraout_x8)();
        ppuVar3 = ppuStack_80;
        *(undefined4 *)(param_1 + 0xd0) = 0;
        *(undefined4 *)(param_1 + 0x6e0) = 0;
        ppuStack_80 = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          func_0x0001081a4120();
        }
        func_0x0001081a41ec();
        lVar2 = alStack_a0[0];
        alStack_a0[0] = 0;
        if (lVar2 != 0) {
          func_0x0001081a4120();
        }
        goto LAB_1081a1bd0;
      }
LAB_1081a1b20:
      ppuStack_80 = (undefined **)0x0;
      (**(code **)(*ppuVar3 + 8))(ppuVar3);
    }
    if (ppuStack_68 != (undefined **)0x0) {
      func_0x0001081a4120();
    }
    lVar2 = alStack_a0[0];
    alStack_a0[0] = 0;
    if (lVar2 != 0) {
      func_0x0001081a4120();
    }
  }
  uStack_58 = 1;
  ppuStack_68 = &PTR_FUN_110a2b2b0;
  uStack_60 = 0;
  uStack_70 = 1;
  ppuStack_80 = &PTR_DAT_110a2b348;
  uStack_78 = 0;
  uStack_6c = 0;
  FUN_108185138(alStack_a0,0,0);
  func_0x0001081a42f8(*(undefined8 *)(**(long **)(param_1 + 0x18) + 0x10),0x7f7fffff);
  (*extraout_x8_00)();
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  FUN_1081851b4(alStack_a0);
LAB_1081a1bd0:
  func_0x0001081a41b8();
  return;
}



/* Entry: 1081a1c60; end: 1081a1c87;  */

void FUN_1081a1c60(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = param_2;
    return;
  }
  if ((bRam0000000113826cb8 & 1) == 0) {
    iVar4 = 0x13826cb8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      puVar5 = (undefined8 *)0x10;
      __Znwm();
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_DAT_110a3e838;
      puRam0000000113826cb0 = puVar5;
      ___cxa_guard_release(0x113826cb8);
    }
  }
  puVar5 = puRam0000000113826cb0;
  if (puRam0000000113826cb0 != (undefined8 *)0x0) {
    piVar1 = (int *)(puRam0000000113826cb0 + 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)puVar5;
  return;
}



/* Entry: 1081a1c88; end: 1081a208b;  */

undefined8 * FUN_1081a1c88(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  float fVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong extraout_x8;
  long *plVar13;
  ulong extraout_x9;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined8 uStack_90;
  long alStack_88 [2];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  *param_1 = &PTR_FUN_110a2e6a0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  plVar16 = *(long **)param_2[1];
  FUN_1081a1c60(&lStack_70,*(undefined8 *)*param_2);
  (**(code **)(*plVar16 + 0x18))(param_1 + 3,plVar16,&lStack_70);
  FUN_10812cc0c(&lStack_70);
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  plVar16 = param_1 + 8;
  *plVar16 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0x19] = param_1 + 9;
  param_1[0x1a] = 0x10000000000;
  param_1[0xdb] = param_1 + 0x1b;
  param_1[0xdc] = 0x10000000000;
  param_1[0xe1] = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  FUN_1081a208c(*(undefined4 *)(param_2[7] + 0x1a0),*(undefined1 *)(param_2[7] + 0x1a4));
  *(uint *)(param_1 + 0xe2) = CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18)));
  param_1[0xe3] = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0xef) = 0;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined2 *)(param_1 + 0xfa) = 1;
  if (param_1[3] == 0) {
    FUN_1081fdeb4(&lStack_70);
    lVar15 = lStack_70;
    lStack_70 = 0;
    lVar9 = param_1[3];
    param_1[3] = lVar15;
    if (lVar9 != 0) {
      FUN_1081a4120();
      lVar15 = lStack_70;
      lStack_70 = 0;
      if (lVar15 != 0) {
        FUN_1081a4120();
      }
    }
    *(undefined1 *)((long)param_1 + 0x7d1) = 1;
  }
  if (param_4 != 0) {
    puVar10 = (ulong *)0x20;
    __Znwm();
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined4 *)(puVar10 + 3) = 0;
    puVar10[2] = 0;
    FUN_10819fb24(&lStack_70,param_2,param_4 + 0x388);
    if (lStack_68 != 0) {
      FUN_10819c458(alStack_88,lStack_68,param_2);
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0x80;
      uVar21 = 0x3f;
      FUN_108345058(auStack_78,alStack_88,0);
      FUN_10837ca5c(alStack_88[0]);
      while( true ) {
        FUN_108345194(alStack_88,auStack_78);
        lVar15 = alStack_88[0];
        if (alStack_88[0] == 0) break;
        fVar6 = *(float *)(alStack_88[0] + 0x40) + *(float *)(puVar10 + 3);
        uVar18 = SUB41(fVar6,0);
        uVar19 = (undefined1)((uint)fVar6 >> 8);
        uVar20 = (undefined1)((uint)fVar6 >> 0x10);
        uVar21 = (undefined1)((uint)fVar6 >> 0x18);
        *(float *)(puVar10 + 3) = fVar6;
        plVar4 = (long *)puVar10[1];
        bVar8 = (long *)puVar10[2] <= plVar4;
        if (bVar8) {
          plVar17 = (long *)*puVar10;
          lVar9 = (long)plVar4 - (long)plVar17 >> 3;
          if (lVar9 + 1U >> 0x3d != 0) {
            FUN_1081a3a40();
LAB_1081a1fc8:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1081a1fcc);
            (*pcVar7)();
          }
          func_0x0001081a41c8((long)puVar10[2] - (long)plVar17);
          uVar3 = extraout_x9;
          if (bVar8) {
            uVar3 = extraout_x8;
          }
          if (uVar3 == 0) {
            lVar11 = 0;
          }
          else {
            if (uVar3 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_1081a1fc8;
            }
            lVar11 = uVar3 << 3;
            __Znwm();
          }
          plVar2 = (long *)(lVar11 + ((long)plVar4 - (long)plVar17));
          alStack_88[0] = 0;
          *plVar2 = lVar15;
          plVar13 = plVar2 + -lVar9;
          for (plVar14 = plVar17; plVar14 != plVar4; plVar14 = plVar14 + 1) {
            lVar15 = *plVar14;
            if (lVar15 != 0) {
              piVar1 = (int *)(lVar15 + 8);
              do {
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = *piVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            *plVar13 = lVar15;
            plVar13 = plVar13 + 1;
          }
          for (; plVar17 != plVar4; plVar17 = plVar17 + 1) {
            func_0x0001081428c0(plVar17);
          }
          plVar17 = plVar2 + 1;
          uVar12 = *puVar10;
          *puVar10 = (ulong)(plVar2 + -lVar9);
          puVar10[1] = (ulong)plVar17;
          puVar10[2] = lVar11 + uVar3 * 8;
          if (uVar12 != 0) {
            __ZdlPv();
          }
        }
        else {
          alStack_88[0] = 0;
          plVar17 = plVar4 + 1;
          *plVar4 = lVar15;
        }
        puVar10[1] = (ulong)plVar17;
        func_0x0001081a42c8();
      }
      func_0x0001081a42c8();
      FUN_1083456f8(auStack_78);
    }
    FUN_10819b08c(&lStack_70);
    uStack_90 = 0;
    FUN_1081a3994(plVar16,puVar10);
    func_0x0001081a3970(&uStack_90);
    if (*(int *)(param_4 + 0x39c) == 2) {
      fVar6 = (*(float *)(param_4 + 0x398) * *(float *)(*plVar16 + 0x18)) / 100.0;
      uVar18 = SUB41(fVar6,0);
      uVar19 = (undefined1)((uint)fVar6 >> 8);
      uVar20 = (undefined1)((uint)fVar6 >> 0x10);
      uVar21 = (undefined1)((uint)fVar6 >> 0x18);
    }
    else {
      func_0x00010819f85c(*(undefined8 *)(param_1[1] + 0x20),(float *)(param_4 + 0x398),0);
    }
    *(uint *)(param_1 + 0xe0) = CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18)));
  }
  return param_1;
}



/* Entry: 1081a208c; end: 1081a20b7;  */

undefined4 FUN_1081a208c(uint param_1,uint param_2)

{
  code *pcVar1;
  
  if ((param_2 & 1) == 0) {
    func_0x000104bdc2c8();
  }
  else if (param_1 < 4) {
    return *(undefined4 *)(&UNK_10df07a60 + (ulong)param_1 * 4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1081a20b8);
  (*pcVar1)();
}



/* Entry: 1081a20b8; end: 1081a2117;  */

long FUN_1081a20b8(long param_1)

{
  FUN_1081a2118(param_1,*(undefined8 *)(param_1 + 8));
  FUN_10819a688(param_1 + 0x778);
  FUN_10819a688(param_1 + 0x720);
  func_0x00010731e26c(param_1 + 0x6e8);
  FUN_1081a36dc(param_1 + 0x48);
  func_0x0001081a3970(param_1 + 0x40);
  func_0x0001081a393c(param_1 + 0x20);
  FUN_10818427c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1081a2118; end: 1081a2447;  */

void FUN_1081a2118(long param_1,long param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined5 uStack_1b8;
  undefined3 uStack_1b3;
  undefined5 uStack_1b0;
  undefined8 uStack_1ab;
  undefined8 uStack_1a0;
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [40];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 auStack_f0 [5];
  float fStack_c8;
  undefined2 uStack_c2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1ab = 0;
  uStack_1b3 = 0;
  uStack_1b0 = 0;
  lVar9 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x28);
  do {
    if (lVar9 == lVar7) {
      *(ulong *)(param_1 + 0x700) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x708) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x700) >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x708) +
                    (float)*(undefined8 *)(param_1 + 0x700));
      uVar12 = 0;
      *(undefined8 *)(param_1 + 0x708) = 0;
      FUN_1081a208c(*(undefined4 *)(*(long *)(param_2 + 0x38) + 0x1a0),
                    *(undefined1 *)(*(long *)(param_2 + 0x38) + 0x1a4));
      *(undefined4 *)(param_1 + 0x710) = uVar12;
      FUN_1081a2460((long *)(param_1 + 0x20));
      FUN_1083a79f4(&uStack_1d0);
      return;
    }
    puVar4 = &uStack_1d0;
    func_0x0001083a82cc(puVar4,lVar9,*(undefined4 *)(lVar9 + 0x40));
    if (*(long *)(lVar9 + 0x40) != 0) {
      _memmove(*puVar4,*(undefined8 *)(lVar9 + 0x28),*(long *)(lVar9 + 0x40) << 1);
    }
    for (uVar8 = 0; uVar8 < *(ulong *)(lVar9 + 0x40); uVar8 = uVar8 + 1) {
      uStack_c2 = *(undefined2 *)(*(long *)(lVar9 + 0x28) + uVar8 * 2);
      pfVar1 = (float *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
      pfVar10 = (float *)(*(long *)(lVar9 + 0x38) + uVar8 * 0xc);
      fVar14 = *pfVar1 + *(float *)(param_1 + 0x700) + *pfVar10 +
               *(float *)(param_1 + 0x710) * *(float *)(param_1 + 0x708);
      if (*(long *)(param_1 + 0x40) == 0) {
        fVar11 = pfVar10[2];
        fVar13 = *(float *)(param_1 + 0x710) * *(float *)(param_1 + 0x70c);
        fVar15 = pfVar1[1] + *(float *)(param_1 + 0x704) + pfVar10[1] + fVar13;
        ___sincosf_stret();
        fVar14 = (fVar14 - fVar13 * 0.0) + fVar11 * 0.0;
        fVar15 = (fVar15 - fVar11 * 0.0) - fVar13 * 0.0;
      }
      else {
        func_0x00010812f174(lVar9,&uStack_c2,1,&fStack_c8);
        fVar14 = fVar14 + fStack_c8 * 0.5;
        if (0.0 <= fVar14) {
          plVar6 = (long *)**(undefined8 **)(param_1 + 0x40);
          while (plVar6 != (long *)(*(undefined8 **)(param_1 + 0x40))[1]) {
            lVar5 = *plVar6;
            if (fVar14 < *(float *)(lVar5 + 0x40)) {
              uStack_b8 = 0;
              uStack_c0 = 0x3f800000;
              uStack_a8 = 0;
              uStack_b0 = 0x3f800000;
              uStack_a0 = 0x103f800000;
              FUN_1083454dc(lVar5,&uStack_c0,3);
              puVar2 = &uStack_c0;
              if ((int)lVar5 == 0) {
                puVar2 = (undefined8 *)0x113254e20;
              }
              uStack_118 = puVar2[1];
              uStack_120 = *puVar2;
              uStack_108 = puVar2[3];
              uStack_110 = puVar2[2];
              uStack_100 = puVar2[4];
              goto LAB_1081a22f0;
            }
            fVar14 = fVar14 - *(float *)(lVar5 + 0x40);
            plVar6 = plVar6 + 1;
          }
        }
        FUN_10814bdfc(&uStack_120,0x7f800000,0x7f800000);
LAB_1081a22f0:
        FUN_10814bdfc(auStack_148,fStack_c8 * -0.5,pfVar10[1]);
        FUN_1081600e0(auStack_f0,&uStack_120,auStack_148);
        FUN_10816010c(auStack_170,pfVar10[2]);
        FUN_1081600e0(&uStack_c0,auStack_f0,auStack_170);
        fVar14 = (float)uStack_b8;
        fVar15 = uStack_b0._4_4_;
        fVar11 = uStack_b8._4_4_;
        fVar13 = (float)uStack_c0;
      }
      pfVar1 = (float *)(puVar4[1] + uVar8 * 0x10);
      *pfVar1 = fVar13;
      pfVar1[1] = fVar11;
      pfVar1[2] = fVar14;
      pfVar1[3] = fVar15;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    FUN_1083a7a38(&uStack_120,&uStack_1d0);
    uStack_c0 = *(undefined8 *)(lVar9 + 0x18);
    auStack_f0[0] = *(undefined8 *)(lVar9 + 0x20);
    plVar6 = *(long **)(lVar5 + 0x18);
    if (plVar6 == (long *)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1081a2418);
      (*pcVar3)();
    }
    (**(code **)(*plVar6 + 0x30))(plVar6,param_2,&uStack_120,&uStack_c0,auStack_f0);
    func_0x00010812fec0(&uStack_120);
    lVar9 = lVar9 + 0x50;
  } while( true );
}



/* Entry: 1081a2448; end: 1081a244b;  */

long FUN_1081a2448(long param_1)

{
  FUN_1081a2118(param_1,*(undefined8 *)(param_1 + 8));
  FUN_10819a688(param_1 + 0x778);
  FUN_10819a688(param_1 + 0x720);
  func_0x00010731e26c(param_1 + 0x6e8);
  FUN_1081a36dc(param_1 + 0x48);
  func_0x0001081a3970(param_1 + 0x40);
  func_0x0001081a393c(param_1 + 0x20);
  FUN_10818427c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1081a244c; end: 1081a245f;  */

void FUN_1081a244c(void)

{
  FUN_1081a20b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a2460; end: 1081a2493;  */

void FUN_1081a2460(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x50;
    FUN_1081a3844();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1081a2494; end: 1081a2843;  */

void FUN_1081a2494(undefined8 *param_1,long param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long lStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  plVar13 = (long *)*param_3;
  lStack_b0 = *plVar13;
  if (lStack_b0 != 0) {
    piVar1 = (int *)(lStack_b0 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_a8 = (undefined7)plVar13[1];
  uStack_a1 = (undefined1)*(undefined8 *)((long)plVar13 + 0xf);
  uStack_a0 = (undefined7)((ulong)*(undefined8 *)((long)plVar13 + 0xf) >> 8);
  if (*(char *)(param_2 + 0x770) == '\x01') {
    FUN_1081a2844(&lStack_98,param_2 + 0x720);
  }
  else {
    lStack_98 = 0;
  }
  if (*(char *)(param_2 + 0x7c8) == '\x01') {
    FUN_1081a2844(&lStack_90,param_2 + 0x778);
  }
  else {
    lStack_90 = 0;
  }
  uVar22 = param_3[3];
  lVar14 = uVar22 << 1;
  if (0x7fffffffffffffff < uVar22) {
    lVar14 = -1;
  }
  __Znam();
  _bzero();
  lVar15 = uVar22 << 3;
  if (uVar22 >> 0x3d != 0) {
    lVar15 = -1;
  }
  lStack_88 = lVar14;
  __Znam();
  _bzero();
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar22;
  lVar17 = uVar22 * 0xc;
  if (SUB168(auVar6 * ZEXT816(0xc),8) != 0) {
    lVar17 = -1;
  }
  lStack_80 = lVar15;
  __Znam();
  _bzero();
  lVar9 = lStack_80;
  lVar8 = lStack_88;
  lVar7 = lStack_90;
  lVar11 = lStack_98;
  lVar21 = lStack_b0;
  lStack_68 = *(long *)((long)param_3 + 0xc);
  plVar13 = *(long **)(param_2 + 0x28);
  uStack_70 = uVar22;
  if (plVar13 < *(long **)(param_2 + 0x30)) {
    lStack_b0 = 0;
    *plVar13 = lVar21;
    *(ulong *)((long)plVar13 + 0xf) = CONCAT71(uStack_a0,uStack_a1);
    plVar13[1] = CONCAT17(uStack_a1,uStack_a8);
    lStack_98 = 0;
    plVar13[3] = lVar11;
    lStack_88 = 0;
    lStack_90 = 0;
    plVar13[5] = lVar8;
    plVar13[4] = lVar7;
    lStack_78 = 0;
    lStack_80 = 0;
    plVar13[7] = lVar17;
    plVar13[6] = lVar9;
    plVar13[9] = lStack_68;
    plVar13[8] = uVar22;
    plVar13 = plVar13 + 10;
  }
  else {
    plVar20 = *(long **)(param_2 + 0x20);
    lVar21 = (long)plVar13 - (long)plVar20;
    uVar22 = lVar21 / 0x50 + 1;
    lStack_78 = lVar17;
    if (0x333333333333333 < uVar22) {
      FUN_1081a3b34();
LAB_1081a27d8:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1081a27dc);
      (*pcVar10)();
    }
    uVar3 = ((long)*(long **)(param_2 + 0x30) - (long)plVar20) / 0x50;
    uVar18 = uVar3 * 2;
    if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
      uVar18 = uVar22;
    }
    if (0x199999999999998 < uVar3) {
      uVar18 = 0x333333333333333;
    }
    if (uVar18 == 0) {
      lVar11 = 0;
    }
    else {
      if (0x333333333333333 < uVar18) {
        func_0x000104bd35f4();
        goto LAB_1081a27d8;
      }
      lVar11 = uVar18 * 0x50;
      __Znwm();
    }
    lVar9 = lStack_90;
    lVar8 = lStack_98;
    lVar7 = lStack_b0;
    plVar2 = (long *)(lVar11 + lVar21);
    lStack_b0 = 0;
    *plVar2 = lVar7;
    plVar2[1] = CONCAT17(uStack_a1,uStack_a8);
    *(ulong *)((long)plVar2 + 0xf) = CONCAT71(uStack_a0,uStack_a1);
    lStack_90 = 0;
    lStack_98 = 0;
    plVar2[4] = lVar9;
    plVar2[3] = lVar8;
    lStack_80 = 0;
    lStack_88 = 0;
    plVar2[5] = lVar14;
    plVar2[6] = lVar15;
    lStack_78 = 0;
    plVar2[7] = lVar17;
    plVar2[9] = lStack_68;
    plVar2[8] = uStack_70;
    plVar12 = plVar2 + (lVar21 / -0x50) * 10;
    for (plVar19 = plVar20; plVar19 != plVar13; plVar19 = plVar19 + 10) {
      FUN_1081a3ae4(plVar12,plVar19);
      plVar12 = plVar12 + 10;
    }
    for (; plVar20 != plVar13; plVar20 = plVar20 + 10) {
      FUN_1081a3844(plVar20);
    }
    plVar13 = plVar2 + 10;
    lVar14 = *(long *)(param_2 + 0x20);
    *(long **)(param_2 + 0x20) = plVar2 + (lVar21 / -0x50) * 10;
    *(long **)(param_2 + 0x28) = plVar13;
    *(ulong *)(param_2 + 0x30) = lVar11 + uVar18 * 0x50;
    if (lVar14 != 0) {
      __ZdlPv();
    }
  }
  *(long **)(param_2 + 0x28) = plVar13;
  FUN_1081a3844(&lStack_b0);
  uVar22 = *(long *)(param_2 + 0x6f0) - *(long *)(param_2 + 0x6e8) >> 2;
  if (uVar22 <= (ulong)param_3[3]) {
    uVar22 = param_3[3];
  }
  func_0x0001074287b0(param_2 + 0x6e8,uVar22);
  uVar16 = *(undefined8 *)(*(long *)(param_2 + 0x28) + -0x28);
  param_1[1] = *(undefined8 *)(*(long *)(param_2 + 0x28) + -0x20);
  *param_1 = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x6e8);
  param_1[2] = 0;
  param_1[3] = uVar16;
  param_1[4] = *(undefined8 *)(param_2 + 0x708);
  return;
}



/* Entry: 1081a2844; end: 1081a2873;  */

void FUN_1081a2844(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  __Znwm();
  FUN_108375f34();
  *param_1 = uVar1;
  return;
}



/* Entry: 1081a2874; end: 1081a291b;  */

void FUN_1081a2874(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar4 = 0;
  uVar5 = 0;
  lVar6 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (*(ulong *)(param_2 + 0x18) <= uVar5) {
      *(ulong *)(param_1 + 0x708) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x708) >> 0x20),
                    (float)*(undefined8 *)(param_2 + 0xc) + (float)*(undefined8 *)(param_1 + 0x708))
      ;
      return;
    }
    uVar2 = *(uint *)(*(long *)(param_1 + 0x6e8) + uVar5 * 4);
    if (((int)uVar2 < 0) || (*(int *)(param_1 + 0x6e0) <= (int)uVar2)) break;
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x6d8) + (ulong)uVar2 * 0xc);
    puVar1 = (undefined8 *)(*(long *)(lVar6 + -0x18) + lVar4);
    uVar8 = *puVar7;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar7 + 1);
    *puVar1 = uVar8;
    uVar5 = uVar5 + 1;
    lVar4 = lVar4 + 0xc;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1081a28ec);
  (*pcVar3)();
}



/* Entry: 1081a291c; end: 1081a2a7b;  */

void FUN_1081a291c(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong extraout_x8;
  long *plVar8;
  ulong extraout_x9;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lStack_58;
  
  lVar12 = *param_2;
  if (*(int *)(lVar12 + 0xc) - 0x29U < 3) {
    *param_2 = 0;
    plVar11 = *(long **)(param_1 + 0x378);
    bVar6 = *(long **)(param_1 + 0x380) <= plVar11;
    if (bVar6) {
      plVar10 = *(long **)(param_1 + 0x370);
      lVar13 = (long)plVar11 - (long)plVar10 >> 3;
      lStack_58 = lVar12;
      if (lVar13 + 1U >> 0x3d != 0) {
        func_0x0001081a3b40();
LAB_1081a2a68:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1081a2a6c);
        (*pcVar5)();
      }
      func_0x0001081a41c8((long)*(long **)(param_1 + 0x380) - (long)plVar10);
      uVar3 = extraout_x9;
      if (bVar6) {
        uVar3 = extraout_x8;
      }
      if (uVar3 == 0) {
        lVar7 = 0;
      }
      else {
        if (uVar3 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_1081a2a68;
        }
        lVar7 = uVar3 << 3;
        __Znwm();
      }
      plVar2 = (long *)(lVar7 + ((long)plVar11 - (long)plVar10));
      lStack_58 = 0;
      *plVar2 = lVar12;
      plVar8 = plVar2 + -lVar13;
      for (plVar9 = plVar10; plVar9 != plVar11; plVar9 = plVar9 + 1) {
        lVar12 = *plVar9;
        if (lVar12 != 0) {
          piVar1 = (int *)(lVar12 + 8);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *plVar8 = lVar12;
        plVar8 = plVar8 + 1;
      }
      for (; plVar10 != plVar11; plVar10 = plVar10 + 1) {
        FUN_108193708(plVar10);
      }
      plVar10 = plVar2 + 1;
      lVar12 = *(long *)(param_1 + 0x370);
      *(long **)(param_1 + 0x370) = plVar2 + -lVar13;
      *(long **)(param_1 + 0x378) = plVar10;
      *(ulong *)(param_1 + 0x380) = lVar7 + uVar3 * 8;
      if (lVar12 != 0) {
        __ZdlPv();
      }
    }
    else {
      lStack_58 = 0;
      plVar10 = plVar11 + 1;
      *plVar11 = lVar12;
    }
    *(long **)(param_1 + 0x378) = plVar10;
    FUN_108193708(&lStack_58);
  }
  return;
}



/* Entry: 1081a2a7c; end: 1081a2bcf;  */

void FUN_1081a2a7c(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [840];
  
  uStack_410 = *(undefined8 *)(param_3 + 0x718);
  uStack_418 = *(undefined8 *)(param_3 + 0x38);
  lStack_420 = param_3;
  func_0x0001081a42a0(auStack_408,param_2,param_1 + 0x2f0);
  func_0x0001081a42ac(auStack_3f0);
  func_0x0001081a42a0(auStack_3d8);
  func_0x0001081a42ac(auStack_3c0);
  lStack_3a8 = param_1 + 0x350;
  uStack_3a0 = 0xffffffffffffffff;
  *(long **)(lStack_420 + 0x38) = &lStack_420;
  puVar5 = *(undefined8 **)(param_1 + 0x378);
  for (puVar4 = *(undefined8 **)(param_1 + 0x370); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    plVar3 = (long *)*puVar4;
    uVar1 = *(undefined4 *)(param_1 + 0x368);
    FUN_10819fa68(auStack_398,param_2);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3,auStack_398);
    if ((int)plVar2 != 0) {
      (**(code **)(*plVar3 + 0x68))(plVar3,auStack_398,param_3,uVar1);
    }
    FUN_10819fae8(auStack_398);
  }
  FUN_1081a17bc(&lStack_420);
  return;
}



/* Entry: 1081a2bd0; end: 1081a2e13;  */

undefined8 FUN_1081a2bd0(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 auStack_e0 [24];
  byte bStack_c8;
  undefined1 auStack_c0 [24];
  byte bStack_a8;
  undefined1 auStack_a0 [24];
  byte bStack_88;
  undefined1 auStack_80 [24];
  byte bStack_68;
  undefined1 auStack_60 [24];
  byte bStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    func_0x0001081a4164(auStack_60,&DAT_10f62b0e2);
    if ((bStack_48 == 1) && (func_0x0001081a3894(param_1 + 0x2f0,auStack_60), (bStack_48 & 1) != 0))
    {
      uVar3 = 1;
    }
    else {
      func_0x0001081a4164(auStack_80,"y");
      if ((bStack_68 == 1) &&
         (func_0x0001081a3894(param_1 + 0x308,auStack_80), (bStack_68 & 1) != 0)) {
        uVar3 = 1;
      }
      else {
        func_0x0001081a4164(auStack_a0,"dx");
        if ((bStack_88 == 1) &&
           (func_0x0001081a3894(param_1 + 800,auStack_a0), (bStack_88 & 1) != 0)) {
          uVar3 = 1;
        }
        else {
          func_0x0001081a4164(auStack_c0,"dy");
          if ((bStack_a8 == 1) &&
             (func_0x0001081a3894(param_1 + 0x338,auStack_c0), (bStack_a8 & 1) != 0)) {
            uVar3 = 1;
          }
          else {
            FUN_1081959d0(auStack_e0,"rotate",param_2,param_3);
            if ((bStack_c8 == 1) &&
               (func_0x0001074714f0(param_1 + 0x350,auStack_e0), (bStack_c8 & 1) != 0)) {
LAB_1081a2d18:
              uVar3 = 1;
            }
            else {
              _strcmp(param_2,"xml:space");
              if ((int)param_2 == 0) {
                lVar5 = param_3;
                lStack_40 = param_3;
                _strlen();
                lStack_38 = param_3 + lVar5;
                puVar4 = (undefined4 *)&UNK_110a2e6e8;
                lVar5 = 2;
                do {
                  plVar2 = &lStack_40;
                  func_0x00010818efe8(plVar2,*(undefined8 *)(puVar4 + -2));
                  if (((ulong)plVar2 & 1) != 0) {
                    if (lStack_40 == lStack_38) {
                      *(undefined4 *)(param_1 + 0x368) = *puVar4;
                      goto LAB_1081a2d18;
                    }
                    break;
                  }
                  puVar4 = puVar4 + 4;
                  lVar5 = lVar5 + -1;
                } while (lVar5 != 0);
              }
              uVar3 = 0;
            }
            func_0x000107273f7c(auStack_e0);
          }
          FUN_1081a38cc(auStack_c0);
        }
        FUN_1081a38cc(auStack_a0);
      }
      FUN_1081a38cc(auStack_80);
    }
    FUN_1081a38cc(auStack_60);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1081a2e14; end: 1081a2ec7;  */

void FUN_1081a2e14(undefined8 *param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  iVar1 = (int)&lStack_50;
  _strcmp();
  if (param_3 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    lVar2 = param_4;
    lStack_50 = param_4;
    _strlen();
    lStack_48 = param_4 + lVar2;
    FUN_108190e14(&lStack_50,&uStack_40);
    if (iVar1 != 0) {
      param_1[1] = uStack_38;
      *param_1 = uStack_40;
      param_1[2] = uStack_30;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    func_0x00010818e81c(&uStack_40);
  }
  else {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1081a2ec8; end: 1081a3307;  */

undefined1 *
FUN_1081a2ec8(undefined8 param_1,long param_2,undefined8 *param_3,long param_4,int param_5)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  code *pcVar4;
  undefined1 in_ZR;
  bool bVar5;
  uint **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 extraout_x8;
  long lVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint **ppuVar18;
  uint uVar19;
  undefined8 uVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  undefined8 uStack_22c8;
  char cStack_22c0;
  undefined4 auStack_22b8 [2];
  long lStack_22b0;
  char cStack_22a8;
  undefined1 *puStack_22a0;
  undefined1 *puStack_2298;
  undefined1 *puStack_2290;
  undefined1 *puStack_2288;
  undefined1 *****pppppuStack_2280;
  code *pcStack_2278;
  undefined1 auStack_2270 [2008];
  undefined8 uStack_1a98;
  undefined1 ****ppppuStack_1a70;
  code *pcStack_1a68;
  undefined1 auStack_1a58 [2008];
  undefined **ppuStack_1280;
  undefined1 *puStack_1278;
  undefined ***pppuStack_1268;
  undefined1 auStack_1260 [136];
  undefined8 uStack_11d8;
  undefined1 ***pppuStack_11a0;
  code *pcStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined1 auStack_1180 [2008];
  undefined **ppuStack_9a8;
  undefined1 *puStack_9a0;
  undefined ***pppuStack_990;
  undefined8 uStack_988;
  undefined1 **ppuStack_960;
  code *pcStack_958;
  undefined1 auStack_950 [2008];
  undefined **appuStack_178 [3];
  undefined ***pppuStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined1 auStack_100 [20];
  byte bStack_ec;
  undefined2 uStack_eb;
  long *plStack_a8;
  uint *apuStack_a0 [2];
  
  FUN_1081a099c(auStack_100,param_3);
  func_0x0001081a39bc(param_4 + 0x720,auStack_100);
  func_0x0001081a42c0();
  FUN_1081a09f4(auStack_100,param_3);
  puVar15 = auStack_100;
  func_0x0001081a39bc();
  func_0x0001081a42c0();
  lVar14 = param_3[7];
  if ((*(byte *)(lVar14 + 0x168) & 1) != 0) {
    if (0xd < *(uint *)(lVar14 + 0x194)) {
LAB_1081a3294:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1081a3298);
      (*pcVar4)();
    }
    uVar19 = *(uint *)(lVar14 + 0x174);
    in_ZR = uVar19 == 4;
    if (3 < uVar19) goto LAB_1081a3294;
    if ((*(byte *)(lVar14 + 0x18c) & 1) != 0) {
      uVar16 = *(ulong *)(&UNK_10df07d80 + (ulong)*(uint *)(lVar14 + 0x194) * 8);
      uVar17 = *(ulong *)(&UNK_10df07df0 + (ulong)uVar19 * 8);
      func_0x00010819f85c(param_3[4],lVar14 + 0x184,1);
      FUN_1081a1c60(apuStack_a0,*(undefined8 *)*param_3);
      (**(code **)(*(long *)apuStack_a0[0] + 0x68))
                (&uStack_118,apuStack_a0[0],*(long *)(lVar14 + 0x160) + 8,uVar17 | uVar16);
      FUN_10812cc0c(apuStack_a0);
      puVar13 = uStack_118;
      if (uStack_118 == (uint *)0x0) {
        FUN_1081a1c60(&plStack_a8,*(undefined8 *)*param_3);
        (**(code **)(*plStack_a8 + 0x68))(apuStack_a0,plStack_a8,0,uVar17 | uVar16);
        puVar3 = apuStack_a0[0];
        puVar13 = uStack_118;
        apuStack_a0[0] = (uint *)0x0;
        uStack_118 = puVar3;
        FUN_1081a3718(puVar13);
        func_0x0001081a41fc();
        FUN_10812cc0c(&plStack_a8);
        puVar13 = uStack_118;
      }
      uStack_118 = (uint *)0x0;
      apuStack_a0[0] = puVar13;
      FUN_1083501dc(param_1,auStack_100,apuStack_a0);
      func_0x0001081a41fc();
      bStack_ec = bStack_ec & 0xdf | 0xc;
      uStack_eb = 1;
      func_0x0001081298a0(&uStack_118);
      puVar13 = *(uint **)(param_2 + 0x2f0);
      uVar16 = (ulong)*puVar13;
      if (0 < (int)*puVar13) {
        FUN_1081a3744(0x3ff0000000000000,param_4 + 200,uVar16);
        func_0x0001081a37bc(0x3ff0000000000000,param_4 + 0x6d8,uVar16);
        puVar13 = *(uint **)(param_2 + 0x2f0);
        uVar16 = (ulong)*puVar13;
      }
      apuStack_a0[0] = puVar13 + 2;
      puVar13 = (uint *)((long)apuStack_a0[0] + uVar16);
LAB_1081a30c4:
      if (puVar13 <= apuStack_a0[0]) {
        func_0x0001081a4224();
        puVar15 = auStack_100;
        func_0x0001081298a0(puVar15);
        return puVar15;
      }
      ppuVar18 = apuStack_a0;
      FUN_10841051c(ppuVar18,puVar13);
      uVar19 = (uint)ppuVar18;
      if (param_5 == 0) goto LAB_1081a30f4;
      if (1 < uVar19 - 9) goto LAB_1081a3118;
      ppuVar18 = (uint **)0x20;
      goto LAB_1081a311c;
    }
  }
  func_0x000104bdc2c8();
  func_0x0001081a41fc();
  FUN_10812cc0c(&plStack_a8);
  func_0x0001081298a0(&uStack_118);
  func_0x0001081a4170();
  pcStack_128 = FUN_1081a3308;
  puVar7 = auStack_950;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x0001081a4140();
  pppuStack_160 = appuStack_178;
  appuStack_178[0] = &PTR_FUN_110a2e798;
  func_0x0001081a4280();
  func_0x0001081a4184();
  func_0x0001081a421c();
  func_0x0001081a41e4();
  func_0x0001081a412c(uStack_158);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x0001081a421c();
  func_0x0001081a41e4();
  func_0x0001081a4170();
  pcStack_958 = FUN_1081a3384;
  ppuStack_960 = &puStack_130;
  func_0x0001081a4140();
  uStack_1190 = 0;
  uStack_1188 = 0;
  ppuStack_9a8 = &PTR_FUN_110a2e828;
  pppuStack_990 = &ppuStack_9a8;
  puStack_9a0 = (undefined1 *)&uStack_1190;
  func_0x0001081a4280(auStack_1180);
  func_0x0001081a4184();
  puVar7 = auStack_1180;
  FUN_1081a20b8();
  func_0x0001081a41e4();
  func_0x0001081a412c(uStack_988,uStack_1190 & 0xffffffff,uStack_1190._4_4_,(undefined4)uStack_1188,
                      uStack_1188._4_4_);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar7 = auStack_1180;
  FUN_1081a20b8();
  func_0x0001081a41e4();
  func_0x0001081a4170();
  pcStack_1198 = FUN_1081a3420;
  uStack_11d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_11a0 = &ppuStack_960;
  func_0x00010837cf98(auStack_1260);
  ppuStack_1280 = &PTR_FUN_110a2e8a8;
  pppuStack_1268 = &ppuStack_1280;
  puStack_1278 = auStack_1260;
  func_0x0001081a4280(auStack_1a58,puVar15,&ppuStack_1280);
  FUN_1081a2a7c(puVar7,puVar15);
  FUN_1081a20b8(auStack_1a58);
  FUN_10837d48c(extraout_x8,auStack_1260);
  uVar12 = extraout_x8;
  func_0x0001081a43c8(puVar7,extraout_x8);
  FUN_1081a3c1c(&ppuStack_1280);
  puVar8 = auStack_1260;
  FUN_10837d00c(puVar8);
  func_0x0001081a412c(uStack_11d8);
  if ((bool)in_ZR) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x0001081a4294();
  FUN_1081a3c1c(&ppuStack_1280);
  FUN_10837d00c(auStack_1260);
  func_0x0001081a419c();
  pcStack_1a68 = FUN_1081a3520;
  puVar9 = auStack_2270;
  puVar8 = auStack_2270;
  ppppuStack_1a70 = &pppuStack_11a0;
  func_0x0001081a4140();
  FUN_1081a1c88();
  func_0x0001081a4184();
  func_0x0001081a421c();
  func_0x0001081a412c(uStack_1a98);
  if ((bool)in_ZR) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar10 = puVar9;
  func_0x0001081a421c();
  func_0x0001081a4170();
  pcStack_2278 = FUN_1081a3584;
  puVar11 = puVar10;
  puStack_22a0 = auStack_1260;
  puStack_2298 = puVar15;
  puStack_2290 = puVar7;
  puStack_2288 = puVar9;
  pppppuStack_2280 = &ppppuStack_1a70;
  FUN_1081a2bd0();
  if (((ulong)puVar11 & 1) != 0) {
    return (undefined1 *)0x1;
  }
  FUN_10819790c(auStack_22b8,"xlink:href",uVar12,puVar8);
  if (cStack_22a8 == '\x01') {
    *(undefined4 *)(puVar10 + 0x388) = auStack_22b8[0];
    lVar14 = *(long *)(puVar10 + 0x390);
    if (lVar14 != lStack_22b0) {
      *(long *)(puVar10 + 0x390) = lStack_22b0;
      lStack_22b0 = lVar14;
    }
  }
  else {
    FUN_108191760(&uStack_22c8,&DAT_10f47e085,uVar12,puVar8);
    if (cStack_22c0 != '\x01') {
      puVar15 = (undefined1 *)0x0;
      goto LAB_1081a3634;
    }
    *(undefined8 *)(puVar10 + 0x398) = uStack_22c8;
  }
  puVar15 = (undefined1 *)0x1;
LAB_1081a3634:
  FUN_1081940c8(auStack_22b8);
  return puVar15;
LAB_1081a30f4:
  if (uVar19 != 10) {
    uVar1 = 0x20;
    if (uVar19 != 9) {
      uVar1 = uVar19;
    }
    ppuVar18 = (uint **)(ulong)uVar1;
    if ((uVar1 != 0x20) || ((*(byte *)(param_4 + 2000) & 1) == 0)) {
LAB_1081a3118:
      if (-1 < (int)ppuVar18) {
LAB_1081a311c:
        *(long *)(param_4 + 0x718) = *(long *)(param_4 + 0x718) + 1;
        FUN_1081a17fc(&uStack_118,*(undefined8 *)(param_4 + 0x38));
        fVar22 = (float)uStack_118;
        fVar24 = uStack_118._4_4_;
        bVar5 = false;
        if (((float)uStack_118 == INFINITY) && (bVar5 = false, !NAN(uStack_118._4_4_))) {
          bVar5 = uStack_118._4_4_ == INFINITY;
        }
        if (!bVar5) {
          func_0x0001081a4224();
          FUN_1081a2118(param_4,param_3);
          if (fVar22 != INFINITY) {
            *(float *)(param_4 + 0x700) = fVar22;
          }
          if (fVar24 != INFINITY) {
            *(float *)(param_4 + 0x704) = fVar24;
          }
        }
        iVar21 = -(uint)((float)uStack_110 == INFINITY);
        iVar23 = -(uint)((float)((ulong)uStack_110 >> 0x20) == INFINITY);
        fVar24 = (float)CONCAT13((byte)((ulong)uStack_110 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                 CONCAT12((byte)((ulong)uStack_110 >> 0x10) &
                                          ~(byte)((uint)iVar21 >> 0x10),
                                          CONCAT11((byte)((ulong)uStack_110 >> 8) &
                                                   ~(byte)((uint)iVar21 >> 8),
                                                   (byte)uStack_110 & ~(byte)iVar21)));
        uVar12 = CONCAT17((byte)((ulong)uStack_110 >> 0x38) & ~(byte)((uint)iVar23 >> 0x18),
                          CONCAT16((byte)((ulong)uStack_110 >> 0x30) & ~(byte)((uint)iVar23 >> 0x10)
                                   ,CONCAT15((byte)((ulong)uStack_110 >> 0x28) &
                                             ~(byte)((uint)iVar23 >> 8),
                                             CONCAT14((byte)((ulong)uStack_110 >> 0x20) &
                                                      ~(byte)iVar23,fVar24))));
        fVar22 = fStack_108 * 0.017453292;
        if (fStack_108 == INFINITY) {
          fVar22 = 0.0;
        }
        if (*(int *)(param_4 + 0x6e0) != 0) {
          uVar20 = *(undefined8 *)
                    (*(long *)(param_4 + 0x6d8) + (long)*(int *)(param_4 + 0x6e0) * 0xc + -0xc);
          uVar12 = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar20 >> 0x20),
                            fVar24 + (float)uVar20);
        }
        ppuVar6 = ppuVar18;
        FUN_108410674(ppuVar18,&plStack_a8);
        FUN_1081a3744(0x3ff8000000000000,param_4 + 200,ppuVar6);
        lVar14 = *(long *)(param_4 + 200);
        iVar21 = *(int *)(param_4 + 0xd0);
        uVar19 = (uint)ppuVar6;
        *(uint *)(param_4 + 0xd0) = iVar21 + uVar19;
        uVar17 = (ulong)(uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU));
        for (uVar16 = 0; uVar17 != uVar16; uVar16 = uVar16 + 1) {
          *(undefined1 *)(lVar14 + iVar21 + uVar16) =
               *(undefined1 *)((long)apuStack_a0 + (uVar16 - 8));
        }
        func_0x0001081a37bc(0x3ff8000000000000,(long *)(param_4 + 0x6d8),ppuVar6);
        iVar21 = *(int *)(param_4 + 0x6e0);
        *(uint *)(param_4 + 0x6e0) = iVar21 + uVar19;
        pfVar2 = (float *)(*(long *)(param_4 + 0x6d8) + (long)iVar21 * 0xc + 8);
        for (; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined8 *)(pfVar2 + -2) = uVar12;
          *pfVar2 = fVar22;
          pfVar2 = pfVar2 + 3;
        }
        *(bool *)(param_4 + 2000) = (int)ppuVar18 == 0x20;
      }
    }
  }
  goto LAB_1081a30c4;
}



/* Entry: 1081a3308; end: 1081a3383;  */

undefined1 * FUN_1081a3308(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_21a8;
  char cStack_21a0;
  undefined4 auStack_2198 [2];
  long lStack_2190;
  char cStack_2188;
  undefined1 *puStack_2180;
  undefined8 uStack_2178;
  undefined1 *puStack_2170;
  undefined1 *puStack_2168;
  undefined1 ****ppppuStack_2160;
  code *pcStack_2158;
  undefined1 auStack_2150 [2008];
  undefined8 uStack_1978;
  undefined1 ***pppuStack_1950;
  code *pcStack_1948;
  undefined1 auStack_1938 [2008];
  undefined **ppuStack_1160;
  undefined1 *puStack_1158;
  undefined ***pppuStack_1148;
  undefined1 auStack_1140 [136];
  undefined8 uStack_10b8;
  undefined1 **ppuStack_1080;
  code *pcStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined1 auStack_1060 [2008];
  undefined **ppuStack_888;
  undefined1 *puStack_880;
  undefined ***pppuStack_870;
  undefined8 uStack_868;
  undefined1 *puStack_840;
  code *pcStack_838;
  undefined1 auStack_830 [2008];
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  puVar7 = auStack_830;
  func_0x0001081a4140();
  pppuStack_40 = appuStack_58;
  appuStack_58[0] = &PTR_FUN_110a2e798;
  func_0x0001081a4280();
  func_0x0001081a4184();
  func_0x0001081a421c();
  func_0x0001081a41e4();
  func_0x0001081a412c(uStack_38);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x0001081a421c();
  func_0x0001081a41e4();
  func_0x0001081a4170();
  pcStack_838 = FUN_1081a3384;
  puStack_840 = &stack0xfffffffffffffff0;
  func_0x0001081a4140();
  uStack_1070 = 0;
  uStack_1068 = 0;
  ppuStack_888 = &PTR_FUN_110a2e828;
  pppuStack_870 = &ppuStack_888;
  puStack_880 = (undefined1 *)&uStack_1070;
  func_0x0001081a4280(auStack_1060);
  func_0x0001081a4184();
  puVar7 = auStack_1060;
  FUN_1081a20b8();
  func_0x0001081a41e4();
  func_0x0001081a412c(uStack_868,(undefined4)uStack_1070,uStack_1070._4_4_,(undefined4)uStack_1068,
                      uStack_1068._4_4_);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar7 = auStack_1060;
  FUN_1081a20b8();
  func_0x0001081a41e4();
  func_0x0001081a4170();
  pcStack_1078 = FUN_1081a3420;
  uStack_10b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1080 = &puStack_840;
  func_0x00010837cf98(auStack_1140);
  ppuStack_1160 = &PTR_FUN_110a2e8a8;
  pppuStack_1148 = &ppuStack_1160;
  puStack_1158 = auStack_1140;
  func_0x0001081a4280(auStack_1938,param_2,&ppuStack_1160);
  FUN_1081a2a7c(puVar7,param_2);
  FUN_1081a20b8(auStack_1938);
  FUN_10837d48c(extraout_x8,auStack_1140);
  uVar4 = extraout_x8;
  func_0x0001081a43c8(puVar7,extraout_x8);
  FUN_1081a3c1c(&ppuStack_1160);
  puVar1 = auStack_1140;
  FUN_10837d00c(puVar1);
  func_0x0001081a412c(uStack_10b8);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001081a4294();
  FUN_1081a3c1c(&ppuStack_1160);
  FUN_10837d00c(auStack_1140);
  func_0x0001081a419c();
  pcStack_1948 = FUN_1081a3520;
  puVar1 = auStack_2150;
  puVar5 = auStack_2150;
  pppuStack_1950 = &ppuStack_1080;
  func_0x0001081a4140();
  FUN_1081a1c88();
  func_0x0001081a4184();
  func_0x0001081a421c();
  func_0x0001081a412c(uStack_1978);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x0001081a421c();
  func_0x0001081a4170();
  pcStack_2158 = FUN_1081a3584;
  puVar3 = puVar2;
  puStack_2180 = auStack_1140;
  uStack_2178 = param_2;
  puStack_2170 = puVar7;
  puStack_2168 = puVar1;
  ppppuStack_2160 = &pppuStack_1950;
  FUN_1081a2bd0();
  if (((ulong)puVar3 & 1) != 0) {
    return (undefined1 *)0x1;
  }
  FUN_10819790c(auStack_2198,"xlink:href",uVar4,puVar5);
  if (cStack_2188 == '\x01') {
    *(undefined4 *)(puVar2 + 0x388) = auStack_2198[0];
    lVar6 = *(long *)(puVar2 + 0x390);
    if (lVar6 != lStack_2190) {
      *(long *)(puVar2 + 0x390) = lStack_2190;
      lStack_2190 = lVar6;
    }
  }
  else {
    FUN_108191760(&uStack_21a8,&DAT_10f47e085,uVar4,puVar5);
    if (cStack_21a0 != '\x01') {
      puVar7 = (undefined1 *)0x0;
      goto LAB_1081a3634;
    }
    *(undefined8 *)(puVar2 + 0x398) = uStack_21a8;
  }
  puVar7 = (undefined1 *)0x1;
LAB_1081a3634:
  FUN_1081940c8(auStack_2198);
  return puVar7;
}



/* Entry: 1081a3384; end: 1081a341f;  */

undefined1 * FUN_1081a3384(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_1978;
  char cStack_1970;
  undefined4 auStack_1968 [2];
  long lStack_1960;
  char cStack_1958;
  undefined1 *puStack_1950;
  undefined8 uStack_1948;
  undefined1 *puStack_1940;
  undefined1 *puStack_1938;
  undefined1 ***pppuStack_1930;
  code *pcStack_1928;
  undefined1 auStack_1920 [2008];
  undefined8 uStack_1148;
  undefined1 **ppuStack_1120;
  code *pcStack_1118;
  undefined1 auStack_1108 [2008];
  undefined **ppuStack_930;
  undefined1 *puStack_928;
  undefined ***pppuStack_918;
  undefined1 auStack_910 [136];
  undefined8 uStack_888;
  undefined1 *puStack_850;
  code *pcStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined1 auStack_830 [2008];
  undefined **ppuStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x0001081a4140();
  uStack_840 = 0;
  uStack_838 = 0;
  ppuStack_58 = &PTR_FUN_110a2e828;
  pppuStack_40 = &ppuStack_58;
  puStack_50 = (undefined1 *)&uStack_840;
  func_0x0001081a4280(auStack_830);
  func_0x0001081a4184();
  puVar7 = auStack_830;
  FUN_1081a20b8();
  func_0x0001081a41e4();
  func_0x0001081a412c(uStack_38,(undefined4)uStack_840,uStack_840._4_4_,(undefined4)uStack_838,
                      uStack_838._4_4_);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar7 = auStack_830;
  FUN_1081a20b8();
  func_0x0001081a41e4();
  func_0x0001081a4170();
  pcStack_848 = FUN_1081a3420;
  uStack_888 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_850 = &stack0xfffffffffffffff0;
  func_0x00010837cf98(auStack_910);
  ppuStack_930 = &PTR_FUN_110a2e8a8;
  pppuStack_918 = &ppuStack_930;
  puStack_928 = auStack_910;
  func_0x0001081a4280(auStack_1108,param_2,&ppuStack_930);
  FUN_1081a2a7c(puVar7,param_2);
  FUN_1081a20b8(auStack_1108);
  FUN_10837d48c(extraout_x8,auStack_910);
  uVar4 = extraout_x8;
  func_0x0001081a43c8(puVar7,extraout_x8);
  FUN_1081a3c1c(&ppuStack_930);
  puVar1 = auStack_910;
  FUN_10837d00c(puVar1);
  func_0x0001081a412c(uStack_888);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001081a4294();
  FUN_1081a3c1c(&ppuStack_930);
  FUN_10837d00c(auStack_910);
  func_0x0001081a419c();
  pcStack_1118 = FUN_1081a3520;
  puVar1 = auStack_1920;
  puVar5 = auStack_1920;
  ppuStack_1120 = &puStack_850;
  func_0x0001081a4140();
  FUN_1081a1c88();
  func_0x0001081a4184();
  func_0x0001081a421c();
  func_0x0001081a412c(uStack_1148);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x0001081a421c();
  func_0x0001081a4170();
  pcStack_1928 = FUN_1081a3584;
  puVar3 = puVar2;
  puStack_1950 = auStack_910;
  uStack_1948 = param_2;
  puStack_1940 = puVar7;
  puStack_1938 = puVar1;
  pppuStack_1930 = &ppuStack_1120;
  FUN_1081a2bd0();
  if (((ulong)puVar3 & 1) != 0) {
    return (undefined1 *)0x1;
  }
  FUN_10819790c(auStack_1968,"xlink:href",uVar4,puVar5);
  if (cStack_1958 == '\x01') {
    *(undefined4 *)(puVar2 + 0x388) = auStack_1968[0];
    lVar6 = *(long *)(puVar2 + 0x390);
    if (lVar6 != lStack_1960) {
      *(long *)(puVar2 + 0x390) = lStack_1960;
      lStack_1960 = lVar6;
    }
  }
  else {
    FUN_108191760(&uStack_1978,&DAT_10f47e085,uVar4,puVar5);
    if (cStack_1970 != '\x01') {
      puVar7 = (undefined1 *)0x0;
      goto LAB_1081a3634;
    }
    *(undefined8 *)(puVar2 + 0x398) = uStack_1978;
  }
  puVar7 = (undefined1 *)0x1;
LAB_1081a3634:
  FUN_1081940c8(auStack_1968);
  return puVar7;
}



/* Entry: 1081a3420; end: 1081a351f;  */

undefined1 * FUN_1081a3420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_1138;
  char cStack_1130;
  undefined4 auStack_1128 [2];
  long lStack_1120;
  char cStack_1118;
  undefined1 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined1 *puStack_10f8;
  undefined1 **ppuStack_10f0;
  code *pcStack_10e8;
  undefined1 auStack_10e0 [2008];
  undefined8 uStack_908;
  undefined1 *puStack_8e0;
  code *pcStack_8d8;
  undefined1 auStack_8c8 [2008];
  undefined **ppuStack_f0;
  undefined1 *puStack_e8;
  undefined ***pppuStack_d8;
  undefined1 auStack_d0 [136];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010837cf98(auStack_d0);
  ppuStack_f0 = &PTR_FUN_110a2e8a8;
  pppuStack_d8 = &ppuStack_f0;
  puStack_e8 = auStack_d0;
  func_0x0001081a4280(auStack_8c8,param_3,&ppuStack_f0);
  FUN_1081a2a7c(param_2,param_3);
  FUN_1081a20b8(auStack_8c8);
  FUN_10837d48c(param_1,auStack_d0);
  func_0x0001081a43c8(param_2,param_1);
  FUN_1081a3c1c(&ppuStack_f0);
  puVar5 = auStack_d0;
  FUN_10837d00c(puVar5);
  func_0x0001081a412c(uStack_48);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x0001081a4294();
  FUN_1081a3c1c(&ppuStack_f0);
  FUN_10837d00c(auStack_d0);
  func_0x0001081a419c();
  pcStack_8d8 = FUN_1081a3520;
  puVar5 = auStack_10e0;
  puVar3 = auStack_10e0;
  puStack_8e0 = &stack0xfffffffffffffff0;
  func_0x0001081a4140();
  FUN_1081a1c88();
  func_0x0001081a4184();
  func_0x0001081a421c();
  func_0x0001081a412c(uStack_908);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar1 = puVar5;
  func_0x0001081a421c();
  func_0x0001081a4170();
  pcStack_10e8 = FUN_1081a3584;
  puVar2 = puVar1;
  puStack_1110 = auStack_d0;
  uStack_1108 = param_3;
  uStack_1100 = param_2;
  puStack_10f8 = puVar5;
  ppuStack_10f0 = &puStack_8e0;
  FUN_1081a2bd0();
  if (((ulong)puVar2 & 1) != 0) {
    return (undefined1 *)0x1;
  }
  FUN_10819790c(auStack_1128,"xlink:href",param_1,puVar3);
  if (cStack_1118 == '\x01') {
    *(undefined4 *)(puVar1 + 0x388) = auStack_1128[0];
    lVar4 = *(long *)(puVar1 + 0x390);
    if (lVar4 != lStack_1120) {
      *(long *)(puVar1 + 0x390) = lStack_1120;
      lStack_1120 = lVar4;
    }
  }
  else {
    FUN_108191760(&uStack_1138,&DAT_10f47e085,param_1,puVar3);
    if (cStack_1130 != '\x01') {
      puVar5 = (undefined1 *)0x0;
      goto LAB_1081a3634;
    }
    *(undefined8 *)(puVar1 + 0x398) = uStack_1138;
  }
  puVar5 = (undefined1 *)0x1;
LAB_1081a3634:
  FUN_1081940c8(auStack_1128);
  return puVar5;
}



/* Entry: 1081a3520; end: 1081a3583;  */

undefined1 * FUN_1081a3520(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_868;
  char cStack_860;
  undefined4 auStack_858 [2];
  long lStack_850;
  char cStack_848;
  undefined1 auStack_810 [2008];
  undefined8 uStack_38;
  
  puVar4 = auStack_810;
  puVar2 = auStack_810;
  func_0x0001081a4140();
  FUN_1081a1c88();
  func_0x0001081a4184();
  func_0x0001081a421c();
  func_0x0001081a412c(uStack_38);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001081a421c();
  func_0x0001081a4170();
  puVar1 = puVar4;
  FUN_1081a2bd0();
  if (((ulong)puVar1 & 1) != 0) {
    return (undefined1 *)0x1;
  }
  FUN_10819790c(auStack_858,"xlink:href",param_2,puVar2);
  if (cStack_848 == '\x01') {
    *(undefined4 *)(puVar4 + 0x388) = auStack_858[0];
    lVar3 = *(long *)(puVar4 + 0x390);
    if (lVar3 != lStack_850) {
      *(long *)(puVar4 + 0x390) = lStack_850;
      lStack_850 = lVar3;
    }
  }
  else {
    FUN_108191760(&uStack_868,&DAT_10f47e085,param_2,puVar2);
    if (cStack_860 != '\x01') {
      puVar4 = (undefined1 *)0x0;
      goto LAB_1081a3634;
    }
    *(undefined8 *)(puVar4 + 0x398) = uStack_868;
  }
  puVar4 = (undefined1 *)0x1;
LAB_1081a3634:
  FUN_1081940c8(auStack_858);
  return puVar4;
}



/* Entry: 1081a3584; end: 1081a3663;  */

undefined8 FUN_1081a3584(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  char cStack_50;
  undefined4 auStack_48 [2];
  long lStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_1081a2bd0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  FUN_10819790c(auStack_48,"xlink:href",param_2,param_3);
  if (cStack_38 == '\x01') {
    *(undefined4 *)(param_1 + 0x388) = auStack_48[0];
    lVar2 = *(long *)(param_1 + 0x390);
    if (lVar2 != lStack_40) {
      *(long *)(param_1 + 0x390) = lStack_40;
      lStack_40 = lVar2;
    }
  }
  else {
    FUN_108191760(&uStack_58,&DAT_10f47e085,param_2,param_3);
    if (cStack_50 != '\x01') {
      uVar3 = 0;
      goto LAB_1081a3634;
    }
    *(undefined8 *)(param_1 + 0x398) = uStack_58;
  }
  uVar3 = 1;
LAB_1081a3634:
  FUN_1081940c8(auStack_48);
  return uVar3;
}



/* Entry: 1081a3664; end: 1081a366f;  */

void FUN_1081a3664(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1081a3668);
  (*pcVar1)();
}



/* Entry: 1081a3670; end: 1081a3683;  */

void FUN_1081a3670(void)

{
  FUN_108193600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a3684; end: 1081a3687;  */

undefined8 * FUN_1081a3684(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ea98);
  func_0x00010819365c(puVar1 + 0x6e);
  func_0x0001056d1ce4(param_1 + 0x6a);
  func_0x00010818e81c(param_1 + 0x67);
  func_0x00010818e81c(param_1 + 100);
  func_0x00010818e81c(param_1 + 0x61);
  func_0x00010818e81c(param_1 + 0x5e);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081a3688; end: 1081a369b;  */

void FUN_1081a3688(void)

{
  FUN_108193600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a369c; end: 1081a369f;  */

undefined8 * FUN_1081a369c(undefined8 *param_1)

{
  FUN_1083a3c7c(param_1 + 0x5e);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081a36a0; end: 1081a36b3;  */

void FUN_1081a36a0(void)

{
  FUN_1081a38ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a36b4; end: 1081a36bb;  */

void FUN_1081a36b4(void)

{
  return;
}



/* Entry: 1081a36bc; end: 1081a36cf;  */

void FUN_1081a36bc(void)

{
  func_0x0001081a3914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081a36d0; end: 1081a36db;  */

void FUN_1081a36d0(void)

{
  return;
}



/* Entry: 1081a36dc; end: 1081a3717;  */

long FUN_1081a36dc(long param_1)

{
  if ((*(byte *)(param_1 + 0x69c) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x690));
  }
  if ((*(byte *)(param_1 + 0x8c) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x80));
  }
  return param_1;
}



/* Entry: 1081a3718; end: 1081a3743;  */

void FUN_1081a3718(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001081a373c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1081a3744; end: 1081a3843;  */

long * FUN_1081a3744(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  char in_NG;
  char in_OV;
  char cVar5;
  char cVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined4 uVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  
  uVar10 = (undefined4)((ulong)param_3 >> 0x20);
  iVar9 = (int)param_3;
  func_0x0001081a42e4();
  plVar7 = param_2;
  if (in_NG != in_OV) {
    uVar3 = extraout_w8 ^ 0x7fffffff;
    cVar5 = SBORROW4(iVar9,uVar3);
    cVar6 = (int)(iVar9 - uVar3) < 0;
    if ((int)uVar3 < iVar9) {
      func_0x00010bdb1a68();
      func_0x0001081a42e4();
      plVar7 = param_2;
      if (cVar6 != cVar5) {
        if ((int)(extraout_w8_00 ^ 0x7fffffff) < iVar9) {
          func_0x00010bdb1a68();
          lVar8 = param_2[7];
          param_2[7] = 0;
          if (lVar8 != 0) {
            __ZdaPv();
          }
          FUN_1081a3ab8(param_2 + 6);
          func_0x0001081a3a7c(param_2 + 5);
          func_0x0001081a3a4c(param_2 + 4);
          func_0x0001081a3a4c(param_2 + 3);
          plVar7 = (long *)*param_2;
          if (plVar7 != (long *)0x0) {
            plVar1 = plVar7 + 1;
            do {
              iVar9 = (int)*plVar1 + -1;
              cVar6 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          return param_2;
        }
        func_0x0001081a4204(param_1,0xc);
        if ((int)param_2[1] != 0) {
          func_0x0001081a4288();
        }
        if ((*(byte *)((long)param_2 + 0xc) & 1) != 0) {
          plVar7 = (long *)*param_2;
          _free(plVar7);
        }
        uVar2 = CONCAT44(uVar10,iVar9) / 0xc;
        if (0x7ffffffe < uVar2) {
          uVar2 = 0x7fffffff;
        }
        func_0x0001081a42d0(uVar2);
      }
    }
    else {
      func_0x0001081a4204(param_1,1);
      uVar2 = CONCAT44(uVar10,iVar9);
      if ((int)param_2[1] != 0) {
        func_0x0001081a4288();
      }
      if ((*(byte *)((long)param_2 + 0xc) & 1) != 0) {
        plVar7 = (long *)*param_2;
        _free(plVar7);
      }
      if (0x7ffffffe < uVar2) {
        uVar2 = 0x7fffffff;
      }
      func_0x0001081a42d0(uVar2);
    }
  }
  return plVar7;
}



/* Entry: 1081a3844; end: 1081a38cb;  */

long * FUN_1081a3844(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = param_1[7];
  param_1[7] = 0;
  if (lVar6 != 0) {
    __ZdaPv();
  }
  FUN_1081a3ab8(param_1 + 6);
  func_0x0001081a3a7c(param_1 + 5);
  func_0x0001081a3a4c(param_1 + 4);
  func_0x0001081a3a4c(param_1 + 3);
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



/* Entry: 1081a38cc; end: 1081a38eb;  */

void FUN_1081a38cc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010818e81c();
  }
  return;
}



/* Entry: 1081a38ec; end: 1081a3993;  */

undefined8 * FUN_1081a38ec(undefined8 *param_1)

{
  FUN_1083a3c7c(param_1 + 0x5e);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081a3994; end: 1081a39f7;  */

void FUN_1081a3994(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1081a39f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1081a39f8; end: 1081a3a3f;  */

long * FUN_1081a39f8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -8;
      func_0x0001081428c0();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1081a3a40; end: 1081a3a4b;  */

long * FUN_1081a3a40(long *param_1)

{
  long lVar1;
  
  func_0x0001081a4178();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_108375e94();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081a3a4c; end: 1081a3a9f;  */

long * FUN_1081a3a4c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_108375e94();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081a3aa0; end: 1081a3ab7;  */

void FUN_1081a3aa0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}


