/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108114e84; end: 108114eeb;  */

void FUN_108114e84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000108114ebc();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 108114eec; end: 108114f3f;  */

void FUN_108114eec(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108114f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108114f40; end: 108115907;  */

undefined8 *
FUN_108114f40(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  *param_5 = &PTR_DAT_110a24cc0;
  param_5[1] = 1;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[2] = 0;
  uVar3 = *param_6;
  param_5[3] = param_6[1];
  param_5[2] = uVar3;
  param_5[4] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_5[5] = 0;
  param_5[6] = 0;
  puVar1 = (undefined8 *)param_5[3];
  for (puVar2 = (undefined8 *)param_5[2]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x20))();
    uStack_40 = (undefined4)uVar3;
    uStack_3c = param_2;
    uStack_38 = param_3;
    uStack_34 = param_4;
    func_0x00010813fee4(param_5 + 5,&uStack_40);
  }
  return param_5;
}



/* Entry: 108115908; end: 108115923;  */

void FUN_108115908(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_108376024();
  }
  return;
}



/* Entry: 108115924; end: 10811594b;  */

void FUN_108115924(undefined8 *param_1,undefined8 *param_2)

{
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
  if (param_2 != param_1) {
    FUN_108376024();
  }
  return;
}



/* Entry: 10811594c; end: 1081159a7;  */

void FUN_10811594c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_30;
  if ((int)param_2 == 0) {
    uStack_28 = 0;
    puVar1 = &uStack_28;
  }
  else {
    FUN_1083ad640(&uStack_30,param_2,9);
  }
  func_0x000108164928(param_1 + 0x18,puVar1);
  FUN_108115b2c(puVar1);
  return;
}



/* Entry: 1081159a8; end: 108115a37;  */

void FUN_1081159a8(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_18;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_18 = 0;
  func_0x000108114f18(param_1 + 8);
  func_0x000106f47224(&uStack_18);
  return;
}



/* Entry: 108115a38; end: 108115aab;  */

void FUN_108115a38(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [8];
  undefined8 auStack_80 [2];
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0;
  uStack_30 = param_1;
  uStack_2c = uVar2;
  FUN_1083ad04c(auStack_38,0,&uStack_30,2);
  FUN_108115bb4();
  func_0x000108115b70(auStack_38);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_108376ad8(auStack_80);
  FUN_10837868c(0,0,uVar1,auStack_80,0);
  FUN_1083abb14(auStack_88,CONCAT44(uVar3,uVar2),0,auStack_80,0);
  FUN_108115bb4();
  func_0x000108115b70(auStack_88);
  FUN_10837ca5c(auStack_80[0]);
  return;
}



/* Entry: 108115aac; end: 108115b2b;  */

void FUN_108115aac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [8];
  undefined8 auStack_40 [2];
  
  FUN_108376ad8(auStack_40);
  FUN_10837868c(0,0,param_1,auStack_40,0);
  FUN_1083abb14(auStack_48,param_2,0,auStack_40,0);
  FUN_108115bb4();
  func_0x000108115b70(auStack_48);
  FUN_10837ca5c(auStack_40[0]);
  return;
}



/* Entry: 108115b2c; end: 108115bb3;  */

long * FUN_108115b2c(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000108115bc4();
    }
  }
  return param_1;
}



/* Entry: 108115bb4; end: 108115bcf;  */

void FUN_108115bb4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *unaff_x19;
  long in_stack_00000008;
  
  plVar5 = (long *)*unaff_x19;
  *unaff_x19 = in_stack_00000008;
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
                    /* WARNING: Could not recover jumptable at 0x0001082b15d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108115bd0; end: 108115c6b;  */

undefined8 * FUN_108115bd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a24da8;
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  FUN_1081411f4(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}



/* Entry: 108115c6c; end: 108115c6f;  */

undefined8 * FUN_108115c6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a24da8;
  FUN_10837ca38(param_1 + 0xb);
  FUN_1080f33d8(param_1 + 6);
  FUN_1080f3394(param_1 + 3);
  func_0x000106f47224(param_1 + 2);
  return param_1;
}



/* Entry: 108115c70; end: 108115c83;  */

void FUN_108115c70(void)

{
  func_0x000108115c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108115c84; end: 108115cfb;  */

void FUN_108115c84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x18;
  FUN_108114ab0();
  if ((uVar1 & 1) == 0) {
    func_0x0001074714f0(param_1 + 0x18,param_2);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



/* Entry: 108115cfc; end: 108115e23;  */

/* WARNING: Possible PIC construction at 0x000108115dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108115e00) */

void FUN_108115cfc(long param_1,float *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (*(long *)(param_1 + 0x30) == *(long *)(param_1 + 0x38)) {
    uStack_88 = 0;
  }
  else {
    fVar6 = *param_2;
    fVar7 = param_2[1];
    fVar8 = param_2[2] - fVar6;
    fVar9 = param_2[3] - fVar7;
    uStack_78 = 0;
    uStack_80 = 0x3f800000;
    uStack_68 = 0;
    uStack_70 = 0x3f800000;
    uStack_60 = 0x103f800000;
    if (fVar8 != fVar9) {
      FUN_108364068(fVar8 / fVar9,0x3f800000,&uStack_80);
      fVar6 = *param_2;
      fVar7 = param_2[1];
    }
    FUN_108363ef4(fVar8 * 0.5 + fVar6,fVar9 * 0.5 + fVar7,&uStack_80);
    if (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) ==
        *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) {
      func_0x000108115f68();
    }
    else {
      func_0x000108115f68();
    }
    FUN_1083c1fc0();
  }
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_88;
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
                    /* WARNING: Could not recover jumptable at 0x000108114f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108115e24; end: 108115e5f;  */

/* WARNING: Removing unreachable block (ram,0x000108115f40) */
/* WARNING: Removing unreachable block (ram,0x000108115f44) */
/* WARNING: Removing unreachable block (ram,0x000108115f4c) */
/* WARNING: Removing unreachable block (ram,0x000108115f54) */
/* WARNING: Removing unreachable block (ram,0x000108115f58) */

void FUN_108115e24(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
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
  func_0x000108114f18(param_2 + 8,lVar4);
  return;
}



/* Entry: 108115e60; end: 108115eab;  */

void FUN_108115e60(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar1 = param_1 + 0x48;
    FUN_1080f6488(lVar1,param_2);
    if ((int)lVar1 == 0) {
      return;
    }
  }
  FUN_108115cfc(param_1,param_2);
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x50) = param_2[1];
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 108115eac; end: 108115f3b;  */

void FUN_108115eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  FUN_108115e60();
  if (*(long *)(param_1 + 0x30) != *(long *)(param_1 + 0x38)) {
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_44 = 0x3f800000;
    uStack_3c = 0x40800000;
    FUN_108115e24(param_1,&uStack_80);
    func_0x000108113818(param_2,&uStack_80,param_3,param_1 + 0x58);
    FUN_108375e94(&uStack_80);
  }
  return;
}



/* Entry: 108115f3c; end: 108115fdb;  */

void FUN_108115f3c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108115f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108115fdc; end: 108116003;  */

undefined8 * FUN_108115fdc(undefined8 *param_1)

{
  FUN_1080cc5ac(param_1 + 1);
  FUN_1081165ec(*param_1);
  return param_1;
}



/* Entry: 108116004; end: 108116023;  */

bool FUN_108116004(long param_1)

{
  param_1 = param_1 + 8;
  FUN_108116024(param_1);
  return 1 < param_1;
}



/* Entry: 108116024; end: 108116047;  */

long FUN_108116024(long *param_1)

{
  long lVar1;
  
  if ((*param_1 != 0) && (lVar1 = *(long *)(*param_1 + 0x10), lVar1 != 0)) {
    return *(long *)(lVar1 + 8) + 1;
  }
  return 0;
}



/* Entry: 108116048; end: 10811613f;  */

void FUN_108116048(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *extraout_x8;
  long lVar5;
  long *unaff_x19;
  long *plVar6;
  
  func_0x000108116680();
  plVar6 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  while( true ) {
    if (plVar6 == plVar1) {
      (**(code **)(*(long *)*unaff_x19 + 0x20))(extraout_x8,(long *)*unaff_x19,param_3,param_4);
      if (*extraout_x8 == 1) {
        FUN_108116140();
      }
      return;
    }
    plVar4 = plVar6;
    FUN_108116004();
    if ((((((ulong)plVar4 & 1) == 0) && (*plVar6 == *unaff_x19)) && ((int)plVar6[2] == (int)param_3)
        ) && (*(int *)((long)plVar6 + 0x14) == (int)param_4)) break;
    plVar6 = plVar6 + 3;
  }
  *extraout_x8 = 1;
  lVar5 = plVar6[1];
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar6 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  extraout_x8[1] = lVar5;
  return;
}



/* Entry: 108116140; end: 1081161eb;  */

long FUN_108116140(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000108116228();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_108116254();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 1081161ec; end: 1081161f3;  */

void FUN_1081161ec(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108116680(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_108115fdc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1081161f4; end: 108116253;  */

void FUN_1081161f4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108116680();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_108115fdc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108116254; end: 10811630b;  */

long FUN_108116254(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  plVar1 = param_1;
  FUN_108116318(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_1081163fc(auStack_68,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  FUN_10811630c(lStack_58,param_2,param_3,param_4,param_5);
  lStack_58 = lStack_58 + 0x18;
  FUN_108116368(param_1,auStack_68);
  lVar2 = param_1[1];
  FUN_108116584(auStack_68);
  return lVar2;
}



/* Entry: 10811630c; end: 108116317;  */

void FUN_10811630c(long *param_1,long *param_2,long *param_3,undefined4 *param_4,undefined4 *param_5
                  )

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  uVar2 = *param_4;
  uVar3 = *param_5;
  lVar6 = *param_2;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = lVar6;
  lVar6 = *param_3;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar6 + 0x10) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[1] = lVar6;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((long)param_1 + 0x14) = uVar3;
  return;
}



/* Entry: 108116318; end: 108116367;  */

long * FUN_108116318(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar3 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar3;
  }
  FUN_1081163f0();
  func_0x000108116680();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_108116498(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
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
  return plVar3;
}



/* Entry: 108116368; end: 1081163ef;  */

void FUN_108116368(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000108116680();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_108116498(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 1081163f0; end: 1081163fb;  */

long * FUN_1081163f0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108116448();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1081163fc; end: 10811646b;  */

long * FUN_1081163fc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108116448();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10811646c; end: 108116497;  */

void FUN_10811646c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000104bfe188();
    for (uVar1 = param_2; uVar1 != param_3; uVar1 = uVar1 + 0x18) {
      FUN_108116530(param_4,uVar1);
      param_4 = param_4 + 0x18;
    }
    for (; param_2 != param_3; param_2 = param_2 + 0x18) {
      FUN_108115fdc();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
  return;
}



/* Entry: 108116498; end: 1081164ff;  */

void FUN_108116498(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0x18) {
    FUN_108116530(param_4,lVar1);
    param_4 = param_4 + 0x18;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    FUN_108115fdc();
  }
  return;
}



/* Entry: 108116500; end: 10811652f;  */

void FUN_108116500(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    FUN_108115fdc();
  }
  return;
}



/* Entry: 108116530; end: 108116583;  */

void FUN_108116530(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  lVar4 = param_2[1];
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  return;
}



/* Entry: 108116584; end: 1081165af;  */

long * FUN_108116584(long *param_1)

{
  FUN_1081165b0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081165b0; end: 1081165b7;  */

void FUN_1081165b0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108116680(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    FUN_108115fdc();
  }
  return;
}



/* Entry: 1081165b8; end: 1081165eb;  */

void FUN_1081165b8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108116680();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    FUN_108115fdc();
  }
  return;
}



/* Entry: 1081165ec; end: 108116617;  */

void FUN_1081165ec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108116610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108116618; end: 10811663b;  */

undefined8 * FUN_108116618(undefined8 *param_1)

{
  FUN_1081165ec(*param_1);
  return param_1;
}



/* Entry: 10811663c; end: 10811668b;  */

void FUN_10811663c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = 1;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lVar4;
  return;
}



