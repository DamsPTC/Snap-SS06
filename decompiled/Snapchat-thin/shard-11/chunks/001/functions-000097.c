/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081880e8; end: 108188177;  */

void FUN_1081880e8(undefined8 *param_1)

{
  int extraout_w11;
  int extraout_w11_00;
  
  *param_1 = &PTR_FUN_110a2b5a0;
  if (param_1[6] != 0) {
    do {
      FUN_108188458();
    } while (extraout_w11 != 0);
  }
  func_0x000108188494();
  func_0x000108188468();
  if (param_1[7] != 0) {
    do {
      FUN_108188458();
    } while (extraout_w11_00 != 0);
  }
  func_0x000108188494();
  func_0x000108188468();
  FUN_108158f90(param_1 + 7);
  FUN_108159714(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108188178; end: 10818817b;  */

void FUN_108188178(undefined8 *param_1)

{
  int extraout_w11;
  int extraout_w11_00;
  
  *param_1 = &PTR_FUN_110a2b5a0;
  if (param_1[6] != 0) {
    do {
      FUN_108188458();
    } while (extraout_w11 != 0);
  }
  func_0x000108188494();
  func_0x000108188468();
  if (param_1[7] != 0) {
    do {
      FUN_108188458();
    } while (extraout_w11_00 != 0);
  }
  func_0x000108188494();
  func_0x000108188468();
  FUN_108158f90(param_1 + 7);
  FUN_108159714(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818817c; end: 10818818f;  */

void FUN_10818817c(void)

{
  FUN_1081880e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108188190; end: 10818824f;  */

void FUN_108188190(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [64];
  float fStack_40;
  uint uStack_38;
  
  FUN_10818afdc(auStack_80,*(undefined8 *)(param_1 + 0x38));
  if (param_3 != 0) {
    func_0x00010833b800(auStack_a8,param_2);
    FUN_10818ca28(param_3,auStack_a8,auStack_80,0);
  }
  uVar1 = 0;
  FUN_1083764bc();
  if (((uVar1 & 1) == 0) && (((uStack_38 & 0xc0) != 0x40 || (0.0 < fStack_40)))) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x28))(*(long **)(param_1 + 0x30),param_2,auStack_80)
    ;
  }
  FUN_108375e94(auStack_80);
  return;
}



/* Entry: 108188250; end: 10818835f;  */

long FUN_108188250(long param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 auStack_a0 [2];
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [72];
  byte bStack_38;
  
  uVar3 = 0;
  FUN_10818afdc(auStack_80,*(undefined8 *)(param_1 + 0x38));
  iVar1 = (int)auStack_80;
  FUN_108188360();
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else {
    if ((bStack_38 & 0xc0) == 0) {
      uVar2 = *(ulong *)(param_1 + 0x30);
      FUN_108188e5c(uVar2,param_2);
      if ((uVar2 & 1) != 0) goto LAB_108188308;
    }
    FUN_108376ad8(auStack_90);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x38))(auStack_a0);
    func_0x00010837efd0(auStack_a0,auStack_80,auStack_90);
    FUN_10837ca5c(auStack_a0[0]);
    if ((uVar3 & 1) == 0) {
      param_1 = 0;
    }
    else {
      iVar1 = (int)auStack_90;
      FUN_10837a610(*param_2,param_2[1]);
      if (iVar1 == 0) {
        param_1 = 0;
      }
    }
    FUN_10837ca5c(auStack_90[0]);
  }
LAB_108188308:
  FUN_108375e94(auStack_80);
  return param_1;
}



/* Entry: 108188360; end: 1081883a7;  */

uint FUN_108188360(long param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm((float)(double)(long)(*(float *)(param_1 + 0x3c) * 255.0 + 0.5),
                             0x4effffff);
  if (fVar1 <= -2.1474835e+09) {
    fVar1 = -2.1474835e+09;
  }
  return (int)fVar1 & 0xff;
}



/* Entry: 1081883a8; end: 108188457;  */

undefined4 FUN_1081883a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 auStack_b0 [20];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = auStack_b0;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  FUN_10818a8b4();
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  FUN_10818a8b4(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  FUN_10818afdc(auStack_b0,*(undefined8 *)(param_1 + 0x38));
  func_0x0001083763a8(auStack_b0,&uStack_60,&uStack_60);
  uVar3 = *puVar2;
  FUN_108375e94(auStack_b0);
  return uVar3;
}



/* Entry: 108188458; end: 10818849f;  */

void FUN_108188458(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1081884a0; end: 108188543;  */

undefined8 * FUN_1081884a0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lStack_38;
  
  puVar4 = param_1;
  FUN_10818c894(param_1,param_3);
  *puVar4 = &PTR_FUN_110a2b5f8;
  lStack_38 = *param_2;
  *param_2 = 0;
  puVar4[6] = lStack_38;
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
  FUN_10818a5b8(param_1,&lStack_38);
  FUN_108188604();
  return param_1;
}



/* Entry: 108188544; end: 1081885bb;  */

