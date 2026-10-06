/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10838a06c; end: 10838a0cb;  */

void FUN_10838a06c(long *param_1,uint param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  bVar2 = *(char *)((long)param_1 + 0x1c) == '\x04';
  lVar4 = *param_1;
  plVar3 = param_1;
  func_0x0001083601b4();
  uVar1 = *(uint *)(param_1 + 3);
  *(uint *)(param_3 + 1) = uVar1 >> bVar2;
  *param_3 = (lVar4 + (long)plVar3 * (ulong)param_2) -
             (((long)(int)param_1[1] << bVar2) + (long)*(int *)((long)param_1 + 0xc) * (ulong)uVar1)
  ;
  return;
}



/* Entry: 10838a0cc; end: 10838a0cf;  */

undefined8 * FUN_10838a0cc(undefined8 *param_1)

{
  FUN_10828dbb8(param_1 + 0x3b);
  FUN_10828dbb8(param_1 + 0x37);
  FUN_10828dbb8(param_1 + 0x33);
  FUN_10828dbb8(param_1 + 0x2f);
  FUN_10828dbb8(param_1 + 0x2b);
  FUN_10821a944(param_1 + 0x1d);
  FUN_10821a944(param_1 + 0x12);
  FUN_10810a400(param_1 + 5);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10838a0d0; end: 10838a0e3;  */

void FUN_10838a0d0(void)

{
  FUN_10838a1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10838a0e4; end: 10838a13f;  */

void FUN_10838a0e4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108152238();
  while (0 < param_5) {
    _memset(lVar1,param_6,(long)param_4);
    lVar1 = lVar1 + *(long *)(param_1 + 8);
    param_5 = param_5 + -1;
  }
  return;
}



/* Entry: 10838a140; end: 10838a1cf;  */

void FUN_10838a140(long *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined2 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010838a16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_113254e88)
            (*param_1 + param_1[1] * (long)param_3 + (long)(param_2 << 1),param_6,param_4);
  return;
}



/* Entry: 10838a1d0; end: 10838a22f;  */

undefined8 * FUN_10838a1d0(undefined8 *param_1)

{
  FUN_10828dbb8(param_1 + 0x3b);
  FUN_10828dbb8(param_1 + 0x37);
  FUN_10828dbb8(param_1 + 0x33);
  FUN_10828dbb8(param_1 + 0x2f);
  FUN_10828dbb8(param_1 + 0x2b);
  FUN_10821a944(param_1 + 0x1d);
  FUN_10821a944(param_1 + 0x12);
  FUN_10810a400(param_1 + 5);
  *param_1 = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + 1);
  return param_1;
}



/* Entry: 10838a230; end: 10838a527;  */

undefined8 * FUN_10838a230(long param_1)

{
  FUN_10828dbb8(param_1 + -0x31);
  FUN_10828dbb8(param_1 + -0x51);
  FUN_10828dbb8(param_1 + -0x71);
  FUN_10828dbb8(param_1 + -0x91);
  FUN_10828dbb8(param_1 + -0xb1);
  FUN_10821a944(param_1 + -0x121);
  FUN_10821a944(param_1 + -0x179);
  FUN_10810a400(param_1 + -0x1e1);
  *(undefined8 *)(param_1 + -0x209) = &PTR_DAT_110a3d198;
  func_0x000108262b94(param_1 + -0x201);
  return (undefined8 *)(param_1 + -0x209);
}



/* Entry: 10838a528; end: 10838a55f;  */

bool FUN_10838a528(uint param_1)

{
  long unaff_x19;
  
  func_0x00010838a744();
  if ((1 < param_1) && ((*(byte *)(unaff_x19 + 0xa1) & 1) == 0)) {
    func_0x00010838a704();
  }
  return param_1 != 0;
}



/* Entry: 10838a560; end: 10838a61f;  */

undefined4 FUN_10838a560(long *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = (undefined4 *)*param_1;
  if (((ulong)puVar2 & 3) == 0) {
    lVar3 = param_1[1];
    if ((ulong)(lVar3 - (long)puVar2) < 4) {
      if ((*(byte *)((long)param_1 + 0xa1) & 1) == 0) goto LAB_10838a5ac;
    }
    else if ((*(byte *)((long)param_1 + 0xa1) & 1) == 0) {
      uVar1 = *puVar2;
      *param_1 = (long)(puVar2 + 1);
      return uVar1;
    }
  }
  else if ((*(byte *)((long)param_1 + 0xa1) & 1) == 0) {
    lVar3 = param_1[1];
LAB_10838a5ac:
    *param_1 = lVar3;
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
    return 0;
  }
  return 0;
}



/* Entry: 10838a620; end: 10838a703;  */

bool FUN_10838a620(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010838a49c(param_1,param_3);
  if ((param_3 != 0) && (param_1 != 0)) {
    _memcpy(param_2,param_1,param_3);
  }
  return param_1 != 0;
}



/* Entry: 10838a704; end: 10838a793;  */

void FUN_10838a704(void)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = unaff_x19[1];
  *(undefined1 *)((long)unaff_x19 + 0xa1) = 1;
  return;
}



/* Entry: 10838a794; end: 10838a8cf;  */

undefined8 * FUN_10838a794(long *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  int *piStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 != 0) {
    plVar12 = (long *)param_1[1];
    plVar8 = param_1 + 2;
    func_0x0001078bdb50();
    if (((plVar8 <= plVar12) && (0 < (int)param_1[4])) && (0 < *(int *)((long)param_1 + 0x24))) {
      uVar1 = *(uint *)(param_1 + 5);
      uVar9 = (ulong)uVar1;
      uVar2 = *(uint *)((long)param_1 + 0x2c);
      uVar11 = (ulong)uVar2;
      FUN_108219ff8();
      piStack_68 = (int *)0x0;
      uStack_60 = CONCAT44(param_3,param_2);
      puVar10 = &uStack_50;
      uStack_50 = uVar9;
      uStack_48 = uVar11;
      func_0x00010821b838(puVar10,&piStack_68);
      if ((int)puVar10 == 0) {
        return puVar10;
      }
      lVar3 = *param_1;
      lVar4 = param_1[1];
      iVar7 = (int)param_1 + 0x10;
      func_0x00010835c63c();
      *param_1 = lVar3 + lVar4 * (ulong)-(uVar2 & (int)uVar2 >> 0x1f) +
                 (long)(int)-((uVar1 & (int)uVar1 >> 0x1f) * iVar7);
      uStack_58 = CONCAT44(uStack_48._4_4_ - uStack_50._4_4_,(int)uStack_48 - (int)uStack_50);
      piStack_68 = (int *)param_1[2];
      if (piStack_68 != (int *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
          if (bVar6) {
            *piStack_68 = *piStack_68 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_60 = param_1[3];
      func_0x0001078bddd4(param_1 + 2,&piStack_68);
      FUN_10810a400(&piStack_68);
      param_1[5] = uStack_50;
      return puVar10;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 10838a8d0; end: 10838a953;  */

undefined8 * FUN_10838a8d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_31;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_110a3f5e0;
  for (lVar2 = 0; lVar2 < *(int *)((long)param_1 + 0xc); lVar2 = lVar2 + 1) {
    func_0x00010838aa38(param_1[3] + lVar1,&uStack_31);
    lVar1 = lVar1 + 0x10;
  }
  FUN_10840f740(param_1 + 4);
  FUN_108383924(param_1 + 3);
  return param_1;
}



/* Entry: 10838a954; end: 10838a957;  */

undefined8 * FUN_10838a954(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_31;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_110a3f5e0;
  for (lVar2 = 0; lVar2 < *(int *)((long)param_1 + 0xc); lVar2 = lVar2 + 1) {
    func_0x00010838aa38(param_1[3] + lVar1,&uStack_31);
    lVar1 = lVar1 + 0x10;
  }
  FUN_10840f740(param_1 + 4);
  FUN_108383924(param_1 + 3);
  return param_1;
}



/* Entry: 10838a958; end: 10838a96b;  */

void FUN_10838a958(void)

{
  FUN_10838a8d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10838a96c; end: 10838a98f;  */

void FUN_10838a96c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = 4;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 0x10) << 1;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  uVar3 = 0;
  if ((long)iVar2 != 0) {
    uVar3 = *puVar1;
    *puVar1 = 0;
    FUN_1084107a4(uVar3,(long)iVar2 << 4);
  }
  uVar4 = *puVar1;
  *puVar1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar4);
  return;
}



/* Entry: 10838a990; end: 10838a9c7;  */

void FUN_10838a990(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    FUN_1084107a4(uVar1,param_2 << 4);
  }
  uVar2 = *param_1;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar2);
  return;
}



/* Entry: 10838a9c8; end: 10838aaf3;  */

void FUN_10838a9c8(long param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  
  piVar4 = *(int **)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0xc);
  piVar5 = piVar4;
  for (lVar6 = (long)iVar1 << 4; piVar3 = piVar4 + (long)iVar1 * 4, lVar6 != 0;
      lVar6 = lVar6 + -0x10) {
    piVar3 = piVar5;
    if (*piVar5 == 0) goto LAB_10838aa04;
    piVar5 = piVar5 + 4;
  }
LAB_10838aa28:
  *(int *)(param_1 + 0xc) = (int)((ulong)((long)piVar3 - (long)piVar4) >> 4);
  return;
LAB_10838aa04:
  while (piVar2 = piVar5, piVar5 = piVar2 + 4, piVar5 != piVar4 + (long)iVar1 * 4) {
    if (*piVar5 != 0) {
      uVar7 = *(undefined8 *)piVar5;
      *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar2 + 6);
      *(undefined8 *)piVar3 = uVar7;
      piVar3 = piVar3 + 4;
    }
  }
  piVar4 = *(int **)(param_1 + 0x18);
  goto LAB_10838aa28;
}



/* Entry: 10838aaf4; end: 10838ab4b;  */

long FUN_10838aaf4(long param_1)

{
  func_0x00010838ab28(param_1 + 0x28);
  FUN_10838abac(param_1 + 0x10);
  FUN_10838abf8(param_1 + 8);
  return param_1;
}



/* Entry: 10838ab4c; end: 10838ab5f;  */

void FUN_10838ab4c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -8;
      lVar2 = lVar1 + lVar2 * 8;
      do {
        lVar2 = lVar2 + -8;
        FUN_10811e834(lVar2);
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10838ab60; end: 10838abab;  */

void FUN_10838ab60(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -8;
      lVar1 = param_2 + lVar1 * 8;
      do {
        lVar1 = lVar1 + -8;
        FUN_10811e834(lVar1);
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 10838abac; end: 10838abf7;  */

long * FUN_10838abac(long *param_1)

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



/* Entry: 10838abf8; end: 10838adcf;  */

long * FUN_10838abf8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108375e94();
  }
  return param_1;
}



/* Entry: 10838add0; end: 10838adff;  */

long * FUN_10838add0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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
  return (long *)(param_1 + 8);
}



/* Entry: 10838ae00; end: 10838af87;  */

void FUN_10838ae00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6)

{
  long *plVar1;
  long *in_x5;
  long *in_x6;
  long lVar2;
  long lVar3;
  undefined1 auStack_f0 [104];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long lStack_60;
  int iStack_58;
  
  iStack_58 = 0;
  if (param_6 != 0) {
    iStack_58 = *(int *)(param_6 + 0xc60);
    *(int *)(param_6 + 0xc60) = iStack_58 + 1;
    *(int *)(*(long *)(param_6 + 0xc40) + 0x58) = *(int *)(*(long *)(param_6 + 0xc40) + 0x58) + 1;
  }
  lStack_60 = param_6;
  if (in_x5 == (long *)0x0) {
    lVar2 = 0;
    func_0x00010838c098();
    lVar3 = 0;
    while ((lVar2 < *(int *)(param_5 + 0xc) &&
           ((in_x6 == (long *)0x0 ||
            (plVar1 = in_x6, (**(code **)(*in_x6 + 0x10))(), ((ulong)plVar1 & 1) == 0))))) {
      FUN_10838b2b8(*(long *)(param_5 + 0x18) + lVar3,auStack_f0);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    }
  }
  else {
    FUN_10833cdf0(param_6);
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = param_1;
    uStack_6c = param_2;
    uStack_68 = param_3;
    uStack_64 = param_4;
    (**(code **)(*in_x5 + 0x28))(in_x5,&uStack_70,&lStack_88);
    lVar2 = 0;
    func_0x00010838c098();
    while ((lVar2 < (int)((ulong)(lStack_80 - lStack_88) >> 2) &&
           ((in_x6 == (long *)0x0 ||
            (plVar1 = in_x6, (**(code **)(*in_x6 + 0x10))(), ((ulong)plVar1 & 1) == 0))))) {
      FUN_10838b2b8(*(long *)(param_5 + 0x18) + (long)*(int *)(lStack_88 + lVar2 * 4) * 0x10,
                    auStack_f0);
      lVar2 = lVar2 + 1;
    }
    func_0x000107c27a18(&lStack_88);
  }
  FUN_10815b978(&lStack_60);
  return;
}



/* Entry: 10838af88; end: 10838b017;  */

void FUN_10838af88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_b0 [32];
  undefined4 uStack_90;
  
  FUN_10838b018(auStack_b0,param_1,param_2,param_3,param_4);
  lVar1 = 0;
  for (lVar2 = 0; lVar2 < *(int *)(param_2 + 0xc); lVar2 = lVar2 + 1) {
    uStack_90 = (undefined4)lVar2;
    FUN_10838b8cc(*(long *)(param_2 + 0x18) + lVar1,auStack_b0);
    lVar1 = lVar1 + 0x10;
  }
  FUN_10838b158(auStack_b0);
  return;
}



/* Entry: 10838b018; end: 10838b0db;  */

undefined8 *
FUN_10838b018(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_4;
  param_1[3] = param_5;
  FUN_10810c9b4((long)param_1 + 0x24);
  *(undefined4 *)(param_1 + 10) = 0x48;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar3 = uRam0000000113254e40;
  uVar2 = uRam0000000113254e38;
  uVar1 = uRam0000000113254e30;
  uVar4 = uRam0000000113254e20;
  *(undefined8 *)((long)param_1 + 0x2c) = uRam0000000113254e28;
  *(undefined8 *)((long)param_1 + 0x24) = uVar4;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x34) = uVar1;
  *(undefined8 *)((long)param_1 + 0x44) = uVar3;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_50 = uRam0000000113254e28;
  uStack_58 = uRam0000000113254e20;
  uStack_40 = uRam0000000113254e38;
  uStack_48 = uRam0000000113254e30;
  uStack_38 = uRam0000000113254e40;
  FUN_10838b0dc(param_1 + 10,&uStack_78);
  return param_1;
}



/* Entry: 10838b0dc; end: 10838b157;  */

void FUN_10838b0dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x00010838b124();
  if (*(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 0x48 + -0x48,param_2,0x48);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10838b124);
  (*pcVar1)();
}



/* Entry: 10838b158; end: 10838b1b7;  */

long FUN_10838b158(long param_1)

{
  while (*(int *)(param_1 + 100) != 0) {
    FUN_10838b1b8(param_1);
  }
  while (*(int *)(param_1 + 0x7c) != 0) {
    FUN_10838b24c(param_1,param_1);
  }
  FUN_10840f118(param_1 + 0x68);
  FUN_10840f118(param_1 + 0x50);
  return param_1;
}



/* Entry: 10838b1b8; end: 10838b24b;  */

undefined4 FUN_10838b1b8(long param_1)

{
  int iVar1;
  code *pcVar2;
  int iStack_78;
  undefined4 uStack_74;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    _memcpy(&iStack_78,*(long *)(param_1 + 0x58) + (long)iVar1 * 0x48 + -0x48,0x48);
    *(int *)(param_1 + 100) = iVar1 + -1;
    while( true ) {
      if (iStack_78 < 1) break;
      iStack_78 = iStack_78 + -1;
      FUN_10838b24c(param_1,(ulong)&iStack_78 | 4);
    }
    iStack_78 = iStack_78 + -1;
    func_0x00010838b298(param_1,(ulong)&iStack_78 | 4);
    return uStack_74;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10838b24c);
  (*pcVar2)();
}



/* Entry: 10838b24c; end: 10838b2b7;  */

void FUN_10838b24c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar4 = *param_2;
    puVar2 = (undefined8 *)
             (*(long *)(param_1 + 0x10) +
             (long)*(int *)(*(long *)(param_1 + 0x70) + (long)*(int *)(param_1 + 0x7c) * 4 + -4) *
             0x10);
    puVar2[1] = param_2[1];
    *puVar2 = uVar4;
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 != 0) {
      *(undefined1 *)
       (*(long *)(param_1 + 0x18) + (long)*(int *)(*(long *)(param_1 + 0x70) + (long)iVar1 * 4 + -4)
       ) = 0;
      *(int *)(param_1 + 0x7c) = iVar1 + -1;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10838b298);
  (*pcVar3)();
}



/* Entry: 10838b2b8; end: 10838b8cb;  */