/* Entry: 10811668c; end: 10811670f;  */

undefined8 *
FUN_10811668c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = &PTR_FUN_110a24df0;
  param_1[1] = 1;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 2);
  param_1[10] = param_2;
  *(undefined4 *)(param_1 + 0xb) = param_3;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = &UNK_10dd5b8b0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = &UNK_10dd5b8b0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x24) = param_4;
  return param_1;
}



/* Entry: 108116710; end: 108116777;  */

undefined8 * FUN_108116710(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a24df0;
  FUN_108117f58(param_1 + 0x14);
  FUN_1080cc5ac(param_1 + 0x13);
  func_0x00010811617c(param_1 + 0xf);
  plVar1 = param_1 + 0xc;
  if (*plVar1 != 0) {
    func_0x000108117bbc(plVar1);
    __ZdlPv(*plVar1);
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 108116778; end: 10811677b;  */

undefined8 * FUN_108116778(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a24df0;
  FUN_108117f58(param_1 + 0x14);
  FUN_1080cc5ac(param_1 + 0x13);
  func_0x00010811617c(param_1 + 0xf);
  plVar1 = param_1 + 0xc;
  if (*plVar1 != 0) {
    func_0x000108117bbc(plVar1);
    __ZdlPv(*plVar1);
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 10811677c; end: 10811678f;  */

void FUN_10811677c(void)

{
  FUN_108116710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108116790; end: 10811686f;  */

long * FUN_108116790(long *param_1,long param_2,long *param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long *plVar2;
  long *plStack_30;
  undefined8 uStack_28;
  
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 2;
  param_1[1] = 0;
  plVar2 = param_1 + 0x1b;
  *plVar2 = 0;
  if ((*(int *)(param_2 + 0x58) == 1) && (*(char *)(*param_3 + 0x90) == '\x01')) {
    uStack_28 = *(undefined8 *)(param_2 + 0x50);
    FUN_10810c9f0(&plStack_30,&uStack_28);
    func_0x000108116838(plVar2,&plStack_30);
    func_0x0001078d4938(plStack_30);
    return plStack_30;
  }
  func_0x00010810e86c(param_1);
  if (plVar2 != param_3) {
    lVar1 = 0;
    if (*param_3 != 0) {
      do {
        func_0x0001081131a0();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *plVar2 = lVar1;
    func_0x0001078d4938();
  }
  return plVar2;
}



/* Entry: 108116870; end: 108116d8f;  */

/* WARNING: Possible PIC construction at 0x0001081169fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108116a00) */
/* WARNING: Removing unreachable block (ram,0x000108116d48) */
/* WARNING: Removing unreachable block (ram,0x000108116a0c) */
/* WARNING: Removing unreachable block (ram,0x000108116d4c) */

void FUN_108116870(undefined8 *param_1,ulong *param_2,float **param_3,float **param_4,
                  float **param_5,float **param_6,float **param_7,ulong *param_8,undefined8 *param_9
                  )

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  float **ppfVar4;
  undefined1 uVar5;
  ulong *puVar6;
  float *pfVar7;
  ulong *puVar8;
  float **ppfVar9;
  long *plVar10;
  float **ppfVar11;
  float **ppfVar12;
  float **ppfVar13;
  float **ppfVar14;
  float **ppfVar15;
  float **ppfVar16;
  float **ppfVar17;
  float **ppfVar18;
  undefined8 extraout_x8;
  ulong uVar19;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar20;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  float **ppfVar28;
  float **ppfVar29;
  float **unaff_x25;
  float *unaff_x26;
  long lVar30;
  int iVar31;
  undefined *unaff_x28;
  undefined *puVar32;
  undefined8 ****ppppuVar33;
  undefined8 uVar34;
  undefined1 auStack_4f0 [240];
  float *pfStack_400;
  undefined1 auStack_3f8 [16];
  long lStack_3e8;
  float *apfStack_3e0 [3];
  ulong auStack_3c8 [3];
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined1 uStack_398;
  undefined1 auStack_390 [32];
  undefined1 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined1 *puStack_358;
  float *pfStack_350;
  float **ppfStack_348;
  float **ppfStack_340;
  float **ppfStack_338;
  float **ppfStack_330;
  float **ppfStack_328;
  ulong *puStack_320;
  undefined8 ***pppuStack_310;
  undefined8 uStack_308;
  float *apfStack_2f8 [11];
  undefined1 uStack_2a0;
  undefined8 uStack_298;
  float **ppfStack_290;
  float **ppfStack_288;
  ulong *puStack_280;
  undefined8 *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  long lStack_260;
  float *pfStack_258;
  float *pfStack_250;
  undefined8 uStack_248;
  uint uStack_240;
  uint uStack_23c;
  int iStack_238;
  int iStack_234;
  float **ppfStack_230;
  float **ppfStack_228;
  float **ppfStack_220;
  float *pfStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  float **ppfStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [32];
  undefined1 uStack_1b8;
  float *apfStack_1b0 [28];
  ulong auStack_d0 [3];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_98 [32];
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  ppppuVar33 = (undefined8 ****)&stack0xfffffffffffffff0;
  ppfVar4 = (float **)&lStack_260;
  plVar10 = &lStack_260;
  puVar6 = param_2;
  ppfVar15 = param_5;
  func_0x000108117e88();
  iVar31 = (int)puVar6;
  auStack_d0[0] = auStack_d0[0] & 0xffffffffffffff00;
  uStack_78 = 0;
  uStack_70 = extraout_x8;
  func_0x000105c3b044();
  if (iVar31 != 0) {
    FUN_1080e8d4c(auStack_d0);
    auStack_d0[0] = 0;
    auStack_d0[1] = 0;
    auStack_d0[2] = 0;
    puStack_b8 = &UNK_10f47b7b6;
    uStack_b0 = 0x20;
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x00010bd3f3dc(auStack_98,&UNK_10f47b7b6,0x20);
    func_0x00010b9a7630(auStack_d0);
    uStack_78 = 1;
  }
  puVar6 = param_2 + 0x12;
  do {
    ppfVar18 = (float **)(*puVar6 + 1);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar3) {
      *puVar6 = (ulong)ppfVar18;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000108117ed8(*param_4);
  (*extraout_x9)(&uStack_240);
  ppfVar11 = param_3;
  FUN_108116790(apfStack_1b0,param_2);
  pfStack_250 = (float *)0x0;
  uStack_248 = 0;
  lStack_260 = (long)(int)uStack_23c * (long)(int)uStack_240;
  pfStack_258 = (float *)0x0;
  ppfVar28 = param_5;
  if ((char)param_2[0x24] == '\x01') {
    __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
    ppfVar14 = (float **)&uStack_240;
    FUN_108116d90(&uStack_210,param_2,param_3);
    ppfVar11 = (float **)&uStack_210;
    func_0x000108117c44(&pfStack_258);
    FUN_108100324(&uStack_210);
    param_3 = (float **)(param_2 + 0x13);
    pfVar7 = (float *)0x0;
    if (*param_3 == (float *)0x0) {
LAB_108116a78:
      iVar31 = (int)pfVar7;
      uStack_210 = (float **)((ulong)uStack_210 & 0xffffffffffffff00);
      uStack_1b8 = 0;
      func_0x000105c3b044();
      if (iVar31 != 0) {
        FUN_1080e8d4c(&uStack_210);
        uStack_210 = (float **)0x0;
        uStack_208 = 0;
        ppfVar11 = (float **)&UNK_10f47b7d7;
        ppfStack_200 = (float **)0x0;
        puStack_1f8 = &UNK_10f47b7d7;
        uStack_1f0 = 0x2d;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        ppfVar14 = (float **)0x2d;
        func_0x00010bd3f3dc(auStack_1d8);
        func_0x00010b9a7630(&uStack_210);
        uStack_1b8 = 1;
      }
      FUN_10813e93c(&ppfStack_220,&uStack_240);
      ppfVar13 = ppfStack_220;
      if (ppfStack_220 == (float **)0x1) {
        if ((pfStack_218 != (float *)0x0) && (*(long *)(pfStack_218 + 4) != 0)) {
          plVar10 = (long *)(*(long *)(pfStack_218 + 4) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = *plVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pfVar7 = *param_3;
        *param_3 = pfStack_218;
        FUN_1080cc5cc(pfVar7);
        FUN_1080cc5cc(0);
      }
      else {
        *param_1 = 2;
        param_1[1] = pfStack_218;
        pfStack_218 = (float *)0x0;
      }
      func_0x0001080fdedc(&ppfStack_220);
      FUN_1080e8dd4(&uStack_210);
      uVar5 = 0;
      if (ppfVar13 == (float **)0x1) {
        func_0x000108117ee4();
        ppfVar14 = param_3;
        func_0x000108117f04();
        ppfVar13 = uStack_210;
        if (uStack_210 == (float **)0x1) {
          lStack_260 = 0;
          for (pfVar7 = pfStack_258; pfVar7 != pfStack_250; pfVar7 = pfVar7 + 4) {
            lStack_260 = lStack_260 + (long)(pfVar7[3] - pfVar7[1]) * (long)(pfVar7[2] - *pfVar7);
          }
        }
        else {
          func_0x000108117ec4();
        }
        func_0x000108117efc();
        uVar5 = ppfVar13 == (float **)0x1;
        if ((bool)uVar5) {
          if (((ulong)param_5 & 1) == 0) {
            uVar5 = iStack_234 == 1;
            if ((bool)uVar5) {
              uVar5 = iStack_238 - 1U == 2;
              if (iStack_238 - 1U < 2) goto LAB_108116bbc;
              ppfVar11 = (float **)&UNK_10f47b855;
            }
            else {
              ppfVar11 = (float **)&UNK_10f47b805;
            }
            func_0x00010b99f5f8(&uStack_210);
            ppfStack_228 = uStack_210;
          }
          else {
LAB_108116bbc:
            func_0x000108117ed8(*param_3);
            (*extraout_x9_01)(&uStack_210);
            unaff_x25 = (float **)*param_3;
            func_0x000108117eac();
            if (unaff_x25 != (float **)0x0) {
              pfVar7 = *param_4;
              func_0x000108117eac();
              puVar32 = PTR_DAT_113254df8;
              if (pfVar7 != (float *)0x0) {
                if ((int)param_5 == 0) {
                  while( true ) {
                    uVar27 = (uint)param_5;
                    uVar5 = uVar27 == uStack_23c;
                    if ((int)uStack_23c <= (int)uVar27) break;
                    ppfVar14 = (float **)(ulong)uStack_240;
                    ppfVar15 = (float **)0xff;
                    (*(code *)puVar32)(pfVar7,unaff_x25);
                    func_0x000108117f30();
                    param_5 = (float **)(ulong)(uVar27 + 1);
                  }
                }
                else {
                  ppfVar14 = (float **)((long)ppfStack_200 * (long)(int)uStack_210._4_4_);
                  uVar19 = (ulong)(int)uStack_23c;
                  uVar5 = (long)ppfVar14 - (long)ppfStack_230 * uVar19 == 0;
                  if ((bool)uVar5) {
                    _memcpy(pfVar7,unaff_x25);
                    puVar32 = unaff_x28;
                  }
                  else {
                    puVar32 = (undefined *)0x0;
                    param_5 = ppfStack_230;
                    if (ppfStack_200 <= ppfStack_230) {
                      param_5 = ppfStack_200;
                    }
                    while( true ) {
                      iVar31 = (int)puVar32;
                      uVar5 = iVar31 == (int)uVar19;
                      if ((int)uVar19 <= iVar31) break;
                      ppfVar14 = param_5;
                      _memcpy(pfVar7,unaff_x25);
                      func_0x000108117f30();
                      puVar32 = (undefined *)(ulong)(iVar31 + 1);
                      uVar19 = (ulong)uStack_23c;
                    }
                  }
                }
                func_0x000108117e98(*param_3);
                func_0x000108117e98(*param_4);
                ppfStack_220 = (float **)0x1;
                func_0x0001080c6234(&ppfStack_220);
                __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
                unaff_x26 = pfVar7;
                unaff_x28 = puVar32;
                goto LAB_108116a34;
              }
              func_0x000108117e98(*param_3);
              ppfVar13 = unaff_x25;
            }
            ppfVar11 = (float **)&UNK_10f47b89e;
            func_0x00010b99f5f8(&ppfStack_228);
          }
          ppfStack_220 = (float **)0x2;
          *param_1 = 2;
          param_1[1] = ppfStack_228;
          pfStack_218 = (float *)0x0;
          func_0x0001080c6234(&ppfStack_220);
        }
      }
      __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
      ppfVar29 = param_3;
      unaff_x25 = ppfVar13;
      goto LAB_108116ccc;
    }
    func_0x000108117ed8();
    (*extraout_x9_00)(&uStack_210);
    if (((((uint)uStack_210 != uStack_240) || (uStack_210._4_4_ != uStack_23c)) ||
        ((int)uStack_208 != iStack_238)) || (uStack_208._4_4_ != iStack_234)) {
      pfVar7 = *param_3;
      if (pfVar7 != (float *)0x0) {
        *param_3 = (float *)0x0;
        func_0x0001003a916c();
      }
      goto LAB_108116a78;
    }
    puVar22 = &uStack_210;
    ppfVar13 = apfStack_1b0;
    ppfVar16 = (float **)&uStack_240;
    ppfVar17 = &pfStack_258;
    uVar34 = 0x108116a00;
    param_9 = param_1;
    param_8 = param_2;
    param_7 = param_4;
    param_6 = ppfVar18;
    ppfVar15 = param_3;
    ppfVar12 = unaff_x25;
  }
  else {
    func_0x000108117ee4();
    ppfVar14 = param_4;
    func_0x000108117f04();
    uVar5 = uStack_210 == (float **)0x1;
    if ((bool)uVar5) {
      func_0x000108117efc();
LAB_108116a34:
      ppfVar11 = ppfVar18;
      FUN_1081171f4(param_2);
      *param_1 = 1;
      param_1[1] = lStack_260;
      param_1[3] = pfStack_250;
      param_1[2] = pfStack_258;
      param_1[4] = uStack_248;
      pfStack_250 = (float *)0x0;
      uStack_248 = 0;
      pfStack_258 = (float *)0x0;
      ppfVar28 = param_5;
      ppfVar29 = param_3;
    }
    else {
      func_0x000108117ec4();
      func_0x000108117efc();
      ppfVar29 = param_3;
    }
LAB_108116ccc:
    FUN_108100324(&pfStack_258);
    func_0x000108117c1c(apfStack_1b0);
    puVar6 = auStack_d0;
    FUN_1080e8dd4();
    func_0x000108117e74(uStack_70);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    pcStack_268 = FUN_108116d90;
    puVar8 = puVar6;
    ppfVar13 = ppfVar14;
    ppfStack_290 = ppfVar18;
    ppfStack_288 = param_4;
    puStack_280 = param_2;
    puStack_278 = param_1;
    pppuStack_270 = ppppuVar33;
    func_0x000108117e88();
    iVar31 = (int)puVar8;
    apfStack_2f8[0]._0_1_ = 0;
    uStack_2a0 = 0;
    uStack_298 = extraout_x8_01;
    func_0x000105c3b044();
    if (iVar31 != 0) {
      FUN_1081172a8(apfStack_2f8,&UNK_10f47b8b3);
    }
    func_0x000108117f8c((float)(int)*(uint *)ppfVar14,(float)(int)*(uint *)((long)ppfVar14 + 4),
                        puVar6 + 0x14);
    ppfVar12 = (float **)*ppfVar11;
    FUN_10811849c(puVar6 + 0x14);
    FUN_1081180c4(extraout_x8_00,puVar6 + 0x14);
    param_5 = apfStack_2f8;
    FUN_1080e8dd4();
    func_0x000108117e74(uStack_298);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    ppfVar4 = &pfStack_400;
    uStack_308 = 0x108116e34;
    ppppuVar33 = &pppuStack_310;
    ppfVar9 = param_5;
    param_3 = ppfVar13;
    ppfVar16 = ppfVar15;
    ppfVar17 = param_6;
    ppfVar18 = param_7;
    puStack_360 = unaff_x28;
    puStack_358 = (undefined1 *)&lStack_260;
    pfStack_350 = unaff_x26;
    ppfStack_348 = unaff_x25;
    ppfStack_340 = ppfVar29;
    ppfStack_338 = ppfVar28;
    ppfStack_330 = ppfVar14;
    ppfStack_328 = ppfVar11;
    puStack_320 = puVar6;
    pppuStack_310 = &pppuStack_270;
    func_0x000108117e88();
    iVar31 = (int)ppfVar9;
    auStack_3c8[0] = auStack_3c8[0] & 0xffffffffffffff00;
    uStack_370 = 0;
    uStack_368 = extraout_x8_02;
    func_0x000105c3b044();
    if (iVar31 != 0) {
      FUN_1080e8d4c(auStack_3c8);
      auStack_3c8[0] = 0;
      auStack_3c8[1] = 0;
      auStack_3c8[2] = 0;
      puStack_3b0 = &UNK_10f47b932;
      uStack_3a8 = 0x28;
      uStack_3a0 = 0;
      uStack_398 = 0;
      param_3 = (float **)0x28;
      func_0x00010bd3f3dc(auStack_390);
      func_0x00010b9a7630(auStack_3c8);
      uStack_370 = 1;
    }
    func_0x000108113b60(&pfStack_400,auStack_3f8);
    plVar10 = &lStack_3e8;
    (**(code **)(*(long *)pfStack_400 + 0x28))(&lStack_3e8,pfStack_400);
    uVar5 = lStack_3e8 == 1;
    if ((bool)uVar5) {
      param_3 = apfStack_3e0;
      ppfVar13 = ppfVar12;
      ppfVar16 = ppfVar15;
      ppfVar17 = param_6;
      ppfVar18 = param_7;
      FUN_10811742c(param_5);
      (**(code **)(*(long *)pfStack_400 + 0x30))(pfStack_400);
    }
    else {
      *param_5 = (float *)0x2;
      param_5[1] = apfStack_3e0[0];
      apfStack_3e0[0] = (float *)0x0;
    }
    func_0x0001078d49a4(&lStack_3e8);
    func_0x0001078d4980(pfStack_400);
    param_2 = auStack_3c8;
    FUN_1080e8dd4();
    func_0x000108117e74(uStack_368);
    if ((bool)uVar5) {
      return;
    }
    uVar34 = 0x108116f9c;
    ___stack_chk_fail();
    puVar22 = extraout_x8_03;
    unaff_x26 = pfStack_400;
  }
  *(undefined **)((long)ppfVar4 + -0x60) = unaff_x28;
  *(long **)((long)ppfVar4 + -0x58) = plVar10;
  *(float **)((long)ppfVar4 + -0x50) = unaff_x26;
  *(float ***)((long)ppfVar4 + -0x48) = ppfVar12;
  *(float ***)((long)ppfVar4 + -0x40) = ppfVar15;
  *(float ***)((long)ppfVar4 + -0x38) = param_5;
  *(float ***)((long)ppfVar4 + -0x30) = param_6;
  *(float ***)((long)ppfVar4 + -0x28) = param_7;
  *(ulong **)((long)ppfVar4 + -0x20) = param_8;
  *(undefined8 **)((long)ppfVar4 + -0x18) = param_9;
  *(undefined8 *****)((long)ppfVar4 + -0x10) = ppppuVar33;
  *(undefined8 *)((long)ppfVar4 + -8) = uVar34;
  func_0x000108117e88();
  *(undefined8 *)((long)ppfVar4 + -0x70) = extraout_x8_04;
  func_0x000108113b60((undefined1 *)((long)ppfVar4 + -0x118),(undefined1 *)((long)ppfVar4 + -0x110))
  ;
  plVar24 = *(long **)((long)ppfVar4 + -0x118);
  plVar10 = plVar24;
  (**(code **)(*plVar24 + 0x28))((undefined1 *)((long)ppfVar4 + -0x90));
  uVar5 = *(long *)((long)ppfVar4 + -0x90) == 1;
  if ((bool)uVar5) {
    *(long **)((long)ppfVar4 + -0x150) = plVar24;
    puVar23 = (undefined8 *)0x0;
    *(undefined8 *)((long)ppfVar4 + -0x138) = 0;
    *(undefined8 *)((long)ppfVar4 + -0x140) = 0;
    *(undefined8 *)((long)ppfVar4 + -0x128) = 0;
    *(undefined8 *)((long)ppfVar4 + -0x130) = 0;
    pfVar7 = *ppfVar17;
    pfVar1 = ppfVar17[1];
    *(undefined8 **)((long)ppfVar4 + -0x158) = puVar22;
    uVar34 = *puVar22;
    *(undefined8 *)((long)ppfVar4 + -0x148) = puVar22[1];
    do {
      iVar31 = (int)plVar10;
      uVar5 = pfVar7 == pfVar1;
      if ((bool)uVar5) {
        plVar24 = *(long **)((long)ppfVar4 + -0x150);
        (**(code **)(*plVar24 + 0x30))(plVar24);
        puVar22 = *(undefined8 **)((long)ppfVar4 + -0x158);
        *puVar22 = 1;
        puVar22[1] = puVar23;
        puVar22[3] = 0;
        puVar22[4] = 0;
        puVar22[2] = 0;
        *(undefined8 *)((long)ppfVar4 + -0x130) = 0;
        *(undefined8 *)((long)ppfVar4 + -0x128) = 0;
        *(undefined8 *)((long)ppfVar4 + -0x138) = 0;
        goto LAB_1081171a8;
      }
      *(undefined1 *)((long)ppfVar4 + -0xf0) = 0;
      *(undefined1 *)((long)ppfVar4 + -0x98) = 0;
      func_0x000105c3b044();
      if (iVar31 != 0) {
        FUN_1080e8d4c((undefined1 *)((long)ppfVar4 + -0xf0));
        *(undefined8 *)((long)ppfVar4 + -0xf0) = 0;
        *(undefined8 *)((long)ppfVar4 + -0xe8) = 0;
        *(undefined8 *)((long)ppfVar4 + -0xe0) = 0;
        *(undefined **)((long)ppfVar4 + -0xd8) = &UNK_10f47b906;
        *(undefined8 *)((long)ppfVar4 + -0xd0) = 0x2b;
        *(undefined1 *)((long)ppfVar4 + -200) = 0;
        *(undefined1 *)((long)ppfVar4 + -0xc0) = 0;
        func_0x00010bd3f3dc((undefined1 *)((long)ppfVar4 + -0xb8),&UNK_10f47b906,0x2b);
        func_0x00010b9a7630((undefined1 *)((long)ppfVar4 + -0xf0));
        *(undefined1 *)((long)ppfVar4 + -0x98) = 1;
      }
      lVar30 = *(long *)((long)ppfVar4 + -0x80);
      param_3 = (float **)(ulong)*(uint *)(lVar30 + 0xc60);
      *(uint *)(lVar30 + 0xc60) = *(uint *)(lVar30 + 0xc60) + 1;
      *(int *)(*(long *)(lVar30 + 0xc40) + 0x58) = *(int *)(*(long *)(lVar30 + 0xc40) + 0x58) + 1;
      FUN_10810f48c(lVar30,pfVar7,0);
      FUN_10811742c((undefined1 *)((long)ppfVar4 + -0x100),param_2,
                    (undefined1 *)((long)ppfVar4 + -0x88),ppfVar13[0x1b],ppfVar13,ppfVar16,1,
                    ppfVar18);
      FUN_10833baf4(lVar30);
      lVar30 = *(long *)((long)ppfVar4 + -0x100);
      if (lVar30 == 1) {
        puVar23 = (undefined8 *)
                  ((long)puVar23 + (long)(pfVar7[3] - pfVar7[1]) * (long)(pfVar7[2] - *pfVar7));
        *(undefined8 **)((long)ppfVar4 + -0x140) = puVar23;
      }
      else {
        *(undefined8 *)((long)ppfVar4 + -0x148) = *(undefined8 *)((long)ppfVar4 + -0xf8);
        *(undefined8 *)((long)ppfVar4 + -0xf8) = 0;
        uVar34 = 2;
      }
      func_0x0001080c6234((undefined1 *)((long)ppfVar4 + -0x100));
      plVar10 = (long *)((long)ppfVar4 + -0xf0);
      FUN_1080e8dd4();
      pfVar7 = pfVar7 + 4;
    } while (lVar30 == 1);
    puVar22 = *(undefined8 **)((long)ppfVar4 + -0x158);
    plVar24 = *(long **)((long)ppfVar4 + -0x150);
    uVar21 = *(undefined8 *)((long)ppfVar4 + -0x148);
    *puVar22 = uVar34;
    puVar22[1] = uVar21;
    uVar5 = 0;
LAB_1081171a8:
    FUN_108100324((ulong)((long)ppfVar4 + -0x140) | 8);
    puVar22 = puVar23;
  }
  else {
    uVar34 = *(undefined8 *)((long)ppfVar4 + -0x88);
    *puVar22 = 2;
    puVar22[1] = uVar34;
    *(undefined8 *)((long)ppfVar4 + -0x88) = 0;
  }
  func_0x0001078d49a4((undefined1 *)((long)ppfVar4 + -0x90));
  plVar10 = plVar24;
  func_0x0001078d4980();
  func_0x000108117e74(*(undefined8 *)((long)ppfVar4 + -0x70));
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  *(ulong **)((long)ppfVar4 + -0x1a0) = param_2;
  *(float ***)((long)ppfVar4 + -0x198) = ppfVar13;
  *(float ***)((long)ppfVar4 + -400) = ppfVar16;
  *(float ***)((long)ppfVar4 + -0x188) = ppfVar18;
  *(long **)((long)ppfVar4 + -0x180) = plVar24;
  *(undefined8 **)((long)ppfVar4 + -0x178) = puVar22;
  *(undefined1 **)((long)ppfVar4 + -0x170) = (undefined1 *)((long)ppfVar4 + -0x10);
  *(code **)((long)ppfVar4 + -0x168) = FUN_1081171f4;
  __ZNSt3__115recursive_mutex4lockEv(plVar10 + 2);
  lVar25 = plVar10[0xd];
  for (lVar30 = plVar10[0xc]; lVar26 = lVar25, lVar30 != lVar25; lVar30 = lVar30 + 0x58) {
    lVar26 = lVar30;
    if (*(float ***)(lVar30 + 0x50) < param_3) goto LAB_10811724c;
  }
LAB_108117280:
  FUN_108117b1c(plVar10 + 0xc,lVar25,lVar26);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(plVar10 + 2);
  return;
LAB_10811724c:
  while (lVar20 = lVar30 + 0x58, lVar20 != lVar25) {
    puVar22 = (undefined8 *)(lVar30 + 0xa8);
    lVar30 = lVar20;
    if (param_3 <= (float **)*puVar22) {
      FUN_108117da4(lVar26,lVar20);
      lVar26 = lVar26 + 0x58;
    }
  }
  lVar25 = lVar26;
  lVar26 = plVar10[0xd];
  goto LAB_108117280;
}



/* Entry: 108116d90; end: 108116e33;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000108116dec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_108116d90(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                  undefined8 *param_5,undefined8 param_6,long *param_7,undefined8 param_8)

{
  float *pfVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  undefined8 uVar21;
  undefined8 uStack_2e8;
  long alStack_2e0 [5];
  ulong *puStack_2b8;
  undefined1 auStack_2b0 [16];
  long lStack_2a0;
  undefined8 uStack_298;
  ulong auStack_290 [3];
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_260;
  undefined1 auStack_258 [32];
  undefined1 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_210;
  long *plStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined8 auStack_180 [3];
  ulong auStack_168 [3];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_138;
  undefined1 auStack_130 [32];
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_98 [11];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  lVar16 = param_3;
  puVar10 = param_5;
  func_0x000108117e88();
  iVar4 = (int)lVar16;
  auStack_98[0]._0_1_ = 0;
  uStack_40 = 0;
  uStack_38 = extraout_x8;
  func_0x000105c3b044();
  if (iVar4 != 0) {
    FUN_1081172a8(auStack_98,&UNK_10f47b8b3);
  }
  func_0x000108117f8c(param_2,(float)*(int *)((long)param_5 + 4),param_3 + 0xa0);
  puVar9 = (undefined8 *)*param_4;
  FUN_10811849c(param_3 + 0xa0);
  FUN_1081180c4(param_1,param_3 + 0xa0);
  puVar5 = auStack_98;
  FUN_1080e8dd4();
  func_0x000108117e74(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = puVar5;
  puVar11 = puVar10;
  uVar12 = param_6;
  plVar13 = param_7;
  uVar14 = param_8;
  func_0x000108117e88();
  iVar4 = (int)puVar6;
  auStack_168[0] = auStack_168[0] & 0xffffffffffffff00;
  uStack_110 = 0;
  uStack_108 = extraout_x8_00;
  func_0x000105c3b044();
  if (iVar4 != 0) {
    FUN_1080e8d4c(auStack_168);
    auStack_168[0] = 0;
    auStack_168[1] = 0;
    auStack_168[2] = 0;
    puStack_150 = &UNK_10f47b932;
    uStack_148 = 0x28;
    uStack_140 = 0;
    uStack_138 = 0;
    puVar11 = (undefined8 *)0x28;
    func_0x00010bd3f3dc(auStack_130);
    func_0x00010b9a7630(auStack_168);
    uStack_110 = 1;
  }
  func_0x000108113b60(&plStack_1a0,auStack_198);
  (**(code **)(*plStack_1a0 + 0x28))(&lStack_188,plStack_1a0);
  uVar3 = lStack_188 == 1;
  if ((bool)uVar3) {
    puVar11 = auStack_180;
    FUN_10811742c(puVar5);
    (**(code **)(*plStack_1a0 + 0x30))(plStack_1a0);
    puVar10 = puVar9;
    uVar12 = param_6;
    plVar13 = param_7;
    uVar14 = param_8;
  }
  else {
    *puVar5 = 2;
    puVar5[1] = auStack_180[0];
    auStack_180[0] = 0;
  }
  func_0x0001078d49a4(&lStack_188);
  func_0x0001078d4980(plStack_1a0);
  puVar7 = auStack_168;
  FUN_1080e8dd4();
  func_0x000108117e74(uStack_108);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108117e88();
  uStack_210 = extraout_x8_02;
  func_0x000108113b60(&puStack_2b8,auStack_2b0);
  puVar8 = puStack_2b8;
  (**(code **)(*puStack_2b8 + 0x28))(&lStack_230);
  uVar3 = lStack_230 == 1;
  if ((bool)uVar3) {
    lVar16 = 0;
    alStack_2e0[1] = 0;
    alStack_2e0[0] = 0;
    alStack_2e0[3] = 0;
    alStack_2e0[2] = 0;
    pfVar20 = (float *)*plVar13;
    pfVar1 = (float *)plVar13[1];
    uVar21 = *extraout_x8_01;
    uStack_2e8 = extraout_x8_01[1];
    do {
      iVar4 = (int)puVar8;
      uVar3 = pfVar20 == pfVar1;
      if ((bool)uVar3) {
        (**(code **)(*puStack_2b8 + 0x30))(puStack_2b8);
        *extraout_x8_01 = 1;
        extraout_x8_01[1] = lVar16;
        extraout_x8_01[3] = 0;
        extraout_x8_01[4] = 0;
        extraout_x8_01[2] = 0;
        alStack_2e0[2] = 0;
        alStack_2e0[3] = 0;
        alStack_2e0[1] = 0;
        goto LAB_1081171a8;
      }
      auStack_290[0] = auStack_290[0] & 0xffffffffffffff00;
      uStack_238 = 0;
      func_0x000105c3b044();
      if (iVar4 != 0) {
        FUN_1080e8d4c(auStack_290);
        auStack_290[0] = 0;
        auStack_290[1] = 0;
        auStack_290[2] = 0;
        puStack_278 = &UNK_10f47b906;
        uStack_270 = 0x2b;
        uStack_268 = 0;
        uStack_260 = 0;
        func_0x00010bd3f3dc(auStack_258,&UNK_10f47b906,0x2b);
        func_0x00010b9a7630(auStack_290);
        uStack_238 = 1;
      }
      lVar2 = lStack_220;
      puVar11 = (undefined8 *)(ulong)*(uint *)(lStack_220 + 0xc60);
      *(uint *)(lStack_220 + 0xc60) = *(uint *)(lStack_220 + 0xc60) + 1;
      *(int *)(*(long *)(lStack_220 + 0xc40) + 0x58) =
           *(int *)(*(long *)(lStack_220 + 0xc40) + 0x58) + 1;
      FUN_10810f48c(lStack_220,pfVar20,0);
      FUN_10811742c(&lStack_2a0,puVar7,&uStack_228,puVar10[0x1b],puVar10,uVar12,1,uVar14);
      FUN_10833baf4(lVar2);
      lVar2 = lStack_2a0;
      if (lStack_2a0 == 1) {
        lVar16 = lVar16 + (long)(pfVar20[3] - pfVar20[1]) * (long)(pfVar20[2] - *pfVar20);
        alStack_2e0[0] = lVar16;
      }
      else {
        uStack_2e8 = uStack_298;
        uStack_298 = 0;
        uVar21 = 2;
      }
      func_0x0001080c6234(&lStack_2a0);
      puVar8 = auStack_290;
      FUN_1080e8dd4();
      pfVar20 = pfVar20 + 4;
    } while (lVar2 == 1);
    *extraout_x8_01 = uVar21;
    extraout_x8_01[1] = uStack_2e8;
    uVar3 = 0;
LAB_1081171a8:
    FUN_108100324((ulong)alStack_2e0 | 8);
  }
  else {
    *extraout_x8_01 = 2;
    extraout_x8_01[1] = uStack_228;
    uStack_228 = 0;
  }
  func_0x0001078d49a4(&lStack_230);
  func_0x0001078d4980();
  func_0x000108117e74(uStack_210);
  if ((bool)uVar3) {
    return;
  }
  puVar7 = puStack_2b8;
  ___stack_chk_fail();
  __ZNSt3__115recursive_mutex4lockEv(puVar7 + 2);
  uVar18 = puVar7[0xd];
  for (uVar17 = puVar7[0xc]; uVar19 = uVar18, uVar17 != uVar18; uVar17 = uVar17 + 0x58) {
    uVar19 = uVar17;
    if (*(undefined8 **)(uVar17 + 0x50) < puVar11) goto LAB_10811724c;
  }
LAB_108117280:
  FUN_108117b1c(puVar7 + 0xc,uVar18,uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(puVar7 + 2);
  return;
LAB_10811724c:
  while (uVar15 = uVar17 + 0x58, uVar15 != uVar18) {
    puVar10 = (undefined8 *)(uVar17 + 0xa8);
    uVar17 = uVar15;
    if (puVar11 <= (undefined8 *)*puVar10) {
      FUN_108117da4(uVar19,uVar15);
      uVar19 = uVar19 + 0x58;
    }
  }
  uVar18 = uVar19;
  uVar19 = puVar7[0xd];
  goto LAB_108117280;
}



/* Entry: 108116e34; end: 1081171f3;  */

void FUN_108116e34(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  long *param_5,undefined8 param_6)

{
  float *pfVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  undefined8 uVar18;
  undefined8 uStack_248;
  long alStack_240 [5];
  ulong *puStack_218;
  undefined1 auStack_210 [16];
  long lStack_200;
  undefined8 uStack_1f8;
  ulong auStack_1f0 [3];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [32];
  undefined1 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_170;
  long *plStack_100;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  undefined8 auStack_e0 [3];
  ulong auStack_c8 [3];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [32];
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  puVar8 = param_3;
  uVar9 = param_4;
  plVar10 = param_5;
  uVar11 = param_6;
  func_0x000108117e88();
  iVar4 = (int)puVar5;
  auStack_c8[0] = auStack_c8[0] & 0xffffffffffffff00;
  uStack_70 = 0;
  uStack_68 = extraout_x8;
  func_0x000105c3b044();
  if (iVar4 != 0) {
    FUN_1080e8d4c(auStack_c8);
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    auStack_c8[2] = 0;
    puStack_b0 = &UNK_10f47b932;
    uStack_a8 = 0x28;
    uStack_a0 = 0;
    uStack_98 = 0;
    puVar8 = (undefined8 *)0x28;
    func_0x00010bd3f3dc(auStack_90);
    func_0x00010b9a7630(auStack_c8);
    uStack_70 = 1;
  }
  func_0x000108113b60(&plStack_100,auStack_f8);
  (**(code **)(*plStack_100 + 0x28))(&lStack_e8,plStack_100);
  uVar3 = lStack_e8 == 1;
  if ((bool)uVar3) {
    puVar8 = auStack_e0;
    FUN_10811742c(param_1);
    (**(code **)(*plStack_100 + 0x30))(plStack_100);
    param_3 = param_2;
    uVar9 = param_4;
    plVar10 = param_5;
    uVar11 = param_6;
  }
  else {
    *param_1 = 2;
    param_1[1] = auStack_e0[0];
    auStack_e0[0] = 0;
  }
  func_0x0001078d49a4(&lStack_e8);
  func_0x0001078d4980(plStack_100);
  puVar6 = auStack_c8;
  FUN_1080e8dd4();
  func_0x000108117e74(uStack_68);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108117e88();
  uStack_170 = extraout_x8_01;
  func_0x000108113b60(&puStack_218,auStack_210);
  puVar7 = puStack_218;
  (**(code **)(*puStack_218 + 0x28))(&lStack_190);
  uVar3 = lStack_190 == 1;
  if ((bool)uVar3) {
    lVar13 = 0;
    alStack_240[1] = 0;
    alStack_240[0] = 0;
    alStack_240[3] = 0;
    alStack_240[2] = 0;
    pfVar17 = (float *)*plVar10;
    pfVar1 = (float *)plVar10[1];
    uVar18 = *extraout_x8_00;
    uStack_248 = extraout_x8_00[1];
    do {
      iVar4 = (int)puVar7;
      uVar3 = pfVar17 == pfVar1;
      if ((bool)uVar3) {
        (**(code **)(*puStack_218 + 0x30))(puStack_218);
        *extraout_x8_00 = 1;
        extraout_x8_00[1] = lVar13;
        extraout_x8_00[3] = 0;
        extraout_x8_00[4] = 0;
        extraout_x8_00[2] = 0;
        alStack_240[2] = 0;
        alStack_240[3] = 0;
        alStack_240[1] = 0;
        goto LAB_1081171a8;
      }
      auStack_1f0[0] = auStack_1f0[0] & 0xffffffffffffff00;
      uStack_198 = 0;
      func_0x000105c3b044();
      if (iVar4 != 0) {
        FUN_1080e8d4c(auStack_1f0);
        auStack_1f0[0] = 0;
        auStack_1f0[1] = 0;
        auStack_1f0[2] = 0;
        puStack_1d8 = &UNK_10f47b906;
        uStack_1d0 = 0x2b;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        func_0x00010bd3f3dc(auStack_1b8,&UNK_10f47b906,0x2b);
        func_0x00010b9a7630(auStack_1f0);
        uStack_198 = 1;
      }
      lVar2 = lStack_180;
      puVar8 = (undefined8 *)(ulong)*(uint *)(lStack_180 + 0xc60);
      *(uint *)(lStack_180 + 0xc60) = *(uint *)(lStack_180 + 0xc60) + 1;
      *(int *)(*(long *)(lStack_180 + 0xc40) + 0x58) =
           *(int *)(*(long *)(lStack_180 + 0xc40) + 0x58) + 1;
      FUN_10810f48c(lStack_180,pfVar17,0);
      FUN_10811742c(&lStack_200,puVar6,&uStack_188,param_3[0x1b],param_3,uVar9,1,uVar11);
      FUN_10833baf4(lVar2);
      lVar2 = lStack_200;
      if (lStack_200 == 1) {
        lVar13 = lVar13 + (long)(pfVar17[3] - pfVar17[1]) * (long)(pfVar17[2] - *pfVar17);
        alStack_240[0] = lVar13;
      }
      else {
        uStack_248 = uStack_1f8;
        uStack_1f8 = 0;
        uVar18 = 2;
      }
      func_0x0001080c6234(&lStack_200);
      puVar7 = auStack_1f0;
      FUN_1080e8dd4();
      pfVar17 = pfVar17 + 4;
    } while (lVar2 == 1);
    *extraout_x8_00 = uVar18;
    extraout_x8_00[1] = uStack_248;
    uVar3 = 0;
LAB_1081171a8:
    FUN_108100324((ulong)alStack_240 | 8);
  }
  else {
    *extraout_x8_00 = 2;
    extraout_x8_00[1] = uStack_188;
    uStack_188 = 0;
  }
  func_0x0001078d49a4(&lStack_190);
  func_0x0001078d4980();
  func_0x000108117e74(uStack_170);
  if ((bool)uVar3) {
    return;
  }
  puVar6 = puStack_218;
  ___stack_chk_fail();
  __ZNSt3__115recursive_mutex4lockEv(puVar6 + 2);
  uVar15 = puVar6[0xd];
  for (uVar14 = puVar6[0xc]; uVar16 = uVar15, uVar14 != uVar15; uVar14 = uVar14 + 0x58) {
    uVar16 = uVar14;
    if (*(undefined8 **)(uVar14 + 0x50) < puVar8) goto LAB_10811724c;
  }
LAB_108117280:
  FUN_108117b1c(puVar6 + 0xc,uVar15,uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(puVar6 + 2);
  return;
LAB_10811724c:
  while (uVar12 = uVar14 + 0x58, uVar12 != uVar15) {
    puVar5 = (undefined8 *)(uVar14 + 0xa8);
    uVar14 = uVar12;
    if (puVar8 <= (undefined8 *)*puVar5) {
      FUN_108117da4(uVar16,uVar12);
      uVar16 = uVar16 + 0x58;
    }
  }
  uVar15 = uVar16;
  uVar16 = puVar6[0xd];
  goto LAB_108117280;
}



/* Entry: 1081171f4; end: 1081172a7;  */

void FUN_1081171f4(long param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x68);
  for (lVar3 = *(long *)(param_1 + 0x60); lVar5 = lVar4, lVar3 != lVar4; lVar3 = lVar3 + 0x58) {
    lVar5 = lVar3;
    if (*(ulong *)(lVar3 + 0x50) < param_2) goto LAB_10811724c;
  }
LAB_108117280:
  FUN_108117b1c((long *)(param_1 + 0x60),lVar4,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x10);
  return;
LAB_10811724c:
  while (lVar2 = lVar3 + 0x58, lVar2 != lVar4) {
    puVar1 = (ulong *)(lVar3 + 0xa8);
    lVar3 = lVar2;
    if (param_2 <= *puVar1) {
      FUN_108117da4(lVar5,lVar2);
      lVar5 = lVar5 + 0x58;
    }
  }
  lVar4 = lVar5;
  lVar5 = *(long *)(param_1 + 0x68);
  goto LAB_108117280;
}



/* Entry: 1081172a8; end: 1081172cb;  */

void FUN_1081172a8(void)

{
  func_0x000108117eb8();
  func_0x000108117f18();
  FUN_108117cac();
  return;
}



/* Entry: 1081172cc; end: 108117407;  */

long * FUN_1081172cc(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar6;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [224];
  undefined1 auStack_a8 [88];
  undefined1 uStack_50;
  undefined8 uStack_48;
  long lVar5;
  
  lVar5 = param_2;
  func_0x000108117e88();
  iVar4 = (int)lVar5;
  auStack_a8[0] = 0;
  uStack_50 = 0;
  uStack_48 = extraout_x8;
  func_0x000105c3b044();
  if (iVar4 != 0) {
    FUN_108117408(auStack_a8,&UNK_10f47b8e0);
  }
  func_0x000108117ed8(*param_4);
  (*extraout_x9)(auStack_1a0);
  plVar6 = (long *)(param_2 + 0x90);
  do {
    lVar5 = *plVar6 + 1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x10);
  FUN_108116d90(auStack_1b8,param_2,param_3,auStack_1a0);
  FUN_108116790(auStack_188,param_2,param_3);
  func_0x000108117ed8(*param_4);
  (*extraout_x9_00)(auStack_1d0);
  func_0x000108116f9c(param_1,param_2,auStack_188,param_4,auStack_1d0,auStack_1b8,lVar5);
  FUN_1081171f4(param_2,lVar5);
  uVar3 = *param_1 == 1;
  if ((bool)uVar3) {
    func_0x000108117c44(param_1 + 2,auStack_1b8);
  }
  func_0x000108117c1c(auStack_188);
  FUN_108100324(auStack_1b8);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x10);
  plVar6 = (long *)auStack_a8;
  FUN_1080e8dd4(plVar6);
  func_0x000108117e74(uStack_48);
  if ((bool)uVar3) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x000108117eb8();
  func_0x000108117f18();
  FUN_108117d04();
  return param_1;
}



/* Entry: 108117408; end: 10811742b;  */

void FUN_108117408(void)

{
  func_0x000108117eb8();
  func_0x000108117f18();
  FUN_108117d04();
  return;
}



/* Entry: 10811742c; end: 108117b1b;  */

float * FUN_10811742c(ulong param_1,ulong param_2,undefined4 param_3,float param_4,float *param_5,
                     float *param_6,float *param_7,float *param_8,long *param_9,int *param_10,
                     int param_11,ulong param_12)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  undefined8 extraout_x8;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  code *extraout_x9;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  undefined8 *puVar22;
  float *pfVar23;
  undefined8 *puVar24;
  float *pfVar25;
  float *pfVar26;
  ulong uVar27;
  float fVar28;
  undefined8 uVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined4 uStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  ulong auStack_110 [5];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  
  pfVar8 = param_5;
  pfVar25 = param_6;
  pfVar10 = param_7;
  func_0x000108117e88();
  uStack_b0 = extraout_x8;
  if (param_11 != 0) {
    auStack_110[3] = 0;
    auStack_110[2] = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    auStack_110[4] = 0;
    auStack_110[1] = 0;
    auStack_110[0] = 0;
    param_1 = 0;
    uStack_d0 = 0x4080000000000000;
    uStack_c8 = 0;
    FUN_108343500(0);
    uStack_e0 = (undefined4)param_1;
    uStack_dc = CONCAT44(param_3,(int)param_2);
    fStack_d4 = param_4;
    FUN_1083762f4(auStack_110,1);
    pfVar25 = (float *)auStack_110;
    (**(code **)(**(long **)(param_7 + 2) + 0xa8))();
    pfVar8 = (float *)auStack_110;
    FUN_108375e94();
  }
  pfVar23 = (float *)0x0;
  lVar19 = *param_9;
  lVar13 = lVar19 + param_9[1] * 0x60;
  while( true ) {
    fVar33 = (float)param_2;
    fVar32 = (float)param_1;
    if (lVar19 == lVar13) break;
    uVar27 = *(ulong *)(lVar19 + 8);
    if (uVar27 == 0) {
      pfVar8 = param_8;
      pfVar25 = param_7;
      pfVar10 = pfVar23;
      func_0x00010810f508();
      pfVar23 = (float *)((long)pfVar23 + 1);
    }
    else {
      iVar12 = *param_10;
      fVar34 = (float)iVar12;
      FUN_10810ef18(param_8);
      fVar32 = fVar34 / fVar32;
      fVar28 = (float)param_10[1];
      fVar33 = fVar28 / fVar33;
      pfVar17 = (float *)(lVar19 + 0x10);
      fVar35 = fVar32 * (*(float *)(lVar19 + 0x18) - *pfVar17) *
               fVar33 * (*(float *)(lVar19 + 0x1c) - *(float *)(lVar19 + 0x14));
      fVar31 = 1.0;
      if ((0.0 < fVar35) && (fVar5 = (float)iVar12 * (float)param_10[1] * 16.0, fVar5 < fVar35)) {
        fVar31 = SQRT(fVar5 / fVar35);
      }
      fVar34 = fVar31 * fVar34;
      param_2 = (ulong)(uint)fVar34;
      uVar11 = (uint)fVar34;
      if ((int)uVar11 < 2) {
        uVar11 = 1;
      }
      pfVar26 = (float *)(ulong)uVar11;
      fVar28 = fVar31 * fVar28;
      param_1 = (ulong)(uint)fVar28;
      iVar12 = (int)fVar28;
      if (iVar12 < 2) {
        iVar12 = 1;
      }
      fVar35 = fVar32 * fVar31;
      uVar18 = (ulong)(uint)fVar35;
      fVar28 = fVar33 * fVar31;
      uVar16 = (ulong)(uint)fVar28;
      pfVar8 = param_6 + 4;
      __ZNSt3__115recursive_mutex4lockEv();
      puVar2 = *(ulong **)(param_6 + 0x1a);
      for (puVar20 = *(ulong **)(param_6 + 0x18); iVar7 = (int)pfVar8, puVar20 != puVar2;
          puVar20 = puVar20 + 0xb) {
        if (puVar20[1] == uVar27) {
          pfVar8 = (float *)(puVar20 + 2);
          FUN_108117b5c(pfVar8,pfVar17);
          if ((int)pfVar8 != 0) {
            pfVar8 = (float *)(puVar20 + 4);
            pfVar25 = (float *)(lVar19 + 0x20);
            func_0x000108363bec();
            if ((((int)pfVar8 != 0) &&
                (param_1 = (ulong)(uint)*(float *)(puVar20 + 9), *(float *)(puVar20 + 9) == fVar35))
               && (param_1 = (ulong)(uint)*(float *)((long)puVar20 + 0x4c),
                  *(float *)((long)puVar20 + 0x4c) == fVar28)) {
              puVar20[10] = param_12;
              uStack_158 = *puVar20;
              uStack_160 = 1;
              if ((uStack_158 != 0) && (*(long *)(uStack_158 + 0x10) != 0)) {
                plVar1 = (long *)(*(long *)(uStack_158 + 0x10) + 8);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = *plVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              goto LAB_108117980;
            }
          }
        }
      }
      auStack_110[0] = auStack_110[0] & 0xffffffffffffff00;
      uStack_b8 = 0;
      func_0x000105c3b044();
      if (iVar7 != 0) {
        func_0x000108117b98(auStack_110,&UNK_10f47b95b);
      }
      (**(code **)(**(long **)(uVar27 + 0x10) + 0x20))(&lStack_168);
      if (lStack_168 == 0) {
        pfVar25 = (float *)&UNK_10f47b97d;
        func_0x00010b99f5f8(&uStack_138);
        func_0x000108117f24(CONCAT44(uStack_134,uStack_138));
      }
      else {
        pfVar25 = (float *)&lStack_168;
        FUN_108116048(&lStack_120,param_6 + 0x1e,pfVar25,pfVar26,iVar12);
        if (lStack_120 == 1) {
          uVar30 = uStack_118;
          func_0x000108117eac();
          if (uVar30 != 0) {
            func_0x000108117ed8(uStack_118);
            (*extraout_x9)(&uStack_138);
            _bzero(uVar30,lStack_128 * (int)uStack_134);
            func_0x000108117e98(uStack_118);
          }
          pfVar26 = pfVar17;
          (**(code **)(**(long **)(uVar27 + 0x10) + 0x28))
                    (&uStack_138,*(long **)(uVar27 + 0x10),&uStack_118,pfVar17,lVar19 + 0x20);
          if (CONCAT44(uStack_134,uStack_138) == 1) {
            pfVar25 = (float *)0x0;
            FUN_108140c9c(&uStack_150,&uStack_118);
            if (uStack_150 == 1) {
              pfVar8 = *(float **)(param_6 + 0x1a);
              if (pfVar8 < *(float **)(param_6 + 0x1c)) {
                func_0x000108117e3c();
                pfVar8 = pfVar8 + 0x16;
              }
              else {
                lVar21 = (long)pfVar8 - *(ulong *)(param_6 + 0x18);
                uVar18 = lVar21 / 0x58 + 1;
                if (0x2e8ba2e8ba2e8ba < uVar18) goto LAB_108117b14;
                uVar30 = (long)((long)*(float **)(param_6 + 0x1c) - *(ulong *)(param_6 + 0x18)) /
                         0x58;
                uVar16 = uVar30 * 2;
                if (uVar16 < uVar18 || uVar16 - uVar18 == 0) {
                  uVar16 = uVar18;
                }
                if (0x1745d1745d1745c < uVar30) {
                  uVar16 = 0x2e8ba2e8ba2e8ba;
                }
                if (uVar16 == 0) {
                  lVar9 = 0;
                }
                else {
                  if (0x2e8ba2e8ba2e8ba < uVar16) goto LAB_108117b18;
                  lVar9 = uVar16 * 0x58;
                  __Znwm();
                }
                lVar21 = lVar9 + lVar21;
                func_0x000108117e3c();
                puVar24 = *(undefined8 **)(param_6 + 0x18);
                puVar3 = *(undefined8 **)(param_6 + 0x1a);
                puVar14 = (undefined8 *)(lVar21 + (((long)puVar3 - (long)puVar24) / -0x58) * 0x58);
                puVar15 = puVar14;
                for (puVar22 = puVar24; puVar22 != puVar3; puVar22 = puVar22 + 0xb) {
                  uVar29 = *puVar22;
                  puVar15[1] = puVar22[1];
                  *puVar15 = uVar29;
                  *puVar22 = 0;
                  puVar22[1] = 0;
                  pfVar26 = (float *)0x48;
                  _memcpy(puVar15 + 2,puVar22 + 2);
                  puVar15 = puVar15 + 0xb;
                }
                for (; puVar24 != puVar3; puVar24 = puVar24 + 0xb) {
                  func_0x000108117bf4(puVar24);
                }
                uVar18 = *(ulong *)(param_6 + 0x18);
                pfVar8 = (float *)(lVar21 + 0x58);
                *(undefined8 **)(param_6 + 0x18) = puVar14;
                *(float **)(param_6 + 0x1a) = pfVar8;
                *(ulong *)(param_6 + 0x1c) = lVar9 + uVar16 * 0x58;
                if (uVar18 != 0) {
                  __ZdlPv();
                }
              }
              *(float **)(param_6 + 0x1a) = pfVar8;
              func_0x000108114920(pfVar8 + -0x14,uVar27);
              uVar27 = *(ulong *)pfVar17;
              *(ulong *)(pfVar8 + -0x10) = *(ulong *)(lVar19 + 0x18);
              *(ulong *)(pfVar8 + -0x12) = uVar27;
              uVar18 = *(ulong *)(lVar19 + 0x28);
              uVar27 = *(ulong *)(lVar19 + 0x20);
              uVar30 = *(ulong *)(lVar19 + 0x38);
              uVar16 = *(ulong *)(lVar19 + 0x30);
              *(ulong *)(pfVar8 + -6) = *(ulong *)(lVar19 + 0x40);
              *(ulong *)(pfVar8 + -8) = uVar30;
              *(ulong *)(pfVar8 + -10) = uVar16;
              *(ulong *)(pfVar8 + -0xc) = uVar18;
              *(ulong *)(pfVar8 + -0xe) = uVar27;
              pfVar8[-4] = fVar35;
              pfVar8[-3] = fVar28;
              *(ulong *)(pfVar8 + -2) = param_12;
              pfVar25 = (float *)((ulong)&uStack_150 | 8);
              FUN_1080e85e4(pfVar8 + -0x16);
              uVar18 = uStack_150;
              uStack_158 = uStack_148;
              uStack_160 = uStack_150;
              uStack_150 = 0;
            }
            else {
              func_0x000108117f24(uStack_148);
              uStack_148 = 0;
            }
            func_0x0001078c47a0(&uStack_150);
          }
          else {
            pfVar25 = (float *)&UNK_10f47b9b8;
            pfVar26 = (float *)0x24;
            func_0x00010b99fa70(&uStack_150,&uStack_130);
            func_0x000108117f24(uStack_150);
          }
          func_0x0001080c6234(&uStack_138);
          param_1 = uVar18;
          param_2 = uVar16;
        }
        else {
          func_0x000108117f24(uStack_118);
          uStack_118 = 0;
        }
        func_0x0001080cc588(&lStack_120);
        pfVar10 = pfVar26;
      }
      FUN_1081165ec(lStack_168);
      FUN_1080e8dd4(auStack_110);
LAB_108117980:
      __ZNSt3__115recursive_mutex6unlockEv(param_6 + 4);
      uVar27 = uStack_160;
      if (uStack_160 == 1) {
        uVar18 = *(ulong *)(param_7 + 2);
        pfVar25 = (float *)(ulong)*(uint *)(uVar18 + 0xc60);
        *(uint *)(uVar18 + 0xc60) = *(uint *)(uVar18 + 0xc60) + 1;
        *(int *)(*(long *)(uVar18 + 0xc40) + 0x58) = *(int *)(*(long *)(uVar18 + 0xc40) + 0x58) + 1;
        if (*(int *)(*(long *)(lVar19 + 0x48) + 0x48) != 0) {
          func_0x000108376b14(&uStack_138);
          func_0x000108142198(auStack_110,fVar32,fVar33);
          func_0x00010814228c(&uStack_138,auStack_110);
          FUN_108110420(uVar18,&uStack_138,1);
          FUN_10837ca5c(CONCAT44(uStack_134,uStack_138));
        }
        uStack_dc = 0;
        uStack_e0 = 0;
        auStack_110[3] = 0;
        auStack_110[2] = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        auStack_110[4] = 0;
        auStack_110[1] = 0;
        auStack_110[0] = 0;
        uStack_d0 = 0x4080000000000000;
        uStack_c8 = 1;
        fStack_d4 = 1.0;
        if (*(float *)(lVar19 + 0x58) <= 1.0) {
          fStack_d4 = *(float *)(lVar19 + 0x58);
        }
        if (fStack_d4 <= 0.0) {
          fStack_d4 = 0.0;
        }
        param_1 = NEON_scvtf(*(undefined8 *)param_10,4);
        param_2 = CONCAT44((float)(param_1 >> 0x20) * fVar31 + 0.0,(float)param_1 * fVar31 + 0.0);
        lStack_120 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_134 = uStack_134 & 0xffffff00;
        uStack_130 = 0;
        lStack_128 = 1;
        pfVar10 = (float *)&lStack_120;
        uStack_148 = param_1;
        uStack_118 = param_2;
        func_0x0001081139d4(uVar18,uStack_158 + 0x18,pfVar10,&uStack_150,&uStack_138,auStack_110,0);
        FUN_10833baf4(uVar18);
        FUN_108375e94(auStack_110);
      }
      else {
        param_5[0] = 2.8026e-45;
        param_5[1] = 0.0;
        *(ulong *)(param_5 + 2) = uStack_158;
        uStack_158 = 0;
      }
      pfVar8 = (float *)&uStack_160;
      func_0x0001078c47a0();
      bVar6 = uVar27 == 1;
      pfVar26 = pfVar10;
      if (!bVar6) goto LAB_108117ad4;
    }
    lVar19 = lVar19 + 0x60;
  }
  param_5[0] = 1.4013e-45;
  param_5[1] = 0.0;
  bVar6 = true;
  pfVar26 = pfVar10;
LAB_108117ad4:
  func_0x000108117e74(uStack_b0);
  if (bVar6) {
    return pfVar8;
  }
  ___stack_chk_fail();
LAB_108117b14:
  func_0x00010bdb16c4();
LAB_108117b18:
  func_0x000104bfe188();
  if (pfVar25 != pfVar26) {
    func_0x000108117d20(pfVar26,*(ulong *)(pfVar8 + 2),pfVar25);
    func_0x000108117bbc(pfVar8);
  }
  return pfVar25;
}



/* Entry: 108117b1c; end: 108117b5b;  */

long FUN_108117b1c(long param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    func_0x000108117d20(param_3,*(undefined8 *)(param_1 + 8),param_2);
    func_0x000108117bbc(param_1);
  }
  return param_2;
}



/* Entry: 108117b5c; end: 108117b97;  */

bool FUN_108117b5c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (uVar2 == 4) break;
    uVar1 = uVar2 + 1;
  } while (ABS(*(float *)(param_1 + uVar2 * 4) - *(float *)(param_2 + uVar2 * 4)) <= 0.0001);
  return 3 < uVar2;
}



/* Entry: 108117b98; end: 108117cab;  */

void FUN_108117b98(void)

{
  func_0x000108117eb8();
  func_0x000108117f18();
  FUN_108117de4();
  return;
}



/* Entry: 108117cac; end: 108117cc7;  */

void FUN_108117cac(long param_1)

{
  FUN_108117cc8();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 108117cc8; end: 108117d03;  */

undefined8 * FUN_108117cc8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  func_0x000108117f44(0x2c);
  func_0x00010bd3f3dc();
  func_0x00010b9a7630(param_1);
  return param_1;
}



/* Entry: 108117d04; end: 108117d4b;  */

void FUN_108117d04(long param_1)

{
  func_0x000105c3cd08();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 108117d4c; end: 108117da3;  */

void FUN_108117d4c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_108117da4(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  func_0x000108117f18();
  return;
}



/* Entry: 108117da4; end: 108117de3;  */

long FUN_108117da4(long param_1,long param_2)

{
  FUN_1080e8714();
  func_0x00010810e684(param_1 + 8,param_2 + 8);
  _memcpy(param_1 + 0x10,param_2 + 0x10,0x48);
  return param_1;
}



/* Entry: 108117de4; end: 108117dff;  */

void FUN_108117de4(long param_1)

{
  FUN_108117e00();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 108117e00; end: 108117e73;  */

undefined8 * FUN_108117e00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  func_0x000108117f44(0x21);
  func_0x00010bd3f3dc();
  func_0x00010b9a7630(param_1);
  return param_1;
}



/* Entry: 108117e74; end: 108117f57;  */

void FUN_108117e74(void)

{
  return;
}



/* Entry: 108117f58; end: 108117ff7;  */

long FUN_108117f58(long param_1)

{
  FUN_1081185e8(param_1 + 0x50);
  FUN_1081185e8(param_1 + 0x20);
  FUN_108100324(param_1 + 8);
  return param_1;
}



/* Entry: 108117ff8; end: 108118013;  */

int FUN_108117ff8(float *param_1)

{
  return (int)*param_1;
}



/* Entry: 108118014; end: 1081180c3;  */

void FUN_108118014(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  lVar5 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar4 = lVar1 - lVar5;
  do {
    lVar2 = lVar5;
    lVar5 = lVar2 + 0x10;
    lVar4 = lVar4 + -0x10;
    if (lVar2 == lVar1) goto LAB_1081180a0;
    lVar3 = lVar2;
    func_0x00010814003c(lVar2,&uStack_50);
  } while ((int)lVar3 == 0);
  func_0x00010813fee4(&uStack_50,lVar2);
  if (lVar5 != lVar1) {
    _memmove(lVar2,lVar5,lVar4);
  }
  *(long *)(param_1 + 0x10) = lVar2 + lVar4;
LAB_1081180a0:
  FUN_1081185a4((long *)(param_1 + 8),&uStack_50);
  return;
}



/* Entry: 1081180c4; end: 108118137;  */

void FUN_1081180c4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_108118138();
  FUN_10811831c(param_2 + 0x20,param_2 + 0x50);
  FUN_108118384(param_2 + 0x50);
  puVar1 = (undefined8 *)(param_2 + 8);
  uVar2 = *puVar1;
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar2;
  param_1[2] = *(undefined8 *)(param_2 + 0x18);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000108117c44(puVar1,&uStack_38);
  FUN_108100324(&uStack_38);
  return;
}



/* Entry: 108118138; end: 10811831b;  */

void FUN_108118138(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lStack_70;
  ulong *puStack_68;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar5 = *(ulong **)(param_1 + 0x28);
  FUN_108118440();
  lVar6 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x38);
  lStack_70 = lVar2;
  puStack_68 = puVar5;
  do {
    puVar5 = puStack_68;
    if (lStack_70 == lVar6 + lVar7) {
      lVar2 = *(long *)(param_1 + 0x50);
      lVar6 = *(long *)(param_1 + 0x58);
      FUN_108118440();
      lVar7 = *(long *)(param_1 + 0x50);
      lVar8 = *(long *)(param_1 + 0x68);
      lStack_70 = lVar2;
      puStack_68 = (ulong *)lVar6;
      while (lStack_70 != lVar7 + lVar8) {
        if (*(char *)((long)puStack_68 + 0x58) == '\x01') {
          *(undefined1 *)((long)puStack_68 + 0x58) = 0;
          FUN_108118014(param_1,(long)puStack_68 + 8);
        }
        FUN_108118468(&lStack_70);
      }
      return;
    }
    uVar3 = *puStack_68;
    FUN_108118e70();
    lVar2 = 0;
    puVar14 = puVar5 + 1;
    uVar10 = uVar3 >> 7;
    uVar9 = *(ulong *)(param_1 + 0x68);
    while( true ) {
      uVar10 = uVar10 & uVar9;
      uVar11 = *(ulong *)(*(long *)(param_1 + 0x50) + uVar10);
      uVar12 = uVar11 ^ (uVar3 & 0x7f) * 0x101010101010101;
      for (uVar12 = uVar12 + 0xfefefefefefefeff & (uVar12 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
        uVar13 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar10 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar9;
        puVar15 = (ulong *)(*(long *)(param_1 + 0x58) + uVar13 * 0x60);
        if (*puVar15 == *puVar5) {
          if (uVar9 == uVar13) goto LAB_108118290;
          puVar1 = puVar15 + 1;
          if ((puVar15[0xb] & 1) == 0) {
            puVar4 = puVar15 + 3;
            func_0x0001081421c8(puVar4,puVar5 + 3);
            if (((ulong)puVar4 & 1) == 0) {
              puVar4 = puVar15 + 9;
              func_0x000108142230(puVar4,puVar5 + 9);
              if (((((ulong)puVar4 & 1) == 0) &&
                  (puVar4 = puVar1, FUN_1080f6488(puVar1,puVar14), ((ulong)puVar4 & 1) == 0)) &&
                 (*(float *)(puVar15 + 8) == *(float *)(puVar5 + 8))) goto LAB_10811829c;
            }
          }
          *(undefined1 *)(puVar15 + 0xb) = 0;
          FUN_108118014(param_1,puVar14);
          puVar14 = puVar1;
          goto LAB_108118290;
        }
      }
      if ((uVar11 & ~uVar11 << 6 & 0x8080808080808080) != 0) break;
      lVar2 = lVar2 + 8;
      uVar10 = lVar2 + uVar10;
    }
LAB_108118290:
    FUN_108118014(param_1,puVar14);
LAB_10811829c:
    FUN_108118468(&lStack_70);
  } while( true );
}



/* Entry: 10811831c; end: 108118383;  */

void FUN_10811831c(void)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long alStack_58 [6];
  undefined8 uStack_28;
  
  func_0x000108119a18();
  func_0x000108119970();
  uStack_28 = extraout_x8;
  FUN_108118664(alStack_58);
  FUN_1081186a0();
  FUN_1081186a0();
  plVar1 = alStack_58;
  FUN_1081185e8();
  func_0x000108119948(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (plVar1[2] != 0) {
    uVar3 = plVar1[3];
    if (0x7f < uVar3) {
      lVar2 = plVar1[3];
      if (lVar2 != 0) {
        lVar6 = 0x48;
        for (lVar4 = 0; lVar4 != lVar2; lVar4 = lVar4 + 1) {
          if (-1 < *(char *)(*plVar1 + lVar4)) {
            FUN_10837ca38(plVar1[1] + lVar6);
            lVar2 = plVar1[3];
          }
          lVar6 = lVar6 + 0x60;
        }
        __ZdlPv();
        plVar1[5] = 0;
        *plVar1 = (long)&UNK_10dd5b8b0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        plVar1[3] = 0;
      }
      return;
    }
    if (uVar3 != 0) {
      lVar2 = 0x48;
      for (uVar5 = 0; uVar5 != uVar3; uVar5 = uVar5 + 1) {
        if (-1 < *(char *)(*plVar1 + uVar5)) {
          FUN_10837ca38(plVar1[1] + lVar2);
          uVar3 = plVar1[3];
        }
        lVar2 = lVar2 + 0x60;
      }
      plVar1[2] = 0;
      _memset(*plVar1,0x80,uVar3 + 8);
      *(undefined1 *)(*plVar1 + uVar3) = 0xff;
      uVar3 = plVar1[3];
      lVar2 = 6;
      if (uVar3 != 7) {
        lVar2 = uVar3 - (uVar3 >> 3);
      }
      plVar1[5] = lVar2 - plVar1[2];
    }
  }
  return;
}



/* Entry: 108118384; end: 10811843f;  */

void FUN_108118384(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_1[2] != 0) {
    uVar2 = param_1[3];
    if (0x7f < uVar2) {
      lVar1 = param_1[3];
      if (lVar1 != 0) {
        lVar5 = 0x48;
        for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
          if (-1 < *(char *)(*param_1 + lVar3)) {
            FUN_10837ca38(param_1[1] + lVar5);
            lVar1 = param_1[3];
          }
          lVar5 = lVar5 + 0x60;
        }
        __ZdlPv();
        param_1[5] = 0;
        *param_1 = (long)&UNK_10dd5b8b0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      return;
    }
    if (uVar2 != 0) {
      lVar1 = 0x48;
      for (uVar4 = 0; uVar4 != uVar2; uVar4 = uVar4 + 1) {
        if (-1 < *(char *)(*param_1 + uVar4)) {
          FUN_10837ca38(param_1[1] + lVar1);
          uVar2 = param_1[3];
        }
        lVar1 = lVar1 + 0x60;
      }
      param_1[2] = 0;
      _memset(*param_1,0x80,uVar2 + 8);
      *(undefined1 *)(*param_1 + uVar2) = 0xff;
      uVar2 = param_1[3];
      lVar1 = 6;
      if (uVar2 != 7) {
        lVar1 = uVar2 - (uVar2 >> 3);
      }
      param_1[5] = lVar1 - param_1[2];
    }
  }
  return;
}



/* Entry: 108118440; end: 108118467;  */

undefined1  [16] FUN_108118440(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_108118e1c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 108118468; end: 10811849b;  */

long * FUN_108118468(long *param_1)

{
  param_1[1] = param_1[1] + 0x60;
  *param_1 = *param_1 + 1;
  FUN_108118e1c();
  return param_1;
}



/* Entry: 10811849c; end: 10811852f;  */

void FUN_10811849c(float *param_1,long param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  float *pfVar3;
  undefined8 extraout_x8;
  float *pfVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [664];
  undefined8 uStack_38;
  
  pfVar3 = param_1;
  func_0x000108119970();
  uStack_38 = extraout_x8;
  FUN_108118740(*param_1 / *(float *)(param_2 + 0x68),param_1[1] / *(float *)(param_2 + 0x6c),
                auStack_2d8);
  pfVar4 = (float *)0x0;
  while( true ) {
    uVar1 = pfVar4 == *(float **)(param_2 + 0x18);
    if (*(float **)(param_2 + 0x18) <= pfVar4) break;
    param_3 = auStack_2d8;
    pfVar3 = pfVar4;
    FUN_108118530(param_2);
    pfVar4 = (float *)((long)pfVar4 + 1);
  }
  puVar2 = auStack_2d0;
  func_0x000108118ba4();
  func_0x000108119948(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (pfVar3 == pfRam00000001132542c8) {
    lVar6 = *(long *)(puVar2 + 0x18);
    for (lVar5 = 0; lVar6 != lVar5; lVar5 = lVar5 + 1) {
      FUN_108118e94(puVar2,lVar5,param_3);
    }
    return;
  }
  lVar5 = *(long *)(puVar2 + 0x10) + (long)pfVar3 * 0x38;
  lVar6 = *(long *)(lVar5 + 0x20);
  lVar5 = lVar6 + *(long *)(lVar5 + 0x10);
  while (lVar6 != lVar5) {
    func_0x000108118edc();
  }
  return;
}



/* Entry: 108118530; end: 1081185a3;  */

void FUN_108118530(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == lRam00000001132542c8) {
    lVar2 = *(long *)(param_1 + 0x18);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      FUN_108118e94(param_1,lVar1,param_3);
    }
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10) + param_2 * 0x38;
  lVar2 = *(long *)(lVar1 + 0x20);
  lVar1 = lVar2 + *(long *)(lVar1 + 0x10);
  while (lVar2 != lVar1) {
    func_0x000108118edc();
  }
  return;
}



/* Entry: 1081185a4; end: 1081185e7;  */

undefined8 * FUN_1081185a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    func_0x000108118bfc();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 1081185e8; end: 108118663;  */

void FUN_1081185e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 0x48;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        FUN_10837ca38(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x60;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 108118664; end: 10811869f;  */

void FUN_108118664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &UNK_10dd5b8b0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  return;
}



/* Entry: 1081186a0; end: 1081186fb;  */

undefined8 * FUN_1081186a0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_58 [6];
  undefined8 uStack_28;
  
  func_0x000108119970();
  uStack_28 = extraout_x8;
  FUN_108118664(auStack_58);
  puVar2 = auStack_58;
  FUN_1081186fc(param_1);
  puVar1 = auStack_58;
  FUN_1081185e8();
  func_0x000108119948(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar3 = *puVar2;
  uVar5 = puVar1[1];
  uVar4 = *puVar1;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar3;
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  uVar3 = puVar1[2];
  puVar1[2] = puVar2[2];
  puVar2[2] = uVar3;
  uVar3 = puVar1[3];
  puVar1[3] = puVar2[3];
  puVar2[3] = uVar3;
  uVar3 = puVar1[5];
  puVar1[5] = puVar2[5];
  puVar2[5] = uVar3;
  return puVar1;
}



/* Entry: 1081186fc; end: 10811873f;  */

void FUN_1081186fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_1[1];
  uVar2 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_2[1] = uVar3;
  *param_2 = uVar2;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  param_2[5] = uVar1;
  return;
}



/* Entry: 108118740; end: 1081187fb;  */

undefined8 *
FUN_108118740(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  *param_3 = param_4;
  param_3[1] = param_3 + 4;
  param_3[3] = 8;
  param_3[2] = 0;
  FUN_108376ad8(auStack_80);
  func_0x000108376b14(auStack_70,auStack_80);
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_44 = 0x3f80000000000000;
  uStack_4c = 0;
  uStack_3c = 0x3f80000000000080;
  uStack_84 = 0;
  uStack_85 = 0;
  uStack_60 = param_1;
  uStack_50 = param_2;
  FUN_1081187fc(param_3 + 1,auStack_70,&uStack_84,&uStack_85);
  FUN_10837ca5c(auStack_70[0]);
  FUN_10837ca5c(auStack_80[0]);
  return param_3;
}



/* Entry: 1081187fc; end: 108118887;  */

long FUN_1081187fc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar1 = *param_1 + param_1[1] * 0x50;
  if (param_1[1] == param_1[2]) {
    uStack_40 = param_4;
    uStack_38 = param_3;
    uStack_30 = param_2;
    FUN_108118888(&lStack_28,param_1,lVar1,1,&uStack_40);
  }
  else {
    FUN_1081189ac(param_1,lVar1);
    param_1[1] = param_1[1] + 1;
    lStack_28 = lVar1;
  }
  return lStack_28;
}



/* Entry: 108118888; end: 1081189ab;  */

void FUN_108118888(long *param_1,long *param_2,long param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  lVar1 = *param_2;
  lVar6 = param_2[1];
  FUN_1081189ec(lVar6,param_2[2]);
  lVar7 = lVar6;
  func_0x000108118a58();
  uVar2 = *param_5;
  uVar4 = param_5[1];
  uVar9 = param_5[2];
  lVar3 = *param_2;
  lVar5 = param_2[1];
  lVar8 = lVar3;
  plStack_88 = param_2;
  lStack_80 = lVar6;
  plStack_68 = param_2;
  FUN_108118ad4(lVar3,param_3);
  FUN_1081189ac(param_2,lVar8,uVar9,uVar4,uVar2);
  FUN_108118ad4(param_3,lVar3 + lVar5 * 0x50,lVar8 + param_4 * 0x50);
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_108118b2c(&uStack_78);
  uStack_90 = 0;
  if (lVar3 != 0) {
    FUN_108118a84(param_2,lVar3,param_2[1]);
    func_0x0001081199e4();
  }
  *param_2 = lVar7;
  param_2[1] = param_2[1] + param_4;
  param_2[2] = lVar6;
  func_0x000108118b6c(&uStack_90);
  *param_1 = *param_2 + (param_3 - lVar1);
  return;
}



/* Entry: 1081189ac; end: 1081189c3;  */

void FUN_1081189ac(undefined8 param_1,long param_2,undefined8 param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *param_4;
  uVar1 = *param_5;
  func_0x00010810cf28(param_2,param_3);
  *(long *)(param_2 + 0x40) = (long)iVar2;
  *(undefined1 *)(param_2 + 0x48) = uVar1;
  return;
}



/* Entry: 1081189c4; end: 1081189eb;  */

void FUN_1081189c4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  func_0x00010810cf28();
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined1 *)(param_1 + 0x48) = param_4;
  return;
}



