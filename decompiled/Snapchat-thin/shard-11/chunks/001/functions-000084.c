/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108154cd8; end: 108154d03;  */

void FUN_108154cd8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108154cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108154d04; end: 108154d4b;  */

void FUN_108154d04(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x000108154d64();
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
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 108154d4c; end: 108154d6f;  */

void FUN_108154d4c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x000108154cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108154d70; end: 108154e2f;  */

undefined8 *
FUN_108154d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  FUN_10815f9e4(param_1,param_3,param_4);
  *puVar2 = &PTR_FUN_110a28048;
  *(undefined8 *)((long)puVar2 + 0xa4) = *param_5;
  FUN_108154b58(param_3,&UNK_10f47cfa2);
  uVar1 = (uint)param_3;
  FUN_108154e30();
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(uint *)((long)param_1 + 0xac) = uVar1 ^ 1;
  FUN_108154b58(param_2,&UNK_10f47cfa4);
  FUN_108154e4c();
  FUN_108161330(param_1,param_4,param_2,param_1 + 0x16);
  return param_1;
}



/* Entry: 108154e30; end: 108154e4b;  */

bool FUN_108154e30(int param_1)

{
  FUN_108155444();
  return param_1 == 0;
}



/* Entry: 108154e4c; end: 108154e6f;  */

undefined8 FUN_108154e4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10815545c();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108154e70; end: 108154e73;  */

undefined8 * FUN_108154e70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a287e8;
  func_0x0001056d1ce4(param_1 + 0x10);
  func_0x0001056d1ce4(param_1 + 0xd);
  func_0x0001056d1ce4(param_1 + 10);
  func_0x0001056d1ce4(param_1 + 7);
  *param_1 = &PTR_DAT_110a288c0;
  FUN_1081554f0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108154e74; end: 108154e87;  */

void FUN_108154e74(void)

{
  func_0x00010815fc28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108154e88; end: 108154f0f;  */

void FUN_108154e88(undefined8 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  long param_5)

{
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  func_0x0001081637ec(param_5 + 0x50);
  uStack_2c = param_2;
  uStack_28 = param_3;
  fStack_24 = param_4;
  if (*(int *)(param_5 + 0xac) == 0) {
    fStack_3c = -1.0 - param_4;
  }
  else {
    func_0x0001081637ec(param_5 + 0x38);
    fStack_3c = -param_4;
  }
  uStack_38 = param_2;
  uStack_34 = param_3;
  fStack_30 = fStack_3c;
  func_0x00010815fd1c(param_5);
  uStack_44 = param_2;
  uStack_40 = param_3;
  FUN_108154f10(param_1,*(undefined4 *)(param_5 + 0xb0),&uStack_2c,&uStack_38,&uStack_44,
                param_5 + 0xa4);
  return;
}



/* Entry: 108154f10; end: 10815518f;  */

void FUN_108154f10(undefined8 param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                  float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uStack_2f0;
  undefined8 uStack_2ec;
  undefined8 uStack_2e4;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c4;
  undefined8 uStack_2bc;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  float fStack_288;
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [64];
  undefined1 auStack_200 [64];
  undefined1 auStack_1c0 [64];
  float afStack_180 [12];
  undefined8 uStack_150;
  undefined8 uStack_148;
  float afStack_140 [6];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  
  FUN_10835edc4(0,0,0x3f800000,param_5[2] * -0.017453292,auStack_1c0);
  FUN_10835edc4(0,0x3f800000,0,param_5[1] * 0.017453292,auStack_200);
  FUN_10835e5d0(afStack_180,auStack_1c0,auStack_200);
  FUN_10835edc4(0x3f800000,0,0,*param_5 * 0.017453292,auStack_240);
  FUN_10835e5d0(afStack_140,afStack_180,auStack_240);
  uStack_290 = *param_3;
  fStack_288 = -*(float *)(param_3 + 1);
  uStack_2a0 = *param_4;
  uStack_298 = *(undefined4 *)(param_4 + 1);
  uStack_2b0 = 0x3f80000000000000;
  uStack_2a8 = 0;
  FUN_10835ef90(auStack_280,&uStack_290,&uStack_2a0,&uStack_2b0);
  FUN_10835e5d0(auStack_100,afStack_140,auStack_280);
  uStack_2f0 = 0x3f800000;
  uStack_2e4 = 0;
  uStack_2ec = 0;
  uStack_2dc = 0x3f800000;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0xbf800000;
  uStack_2bc = 0;
  uStack_2c4 = 0;
  uStack_2b4 = 0x3f800000;
  FUN_10835e5d0(auStack_c0,auStack_100,&uStack_2f0);
  fVar2 = param_6[1];
  if (param_6[1] <= *param_6) {
    fVar2 = *param_6;
  }
  fVar2 = fVar2 * 0.5;
  fVar1 = fVar2 / param_2;
  _atanf();
  afStack_140[3] = 0.0;
  afStack_140[4] = 0.0;
  afStack_140[1] = 0.0;
  afStack_140[2] = 0.0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_10c = 0;
  uStack_114 = 0;
  uStack_118 = 0x3f800000;
  uStack_104 = 0x3f800000;
  fVar1 = (fVar1 + fVar1) * 0.5;
  afStack_140[0] = fVar2;
  afStack_140[5] = fVar2;
  _tanf();
  afStack_180[0] = 1.0 / fVar1;
  afStack_180[2] = 0.0;
  afStack_180[3] = 0.0;
  afStack_180[1] = 0.0;
  afStack_180[6] = 0.0;
  afStack_180[7] = 0.0;
  afStack_180[4] = 0.0;
  afStack_180[8] = 0.0;
  afStack_180[9] = 0.0;
  uStack_150 = 0;
  uStack_148 = CONCAT44(0x3f800000,(1.0 / param_2) * (param_2 + param_2) * 0.0);
  afStack_180[0xb] = -1.0;
  afStack_180[10] = (param_2 + 0.0) * (1.0 / param_2);
  afStack_180[5] = afStack_180[0];
  FUN_10835e5d0(auStack_100,afStack_140,afStack_180);
  afStack_180[3] = 0.0;
  afStack_180[4] = 0.0;
  afStack_180[1] = 0.0;
  afStack_180[2] = 0.0;
  afStack_180[0] = 1.0;
  afStack_180[5] = 1.0;
  afStack_180[6] = 0.0;
  afStack_180[7] = 0.0;
  afStack_180[8] = 0.0;
  afStack_180[9] = 0.0;
  uStack_150 = CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) * 0.5,
                        (float)*(undefined8 *)param_6 * 0.5);
  afStack_180[10] = 1.0;
  afStack_180[0xb] = 0.0;
  uStack_148 = 0x3f80000000000000;
  FUN_10835e5d0(afStack_140,afStack_180,auStack_100);
  FUN_10835e5d0(param_1,afStack_140,auStack_c0);
  return;
}



/* Entry: 108155190; end: 108155227;  */

void FUN_108155190(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [64];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_40 = CONCAT44((float)((ulong)*param_2 >> 0x20) * 0.5,(float)*param_2 * 0.5);
  uStack_28 = 0xc45bc852;
  uStack_38 = 0x445b8852;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_30 = uStack_40;
  FUN_108154f10(auStack_98,0x445bc852,&uStack_30,&uStack_40,&uStack_50,param_2);
  FUN_108155228(&uStack_58,auStack_98);
  uVar1 = uStack_58;
  uStack_58 = 0;
  *param_1 = uVar1;
  FUN_1081554f0(&uStack_58);
  return;
}



/* Entry: 108155228; end: 108155267;  */

void FUN_108155228(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm();
  FUN_108155478();
  *param_1 = uVar1;
  return;
}



/* Entry: 108155268; end: 10815539b;  */