/* WARNING: Possible PIC construction at 0x00010833e2e4: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10838b2b8(long *******param_1,long *******param_2,long param_3,undefined8 param_4)

{
  long ******pppppplVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 *puVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  undefined8 uVar14;
  long lVar15;
  long *******ppppppplVar16;
  long *****UNRECOVERED_JUMPTABLE_00;
  long ******pppppplVar17;
  uint uVar18;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  undefined8 *extraout_x8_06;
  long *extraout_x8_07;
  float *extraout_x8_08;
  undefined8 *extraout_x8_09;
  float *extraout_x8_10;
  long extraout_x8_11;
  long *******extraout_x8_12;
  undefined8 extraout_x8_13;
  long extraout_x8_14;
  float *pfVar19;
  long *******unaff_x19;
  long *******unaff_x20;
  long *******unaff_x21;
  int iVar20;
  long *******unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_88 [8];
  long ******pppppplStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long ******pppppplStack_60;
  long *******ppppppplStack_58;
  
  uVar9 = SBORROW4(*(int *)param_1 + -1,0x28);
  switch(*(int *)param_1 + -1) {
  case 0:
    ppppppplVar12 = (long *******)param_2[8];
    iVar20 = *(int *)(ppppppplVar12[0x188] + 0xb);
    if (iVar20 < 1) {
      if (1 < *(int *)(ppppppplVar12 + 0x187)) {
        (*(code *)(*ppppppplVar12)[0xf])(ppppppplVar12);
        *(int *)(ppppppplVar12 + 0x18c) = *(int *)(ppppppplVar12 + 0x18c) + -1;
        FUN_10833c008(ppppppplVar12);
        UNRECOVERED_JUMPTABLE_00 = (*ppppppplVar12)[0x10];
        goto LAB_1083422f4;
      }
    }
    else {
      *(int *)(ppppppplVar12 + 0x18c) = *(int *)(ppppppplVar12 + 0x18c) + -1;
      *(int *)(ppppppplVar12[0x188] + 0xb) = iVar20 + -1;
    }
    return ppppppplVar12;
  case 1:
    pppppplVar13 = param_2[8];
    *(int *)(pppppplVar13 + 0x18c) = *(int *)(pppppplVar13 + 0x18c) + 1;
    *(int *)(pppppplVar13[0x188] + 0xb) = *(int *)(pppppplVar13[0x188] + 0xb) + 1;
    break;
  case 2:
    FUN_10838c08c();
    ppppppplStack_58 = (long *******)extraout_x8_06[1];
    pppppplStack_60 = (long ******)*extraout_x8_06;
    FUN_10833c3ec();
    break;
  case 3:
    FUN_10838c08c();
    iVar20 = (int)param_1;
    lVar15 = *extraout_x8_07;
    puVar11 = &stack0xffffffffffffffc0;
    func_0x000108341e84();
    if (lVar15 != 0) {
      FUN_10833cdf0(unaff_x19);
      func_0x000108341f64();
      func_0x00010814000c(&stack0xffffffffffffffc0,unaff_x20);
      iVar20 = (int)puVar11;
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000108341f24();
        func_0x000108342384();
        goto LAB_10833cdd4;
      }
    }
    func_0x000108342034((*unaff_x19)[0xe]);
    (*extraout_x8)();
    func_0x000108341f24();
    func_0x00010833c2d0(unaff_x19);
    if (iVar20 != 0) {
      func_0x000108342034();
      FUN_10833ceac();
    }
LAB_10833cdd4:
    return (long *******)(ulong)(*(int *)(unaff_x19 + 0x18c) - 1);
  case 4:
    pppppplVar13 = param_1[1];
    param_1 = (long *******)param_2[8];
    FUN_10816eab0(auStack_88,param_2);
    FUN_1081600e0(&pppppplStack_60,auStack_88,pppppplVar13);
    func_0x00010833e38c(param_1,&pppppplStack_60);
    break;
  case 5:
    ppppppplVar12 = param_1 + 1;
    param_1 = (long *******)param_2[8];
    FUN_10835e5d0(&pppppplStack_60,param_2,*ppppppplVar12);
    func_0x00010833e3b8(param_1,&pppppplStack_60);
    break;
  case 6:
    FUN_10838c08c();
    if ((*extraout_x8_10 == 0.0) && (extraout_x8_10[1] == 0.0)) {
      return param_1;
    }
    func_0x000108342320();
    func_0x00010834225c(param_1[0x188] + 3);
    FUN_10835e73c();
    func_0x000108342108();
    UNRECOVERED_JUMPTABLE_00 = (*param_1)[0x13];
    func_0x00010834225c(param_1);
    goto LAB_108342308;
  case 7:
    FUN_10838c08c();
    bVar8 = false;
    if ((*extraout_x8_08 == 1.0) && (bVar8 = false, !NAN(extraout_x8_08[1]))) {
      bVar8 = extraout_x8_08[1] == 1.0;
    }
    if (bVar8) {
      return param_1;
    }
    func_0x00010833c27c();
    func_0x00010834225c(param_1[0x188] + 3);
    FUN_10835e868();
    func_0x000108342108();
    UNRECOVERED_JUMPTABLE_00 = (*param_1)[0x14];
    func_0x00010834225c(param_1);
LAB_108342308:
                    /* WARNING: Could not recover jumptable at 0x000108342310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  case 8:
    FUN_10838c08c();
    pppppplVar13 = (long ******)&pppppplStack_60;
    unaff_x29 = &stack0xfffffffffffffff0;
    ppppppplVar12 = extraout_x8_12;
    func_0x000108341e84();
    func_0x0001081420b8();
    if (((ulong)ppppppplVar12 & 1) != 0) {
      return ppppppplVar12;
    }
    func_0x00010818d67c(&pppppplStack_60,unaff_x20);
    unaff_x30 = 0x10833e2e8;
    param_1 = unaff_x19;
    goto SUB_10833e2f0;
  case 9:
    FUN_10838c08c();
    pppppplVar13 = (long ******)register0x00000008;
SUB_10833e2f0:
    *(long ********)((long)pppppplVar13 + -0x20) = unaff_x20;
    *(long ********)((long)pppppplVar13 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppplVar13 + -0x10) = unaff_x29;
    *(undefined8 *)((long)pppppplVar13 + -8) = unaff_x30;
    func_0x000108341d9c();
    func_0x00010833e31c();
    UNRECOVERED_JUMPTABLE_00 = (*unaff_x20)[0x11];
    func_0x000108341e90();
                    /* WARNING: Could not recover jumptable at 0x00010833e318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  case 10:
    FUN_10838c08c();
    func_0x00010838c110();
    ppppppplVar12 = &pppppplStack_80;
    func_0x000108342398();
    func_0x00010833c27c();
    if ((*(byte *)((long)unaff_x22 + 0xe) >> 1 & 1) == 0) {
      FUN_10816eab0(&pppppplStack_80,unaff_x21[0x188] + 3);
      FUN_10827a0d8();
      param_1 = ppppppplVar12;
      if ((int)ppppppplVar12 != 0) {
        ppppppplVar12 = unaff_x22;
        FUN_1083773e8();
        if ((int)ppppppplVar12 != 0) goto LAB_10833e670;
        uStack_68 = 0;
        plStack_70 = (long *)0x0;
        ppppppplStack_58 = (long *******)0x0;
        pppppplStack_60 = (long ******)0x0;
        uStack_78 = 0;
        pppppplStack_80 = (long ******)0x0;
        ppppppplVar12 = unaff_x22;
        FUN_1083777d4();
        if ((int)ppppppplVar12 != 0) {
          FUN_108384c90(&pppppplStack_80,&stack0xffffffffffffffc0);
          goto LAB_10833e670;
        }
        func_0x0001083777e0();
        param_1 = unaff_x22;
        if (((ulong)unaff_x22 & 1) != 0) goto LAB_10833e670;
      }
    }
    func_0x0001083423c0((*unaff_x21)[0x30]);
    unaff_x21 = param_1;
LAB_10833e670:
    func_0x000108342298();
    return unaff_x21;
  case 0xb:
    FUN_10838c08c();
    func_0x00010838c110();
    func_0x00010833c27c();
    lVar15 = 0x170;
    if (*(int *)(param_2 + 6) != 1) {
      lVar15 = 0x178;
    }
                    /* WARNING: Could not recover jumptable at 0x00010833e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)*param_1 + lVar15))(param_1,param_2,param_3,param_4);
    return param_1;
  case 0xc:
    FUN_10838c08c();
    func_0x00010838c110();
    func_0x000108342398();
    FUN_1082ffd68();
    if ((int)param_2 != 0) {
      func_0x00010833c27c();
      FUN_1082d8624();
      func_0x000108341f64();
      func_0x000108342298((*unaff_x21)[0x2e]);
      param_2 = unaff_x21;
    }
    return param_2;
  case 0xd:
    FUN_10838c08c();
    func_0x000108341f70();
    func_0x00010833c27c();
                    /* WARNING: Could not recover jumptable at 0x00010833e884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*unaff_x21)[0x32])();
    return unaff_x21;
  case 0xe:
    FUN_10838c08c();
    pppppplStack_60 = (long ******)*extraout_x8_04;
    if (pppppplStack_60 != (long ******)0x0) {
      pppppplVar13 = pppppplStack_60 + 1;
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppplVar13,0x10);
        if (bVar8) {
          *(int *)pppppplVar13 = *(int *)pppppplVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_10833e6b8();
    param_1 = &pppppplStack_60;
    func_0x000106f47224(param_1);
    break;
  case 0xf:
    ppppppplVar12 = (long *******)param_2[8];
    func_0x00010833c27c();
    UNRECOVERED_JUMPTABLE_00 = (*ppppppplVar12)[0x33];
LAB_1083422f4:
                    /* WARNING: Could not recover jumptable at 0x0001083422f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_00)(ppppppplVar12);
    return ppppppplVar12;
  case 0x10:
    pppppplVar13 = param_1[1];
    ppppppplVar12 = (long *******)param_2[8];
    if (*(float *)(pppppplVar13 + 10) < *(float *)(pppppplVar13 + 0xb)) {
      bVar8 = false;
      if ((*(float *)((long)pppppplVar13 + 100) != 0.0) &&
         (bVar8 = false,
         !NAN(*(float *)((long)pppppplVar13 + 0x54)) && !NAN(*(float *)((long)pppppplVar13 + 0x5c)))
         ) {
        bVar8 = *(float *)((long)pppppplVar13 + 0x54) < *(float *)((long)pppppplVar13 + 0x5c);
      }
      if (bVar8) {
                    /* WARNING: Could not recover jumptable at 0x000108340e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*ppppppplVar12)[0x1b])
                  (ppppppplVar12,pppppplVar13 + 10,*(int *)(pppppplVar13 + 0xd) != 0);
        return ppppppplVar12;
      }
    }
    return ppppppplVar12;
  case 0x11:
    ppppppplVar12 = (long *******)*param_1[1];
    iVar20 = *(int *)(param_1[1] + 3);
    param_1 = (long *******)param_2[8];
    if (param_2[10] != (long ******)0x0) {
      if (param_2[10][iVar20] == (long *****)0x0) {
        return param_1;
      }
      func_0x000108341c9c();
      unaff_x22 = param_1;
      if (ppppppplVar12 != (long *******)0x0) {
        func_0x0001081420b8();
        unaff_x22 = unaff_x21;
      }
      UNRECOVERED_JUMPTABLE_00 = (*unaff_x20)[0x2b];
      func_0x000108341e90();
LAB_108341fe4:
                    /* WARNING: Could not recover jumptable at 0x000108341fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE_00)();
      return unaff_x22;
    }
    UNRECOVERED_JUMPTABLE_00 = param_2[9][iVar20];
    goto code_r0x00010838b89c;
  case 0x12:
    FUN_10838c08c();
    if (*(long *)(extraout_x8_11 + 8) != 0) {
      NEON_scvtf(*(undefined8 *)(*(long *)(extraout_x8_11 + 8) + 0x20),4);
      FUN_10833ed1c();
    }
    return param_1;
  case 0x13:
    FUN_10838c08c();
    pppppplStack_60 = *(long *******)(extraout_x8_14 + 0x18);
    ppppppplStack_58 = *(long ********)(extraout_x8_14 + 0x28);
    FUN_10833ebb0();
    break;
  case 0x14:
    FUN_10838c08c();
    uVar14 = *extraout_x8_09;
    lVar15 = extraout_x8_09[1];
    uVar5 = *(undefined4 *)(extraout_x8_09 + 9);
    ppppppplVar12 = param_1;
    if (((lVar15 != 0) &&
        (ppppppplVar12 = (long *******)(extraout_x8_09 + 4), FUN_108340070(),
        (int)ppppppplVar12 != 0)) &&
       (ppppppplVar12 = (long *******)(extraout_x8_09 + 2), FUN_108340070(), (int)ppppppplVar12 != 0
       )) {
                    /* WARNING: Could not recover jumptable at 0x00010833eda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*param_1)[0x23])
                (param_1,lVar15,extraout_x8_09 + 2,extraout_x8_09 + 4,extraout_x8_09 + 6,uVar14,
                 uVar5);
      return param_1;
    }
    return ppppppplVar12;
  case 0x15:
    lVar15 = (long)param_1[1] + 0x84;
    ppppppplVar12 = (long *******)param_2[8];
    if (*(int *)(param_1[1] + 0x10) != 0) {
      func_0x0001083423f8(param_2[8]);
      if (*(int *)(lVar15 + 0x30) == 0) {
        UNRECOVERED_JUMPTABLE_00 = (*unaff_x22)[0x18];
        func_0x000108342138();
        goto LAB_108341fe4;
      }
      FUN_108281a6c();
      ppppppplVar12 = unaff_x20;
      if ((int)unaff_x20 != 0) {
        UNRECOVERED_JUMPTABLE_00 = (*unaff_x22)[0x19];
        func_0x000108341f58();
                    /* WARNING: Could not recover jumptable at 0x000108341fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE_00)();
        return unaff_x22;
      }
    }
    return ppppppplVar12;
  case 0x16:
    func_0x00010838c0e0();
    func_0x0001083420d8();
    func_0x000108341f64();
    func_0x000108341d8c((*unaff_x20)[0x1a]);
    return param_1;
  case 0x17:
    FUN_10838c08c();
    UNRECOVERED_JUMPTABLE_00 = (*param_1)[0x16];
    goto code_r0x00010838b7c8;
  case 0x18:
    FUN_10838c08c();
    UNRECOVERED_JUMPTABLE_00 = (*param_1)[0x15];
code_r0x00010838b7c8:
                    /* WARNING: Could not recover jumptable at 0x00010838b7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  case 0x19:
    func_0x00010838c0e0();
    UNRECOVERED_JUMPTABLE_00 = (*param_1)[0x1c];
    goto code_r0x00010838b814;
  case 0x1a:
    pppppplVar13 = param_1[1];
    if (pppppplVar13[10] != (long *****)0x0) {
      ppppppplVar12 = (long *******)param_2[8];
                    /* WARNING: Could not recover jumptable at 0x00010838b87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*ppppppplVar12)[0x20])
                (ppppppplVar12,pppppplVar13[10],pppppplVar13[0xb],pppppplVar13[0xc],
                 *(undefined4 *)(pppppplVar13 + 0xd));
      return ppppppplVar12;
    }
    break;
  case 0x1b:
    FUN_10838c08c();
    UNRECOVERED_JUMPTABLE_00 = *(long ******)(extraout_x8_03 + 8);
    ppppppplVar12 = (long *******)(extraout_x8_03 + 0x10);
code_r0x00010838b89c:
    if (UNRECOVERED_JUMPTABLE_00 != (long *****)0x0) {
      ppppppplVar16 = ppppppplVar12;
      func_0x000108341d9c();
      if (ppppppplVar16 != (long *******)0x0) {
        func_0x0001081420b8();
        param_1 = ppppppplVar12;
      }
      func_0x000108341ef4();
      (*extraout_x8_01)();
      if (1 < (int)param_1) {
        UNRECOVERED_JUMPTABLE_00 = (*unaff_x20)[0x2c];
        func_0x000108341e90();
                    /* WARNING: Could not recover jumptable at 0x000108340f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
      (*(code *)(*unaff_x19)[4])(unaff_x19);
      func_0x000108341f64();
      func_0x000108342278(&stack0xffffffffffffffc0,unaff_x20);
      func_0x000108342034((*unaff_x19)[3]);
      (*extraout_x8_02)();
      param_1 = (long *******)&stack0xffffffffffffffc0;
      FUN_1083424c8(param_1);
    }
    return param_1;
  case 0x1c:
    pppppplVar13 = param_1[1];
    ppppppplVar12 = (long *******)param_2[8];
                    /* WARNING: Could not recover jumptable at 0x00010838b800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*ppppppplVar12)[0x21])
              (ppppppplVar12,*(undefined4 *)(pppppplVar13 + 10),
               *(undefined4 *)((long)pppppplVar13 + 0x54),pppppplVar13[0xb]);
    return ppppppplVar12;
  case 0x1d:
    func_0x00010838c0e0();
    UNRECOVERED_JUMPTABLE_00 = (*param_1)[0x18];
    goto code_r0x00010838b814;
  case 0x1e:
    func_0x00010838c0e0();
    func_0x0001083420d8();
    func_0x000108341f64();
    func_0x000108341d8c((*unaff_x20)[0x17]);
    return param_1;
  case 0x1f:
    func_0x00010838c0e0();
    if (*(long *)(param_3 + 0x60) == -1) {
      return param_1;
    }
    if (*(long *)(param_3 + 0x60) == 0) {
      NEON_scvtf(*(undefined1 (*) [16])(param_3 + 0x50),4);
      FUN_10833ea80();
      return param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010833eacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*param_1)[0x1d])();
    return param_1;
  case 0x20:
    func_0x00010838c0e0();
    lVar15 = *(long *)(param_3 + 0x50);
    if (lVar15 != 0) {
      func_0x000108341f70(*(undefined4 *)(param_3 + 0x58),*(undefined4 *)(param_3 + 0x5c));
      param_1 = (long *******)(lVar15 + 4);
      FUN_108183110(param_1);
      func_0x000108342220();
      if (!(bool)uVar9) {
        iVar20 = 0;
        ppppppplStack_58 = unaff_x20 + 5;
        do {
          param_1 = (long *******)&ppppppplStack_58;
          FUN_1083a8494(param_1,&plStack_70);
          if ((int)param_1 == 0) {
            func_0x00010834225c((*unaff_x21)[0x1e]);
            (*extraout_x8_00)();
            return unaff_x21;
          }
          iVar10 = 0x200000 - iVar20;
          iVar20 = (int)uStack_68 + iVar20;
        } while ((int)uStack_68 <= iVar10);
      }
    }
    return param_1;
  case 0x21:
    if (param_1[1][10] != (long *****)0x0) {
      param_1 = (long *******)param_2[8];
      UNRECOVERED_JUMPTABLE_00 = (*param_1)[0x36];
      goto code_r0x00010838b814;
    }
    break;
  case 0x22:
    FUN_10838c08c();
    FUN_10833edc0();
    break;
  case 0x23:
    UNRECOVERED_JUMPTABLE_00 = param_1[1][10];
    if (UNRECOVERED_JUMPTABLE_00 != (long *****)0x0) {
      ppppppplVar12 = (long *******)param_2[8];
                    /* WARNING: Could not recover jumptable at 0x00010838b344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*ppppppplVar12)[0x27])
                (ppppppplVar12,UNRECOVERED_JUMPTABLE_00,*(undefined4 *)(param_1[1] + 0xb));
      return ppppppplVar12;
    }
    break;
  case 0x24:
    pppppplVar17 = param_1[1];
    pppppplVar13 = param_2[8];
    pppppplStack_60 = (long ******)pppppplVar17[0x19];
    if (pppppplStack_60 != (long ******)0x0) {
      pppppplVar1 = pppppplStack_60 + 1;
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppplVar1,0x10);
        if (bVar8) {
          *(int *)pppppplVar1 = *(int *)pppppplVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_10833eb28(pppppplVar13,pppppplVar17 + 10,&pppppplStack_60);
    param_1 = &pppppplStack_60;
    FUN_108154c6c(param_1);
    break;
  case 0x25:
    FUN_10838c08c();
    UNRECOVERED_JUMPTABLE_00 = (*param_1)[0x2a];
code_r0x00010838b814:
                    /* WARNING: Could not recover jumptable at 0x00010838b820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  case 0x26:
    FUN_10838c08c();
                    /* WARNING: Could not recover jumptable at 0x00010838b848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*param_1)[0x29])();
    return param_1;
  case 0x27:
    FUN_10838c08c();
    uVar14 = extraout_x8_13;
    func_0x0001083423cc();
    FUN_1082d8624(uVar14);
    func_0x000108341f64();
    func_0x000108342040((*param_1)[0x2d],param_1,&stack0xffffffffffffffb0);
    return param_1;
  case 0x28:
    FUN_10838c08c();
    iVar20 = (int)extraout_x8_05[3];
    lVar15 = extraout_x8_05[4];
    lVar3 = extraout_x8_05[5];
    lVar2 = *extraout_x8_05;
    puVar4 = (undefined8 *)extraout_x8_05[1];
    lVar7 = extraout_x8_05[9];
    if (lVar2 == 0) goto LAB_10833ef80;
    if (*(long *)(lVar2 + 0x20) == 0) {
      if ((iVar20 != 1) || (*(long *)(lVar2 + 0x10) == 0)) goto LAB_10833ef80;
    }
    else if (iVar20 != 1) goto LAB_10833ef80;
    uVar18 = *(uint *)(puVar4 + 5);
    if ((int)uVar18 < 0) {
      bVar8 = true;
    }
    else {
      iVar10 = (int)lVar3 + uVar18 * 0x28;
      FUN_1082878d0();
      if (iVar10 == 0) goto LAB_10833ef80;
      uVar18 = *(uint *)(puVar4 + 5);
      pfVar19 = (float *)(lVar3 + (long)(int)uVar18 * 0x28);
      if (*pfVar19 <= 0.0) goto LAB_10833ef80;
      bVar8 = 0.0 < pfVar19[4];
    }
    if (((*(byte *)((long)puVar4 + 0x34) & 1) == 0) && (bVar8)) {
      pppppplStack_60 = (long ******)puVar4[3];
      ppppppplStack_58 = (long *******)puVar4[4];
      if (-1 < (int)uVar18) {
        func_0x000108342340(lVar3 + (ulong)uVar18 * 0x28,&pppppplStack_60);
      }
      FUN_10833ed1c(param_1,*puVar4,puVar4 + 1,&pppppplStack_60,extraout_x8_05 + 6,lVar2,(int)lVar7)
      ;
      return param_1;
    }
LAB_10833ef80:
                    /* WARNING: Could not recover jumptable at 0x00010833efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*param_1)[0x26])
              (param_1,puVar4,iVar20,lVar15,lVar3,extraout_x8_05 + 6,lVar2,(int)lVar7);
    return param_1;
  }
  return param_1;
}



/* Entry: 10838b8cc; end: 10838bdab;  */