/* Entry: 1081189ec; end: 108118a83;  */

ulong FUN_1081189ec(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_1 - param_2) + param_3 <= 0x199999999999999 - param_2) {
    if (param_2 >> 0x3d == 0) {
      uVar2 = (param_2 << 3) / 5;
    }
    else {
      uVar2 = param_2 << 3;
      if (4 < param_2 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
    }
    if (0x199999999999998 < uVar2) {
      uVar2 = 0x199999999999999;
    }
    uVar1 = param_3 + param_1;
    if (param_3 + param_1 <= uVar2) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  _abort();
  if (0x199999999999999 < param_1) {
    _abort();
    for (; param_3 != 0; param_3 = param_3 + -1) {
      FUN_10837ca38(param_2);
      param_2 = param_2 + 0x50;
    }
    return param_2;
  }
  param_1 = param_1 * 0x50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_1);
  return param_1;
}



/* Entry: 108118a84; end: 108118ab7;  */

void FUN_108118a84(undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10837ca38(param_2);
    param_2 = param_2 + 0x50;
  }
  return;
}



/* Entry: 108118ab8; end: 108118ad3;  */

void FUN_108118ab8(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108118ad4; end: 108118b2b;  */

long FUN_108118ad4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    func_0x00010810cf28(param_3,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(param_3 + 0x48) = *(undefined1 *)(param_1 + 0x48);
    *(undefined8 *)(param_3 + 0x40) = uVar1;
    param_3 = param_3 + 0x50;
  }
  return param_3;
}



/* Entry: 108118b2c; end: 108118c83;  */

long * FUN_108118b2c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != param_1[1]) {
    FUN_10837ca38();
    lVar1 = *param_1 + 0x50;
    *param_1 = lVar1;
  }
  return param_1;
}



/* Entry: 108118c84; end: 108118cc3;  */

ulong FUN_108118c84(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_108118d38();
  func_0x000108119a18();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
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
  return uVar2;
}



/* Entry: 108118cc4; end: 108118d37;  */

void FUN_108118cc4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000108119a18();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
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



/* Entry: 108118d38; end: 108118d43;  */

long * FUN_108118d38(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108118d8c();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 108118d44; end: 108118daf;  */

long * FUN_108118d44(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108118d8c();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 108118db0; end: 108118dcb;  */

long * FUN_108118db0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_108118df8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108118dcc; end: 108118df7;  */

long * FUN_108118dcc(long *param_1)

{
  FUN_108118df8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108118df8; end: 108118e1b;  */

void FUN_108118df8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}