void FUN_108155268(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10815539c(&plStack_38,param_3,param_4,param_2,param_6);
  if ((plStack_38[2] == plStack_38[3]) && ((*(byte *)((long)plStack_38 + 0x29) & 1) == 0)) {
    (**(code **)(*plStack_38 + 0x18))(0);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_40 = plStack_38;
    FUN_108155570(uVar5,&plStack_40);
    FUN_108155920(&plStack_40);
  }
  lStack_48 = plStack_38[6];
  if (lStack_48 != 0) {
    piVar2 = (int *)(lStack_48 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_50 = *param_5;
  *param_5 = 0;
  FUN_10818d708(param_1,&lStack_48,&uStack_50);
  FUN_108155404(&uStack_50);
  FUN_108155404(&lStack_48);
  FUN_108155530(&plStack_38);
  return;
}



/* Entry: 10815539c; end: 108155403;  */

void FUN_10815539c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xb8;
  __Znwm();
  FUN_108154d70();
  *param_1 = uVar1;
  return;
}



/* Entry: 108155404; end: 108155443;  */

void FUN_108155404(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001081559a4();
  if (param_1 != 0) {
    do {
      func_0x0001081559b0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108155998();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108155444; end: 10815545b;  */

undefined4 FUN_108155444(byte *param_1)

{
  return *(undefined4 *)(&UNK_10df02c78 + ((ulong)*param_1 & 7) * 4);
}



/* Entry: 10815545c; end: 108155477;  */

bool FUN_10815545c(int param_1)

{
  FUN_108155444();
  return param_1 == 5;
}



/* Entry: 108155478; end: 1081554bb;  */

void FUN_108155478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_10818d6e4();
  *param_1 = &PTR_FUN_110a280a0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = param_2[6];
  *(undefined8 *)((long)param_1 + 100) = param_2[7];
  *(undefined8 *)((long)param_1 + 0x5c) = uVar7;
  *(undefined8 *)((long)param_1 + 0x54) = uVar6;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x44) = uVar4;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x34) = uVar2;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar1;
  return;
}



/* Entry: 1081554bc; end: 1081554bf;  */

undefined8 * FUN_1081554bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081554c0; end: 1081554d3;  */

void FUN_1081554c0(void)

{
  FUN_10818a578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081554d4; end: 1081554ef;  */

undefined8 FUN_1081554d4(void)

{
  return 0;
}



/* Entry: 1081554f0; end: 10815552f;  */

void FUN_1081554f0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001081559a4();
  if (param_1 != 0) {
    do {
      func_0x0001081559b0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108155998();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108155530; end: 10815556f;  */

void FUN_108155530(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001081559a4();
  if (param_1 != 0) {
    do {
      func_0x0001081559b0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108155998();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108155570; end: 1081555b7;  */

undefined8 * FUN_108155570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = param_1;
    FUN_1081555b8();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 1081555b8; end: 108155667;  */

long FUN_1081555b8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_108155668(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar4 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_108155734();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar4));
  plStack_40 = plStack_58 + (long)plVar2;
  uVar3 = *param_2;
  *param_2 = 0;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = uVar3;
  FUN_1081556a8(param_1,&plStack_58);
  lVar4 = param_1[1];
  func_0x0001081558b4(&plStack_58);
  return lVar4;
}



/* Entry: 108155668; end: 1081556a7;  */

long * FUN_108155668(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x1fffffffffffffff;
    }
    return plVar2;
  }
  FUN_108155720();
  plVar2 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_108155774(plVar2,*param_1,param_1[1],lVar1);
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
  return plVar2;
}



/* Entry: 1081556a8; end: 10815571f;  */

void FUN_1081556a8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_108155774(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 108155720; end: 108155733;  */

void FUN_108155720(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_108155758();
  return;
}



/* Entry: 108155734; end: 108155757;  */

void FUN_108155734(void)

{
  FUN_108155758();
  return;
}



/* Entry: 108155758; end: 108155773;  */

void FUN_108155758(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_60;
  long **pplStack_58;
  long **pplStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if ((ulong)param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  pplStack_58 = &plStack_40;
  pplStack_50 = &plStack_38;
  plStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_38 = lVar4;
    plStack_38 = plStack_38 + 1;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  plStack_40 = param_4;
  FUN_108155804();
  FUN_108155834(&uStack_60);
  return;
}



/* Entry: 108155774; end: 108155803;  */

void FUN_108155774(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  long **pplStack_48;
  long **pplStack_40;
  undefined1 uStack_38;
  long *plStack_30;
  long *plStack_28;
  
  pplStack_48 = &plStack_30;
  pplStack_40 = &plStack_28;
  plStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_28 = lVar4;
    plStack_28 = plStack_28 + 1;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  plStack_30 = param_4;
  FUN_108155804();
  FUN_108155834(&uStack_50);
  return;
}



/* Entry: 108155804; end: 108155833;  */

void FUN_108155804(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_108155920();
  }
  return;
}



/* Entry: 108155834; end: 108155863;  */

long FUN_108155834(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108155864(param_1);
  }
  return param_1;
}



/* Entry: 108155864; end: 108155883;  */

void FUN_108155864(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_108155920();
  }
  return;
}



/* Entry: 108155884; end: 1081558df;  */

void FUN_108155884(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    FUN_108155920();
  }
  return;
}



/* Entry: 1081558e0; end: 1081558e7;  */

void FUN_1081558e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    FUN_108155920();
  }
  return;
}



/* Entry: 1081558e8; end: 10815591f;  */

void FUN_1081558e8(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    FUN_108155920();
  }
  return;
}



/* Entry: 108155920; end: 10815595f;  */