/* WARNING: Possible PIC construction at 0x00010838bbec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010838bbf0) */

void FUN_10838b8cc(float param_1,float param_2,float param_3,float param_4,undefined4 *param_5,
                  float *param_6)

{
  uint uVar1;
  code *pcVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x9;
  long lVar9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long lVar10;
  undefined8 unaff_x30;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar7 = &uStack_90;
  pfVar3 = (float *)&uStack_90;
  pfVar5 = param_6;
  switch(*param_5) {
  default:
    func_0x00010838c138(param_6,param_6,unaff_x30);
    fVar11 = param_6[8];
    pfVar5 = (float *)(*(long *)(param_6 + 4) + (long)(int)fVar11 * 0x10);
    pfVar5[0] = 0.0;
    pfVar5[1] = 0.0;
    pfVar5[2] = 0.0;
    pfVar5[3] = 0.0;
    *(undefined1 *)(*(long *)(param_6 + 6) + (long)(int)fVar11) = 1;
    goto SUB_10838b298;
  case 1:
    func_0x00010838c0f4();
    if (param_6[0x19] != 0.0) {
      lVar10 = *(long *)(*(long *)(param_6 + 0x16) + (long)(int)param_6[0x19] * 0x48 + -0x30);
      FUN_10838b1b8(param_6);
      fVar11 = param_6[8];
      pfVar5 = (float *)(*(long *)(param_6 + 4) + (long)(int)fVar11 * 0x10);
      *pfVar5 = param_1;
      pfVar5[1] = param_2;
      pfVar5[2] = param_3;
      pfVar5[3] = param_4;
      *(bool *)(*(long *)(param_6 + 6) + (long)(int)fVar11) = lVar10 != 0;
      func_0x00010838c138(unaff_x30);
      return;
    }
    goto code_r0x00010838bda8;
  case 2:
  case 4:
    uVar4 = 0;
    uVar6 = 0;
    goto code_r0x00010838ba70;
  case 3:
    uVar4 = *(ulong *)(*(long *)(param_5 + 2) + 8);
    uVar6 = (ulong)(*(long *)(*(long *)(param_5 + 2) + 0x10) != 0);
code_r0x00010838ba70:
    func_0x00010838c138();
    uStack_e8 = 0x3f800000;
    uStack_e0 = (ulong)uStack_e0._4_4_ << 0x20;
    uStack_108 = 0;
    if ((uVar6 & 1) == 0) {
      uStack_104 = 0;
      uStack_fc = 0;
      if (uVar4 == 0) goto LAB_10838be08;
      uVar6 = *(ulong *)(uVar4 + 0x20);
      if (((uVar6 == 0) || (FUN_108355688(), (uVar6 & 1) == 0)) &&
         ((uVar6 = *(ulong *)(uVar4 + 0x18), uVar6 == 0 || (FUN_10833e038(), (uVar6 & 1) == 0)))) {
        uVar6 = uVar4;
        FUN_10837626c();
        uStack_104 = 0;
        uStack_fc = 0;
        if (((uVar6 >> 0x20 & 1) != 0) &&
           ((0xd < (uint)uVar6 || ((1 << (ulong)((uint)uVar6 & 0x1f) & 0x24e3U) == 0))))
        goto LAB_10838be08;
      }
    }
    uStack_fc = *(undefined8 *)(param_6 + 2);
    uStack_104 = *(undefined8 *)param_6;
LAB_10838be08:
    uStack_e0 = *(long *)(param_6 + 0xb);
    uStack_e8 = *(undefined8 *)(param_6 + 9);
    uStack_d0 = *(undefined8 *)(param_6 + 0xf);
    uStack_d8 = *(undefined8 *)(param_6 + 0xd);
    uStack_c8 = *(undefined8 *)(param_6 + 0x11);
    uStack_f0 = uVar4;
    FUN_10838b0dc(param_6 + 0x14,&uStack_108);
    FUN_10838bea4(param_6);
    return;
  case 5:
    func_0x00010838c0f4();
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
code_r0x00010838bc0c:
    func_0x00010838c138();
    FUN_108265574(param_6 + 0x1a,param_6 + 8);
    if (param_6[0x19] != 0.0) {
      lVar10 = *(long *)(param_6 + 0x16) + (long)(int)param_6[0x19] * 0x48;
      *(int *)(lVar10 + -0x48) = *(int *)(lVar10 + -0x48) + 1;
    }
    return;
  case 6:
    func_0x00010838c120();
    *(undefined8 *)(param_6 + 0xb) = uStack_88;
    *(undefined8 *)(param_6 + 9) = uStack_90;
    *(undefined8 *)(param_6 + 0xf) = uStack_78;
    *(undefined8 *)(param_6 + 0xd) = uStack_80;
    *(undefined8 *)(param_6 + 0x11) = uStack_70;
    goto code_r0x00010838bc0c;
  case 7:
    FUN_108363df0(**(undefined4 **)(param_5 + 2),(*(undefined4 **)(param_5 + 2))[1],param_6 + 9);
    goto code_r0x00010838bc0c;
  case 8:
    func_0x000108363fe4(**(undefined4 **)(param_5 + 2),(*(undefined4 **)(param_5 + 2))[1],
                        param_6 + 9);
    goto code_r0x00010838bc0c;
  case 9:
    puVar7 = *(undefined8 **)(param_5 + 2);
    goto code_r0x00010838ba8c;
  case 10:
    func_0x00010838c120();
code_r0x00010838ba8c:
    FUN_108363e94(param_6 + 9,puVar7);
    goto code_r0x00010838bc0c;
  case 0x11:
  case 0x16:
  case 0x17:
  case 0x1e:
  case 0x1f:
    pfVar5 = *(float **)(param_5 + 2);
    param_1 = pfVar5[0x14];
    param_2 = pfVar5[0x15];
    param_3 = pfVar5[0x16];
    param_4 = pfVar5[0x17];
    break;
  case 0x12:
    lVar10 = *(long *)(param_5 + 2);
    param_1 = *(float *)(lVar10 + 8);
    param_2 = *(float *)(lVar10 + 0xc);
    param_3 = *(float *)(lVar10 + 0x10);
    param_4 = *(float *)(lVar10 + 0x14);
    goto code_r0x00010838bd54;
  case 0x13:
    puVar7 = *(undefined8 **)(param_5 + 2);
    param_1 = *(float *)(puVar7 + 2);
    param_2 = *(float *)((long)puVar7 + 0x14);
    pfVar5 = (float *)*puVar7;
    param_3 = param_1 + (float)*(int *)(puVar7[1] + 0x20);
    param_4 = param_2 + (float)*(int *)(puVar7[1] + 0x24);
    break;
  case 0x14:
    puVar7 = *(undefined8 **)(param_5 + 2);
    param_1 = *(float *)(puVar7 + 0xb);
    param_2 = *(float *)((long)puVar7 + 0x5c);
    param_3 = *(float *)(puVar7 + 0xc);
    param_4 = *(float *)((long)puVar7 + 100);
    goto code_r0x00010838ba54;
  case 0x15:
    puVar7 = *(undefined8 **)(param_5 + 2);
    param_1 = *(float *)(puVar7 + 4);
    param_2 = *(float *)((long)puVar7 + 0x24);
    param_3 = *(float *)(puVar7 + 5);
    param_4 = *(float *)((long)puVar7 + 0x2c);
code_r0x00010838ba54:
    pfVar5 = (float *)*puVar7;
    break;
  case 0x18:
  case 0x19:
    func_0x00010838c0d0();
    uVar13 = *(undefined8 *)(param_6 + 2);
    uVar12 = *(undefined8 *)param_6;
    lVar10 = extraout_x9;
    goto code_r0x00010838bd80;
  case 0x1a:
    pfVar5 = *(float **)(param_5 + 2);
    if ((*(byte *)((long)pfVar5 + 0x5e) >> 1 & 1) == 0) {
      pfVar3 = pfVar5 + 0x14;
      func_0x0001083773e0();
      fVar11 = *pfVar3;
      fVar15 = pfVar3[1];
      fVar17 = pfVar3[2];
      fVar16 = pfVar3[3];
      goto code_r0x00010838bcf4;
    }
code_r0x00010838bd78:
    uVar13 = *(undefined8 *)(param_6 + 2);
    uVar12 = *(undefined8 *)param_6;
    pfVar5 = param_6;
    goto code_r0x00010838bd7c;
  case 0x1b:
    pfVar5 = *(float **)(param_5 + 2);
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10838eb84(&uStack_90,*(undefined8 *)(pfVar5 + 0x14),0xc);
    goto code_r0x00010838bd20;
  case 0x1c:
    puVar7 = *(undefined8 **)(param_5 + 2);
    func_0x00010838c12c(puVar7[1]);
    uStack_90 = CONCAT44(param_2,param_1);
    uStack_88 = CONCAT44(param_4,param_3);
    FUN_108189c38(puVar7 + 2,&uStack_90,1);
    fVar17 = (float)uStack_90;
    fVar16 = (float)((ulong)uStack_90 >> 0x20);
    pfVar5 = (float *)*puVar7;
    fVar11 = (float)uStack_88;
    fVar15 = uStack_88._4_4_;
    FUN_10838beec(param_6);
    func_0x00010838c0d0();
    *pfVar5 = fVar17;
    pfVar5[1] = fVar16;
    pfVar5[2] = fVar11;
    pfVar5[3] = fVar15;
    *(undefined1 *)(*(long *)(param_6 + 6) + extraout_x9_00) = 1;
    goto code_r0x00010838bd90;
  case 0x1d:
    pfVar5 = *(float **)(param_5 + 2);
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10838eb84(&uStack_90,*(undefined8 *)(pfVar5 + 0x16),pfVar5[0x15]);
    fVar11 = 0.01;
    if (0.01 <= pfVar5[0x10]) {
      fVar11 = pfVar5[0x10];
    }
    func_0x00010816882c(fVar11 * 0.5,fVar11 * 0.5,&uStack_90);
code_r0x00010838bd20:
    param_3 = (float)uStack_88;
    param_4 = uStack_88._4_4_;
    param_1 = (float)uStack_90;
    param_2 = uStack_90._4_4_;
    break;
  case 0x20:
    pfVar5 = *(float **)(param_5 + 2);
    FUN_10817500c(pfVar5 + 0x14);
    break;
  case 0x21:
    pfVar5 = *(float **)(param_5 + 2);
    lVar10 = *(long *)(pfVar5 + 0x14);
    param_1 = *(float *)(lVar10 + 4) + pfVar5[0x16];
    param_2 = *(float *)(lVar10 + 8) + pfVar5[0x17];
    param_3 = *(float *)(lVar10 + 0xc) + pfVar5[0x16];
    param_4 = *(float *)(lVar10 + 0x10) + pfVar5[0x17];
    break;
  case 0x22:
    pfVar5 = *(float **)(param_5 + 2);
    func_0x00010838c12c(*(undefined8 *)(pfVar5 + 0x14));
    break;
  case 0x23:
    pfVar3 = (float *)(*(undefined8 **)(param_5 + 2))[9];
    if (pfVar3 == (float *)0x0) goto code_r0x00010838bd78;
    pfVar5 = (float *)**(undefined8 **)(param_5 + 2);
    fVar11 = *pfVar3;
    fVar15 = pfVar3[1];
    fVar17 = pfVar3[2];
    fVar16 = pfVar3[3];
code_r0x00010838bcf4:
    FUN_10838beec(param_6);
    uVar12 = CONCAT44(fVar15,fVar11);
    uVar13 = CONCAT44(fVar16,fVar17);
    goto code_r0x00010838bd7c;
  case 0x24:
    pfVar5 = *(float **)(param_5 + 2);
    lVar10 = *(long *)(pfVar5 + 0x14);
    param_1 = *(float *)(lVar10 + 0x28);
    param_2 = *(float *)(lVar10 + 0x2c);
    param_3 = *(float *)(lVar10 + 0x30);
    param_4 = *(float *)(lVar10 + 0x34);
    break;
  case 0x25:
    pfVar5 = *(float **)(param_5 + 2);
    FUN_1082f4e84(pfVar5 + 0x14);
    break;
  case 0x26:
    uStack_90 = 0;
    uStack_88 = 0;
    FUN_10834b128(*(long *)(param_5 + 2),*(long *)(param_5 + 2) + 0x10,param_6 + 9,&uStack_90);
    goto code_r0x00010838bd4c;
  case 0x27:
    pfVar5 = *(float **)(param_5 + 2);
    param_1 = *pfVar5;
    param_2 = pfVar5[1];
    param_3 = pfVar5[2];
    param_4 = pfVar5[3];
    goto code_r0x00010838bd54;
  case 0x28:
    puVar7 = *(undefined8 **)(param_5 + 2);
    uStack_88 = puVar7[1];
    uStack_90 = *puVar7;
    if (puVar7[2] != 0) {
      FUN_10838eb84(&uStack_90,puVar7[2],4);
    }
code_r0x00010838bd4c:
    param_3 = (float)uStack_88;
    param_4 = uStack_88._4_4_;
    param_1 = (float)uStack_90;
    param_2 = uStack_90._4_4_;
code_r0x00010838bd54:
    pfVar5 = (float *)0x0;
    break;
  case 0x29:
    lVar10 = *(long *)(param_5 + 2);
    uStack_90 = 0;
    uStack_88 = 0;
    if (0 < *(int *)(lVar10 + 0x18)) {
      lVar8 = *(long *)(lVar10 + 0x10);
      if (lVar8 == 0) {
code_r0x00010838bda8:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10838bdac);
        (*pcVar2)();
      }
      lVar9 = *(long *)(lVar10 + 8);
      uStack_48 = *(undefined8 *)(lVar9 + 0x20);
      uStack_50 = *(undefined8 *)(lVar9 + 0x18);
      if (*(char *)(lVar9 + 0x34) == '\x01') {
        FUN_10838eb84(&uStack_50,*(undefined8 *)(lVar10 + 0x20),4);
        lVar8 = *(long *)(lVar10 + 0x10);
      }
      if (lVar8 == 0) goto code_r0x00010838bda8;
      uVar1 = *(uint *)(*(long *)(lVar10 + 8) + 0x28);
      if (-1 < (int)uVar1) {
        FUN_108189c38(*(long *)(lVar10 + 0x28) + (ulong)uVar1 * 0x28,&uStack_50,1);
      }
      fVar11 = (float)uStack_50;
      uVar14 = (undefined4)((ulong)uStack_50 >> 0x20);
      FUN_10838beec(param_6,0);
      fStack_60 = fVar11;
      uStack_5c = uVar14;
      uStack_58 = (undefined4)uStack_48;
      uStack_54 = uStack_48._4_4_;
      pfVar5 = &fStack_60;
      goto SUB_10838ed50;
    }
    uVar13 = 0;
    uVar12 = 0;
code_r0x00010838bd7c:
    func_0x00010838c0d0();
    lVar10 = extraout_x9_02;
code_r0x00010838bd80:
    *(undefined8 *)(pfVar5 + 2) = uVar13;
    *(undefined8 *)pfVar5 = uVar12;
    goto code_r0x00010838bd84;
  }
  FUN_10838beec(param_6);
  func_0x00010838c0d0();
  *pfVar5 = param_1;
  pfVar5[1] = param_2;
  pfVar5[2] = param_3;
  pfVar5[3] = param_4;
  lVar10 = extraout_x9_01;