void FUN_108188544(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 1081885bc; end: 1081885bf;  */

void FUN_1081885bc(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110a2b5f8;
  lStack_28 = param_1[6];
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_108188604();
  FUN_108154cb4(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 1081885c0; end: 1081885d3;  */

void FUN_1081885c0(void)

{
  FUN_108188544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081885d4; end: 1081885e3;  */

void FUN_1081885d4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if ((((*(ushort *)(plVar1 + 5) >> 6 & 1) == 0) &&
      (*(float *)(plVar1 + 3) < *(float *)(plVar1 + 4))) &&
     (*(float *)((long)plVar1 + 0x1c) < *(float *)((long)plVar1 + 0x24))) {
                    /* WARNING: Could not recover jumptable at 0x00010818c944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  return;
}



/* Entry: 1081885e4; end: 108188603;  */

undefined4 FUN_1081885e4(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  FUN_10818a8b4();
  return *puVar1;
}



/* Entry: 108188604; end: 10818860b;  */

undefined8 * FUN_108188604(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000008;
  
  if (in_stack_00000008 != (long *)0x0) {
    plVar1 = in_stack_00000008 + 1;
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
      (**(code **)(*in_stack_00000008 + 0x10))();
    }
  }
  return &stack0x00000008;
}



/* Entry: 10818860c; end: 1081886b7;  */

undefined8 * FUN_10818860c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  FUN_108188e38();
  *puVar1 = &PTR_DAT_110a2b650;
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1[6] = lVar2;
  FUN_108376ad8(puVar1 + 7);
  uStack_38 = 0;
  if (puVar1[6] != 0) {
    do {
      func_0x000108188dbc();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10818a5b8(param_1,&uStack_38);
  func_0x000108188dfc();
  return param_1;
}



/* Entry: 1081886b8; end: 10818871f;  */

void FUN_1081886b8(undefined8 *param_1)

{
  int extraout_w11;
  
  *param_1 = &PTR_DAT_110a2b650;
  if (param_1[6] != 0) {
    do {
      func_0x000108188dbc();
    } while (extraout_w11 != 0);
  }
  func_0x000108188e2c();
  func_0x000108188dfc();
  FUN_10837ca38(param_1 + 7);
  FUN_108159714(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108188720; end: 108188767;  */

void FUN_108188720(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_80;
  func_0x000108342398(param_2,param_1 + 0x38,1,param_3);
  func_0x00010833c27c();
  if ((*(byte *)(unaff_x22 + 0xe) >> 1 & 1) == 0) {
    FUN_10816eab0(&uStack_80,unaff_x21[0x188] + 0x18);
    FUN_10827a0d8();
    if (iVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uVar2 = unaff_x22;
      FUN_1083773e8();
      if ((int)uVar2 != 0) goto LAB_10833e670;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uVar2 = unaff_x22;
      FUN_1083777d4();
      if ((int)uVar2 != 0) {
        FUN_108384c90(&uStack_80,&uStack_40);
        goto LAB_10833e670;
      }
      func_0x0001083777e0();
      if ((unaff_x22 & 1) != 0) goto LAB_10833e670;
    }
  }
  func_0x0001083423c0(*(undefined8 *)(*unaff_x21 + 0x180));
LAB_10833e670:
  func_0x000108342298();
  return;
}



/* Entry: 108188768; end: 1081887ef;  */

void FUN_108188768(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  FUN_10818a8b4(param_1[6]);
  (**(code **)(*param_1 + 0x40))(auStack_40,param_1,param_1 + 6,param_3);
  FUN_108376b90(param_1 + 7,auStack_40);
  func_0x000108188ddc();
  FUN_10837b010(param_1 + 7);
  FUN_10837b718(param_1 + 7);
  return;
}



/* Entry: 1081887f0; end: 10818885b;  */

void FUN_1081887f0(long param_1,undefined8 *param_2)

{
  long lStack_28;
  
  FUN_108188d98(*param_2);
  FUN_1083ad31c(&lStack_28,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                *(undefined4 *)(param_1 + 0x50));
  if (lStack_28 != 0) {
    func_0x000108188e04(0x3f800000);
    func_0x000108188da8();
  }
  func_0x000108188de4();
  return;
}



/* Entry: 10818885c; end: 108188917;  */

undefined8 * FUN_10818885c(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  FUN_10818860c(param_1,&uStack_38);
  FUN_108159714(&uStack_38);
  *param_1 = &PTR_FUN_110a2b6a8;
  lVar1 = *param_3;
  *param_3 = 0;
  param_1[9] = lVar1;
  uStack_40 = 0;
  if (lVar1 != 0) {
    do {
      func_0x000108188dbc();
      uStack_40 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10818a5b8(param_1,&uStack_40);
  FUN_1081687b4(&uStack_40);
  return param_1;
}



/* Entry: 108188918; end: 10818896b;  */

void FUN_108188918(long param_1)

{
  int extraout_w11;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x000108188dbc();
    } while (extraout_w11 != 0);
  }
  func_0x000108188e2c();
  func_0x000108188dfc();
  FUN_108155404((long *)(param_1 + 0x48));
  FUN_1081886b8(param_1);
  return;
}



/* Entry: 10818896c; end: 10818896f;  */

void FUN_10818896c(long param_1)

{
  int extraout_w11;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    do {
      func_0x000108188dbc();
    } while (extraout_w11 != 0);
  }
  func_0x000108188e2c();
  func_0x000108188dfc();
  FUN_108155404((long *)(param_1 + 0x48));
  FUN_1081886b8(param_1);
  return;
}



/* Entry: 108188970; end: 108188983;  */

void FUN_108188970(void)

{
  FUN_108188918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108188984; end: 108188a03;  */

void FUN_108188984(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  
  FUN_10818a8b4(*(undefined8 *)(param_2 + 0x48),0,0x113254e20);
  (**(code **)(**(long **)(param_2 + 0x48) + 0x28))(auStack_58);
  FUN_108188d98(*param_3);
  func_0x000108142294(param_1,auStack_58,1);
  return;
}



/* Entry: 108188a04; end: 108188b53;  */

void FUN_108188a04(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  long lStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [128];
  undefined1 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  plVar1 = &lStack_f0;
  plVar2 = &lStack_f0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108188d98(*param_3);
  puVar6 = *(undefined1 **)(param_2 + 0x48);
  if (puVar6 == *(undefined1 **)(param_2 + 0x50)) {
    lStack_f0 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_2 + 0x60);
    uVar4 = (long)*(undefined1 **)(param_2 + 0x50) - (long)puVar6;
    puStack_68 = auStack_e8;
    uStack_60 = 0x4000000000;
    if (((uint)uVar4 >> 2 & 1) == 0) {
      param_3 = (undefined8 *)(uVar4 >> 2);
    }
    else {
      param_3 = (undefined8 *)(uVar4 >> 1);
      FUN_108184b60(&puStack_68,param_3);
      puVar6 = puStack_68;
      lVar3 = *(long *)(param_2 + 0x48);
      lVar5 = *(long *)(param_2 + 0x50);
      if (lVar5 - lVar3 != 0) {
        _memmove(puStack_68,lVar3,lVar5 - lVar3);
        lVar3 = *(long *)(param_2 + 0x48);
        lVar5 = *(long *)(param_2 + 0x50);
      }
      if (lVar5 - lVar3 != 0) {
        _memmove(puStack_68 + (lVar5 - lVar3));
      }
    }
    FUN_1083ad04c(&lStack_f0,uVar7,puVar6);
    FUN_1081842d4(&puStack_68);
    if (lStack_f0 != 0) {
      func_0x000108188e04(0x3f800000);
      func_0x000108188da8();
    }
  }
  func_0x000108115b70();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108115b70();
  func_0x000108188dd4();
  func_0x000108188dcc();
  pcStack_f8 = FUN_108188b54;
  puStack_110 = (undefined1 *)plVar1;
  uStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_108188d98(*param_3);
  FUN_1083ac454(&lStack_118,*(undefined4 *)((long)plVar2 + 0x48));
  if (lStack_118 != 0) {
    func_0x000108188e04(0x3f800000);
    func_0x000108188da8();
  }
  func_0x000108188de4();
  return;
}



/* Entry: 108188b54; end: 108188bbb;  */

void FUN_108188b54(long param_1,undefined8 *param_2)

{
  long lStack_28;
  
  FUN_108188d98(*param_2);
  FUN_1083ac454(&lStack_28,*(undefined4 *)(param_1 + 0x48));
  if (lStack_28 != 0) {
    func_0x000108188e04(0x3f800000);
    func_0x000108188da8();
  }
  func_0x000108188de4();
  return;
}



/* Entry: 108188bbc; end: 108188d0f;  */

void FUN_108188bbc(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_90 [16];
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
  
  FUN_108188d98(*param_3);
  fVar2 = ABS(*(float *)(param_2 + 0x48));
  if (0.00024414062 < fVar2) {
    FUN_108365554(param_4);
    fVar3 = 100000.0;
    if (0.0 <= fVar2) {
      fVar3 = 100000.0 / fVar2;
    }
    fVar2 = ABS(*(float *)(param_2 + 0x48));
    if (fVar3 <= ABS(*(float *)(param_2 + 0x48))) {
      fVar2 = fVar3;
    }
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
    uStack_3c = 0x4040800000;
    if (0.0 <= fVar2 + fVar2) {
      uStack_44 = CONCAT44(fVar2 + fVar2,0x3f800000);
    }
    if (0.0 <= *(float *)(param_2 + 0x4c)) {
      uStack_3c = CONCAT44(0x40,*(float *)(param_2 + 0x4c));
    }
    if (*(byte *)(param_2 + 0x50) < 3) {
      uStack_3c = CONCAT44((uint)*(byte *)(param_2 + 0x50) << 4,(undefined4)uStack_3c) |
                  0x4000000000;
    }
    FUN_108376ad8(auStack_90);
    FUN_10837efdc(0x3f800000,param_1,&uStack_80,auStack_90,0);
    uVar1 = 2;
    if (*(float *)(param_2 + 0x48) <= 0.0) {
      uVar1 = 0;
    }
    FUN_1081f0148(param_1,auStack_90,uVar1,param_1);
    func_0x000108188ddc();
    FUN_108375e94(&uStack_80);
  }
  return;
}



/* Entry: 108188d10; end: 108188d13;  */

void FUN_108188d10(undefined8 *param_1)

{
  int extraout_w11;
  
  *param_1 = &PTR_DAT_110a2b650;
  if (param_1[6] != 0) {
    do {
      func_0x000108188dbc();
    } while (extraout_w11 != 0);
  }
  func_0x000108188e2c();
  func_0x000108188dfc();
  FUN_10837ca38(param_1 + 7);
  FUN_108159714(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108188d14; end: 108188d27;  */

void FUN_108188d14(void)

{
  FUN_1081886b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108188d28; end: 108188d2b;  */

void FUN_108188d28(undefined8 *param_1)

{
  int extraout_w11;
  
  func_0x0001056d1ce4(param_1 + 9);
  *param_1 = &PTR_DAT_110a2b650;
  if (param_1[6] != 0) {
    do {
      func_0x000108188dbc();
    } while (extraout_w11 != 0);
  }
  func_0x000108188e2c();
  func_0x000108188dfc();
  FUN_10837ca38(param_1 + 7);
  FUN_108159714(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108188d2c; end: 108188d3f;  */

void FUN_108188d2c(void)

{
  FUN_108188d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108188d40; end: 108188d43;  */

void FUN_108188d40(undefined8 *param_1)

{
  int extraout_w11;
  
  *param_1 = &PTR_DAT_110a2b650;
  if (param_1[6] != 0) {
    do {
      func_0x000108188dbc();
    } while (extraout_w11 != 0);
  }
  func_0x000108188e2c();
  func_0x000108188dfc();
  FUN_10837ca38(param_1 + 7);
  FUN_108159714(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108188d44; end: 108188d57;  */

void FUN_108188d44(void)

{
  FUN_1081886b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108188d58; end: 108188d5b;  */

void FUN_108188d58(undefined8 *param_1)

{
  int extraout_w11;
  
  *param_1 = &PTR_DAT_110a2b650;
  if (param_1[6] != 0) {
    do {
      func_0x000108188dbc();
    } while (extraout_w11 != 0);
  }
  func_0x000108188e2c();
  func_0x000108188dfc();
  FUN_10837ca38(param_1 + 7);
  FUN_108159714(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108188d5c; end: 108188d6f;  */

void FUN_108188d5c(void)

{
  FUN_1081886b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108188d70; end: 108188d97;  */

void FUN_108188d70(undefined8 *param_1)

{
  int extraout_w11;
  
  func_0x0001056d1ce4(param_1 + 9);
  *param_1 = &PTR_DAT_110a2b650;
  if (param_1[6] != 0) {
    do {
      func_0x000108188dbc();
    } while (extraout_w11 != 0);
  }
  func_0x000108188e2c();
  func_0x000108188dfc();
  FUN_10837ca38(param_1 + 7);
  FUN_108159714(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108188d98; end: 108188e37;  */

void FUN_108188d98(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108188da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 108188e38; end: 108188e5b;  */

void FUN_108188e38(undefined8 *param_1)

{
  func_0x00010818a53c(param_1,1);
  *param_1 = &PTR_DAT_110a2b8f0;
  return;
}



/* Entry: 108188e5c; end: 108188ea7;  */

void FUN_108188e5c(long *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x18;
  FUN_108188ea8(*param_2,param_2[1]);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108188e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))(param_1,param_2);
    return;
  }
  return;
}



/* Entry: 108188ea8; end: 108188eeb;  */

bool FUN_108188ea8(float param_1,float param_2,float *param_3)

{
  if (((*param_3 <= param_1) && (param_1 < param_3[2])) && (param_3[1] <= param_2)) {
    return param_2 < param_3[3];
  }
  return false;
}



/* Entry: 108188eec; end: 108189147;  */

void FUN_108188eec(undefined8 *param_1,long *param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  ulong uVar3;
  float fVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined8 uVar12;
  undefined1 auStack_cc [4];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  
  if (param_2[7] == param_2[8]) {
    *param_1 = 0;
  }
  else {
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uVar3 = (param_2[8] - param_2[7]) / 0x14;
    if (uVar3 >> 0x3c != 0) {
      FUN_10818940c();
LAB_108189120:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x108189124);
      (*pcVar5)();
    }
    FUN_108189420(&puStack_98,uVar3,0,&puStack_a0);
    puVar8 = (undefined8 *)((long)puStack_90 - ((long)puStack_a8 - (long)puStack_b0));
    _memcpy(puVar8);
    puVar10 = puStack_a0;
    puStack_a0 = puStack_80;
    puStack_a8 = puStack_88;
    puStack_88 = puStack_b0;
    puStack_80 = puVar10;
    puStack_98 = puStack_b0;
    puStack_90 = puStack_b0;
    puStack_b0 = puVar8;
    FUN_108189484(&puStack_98);
    func_0x0001073b504c(&uStack_c8,(param_2[8] - param_2[7]) / 0x14);
    auStack_cc = (undefined1  [4])0x0;
    ppuVar2 = (undefined8 **)param_2[8];
    for (ppuVar11 = (undefined8 **)param_2[7]; ppuVar11 != ppuVar2;
        ppuVar11 = (undefined8 **)((long)ppuVar11 + 0x14)) {
      if (puStack_a8 < puStack_a0) {
        uVar12 = *(undefined8 *)((long)ppuVar11 + 4);
        puStack_a8[1] = *(undefined8 *)((long)ppuVar11 + 0xc);
        *puStack_a8 = uVar12;
        puVar10 = puStack_a8 + 2;
      }
      else {
        lVar6 = (long)puStack_a8 - (long)puStack_b0 >> 4;
        uVar3 = lVar6 + 1;
        if (uVar3 >> 0x3c != 0) {
          FUN_10818940c();
          goto LAB_108189120;
        }
        uVar7 = (long)puStack_a0 - (long)puStack_b0 >> 3;
        if (uVar7 <= uVar3) {
          uVar7 = uVar3;
        }
        if (0x7fffffffffffffef < (ulong)((long)puStack_a0 - (long)puStack_b0)) {
          uVar7 = 0xfffffffffffffff;
        }
        FUN_108189420(&puStack_98,uVar7,lVar6,&puStack_a0);
        uVar12 = *(undefined8 *)((long)ppuVar11 + 4);
        puStack_88[1] = *(undefined8 *)((long)ppuVar11 + 0xc);
        *puStack_88 = uVar12;
        puVar10 = puStack_88 + 2;
        puVar9 = (undefined8 *)((long)puStack_90 - ((long)puStack_a8 - (long)puStack_b0));
        _memcpy(puVar9);
        puVar8 = puStack_a0;
        puStack_a0 = puStack_80;
        puStack_98 = puStack_b0;
        puStack_88 = puStack_b0;
        puStack_80 = puVar8;
        puStack_90 = puStack_b0;
        puStack_b0 = puVar9;
        puStack_a8 = puVar10;
        FUN_108189484(&puStack_98);
      }
      puStack_98 = (undefined8 *)CONCAT44(puStack_98._4_4_,0x3f800000);
      ppuVar1 = &puStack_98;
      fVar4 = 1.0;
      if (*(float *)ppuVar11 <= 1.0) {
        ppuVar1 = ppuVar11;
        fVar4 = *(float *)ppuVar11;
      }
      if (fVar4 <= (float)auStack_cc) {
        ppuVar1 = (undefined8 **)auStack_cc;
      }
      auStack_cc = *(undefined1 (*) [4])ppuVar1;
      puStack_a8 = puVar10;
      func_0x0001073b50ac(&uStack_c8,auStack_cc);
    }
    (**(code **)(*param_2 + 0x28))(param_1,param_2,&puStack_b0,&uStack_c8);
    func_0x0001056d1ce4(&uStack_c8);
    func_0x0001081893dc(&puStack_b0);
  }
  return;
}



/* Entry: 108189148; end: 1081891d7;  */

void FUN_108189148(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x5c);
  uStack_40 = *(undefined8 *)(param_1 + 0x54);
  uStack_48 = 0;
  FUN_1081891d8(&uStack_40,*param_2,&uStack_48,*param_3,(ulong)(param_2[1] - *param_2) >> 4,
                *(undefined4 *)(param_1 + 0x50),0,0);
  func_0x0001081894d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001081894c8();
  func_0x0001081894dc();
  func_0x0001081894e4();
  FUN_1083c1794();
  func_0x0001081894d4();
  return;
}



/* Entry: 1081891d8; end: 10818920b;  */

void FUN_1081891d8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  func_0x0001081894e4();
  FUN_1083c1794(param_1,param_2,auStack_28);
  func_0x0001081894d4();
  return;
}



/* Entry: 10818920c; end: 1081892e3;  */

void FUN_10818920c(long param_1,long *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(float *)(param_1 + 100) <= 0.0) {
    bVar1 = false;
    if ((*(float *)(param_1 + 0x54) == *(float *)(param_1 + 0x5c)) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x58)) && !NAN(*(float *)(param_1 + 0x60)))) {
      bVar1 = *(float *)(param_1 + 0x58) == *(float *)(param_1 + 0x60);
    }
    if (bVar1) {
      uStack_28 = 0;
      puVar2 = &uStack_28;
      FUN_1081892e4(*(undefined4 *)(param_1 + 0x68),(float *)(param_1 + 0x5c),*param_2,&uStack_28,
                    *param_3,(ulong)(param_2[1] - *param_2) >> 4,*(undefined4 *)(param_1 + 0x50),0,0
                   );
      goto LAB_1081892b8;
    }
  }
  uStack_30 = 0;
  puVar2 = &uStack_30;
  FUN_108189318(*(float *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),param_1 + 0x54,
                param_1 + 0x5c,*param_2,&uStack_30,*param_3,(ulong)(param_2[1] - *param_2) >> 4,
                *(undefined4 *)(param_1 + 0x50),0,0);
LAB_1081892b8:
  FUN_10810a400(puVar2);
  return;
}



/* Entry: 1081892e4; end: 108189317;  */

void FUN_1081892e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  func_0x0001081894e4();
  FUN_1083c1d2c(param_1,param_2,auStack_28);
  func_0x0001081894d4();
  return;
}



/* Entry: 108189318; end: 108189373;  */

void FUN_108189318(void)

{
  undefined8 *in_x3;
  undefined8 uStack_28;
  
  uStack_28 = *in_x3;
  *in_x3 = 0;
  FUN_1083bea6c();
  FUN_10810a400(&uStack_28);
  return;
}



/* Entry: 108189374; end: 108189377;  */

undefined8 * FUN_108189374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2b9b0;
  FUN_10816c3c0(param_1 + 7);
  *param_1 = &PTR_DAT_110a2bf00;
  func_0x000106f47224(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108189378; end: 10818938b;  */

void FUN_108189378(void)

{
  FUN_1081893ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818938c; end: 108189397;  */

void FUN_10818938c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108189390);
  (*pcVar1)();
}



/* Entry: 108189398; end: 1081893ab;  */

void FUN_108189398(void)

{
  FUN_1081893ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081893ac; end: 10818940b;  */

undefined8 * FUN_1081893ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2b9b0;
  FUN_10816c3c0(param_1 + 7);
  *param_1 = &PTR_DAT_110a2bf00;
  func_0x000106f47224(param_1 + 6);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10818940c; end: 10818941f;  */

long * FUN_10818940c(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if (param_2 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar3 = plVar2[2];
      while (lVar3 != plVar2[1]) {
        lVar3 = lVar3 + -0x10;
        plVar2[2] = lVar3;
      }
      if (*plVar2 != 0) {
        __ZdlPv();
      }
      return plVar2;
    }
    lVar3 = param_2 << 4;
    __Znwm();
  }
  lVar1 = lVar3 + param_3 * 0x10;
  *plVar2 = lVar3;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = lVar3 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 108189420; end: 108189483;  */

long * FUN_108189420(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (param_2 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0x10;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = param_2 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + param_2 * 0x10;
  return param_1;
}



/* Entry: 108189484; end: 1081894c7;  */

long * FUN_108189484(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1081894c8; end: 108189517;  */

undefined8 * FUN_1081894c8(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001078bdee8();
  }
  return &stack0x00000008;
}



/* Entry: 108189518; end: 108189543;  */

void FUN_108189518(long param_1)

{
  FUN_10818c894(param_1,0);
  func_0x000108189984();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 108189544; end: 1081895fb;  */

long FUN_108189544(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w11;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  FUN_10818c894(param_1,0);
  func_0x000108189984();
  puVar2 = (undefined8 *)(lVar1 + 0x30);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_2[1];
  *puVar2 = uVar5;
  *(undefined8 *)(lVar1 + 0x40) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(lVar1 + 0x48) = 1;
  plVar4 = *(long **)(lVar1 + 0x38);
  for (plVar3 = (long *)*puVar2; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    if (*plVar3 != 0) {
      do {
        func_0x000108189954();
      } while (extraout_w11 != 0);
    }
    func_0x000108189994();
    func_0x00010818994c();
  }
  return param_1;
}



/* Entry: 1081895fc; end: 108189677;  */

void FUN_1081895fc(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  long *plVar4;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x000108189984();
  plVar4 = *(long **)(lVar1 + 0x38);
  for (plVar3 = *(long **)(lVar1 + 0x30); plVar3 != plVar4; plVar3 = plVar3 + 1) {
    uVar2 = 0;
    if (*plVar3 != 0) {
      do {
        func_0x000108189954();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar2;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818994c();
  }
  FUN_10815640c((undefined8 *)(lVar1 + 0x30));
  FUN_10818a578(param_1);
  return;
}



/* Entry: 108189678; end: 10818967b;  */

void FUN_108189678(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  long *plVar4;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x000108189984();
  plVar4 = *(long **)(lVar1 + 0x38);
  for (plVar3 = *(long **)(lVar1 + 0x30); plVar3 != plVar4; plVar3 = plVar3 + 1) {
    uVar2 = 0;
    if (*plVar3 != 0) {
      do {
        func_0x000108189954();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar2;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818994c();
  }
  FUN_10815640c((undefined8 *)(lVar1 + 0x30));
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818967c; end: 10818968f;  */

void FUN_10818967c(void)

{
  FUN_1081895fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108189690; end: 108189703;  */

void FUN_108189690(long param_1)

{
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  long *plVar3;
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 0x38);
  for (plVar3 = *(long **)(param_1 + 0x30); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    uVar2 = 0;
    if (*plVar3 != 0) {
      do {
        func_0x000108189954();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar2;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818994c();
  }
  FUN_108156468((undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108189704; end: 10818978f;  */

void FUN_108189704(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int extraout_w11;
  
  plVar1 = *(long **)(param_1 + 0x30);
  do {
    if (plVar1 == *(long **)(param_1 + 0x38)) {
      if (*param_2 != 0) {
        do {
          func_0x000108189954();
        } while (extraout_w11 != 0);
      }
      func_0x000108189994();
      func_0x00010818994c();
      func_0x000108156e9c((long *)(param_1 + 0x30),param_2);
      FUN_10818a7f4(param_1,1);
      return;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (lVar2 != *param_2);
  return;
}



/* Entry: 108189790; end: 10818984b;  */

void FUN_108189790(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_188 [40];
  undefined1 auStack_160 [144];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [136];
  
  FUN_10818ccbc(auStack_160);
  func_0x00010833b800(auStack_188,param_2);
  FUN_10818d01c(auStack_160,param_1 + 0x18,auStack_188,*(undefined1 *)(param_1 + 0x48));
  FUN_1081660c4(auStack_d0,auStack_160);
  FUN_10818cd40(auStack_160);
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  for (puVar2 = *(undefined8 **)(param_1 + 0x30); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_10818c910(*puVar2,param_2,auStack_c8);
  }
  FUN_10818cd40(auStack_d0);
  return;
}



/* Entry: 10818984c; end: 10818989b;  */

void FUN_10818984c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38);
  do {
    if (plVar2 == *(long **)(param_1 + 0x30)) {
      return;
    }
    plVar2 = plVar2 + -1;
    lVar1 = *plVar2;
    FUN_10818c948(lVar1,param_2);
  } while (lVar1 == 0);
  return;
}



/* Entry: 10818989c; end: 10818994b;  */

ulong FUN_10818989c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong auStack_50 [2];
  
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  for (uVar3 = 0; uVar3 < (ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3);
      uVar3 = uVar3 + 1) {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x30) + uVar3 * 8);
    FUN_10818a8b4(puVar2,param_2,param_3);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    if (((uVar3 != 0) && ((*(byte *)(param_1 + 0x48) & 1) == 0)) &&
       (iVar1 = (int)&uStack_60, func_0x00010814000c(&uStack_60,auStack_50), iVar1 != 0)) {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    func_0x00010838ed50(auStack_50,&uStack_60);
  }
  return auStack_50[0] & 0xffffffff;
}



/* Entry: 10818994c; end: 1081899a7;  */

undefined8 * FUN_10818994c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000008;
  
  if (in_stack_00000008 != (long *)0x0) {
    plVar1 = in_stack_00000008 + 1;
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
      (**(code **)(*in_stack_00000008 + 0x10))();
    }
  }
  return &stack0x00000008;
}



/* Entry: 1081899a8; end: 1081899fb;  */

void FUN_1081899a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_10818c894(param_1,0);
  *param_1 = &PTR_FUN_110a2baa0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}



/* Entry: 1081899fc; end: 108189b03;  */

void FUN_1081899fc(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_138 [40];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
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
  undefined4 uStack_3c;
  uint uStack_38;
  
  if (*(long *)(param_1 + 0x48) != 0) {
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
    uStack_38 = (uint)*(byte *)(param_1 + 0x50);
    uStack_3c = 0x40800000;
    FUN_10818ccbc(auStack_110);
    if (param_3 != 0) {
      if (*(long *)(param_3 + 0x10) != 0) {
        FUN_108189b8c();
        FUN_10818d01c(auStack_110,param_1 + 0x18,auStack_138,1);
      }
      FUN_108189b8c();
      FUN_10818ca28(auStack_108,auStack_138,&uStack_80,0);
    }
    FUN_10834001c(0,0,param_2,*(undefined8 *)(param_1 + 0x48),param_1 + 0x2c,&uStack_80);
    FUN_10818cd40(auStack_110);
    FUN_108375e94(&uStack_80);
  }
  return;
}



/* Entry: 108189b04; end: 108189b07;  */

void FUN_108189b04(void)

{
  return;
}



/* Entry: 108189b08; end: 108189b4b;  */

undefined8 FUN_108189b08(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(long *)(param_2 + 0x48) != 0) {
    uStack_18 = *(undefined8 *)(*(long *)(param_2 + 0x48) + 0x20);
    uStack_20 = 0;
    FUN_10817500c(&uStack_20);
    return CONCAT44(uVar2,uVar1);
  }
  return 0;
}



/* Entry: 108189b4c; end: 108189b4f;  */

undefined8 * FUN_108189b4c(undefined8 *param_1)

{
  func_0x000106f47184(param_1 + 9);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108189b50; end: 108189b63;  */

void FUN_108189b50(void)

{
  FUN_108189b64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108189b64; end: 108189b8b;  */

undefined8 * FUN_108189b64(undefined8 *param_1)

{
  func_0x000106f47184(param_1 + 9);
  *param_1 = &PTR_DAT_110a2bbb8;
  if ((*(ushort *)(param_1 + 5) >> 4 & 1) != 0) {
    if (param_1[2] != 0) {
      FUN_10818aa28();
    }
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108189b8c; end: 108189b97;  */

void FUN_108189b8c(void)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(unaff_x19 + 0xc40);
  FUN_10816eae8(&stack0x00000008,*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x28),
                *(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x1c),
                *(undefined4 *)(lVar1 + 0x2c),*(undefined4 *)(lVar1 + 0x4c),
                *(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x34));
  return;
}



/* Entry: 108189b98; end: 108189c37;  */

void FUN_108189b98(long param_1,float *param_2,ulong param_3)

{
  ulong uVar1;
  float **ppfVar2;
  float *pfStack_50;
  undefined1 uStack_48;
  undefined1 uStack_38;
  
  if (*param_2 < param_2[2]) {
    ppfVar2 = &pfStack_50;
    if (param_2[1] < param_2[3]) {
      uStack_48 = 0;
      uStack_38 = 0;
      uVar1 = param_3;
      pfStack_50 = param_2;
      func_0x0001081420b8();
      if ((uVar1 & 1) == 0) {
        FUN_108189c44(&pfStack_50);
        FUN_108189c38(param_3,ppfVar2,1);
        param_2 = pfStack_50;
      }
      func_0x00010813f50c(param_1,param_2);
      func_0x00010838ed50(param_1 + 0x18,pfStack_50);
    }
  }
  return;
}



/* Entry: 108189c38; end: 108189c43;  */

ulong FUN_108189c38(ulong param_1,float param_2,undefined8 param_3,undefined4 param_4,long param_5,
                   ulong *param_6,int param_7)

{
  undefined1 uVar1;
  long lVar2;
  ulong *puVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float afStack_a8 [4];
  undefined8 uStack_98;
  ulong *puStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_5;
  func_0x0001081421e0();
  uVar1 = (int)lVar2 == 1;
  if ((int)lVar2 < 2) {
    fVar6 = *(float *)(param_5 + 8);
    param_2 = *(float *)(param_5 + 0x14);
    param_1 = CONCAT44((float)(*param_6 >> 0x20) + param_2,(float)*param_6 + fVar6);
    func_0x000108365e70();
    *(int *)param_6 = (int)param_1;
    *(float *)((long)param_6 + 4) = param_2;
    *(float *)(param_6 + 1) = fVar6;
    *(undefined4 *)((long)param_6 + 0xc) = param_4;
  }
  else {
    lVar2 = param_5;
    FUN_1082878d0();
    if ((int)lVar2 == 0) {
      uVar1 = param_7 == 1;
      if (((bool)uVar1) && (lVar2 = param_5, FUN_10828e338(), (int)lVar2 != 0)) {
        FUN_108376ad8(&puStack_60);
        func_0x000108142248(&puStack_60,param_6,0);
        func_0x000108142294(&puStack_60,param_5,1);
        puVar3 = puStack_60;
        FUN_1082d8734();
        param_1 = *puVar3;
        param_6[1] = puVar3[1];
        *param_6 = param_1;
        FUN_10837ca5c(puStack_60);
        param_5 = 0;
      }
      else {
        puStack_60 = (ulong *)*param_6;
        uVar9 = param_6[1];
        uStack_58 = CONCAT44((int)((ulong)puStack_60 >> 0x20),(int)uVar9);
        param_1 = CONCAT44((int)(uVar9 >> 0x20),(int)puStack_60);
        uStack_50 = uVar9;
        uStack_48 = param_1;
        FUN_1083645e0(param_5,&puStack_60,&puStack_60,4);
        param_2 = (float)uVar9;
        FUN_10838ece0(param_6,&puStack_60,4);
        FUN_10827a0d8();
      }
      goto LAB_108365020;
    }
    FUN_108364ec0(param_5,param_6,param_6);
  }
  param_5 = 1;
LAB_108365020:
  func_0x000108365ee0(uStack_38);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  fVar8 = (float)param_1;
  FUN_10837ca5c(puStack_60);
  __Unwind_Resume(param_5);
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  afStack_a8[1] = 0.0;
  afStack_a8[2] = 0.0;
  pfVar5 = afStack_a8;
  afStack_a8[0] = fVar8;
  afStack_a8[3] = fVar8;
  FUN_1082ef8c0();
  FUN_1082878c8(afStack_a8);
  pfVar4 = afStack_a8 + 2;
  fVar6 = fVar8;
  FUN_1082878c8();
  func_0x000108365ee0(uStack_98);
  if ((bool)uVar1) {
    return (ulong)(uint)SQRT(fVar8 * fVar6);
  }
  ___stack_chk_fail();
  fVar7 = pfVar4[8] + param_2 * pfVar4[7] + pfVar4[6] * fVar6;
  fVar8 = 1.0 / fVar7;
  if (fVar7 == 0.0) {
    fVar8 = fVar7;
  }
  fVar7 = (pfVar4[5] + param_2 * pfVar4[4] + pfVar4[3] * fVar6) * fVar8;
  *pfVar5 = (pfVar4[2] + param_2 * pfVar4[1] + *pfVar4 * fVar6) * fVar8;
  pfVar5[1] = fVar7;
  return (ulong)(uint)fVar7;
}



/* Entry: 108189c44; end: 108189c8b;  */

void FUN_108189c44(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    lVar2 = *(long *)*param_1;
    param_1[2] = ((long *)*param_1)[1];
    param_1[1] = lVar2;
    *(undefined1 *)(param_1 + 3) = 1;
    plVar1 = param_1 + 1;
    FUN_10818533c();
    *param_1 = (long)plVar1;
  }
  plVar1 = param_1 + 1;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x000108185380();
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined4 *)(plVar1 + 4) = *(undefined4 *)(param_2 + 0x20);
  plVar1[3] = lVar2;
  return;
}



/* Entry: 108189c8c; end: 108189d67;  */

undefined8 * FUN_108189c8c(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  FUN_1081884a0(param_1,&uStack_38,0);
  FUN_108154cb4(&uStack_38);
  *param_1 = &PTR_FUN_110a2baf8;
  lStack_40 = *param_3;
  *param_3 = 0;
  param_1[7] = lStack_40;
  *(undefined4 *)(param_1 + 8) = param_4;
  if (lStack_40 != 0) {
    piVar1 = (int *)(lStack_40 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a5b8(param_1,&lStack_40);
  FUN_1081687b4(&lStack_40);
  return param_1;
}



/* Entry: 108189d68; end: 108189dd7;  */

void FUN_108189d68(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + 0x38);
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_1081687b4(&lStack_28);
  FUN_108154cb4((long *)(param_1 + 0x38));
  FUN_108188544(param_1);
  return;
}



/* Entry: 108189dd8; end: 108189ddb;  */

void FUN_108189dd8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + 0x38);
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10818a6d4(param_1,&lStack_28);
  FUN_1081687b4(&lStack_28);
  FUN_108154cb4((long *)(param_1 + 0x38));
  FUN_108188544(param_1);
  return;
}



/* Entry: 108189ddc; end: 108189def;  */

void FUN_108189ddc(void)

{
  FUN_108189d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108189df0; end: 108189fdb;  */

void FUN_108189df0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
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
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  long lStack_60;
  undefined4 uStack_58;
  
  uStack_58 = 0;
  if (param_2 != 0) {
    uStack_58 = *(undefined4 *)(param_2 + 0xc60);
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_74 = 0x3f800000;
  uStack_6c = 0x40800000;
  lStack_60 = param_2;
  if (param_3 != 0) {
    func_0x00010833b800(&uStack_130,param_2);
    FUN_10818ca28(param_3,&uStack_130,&uStack_b0,0);
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = uRam0000000113254e28;
  uStack_110 = uRam0000000113254e20;
  uStack_f8 = uRam0000000113254e38;
  uStack_100 = uRam0000000113254e30;
  uStack_e0 = uRam0000000113254e28;
  uStack_e8 = uRam0000000113254e20;
  uStack_d0 = uRam0000000113254e38;
  uStack_d8 = uRam0000000113254e30;
  uStack_f0 = uRam0000000113254e40;
  uStack_c8 = uRam0000000113254e40;
  uStack_c0 = 0x3f800000;
  if ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0) {
    FUN_1083ae71c(&uStack_180);
    uVar1 = uStack_130;
    uStack_130 = uStack_180;
    uStack_180 = 0;
    FUN_10818a0c0(uVar1);
    FUN_108115b2c(&uStack_180);
  }
  FUN_10833c3b4(param_2,param_1 + 0x18,&uStack_b0);
  FUN_10818c910(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_130);
  uStack_14c = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_160 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_144 = 0x3f800000;
  uStack_13c = 0x40800000;
  uVar2 = 5;
  if ((*(uint *)(param_1 + 0x40) & 1) != 0) {
    uVar2 = 7;
  }
  FUN_1083762f4(&uStack_180,uVar2);
  FUN_10833c3b4(param_2,param_1 + 0x18,&uStack_180);
  FUN_1081885d4(param_1,param_2,0);
  FUN_108375e94(&uStack_180);
  FUN_108166234(&uStack_130);
  FUN_108375e94(&uStack_b0);
  FUN_10815b978(&lStack_60);
  return;
}



/* Entry: 108189fdc; end: 10818a033;  */

long * FUN_108189fdc(long param_1,undefined4 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  FUN_10818c948();
  if ((lVar3 != 0) == (bool)(*(byte *)(param_1 + 0x40) & 1)) {
    return (long *)0x0;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  iVar1 = (int)plVar2 + 0x18;
  FUN_108188ea8(*param_2,param_2[1]);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010818c984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    return plVar2;
  }
  return (long *)0x0;
}



/* Entry: 10818a034; end: 10818a0bf;  */

void FUN_10818a034(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_5 + 0x38);
  FUN_10818a8b4();
  uStack_38 = puVar1[1];
  uVar2 = *puVar1;
  uStack_40 = uVar2;
  FUN_1081885e4(param_5,param_6,param_7);
  uStack_50 = (undefined4)uVar2;
  if ((*(byte *)(param_5 + 0x40) & 1) == 0) {
    uStack_4c = param_2;
    uStack_48 = param_3;
    uStack_44 = param_4;
    FUN_10838ed10(&uStack_50,&uStack_40);
  }
  return;
}



/* Entry: 10818a0c0; end: 10818a0eb;  */

void FUN_10818a0c0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010818a0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10818a0ec; end: 10818a1c3;  */

undefined8 * FUN_10818a0ec(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_38;
  
  puVar5 = param_1;
  FUN_108188e38();
  *puVar5 = &PTR_FUN_110a2bb50;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar7 = *param_2;
  puVar5[7] = param_2[1];
  puVar5[6] = uVar7;
  puVar5[8] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_108376ad8(puVar5 + 9);
  plVar2 = (long *)param_1[7];
  for (plVar6 = (long *)param_1[6]; plVar6 != plVar2; plVar6 = plVar6 + 2) {
    lStack_38 = *plVar6;
    if (lStack_38 != 0) {
      piVar1 = (int *)(lStack_38 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10818a5b8(param_1,&lStack_38);
    func_0x00010818a534();
  }
  return param_1;
}



/* Entry: 10818a1c4; end: 10818a247;  */

void FUN_10818a1c4(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lStack_38;
  
  plVar2 = *(long **)(param_1 + 0x38);
  for (plVar5 = *(long **)(param_1 + 0x30); plVar5 != plVar2; plVar5 = plVar5 + 2) {
    lStack_38 = *plVar5;
    if (lStack_38 != 0) {
      piVar1 = (int *)(lStack_38 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10818a6d4(param_1,&lStack_38);
    func_0x00010818a534();
  }
  FUN_10837ca38(param_1 + 0x48);
  FUN_1081594a0((undefined8 *)(param_1 + 0x30));
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818a248; end: 10818a24b;  */

void FUN_10818a248(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lStack_38;
  
  plVar2 = *(long **)(param_1 + 0x38);
  for (plVar5 = *(long **)(param_1 + 0x30); plVar5 != plVar2; plVar5 = plVar5 + 2) {
    lStack_38 = *plVar5;
    if (lStack_38 != 0) {
      piVar1 = (int *)(lStack_38 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10818a6d4(param_1,&lStack_38);
    func_0x00010818a534();
  }
  FUN_10837ca38(param_1 + 0x48);
  FUN_1081594a0((undefined8 *)(param_1 + 0x30));
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10818a24c; end: 10818a25f;  */

void FUN_10818a24c(void)

{
  FUN_10818a1c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10818a260; end: 10818a2a7;  */

void FUN_10818a260(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_80;
  func_0x000108342398(param_2,param_1 + 0x48,1,param_3);
  func_0x00010833c27c();
  if ((*(byte *)(unaff_x22 + 0xe) >> 1 & 1) == 0) {
    FUN_10816eab0(&uStack_80,unaff_x21[0x188] + 0x18);
    FUN_10827a0d8();
    if (iVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uVar2 = unaff_x22;
      FUN_1083773e8();
      if ((int)uVar2 != 0) goto LAB_10833e670;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uVar2 = unaff_x22;
      FUN_1083777d4();
      if ((int)uVar2 != 0) {
        FUN_108384c90(&uStack_80,&uStack_40);
        goto LAB_10833e670;
      }
      func_0x0001083777e0();
      if ((unaff_x22 & 1) != 0) goto LAB_10833e670;
    }
  }
  func_0x0001083423c0(*(undefined8 *)(*unaff_x21 + 0x180));
LAB_10833e670:
  func_0x000108342298();
  return;
}



/* Entry: 10818a2a8; end: 10818a47f;  */

undefined8 FUN_10818a2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 auStack_a8 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_98 = 0;
  uVar6 = 0x100000000;
  uStack_90 = 0x100000000;
  uStack_88 = 4;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_108376d4c(param_1 + 0x48);
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  bVar3 = false;
  for (puVar5 = *(undefined8 **)(param_1 + 0x30); puVar5 != puVar1; puVar5 = puVar5 + 2) {
    FUN_10818a8b4(*puVar5,param_2,param_3);
    iVar2 = *(int *)(puVar5 + 1);
    if (iVar2 == 0) {
      (**(code **)(*(long *)*puVar5 + 0x38))(auStack_a8);
      if (bVar3) {
        func_0x00010818a528();
      }
      if (*(int *)(*(long *)(param_1 + 0x48) + 0x48) == 0) {
        FUN_108376b90(param_1 + 0x48,auStack_a8);
      }
      else {
        func_0x000108142250(param_1 + 0x48,auStack_a8,0);
      }
    }
    else {
      if (!bVar3) {
        FUN_1081e4448(&uStack_98,param_1 + 0x48,2);
      }
      (**(code **)(*(long *)*puVar5 + 0x38))(auStack_a8);
      if (*(int *)(puVar5 + 1) - 2U < 4) {
        uVar4 = *(undefined4 *)(&UNK_10df07330 + (ulong)(*(int *)(puVar5 + 1) - 2U) * 4);
      }
      else {
        uVar4 = 2;
      }
      FUN_1081e4448(&uStack_98,auStack_a8,uVar4);
    }
    FUN_10837ca5c(auStack_a8[0]);
    bVar3 = iVar2 != 0;
  }
  if (bVar3) {
    func_0x00010818a528();
  }
  FUN_10837b010(param_1 + 0x48);
  FUN_10837b718(param_1 + 0x48);
  func_0x00010818a4f0(&uStack_98);
  return uVar6;
}



/* Entry: 10818a480; end: 10818a4b7;  */

undefined8 * FUN_10818a480(undefined8 *param_1)

{
  FUN_10818a4b8();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10818a4b8; end: 10818a517;  */

void FUN_10818a4b8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      FUN_10837ca38();
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10818a518; end: 10818a577;  */

void FUN_10818a518(void)

{
  return;
}



/* Entry: 10818a578; end: 10818a5b7;  */

undefined8 * FUN_10818a578(undefined8 *param_1)

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



/* Entry: 10818a5b8; end: 10818a65b;  */

void FUN_10818a5b8(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = *param_2;
  if ((*(ushort *)(lVar2 + 0x28) >> 4 & 1) == 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      *(undefined8 *)(lVar2 + 0x10) = param_1;
      return;
    }
    puVar1 = (undefined8 *)0x18;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    FUN_10818a65c();
    FUN_10818ab98(puVar1,*param_2 + 0x10);
    *(undefined8 **)(*param_2 + 0x10) = puVar1;
    *(ushort *)(*param_2 + 0x28) = *(ushort *)(*param_2 + 0x28) | 0x10;
    lVar2 = *param_2;
  }
  uStack_38 = param_1;
  FUN_10818ac64(*(undefined8 *)(lVar2 + 0x10),&uStack_38);
  return;
}



/* Entry: 10818a65c; end: 10818a6d3;  */

void FUN_10818a65c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plStack_78;
  
  plVar1 = param_1 + 2;
  if ((long *)(*plVar1 - *param_1 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      FUN_10818aa74();
      func_0x00010818ad70();
      func_0x00010818ad78();
      lVar3 = *param_2;
      if ((*(ushort *)(lVar3 + 0x28) >> 4 & 1) == 0) {
        *(undefined8 *)(lVar3 + 0x10) = 0;
        return;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      uVar2 = *puVar4;
      plStack_78 = plVar1;
      FUN_10818a798(uVar2,puVar4[1],&plStack_78);
      FUN_10818a73c(puVar4,uVar2,*(undefined8 *)(*(long *)(*param_2 + 0x10) + 8));
      return;
    }
    FUN_10818ab08();
    func_0x00010818ad64();
    func_0x00010818ad70();
  }
  return;
}



/* Entry: 10818a6d4; end: 10818a73b;  */

void FUN_10818a6d4(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  lVar2 = *param_2;
  if ((*(ushort *)(lVar2 + 0x28) >> 4 & 1) == 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
    return;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0x10);
  uVar1 = *puVar3;
  uStack_28 = param_1;
  FUN_10818a798(uVar1,puVar3[1],&uStack_28);
  FUN_10818a73c(puVar3,uVar1,*(undefined8 *)(*(long *)(*param_2 + 0x10) + 8));
  return;
}



/* Entry: 10818a73c; end: 10818a797;  */

long FUN_10818a73c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_2 != param_3) {
    lVar1 = *(long *)(param_1 + 8) - param_3;
    if (lVar1 != 0) {
      _memmove(param_2,param_3,lVar1);
    }
    *(long *)(param_1 + 8) = param_2 + lVar1;
  }
  return param_2;
}