void FUN_108155920(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x0001081559a4();
  if (param_1 != 0) {
    do {
      func_0x0001081559b0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108155998();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108155960; end: 1081559bb;  */

void FUN_108155960(void)

{
  return;
}



/* Entry: 1081559bc; end: 108155aaf;  */

long * FUN_1081559bc(long *param_1,long param_2,undefined8 param_3)

{
  int *piStack_28;
  
  *param_1 = 0;
  FUN_108154b58(param_3,&UNK_10f47cfa7);
  FUN_108155ab0(&piStack_28);
  FUN_1083a3ca0(0x1138270b0);
  if (*piStack_28 == 0) {
    func_0x000108157068();
  }
  else {
    param_2 = param_2 + 0x88;
    FUN_108155b0c(param_2,&piStack_28);
    if ((param_2 == 0) || (*(char *)(param_2 + 8) == '\x01')) {
      func_0x000108157068();
    }
    else {
      *(undefined1 *)(param_2 + 8) = 1;
      *param_1 = param_2;
    }
  }
  FUN_1083a3ca0(piStack_28);
  return param_1;
}



/* Entry: 108155ab0; end: 108155b0b;  */

long * FUN_108155ab0(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = 0x1138270b0;
  FUN_10815c880(param_2,param_1);
  if (((ulong)param_2 & 1) != 0) {
    return param_2;
  }
  if (param_1 != param_3) {
    lVar4 = *param_3;
    if (lVar4 != 0 && lVar4 != 0x1138270b0) {
      piVar1 = (int *)(lVar4 + 4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_1083a3400(param_1);
  }
  return param_1;
}



/* Entry: 108155b0c; end: 108155b2b;  */

long FUN_108155b0c(long param_1)

{
  long lVar1;
  
  FUN_1081564f0();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 108155b2c; end: 108155eff;  */

float * FUN_108155b2c(float *param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_68;
  
  *(undefined8 *)param_1 = *param_3;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  puVar8 = param_4;
  FUN_108154b58(param_4,&DAT_10f2c3ed3);
  FUN_108155f00();
  if (puVar8 != (ulong *)0x0) {
    plVar16 = (long *)(*puVar8 & 0xfffffffffffffff8);
    pfVar12 = param_1 + 6;
    uVar11 = (ulong)(int)*plVar16;
    if ((ulong)((*(long *)pfVar12 - *(long *)(param_1 + 2)) / 0x88) < uVar11) {
      if (0x1e1e1e1e1e1e1e1 < uVar11) {
        func_0x0001081566a8();
LAB_108155e74:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x108155e78);
        (*pcVar6)();
      }
      FUN_108156950(&uStack_90,uVar11,(*(long *)(param_1 + 4) - *(long *)(param_1 + 2)) / 0x88,
                    pfVar12);
      func_0x0001081570e8();
      func_0x0001081570f4();
      plVar16 = (long *)(*puVar8 & 0xfffffffffffffff8);
    }
    plVar17 = plVar16 + 1;
    plVar16 = plVar17 + *plVar16;
    uVar11 = 0xffffffff;
    while( true ) {
      if (plVar17 == plVar16) break;
      plVar9 = plVar17;
      FUN_108154e4c();
      uVar18 = uVar11;
      if (plVar9 != (long *)0x0) {
        uVar2 = *(ulong *)(param_1 + 4);
        uVar4 = (long)(uVar2 - *(long *)(param_1 + 2)) / 0x88;
        if (uVar2 < *(ulong *)(param_1 + 6)) {
          func_0x0001081570d0(uVar2);
          lVar19 = uVar2 + 0x88;
          *(long *)(param_1 + 4) = lVar19;
        }
        else {
          uVar2 = uVar4 + 1;
          if (0x1e1e1e1e1e1e1e1 < uVar2) {
            func_0x0001081566a8();
            goto LAB_108155e74;
          }
          uVar5 = (long)(*(ulong *)(param_1 + 6) - *(long *)(param_1 + 2)) / 0x88;
          uVar13 = uVar5 * 2;
          if (uVar13 < uVar2 || uVar13 - uVar2 == 0) {
            uVar13 = uVar2;
          }
          if (0xf0f0f0f0f0f0ef < uVar5) {
            uVar13 = 0x1e1e1e1e1e1e1e1;
          }
          FUN_108156950(&uStack_90,uVar13,uVar4,pfVar12);
          func_0x0001081570d0();
          lStack_80 = lStack_80 + 0x88;
          func_0x0001081570e8();
          lVar19 = *(long *)(param_1 + 4);
          func_0x0001081570f4();
        }
        *(long *)(param_1 + 4) = lVar19;
        uStack_90 = (ulong)*(uint *)(lVar19 + -0x80);
        fVar1 = param_1[9];
        uStack_88 = uVar4;
        if ((int)fVar1 * 3 <= (int)param_1[8] * 4) {
          fVar3 = (float)((int)fVar1 << 1);
          if ((int)fVar1 < 1) {
            fVar3 = 5.60519e-45;
          }
          param_1[8] = 0.0;
          param_1[9] = fVar3;
          lStack_68 = *(long *)(param_1 + 10);
          param_1[10] = 0.0;
          param_1[0xb] = 0.0;
          puVar10 = (undefined8 *)((ulong)(uint)fVar3 * 0x18 + 0x10);
          __Znam();
          *puVar10 = 0x18;
          puVar10[1] = (ulong)(uint)fVar3;
          if (fVar3 != 0.0) {
            lVar14 = (ulong)(uint)fVar3 * 0x18;
            puVar15 = puVar10 + 2;
            do {
              *(undefined4 *)puVar15 = 0;
              lVar14 = lVar14 + -0x18;
              puVar15 = puVar15 + 3;
            } while (lVar14 != 0);
          }
          *(undefined8 **)(param_1 + 10) = puVar10 + 2;
          for (lVar14 = 0;
              (ulong)((uint)fVar1 & ((int)fVar1 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar14 != 0;
              lVar14 = lVar14 + 0x18) {
            if (*(int *)(lStack_68 + lVar14) != 0) {
              func_0x000108156ae8(param_1 + 8,lStack_68 + lVar14 + 8);
            }
          }
          FUN_108156370(&lStack_68);
        }
        func_0x000108156ae8(param_1 + 8,&uStack_90);
        if ((*(int *)(lVar19 + -0x78) == 0xd) && (uVar18 = uVar4, -1 < (int)uVar11)) {
          FUN_108159fb8(param_2,0,plVar9,&UNK_10f47cff8);
          uVar18 = uVar11;
        }
      }
      plVar17 = plVar17 + 1;
      uVar11 = uVar18;
    }
    if (-1 < (int)uVar11) {
      FUN_108157348(&uStack_90,*(long *)(param_1 + 2) + (uVar11 & 0xffffffff) * 0x88,param_2,param_1
                   );
      uVar11 = uStack_90;
      uStack_90 = 0;
      func_0x000108156bd0(param_1 + 0xc,uVar11);
      goto LAB_108155de0;
    }
  }
  FUN_108154b58(param_4,&UNK_10f47d019);
  iVar7 = (int)param_4;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  func_0x000108155f24();
  if (iVar7 == 0) {
    return param_1;
  }
  if (*param_1 <= 0.0) {
    return param_1;
  }
  if (param_1[1] <= 0.0) {
    return param_1;
  }
  FUN_108155190(&uStack_90,param_1);
  uVar11 = uStack_90;
  uStack_90 = 0;
  func_0x000108156bd0(param_1 + 0xc,uVar11);
LAB_108155de0:
  FUN_108155404(&uStack_90);
  return param_1;
}



/* Entry: 108155f00; end: 108155fdf;  */

undefined8 FUN_108155f00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10815668c();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108155fe0; end: 108155fff;  */

long FUN_108155fe0(long param_1)

{
  long lVar1;
  
  FUN_108156be0();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 108156000; end: 10815605b;  */

void FUN_108156000(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  func_0x000108155f94(param_2,param_4);
  if (param_2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    FUN_108157660();
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x000108157008();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10815605c; end: 1081561e7;  */

void FUN_10815605c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_2 + 0x10);
  for (lVar2 = *(long *)(param_2 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x88) {
    FUN_108157348(auStack_48,lVar2,param_3,param_2);
    FUN_108155404(auStack_48);
  }
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  uStack_50 = 0;
  FUN_1081561e8(&plStack_60,(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) / 0x88);
  lVar1 = *(long *)(param_2 + 0x10);
  for (lVar2 = *(long *)(param_2 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x88) {
    FUN_10815860c(&lStack_68,lVar2,param_3,param_2);
    if (lStack_68 != 0) {
      func_0x000108156e9c(&plStack_60,&lStack_68);
    }
    FUN_108154cb4(&lStack_68);
  }
  if (plStack_60 == plStack_58) {
    *param_1 = 0;
  }
  else if ((long)plStack_58 - (long)plStack_60 == 8) {
    lVar2 = *plStack_60;
    *plStack_60 = 0;
    *param_1 = lVar2;
  }
  else {
    FUN_108156fc0();
    FUN_108156254(&plStack_60);
    plStack_78 = plStack_58;
    plStack_80 = plStack_60;
    uStack_70 = uStack_50;
    plStack_60 = (long *)0x0;
    plStack_58 = (long *)0x0;
    uStack_50 = 0;
    FUN_1081562f4(&lStack_68,&plStack_80);
    lVar2 = lStack_68;
    lStack_68 = 0;
    *param_1 = lVar2;
    FUN_1081564a4(&lStack_68);
    func_0x000108157078();
  }
  FUN_10815640c(&plStack_60);
  return;
}



/* Entry: 1081561e8; end: 108156253;  */

void FUN_1081561e8(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  plVar2 = param_1 + 2;
  if ((ulong)(*plVar2 - *param_1 >> 3) < param_2) {
    if (param_2 >> 0x3d == 0) {
      FUN_108156cb8();
      func_0x000108156ffc();
      func_0x000108157044();
    }
    else {
      FUN_108156c38();
      func_0x00010815702c();
      func_0x000108157018();
      lVar1 = *plVar2;
      uVar3 = plVar2[2] - lVar1;
      uVar4 = plVar2[1] - lVar1;
      if (uVar4 < uVar3) {
        if (plVar2[1] == lVar1) {
          uVar4 = 0;
        }
        else {
          uVar4 = (long)uVar4 >> 3;
          FUN_108156cb8();
          uVar3 = plVar2[2] - *plVar2;
        }
        if (uVar4 < (ulong)((long)uVar3 >> 3)) {
          func_0x000108156ffc();
        }
        func_0x000108157044();
      }
    }
  }
  return;
}



/* Entry: 108156254; end: 1081562f3;  */

void FUN_108156254(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *param_1;
  uVar2 = param_1[2] - lVar1;
  uVar3 = param_1[1] - lVar1;
  if (uVar3 < uVar2) {
    if (param_1[1] == lVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = (long)uVar3 >> 3;
      FUN_108156cb8();
      uVar2 = param_1[2] - *param_1;
    }
    if (uVar3 < (ulong)((long)uVar2 >> 3)) {
      func_0x000108156ffc();
    }
    func_0x000108157044();
  }
  return;
}



/* Entry: 1081562f4; end: 10815636f;  */

void FUN_1081562f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x50;
  __Znwm();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_108189544();
  *param_1 = uVar1;
  func_0x000108157078();
  return;
}



/* Entry: 108156370; end: 108156393;  */

undefined8 FUN_108156370(undefined8 param_1)

{
  FUN_108156394(param_1,0);
  return param_1;
}



/* Entry: 108156394; end: 10815640b;  */

void FUN_108156394(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10815640c; end: 108156467;  */

undefined8 FUN_10815640c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108156438(&uStack_28);
  return param_1;
}



/* Entry: 108156468; end: 10815646f;  */

void FUN_108156468(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108157080(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_108154cb4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108156470; end: 1081564a3;  */

void FUN_108156470(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108157080();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_108154cb4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1081564a4; end: 1081564ef;  */

long * FUN_1081564a4(long *param_1)

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



/* Entry: 1081564f0; end: 108156593;  */

uint * FUN_1081564f0(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x000108157080();
  FUN_108156594();
  uVar4 = *(uint *)(unaff_x20 + 4);
  uVar2 = uVar4 - 1 & param_2;
  uVar3 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 8) + (long)(int)uVar2 * 0x20);
    uVar5 = *puVar1;
    if (uVar5 == 0) break;
    if (param_2 == uVar5) {
      uVar6 = unaff_x19;
      FUN_1083a3440();
      if ((uVar6 & 1) != 0) {
        return puVar1 + 2;
      }
    }
    uVar5 = 0;
    if ((int)uVar2 < 1) {
      uVar5 = uVar4;
    }
    uVar2 = (uVar2 + uVar5) - 1;
    uVar3 = uVar3 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 108156594; end: 1081565f3;  */

uint FUN_108156594(uint param_1)

{
  func_0x0001081565b0();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1081565f4; end: 10815664f;  */

undefined8 FUN_1081565f4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108156620(&uStack_28);
  return param_1;
}



/* Entry: 108156650; end: 108156657;  */

void FUN_108156650(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108157080(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x0001081572fc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108156658; end: 10815668b;  */

void FUN_108156658(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108157080();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x0001081572fc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10815668c; end: 1081566b3;  */

bool FUN_10815668c(int param_1)

{
  FUN_108155444();
  return param_1 == 4;
}



/* Entry: 1081566b4; end: 10815694f;  */

void FUN_1081566b4(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar9;
  long lVar10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  bool bVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined1 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar13 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar16 = (undefined8 *)(param_2[1] + (((long)puVar2 - (long)puVar13) / -0x88) * 0x88);
  plStack_d0 = param_1 + 2;
  ppuStack_c8 = &puStack_b0;
  ppuStack_c0 = &puStack_a8;
  uStack_b8 = 0;
  puVar15 = puVar13;
  puVar17 = puVar16;
  puStack_b0 = puVar16;
  do {
    puStack_a8 = puVar17;
    if (puVar15 == puVar2) {
      uStack_b8 = 1;
      for (; puVar13 != puVar2; puVar13 = puVar13 + 0x11) {
        func_0x0001081572fc(puVar13);
      }
      func_0x000108156a5c(&plStack_d0);
      param_2[1] = puVar16;
      lVar10 = *param_1;
      param_1[1] = lVar10;
      *param_1 = param_2[1];
      param_2[1] = lVar10;
      lVar10 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar10;
      lVar10 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar10;
      *param_2 = param_2[1];
      return;
    }
    uVar18 = puVar15[1];
    uVar9 = *puVar15;
    uVar20 = puVar15[3];
    uVar19 = puVar15[2];
    uVar22 = puVar15[5];
    uVar21 = puVar15[4];
    uVar23 = *(undefined8 *)((long)puVar15 + 0x2c);
    *(undefined8 *)((long)puVar17 + 0x34) = *(undefined8 *)((long)puVar15 + 0x34);
    *(undefined8 *)((long)puVar17 + 0x2c) = uVar23;
    puVar17[3] = uVar20;
    puVar17[2] = uVar19;
    puVar17[5] = uVar22;
    puVar17[4] = uVar21;
    puVar17[1] = uVar18;
    *puVar17 = uVar9;
    uVar9 = 0;
    if (puVar15[8] != 0) {
      do {
        func_0x000108157008();
        uVar9 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    lVar10 = 0;
    puVar17[8] = uVar9;
    bVar11 = false;
    do {
      lVar12 = puVar15[lVar10 + 9];
      if (lVar12 != 0) {
        piVar1 = (int *)(lVar12 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar17[lVar10 + 9] = lVar12;
      lVar10 = 1;
      bVar5 = !bVar11;
      bVar11 = true;
    } while (bVar5);
    uVar9 = 0;
    if (puVar15[0xb] != 0) {
      do {
        func_0x000108157008();
        uVar9 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    puStack_a0 = puVar17 + 0xc;
    *puStack_a0 = 0;
    puVar17[0xb] = uVar9;
    puVar17[0xd] = 0;
    puVar17[0xe] = 0;
    plVar14 = (long *)puVar15[0xc];
    plVar3 = (long *)puVar15[0xd];
    uStack_98 = 0;
    lVar10 = (long)plVar3 - (long)plVar14;
    if (lVar10 != 0) {
      uVar8 = lVar10 >> 3;
      if (uVar8 >> 0x3d != 0) {
        FUN_108155720();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10815690c);
        (*pcVar6)();
      }
      puVar7 = puVar17 + 0xe;
      FUN_108155734();
      puVar17[0xc] = puVar7;
      puVar17[0xd] = puVar7;
      puVar17[0xe] = puVar7 + uVar8;
      ppuStack_88 = &puStack_70;
      puStack_90 = puVar17 + 0xe;
      ppuStack_80 = &puStack_68;
      puStack_70 = puVar7;
      for (; puStack_68 = puVar7, plVar14 != plVar3; plVar14 = plVar14 + 1) {
        uVar9 = 0;
        if (*plVar14 != 0) {
          do {
            func_0x000108157008();
            uVar9 = extraout_x8_01;
          } while (extraout_w11_01 != 0);
        }
        *puVar7 = uVar9;
        puVar7 = puVar7 + 1;
      }
      uStack_78 = 1;
      FUN_108155834(&puStack_90);
      puVar17[0xd] = puVar7;
    }
    uStack_98 = 1;
    FUN_1081569c4(&puStack_a0);
    uVar9 = puVar15[0xf];
    *(undefined4 *)(puVar17 + 0x10) = *(undefined4 *)(puVar15 + 0x10);
    puVar17[0xf] = uVar9;
    puVar15 = puVar15 + 0x11;
    puVar17 = puStack_a8 + 0x11;
  } while( true );
}



/* Entry: 108156950; end: 1081569c3;  */

long * FUN_108156950(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x1e1e1e1e1e1e1e1 < param_2) {
      func_0x000104bd35f4();
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        func_0x0001081569f0(param_1);
      }
      return param_1;
    }
    lVar1 = param_2 * 0x88;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x88;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x88;
  return param_1;
}



/* Entry: 1081569c4; end: 108156a1f;  */

long FUN_1081569c4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001081569f0(param_1);
  }
  return param_1;
}



/* Entry: 108156a20; end: 108156a27;  */

void FUN_108156a20(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108157080(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_108155920();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108156a28; end: 108156b63;  */

void FUN_108156a28(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108157080();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_108155920();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108156b64; end: 108156ba3;  */

uint FUN_108156b64(uint param_1)

{
  func_0x000108156b80();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 108156ba4; end: 108156bdf;  */

uint FUN_108156ba4(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 ^ *param_2 >> 0x10) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  return uVar1 ^ uVar1 >> 0x10;
}



/* Entry: 108156be0; end: 108156c37;  */

int * FUN_108156be0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int iVar4;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int *piVar5;
  long unaff_x19;
  
  func_0x00010815708c();
  func_0x00010815704c();
  iVar1 = extraout_w9;
  iVar2 = extraout_w10;
  iVar3 = extraout_w12;
  iVar4 = extraout_w11;
  while( true ) {
    if (iVar4 == 0) {
      return (int *)0x0;
    }
    piVar5 = (int *)(*(long *)(unaff_x19 + 8) + (long)iVar1 * (long)iVar3);
    if (*piVar5 == 0) break;
    if (((int)param_1 == *piVar5) && (iVar2 == piVar5[2])) {
      return piVar5 + 2;
    }
    func_0x0001081570ac();
    iVar1 = extraout_w9_00;
    iVar2 = extraout_w10_00;
    iVar3 = extraout_w12_00;
    iVar4 = extraout_w11_00;
  }
  return (int *)0x0;
}



/* Entry: 108156c38; end: 108156c43;  */

void FUN_108156c38(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001081570c4();
  func_0x000108157080();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_108156cf8(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108156c44; end: 108156cb7;  */

void FUN_108156c44(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108157080();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_108156cf8(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108156cb8; end: 108156cdb;  */

void FUN_108156cb8(void)

{
  FUN_108156cdc();
  return;
}



/* Entry: 108156cdc; end: 108156cf7;  */

void FUN_108156cdc(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_60;
  long **pplStack_58;
  long **pplStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if ((ulong)param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  pplStack_58 = &plStack_40;
  pplStack_50 = &plStack_38;
  plStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_38 = lVar4;
    plStack_38 = plStack_38 + 1;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  plStack_40 = param_4;
  FUN_108156d84();
  FUN_108156db4(&uStack_60);
  return;
}



/* Entry: 108156cf8; end: 108156d83;  */

void FUN_108156cf8(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  long **pplStack_48;
  long **pplStack_40;
  undefined1 uStack_38;
  long *plStack_30;
  long *plStack_28;
  
  pplStack_48 = &plStack_30;
  pplStack_40 = &plStack_28;
  plStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_28 = lVar4;
    plStack_28 = plStack_28 + 1;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  plStack_30 = param_4;
  FUN_108156d84();
  FUN_108156db4(&uStack_50);
  return;
}



/* Entry: 108156d84; end: 108156db3;  */

void FUN_108156d84(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_108154cb4();
  }
  return;
}



/* Entry: 108156db4; end: 108156de3;  */

long FUN_108156db4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108156de4(param_1);
  }
  return param_1;
}



/* Entry: 108156de4; end: 108156e03;  */

void FUN_108156de4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_108154cb4();
  }
  return;
}



/* Entry: 108156e04; end: 108156e5f;  */

void FUN_108156e04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    FUN_108154cb4();
  }
  return;
}



/* Entry: 108156e60; end: 108156e67;  */

void FUN_108156e60(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108157080(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    FUN_108154cb4();
  }
  return;
}



/* Entry: 108156e68; end: 108156ee3;  */

void FUN_108156e68(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108157080();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    FUN_108154cb4();
  }
  return;
}



/* Entry: 108156ee4; end: 108156f7f;  */

long FUN_108156ee4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = param_1;
  FUN_108156f80(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar5 = *param_1;
  lVar1 = param_1[1];
  plVar3 = param_1 + 2;
  if (plVar2 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    FUN_108156cb8();
  }
  uVar4 = *param_2;
  *param_2 = 0;
  *(undefined8 *)((long)plVar3 + (lVar1 - lVar5)) = uVar4;
  func_0x000108156ffc();
  lVar5 = param_1[1];
  func_0x000108157044();
  return lVar5;
}



/* Entry: 108156f80; end: 108156fbf;  */

long * FUN_108156f80(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    FUN_108156c38();
    if (param_1 != param_2) {
      for (; param_2 = param_2 + -1, param_1 < param_2; param_1 = param_1 + 1) {
        lVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = lVar2;
      }
    }
    return param_1;
  }
  plVar1 = (long *)(param_1[2] - *param_1 >> 2);
  if (plVar1 <= param_2) {
    plVar1 = param_2;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
    plVar1 = (long *)0x1fffffffffffffff;
  }
  return plVar1;
}



/* Entry: 108156fc0; end: 108157103;  */

void FUN_108156fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    for (; param_2 = param_2 + -1, param_1 < param_2; param_1 = param_1 + 1) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
    }
  }
  return;
}



/* Entry: 108157104; end: 1081572bf;  */

undefined8 *
FUN_108157104(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  
  *param_2 = param_3;
  puVar3 = param_2;
  func_0x0001081599b0(param_2,&DAT_10f47d01d);
  iVar2 = (int)puVar3;
  func_0x0001081599e4();
  *(int *)(param_2 + 1) = iVar2;
  func_0x0001081599b0();
  func_0x0001081599e4();
  *(int *)((long)param_2 + 0xc) = iVar2;
  func_0x0001081599b0();
  func_0x0001081599e4();
  *(int *)(param_2 + 2) = iVar2;
  func_0x0001081599b0();
  func_0x000108155f24();
  *(bool *)((long)param_2 + 0x14) = iVar2 != 0;
  param_2[3] = *param_4;
  func_0x0001081599b0();
  FUN_1081572c0();
  *(undefined4 *)(param_2 + 4) = param_1;
  func_0x0001081599b0();
  FUN_1081572c0();
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  uVar4 = *(uint *)(param_2 + 2);
  if (uVar4 < 0xf) {
    lVar1 = (ulong)uVar4 * 0x18;
    puVar5 = (&PTR_FUN_110a28108)[(ulong)uVar4 * 3];
    param_2[6] = *(undefined8 *)(&UNK_110a28110 + lVar1);
    param_2[5] = puVar5;
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(&UNK_110a28118 + lVar1);
    if (uVar4 == 0xd) {
      uVar4 = 4;
      goto LAB_108157260;
    }
  }
  func_0x0001081599b0();
  func_0x000108155f24();
  if (iVar2 == 0) {
    return param_2;
  }
  uVar4 = *(uint *)(param_2 + 0x10) | 4;
LAB_108157260:
  *(uint *)(param_2 + 0x10) = uVar4;
  return param_2;
}



/* Entry: 1081572c0; end: 108157347;  */

undefined4 FUN_1081572c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  
  FUN_10815c694(param_1,&uStack_24);
  puVar1 = &uStack_24;
  if (param_1 == 0) {
    puVar1 = param_2;
  }
  return *puVar1;
}



/* Entry: 108157348; end: 1081573b7;  */

void FUN_108157348(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 uStack_28;
  
  FUN_1081573b8(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  func_0x000108156bd0(param_2 + 0x40,uVar1);
  FUN_108155404(&uStack_28);
  uVar1 = 0;
  if (*(long *)(param_2 + 0x40) != 0) {
    do {
      FUN_108159954();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1081573b8; end: 10815765f;  */

void FUN_1081573b8(undefined8 *param_1,long *param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  uVar4 = 1L << (param_5 & 0x3f);
  if ((uVar4 & *(uint *)(param_2 + 0x10)) == 0) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | (uint)uVar4;
    FUN_1081589bc(auStack_88,param_3,*param_2,1);
    plVar5 = param_2 + 0xc;
    lStack_a0 = param_2[0xd];
    lStack_a8 = *plVar5;
    lStack_98 = param_2[0xe];
    *plVar5 = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    uStack_90 = *(undefined8 *)(param_3 + 0x70);
    *(long **)(param_3 + 0x70) = &lStack_a8;
    lVar1 = *param_2;
    lStack_b0 = param_3;
    func_0x000108159ac0();
    FUN_108154e4c();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = param_4;
      func_0x000108155f94(param_4,*(undefined4 *)((long)param_2 + 0xc));
      if (lVar2 == 0) {
        if (((int)param_5 == 1) && ((int)param_2[2] != 0xd)) {
          lStack_d0 = 0;
          if (*(long *)(param_4 + 0x30) != 0) {
            do {
              func_0x000108159954();
              lStack_d0 = extraout_x8_00;
            } while (extraout_w11_00 != 0);
          }
        }
        else {
          lStack_d0 = 0;
        }
      }
      else {
        FUN_1081573b8(&lStack_d0);
      }
      lVar2 = lStack_d0;
      if ((int)param_2[2] == 0xd) {
        lVar7 = *param_2;
        lStack_d0 = 0;
        lStack_70 = lVar2;
        FUN_10818d904(&lStack_68,&lStack_70);
        FUN_108155268(&uStack_b8,param_3,lVar7,lVar1,&lStack_68,param_4);
        FUN_108155404(&lStack_68);
        plVar6 = &lStack_70;
      }
      else {
        lStack_d0 = 0;
        if ((*(uint *)(param_2 + 0x10) >> 2 & 1) == 0) {
          lStack_68 = lVar2;
          plVar6 = &lStack_68;
          func_0x000108159b04();
          FUN_10815f6f8();
        }
        else {
          lStack_68 = lVar2;
          plVar6 = &lStack_68;
          func_0x000108159b04();
          FUN_10815ff38();
        }
      }
      FUN_108155404(plVar6);
      FUN_108155404(&lStack_d0);
      uVar3 = uStack_b8;
    }
    uStack_b8 = 0;
    func_0x000108156bd0(param_2 + (param_5 & 0xffffffff) + 9,uVar3);
    FUN_108155404(&uStack_b8);
    *(undefined8 *)(lStack_b0 + 0x70) = uStack_90;
    lStack_c8 = lStack_a0;
    lStack_d0 = lStack_a8;
    lStack_c0 = lStack_98;
    lStack_a0 = 0;
    lStack_98 = 0;
    lStack_a8 = 0;
    FUN_1081597f8(plVar5,&lStack_d0);
    FUN_1081596e8(&lStack_d0);
    param_2[0xf] = param_2[0xd] - param_2[0xc] >> 3;
    func_0x000108159ab8();
    FUN_108158a14(auStack_88);
  }
  uVar3 = 0;
  if (param_2[(param_5 & 0xffffffff) + 9] != 0) {
    do {
      func_0x000108159954();
      uVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 108157660; end: 1081576bb;  */

long FUN_108157660(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if ((*(uint *)(param_1 + 0x80) >> 3 & 1) == 0) {
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 8;
    FUN_1081576bc(&uStack_28,param_1);
    uVar1 = uStack_28;
    uStack_28 = 0;
    FUN_108154d4c(param_1 + 0x58,uVar1);
    func_0x000108159994();
  }
  return param_1 + 0x58;
}



/* Entry: 1081576bc; end: 1081584ab;  */

void FUN_1081576bc(ulong *param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  ulong ***pppuVar10;
  ulong ***pppuVar11;
  ulong **ppuVar12;
  ulong ***pppuVar13;
  ulong ***pppuVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong **extraout_x8;
  ulong **extraout_x8_00;
  ulong **extraout_x8_01;
  ulong **extraout_x8_02;
  ulong **extraout_x8_03;
  ulong **ppuVar17;
  ulong **extraout_x8_04;
  ulong **extraout_x8_05;
  byte bVar18;
  code *pcVar19;
  ulong ***extraout_x9;
  ulong ***extraout_x9_00;
  ulong ***pppuVar20;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar21;
  int extraout_w12;
  int extraout_w12_00;
  ulong ***unaff_x19;
  undefined4 uVar22;
  ulong ***pppuVar23;
  ulong ***pppuVar24;
  ulong ***pppuVar25;
  ulong ***pppuVar26;
  ulong uStack_1e8;
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  ulong uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  ulong uStack_1b8;
  ulong **ppuStack_1b0;
  ulong **ppuStack_1a8;
  ulong **ppuStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  ulong *puStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [24];
  ulong **ppuStack_148;
  ulong **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong **ppuStack_128;
  ulong **ppuStack_120;
  ulong **ppuStack_118;
  undefined8 uStack_110;
  ulong **ppuStack_108;
  ulong **ppuStack_100;
  ulong **ppuStack_f8;
  ulong *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong **ppuStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1081589bc(auStack_160,param_3,*param_2,1);
  plVar21 = param_2 + 0xc;
  lStack_178 = param_2[0xd];
  puStack_180 = (ulong *)*plVar21;
  lStack_170 = param_2[0xe];
  *plVar21 = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uStack_168 = *(undefined8 *)(param_3 + 0x70);
  *(ulong ***)(param_3 + 0x70) = &puStack_180;
  *param_1 = 0;
  pcVar19 = (code *)param_2[5];
  uVar15 = param_2[6] & 1;
  lStack_188 = param_3;
  if (uVar15 != 0 || pcVar19 != (code *)0x0) {
    plVar1 = (long *)(param_3 + (param_2[6] >> 1));
    if (uVar15 != 0) {
      pcVar19 = *(code **)(*plVar1 + ((ulong)pcVar19 & 0xffffffff));
    }
    (*pcVar19)(&puStack_f0,plVar1,*param_2,param_2 + 3);
    func_0x000108159b4c();
    func_0x0001081599a8();
    func_0x000108159a3c();
  }
  uStack_190 = 0;
  lVar8 = *param_2;
  FUN_108154b58(lVar8,&DAT_10f30a8bb);
  iVar6 = (int)lVar8;
  FUN_10815c694();
  if (iVar6 != 0) {
    lVar8 = *param_2;
    FUN_108154b58(lVar8,&DAT_10f30a8b9);
    iVar6 = (int)lVar8;
    FUN_10815c694();
    if (iVar6 != 0) {
      uStack_198 = *param_1;
      *param_1 = 0;
      puStack_f0 = (ulong *)0x0;
      uStack_e8 = CONCAT44((undefined4)uStack_190,uStack_190._4_4_);
      FUN_108158554(&ppuStack_140,&puStack_f0);
      ppuStack_1a0 = ppuStack_140;
      ppuStack_140 = (ulong **)0x0;
      FUN_1081584ac(&ppuStack_120,&uStack_198,&ppuStack_1a0,1);
      ppuStack_120 = (ulong **)0x0;
      func_0x0001081599a8();
      func_0x000108159aa4();
      FUN_108159714(&ppuStack_1a0);
      FUN_1081597b8(&ppuStack_140);
      FUN_108154cb4(&uStack_198);
    }
  }
  puVar9 = (ulong *)*param_2;
  FUN_108154b58(puVar9,&UNK_10f47d027);
  FUN_108155f00();
  ppuStack_1b0 = (ulong **)*param_1;
  *param_1 = 0;
  if (puVar9 == (ulong *)0x0) {
    ppuStack_1b0 = (ulong **)0x0;
  }
  else {
    bVar3 = false;
    ppuStack_90 = &puStack_f0;
    uStack_88 = 0x800000000;
    pppuVar20 = (ulong ***)((long *)(*puVar9 & 0xfffffffffffffff8) + 1);
    pppuVar14 = pppuVar20 + *(long *)(*puVar9 & 0xfffffffffffffff8);
    for (; ppuVar12 = ppuStack_1b0, pppuVar20 != pppuVar14; pppuVar20 = pppuVar20 + 1) {
      pppuVar10 = pppuVar20;
      FUN_108154e4c();
      if (pppuVar10 != (ulong ***)0x0) {
        unaff_x19 = pppuVar10;
        func_0x000108159aec();
        FUN_108158a5c();
        pppuVar11 = unaff_x19;
        if ((unaff_x19 == (ulong ***)0x0) || (FUN_108158a80(), pppuVar11 != (ulong ***)0x1)) {
          func_0x000108159aec();
          FUN_108159fb8(param_3,1,pppuVar11,&UNK_10f47d062);
        }
        else {
          if (((ulong)*unaff_x19 & 7) == 0) {
            pbVar16 = (byte *)((long)unaff_x19 + 1);
          }
          else {
            pbVar16 = (byte *)(((ulong)*unaff_x19 & 0xfffffffffffffff8) + 8);
          }
          bVar18 = *pbVar16;
          if (bVar18 == 0x61) {
            unaff_x19 = (ulong ***)&UNK_10df02cc0;
          }
          else if (bVar18 == 0x73) {
            unaff_x19 = (ulong ***)&UNK_10df02cd8;
          }
          else {
            if (bVar18 != 0x69) {
              if (bVar18 != 0x6e) {
                if (bVar18 == 0x66) {
                  unaff_x19 = (ulong ***)&UNK_10df02ce4;
                  goto LAB_10815798c;
                }
                FUN_108159fb8(param_3,0,0,&UNK_10f47d075);
              }
              goto LAB_108157d20;
            }
            unaff_x19 = (ulong ***)&UNK_10df02ccc;
          }
LAB_10815798c:
          pppuVar11 = pppuVar10;
          FUN_108154b58(pppuVar10,"pt");
          FUN_108159b78(&ppuStack_f8,param_3,pppuVar11);
          if (ppuStack_f8 == (ulong **)0x0) {
            FUN_108159fb8(param_3,1,pppuVar10,&UNK_10f47d092);
          }
          else {
            iVar6 = *(int *)unaff_x19;
            uVar22 = *(undefined4 *)((long)unaff_x19 + 4);
            pppuVar11 = pppuVar10;
            FUN_108154b58(pppuVar10,&UNK_10f47d0ad);
            uVar7 = (uint)pppuVar11;
            ppuStack_120 = (ulong **)((ulong)ppuStack_120 & 0xffffffffffffff00);
            FUN_108158ab4();
            if ((int)uStack_88 == 0) {
              uVar22 = 0;
              uVar7 = (uint)(*(byte *)(unaff_x19 + 1) != uVar7);
              iVar6 = 1;
            }
            bVar18 = 2;
            if (uVar7 == 0) {
              bVar18 = 0;
            }
            if (bVar18 != (*(byte *)((long)ppuStack_f8 + 0x3e) & 3)) {
              *(byte *)((long)ppuStack_f8 + 0x3e) =
                   *(byte *)((long)ppuStack_f8 + 0x3e) & 0xfc | bVar18;
              FUN_10818a7f4(ppuStack_f8,1);
            }
            pppuVar11 = (ulong ***)0x58;
            __Znwm();
            pppuVar25 = pppuVar11 + 1;
            *(int *)pppuVar25 = 1;
            pppuVar11[3] = (ulong **)0x0;
            pppuVar11[4] = (ulong **)0x0;
            pppuVar11[2] = (ulong **)0x0;
            *(undefined2 *)(pppuVar11 + 5) = 0;
            *pppuVar11 = (ulong **)&PTR_SUB_110a28280;
            FUN_10818b15c(&ppuStack_120,0xff000000);
            func_0x000108159b18();
            pppuVar11[6] = extraout_x8;
            FUN_108158f04(&ppuStack_120);
            pppuVar26 = pppuVar11 + 10;
            *(undefined4 *)pppuVar26 = 0x42c80000;
            pppuVar23 = pppuVar11 + 8;
            *pppuVar23 = (ulong **)0x0;
            *(int *)(pppuVar11 + 7) = iVar6;
            pppuVar24 = pppuVar11 + 9;
            *pppuVar24 = (ulong **)0x0;
            ppuStack_120 = (ulong **)CONCAT71(ppuStack_120._1_7_,1);
            FUN_108158df4(pppuVar11[6],&ppuStack_120);
            if ((*(int *)(pppuVar11 + 7) != 5) &&
               (ppuVar12 = pppuVar11[6], *(int *)((long)ppuVar12 + 0x3c) != iVar6)) {
              *(int *)((long)ppuVar12 + 0x3c) = iVar6;
              FUN_10818a7f4(ppuVar12,1);
            }
            pppuVar13 = pppuVar10;
            FUN_108154b58(pppuVar10,&DAT_10f3dc193);
            FUN_108154e4c();
            FUN_108161330(pppuVar11,param_3,pppuVar13,pppuVar26);
            FUN_108154b58(pppuVar10,&DAT_10f3dc184);
            FUN_108154e4c();
            pppuVar13 = pppuVar11;
            FUN_108162b98(pppuVar11,param_3,pppuVar10,pppuVar24);
            if ((int)pppuVar13 != 0) {
              FUN_10818c15c(&ppuStack_120);
              func_0x000108159b18();
              ppuVar12 = *pppuVar23;
              *pppuVar23 = extraout_x8_00;
              FUN_108158f44(ppuVar12);
              FUN_108158f6c(&ppuStack_120);
              ppuStack_120 = (ulong **)CONCAT44(ppuStack_120._4_4_,3);
              func_0x000108158e10(*pppuVar23,&ppuStack_120);
            }
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppuVar25,0x10);
              if (bVar5) {
                *(int *)pppuVar25 = *(int *)pppuVar25 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            ppuStack_100 = (ulong **)pppuVar11;
            if ((pppuVar11[2] == pppuVar11[3]) && ((*(byte *)((long)pppuVar11 + 0x29) & 1) == 0)) {
              ppuStack_108 = (ulong **)pppuVar11;
              (*(code *)(*pppuVar11)[3])(0,pppuVar11);
            }
            else {
              ppuStack_108 = (ulong **)0x0;
              ppuStack_120 = (ulong **)pppuVar11;
              FUN_108155570(*(undefined8 *)(param_3 + 0x70),&ppuStack_120);
              FUN_108155920(&ppuStack_120);
            }
            FUN_108158af0(&ppuStack_108);
            ppuVar12 = ppuStack_f8;
            if (((pppuVar11[2] != pppuVar11[3]) || ((*(byte *)((long)pppuVar11 + 0x29) & 1) != 0))
               || (*(float *)pppuVar26 < 100.0)) {
              bVar5 = true;
            }
            else if (*(float *)pppuVar24 == 0.0) {
              bVar5 = *(float *)((long)pppuVar11 + 0x4c) != 0.0;
            }
            else {
              bVar5 = true;
            }
            ppuStack_100 = (ulong **)0x0;
            ppuStack_f8 = (ulong **)0x0;
            ppuStack_120 = ppuVar12;
            uStack_110 = CONCAT44(uStack_110._4_4_,uVar22);
            if ((int)uStack_88 < (int)(uStack_88._4_4_ >> 1)) {
              pppuVar10 = (ulong ***)(ppuStack_90 + (long)(int)uStack_88 * 3);
              ppuStack_120 = (ulong **)0x0;
              ppuStack_118 = (ulong **)0x0;
              *pppuVar10 = ppuVar12;
              pppuVar10[1] = (ulong **)pppuVar11;
              *(undefined4 *)(pppuVar10 + 2) = uVar22;
              unaff_x19 = pppuVar11;
              iVar6 = (int)uStack_88;
            }
            else {
              ppuStack_118 = (ulong **)pppuVar11;
              if ((int)uStack_88 == 0x7fffffff) goto LAB_1081581f0;
              uStack_138 = (ulong **)0x7fffffff;
              ppuStack_140 = (ulong **)0x18;
              unaff_x19 = &ppuStack_140;
              uVar15 = (ulong)((int)uStack_88 + 1);
              FUN_10840fe24(0x3ff8000000000000);
              ppuVar17 = ppuStack_118;
              ppuVar12 = ppuStack_120;
              iVar6 = (int)uStack_88;
              lVar8 = (long)(int)uStack_88;
              pppuVar10 = unaff_x19 + (long)(int)uStack_88 * 3;
              ppuStack_120 = (ulong **)0x0;
              ppuStack_118 = (ulong **)0x0;
              pppuVar10[1] = ppuVar17;
              *pppuVar10 = ppuVar12;
              *(undefined4 *)(pppuVar10 + 2) = (undefined4)uStack_110;
              if (iVar6 != 0) {
                _memcpy(unaff_x19,ppuStack_90,lVar8 * 0x18);
              }
              if ((uStack_88 & 0x100000000) != 0) {
                _free(ppuStack_90);
              }
              uVar15 = uVar15 / 0x18;
              if (0x7ffffffe < uVar15) {
                uVar15 = 0x7fffffff;
              }
              iVar6 = (int)uStack_88;
              uStack_88 = CONCAT44((int)uVar15 << 1,(int)uStack_88) | 0x100000000;
              ppuStack_90 = (ulong **)unaff_x19;
            }
            bVar3 = (bool)(bVar3 | bVar5);
            uStack_88 = CONCAT44(uStack_88._4_4_,iVar6 + 1);
            func_0x000108159a00();
            FUN_108158af0(&ppuStack_100);
          }
          FUN_108159010(&ppuStack_f8);
        }
      }
LAB_108157d20:
    }
    if ((int)uStack_88 == 0) {
      ppuStack_1b0 = (ulong **)0x0;
      ppuStack_1a8 = ppuVar12;
    }
    else if (bVar3) {
      ppuStack_f8 = (ulong **)0x0;
      if ((int)uStack_88 == 1) {
        ppuVar12 = (ulong **)0x0;
        pppuVar20 = (ulong ***)ppuStack_90;
        if ((ulong **)*ppuStack_90 != (ulong **)0x0) {
          do {
            func_0x000108159a5c();
            ppuVar12 = extraout_x8_01;
            pppuVar20 = extraout_x9;
          } while (extraout_w12 != 0);
        }
        pppuVar14 = (ulong ***)pppuVar20[1];
        ppuStack_120 = ppuVar12;
        if (pppuVar14 != (ulong ***)0x0) {
          do {
            func_0x000108159a5c();
            ppuVar12 = extraout_x8_02;
            pppuVar20 = extraout_x9_00;
          } while (extraout_w12_00 != 0);
        }
        uStack_110 = CONCAT44(uStack_110._4_4_,*(undefined4 *)(pppuVar20 + 2));
        ppuVar17 = (ulong **)0x0;
        ppuStack_118 = (ulong **)pppuVar14;
        if (ppuVar12 != (ulong **)0x0) {
          do {
            func_0x000108159954();
            ppuVar17 = extraout_x8_03;
          } while (extraout_w11 != 0);
        }
        ppuStack_100 = ppuVar17;
        func_0x000108159a98();
        func_0x000108159b24();
        FUN_108159640();
        func_0x0001081599d0();
        func_0x000108159a10();
        func_0x000108159a00();
      }
      else {
        ppuStack_120 = (ulong **)0x0;
        ppuStack_118 = (ulong **)0x0;
        uStack_110 = 0;
        FUN_1081561e8(&ppuStack_120);
        func_0x000108159b64();
        ppuVar12 = ppuStack_140;
        uVar4 = uStack_138;
        ppuStack_140 = ppuStack_120;
        uStack_138 = ppuStack_118;
        uStack_130 = uStack_110;
        for (; pppuVar14 != (ulong ***)0x0; pppuVar14 = pppuVar14 + -3) {
          ppuVar17 = *unaff_x19;
          ppuStack_120 = ppuStack_140;
          ppuStack_118 = uStack_138;
          uStack_110 = uStack_130;
          *unaff_x19 = (ulong **)0x0;
          uStack_138 = (ulong **)uVar4;
          ppuStack_140 = ppuVar12;
          ppuStack_100 = ppuVar17;
          func_0x000108159a98();
          func_0x000108156e9c(&ppuStack_120,&ppuStack_140);
          func_0x0001081599d0();
          func_0x000108159a10();
          unaff_x19 = unaff_x19 + 3;
          ppuVar12 = ppuStack_140;
          uVar4 = uStack_138;
          ppuStack_140 = ppuStack_120;
          uStack_138 = ppuStack_118;
          uStack_130 = uStack_110;
        }
        ppuStack_120 = (ulong **)0x0;
        ppuStack_118 = (ulong **)0x0;
        uStack_110 = 0;
        FUN_1081562f4(&ppuStack_128,&ppuStack_140);
        ppuVar12 = ppuStack_f8;
        ppuStack_f8 = ppuStack_128;
        ppuStack_128 = (ulong **)0x0;
        FUN_108159640(ppuVar12);
        FUN_1081564a4(&ppuStack_128);
        FUN_10815640c(&ppuStack_140);
        FUN_10815640c(&ppuStack_120);
      }
      ppuStack_148 = ppuStack_f8;
      ppuStack_128 = ppuStack_1b0;
      ppuStack_1b0 = (ulong **)0x0;
      ppuStack_f8 = (ulong **)0x0;
      FUN_108158930(&ppuStack_120,&ppuStack_128,&ppuStack_148,0);
      func_0x000108159b18();
      ppuStack_1a8 = extraout_x8_04;
      FUN_108159778(&ppuStack_120);
      FUN_108154cb4(&ppuStack_148);
      FUN_108154cb4(&ppuStack_128);
      FUN_108154cb4(&ppuStack_f8);
    }
    else {
      ppuStack_f8 = (ulong **)0x0;
      if ((int)uStack_88 == 1) {
        ppuStack_f8 = (ulong **)*ppuStack_90;
        *ppuStack_90 = (ulong *)0x0;
        func_0x000108159060(0);
      }
      else {
        ppuStack_120 = (ulong **)0x0;
        ppuStack_118 = (ulong **)0x0;
        uStack_110 = 0;
        FUN_108158b58(&ppuStack_120);
        func_0x000108159b64();
        for (; pppuVar14 != (ulong ***)0x0; pppuVar14 = pppuVar14 + -3) {
          uStack_138._4_4_ = (undefined4)((ulong)uStack_138 >> 0x20);
          ppuVar12 = *unaff_x19;
          *unaff_x19 = (ulong **)0x0;
          ppuStack_140 = ppuVar12;
          uStack_138 = (ulong **)CONCAT44(uStack_138._4_4_,*(undefined4 *)(unaff_x19 + 2));
          func_0x00010815933c(&ppuStack_120,&ppuStack_140);
          FUN_108159714(&ppuStack_140);
          unaff_x19 = unaff_x19 + 3;
        }
        FUN_108158bc0(&ppuStack_140,&ppuStack_120);
        func_0x000108159b24();
        func_0x000108159060();
        FUN_108159460(&ppuStack_140);
        FUN_1081594a0(&ppuStack_120);
      }
      ppuStack_140 = ppuStack_1b0;
      ppuStack_1b0 = (ulong **)0x0;
      ppuStack_100 = ppuStack_f8;
      ppuStack_f8 = (ulong **)0x0;
      FUN_1081584ac(&ppuStack_120,&ppuStack_140,&ppuStack_100,0);
      func_0x000108159b18();
      ppuStack_1a8 = extraout_x8_05;
      func_0x000108159aa4();
      FUN_108159714(&ppuStack_100);
      func_0x0001081599d0();
      FUN_108159714(&ppuStack_f8);
    }
    FUN_108158d88(&puStack_f0);
  }
  ppuStack_1a8 = (ulong **)0x0;
  func_0x0001081599a8();
  FUN_108154cb4(&ppuStack_1a8);
  FUN_108154cb4(&ppuStack_1b0);
  uVar7 = *(uint *)(param_2 + 7);
  if ((param_2[8] != 0) && ((uVar7 & 1) == 0)) {
    uStack_1b8 = *param_1;
    *param_1 = 0;
    do {
      func_0x000108159954();
    } while (extraout_w11_00 != 0);
    FUN_108158594(&puStack_f0,&uStack_1b8,auStack_1c0);
    func_0x000108159b4c();
    func_0x0001081599a8();
    func_0x000108159a34();
    FUN_108155404(auStack_1c0);
    FUN_108154cb4(&uStack_1b8);
  }
  lVar8 = *param_2;
  FUN_108154b58(lVar8,&UNK_10f47d037);
  FUN_108155f00();
  if (lVar8 != 0) {
    func_0x000108159a18();
    FUN_108169284(&ppuStack_120,&puStack_f0);
    ppuStack_120 = (ulong **)0x0;
    func_0x0001081599a8();
    func_0x000108159a08();
    FUN_108154cb4(auStack_1c8);
  }
  lVar8 = param_2[8];
  if ((lVar8 != 0) && ((uVar7 & 1) != 0)) {
    uStack_1d0 = *param_1;
    *param_1 = 0;
    param_2[8] = 0;
    lStack_1d8 = lVar8;
    FUN_108158594(&puStack_f0,&uStack_1d0,&lStack_1d8);
    func_0x000108159b4c();
    func_0x0001081599a8();
    func_0x000108159a34();
    FUN_108155404(&lStack_1d8);
    FUN_108154cb4(&uStack_1d0);
  }
  lVar8 = *param_2;
  FUN_108154b58(lVar8,&UNK_10f47d03a);
  FUN_108155f00();
  if (lVar8 != 0) {
    func_0x000108159a18();
    FUN_108169410(&ppuStack_120,&puStack_f0);
    ppuStack_120 = (ulong **)0x0;
    func_0x0001081599a8();
    func_0x000108159a08();
    FUN_108154cb4(auStack_1e0);
  }
  lVar8 = *param_2;
  func_0x000108159ac0();
  FUN_108154e4c();
  if (lVar8 != 0) {
    uStack_1e8 = *param_1;
    *param_1 = 0;
    FUN_10815a0b8(&puStack_f0,param_3,lVar8,&uStack_1e8);
    func_0x000108159b4c();
    func_0x0001081599a8();
    func_0x000108159a3c();
    FUN_108154cb4(&uStack_1e8);
  }
  *(undefined8 *)(lStack_188 + 0x70) = uStack_168;
  uStack_e8 = lStack_178;
  puStack_f0 = puStack_180;
  lStack_e0 = lStack_170;
  lStack_178 = 0;
  lStack_170 = 0;
  puStack_180 = (ulong *)0x0;
  FUN_1081597f8(plVar21,&puStack_f0);
  FUN_1081596e8(&puStack_f0);
  func_0x000108159ab8();
  FUN_108158a14(auStack_160);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_1081581f0:
  func_0x00010bdb1a68();
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x1081581f8);
  (*pcVar19)();
}



/* Entry: 1081584ac; end: 108158553;  */

void FUN_1081584ac(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *unaff_x23;
  long lVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = *param_2;
  if ((lVar2 == 0) || (lVar3 = *param_3, lVar3 == 0)) {
    *param_1 = 0;
  }
  else {
    puVar1 = param_1;
    func_0x000108159acc();
    *unaff_x23 = 0;
    *param_3 = 0;
    lStack_60 = lVar3;
    lStack_58 = lVar2;
    func_0x000108159b58();
    FUN_108187088();
    *param_1 = puVar1;
    FUN_108159714(&lStack_60);
    func_0x000108159994();
  }
  return;
}



/* Entry: 108158554; end: 108158593;  */

void FUN_108158554(undefined8 *param_1,undefined8 param_2)

{
  func_0x000108159a4c();
  func_0x00010818b50c();
  *param_1 = param_2;
  return;
}



/* Entry: 108158594; end: 10815860b;  */

void FUN_108158594(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 unaff_x20;
  undefined1 auStack_50 [16];
  
  if ((*param_2 == 0) || (*param_3 == 0)) {
    *param_1 = 0;
  }
  else {
    func_0x000108159a4c();
    func_0x000108159b38();
    func_0x000108159b58();
    FUN_10818da64();
    *param_1 = unaff_x20;
    FUN_108155404(auStack_50);
    func_0x000108159994();
  }
  return;
}



/* Entry: 10815860c; end: 1081588ef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10815860c(undefined8 *param_1,ulong *param_2,long param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  ulong auStack_88 [2];
  ulong *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  puVar5 = param_2;
  FUN_108157660();
  uVar8 = *puVar5;
  if (uVar8 != 0) {
    piVar1 = (int *)(uVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (((byte)param_2[7] >> 1 & 1) == 0) {
    uVar9 = param_2[0xf];
  }
  else {
    uVar9 = (long)(param_2[0xd] - param_2[0xc]) >> 3;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x70);
  uStack_70 = uVar8;
  func_0x000108159a4c();
  if (uVar8 != 0) {
    piVar1 = (int *)(uVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(puVar5 + 1) = 1;
  *puVar5 = (ulong)&PTR_SUB_110a282d0;
  uVar6 = param_2[0xc];
  puVar5[3] = param_2[0xd];
  puVar5[2] = uVar6;
  uVar6 = param_2[0xe];
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xc] = 0;
  uStack_68 = 0;
  puVar5[4] = uVar6;
  puVar5[5] = uVar8;
  puVar5[6] = uVar9;
  puVar5[7] = param_2[4];
  FUN_108154cb4(&uStack_68);
  auStack_88[1] = 0;
  puStack_78 = puVar5;
  FUN_108155570(uVar7,&puStack_78);
  FUN_108155920(&puStack_78);
  FUN_1081588f0(auStack_88 + 1);
  uVar9 = *param_2;
  FUN_108154b58(uVar9,&DAT_10f47d0b8);
  uVar8 = uVar9;
  FUN_108155444();
  if ((int)uVar8 == 1) {
    if (*(char *)(uVar9 + 1) != '\x01') {
LAB_10815875c:
      uVar8 = *param_2;
      FUN_108154b58(uVar8,&DAT_10f47d03d);
      uStack_68 = 0;
      FUN_108154b1c();
      if (uVar8 != 0) {
        if (uVar8 < 5) {
          uVar9 = *param_2;
          FUN_108154b58(uVar9,&UNK_10f47d040);
          iVar4 = (int)uVar9;
          uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
          func_0x000108155f24();
          uVar9 = uStack_70;
          if (-1 < iVar4) {
            param_5 = iVar4;
          }
          if (-1 < param_5) {
            uStack_70 = 0;
            auStack_88[0] = uVar9;
            FUN_108156000(auStack_90,param_4,param_3);
            FUN_108158930(&uStack_68,auStack_88,auStack_90,
                          *(undefined4 *)(&UNK_10df02cac + uVar8 * 4));
            uVar8 = uStack_70;
            uStack_70 = uStack_68;
            uStack_68 = 0;
            FUN_108159640(uVar8);
            FUN_108159778(&uStack_68);
            func_0x000108159a84();
            FUN_108154cb4(auStack_88);
          }
        }
        else {
          FUN_108159fb8(param_3,1,0,&UNK_10f47d043);
        }
      }
      uStack_98 = uStack_70;
      uStack_70 = 0;
      FUN_108154898(param_1,param_3,*param_2,&uStack_98);
      func_0x000108159994();
      goto LAB_108158854;
    }
  }
  else {
    uVar8 = *param_2;
    FUN_108154b58(uVar8,&UNK_10f47d0bb);
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    FUN_108158ab4();
    if ((uVar8 & 1) == 0) goto LAB_10815875c;
  }
  *param_1 = 0;
LAB_108158854:
  FUN_108154cb4(&uStack_70);
  return;
}



/* Entry: 1081588f0; end: 10815892f;  */

void FUN_1081588f0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108158930; end: 1081589bb;  */

void FUN_108158930(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *unaff_x23;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = *param_2;
  if ((lVar2 == 0) || (*param_3 == 0)) {
    *param_1 = 0;
  }
  else {
    puVar1 = param_1;
    func_0x000108159acc();
    *unaff_x23 = 0;
    lStack_50 = *param_3;
    *param_3 = 0;
    lStack_48 = lVar2;
    func_0x000108159b58();
    FUN_108189c8c();
    *param_1 = puVar1;
    FUN_108154cb4(&lStack_50);
    func_0x000108159994();
  }
  return;
}



/* Entry: 1081589bc; end: 108158a13;  */

long * FUN_1081589bc(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_2 + 0x78);
  *param_1 = param_2;
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = param_4;
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar2 != (long *)0x0) {
    FUN_10815a578(param_1,plVar2);
    (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(*param_1 + 0x78),(int)param_1[2]);
  }
  return param_1;
}



/* Entry: 108158a14; end: 108158a5b;  */

long * FUN_108158a14(long *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined8 *)(*param_1 + 0x78),(int)param_1[2]);
    *(long *)(*param_1 + 0x78) = param_1[1];
  }
  return param_1;
}



/* Entry: 108158a5c; end: 108158a7f;  */

undefined8 FUN_108158a5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_108158dd8();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108158a80; end: 108158ab3;  */

byte * FUN_108158a80(ulong *param_1)

{
  byte *pbVar1;
  
  if ((*param_1 & 7) == 5) {
    return *(byte **)(*param_1 & 0xfffffffffffffff8);
  }
  if ((*param_1 & 7) == 0) {
    pbVar1 = (byte *)((long)param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__strlen_11034cbe8)(pbVar1);
    return pbVar1;
  }
  return (byte *)0x0;
}