code_r0x00010838bd84:
  *(undefined1 *)(*(long *)(param_6 + 6) + lVar10) = 1;
code_r0x00010838bd90:
  func_0x00010838c138();
SUB_10838b298:
  if (param_6[0x19] == 0.0) {
    return;
  }
  pfVar3 = (float *)(*(long *)(param_6 + 0x16) + (long)(int)param_6[0x19] * 0x48 + -0x44);
SUB_10838ed50:
  fVar11 = *pfVar5;
  if ((fVar11 < pfVar5[2]) && (pfVar5[1] < pfVar5[3])) {
    fVar17 = *pfVar3;
    fVar15 = pfVar3[2];
    if (fVar17 < fVar15) {
      fVar18 = pfVar3[1];
      fVar16 = pfVar3[3];
      if (fVar18 < fVar16) {
        if (fVar17 <= fVar11) {
          fVar11 = fVar17;
        }
        *pfVar3 = fVar11;
        fVar11 = pfVar5[1];
        if (fVar18 <= pfVar5[1]) {
          fVar11 = fVar18;
        }
        pfVar3[1] = fVar11;
        fVar11 = pfVar5[2];
        if (pfVar5[2] <= fVar15) {
          fVar11 = fVar15;
        }
        pfVar3[2] = fVar11;
        fVar11 = pfVar5[3];
        if (pfVar5[3] <= fVar16) {
          fVar11 = fVar16;
        }
        pfVar3[3] = fVar11;
        return;
      }
    }
    uVar12 = *(undefined8 *)pfVar5;
    *(undefined8 *)(pfVar3 + 2) = *(undefined8 *)(pfVar5 + 2);
    *(undefined8 *)pfVar3 = uVar12;
    return;
  }
  return;
}



/* Entry: 10838bdac; end: 10838bdcb;  */

void FUN_10838bdac(long param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pfVar1 = (float *)(*(long *)(param_1 + 0x10) + (long)iVar2 * 0x10);
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  *(undefined1 *)(*(long *)(param_1 + 0x18) + (long)iVar2) = 1;
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 100) * 0x48;
  pfVar3 = (float *)(lVar4 + -0x44);
  fVar5 = *pfVar1;
  if ((fVar5 < pfVar1[2]) && (pfVar1[1] < pfVar1[3])) {
    fVar9 = *pfVar3;
    fVar7 = *(float *)(lVar4 + -0x3c);
    if (fVar9 < fVar7) {
      fVar10 = *(float *)(lVar4 + -0x40);
      fVar8 = *(float *)(lVar4 + -0x38);
      if (fVar10 < fVar8) {
        if (fVar9 <= fVar5) {
          fVar5 = fVar9;
        }
        *pfVar3 = fVar5;
        fVar5 = pfVar1[1];
        if (fVar10 <= pfVar1[1]) {
          fVar5 = fVar10;
        }
        *(float *)(lVar4 + -0x40) = fVar5;
        fVar5 = pfVar1[2];
        if (pfVar1[2] <= fVar7) {
          fVar5 = fVar7;
        }
        *(float *)(lVar4 + -0x3c) = fVar5;
        fVar5 = pfVar1[3];
        if (pfVar1[3] <= fVar8) {
          fVar5 = fVar8;
        }
        *(float *)(lVar4 + -0x38) = fVar5;
        return;
      }
    }
    uVar6 = *(undefined8 *)pfVar1;
    *(undefined8 *)(lVar4 + -0x3c) = *(undefined8 *)(pfVar1 + 2);
    *(undefined8 *)pfVar3 = uVar6;
    return;
  }
  return;
}



/* Entry: 10838bdcc; end: 10838bea3;  */

void FUN_10838bdcc(undefined8 *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = 0x3f800000;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  uStack_78 = 0;
  if ((param_3 & 1) == 0) {
    uStack_74 = 0;
    uStack_6c = 0;
    if (param_2 == 0) goto LAB_10838be08;
    uVar1 = *(ulong *)(param_2 + 0x20);
    if (((uVar1 == 0) || (FUN_108355688(), (uVar1 & 1) == 0)) &&
       ((uVar1 = *(ulong *)(param_2 + 0x18), uVar1 == 0 || (FUN_10833e038(), (uVar1 & 1) == 0)))) {
      uVar1 = param_2;
      FUN_10837626c();
      uStack_74 = 0;
      uStack_6c = 0;
      if (((uVar1 >> 0x20 & 1) != 0) &&
         ((0xd < (uint)uVar1 || ((1 << (ulong)((uint)uVar1 & 0x1f) & 0x24e3U) == 0))))
      goto LAB_10838be08;
    }
  }
  uStack_6c = param_1[1];
  uStack_74 = *param_1;
LAB_10838be08:
  uStack_50 = *(undefined8 *)((long)param_1 + 0x2c);
  uStack_58 = *(undefined8 *)((long)param_1 + 0x24);
  uStack_40 = *(undefined8 *)((long)param_1 + 0x3c);
  uStack_48 = *(undefined8 *)((long)param_1 + 0x34);
  uStack_38 = *(undefined8 *)((long)param_1 + 0x44);
  uStack_60 = param_2;
  FUN_10838b0dc(param_1 + 10,&uStack_78);
  FUN_10838bea4(param_1);
  return;
}



/* Entry: 10838bea4; end: 10838beeb;  */

void FUN_10838bea4(long param_1)

{
  long lVar1;
  
  FUN_108265574(param_1 + 0x68,param_1 + 0x20);
  if (*(int *)(param_1 + 100) != 0) {
    lVar1 = *(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 100) * 0x48;
    *(int *)(lVar1 + -0x48) = *(int *)(lVar1 + -0x48) + 1;
  }
  return;
}



/* Entry: 10838beec; end: 10838c03b;  */

void FUN_10838beec(float param_1,float param_2,float param_3,float param_4,undefined8 *param_5,
                  ulong param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  float *pfVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  fStack_80 = param_1;
  fStack_78 = param_3;
  if (param_3 < param_1) {
    fStack_80 = param_3;
    fStack_78 = param_1;
  }
  fStack_7c = param_2;
  fStack_74 = param_4;
  if (param_4 < param_2) {
    fStack_7c = param_4;
    fStack_74 = param_2;
  }
  FUN_10838c03c(param_6,&fStack_80);
  if ((param_6 & 1) == 0) {
LAB_10838bfe8:
    uVar8 = param_5[1];
    uVar3 = *param_5;
  }
  else {
    uVar6 = (ulong)*(uint *)((long)param_5 + 100);
    while( true ) {
      uVar6 = uVar6 - 1;
      iVar5 = (int)uVar6;
      if (iVar5 < 0) break;
      uStack_68 = 0;
      uStack_70 = 0x3f800000;
      uStack_58 = 0;
      uStack_60 = 0x3f800000;
      uStack_50 = 0x103f800000;
      if (*(int *)((long)param_5 + 100) <= iVar5) {
LAB_10838c038:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10838c03c);
        (*pcVar1)();
      }
      uVar7 = uVar6 & 0x7fffffff;
      lVar2 = param_5[0xb] + uVar7 * 0x48 + 0x20;
      FUN_10818cfd0(lVar2,&uStack_70);
      if ((int)lVar2 == 0) goto LAB_10838bfe8;
      func_0x00010838c0c4(&uStack_70);
      if (*(int *)((long)param_5 + 100) <= iVar5) goto LAB_10838c038;
      uVar3 = *(undefined8 *)(param_5[0xb] + uVar7 * 0x48 + 0x18);
      FUN_10838c03c(uVar3,&fStack_80);
      if ((int)uVar3 == 0) goto LAB_10838bfe8;
      if (*(int *)((long)param_5 + 100) <= iVar5) goto LAB_10838c038;
      func_0x00010838c0c4(param_5[0xb] + uVar7 * 0x48 + 0x20);
    }
    func_0x00010838c0c4((long)param_5 + 0x24);
    pfVar4 = &fStack_80;
    FUN_10838ed10(pfVar4,param_5);
    iVar5 = -(uint)((int)pfVar4 != 0);
    bVar9 = (byte)iVar5;
    bVar10 = (byte)((uint)iVar5 >> 8);
    bVar11 = (byte)((uint)iVar5 >> 0x10);
    bVar12 = (byte)((uint)iVar5 >> 0x18);
    uVar3 = CONCAT17((byte)((uint)fStack_7c >> 0x18) & bVar12,
                     CONCAT16((byte)((uint)fStack_7c >> 0x10) & bVar11,
                              CONCAT15((byte)((uint)fStack_7c >> 8) & bVar10,
                                       CONCAT14(SUB41(fStack_7c,0) & bVar9,
                                                CONCAT13((byte)((uint)fStack_80 >> 0x18) & bVar12,
                                                         CONCAT12((byte)((uint)fStack_80 >> 0x10) &
                                                                  bVar11,CONCAT11((byte)((uint)
                                                  fStack_80 >> 8) & bVar10,
                                                  SUB41(fStack_80,0) & bVar9)))))));
    uVar8 = CONCAT17((byte)((uint)fStack_74 >> 0x18) & bVar12,
                     CONCAT16((byte)((uint)fStack_74 >> 0x10) & bVar11,
                              CONCAT15((byte)((uint)fStack_74 >> 8) & bVar10,
                                       CONCAT14(SUB41(fStack_74,0) & bVar9,
                                                CONCAT13((byte)((uint)fStack_78 >> 0x18) & bVar12,
                                                         CONCAT12((byte)((uint)fStack_78 >> 0x10) &
                                                                  bVar11,CONCAT11((byte)((uint)
                                                  fStack_78 >> 8) & bVar10,
                                                  SUB41(fStack_78,0) & bVar9)))))));
  }
  func_0x00010838c138(uVar3,(int)((ulong)uVar3 >> 0x20),(int)uVar8,(int)((ulong)uVar8 >> 0x20));
  return;
}



/* Entry: 10838c03c; end: 10838c08b;  */

undefined8 * FUN_10838c03c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
    FUN_108376360();
    if ((int)puVar1 != 0) {
      func_0x0001083763a8(param_1,param_2,param_2);
      uVar2 = *param_1;
      param_2[1] = param_1[1];
      *param_2 = uVar2;
      puVar1 = (undefined8 *)0x1;
    }
    return puVar1;
  }
  return (undefined8 *)0x1;
}



/* Entry: 10838c08c; end: 10838c14b;  */

undefined8 FUN_10838c08c(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x40);
}



/* Entry: 10838c14c; end: 10838c27b;  */

void FUN_10838c14c(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar10;
  long lVar11;
  long extraout_x10;
  long extraout_x11;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  ulong uVar12;
  long extraout_x13;
  ulong uVar13;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar7 = param_1;
  uVar12 = 0;
LAB_10838c188:
  lVar10 = uVar12 << 4;
  do {
    if ((long)*(int *)((long)param_1 + 0xc) <= (long)uVar12) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return;
      }
      ___stack_chk_fail();
      uVar12 = 0;
      break;
    }
    iVar6 = *(int *)(param_1[3] + lVar10);
    if (iVar6 == 3) {
      uStack_68 = *(undefined8 *)(param_1[3] + lVar10 + 8);
    }
    else {
      uStack_68 = 0;
    }
    iVar1 = 0;
    if (iVar6 == 3) {
      iVar1 = (int)uVar12 + 1;
    }
    if (0 < iVar1) {
      puVar7 = &uStack_60;
      FUN_10838c51c(puVar7,&uStack_60,param_1);
      iVar6 = (int)puVar7;
      if ((0 < iVar6) && (iVar6 < *(int *)((long)param_1 + 0xc))) {
        if (*(int *)(param_1[3] + ((ulong)puVar7 & 0xffffffff) * 0x10) == 1) goto LAB_10838c218;
        uStack_58 = 0;
      }
    }
    lVar10 = lVar10 + 0x10;
    uVar12 = uVar12 + 1;
  } while( true );
LAB_10838c290:
  lVar9 = (long)*(int *)((long)puVar7 + 0xc);
  lVar10 = uVar12 << 4;
  uVar13 = uVar12;
  do {
    if (lVar9 <= (long)uVar13) {
      return;
    }
    lVar11 = puVar7[3];
    uVar2 = 0;
    if (*(int *)(lVar11 + lVar10) == 3) {
      uVar2 = (int)uVar13 + 1;
    }
    uVar8 = (uint)lVar9;
    if ((((0 < (int)uVar2 && (int)uVar2 < (int)uVar8) &&
         (*(int *)(lVar11 + (ulong)uVar2 * 0x10) == 2 && uVar2 + 1 < uVar8)) &&
        (*(int *)(lVar11 + (ulong)(uVar2 + 1) * 0x10) == 0xd && uVar2 + 2 < uVar8)) &&
       (bVar5 = *(int *)(lVar11 + (ulong)(uVar2 + 2) * 0x10) == 3,
       bVar3 = bVar5 && uVar2 + 3 == uVar8, bVar5 && uVar2 + 3 < uVar8)) {
      FUN_10838c6cc();
      bVar5 = false;
      bVar4 = true;
      if (bVar3) {
        bVar4 = (uint)extraout_x8 <= extraout_w12 + 4U;
        bVar5 = extraout_w12 + 4U == (uint)extraout_x8;
      }
      lVar9 = extraout_x8;
      lVar10 = extraout_x9;
      if (!bVar4) {
        FUN_10838c6cc();
        bVar3 = false;
        bVar4 = true;
        if (bVar5) {
          bVar4 = (uint)extraout_x8_00 <= extraout_w12_00 + 5U;
          bVar3 = extraout_w12_00 + 5U == (uint)extraout_x8_00;
        }
        lVar9 = extraout_x8_00;
        lVar10 = extraout_x9_00;
        if ((!bVar4) && (FUN_10838c6cc(), lVar9 = extraout_x8_01, lVar10 = extraout_x9_01, bVar3))
        break;
      }
    }
    lVar10 = lVar10 + 0x10;
    uVar13 = uVar13 + 1;
  } while( true );
  uVar12 = (ulong)(extraout_w12_01 + 6);
  if (((*(long *)(extraout_x11 + 0x10) == 0) &&
      ((*(long *)(extraout_x11 + 0x30) == 0 &&
       (lVar10 = *(long *)(extraout_x10 + extraout_x13 * 0x10 + 8), *(long *)(lVar10 + 0x30) == 0)))
      ) && ((lVar9 = *(long *)(extraout_x11 + 8), lVar9 == 0 ||
            ((*(long *)(lVar10 + 8) != 0 && (FUN_10838c5ec(lVar9,1), (int)lVar9 != 0)))))) {
    func_0x00010838c400(puVar7,uVar13);
    func_0x00010838c400(puVar7,(int)uVar13 + 6);
  }
  goto LAB_10838c290;
LAB_10838c218:
  uStack_58 = *(undefined8 *)(param_1[3] + ((ulong)puVar7 & 0xffffffff) * 0x10 + 8);
  puVar7 = (undefined8 *)&uStack_69;
  FUN_10838c450(puVar7,param_1,&uStack_68,uVar12,(ulong)(iVar6 + 1));
  uVar12 = (ulong)(iVar6 + 1);
  goto LAB_10838c188;
}



/* Entry: 10838c27c; end: 10838c44f;  */

void FUN_10838c27c(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar7;
  long lVar8;
  long extraout_x10;
  long extraout_x11;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  ulong uVar9;
  long extraout_x13;
  ulong uVar10;
  
  uVar9 = 0;
LAB_10838c290:
  lVar6 = (long)*(int *)(param_1 + 0xc);
  lVar7 = uVar9 << 4;
  uVar10 = uVar9;
  do {
    if (lVar6 <= (long)uVar10) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x18);
    uVar1 = 0;
    if (*(int *)(lVar8 + lVar7) == 3) {
      uVar1 = (int)uVar10 + 1;
    }
    uVar5 = (uint)lVar6;
    if ((((0 < (int)uVar1 && (int)uVar1 < (int)uVar5) &&
         (*(int *)(lVar8 + (ulong)uVar1 * 0x10) == 2 && uVar1 + 1 < uVar5)) &&
        (*(int *)(lVar8 + (ulong)(uVar1 + 1) * 0x10) == 0xd && uVar1 + 2 < uVar5)) &&
       (bVar4 = *(int *)(lVar8 + (ulong)(uVar1 + 2) * 0x10) == 3,
       bVar2 = bVar4 && uVar1 + 3 == uVar5, bVar4 && uVar1 + 3 < uVar5)) {
      FUN_10838c6cc();
      bVar4 = false;
      bVar3 = true;
      if (bVar2) {
        bVar3 = (uint)extraout_x8 <= extraout_w12 + 4U;
        bVar4 = extraout_w12 + 4U == (uint)extraout_x8;
      }
      lVar6 = extraout_x8;
      lVar7 = extraout_x9;
      if (!bVar3) {
        FUN_10838c6cc();
        bVar2 = false;
        bVar3 = true;
        if (bVar4) {
          bVar3 = (uint)extraout_x8_00 <= extraout_w12_00 + 5U;
          bVar2 = extraout_w12_00 + 5U == (uint)extraout_x8_00;
        }
        lVar6 = extraout_x8_00;
        lVar7 = extraout_x9_00;
        if ((!bVar3) && (FUN_10838c6cc(), lVar6 = extraout_x8_01, lVar7 = extraout_x9_01, bVar2))
        break;
      }
    }
    lVar7 = lVar7 + 0x10;
    uVar10 = uVar10 + 1;
  } while( true );
  uVar9 = (ulong)(extraout_w12_01 + 6);
  if (((*(long *)(extraout_x11 + 0x10) == 0) &&
      ((*(long *)(extraout_x11 + 0x30) == 0 &&
       (lVar7 = *(long *)(extraout_x10 + extraout_x13 * 0x10 + 8), *(long *)(lVar7 + 0x30) == 0))))
     && ((lVar6 = *(long *)(extraout_x11 + 8), lVar6 == 0 ||
         ((*(long *)(lVar7 + 8) != 0 && (FUN_10838c5ec(lVar6,1), (int)lVar6 != 0)))))) {
    func_0x00010838c400(param_1,uVar10);
    func_0x00010838c400(param_1,(int)uVar10 + 6);
  }
  goto LAB_10838c290;
}



/* Entry: 10838c450; end: 10838c51b;  */

undefined8 FUN_10838c450(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_3;
  if ((*(long *)(lVar2 + 0x10) == 0) && (*(long *)(lVar2 + 0x30) == 0)) {
    lVar2 = *(long *)(lVar2 + 8);
    uVar3 = param_3[1];
    if (lVar2 == 0) {
      if (((uVar3 == 0) || (uVar1 = uVar3, FUN_1083762bc(), (uVar1 & 1) != 0)) ||
         (((*(long *)(uVar3 + 8) == 0 &&
           (((*(long *)(uVar3 + 0x18) == 0 && (*(long *)(uVar3 + 0x20) == 0)) &&
            (uVar1 = uVar3, FUN_108188360(), (int)uVar1 == 0xff)))) &&
          (uVar1 = uVar3, FUN_10837626c(), (uVar1 & 0x1ffffffff) == 0x100000001))))
      goto FUN_10838c5b8;
    }
    else if (uVar3 == 0) {
      return 0;
    }
    FUN_10838c5ec(lVar2,0,uVar3);
    if ((int)lVar2 != 0) {
FUN_10838c5b8:
      func_0x00010838c400(param_2,param_4);
      func_0x00010838c400(param_2,(int)param_4 + 2);
      return 1;
    }
  }
  return 0;
}



/* Entry: 10838c51c; end: 10838c55f;  */

int FUN_10838c51c(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 < *(int *)(param_3 + 0xc)) {
    iVar2 = (int)*(undefined8 *)(param_3 + 0x18) + param_4 * 0x10;
    FUN_10838c560();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = param_4 + 1;
    }
    return iVar1;
  }
  return 0;
}



/* Entry: 10838c560; end: 10838c5b7;  */

undefined8 FUN_10838c560(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = 1;
  switch(*param_1) {
  case 0x11:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
    uVar2 = *(undefined8 *)(param_1 + 2);
    break;
  case 0x12:
  case 0x26:
  case 0x28:
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x1c:
    uVar2 = **(undefined8 **)(param_1 + 2);
    break;
  default:
    uVar2 = 0;
    uVar1 = 0;
  }
  *param_2 = uVar2;
  return uVar1;
}



/* Entry: 10838c5b8; end: 10838c5eb;  */

undefined8 FUN_10838c5b8(undefined8 param_1,int param_2)

{
  func_0x00010838c400();
  func_0x00010838c400(param_1,param_2 + 2);
  return 1;
}



/* Entry: 10838c5ec; end: 10838c6cb;  */

void FUN_10838c5ec(long *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = param_3;
  FUN_1083762bc();
  if (((int)lVar2 != 0) &&
     (((((param_2 & 1) != 0 || (*(long *)(param_3 + 0x20) == 0)) && (*(long *)(param_3 + 0x18) == 0)
       ) && (param_1 != (long *)0x0)))) {
    plVar3 = param_1 + 6;
    func_0x000108343560();
    if (((((((ulong)plVar3 & 0xffffff) == 0) && (*param_1 == 0)) && (param_1[1] == 0)) &&
        ((plVar4 = param_1, FUN_1083762bc(), (int)plVar4 != 0 && (param_1[2] == 0)))) &&
       ((param_1[3] == 0 && (param_1[4] == 0)))) {
      lVar2 = param_3;
      FUN_108188360();
      uVar1 = ((uint)((ulong)plVar3 >> 0x18) & 0xff) * (int)lVar2 + 0x80;
      fVar5 = (float)(uVar1 + (uVar1 >> 8) >> 8) * 0.003921569;
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)(param_3 + 0x3c) = fVar6;
    }
  }
  return;
}



/* Entry: 10838c6cc; end: 10838c6e7;  */

void FUN_10838c6cc(void)

{
  return;
}



/* Entry: 10838c6e8; end: 10838c75f;  */

long FUN_10838c6e8(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 8);
  plVar2 = plVar7 + *(int *)(param_1 + 0x14);
  for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    plVar6 = (long *)*plVar7;
    plVar1 = plVar6 + 1;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  func_0x00010840f140(param_1);
  _free(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10838c760; end: 10838c82f;  */

undefined8 * FUN_10838c760(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_10838e604(&lStack_38,(long)(int)uVar1);
    for (uVar6 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1) {
      if ((long)*(int *)(param_1 + 0x14) <= (long)uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10838c820);
        (*pcVar3)();
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 8) + uVar6 * 8) + 0x60))(&uStack_40);
      uVar2 = uStack_40;
      uStack_40 = 0;
      *(undefined8 *)(lStack_38 + uVar6 * 8) = uVar2;
      func_0x00010811496c(&uStack_40);
    }
    puVar4 = (undefined8 *)0x10;
    __Znwm();
    puVar5 = puVar4;
    func_0x00010838e9ac();
    *puVar5 = extraout_x8;
    *(uint *)(puVar5 + 1) = uVar1;
    FUN_108330404(&lStack_38);
  }
  return puVar4;
}



/* Entry: 10838c830; end: 10838c887;  */

void FUN_10838c830(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_2;
  FUN_10838c888();
  uStack_30 = param_3;
  uStack_28 = uVar1;
  func_0x00010838c8c8(param_1,&uStack_30);
  *param_1 = &PTR_DAT_110a3f620;
  param_1[0x195] = 0;
  param_1[0x196] = param_2;
  param_1[0x197] = 0;
  return;
}



/* Entry: 10838c888; end: 10838c8e7;  */

undefined1  [16] FUN_10838c888(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&uStack_20;
  func_0x00010812f180();
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010821b838(&uStack_20,&UNK_10df1e3bc);
  if (iVar1 == 0) {
    uStack_18 = 0;
    uStack_20 = 0;
  }
  auVar2._8_8_ = uStack_18;
  auVar2._0_8_ = uStack_20;
  return auVar2;
}



/* Entry: 10838c8e8; end: 10838c92f;  */

void FUN_10838c8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  FUN_10838c930();
  *(undefined8 *)(param_1 + 0xcb0) = param_2;
  FUN_10838c888();
  uStack_40 = param_3;
  uStack_38 = uVar1;
  FUN_10833ba10(param_1,&uStack_40);
  return;
}



/* Entry: 10838c930; end: 10838c95f;  */

void FUN_10838c930(long param_1)

{
  FUN_1083839f4(param_1 + 0xcb8,0);
  *(undefined8 *)(param_1 + 0xcb0) = 0;
  *(undefined8 *)(param_1 + 0xca8) = 0;
  return;
}



/* Entry: 10838c960; end: 10838c9f7;  */

void FUN_10838c960(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00010838e7cc();
  if ((bool)in_ZR) {
    func_0x00010838e83c();
  }
  func_0x00010838e6f4();
  func_0x00010838e890(extraout_x8 + 0x58);
  func_0x00010838e798();
  *(long **)(unaff_x20 + 0x28) = param_1 + 10;
  func_0x00010838e8b4(0x19);
  lVar4 = *unaff_x19;
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
  *param_1 = lVar4;
  lVar4 = unaff_x19[1];
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
  param_1[1] = lVar4;
  lVar4 = unaff_x19[2];
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
  param_1[2] = lVar4;
  lVar4 = unaff_x19[3];
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
  param_1[3] = lVar4;
  lVar4 = unaff_x19[4];
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
  param_1[4] = lVar4;
  lVar4 = unaff_x19[5];
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
  param_1[5] = lVar4;
  lVar5 = unaff_x19[7];
  lVar4 = unaff_x19[6];
  uVar6 = *(undefined8 *)((long)unaff_x19 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)unaff_x19 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar6;
  param_1[7] = lVar5;
  param_1[6] = lVar4;
  return;
}



/* Entry: 10838c9f8; end: 10838ca8b;  */

void FUN_10838c9f8(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = param_1;
  FUN_10838ca8c(param_1,param_4);
  lVar4 = *(long *)(param_1 + 0xcb0);
  iVar3 = *(int *)(lVar4 + 0xc);
  if (iVar3 == *(int *)(lVar4 + 0x10)) {
    FUN_10838a96c(lVar4);
    iVar3 = *(int *)(lVar4 + 0xc);
  }
  *(int *)(lVar4 + 0xc) = iVar3 + 1;
  *(long *)(lVar4 + 0x40) = *(long *)(lVar4 + 0x40) + 0x68;
  lVar2 = lVar4 + 0x20;
  func_0x00010838e7a4(lVar2,0x60);
  *(long *)(lVar4 + 0x28) = lVar2 + 0x60;
  func_0x00010838e8fc(0x1d);
  *(undefined4 *)(lVar2 + 0x50) = param_2;
  *(undefined4 *)(lVar2 + 0x54) = param_3;
  *(long *)(lVar2 + 0x58) = lVar1;
  return;
}



/* Entry: 10838ca8c; end: 10838cb53;  */

void FUN_10838ca8c(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  long unaff_x21;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0xcb0);
    *(long *)(lVar2 + 0x40) = *(long *)(lVar2 + 0x40) + (long)param_3 * 8 + 4;
    if (((ulong)param_3 >> 0x20 != 0) || ((ulong)param_3 >> 0x1d != 0)) {
      _abort();
      func_0x00010838e730();
      if ((bool)in_ZR) {
        func_0x00010838e804();
      }
      func_0x00010838e70c();
      func_0x00010838e97c();
      func_0x00010838e748();
      *(long *)(unaff_x21 + 0x28) = param_1 + 0x60;
      func_0x00010838e81c(0x1f);
      uVar3 = *param_3;
      *(undefined8 *)(param_1 + 0x58) = param_3[1];
      *(undefined8 *)(param_1 + 0x50) = uVar3;
      return;
    }
    lVar2 = lVar2 + 0x20;
    func_0x00010838e7fc(lVar2,(int)param_3 << 3);
    func_0x00010838e95c();
    for (puVar1 = extraout_x8; param_3 != puVar1; puVar1 = (undefined8 *)((long)puVar1 + 1)) {
      *(undefined8 *)(lVar2 + (long)puVar1 * 8) = *(undefined8 *)(param_2 + (long)puVar1 * 8);
    }
  }
  return;
}



/* Entry: 10838cb54; end: 10838cbbb;  */

void FUN_10838cb54(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x21;
  
  func_0x00010838e730();
  if ((bool)in_ZR) {
    func_0x00010838e804();
  }
  func_0x00010838e988();
  func_0x00010838e8a8(extraout_x8 + 0x70);
  func_0x00010838e7a4();
  *(long *)(unaff_x21 + 0x28) = param_1 + 0x68;
  func_0x00010838e80c(0x20);
  FUN_10838f538(param_1 + 0x50);
  return;
}



/* Entry: 10838cbbc; end: 10838cc07;  */

void FUN_10838cbbc(long param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010838e730();
  if ((bool)in_ZR) {
    func_0x00010838e804();
  }
  func_0x00010838e70c();
  func_0x00010838e97c();
  func_0x00010838e748();
  *(long *)(unaff_x21 + 0x28) = param_1 + 0x60;
  func_0x00010838e81c(0x17);
  uVar1 = *unaff_x19;
  *(undefined8 *)(param_1 + 0x58) = unaff_x19[1];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}



/* Entry: 10838cc08; end: 10838cc9f;  */

void FUN_10838cc08(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  func_0x00010838e9a0();
  lVar3 = *(long *)(param_1 + 0xcb0);
  iVar2 = *(int *)(lVar3 + 0xc);
  if (iVar2 == *(int *)(lVar3 + 0x10)) {
    func_0x00010838e90c();
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  func_0x00010838e96c(iVar2);
  *(long *)(lVar3 + 0x40) = *(long *)(lVar3 + 0x40) + 0x78;
  lVar1 = lVar3 + 0x20;
  func_0x00010838e7a4(lVar1,0x70);
  *(long *)(lVar3 + 0x28) = lVar1 + 0x70;
  func_0x00010838e80c(0x11);
  uVar4 = *param_2;
  *(undefined8 *)(lVar1 + 0x58) = param_2[1];
  *(undefined8 *)(lVar1 + 0x50) = uVar4;
  *(undefined4 *)(lVar1 + 0x60) = unaff_s9;
  *(undefined4 *)(lVar1 + 100) = unaff_s8;
  *(undefined4 *)(lVar1 + 0x68) = param_3;
  return;
}



/* Entry: 10838cca0; end: 10838ccfb;  */

void FUN_10838cca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  undefined4 extraout_w8;
  long extraout_x8;
  long unaff_x21;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x00010838e730();
  if ((bool)in_ZR) {
    func_0x00010838e804();
  }
  func_0x00010838e70c();
  func_0x00010838e8a8(extraout_x8 + 0x90);
  func_0x00010838e7a4();
  *(long *)(unaff_x21 + 0x28) = param_4 + 0x88;
  func_0x00010838e81c(0x1e);
  func_0x00010838e94c();
  *(undefined4 *)(param_4 + 0x80) = extraout_w8;
  *(undefined8 *)(param_4 + 0x68) = in_register_00005028;
  *(undefined8 *)(param_4 + 0x60) = param_2;
  *(undefined8 *)(param_4 + 0x78) = in_register_00005048;
  *(undefined8 *)(param_4 + 0x70) = param_3;
  *(undefined8 *)(param_4 + 0x58) = in_register_00005008;
  *(undefined8 *)(param_4 + 0x50) = param_1;
  return;
}



/* Entry: 10838ccfc; end: 10838cd8f;  */

void FUN_10838ccfc(void)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  int extraout_w8;
  undefined4 extraout_w8_00;
  long extraout_x9;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010838e914();
  if ((bool)in_ZR) {
    func_0x00010838e90c();
  }
  func_0x00010838e96c();
  puVar1 = (undefined4 *)(extraout_x9 + (long)extraout_w8 * 0x10);
  *(long *)(unaff_x22 + 0x40) = *(long *)(unaff_x22 + 0x40) + 0xc0;
  lVar2 = unaff_x22 + 0x20;
  func_0x00010838e7a4(lVar2,0xb8);
  *(long *)(unaff_x22 + 0x28) = lVar2 + 0xb8;
  *puVar1 = 0x16;
  *(long *)(puVar1 + 2) = lVar2;
  FUN_108375f34();
  uVar4 = unaff_x20[1];
  uVar3 = *unaff_x20;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  uVar8 = unaff_x20[5];
  uVar7 = unaff_x20[4];
  *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(unaff_x20 + 6);
  *(undefined8 *)(lVar2 + 0x68) = uVar6;
  *(undefined8 *)(lVar2 + 0x60) = uVar5;
  *(undefined8 *)(lVar2 + 0x78) = uVar8;
  *(undefined8 *)(lVar2 + 0x70) = uVar7;
  *(undefined8 *)(lVar2 + 0x58) = uVar4;
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  func_0x00010838e94c();
  *(undefined4 *)(lVar2 + 0xb4) = extraout_w8_00;
  *(undefined8 *)(lVar2 + 0xac) = uVar8;
  *(undefined8 *)(lVar2 + 0xa4) = uVar7;
  *(undefined8 *)(lVar2 + 0x9c) = uVar6;
  *(undefined8 *)(lVar2 + 0x94) = uVar5;
  *(undefined8 *)(lVar2 + 0x8c) = uVar4;
  *(undefined8 *)(lVar2 + 0x84) = uVar3;
  return;
}



/* Entry: 10838cd90; end: 10838cedb;  */

void FUN_10838cd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6,undefined8 *param_7)

{
  int iVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w10;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uStack_58;
  
  lVar6 = *(long *)(param_5 + 0xcb8);
  if (lVar6 == 0) {
    puVar2 = (undefined4 *)0x18;
    __Znwm();
    *puVar2 = 8;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    uStack_58 = 0;
    FUN_1083839f4((long *)(param_5 + 0xcb8),puVar2);
    FUN_1083839d4(&uStack_58);
    lVar6 = *(long *)(param_5 + 0xcb8);
  }
  do {
    func_0x00010838e7bc();
    uVar11 = (undefined4)param_4;
    uVar10 = (undefined4)param_3;
  } while (extraout_w10 != 0);
  func_0x00010840f37c(lVar6);
  *(long **)(*(long *)(lVar6 + 8) + (long)*(int *)(lVar6 + 0x14) * 8 + -8) = param_6;
  if (param_7 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(param_5 + 0xcb0);
    func_0x00010838e63c(puVar3,1);
    uVar5 = param_7[4];
    param_2 = *param_7;
    uVar8 = param_7[3];
    param_1 = param_7[2];
    puVar3[1] = param_7[1];
    *puVar3 = param_2;
    puVar3[3] = uVar8;
    puVar3[2] = param_1;
    puVar3[4] = uVar5;
  }
  uVar9 = (undefined4)param_2;
  uVar7 = (undefined4)param_1;
  (**(code **)(*param_6 + 0x38))(param_6);
  iVar1 = *(int *)(*(long *)(param_5 + 0xcb8) + 0x14);
  lVar6 = *(long *)(param_5 + 0xcb0);
  func_0x00010838e930();
  if ((bool)in_ZR) {
    func_0x00010838e888();
  }
  func_0x00010838e7ac();
  *(long *)(lVar6 + 0x40) = *(long *)(lVar6 + 0x40) + 0x28;
  plVar4 = (long *)(lVar6 + 0x20);
  func_0x00010838e7a4(plVar4,0x20);
  *(long **)(lVar6 + 0x28) = plVar4 + 4;
  func_0x00010838e8b4(0x12);
  *plVar4 = (long)puVar3;
  *(undefined4 *)(plVar4 + 1) = uVar7;
  *(undefined4 *)((long)plVar4 + 0xc) = uVar9;
  *(undefined4 *)(plVar4 + 2) = uVar10;
  *(undefined4 *)((long)plVar4 + 0x14) = uVar11;
  *(int *)(plVar4 + 3) = iVar1 + -1;
  return;
}



/* Entry: 10838cedc; end: 10838cf3b;  */

void FUN_10838cedc(long param_1)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  func_0x00010838e730();
  if ((bool)in_ZR) {
    func_0x00010838e804();
  }
  func_0x00010838e988();
  func_0x00010838e97c();
  func_0x00010838e748();
  *(long *)(unaff_x21 + 0x28) = param_1 + 0x60;
  func_0x00010838e80c(0x1a);
  FUN_10838ea4c(param_1 + 0x50);
  return;
}



/* Entry: 10838cf3c; end: 10838d00f;  */

void FUN_10838cf3c(long param_1,ulong param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  int extraout_w10;
  long lVar3;
  long unaff_x23;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  ulong uStack_58;
  
  func_0x00010838e9a0();
  lVar2 = param_1;
  FUN_10838d010();
  if (param_2 != 0) {
    do {
      func_0x00010838e7bc();
    } while (extraout_w10 != 0);
  }
  lVar3 = *(long *)(param_1 + 0xcb0);
  uStack_58 = param_2;
  func_0x00010838ea10();
  if ((bool)in_ZR) {
    func_0x00010838e804();
    param_2 = (ulong)*(uint *)(lVar3 + 0xc);
  }
  func_0x00010838e7e0();
  *(long *)(lVar3 + 0x40) = extraout_x8 + 0x38;
  plVar1 = (long *)(lVar3 + 0x20);
  func_0x00010838e7a4(plVar1,0x30);
  *(long **)(lVar3 + 0x28) = plVar1 + 6;
  func_0x00010838e84c(unaff_x23 + (long)(int)param_2 * 0x10);
  func_0x00010838e9ac();
  *plVar1 = lVar2;
  plVar1[1] = extraout_x8_00;
  *(undefined4 *)(plVar1 + 2) = unaff_s9;
  *(undefined4 *)((long)plVar1 + 0x14) = unaff_s8;
  lVar2 = param_3[2];
  lVar3 = *param_3;
  plVar1[4] = param_3[1];
  plVar1[3] = lVar3;
  plVar1[5] = lVar2;
  func_0x000106f47184(&uStack_58);
  return;
}



/* Entry: 10838d010; end: 10838d057;  */

long FUN_10838d010(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_1 + 0xcb0);
    func_0x00010838e890(*(long *)(lVar1 + 0x40) + 0x58);
    func_0x00010838e798();
    *(long *)(lVar1 + 0x28) = param_1 + 0x50;
    FUN_108375f34();
    return param_1;
  }
  return 0;
}



/* Entry: 10838d058; end: 10838d14f;  */

void FUN_10838d058(long param_1,long param_2,long *param_3,long *param_4,long *param_5,
                  undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  long lVar3;
  int iVar4;
  long lVar5;
  long lStack_58;
  
  lVar2 = param_1;
  FUN_10838d010(param_1,param_6);
  if (param_2 != 0) {
    do {
      func_0x00010838e7bc();
    } while (extraout_w10 != 0);
  }
  lVar3 = *(long *)(param_1 + 0xcb0);
  iVar4 = *(int *)(lVar3 + 0xc);
  lStack_58 = param_2;
  if (iVar4 == *(int *)(lVar3 + 0x10)) {
    func_0x00010838e9c0();
    iVar4 = *(int *)(lVar3 + 0xc);
  }
  *(int *)(lVar3 + 0xc) = iVar4 + 1;
  lVar5 = *(long *)(lVar3 + 0x18);
  *(long *)(lVar3 + 0x40) = *(long *)(lVar3 + 0x40) + 0x58;
  plVar1 = (long *)(lVar3 + 0x20);
  func_0x00010838e798();
  *(long **)(lVar3 + 0x28) = plVar1 + 10;
  func_0x00010838e84c(lVar5 + (long)iVar4 * 0x10);
  func_0x00010838e9ac();
  *plVar1 = lVar2;
  plVar1[1] = extraout_x8;
  lVar2 = *param_3;
  plVar1[3] = param_3[1];
  plVar1[2] = lVar2;
  lVar2 = *param_4;
  plVar1[5] = param_4[1];
  plVar1[4] = lVar2;
  lVar2 = param_5[2];
  lVar3 = *param_5;
  plVar1[7] = param_5[1];
  plVar1[6] = lVar3;
  plVar1[8] = lVar2;
  *(undefined4 *)(plVar1 + 9) = param_7;
  func_0x000106f47184(&lStack_58);
  return;
}



/* Entry: 10838d150; end: 10838d31b;  */

/* WARNING: Possible PIC construction at 0x00010838d254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010838d258) */
/* WARNING: Removing unreachable block (ram,0x00010838d270) */
/* WARNING: Removing unreachable block (ram,0x00010838d27c) */
/* WARNING: Removing unreachable block (ram,0x00010838e77c) */
/* WARNING: Removing unreachable block (ram,0x00010812fee8) */
/* WARNING: Removing unreachable block (ram,0x00010812fef0) */
/* WARNING: Removing unreachable block (ram,0x00010812fef8) */
/* WARNING: Removing unreachable block (ram,0x00010812ff00) */
/* WARNING: Removing unreachable block (ram,0x00010812ff04) */
/* WARNING: Removing unreachable block (ram,0x00010812ff14) */
/* WARNING: Removing unreachable block (ram,0x00010812ff08) */
/* WARNING: Removing unreachable block (ram,0x00010812ff0c) */

void FUN_10838d150(ulong param_1,long param_2,undefined8 *param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 in_ZR;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  int extraout_w10;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *******pppppppuVar13;
  undefined8 uVar14;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined4 in_stack_00000004;
  ulong in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 ******in_stack_00000070;
  ulong uStack_30;
  undefined8 *puStack_28;
  long lStack_20;
  ulong uStack_18;
  undefined8 ******ppppppuStack_10;
  code *pcStack_8;
  
  func_0x00010838ea30();
  if (param_3[2] == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulong)(uint)(*(int *)(param_3 + 3) + 1 +
                          (*(int *)(param_3 + 3) + 1) * *(int *)((long)param_3 + 0x1c));
  }
  uVar4 = param_1;
  FUN_10838d010(param_1,param_6);
  if (param_2 != 0) {
    do {
      func_0x00010838e7bc();
    } while (extraout_w10 != 0);
  }
  uVar5 = param_1;
  in_stack_00000018 = param_2;
  FUN_10838d31c(param_1,*param_3,(long)*(int *)(param_3 + 3));
  piVar8 = (int *)param_3[1];
  uVar6 = param_1;
  FUN_10838d31c(param_1,piVar8,(long)*(int *)((long)param_3 + 0x1c));
  uVar10 = param_3[2];
  lVar12 = (long)(int)uVar11;
  in_stack_00000004 = (undefined4)param_5;
  in_stack_00000008 = uVar4;
  in_stack_00000010 = param_4;
  if (uVar10 != 0) {
    param_4 = *(long *)(param_1 + 0xcb0);
    *(long *)(param_4 + 0x40) = lVar12 + *(long *)(param_4 + 0x40) + 1;
    if ((int)uVar11 < 0) {
      _abort();
      param_1 = uVar6;
      func_0x00010838e93c();
      func_0x00010838e7f4();
      puVar3 = &uStack_30;
      pcStack_8 = FUN_10838d31c;
      pppppppuVar13 = &ppppppuStack_10;
      if (piVar8 == (int *)0x0) {
        return;
      }
      uStack_30 = uVar11;
      puStack_28 = param_3;
      lStack_20 = param_4;
      uStack_18 = uVar6;
      ppppppuStack_10 = &stack0x00000070;
      func_0x00010838e8dc();
      if ((extraout_x8 == 0) && (uVar6 >> 0x1e == 0)) {
        lVar12 = uVar11 + 0x20;
        func_0x00010838e7fc(lVar12,(int)uVar6 << 2);
        func_0x00010838e95c();
        for (uVar11 = extraout_x8_00; uVar6 != uVar11; uVar11 = uVar11 + 1) {
          *(int *)(lVar12 + uVar11 * 4) = piVar8[uVar11];
        }
        return;
      }
      uVar14 = 0x10838d380;
      _abort();
      goto SUB_10838d380;
    }
    lVar7 = param_4 + 0x20;
    func_0x0001081865e0(lVar7,uVar11,1);
    *(long *)(param_4 + 0x28) = lVar7 + lVar12;
    for (lVar9 = 0; in_ZR = lVar12 == lVar9, !(bool)in_ZR; lVar9 = lVar9 + 1) {
      *(undefined1 *)(lVar7 + lVar9) = *(undefined1 *)(uVar10 + lVar9);
    }
  }
  piVar8 = (int *)param_3[5];
  uVar14 = 0x10838d258;
  puVar3 = (ulong *)register0x00000008;
  uVar6 = uVar10;
  pppppppuVar13 = &stack0x00000070;
SUB_10838d380:
  *(ulong *)((long)puVar3 + -0x30) = uVar11;
  *(undefined8 **)((long)puVar3 + -0x28) = param_3;
  *(long *)((long)puVar3 + -0x20) = param_4;
  *(ulong *)((long)puVar3 + -0x18) = uVar6;
  *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar13;
  *(undefined8 *)((long)puVar3 + -8) = uVar14;
  if (piVar8 != (int *)0x0) {
    func_0x00010838e8dc();
    if ((extraout_x8_01 != 0) || (uVar6 >> 0x1e != 0)) {
      _abort();
      *(undefined8 *)((long)puVar3 + -0x80) = unaff_d9;
      *(undefined8 *)((long)puVar3 + -0x78) = unaff_d8;
      *(ulong *)((long)puVar3 + -0x70) = uVar5;
      *(long *)((long)puVar3 + -0x68) = param_5;
      *(ulong *)((long)puVar3 + -0x60) = uVar11;
      *(undefined8 **)((long)puVar3 + -0x58) = param_3;
      *(long *)((long)puVar3 + -0x50) = param_4;
      *(ulong *)((long)puVar3 + -0x48) = uVar6;
      *(undefined1 **)((long)puVar3 + -0x40) = (undefined1 *)((long)puVar3 + -0x10);
      *(code **)((long)puVar3 + -0x38) = FUN_10838d3e4;
      func_0x00010838e9a0();
      if (piVar8 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar12 = *(long *)(param_1 + 0xcb0);
      func_0x00010838ea10();
      if ((bool)in_ZR) {
        func_0x00010838e804();
        uVar11 = (ulong)*(uint *)(lVar12 + 0xc);
      }
      func_0x00010838e7e0();
      func_0x00010838e97c();
      func_0x00010838e748();
      *(ulong *)(lVar12 + 0x28) = param_1 + 0x60;
      func_0x00010838e84c(param_5 + (long)(int)uVar11 * 0x10);
      func_0x00010838e844();
      *(int **)(param_1 + 0x50) = piVar8;
      *(int *)(param_1 + 0x58) = (int)unaff_d9;
      *(int *)(param_1 + 0x5c) = (int)unaff_d8;
      return;
    }
    lVar12 = uVar11 + 0x20;
    func_0x00010838e7fc(lVar12,(int)uVar6 << 2);
    func_0x00010838e95c();
    for (uVar11 = extraout_x8_02; uVar6 != uVar11; uVar11 = uVar11 + 1) {
      *(int *)(lVar12 + uVar11 * 4) = piVar8[uVar11];
    }
  }
  return;
}



/* Entry: 10838d31c; end: 10838d3e3;  */

/* WARNING: Removing unreachable block (ram,0x00010812fee8) */
/* WARNING: Removing unreachable block (ram,0x00010812fef0) */
/* WARNING: Removing unreachable block (ram,0x00010812fef8) */
/* WARNING: Removing unreachable block (ram,0x00010812ff00) */
/* WARNING: Removing unreachable block (ram,0x00010812ff04) */
/* WARNING: Removing unreachable block (ram,0x00010812ff14) */
/* WARNING: Removing unreachable block (ram,0x00010812ff08) */
/* WARNING: Removing unreachable block (ram,0x00010812ff0c) */

void FUN_10838d31c(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar3;
  ulong unaff_x19;
  long lVar4;
  ulong unaff_x22;
  long unaff_x23;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  if (param_2 != (int *)0x0) {
    func_0x00010838e8dc();
    if ((extraout_x8 == 0) && (unaff_x19 >> 0x1e == 0)) {
      lVar4 = unaff_x22 + 0x20;
      func_0x00010838e7fc(lVar4,(int)unaff_x19 << 2);
      func_0x00010838e95c();
      for (uVar3 = extraout_x8_00; unaff_x19 != uVar3; uVar3 = uVar3 + 1) {
        *(int *)(lVar4 + uVar3 * 4) = param_2[uVar3];
      }
    }
    else {
      _abort();
      if (param_2 != (int *)0x0) {
        func_0x00010838e8dc();
        if ((extraout_x8_01 != 0) || (unaff_x19 >> 0x1e != 0)) {
          _abort();
          func_0x00010838e9a0();
          if (param_2 != (int *)0x0) {
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
              if (bVar2) {
                *param_2 = *param_2 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          lVar4 = *(long *)(param_1 + 0xcb0);
          func_0x00010838ea10();
          if ((bool)in_ZR) {
            func_0x00010838e804();
            unaff_x22 = (ulong)*(uint *)(lVar4 + 0xc);
          }
          func_0x00010838e7e0();
          func_0x00010838e97c();
          func_0x00010838e748();
          *(long *)(lVar4 + 0x28) = param_1 + 0x60;
          func_0x00010838e84c(unaff_x23 + (long)(int)unaff_x22 * 0x10);
          func_0x00010838e844();
          *(int **)(param_1 + 0x50) = param_2;
          *(undefined4 *)(param_1 + 0x58) = unaff_s9;
          *(undefined4 *)(param_1 + 0x5c) = unaff_s8;
          return;
        }
        lVar4 = unaff_x22 + 0x20;
        func_0x00010838e7fc(lVar4,(int)unaff_x19 << 2);
        func_0x00010838e95c();
        for (uVar3 = extraout_x8_02; unaff_x19 != uVar3; uVar3 = uVar3 + 1) {
          *(int *)(lVar4 + uVar3 * 4) = param_2[uVar3];
        }
      }
    }
  }
  return;
}



/* Entry: 10838d3e4; end: 10838d487;  */

/* WARNING: Removing unreachable block (ram,0x00010812fee8) */
/* WARNING: Removing unreachable block (ram,0x00010812fef0) */
/* WARNING: Removing unreachable block (ram,0x00010812fef8) */
/* WARNING: Removing unreachable block (ram,0x00010812ff00) */
/* WARNING: Removing unreachable block (ram,0x00010812ff04) */
/* WARNING: Removing unreachable block (ram,0x00010812ff14) */
/* WARNING: Removing unreachable block (ram,0x00010812ff08) */
/* WARNING: Removing unreachable block (ram,0x00010812ff0c) */

void FUN_10838d3e4(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long lVar3;
  int unaff_w22;
  long unaff_x23;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  func_0x00010838e9a0();
  if (param_2 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = *param_2 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar3 = *(long *)(param_1 + 0xcb0);
  func_0x00010838ea10();
  if ((bool)in_ZR) {
    func_0x00010838e804();
    unaff_w22 = *(int *)(lVar3 + 0xc);
  }
  func_0x00010838e7e0();
  func_0x00010838e97c();
  func_0x00010838e748();
  *(long *)(lVar3 + 0x28) = param_1 + 0x60;
  func_0x00010838e84c(unaff_x23 + (long)unaff_w22 * 0x10);
  func_0x00010838e844();
  *(int **)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x58) = unaff_s9;
  *(undefined4 *)(param_1 + 0x5c) = unaff_s8;
  return;
}



/* Entry: 10838d488; end: 10838d52f;  */

void FUN_10838d488(long param_1,long param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar2;
  int iVar3;
  long lVar4;
  long lStack_38;
  
  if (param_2 != 0) {
    do {
      func_0x00010838e7bc();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_1 + 0xcb0);
  iVar3 = *(int *)(lVar2 + 0xc);
  lStack_38 = param_2;
  if (iVar3 == *(int *)(lVar2 + 0x10)) {
    func_0x00010838e83c();
    iVar3 = *(int *)(lVar2 + 0xc);
  }
  *(int *)(lVar2 + 0xc) = iVar3 + 1;
  lVar4 = *(long *)(lVar2 + 0x18);
  *(long *)(lVar2 + 0x40) = *(long *)(lVar2 + 0x40) + 0x60;
  lVar1 = lVar2 + 0x20;
  func_0x00010838e7a4(lVar1,0x58);
  *(long *)(lVar2 + 0x28) = lVar1 + 0x58;
  func_0x00010838e84c(lVar4 + (long)iVar3 * 0x10);
  FUN_108375f34();
  func_0x00010838e9ac();
  *(undefined8 *)(lVar1 + 0x50) = extraout_x8;
  FUN_10827f8e8(&lStack_38);
  return;
}



/* Entry: 10838d530; end: 10838d5cb;  */

void FUN_10838d530(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piStack_48;
  
  piVar3 = *(int **)(param_2 + 0x10);
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (*(long *)(param_2 + 0x10) != 0) goto LAB_10838d598;
  }
  FUN_108403f88(&piStack_48,param_2);
  piVar3 = piStack_48;
  piStack_48 = (int *)0x0;
  func_0x00010838e944();
  func_0x00010838e5f8(piStack_48);
LAB_10838d598:
  FUN_10838d3e4(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),param_1,piVar3,
                param_3);
  func_0x00010838e944();
  return;
}



/* Entry: 10838d5cc; end: 10838d6c7;  */

void FUN_10838d5cc(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 in_ZR;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plStack_48;
  
  plVar7 = param_2 + 1;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x30))();
  *(long *)(param_1 + 0xca8) = *(long *)(param_1 + 0xca8) + (long)plVar5;
  lVar8 = param_1;
  FUN_10838d010(param_1,param_4);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *(int *)plVar7 = (int)*plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *(long *)(param_1 + 0xcb0);
  plStack_48 = param_2;
  func_0x00010838ea10();
  if ((bool)in_ZR) {
    func_0x00010838e804();
    param_2 = (long *)(ulong)*(uint *)(lVar6 + 0xc);
  }
  func_0x00010838e7e0();
  *(long *)(lVar6 + 0x40) = extraout_x8 + 0x40;
  plVar5 = (long *)(lVar6 + 0x20);
  func_0x00010838e7a4(plVar5,0x38);
  plVar4 = plStack_48;
  plVar1 = (long *)0x113254e20;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3;
  }
  *(long **)(lVar6 + 0x28) = plVar5 + 7;
  *(int *)(plVar7 + (long)(int)param_2 * 2) = 0x1c;
  (plVar7 + (long)(int)param_2 * 2)[1] = (long)plVar5;
  plStack_48 = (long *)0x0;
  *plVar5 = lVar8;
  plVar5[1] = (long)plVar4;
  lVar10 = plVar1[1];
  lVar9 = *plVar1;
  lVar6 = plVar1[3];
  lVar8 = plVar1[2];
  plVar5[6] = plVar1[4];
  plVar5[3] = lVar10;
  plVar5[2] = lVar9;
  plVar5[5] = lVar6;
  plVar5[4] = lVar8;
  func_0x0001081421e0();
  func_0x00010811496c(&plStack_48);
  return;
}



/* Entry: 10838d6c8; end: 10838d75f;  */

void FUN_10838d6c8(long param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar3;
  int unaff_w22;
  long unaff_x23;
  int *piStack_48;
  
  if (param_2 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = *param_2 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar3 = *(long *)(param_1 + 0xcb0);
  piStack_48 = param_2;
  func_0x00010838ea10();
  if ((bool)in_ZR) {
    func_0x00010838e804();
    unaff_w22 = *(int *)(lVar3 + 0xc);
  }
  func_0x00010838e7e0();
  func_0x00010838e97c();
  func_0x00010838e748();
  *(long *)(lVar3 + 0x28) = param_1 + 0x60;
  func_0x00010838e84c(unaff_x23 + (long)unaff_w22 * 0x10);
  func_0x00010838e844();
  func_0x00010838e9ac();
  *(undefined8 *)(param_1 + 0x50) = extraout_x8;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  func_0x00010827f564(&piStack_48);
  return;
}



/* Entry: 10838d760; end: 10838d7e7;  */

void FUN_10838d760(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x22;
  
  func_0x00010838e914();
  if ((bool)in_ZR) {
    func_0x00010838e90c();
  }
  func_0x00010838e96c();
  *(long *)(unaff_x22 + 0x40) = *(long *)(unaff_x22 + 0x40) + 0xd8;
  lVar1 = unaff_x22 + 0x20;
  func_0x00010838e7a4(lVar1,0xd0);
  *(long *)(unaff_x22 + 0x28) = lVar1 + 0xd0;
  lVar2 = lVar1;
  func_0x00010838e8fc(0x25);
  FUN_108367700(lVar2 + 0x50);
  uVar3 = *unaff_x19;
  *unaff_x19 = 0;
  *(undefined8 *)(lVar1 + 200) = uVar3;
  return;
}



/* Entry: 10838d7e8; end: 10838d8d3;  */

void FUN_10838d7e8(long param_1,long param_2,long param_3,long param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1;
    FUN_10838ca8c(param_1,param_2,0xc);
  }
  lVar2 = 0;
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010838d380(param_1,param_3,4);
  }
  lVar3 = 0;
  if (param_4 != 0) {
    lVar3 = param_1;
    FUN_10838ca8c(param_1,param_4,4);
  }
  lVar7 = *(long *)(param_1 + 0xcb0);
  iVar5 = *(int *)(lVar7 + 0xc);
  if (iVar5 == *(int *)(lVar7 + 0x10)) {
    FUN_10838a96c(lVar7);
    iVar5 = *(int *)(lVar7 + 0xc);
  }
  *(int *)(lVar7 + 0xc) = iVar5 + 1;
  puVar1 = (undefined4 *)(*(long *)(lVar7 + 0x18) + (long)iVar5 * 0x10);
  *(long *)(lVar7 + 0x40) = *(long *)(lVar7 + 0x40) + 0x78;
  lVar4 = lVar7 + 0x20;
  func_0x00010838e7a4(lVar4,0x70);
  *(long *)(lVar7 + 0x28) = lVar4 + 0x70;
  *puVar1 = 0x1b;
  *(long *)(puVar1 + 2) = lVar4;
  func_0x00010838e844();
  *(long *)(lVar4 + 0x50) = lVar6;
  *(long *)(lVar4 + 0x58) = lVar2;
  *(long *)(lVar4 + 0x60) = lVar3;
  *(undefined4 *)(lVar4 + 0x68) = param_5;
  return;
}



/* Entry: 10838d8d4; end: 10838da8b;  */

undefined8 *
FUN_10838d8d4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,uint param_6,
             undefined4 param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int extraout_w10;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000080;
  undefined8 *in_stack_00000088;
  
  func_0x00010838ea30();
  lVar8 = param_1;
  FUN_10838d010();
  if (param_2 != 0) {
    do {
      func_0x00010838e7bc();
    } while (extraout_w10 != 0);
  }
  lVar9 = (long)(int)param_6;
  if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0xcb0);
    *(long *)(lVar6 + 0x40) = *(long *)(lVar6 + 0x40) + lVar9 * 0x10 + 4;
    if (((int)param_6 < 0) || (param_6 >> 0x1c != 0)) {
      _abort();
      func_0x00010838e93c();
      func_0x00010838e7f4();
      if (in_stack_00000088 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar1 = *(undefined8 **)(lVar8 + 0xcb0);
      func_0x00010838e6a0(puVar1,1);
      uVar3 = *in_stack_00000088;
      puVar1[1] = in_stack_00000088[1];
      *puVar1 = uVar3;
      return puVar1;
    }
    lVar8 = lVar6 + 0x20;
    func_0x00010838e7fc(lVar8,(ulong)(param_6 << 4));
    lVar2 = 0;
    *(ulong *)(lVar6 + 0x28) = lVar8 + (ulong)(param_6 << 4);
    for (lVar6 = lVar9; lVar6 != 0; lVar6 = lVar6 + -1) {
      uVar3 = *(undefined8 *)(param_3 + lVar2);
      ((undefined8 *)(lVar8 + lVar2))[1] = ((undefined8 *)(param_3 + lVar2))[1];
      *(undefined8 *)(lVar8 + lVar2) = uVar3;
      lVar2 = lVar2 + 0x10;
    }
  }
  if (param_4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0xcb0);
    func_0x00010838e6a0(lVar6,lVar9);
    lVar2 = 0;
    for (lVar4 = lVar9; lVar4 != 0; lVar4 = lVar4 + -1) {
      uVar3 = *(undefined8 *)(param_4 + lVar2);
      ((undefined8 *)(lVar6 + lVar2))[1] = ((undefined8 *)(param_4 + lVar2))[1];
      *(undefined8 *)(lVar6 + lVar2) = uVar3;
      lVar2 = lVar2 + 0x10;
    }
  }
  lVar2 = param_1;
  func_0x00010838d380(param_1,param_5,lVar9);
  lVar9 = param_1;
  FUN_10838da8c(param_1,in_stack_00000080);
  lVar4 = *(long *)(param_1 + 0xcb0);
  iVar5 = *(int *)(lVar4 + 0xc);
  if (iVar5 == *(int *)(lVar4 + 0x10)) {
    func_0x00010838e9c0();
    iVar5 = *(int *)(lVar4 + 0xc);
  }
  *(int *)(lVar4 + 0xc) = iVar5 + 1;
  lVar7 = *(long *)(lVar4 + 0x18);
  *(long *)(lVar4 + 0x40) = *(long *)(lVar4 + 0x40) + 0x58;
  puVar1 = (undefined8 *)(lVar4 + 0x20);
  func_0x00010838e798();
  *(undefined8 **)(lVar4 + 0x28) = puVar1 + 10;
  func_0x00010838e84c(lVar7 + (long)iVar5 * 0x10);
  func_0x00010838e9fc();
  puVar1[2] = lVar8;
  puVar1[3] = lVar6;
  puVar1[4] = lVar2;
  *(uint *)(puVar1 + 5) = param_6;
  *(undefined4 *)((long)puVar1 + 0x2c) = param_7;
  uVar3 = param_8[2];
  uVar10 = *param_8;
  puVar1[7] = param_8[1];
  puVar1[6] = uVar10;
  puVar1[8] = uVar3;
  puVar1[9] = lVar9;
  func_0x00010838e93c();
  return puVar1;
}



/* Entry: 10838da8c; end: 10838dac3;  */

undefined8 * FUN_10838da8c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0xcb0);
    func_0x00010838e6a0(puVar1,1);
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



/* Entry: 10838dac4; end: 10838db3b;  */

void FUN_10838dac4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 *unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  
  lVar2 = *(long *)(param_1 + 0xcb0);
  iVar1 = *(int *)(lVar2 + 0xc);
  if (iVar1 == *(int *)(lVar2 + 0x10)) {
    func_0x00010838e804();
    iVar1 = *(int *)(lVar2 + 0xc);
  }
  func_0x00010838e70c(iVar1);
  func_0x00010838e8a8(extraout_x8 + 0x40);
  func_0x00010838e7a4();
  *(long *)(lVar2 + 0x28) = param_1 + 0x38;
  *unaff_x22 = 0x26;
  *(long *)(unaff_x22 + 2) = param_1;
  FUN_10838ea4c();
  uVar4 = param_3[1];
  uVar3 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(param_1 + 0x30) = param_3[4];
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  return;
}



/* Entry: 10838db3c; end: 10838dc23;  */

void FUN_10838db3c(long param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int *piStack_50;
  undefined8 uStack_48;
  
  FUN_1083a3348(&uStack_48,param_3);
  if (param_4 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_4,0x10);
      if (bVar2) {
        *param_4 = *param_4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar6 = *(long *)(param_1 + 0xcb0);
  iVar7 = *(int *)(lVar6 + 0xc);
  piStack_50 = param_4;
  if (iVar7 == *(int *)(lVar6 + 0x10)) {
    func_0x00010838e83c();
    iVar7 = *(int *)(lVar6 + 0xc);
  }
  *(int *)(lVar6 + 0xc) = iVar7 + 1;
  lVar8 = *(long *)(lVar6 + 0x18);
  *(long *)(lVar6 + 0x40) = *(long *)(lVar6 + 0x40) + 0x28;
  puVar4 = (undefined8 *)(lVar6 + 0x20);
  func_0x00010838e7a4(puVar4,0x20);
  *(undefined8 **)(lVar6 + 0x28) = puVar4 + 4;
  puVar5 = puVar4;
  func_0x00010838e84c(lVar8 + (long)iVar7 * 0x10);
  uVar9 = *param_2;
  puVar5[1] = param_2[1];
  *puVar5 = uVar9;
  FUN_1083a33c4(puVar5 + 2,&uStack_48);
  piVar3 = piStack_50;
  piStack_50 = (int *)0x0;
  puVar4[3] = piVar3;
  func_0x0001078bddf8(&piStack_50);
  FUN_1083a3ca0(uStack_48);
  return;
}



/* Entry: 10838dc24; end: 10838dcd7;  */

void FUN_10838dc24(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = param_1;
  FUN_10838ca8c(param_1,param_3,4);
  lVar5 = *(long *)(param_1 + 0xcb0);
  iVar4 = *(int *)(lVar5 + 0xc);
  if (iVar4 == *(int *)(lVar5 + 0x10)) {
    func_0x00010838e9c0();
    iVar4 = *(int *)(lVar5 + 0xc);
  }
  *(int *)(lVar5 + 0xc) = iVar4 + 1;
  puVar1 = (undefined4 *)(*(long *)(lVar5 + 0x18) + (long)iVar4 * 0x10);
  *(long *)(lVar5 + 0x40) = *(long *)(lVar5 + 0x40) + 0x38;
  puVar3 = (undefined8 *)(lVar5 + 0x20);
  func_0x00010838e7a4(puVar3,0x30);
  *(undefined8 **)(lVar5 + 0x28) = puVar3 + 6;
  *puVar1 = 0x28;
  *(undefined8 **)(puVar1 + 2) = puVar3;
  uVar6 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar6;
  puVar3[2] = lVar2;
  *(undefined4 *)(puVar3 + 3) = param_4;
  uVar6 = *param_5;
  *(undefined8 *)((long)puVar3 + 0x24) = param_5[1];
  *(undefined8 *)((long)puVar3 + 0x1c) = uVar6;
  *(undefined4 *)((long)puVar3 + 0x2c) = param_6;
  return;
}



/* Entry: 10838dcd8; end: 10838de7f;  */

void FUN_10838dcd8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long *param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9,
                  undefined4 param_10,long param_11,ulong param_12,int param_13,int param_14)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  func_0x00010838ea30();
  FUN_1083426b8(param_2,param_3,&param_14,&param_13);
  func_0x000108381238(&param_11,param_3);
  lVar9 = 0;
  uVar11 = 0;
  uVar8 = (uint)param_3;
  while( true ) {
    if ((uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) == uVar11) {
      lVar9 = param_1;
      FUN_10838d010(param_1,param_7);
      lVar14 = param_1;
      FUN_10838ca8c(param_1,param_4,(long)param_14);
      if (param_5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar10 = (long)param_13;
        lVar4 = *(long *)(param_1 + 0xcb0);
        func_0x00010838e63c(lVar4,lVar10);
        lVar6 = 0;
        for (; lVar10 != 0; lVar10 = lVar10 + -1) {
          puVar1 = (undefined8 *)(lVar4 + lVar6);
          puVar2 = (undefined8 *)(param_5 + lVar6);
          uVar13 = puVar2[1];
          uVar12 = *puVar2;
          uVar16 = puVar2[3];
          uVar15 = puVar2[2];
          puVar1[4] = puVar2[4];
          puVar1[1] = uVar13;
          *puVar1 = uVar12;
          puVar1[3] = uVar16;
          puVar1[2] = uVar15;
          lVar6 = lVar6 + 0x28;
        }
      }
      lVar6 = *(long *)(param_1 + 0xcb0);
      iVar7 = *(int *)(lVar6 + 0xc);
      if (iVar7 == *(int *)(lVar6 + 0x10)) {
        func_0x00010838e90c();
        iVar7 = *(int *)(lVar6 + 0xc);
      }
      *(int *)(lVar6 + 0xc) = iVar7 + 1;
      lVar10 = *(long *)(lVar6 + 0x18);
      *(long *)(lVar6 + 0x40) = *(long *)(lVar6 + 0x40) + 0x58;
      plVar5 = (long *)(lVar6 + 0x20);
      func_0x00010838e798();
      *(long **)(lVar6 + 0x28) = plVar5 + 10;
      func_0x00010838e84c(lVar10 + (long)iVar7 * 0x10);
      uVar11 = param_12;
      lVar6 = param_11;
      *plVar5 = lVar9;
      param_11 = 0;
      param_12 = 0;
      plVar5[1] = lVar6;
      plVar5[2] = uVar11;
      *(uint *)(plVar5 + 3) = uVar8;
      plVar5[4] = lVar14;
      plVar5[5] = lVar4;
      lVar14 = param_6[1];
      lVar9 = *param_6;
      plVar5[8] = param_6[2];
      plVar5[7] = lVar14;
      plVar5[6] = lVar9;
      *(undefined4 *)(plVar5 + 9) = param_8;
      FUN_108381240(&param_11);
      return;
    }
    if (param_12 <= uVar11) break;
    FUN_108341024(param_11 + lVar9,param_2 + lVar9);
    uVar11 = uVar11 + 1;
    lVar9 = lVar9 + 0x38;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10838de68);
  (*pcVar3)();
}



/* Entry: 10838de80; end: 10838dec3;  */

void FUN_10838de80(void)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  
  func_0x00010838e930();
  if ((bool)in_ZR) {
    func_0x00010838e888();
  }
  func_0x00010838e7ac();
  puVar1 = (undefined4 *)(extraout_x9 + (long)extraout_w8 * 0x10);
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 2) = 0x11372b29c;
  return;
}



/* Entry: 10838dec4; end: 10838e093;  */

undefined8 FUN_10838dec4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  long lStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  
  uVar12 = param_2[3];
  puStack_60 = (undefined8 *)0x0;
  if (uVar12 >> 0x3d == 0) {
    uStack_58 = uVar12;
    if (uVar12 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar8 = uVar12 * 8;
      puVar10 = (undefined8 *)(uVar8 + 0x10);
      if (0xffffffffffffffef < uVar8) {
        puVar10 = (undefined8 *)0xffffffffffffffff;
      }
      __Znam();
      *puVar10 = 8;
      puVar10[1] = uVar12;
      puVar10 = puVar10 + 2;
      _bzero(puVar10,uVar8);
    }
    lVar9 = 0;
    uVar8 = 0;
    puStack_60 = puVar10;
    while( true ) {
      if (uVar12 <= uVar8) {
        lVar9 = param_1;
        FUN_10838da8c(param_1,*param_2);
        lVar5 = param_1;
        FUN_10838d010(param_1,param_2[1]);
        lStack_68 = param_2[4];
        if (lStack_68 != 0) {
          piVar1 = (int *)(lStack_68 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar14 = *(undefined4 *)((long)param_2 + 0x3c);
        lVar7 = *(long *)(param_1 + 0xcb0);
        iVar11 = *(int *)(lVar7 + 0xc);
        if (iVar11 == *(int *)(lVar7 + 0x10)) {
          func_0x00010838e83c();
          iVar11 = *(int *)(lVar7 + 0xc);
        }
        *(int *)(lVar7 + 0xc) = iVar11 + 1;
        lVar13 = *(long *)(lVar7 + 0x18);
        *(long *)(lVar7 + 0x40) = *(long *)(lVar7 + 0x40) + 0x40;
        plVar6 = (long *)(lVar7 + 0x20);
        func_0x00010838e7a4(plVar6,0x38);
        *(long **)(lVar7 + 0x28) = plVar6 + 7;
        func_0x00010838e84c(lVar13 + (long)iVar11 * 0x10);
        uVar12 = uStack_58;
        puVar10 = puStack_60;
        *plVar6 = lVar9;
        plVar6[1] = lVar5;
        plVar6[2] = lStack_68;
        *(undefined4 *)(plVar6 + 3) = *(undefined4 *)(param_2 + 7);
        *(undefined4 *)((long)plVar6 + 0x1c) = uVar14;
        *(undefined4 *)(plVar6 + 4) = *(undefined4 *)(param_2 + 5);
        uStack_58 = 0;
        lStack_68 = 0;
        puStack_60 = (undefined8 *)0x0;
        plVar6[5] = (long)puVar10;
        plVar6[6] = uVar12;
        FUN_10811e834(&lStack_68);
        func_0x00010838ab28(&puStack_60);
        return 1;
      }
      if (uStack_58 <= uVar8) break;
      FUN_10819a4d8((long)puStack_60 + lVar9,param_2[2] + lVar9);
      uVar8 = uVar8 + 1;
      uVar12 = param_2[3];
      lVar9 = lVar9 + 8;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10838e06c);
  (*pcVar4)();
}



/* Entry: 10838e094; end: 10838e0fb;  */

undefined8 FUN_10838e094(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long extraout_x8;
  undefined4 *unaff_x21;
  
  plVar1 = param_1;
  FUN_10838da8c();
  plVar2 = plVar1;
  func_0x00010838e86c();
  if ((bool)in_ZR) {
    func_0x00010838e83c();
  }
  func_0x00010838e6f4();
  func_0x00010838e890(extraout_x8 + 0x10);
  func_0x00010838e7a4();
  *(long **)(unaff_x21 + 2) = plVar2;
  *plVar2 = (long)plVar1;
  param_1[5] = (long)(plVar2 + 1);
  *unaff_x21 = 4;
  return 0;
}



/* Entry: 10838e0fc; end: 10838e187;  */

void FUN_10838e0fc(long param_1)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  int extraout_w8;
  long extraout_x9;
  long lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010833b800(&uStack_48);
  lVar3 = *(long *)(param_1 + 0xcb0);
  func_0x00010838e930();
  if ((bool)in_ZR) {
    func_0x00010838e888();
  }
  func_0x00010838e7ac();
  puVar1 = (undefined4 *)(extraout_x9 + (long)extraout_w8 * 0x10);
  *(long *)(lVar3 + 0x40) = *(long *)(lVar3 + 0x40) + 0x2c;
  puVar2 = (undefined8 *)(lVar3 + 0x20);
  func_0x00010838e7fc(puVar2,0x28);
  *(undefined8 **)(lVar3 + 0x28) = puVar2 + 5;
  *puVar1 = 1;
  *(undefined8 **)(puVar1 + 2) = puVar2;
  puVar2[4] = uStack_28;
  puVar2[1] = uStack_40;
  *puVar2 = uStack_48;
  puVar2[3] = uStack_30;
  puVar2[2] = uStack_38;
  func_0x0001081421e0();
  return;
}



/* Entry: 10838e188; end: 10838e227;  */

void FUN_10838e188(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x00010838e7cc();
  if ((bool)in_ZR) {
    func_0x00010838e83c();
  }
  func_0x00010838e6f4();
  func_0x00010838e890(extraout_x8 + 0x44);
  func_0x00010838e7fc();
  *(long *)(unaff_x20 + 0x28) = param_1 + 0x40;
  func_0x00010838e8b4(10);
  func_0x00010838e9e8();
  return;
}



/* Entry: 10838e228; end: 10838e293;  */

void FUN_10838e228(long param_1)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  long lVar2;
  undefined4 *unaff_x20;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  func_0x00010838e9a0();
  lVar2 = *(long *)(param_1 + 0xcb0);
  func_0x00010838e930();
  if ((bool)in_ZR) {
    func_0x00010838e888();
  }
  func_0x00010838e7ac();
  func_0x00010838ea1c();
  puVar1 = (undefined4 *)(lVar2 + 0x20);
  func_0x00010838e7fc(puVar1,8);
  *(undefined4 **)(lVar2 + 0x28) = puVar1 + 2;
  *unaff_x20 = 8;
  *(undefined4 **)(unaff_x20 + 2) = puVar1;
  *puVar1 = unaff_s9;
  puVar1[1] = unaff_s8;
  return;
}



/* Entry: 10838e294; end: 10838e2f7;  */

void FUN_10838e294(long param_1)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  long lVar2;
  undefined4 *unaff_x20;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  func_0x00010838e9a0();
  lVar2 = *(long *)(param_1 + 0xcb0);
  func_0x00010838e930();
  if ((bool)in_ZR) {
    func_0x00010838e888();
  }
  func_0x00010838e7ac();
  func_0x00010838ea1c();
  puVar1 = (undefined4 *)(lVar2 + 0x20);
  func_0x00010838e7fc(puVar1,8);
  *(undefined4 **)(lVar2 + 0x28) = puVar1 + 2;
  *unaff_x20 = 7;
  *(undefined4 **)(unaff_x20 + 2) = puVar1;
  *puVar1 = unaff_s9;
  puVar1[1] = unaff_s8;
  return;
}



/* Entry: 10838e2f8; end: 10838e44b;  */

void FUN_10838e2f8(undefined8 *param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  uint uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  undefined8 uVar2;
  
  func_0x00010838e858();
  FUN_10833e440();
  func_0x00010838e86c();
  if ((bool)in_ZR) {
    func_0x00010838e83c();
  }
  uVar1 = 0x80000000;
  if (unaff_w22 != 1) {
    uVar1 = 0;
  }
  func_0x00010838e6f4();
  func_0x00010838e890(extraout_x8 + 0x18);
  func_0x00010838e7fc();
  *(long *)(unaff_x20 + 0x28) = (long)param_1 + 0x14;
  func_0x00010838e8b4(0xd);
  uVar2 = *unaff_x19;
  param_1[1] = unaff_x19[1];
  *param_1 = uVar2;
  *(uint *)(param_1 + 2) = uVar1 | unaff_w21 & 0x7fffffff;
  return;
}



/* Entry: 10838e44c; end: 10838e507;  */

void FUN_10838e44c(long param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined4 *unaff_x22;
  long lStack_38;
  long extraout_x8;
  
  lStack_38 = *param_2;
  if (lStack_38 != 0) {
    piVar1 = (int *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10833e74c(param_1,&lStack_38,param_3);
  plVar4 = &lStack_38;
  func_0x000106f47224();
  lVar6 = *(long *)(param_1 + 0xcb0);
  iVar5 = *(int *)(lVar6 + 0xc);
  if (iVar5 == *(int *)(lVar6 + 0x10)) {
    func_0x00010838e804();
    iVar5 = *(int *)(lVar6 + 0xc);
  }
  func_0x00010838e70c(iVar5);
  func_0x00010838e8a8(extraout_x8 + 0x18);
  func_0x00010838e7a4();
  *(long **)(lVar6 + 0x28) = plVar4 + 2;
  *unaff_x22 = 0xf;
  *(long **)(unaff_x22 + 2) = plVar4;
  lVar6 = *param_2;
  *param_2 = 0;
  *plVar4 = lVar6;
  *(int *)(plVar4 + 1) = (int)param_3;
  return;
}



/* Entry: 10838e508; end: 10838e57b;  */

void FUN_10838e508(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 *unaff_x22;
  long extraout_x8;
  
  lVar1 = param_1;
  FUN_10833e888();
  lVar3 = *(long *)(param_1 + 0xcb0);
  iVar2 = *(int *)(lVar3 + 0xc);
  if (iVar2 == *(int *)(lVar3 + 0x10)) {
    func_0x00010838e804();
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  func_0x00010838e70c(iVar2);
  func_0x00010838e8a8(extraout_x8 + 0x28);
  func_0x00010838e7a4();
  *(long *)(lVar3 + 0x28) = lVar1 + 0x20;
  *unaff_x22 = 0xe;
  *(long *)(unaff_x22 + 2) = lVar1;
  FUN_10838f538();
  *(undefined4 *)(lVar1 + 0x18) = param_3;
  return;
}



/* Entry: 10838e57c; end: 10838e5c7;  */

void FUN_10838e57c(void)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  
  FUN_10833e498();
  func_0x00010838e930();
  if ((bool)in_ZR) {
    func_0x00010838e888();
  }
  func_0x00010838e7ac();
  puVar1 = (undefined4 *)(extraout_x9 + (long)extraout_w8 * 0x10);
  *puVar1 = 0x10;
  *(undefined8 *)(puVar1 + 2) = 0x11372b29d;
  return;
}



/* Entry: 10838e5c8; end: 10838e5d3;  */

void FUN_10838e5c8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10838e5d4; end: 10838e5e7;  */

void FUN_10838e5d4(void)

{
  FUN_108383a7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10838e5e8; end: 10838e603;  */

void FUN_10838e5e8(void)

{
  return;
}



/* Entry: 10838e604; end: 10838e6f3;  */

long * FUN_10838e604(long *param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    FUN_10840ffdc(param_2,8);
  }
  *param_1 = param_2;
  return param_1;
}



/* Entry: 10838e6f4; end: 10838ea4b;  */

void FUN_10838e6f4(void)

{
  int in_w8;
  long unaff_x20;
  
  *(int *)(unaff_x20 + 0xc) = in_w8 + 1;
  return;
}



/* Entry: 10838ea4c; end: 10838ea8f;  */

undefined8 FUN_10838ea4c(undefined8 param_1)

{
  func_0x000108376b14();
  func_0x0001083773e0();
  func_0x0001083772e0(param_1);
  return param_1;
}



/* Entry: 10838ea90; end: 10838eadf;  */

uint FUN_10838ea90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_30;
  uStack_30 = NEON_smax(*param_2,*param_3,4);
  uStack_28 = NEON_smin(param_3[1],param_2[1],4);
  FUN_10821a6d8();
  if (((ulong)puVar1 & 1) == 0) {
    param_1[1] = uStack_28;
    *param_1 = uStack_30;
  }
  return (uint)puVar1 ^ 1;
}



/* Entry: 10838eae0; end: 10838eb83;  */

void FUN_10838eae0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  if (iVar1 < iVar2) {
    iVar3 = param_2[1];
    iVar4 = param_2[3];
    if (iVar3 < iVar4) {
      if (*param_1 < param_1[2]) {
        if (param_1[1] < param_1[3]) {
          if (iVar1 < *param_1) {
            *param_1 = iVar1;
          }
          if (iVar3 < param_1[1]) {
            param_1[1] = iVar3;
          }
          if (param_1[2] < iVar2) {
            param_1[2] = iVar2;
          }
          if (iVar4 <= param_1[3]) {
            return;
          }
          param_1[3] = iVar4;
          return;
        }
      }
      uVar5 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar5;
      return;
    }
  }
  return;
}


