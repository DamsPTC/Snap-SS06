/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108126c24; end: 108126c6b;  */

void FUN_108126c24(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  FUN_108376208(param_1 + 0x250);
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108126c6c; end: 108126c7b;  */

void FUN_108126c6c(float param_1,long param_2,code *UNRECOVERED_JUMPTABLE)

{
  if (0.0 <= param_1) {
    *(float *)(param_2 + 0x240) = param_1;
  }
  if (((*(byte *)(param_2 + 0x1d7) & 1) == 0) && ((*(byte *)(param_2 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x1d0) = 1;
    func_0x0001081148f4(param_2 + 0x180);
    func_0x0001081148f4(param_2 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108126c7c; end: 108126d0f;  */

void FUN_108126c7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  undefined1 auStack_80 [48];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_108126d10();
  FUN_108115924(auStack_80,param_5 + 0x250);
  if ((*(long *)(param_5 + 0x2a0) != 0) || (*(long *)(param_5 + 0x2a8) != 0)) {
    FUN_108343500(0xff000000);
    uStack_50 = param_1;
    uStack_4c = param_2;
    uStack_48 = param_3;
    uStack_44 = param_4;
    func_0x00010814025c(param_5 + 0x2a0,param_6);
    func_0x00010814027c(param_5 + 0x2a0,auStack_80);
  }
  func_0x00010812701c();
  func_0x00010812701c();
  FUN_108375e94(auStack_80);
  return;
}



/* Entry: 108126d10; end: 108126da3;  */

void FUN_108126d10(long param_1)

{
  if ((*(float *)(param_1 + 0x2b0) != 0.0) || (*(float *)(param_1 + 0x2b4) != 1.0)) {
    if ((*(byte *)(param_1 + 0x2f0) & 1) == 0) {
      func_0x000108126d74(param_1 + 0x2b8,param_1 + 0x1f0);
    }
    FUN_108126da4(param_1 + 0x2b8);
    func_0x000108142750(*(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b4));
  }
  return;
}



/* Entry: 108126da4; end: 108126dbb;  */

void FUN_108126da4(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    return;
  }
  func_0x0001080da3e4();
  func_0x000108142214(param_1 + 0x1f0);
  func_0x000108126fb4(param_1 + 0x2b8);
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108126dbc; end: 108126de7;  */

void FUN_108126dbc(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  func_0x000108142214(param_1 + 0x1f0);
  func_0x000108126fb4(param_1 + 0x2b8);
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108126de8; end: 108126dff;  */

undefined4 FUN_108126de8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x240);
}



/* Entry: 108126e00; end: 108126eff;  */

/* WARNING: Possible PIC construction at 0x000108126e34: Changing call to branch */

void FUN_108126e00(long param_1,code *UNRECOVERED_JUMPTABLE,long *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = (int)param_1 + 0x2a0;
  pcVar4 = (code *)0x1;
  func_0x0001081404dc();
  if (iVar2 == 0) {
    uVar3 = param_1 + 0x2a0;
    if (*param_3 == param_3[1]) {
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      func_0x0001081404dc();
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
    else {
      func_0x0001081402bc(uVar3,UNRECOVERED_JUMPTABLE,param_3,param_4);
      iVar2 = (int)param_1 + 0x2a0;
      func_0x000108140524();
      if (iVar2 == 0) {
        return;
      }
    }
  }
  else {
    unaff_x30 = 0x108126e38;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    UNRECOVERED_JUMPTABLE = pcVar4;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108126f00; end: 108126f23;  */

void FUN_108126f00(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  func_0x0001081404b4(param_1 + 0x2a0);
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108126f24; end: 108126f63;  */

undefined4 FUN_108126f24(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2b0);
}



/* Entry: 108126f64; end: 108126f93;  */

/* WARNING: Possible PIC construction at 0x000108126f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108126f80) */

void FUN_108126f64(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  uStack_28 = 0x108126f80;
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
  uStack_38 = 0;
  func_0x00010837656c(param_1 + 0x210);
  FUN_10810c718(&uStack_38);
  return;
}



/* Entry: 108126f94; end: 108126ff3;  */

void FUN_108126f94(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000108142728();
  }
  return;
}



/* Entry: 108126ff4; end: 108127027;  */

void FUN_108126ff4(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108127028; end: 108127123;  */

undefined8 * FUN_108127028(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10811e8f8();
  *puVar1 = &PTR_FUN_110a25d18;
  FUN_108127124(puVar1 + 0x3e);
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  func_0x00010813f2ac((long)param_1 + 0x204);
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)((long)param_1 + 0x25c) = 0x3f800000;
  param_1[0x4c] = 0x4080000000000000;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined8 *)((long)param_1 + 0x29c) = 0;
  *(undefined4 *)((long)param_1 + 0x2ac) = 0x3f800000;
  param_1[0x56] = 0x4080000000000000;
  *(undefined4 *)(param_1 + 0x57) = 0;
  FUN_1081411f4(param_1 + 0x58);
  FUN_1081411f4(param_1 + 0x5b);
  *(uint *)(param_1 + 0x4d) = *(uint *)(param_1 + 0x4d) & 0xffffff3f | 0x40;
  FUN_108376208(param_1 + 0x44,*(undefined4 *)(param_1 + 0x40));
  *(uint *)(param_1 + 0x4d) = *(uint *)(param_1 + 0x4d) | 1;
  *(uint *)(param_1 + 0x57) = *(uint *)(param_1 + 0x57) & 0xffffff3f | 0x40;
  FUN_108376208(param_1 + 0x4e,*(undefined4 *)(param_1 + 0x40));
  *(uint *)(param_1 + 0x57) = *(uint *)(param_1 + 0x57) | 1;
  return param_1;
}



/* Entry: 108127124; end: 1081271d7;  */

void FUN_108127124(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110a25df0;
  puVar1[1] = 1;
  *param_1 = puVar1;
  return;
}



/* Entry: 1081271d8; end: 1081271db;  */

undefined8 * FUN_1081271d8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110a25d18;
  FUN_10837ca38(param_1 + 0x5b);
  FUN_10837ca38(param_1 + 0x58);
  FUN_108375e94(param_1 + 0x4e);
  FUN_108375e94(param_1 + 0x44);
  plVar3 = (long *)param_1[0x3e];
  if (plVar3 != (long *)0x0) {
    plVar5 = plVar3 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *param_1 = &PTR_FUN_110a25488;
  plVar3 = (long *)param_1[9];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  plVar5 = (long *)param_1[10];
  for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
    func_0x00010813b754(*plVar3 + 0x10);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  func_0x0001003a8c94(param_1 + 0x3d);
  FUN_10837ca38(param_1 + 0x32);
  FUN_1081148cc(param_1 + 0x30);
  FUN_1081148cc(param_1 + 0x2e);
  FUN_1081148cc(param_1 + 0x2c);
  FUN_108121600(param_1 + 0x2b);
  func_0x0001081215bc(param_1 + 0x2a);
  FUN_108120a80(param_1 + 0x28);
  FUN_108120a80(param_1 + 0x26);
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))();
  }
  func_0x000108121598(param_1 + 0x13);
  FUN_108120b30(param_1 + 0xd);
  func_0x000108120bd4(param_1 + 9);
  func_0x000108120c94(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1081271dc; end: 1081271ef;  */

void FUN_1081271dc(void)

{
  func_0x000108127160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081271f0; end: 1081272c3;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000108127290 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1081271f0(undefined4 param_1,long param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1081272c4(param_3,param_3,param_2 + 0x220,param_2 + 0x2c0);
  uVar13 = NEON_fmov(0x40400000,4);
  fVar2 = (float)*param_3 + 3.0;
  fVar3 = (float)((ulong)*param_3 >> 0x20) + 3.0;
  uVar5 = SUB41(fVar3,0);
  uVar7 = (undefined1)((uint)fVar3 >> 8);
  uVar8 = (undefined1)((uint)fVar3 >> 0x10);
  uVar9 = (undefined1)((uint)fVar3 >> 0x18);
  fVar10 = (float)param_3[1] + (float)uVar13 + -6.0;
  fVar11 = (float)((ulong)param_3[1] >> 0x20) + (float)((ulong)uVar13 >> 0x20) + -6.0;
  uStack_38 = CONCAT44(fVar11,fVar10);
  uStack_40 = CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(uVar5,fVar2))));
  auVar12[4] = uVar5;
  auVar12._0_4_ = fVar2;
  auVar12[5] = uVar7;
  auVar12[6] = uVar8;
  auVar12[7] = uVar9;
  auVar12._8_4_ = fVar10;
  auVar12._12_4_ = fVar11;
  auVar1[4] = uVar5;
  auVar1._0_4_ = fVar2;
  auVar1[5] = uVar7;
  auVar1[6] = uVar8;
  auVar1[7] = uVar9;
  auVar1._8_4_ = fVar10;
  auVar1._12_4_ = fVar11;
  auVar12 = NEON_ext(auVar12,auVar1,8,1);
  bVar4 = ~-(fVar2 < auVar12._0_4_);
  bVar6 = ~-(fVar3 < auVar12._4_4_);
  if (((bVar4 | bVar6) & 1) == 0) {
    _fmod(CONCAT17(uVar9,CONCAT16(uVar8,CONCAT15(uVar7,CONCAT14(bVar6,CONCAT31((int3)((uint)param_1
                                                                                     >> 8),bVar4))))
                  ),0x401921fb54442d18);
    FUN_1081272c4(param_3,&uStack_40,param_2 + 0x270,param_2 + 0x2d8);
  }
  return;
}



/* Entry: 1081272c4; end: 1081273b3;  */

void FUN_1081272c4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  fVar3 = (float)param_2[1] - (float)*param_2;
  fVar4 = (float)((ulong)param_2[1] >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  puVar1 = param_2;
  func_0x000108113a90();
  uStack_78 = 0;
  uStack_80 = 0x3f800000;
  uStack_68 = 0;
  uStack_70 = 0x3f800000;
  uStack_60 = 0x103f800000;
  FUN_10814206c(param_1,fVar3 * 0.5,fVar4 * 0.5,&uStack_80);
  func_0x000108113a24(param_2,&uStack_80);
  uVar2 = param_5;
  uStack_58 = CONCAT44(fVar4,fVar3);
  FUN_10814120c(param_5,&uStack_58);
  if ((int)uVar2 != 0) {
    FUN_108379034(0x43b40000,0x43580001,param_5,param_3);
  }
  func_0x000108113900(param_2,param_4,param_5);
  func_0x000108113ac4(param_2,puVar1);
  return;
}



/* Entry: 1081273b4; end: 10812747f;  */

void FUN_1081273b4(ulong param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lStack_38;
  
  FUN_1081206a0();
  if ((bRam0000000113729b60 & 1) == 0) {
    iVar4 = 0x13729b60;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001003a83dc(0x113729b58,&UNK_10f47baaa);
      ___cxa_guard_release(0x113729b60);
    }
  }
  if ((param_2 != 0) &&
     (uVar5 = param_1, func_0x00010811ff28(param_1,0x113729b58), (uVar5 & 1) == 0)) {
    lStack_38 = *(long *)(param_1 + 0x1f0);
    if (lStack_38 != 0) {
      plVar1 = (long *)(lStack_38 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010811fc6c(param_1,0x113729b58,&lStack_38);
    FUN_1080e5d1c(lStack_38);
  }
  return;
}



/* Entry: 108127480; end: 1081274d7;  */

void FUN_108127480(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  if (*(int *)(param_1 + 0x200) == (int)UNRECOVERED_JUMPTABLE) {
    return;
  }
  *(int *)(param_1 + 0x200) = (int)UNRECOVERED_JUMPTABLE;
  FUN_108376208(param_1 + 0x270,UNRECOVERED_JUMPTABLE);
  FUN_108376208(param_1 + 0x220);
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1081274d8; end: 1081274df;  */

void FUN_1081274d8(void)

{
  return;
}



/* Entry: 1081274e0; end: 10812753f;  */

undefined8 FUN_1081274e0(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x10) = 1;
    param_1 = 0.0;
  }
  else {
    param_1 = param_1 + *(double *)(param_2 + 0x18);
  }
  *(double *)(param_2 + 0x18) = param_1;
  uVar1 = NEON_fminnm(param_1 + param_1,0x3ff0000000000000);
  FUN_10812754c(uVar1,(ulong)param_1 ^
                      ((ulong)param_1 ^ (ulong)(param_1 - (double)(long)param_1)) &
                      0x7ff8000000000000,param_3);
  return 0;
}



/* Entry: 108127540; end: 10812754b;  */

/* WARNING: Possible PIC construction at 0x0001081275b4: Changing call to branch */

void FUN_108127540(undefined **param_1,undefined **param_2)

{
  undefined1 *puVar1;
  undefined **UNRECOVERED_JUMPTABLE;
  undefined **ppuVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar3;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined8 *)(puVar1 + -0x30) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x28) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    UNRECOVERED_JUMPTABLE = &PTR_DAT_110a25558;
    ___dynamic_cast(param_2,&PTR_DAT_110a25558,&PTR_DAT_110a25dc8,0);
    if (param_2 != (undefined **)0x0) break;
    unaff_x30 = FUN_1081275f4;
    ___cxa_bad_cast();
    puVar1 = puVar1 + -0x30;
    param_1 = param_2;
    param_2 = UNRECOVERED_JUMPTABLE;
    unaff_d8 = 0;
    unaff_d9 = 0;
  }
  if (*(float *)(param_2 + 0x3f) == 0.0) {
    if (*(float *)((long)param_2 + 0x1fc) == 0.0) {
      return;
    }
    *(undefined4 *)((long)param_2 + 0x1fc) = 0;
    unaff_x29 = *(undefined1 **)(puVar1 + -0x10);
    uVar3 = *(undefined8 *)(puVar1 + -8);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x20);
    ppuVar2 = *(undefined ***)(puVar1 + -0x18);
  }
  else {
    *(undefined4 *)(param_2 + 0x3f) = 0;
    *(undefined4 *)(param_2 + 0x56) = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0;
    uVar3 = 0x1081275b8;
    puVar1 = puVar1 + -0x30;
    ppuVar2 = param_2;
  }
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(undefined ***)(puVar1 + -0x18) = ppuVar2;
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = uVar3;
  if (((*(byte *)((long)param_2 + 0x1d7) & 1) == 0) && (((ulong)param_2[0x3a] & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x3a) = 1;
    func_0x0001081148f4(param_2 + 0x30);
    func_0x0001081148f4(param_2 + 0x2e);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10812754c; end: 1081275f3;  */

/* WARNING: Possible PIC construction at 0x0001081275b4: Changing call to branch */

void FUN_10812754c(double param_1,double param_2,undefined **param_3)

{
  undefined **UNRECOVERED_JUMPTABLE;
  undefined **ppuVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double unaff_d8;
  double unaff_d9;
  
  while( true ) {
    dVar5 = param_2;
    dVar4 = param_1;
    *(double *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(double *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    UNRECOVERED_JUMPTABLE = &PTR_DAT_110a25558;
    ___dynamic_cast(param_3,&PTR_DAT_110a25558,&PTR_DAT_110a25dc8,0);
    if (param_3 != (undefined **)0x0) break;
    unaff_x30 = FUN_1081275f4;
    ___cxa_bad_cast();
    *(undefined1 *)(param_3 + 2) = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_3 = UNRECOVERED_JUMPTABLE;
    param_1 = 0.0;
    param_2 = 0.0;
    unaff_d8 = dVar5;
    unaff_d9 = dVar4;
  }
  fVar3 = (float)dVar4;
  if (*(float *)(param_3 + 0x3f) == fVar3) {
    fVar3 = (float)dVar5;
    if (*(float *)((long)param_3 + 0x1fc) == fVar3) {
      return;
    }
    *(float *)((long)param_3 + 0x1fc) = fVar3;
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    uVar2 = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    ppuVar1 = *(undefined ***)((long)register0x00000008 + -0x18);
  }
  else {
    *(float *)(param_3 + 0x3f) = fVar3;
    fVar3 = fVar3 * 1.5;
    if (0.0 <= fVar3) {
      *(float *)(param_3 + 0x56) = fVar3;
      *(float *)(param_3 + 0x4c) = fVar3;
    }
    uVar2 = 0x1081275b8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    ppuVar1 = param_3;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x18) = ppuVar1;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar2;
  if (((*(byte *)((long)param_3 + 0x1d7) & 1) == 0) && (((ulong)param_3[0x3a] & 1) == 0)) {
    *(undefined1 *)(param_3 + 0x3a) = 1;
    func_0x0001081148f4(param_3 + 0x30);
    func_0x0001081148f4(param_3 + 0x2e);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1081275f4; end: 108127607;  */

/* WARNING: Possible PIC construction at 0x0001081275b4: Changing call to branch */

void FUN_1081275f4(undefined **param_1,undefined **param_2)

{
  undefined **UNRECOVERED_JUMPTABLE;
  undefined **ppuVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 uVar2;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    UNRECOVERED_JUMPTABLE = &PTR_DAT_110a25558;
    ___dynamic_cast(param_2,&PTR_DAT_110a25558,&PTR_DAT_110a25dc8,0);
    if (param_2 != (undefined **)0x0) break;
    unaff_x30 = FUN_1081275f4;
    ___cxa_bad_cast();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = param_2;
    param_2 = UNRECOVERED_JUMPTABLE;
    unaff_d8 = 0;
    unaff_d9 = 0;
  }
  if (*(float *)(param_2 + 0x3f) == 0.0) {
    if (*(float *)((long)param_2 + 0x1fc) == 0.0) {
      return;
    }
    *(undefined4 *)((long)param_2 + 0x1fc) = 0;
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    uVar2 = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    ppuVar1 = *(undefined ***)((long)register0x00000008 + -0x18);
  }
  else {
    *(undefined4 *)(param_2 + 0x3f) = 0;
    *(undefined4 *)(param_2 + 0x56) = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0;
    uVar2 = 0x1081275b8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    ppuVar1 = param_2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x18) = ppuVar1;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar2;
  if (((*(byte *)((long)param_2 + 0x1d7) & 1) == 0) && (((ulong)param_2[0x3a] & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x3a) = 1;
    func_0x0001081148f4(param_2 + 0x30);
    func_0x0001081148f4(param_2 + 0x2e);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108127608; end: 108127747;  */

undefined8 * FUN_108127608(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = param_1;
  FUN_10811e8f8();
  *puVar1 = &PTR_FUN_110a25e58;
  puVar1[0x3f] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x41] = 0;
  puVar1[0x40] = 0;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  puVar1[0x45] = 0;
  puVar1[0x44] = 0;
  puVar1[0x46] = 0x3f80000000000000;
  puVar1[0x47] = 0x4080000000000000;
  *(undefined1 *)(puVar1 + 0x4f) = 0;
  *(undefined8 *)((long)puVar1 + 0x27c) = 0;
  *(undefined8 *)((long)puVar1 + 0x284) = 0;
  *(undefined8 *)((long)puVar1 + 0x28c) = 0;
  *(undefined8 *)((long)puVar1 + 0x294) = 0x100000000;
  puVar1[0x4a] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4b] = 0;
  *(undefined1 *)(puVar1 + 0x4d) = 0;
  *(undefined1 *)((long)puVar1 + 0x29c) = 0;
  puVar1[0x54] = 0;
  *(undefined1 *)(puVar1 + 0x55) = 0;
  *(undefined4 *)((long)puVar1 + 0x2ac) = 0x3f800000;
  puVar1[0x57] = 0;
  puVar1[0x56] = 0;
  puVar1[0x59] = 0;
  puVar1[0x58] = 0;
  *(undefined4 *)(puVar1 + 0x48) = 1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001081276b8(puVar1 + 0x58,&uStack_30);
  FUN_108120a80(&uStack_30);
  return param_1;
}



/* Entry: 108127748; end: 10812774b;  */

undefined8 * FUN_108127748(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a25e58;
  FUN_108120a80(param_1 + 0x58);
  FUN_108129054(param_1 + 0x57);
  FUN_108129030(param_1[0x4b]);
  func_0x0001078ce490(param_1 + 0x4a);
  func_0x0001003a8c94(param_1 + 0x49);
  FUN_108375e94(param_1 + 0x3f);
  func_0x000107807a88(param_1 + 0x3e);
  *param_1 = &PTR_FUN_110a25488;
  plVar1 = (long *)param_1[9];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  plVar2 = (long *)param_1[10];
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    func_0x00010813b754(*plVar1 + 0x10);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  func_0x0001003a8c94(param_1 + 0x3d);
  FUN_10837ca38(param_1 + 0x32);
  FUN_1081148cc(param_1 + 0x30);
  FUN_1081148cc(param_1 + 0x2e);
  FUN_1081148cc(param_1 + 0x2c);
  FUN_108121600(param_1 + 0x2b);
  func_0x0001081215bc(param_1 + 0x2a);
  FUN_108120a80(param_1 + 0x28);
  FUN_108120a80(param_1 + 0x26);
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))();
  }
  func_0x000108121598(param_1 + 0x13);
  FUN_108120b30(param_1 + 0xd);
  func_0x000108120bd4(param_1 + 9);
  func_0x000108120c94(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 10812774c; end: 10812775f;  */

void FUN_10812774c(void)

{
  func_0x0001081276e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108127760; end: 108127797;  */

void FUN_108127760(void)

{
  FUN_108127798();
  return;
}



/* Entry: 108127798; end: 108127ad7;  */

void FUN_108127798(float param_1,float param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  undefined1 in_ZR;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *extraout_x8;
  int extraout_w11;
  long *plVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float unaff_s9;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [48];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  fVar18 = *(float *)(param_4 + 0x1c);
  uVar21 = *(undefined4 *)(param_4 + 0x20);
  uVar9 = CONCAT44((int)(param_2 * fVar18),(int)(param_1 * fVar18));
  plVar1 = (long *)(param_3 + 0x2b8);
  lVar10 = param_3;
  uStack_d0 = uVar9;
  if (*(long *)(param_3 + 0x2b8) != 0) {
    uVar15 = *(long *)(param_3 + 0x2b8) + 0x10;
    uVar16 = (ulong)(uint)fVar18;
    func_0x000108122ca8(uVar15,&uStack_d0);
    if ((uVar15 & 1) == 0) {
      lVar7 = *(long *)(*plVar1 + 0x58);
      for (lVar10 = *(long *)(*plVar1 + 0x50) + 0x18; in_ZR = lVar10 + -0x18 == lVar7, !(bool)in_ZR;
          lVar10 = lVar10 + 0x28) {
        FUN_108128084(&uStack_c8,*(undefined8 *)(lVar10 + -8));
        fVar19 = (float)uVar16;
        fVar17 = (float)uVar9;
        plVar12 = (long *)CONCAT71(uStack_c7,uStack_c8);
        plVar13 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))(plVar12);
          uVar9 = (ulong)(uint)(fVar18 * fVar17);
          uVar16 = (ulong)(uint)(fVar18 * fVar19);
          uStack_f0 = (long *)CONCAT44(fVar18 * fVar19,fVar18 * fVar17);
          plVar13 = plVar12;
          if ((*(byte *)(lVar10 + 8) & 1) != 0) {
            lVar6 = lVar10;
            func_0x000108122ca8(lVar10,&uStack_f0);
            plVar13 = (long *)CONCAT71(uStack_c7,uStack_c8);
            if ((int)lVar6 == 0) goto LAB_10812786c;
          }
          func_0x0001078d39e8(plVar13);
          goto LAB_108127884;
        }
LAB_10812786c:
        func_0x0001078d39e8(plVar13);
      }
    }
    else {
LAB_108127884:
      FUN_1081287a0(plVar1,0);
    }
    lVar7 = *plVar1;
    lVar10 = 0;
    if (lVar7 != 0) goto LAB_108127aa8;
  }
  iVar5 = (int)lVar10;
  uStack_c8 = 0;
  uStack_70 = 0;
  func_0x000105c3b044();
  if (iVar5 != 0) {
    func_0x0001081287e0(&uStack_c8,&UNK_10f47bab2);
  }
  if ((*(byte *)(param_3 + 0x2a8) & 1) == 0) {
    uVar9 = (ulong)*(uint *)(param_3 + 0x2ac) << 0x20;
  }
  else {
    uVar9 = (ulong)(uint)(fVar18 * *(float *)(param_3 + 0x2b0)) << 0x20 | 1;
  }
  uStack_e8 = *(undefined8 *)(param_3 + 0x270);
  uStack_f0 = *(long **)(param_3 + 0x268);
  uStack_e0 = *(undefined4 *)(param_3 + 0x278);
  FUN_108128808(&lStack_d8,uStack_d0 & 0xffffffff,uStack_d0._4_4_,*(undefined4 *)(param_3 + 0x2b4),
                *(undefined8 *)(param_3 + 0x2a0),(ulong)(uint)fVar18,uVar21,param_3 + 0x248,
                param_3 + 0x250,param_3 + 0x1f0,*(undefined4 *)(param_3 + 0x260),
                *(undefined4 *)(param_3 + 0x264),*(undefined4 *)(param_3 + 0x290),
                *(undefined4 *)(param_3 + 0x298),uVar9);
  lVar10 = lStack_d8;
  if (plVar1 != &lStack_d8) {
    lStack_d8 = 0;
    lVar7 = *plVar1;
    *plVar1 = lVar10;
    FUN_108129078(lVar7);
  }
  FUN_108129078(lStack_d8);
  lVar10 = *(long *)(*plVar1 + 0x50);
  lVar7 = *(long *)(*plVar1 + 0x58);
  do {
    in_ZR = lVar10 == lVar7;
    if ((bool)in_ZR) {
      plVar12 = *(long **)(param_3 + 600);
      if (plVar12 != (long *)0x0) {
        plVar13 = plVar12 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_f0 = plVar12;
        func_0x00010812079c(param_3,&uStack_f0);
        do {
          in_ZR = *plVar13 + -1 == 0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((bool)in_ZR) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
        plVar12 = *(long **)(param_3 + 600);
        if (plVar12 != (long *)0x0) {
          *(undefined8 *)(param_3 + 600) = 0;
          plVar13 = plVar12 + 1;
          do {
            in_ZR = *plVar13 + -1 == 0;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = *plVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((bool)in_ZR) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      goto LAB_108127a9c;
    }
    func_0x000108128fe4(&uStack_f0,lVar10 + 0x10);
    plVar12 = uStack_f0;
    func_0x0001078d3de8(uStack_f0);
    lVar10 = lVar10 + 0x28;
  } while (plVar12 == (long *)0x0);
  lVar10 = *(long *)(param_3 + 600);
  if (lVar10 == 0) {
    uVar8 = 0x148;
    __Znwm();
    func_0x00010813aa20();
    uVar11 = *(undefined8 *)(param_3 + 600);
    *(undefined8 *)(param_3 + 600) = uVar8;
    FUN_108129030(uVar11);
    plVar12 = (long *)0x0;
    if (*(long *)(param_3 + 600) != 0) {
      do {
        func_0x0001081290e8();
        plVar12 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_f0 = plVar12;
    FUN_108120728(param_3,&uStack_f0);
    func_0x0001080ecc38(uStack_f0);
    lVar10 = *(long *)(param_3 + 600);
  }
  func_0x00010813ab24(lVar10 + 0x130,plVar1);
LAB_108127a9c:
  FUN_1080e8dd4(&uStack_c8);
  lVar7 = *plVar1;
LAB_108127aa8:
  func_0x000108129240(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001081291d4();
    func_0x0001081290c0();
    uVar9 = 0;
    bVar4 = *(int *)(param_3 + 0x294) + -1 < 0;
    if (*(int *)(param_3 + 0x294) == 1) {
      uVar15 = (ulong)*(uint *)(lVar7 + 0x74);
      func_0x000108129178(uVar15,*(undefined4 *)(lVar7 + 0x6c));
      uVar9 = 0;
      if (!bVar4) {
        uVar9 = uVar15 & 0xffffffff;
      }
    }
    uVar8 = 0;
    func_0x0001081420f0(auStack_1c0,1.0 / unaff_s9,1.0 / unaff_s9);
    func_0x000108113a24(plVar1,auStack_1c0);
    uVar15 = (ulong)(uint)*(float *)(param_3 + 0x284);
    fVar18 = *(float *)(param_3 + 0x280);
    if ((fVar18 == 0.0) && (fVar18 = *(float *)(param_3 + 0x288), fVar18 == 0.0)) {
      fVar18 = *(float *)(param_3 + 0x28c);
      bVar4 = fVar18 != 0.0;
    }
    else {
      bVar4 = true;
    }
    uVar16 = (ulong)(uint)fVar18;
    if ((0.0 < *(float *)(param_3 + 0x284)) && (bVar4)) {
      puVar2 = *(ulong **)(lVar7 + 0x40);
      for (puVar14 = *(ulong **)(lVar7 + 0x38); puVar14 != puVar2; puVar14 = puVar14 + 10) {
        if (*(int *)((long)puVar14 + 0x1c) != 0) {
          func_0x000108129120();
          func_0x000108129210(&uStack_1c8,*(undefined4 *)(param_3 + 0x280));
          uVar11 = uStack_1c8;
          uStack_1c8 = 0;
          func_0x0001081291e0(uVar11);
          FUN_10810c718(&uStack_1c8);
          FUN_108343500(*(undefined4 *)(param_3 + 0x27c));
          func_0x00010812919c();
          uVar16 = *puVar14;
          fVar18 = (float)*(undefined8 *)(param_3 + 0x288);
          fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 0x288) >> 0x20);
          uVar15 = CONCAT44(fVar17 + (float)(uVar16 >> 0x20),fVar18 + (float)uVar16);
          uStack_1d8 = CONCAT44(fVar17 + (float)(puVar14[1] >> 0x20),fVar18 + (float)puVar14[1]);
          uStack_1e0 = uVar15;
          FUN_1081280dc(plVar1,auStack_1c0,(int)puVar14[4],(long)puVar14 + 0x3c,&uStack_1e0);
          func_0x000108129228();
        }
      }
      plVar13 = *(long **)(lVar7 + 0x28);
      for (plVar12 = *(long **)(lVar7 + 0x20); plVar12 != plVar13; plVar12 = plVar12 + 7) {
        if (*plVar12 != 0) {
          func_0x000108129120();
          func_0x000108129210(&uStack_1e0,*(undefined4 *)(param_3 + 0x280));
          uVar15 = uStack_1e0;
          uStack_1e0 = 0;
          func_0x0001081291e0(uVar15);
          FUN_10810c718(&uStack_1e0);
          FUN_108343500(*(undefined4 *)(param_3 + 0x27c));
          func_0x00010812919c();
          func_0x000108113940(plVar1);
          uVar15 = (ulong)*(uint *)(param_3 + 0x288);
          uVar16 = (ulong)*(uint *)(param_3 + 0x28c);
          FUN_108340344();
          func_0x000108129228();
        }
      }
    }
    func_0x0001081291c8();
    FUN_108127d38();
    plVar12 = *(long **)(lVar7 + 0x20);
    plVar13 = *(long **)(lVar7 + 0x28);
    while( true ) {
      uVar20 = (undefined4)uVar16;
      uVar21 = (undefined4)uVar15;
      if (plVar12 == plVar13) break;
      if (*plVar12 != 0) {
        uVar15 = plVar12[3];
        func_0x000108129120();
        if ((*(long *)(param_3 + 0x2c0) == 0) && (*(long *)(param_3 + 0x2c8) == 0)) {
          if ((uVar15 >> 0x20 & 1) != 0) {
            FUN_108343500(uVar15);
            uStack_188 = (undefined4)uVar8;
            uStack_184 = (undefined4)uVar9;
            uStack_190 = uVar21;
            uStack_18c = uVar20;
          }
        }
        else {
          FUN_10812821c(param_3,auStack_1c0);
        }
        func_0x000108113940(plVar1);
        uVar15 = 0;
        uVar16 = 0;
        FUN_108128258();
        func_0x000108129228();
      }
      plVar12 = plVar12 + 7;
    }
    func_0x0001081291c8();
    FUN_108127d38();
    return;
  }
  return;
}



/* Entry: 108127ad8; end: 108127d37;  */

void FUN_108127ad8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  bool bVar4;
  long unaff_x20;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float unaff_s9;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [48];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  func_0x0001081291d4();
  func_0x0001081290c0();
  bVar4 = *(int *)(unaff_x20 + 0x294) + -1 < 0;
  uVar14 = 0;
  if (*(int *)(unaff_x20 + 0x294) == 1) {
    uVar8 = *(undefined4 *)(param_1 + 0x74);
    func_0x000108129178(uVar8,*(undefined4 *)(param_1 + 0x6c));
    uVar14 = 0;
    if (!bVar4) {
      uVar14 = uVar8;
    }
  }
  uVar8 = 0;
  func_0x0001081420f0(auStack_a0,1.0 / unaff_s9,1.0 / unaff_s9);
  func_0x000108113a24();
  uVar7 = (ulong)(uint)*(float *)(unaff_x20 + 0x284);
  fVar12 = *(float *)(unaff_x20 + 0x280);
  if ((fVar12 == 0.0) && (fVar12 = *(float *)(unaff_x20 + 0x288), fVar12 == 0.0)) {
    fVar12 = *(float *)(unaff_x20 + 0x28c);
    bVar4 = fVar12 != 0.0;
  }
  else {
    bVar4 = true;
  }
  uVar10 = (ulong)(uint)fVar12;
  if ((0.0 < *(float *)(unaff_x20 + 0x284)) && (bVar4)) {
    puVar1 = *(ulong **)(param_1 + 0x40);
    for (puVar5 = *(ulong **)(param_1 + 0x38); puVar5 != puVar1; puVar5 = puVar5 + 10) {
      if (*(int *)((long)puVar5 + 0x1c) != 0) {
        func_0x000108129120();
        func_0x000108129210(&uStack_a8,*(undefined4 *)(unaff_x20 + 0x280));
        uVar3 = uStack_a8;
        uStack_a8 = 0;
        func_0x0001081291e0(uVar3);
        FUN_10810c718(&uStack_a8);
        FUN_108343500(*(undefined4 *)(unaff_x20 + 0x27c));
        func_0x00010812919c();
        uVar10 = *puVar5;
        fVar12 = (float)*(undefined8 *)(unaff_x20 + 0x288);
        fVar11 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0x288) >> 0x20);
        uVar7 = CONCAT44(fVar11 + (float)(uVar10 >> 0x20),fVar12 + (float)uVar10);
        uStack_b8 = CONCAT44(fVar11 + (float)(puVar5[1] >> 0x20),fVar12 + (float)puVar5[1]);
        uStack_c0 = uVar7;
        FUN_1081280dc();
        func_0x000108129228();
      }
    }
    plVar2 = *(long **)(param_1 + 0x28);
    for (plVar6 = *(long **)(param_1 + 0x20); plVar6 != plVar2; plVar6 = plVar6 + 7) {
      if (*plVar6 != 0) {
        func_0x000108129120();
        func_0x000108129210(&uStack_c0,*(undefined4 *)(unaff_x20 + 0x280));
        uVar7 = uStack_c0;
        uStack_c0 = 0;
        func_0x0001081291e0(uVar7);
        FUN_10810c718(&uStack_c0);
        FUN_108343500(*(undefined4 *)(unaff_x20 + 0x27c));
        func_0x00010812919c();
        func_0x000108113940();
        uVar7 = (ulong)*(uint *)(unaff_x20 + 0x288);
        uVar10 = (ulong)*(uint *)(unaff_x20 + 0x28c);
        FUN_108340344();
        func_0x000108129228();
      }
    }
  }
  func_0x0001081291c8();
  FUN_108127d38();
  plVar6 = *(long **)(param_1 + 0x20);
  plVar2 = *(long **)(param_1 + 0x28);
  while( true ) {
    uVar13 = (undefined4)uVar10;
    uVar9 = (undefined4)uVar7;
    if (plVar6 == plVar2) break;
    if (*plVar6 != 0) {
      uVar7 = plVar6[3];
      func_0x000108129120();
      if ((*(long *)(unaff_x20 + 0x2c0) == 0) && (*(long *)(unaff_x20 + 0x2c8) == 0)) {
        if ((uVar7 >> 0x20 & 1) != 0) {
          FUN_108343500(uVar7);
          uStack_70 = uVar9;
          uStack_6c = uVar13;
          uStack_68 = uVar8;
          uStack_64 = uVar14;
        }
      }
      else {
        FUN_10812821c();
      }
      func_0x000108113940();
      uVar7 = 0;
      uVar10 = 0;
      FUN_108128258();
      func_0x000108129228();
    }
    plVar6 = plVar6 + 7;
  }
  func_0x0001081291c8();
  FUN_108127d38();
  return;
}



/* Entry: 108127d38; end: 108127e67;  */

void FUN_108127d38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,uint param_9)

{
  undefined4 *puVar1;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [48];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  do {
    if (param_7 == param_8) {
      return;
    }
    if (*(byte *)(param_7 + 0x10) == param_9) {
      FUN_108115924(auStack_90,param_5 + 0x1f8);
      if (*(int *)(param_7 + 0x1c) == 0) {
        if (*(char *)(param_7 + 0x18) == '\x01') {
          puVar1 = (undefined4 *)(param_7 + 0x14);
          FUN_108128204();
          FUN_108343500(*puVar1);
          uStack_60 = param_1;
          uStack_5c = param_2;
          uStack_58 = param_3;
          uStack_54 = param_4;
          if ((*(byte *)(param_7 + 0x38) & 1) != 0) goto LAB_108127da8;
          func_0x00010813f2e0(auStack_a0,param_7 + 0x24,param_7);
          func_0x000108113900(param_6,auStack_90,auStack_a0);
          FUN_10837ca5c(auStack_a0[0]);
        }
      }
      else {
        if ((*(long *)(param_5 + 0x2c0) == 0) && (*(long *)(param_5 + 0x2c8) == 0)) {
          if (*(char *)(param_7 + 0x18) == '\x01') {
            puVar1 = (undefined4 *)(param_7 + 0x14);
            FUN_108128204();
            FUN_108343500(*puVar1);
            uStack_60 = param_1;
            uStack_5c = param_2;
            uStack_58 = param_3;
            uStack_54 = param_4;
          }
        }
        else {
          FUN_10812821c(param_5,auStack_90);
        }
LAB_108127da8:
        FUN_1081280dc(param_6,auStack_90,*(undefined4 *)(param_7 + 0x20),param_7 + 0x3c,param_7);
      }
      FUN_108375e94(auStack_90);
    }
    param_7 = param_7 + 0x50;
  } while( true );
}



/* Entry: 108127e68; end: 108127e73;  */

void FUN_108127e68(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001081290a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,param_1);
  return;
}



/* Entry: 108127e74; end: 108128083;  */

void FUN_108127e74(long *param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s9;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  plVar3 = param_1;
  func_0x0001081290c0();
  bVar2 = *(int *)((long)param_1 + 0x294) + -1 < 0;
  plVar4 = plVar3;
  fVar16 = 0.0;
  if (*(int *)((long)param_1 + 0x294) == 1) {
    fVar13 = *(float *)((long)plVar3 + 0x74);
    func_0x000108129178(fVar13,*(undefined4 *)((long)plVar3 + 0x6c));
    fVar16 = 0.0;
    if (!bVar2) {
      fVar16 = fVar13;
    }
  }
  uVar12 = param_1[6] - param_1[5] >> 3;
  if (param_1[6] - param_1[5] == 0) {
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar12) {
      func_0x00010bdb16e4();
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        ___dynamic_cast(param_2,&PTR_DAT_1107e3600,&PTR_DAT_110d7d8c0,0);
        if (param_2 != 0) {
          do {
            func_0x000108129230();
          } while (extraout_w10 != 0);
        }
      }
      *plVar4 = param_2;
      return;
    }
    lVar6 = uVar12 * 0x18;
    __Znwm();
    lVar7 = lVar6 + uVar12 * 0x18;
    for (lVar5 = 0; uVar12 * 0x18 - lVar5 != 0; lVar5 = lVar5 + 0x18) {
      puVar10 = (undefined8 *)(lVar6 + lVar5);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
    }
  }
  puVar1 = (undefined8 *)plVar3[0xb];
  for (puVar10 = (undefined8 *)plVar3[10]; puVar10 != puVar1; puVar10 = puVar10 + 5) {
    FUN_108128084(&lStack_98,puVar10[2]);
    if ((lStack_98 != 0) && (lVar5 = lStack_98, *(ulong *)(lStack_98 + 0x10) < uVar12)) {
      do {
        func_0x0001081290e8();
      } while (extraout_w11 != 0);
      uStack_a0 = puVar10[1];
      uStack_a8 = *puVar10;
      lVar8 = lVar6 + extraout_x8 * 0x18;
      uStack_b0 = lVar5;
      func_0x0001078d448c(lVar8,&uStack_b0);
      *(undefined8 *)(lVar8 + 0x10) = uStack_a0;
      *(undefined8 *)(lVar8 + 8) = uStack_a8;
      func_0x0001078d39e8(uStack_b0);
    }
    func_0x0001078d39e8(lStack_98);
  }
  pfVar11 = (float *)(lVar6 + 0xc);
  for (uVar9 = 0; uVar12 != uVar9; uVar9 = uVar9 + 1) {
    if (*(long *)(pfVar11 + -3) == 0) {
      func_0x0001081291b8();
      uStack_b0 = 0;
      uStack_a8 = 0;
    }
    else {
      fVar15 = pfVar11[-1];
      fVar17 = *pfVar11;
      fVar18 = pfVar11[1];
      fVar19 = pfVar11[2];
      func_0x0001081291b8();
      fVar13 = fVar15 / unaff_s9;
      fVar14 = fVar16 + fVar17 / unaff_s9;
      uStack_b0 = CONCAT44(fVar14,fVar13);
      uStack_a8 = CONCAT44(fVar14 + (fVar19 - fVar17) / unaff_s9,
                           fVar13 + (fVar18 - fVar15) / unaff_s9);
    }
    FUN_10811fa78(lStack_98,&uStack_b0);
    func_0x0001078bee50(lStack_98);
    pfVar11 = pfVar11 + 6;
  }
  if (lVar6 != 0) {
    while (lVar7 != lVar6) {
      lVar7 = lVar7 + -0x18;
      func_0x0001078d39c4(lVar7);
    }
    __ZdlPv(lVar6);
  }
  return;
}



/* Entry: 108128084; end: 1081280db;  */

void FUN_108128084(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    ___dynamic_cast(param_2,&PTR_DAT_1107e3600,&PTR_DAT_110d7d8c0,0);
    if (param_2 != 0) {
      do {
        func_0x000108129230();
      } while (extraout_w10 != 0);
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 1081280dc; end: 108128203;  */

void FUN_1081280dc(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,float *param_6,undefined8 param_7)

{
  uint uVar1;
  uint extraout_w8;
  uint extraout_w8_00;
  long unaff_x19;
  long *unaff_x20;
  float fVar2;
  undefined8 auStack_40 [2];
  
  func_0x0001081291d4();
  if (*(char *)(param_6 + 4) == '\x01') {
    uVar1 = *(uint *)(unaff_x19 + 0x48);
    *(uint *)(unaff_x19 + 0x48) = uVar1 & 0xffffff3f | 0x40;
    if (0.0 <= *param_6) {
      *(float *)(unaff_x19 + 0x40) = *param_6;
    }
    *(uint *)(unaff_x19 + 0x48) = uVar1 & 0xffffff33 | 0x40;
    fVar2 = param_6[1];
    if ((fVar2 <= 0.0) || (param_2 = param_6[2], param_2 <= 0.0)) goto LAB_1081281b4;
  }
  else {
    if (param_5 == 2) {
      func_0x000108129150();
      *(uint *)(unaff_x19 + 0x48) = extraout_w8_00 & 0xffffff3f;
      FUN_108115aac(param_2 * 0.5,param_2 + param_2);
      goto LAB_1081281b4;
    }
    if (param_5 != 1) {
      func_0x0001081291c8();
      func_0x000108113940();
      func_0x0001083420d8();
      func_0x000108341f64();
      func_0x000108341d8c(*(undefined8 *)(*unaff_x20 + 0xb8));
      return;
    }
    func_0x000108129150();
    if (0.0 <= param_2) {
      *(float *)(unaff_x19 + 0x40) = param_2;
    }
    *(uint *)(unaff_x19 + 0x48) = extraout_w8 & 0xffffff33 | 0x40;
    fVar2 = param_2 * 3.0;
    param_2 = param_2 + param_2;
  }
  FUN_108115a38(fVar2,param_2);
LAB_1081281b4:
  FUN_108128ed4(auStack_40,param_7);
  func_0x0001081291c8();
  func_0x000108113900();
  FUN_10837ca5c(auStack_40[0]);
  return;
}



/* Entry: 108128204; end: 10812821b;  */

/* WARNING: Removing unreachable block (ram,0x000108115f40) */
/* WARNING: Removing unreachable block (ram,0x000108115f44) */
/* WARNING: Removing unreachable block (ram,0x000108115f4c) */
/* WARNING: Removing unreachable block (ram,0x000108115f54) */
/* WARNING: Removing unreachable block (ram,0x000108115f58) */
/* WARNING: Removing unreachable block (ram,0x000108114ef0) */
/* WARNING: Removing unreachable block (ram,0x000108114ef4) */
/* WARNING: Removing unreachable block (ram,0x000108114efc) */
/* WARNING: Removing unreachable block (ram,0x000108114f04) */
/* WARNING: Removing unreachable block (ram,0x000108114f08) */

void FUN_108128204(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x0001080da3e4();
  if (*(long *)(param_1 + 0x2b8) == 0) {
    return;
  }
  func_0x0001081291d4();
  func_0x00010814025c(param_1 + 0x2c0,extraout_x8 + 0x68);
  if (*(long *)(unaff_x20 + 0x2c0) != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x2c0) + 0x10);
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
    func_0x000108114f18(unaff_x19 + 8,lVar4);
    return;
  }
  if (*(long *)(unaff_x20 + 0x2c8) == 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x2c8) + 0x10);
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
  func_0x000108114f18(unaff_x19 + 8,lVar4);
  return;
}



/* Entry: 10812821c; end: 108128257;  */

/* WARNING: Removing unreachable block (ram,0x000108115f40) */
/* WARNING: Removing unreachable block (ram,0x000108115f44) */
/* WARNING: Removing unreachable block (ram,0x000108115f4c) */
/* WARNING: Removing unreachable block (ram,0x000108115f54) */
/* WARNING: Removing unreachable block (ram,0x000108115f58) */
/* WARNING: Removing unreachable block (ram,0x000108114ef0) */
/* WARNING: Removing unreachable block (ram,0x000108114ef4) */
/* WARNING: Removing unreachable block (ram,0x000108114efc) */
/* WARNING: Removing unreachable block (ram,0x000108114f04) */
/* WARNING: Removing unreachable block (ram,0x000108114f08) */

void FUN_10812821c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  if (*(long *)(param_1 + 0x2b8) == 0) {
    return;
  }
  func_0x0001081291d4();
  func_0x00010814025c(param_1 + 0x2c0,extraout_x8 + 0x68);
  if (*(long *)(unaff_x20 + 0x2c0) != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x2c0) + 0x10);
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
    func_0x000108114f18(unaff_x19 + 8,lVar4);
    return;
  }
  if (*(long *)(unaff_x20 + 0x2c8) == 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x2c8) + 0x10);
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
  func_0x000108114f18(unaff_x19 + 8,lVar4);
  return;
}



/* Entry: 108128258; end: 10812825f;  */

void FUN_108128258(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined1 in_OV;
  long *plVar2;
  long lVar3;
  code *extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar4;
  undefined1 auStack_70 [8];
  int iStack_68;
  long lStack_58;
  
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
          func_0x00010834225c(*(undefined8 *)(*unaff_x21 + 0xf0));
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



/* Entry: 108128260; end: 1081283c7;  */

void FUN_108128260(long *param_1,long *param_2)

{
  undefined8 uStack_28;
  
  if ((param_1[0x49] == *param_2) && (param_1[0x4a] == 0)) {
    return;
  }
  func_0x0001003b1eb0(param_1 + 0x49);
  func_0x00010811cb34(param_1 + 0x4a,0);
  if (param_1[0x57] != 0) {
    FUN_1081287a0(param_1 + 0x57,0);
    if (param_1[0x4b] != 0) {
      uStack_28 = 0;
      func_0x00010813ab24(param_1[0x4b] + 0x130,&uStack_28);
      FUN_108129078(uStack_28);
    }
    (**(code **)(*param_1 + 0x30))(param_1,param_1);
    func_0x000108129194();
  }
  return;
}



/* Entry: 1081283c8; end: 1081284bf;  */

void FUN_1081283c8(long param_1,code *UNRECOVERED_JUMPTABLE,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = param_1 + 0x2c0;
  func_0x0001081404dc(lVar2,1);
  if ((int)lVar2 != 0) {
    func_0x000108129194();
  }
  uVar3 = param_1 + 0x2c0;
  if (*param_3 == param_3[1]) {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    func_0x0001081404dc();
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  else {
    func_0x0001081402bc(uVar3,UNRECOVERED_JUMPTABLE,param_3,param_4);
    iVar1 = (int)param_1 + 0x2c0;
    func_0x000108140524();
    if (iVar1 == 0) {
      return;
    }
  }
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1081284c0; end: 1081284e7;  */

void FUN_1081284c0(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  func_0x0001081404b4(param_1 + 0x2c0);
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1081284e8; end: 10812852f;  */

void FUN_1081284e8(long *param_1,int param_2)

{
  undefined8 uStack_28;
  
  if ((int)param_1[0x4c] == param_2) {
    return;
  }
  *(int *)(param_1 + 0x4c) = param_2;
  if (param_1[0x57] != 0) {
    FUN_1081287a0(param_1 + 0x57,0);
    if (param_1[0x4b] != 0) {
      uStack_28 = 0;
      func_0x00010813ab24(param_1[0x4b] + 0x130,&uStack_28);
      FUN_108129078(uStack_28);
    }
    (**(code **)(*param_1 + 0x30))(param_1,param_1);
    func_0x000108129194();
  }
  return;
}



/* Entry: 108128530; end: 108128583;  */

void FUN_108128530(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_1 + 0x4d;
  FUN_108128584();
  if ((int)plVar1 != 0) {
    lVar3 = param_2[1];
    lVar2 = *param_2;
    *(char *)(param_1 + 0x4f) = (char)param_2[2];
    param_1[0x4e] = lVar3;
    param_1[0x4d] = lVar2;
    if (param_1[0x57] != 0) {
      FUN_1081287a0(param_1 + 0x57,0);
      if (param_1[0x4b] != 0) {
        func_0x00010813ab24(param_1[0x4b] + 0x130,&stack0xffffffffffffffd8);
        FUN_108129078(0);
      }
      (**(code **)(*param_1 + 0x30))(param_1,param_1);
      func_0x000108129194();
    }
    return;
  }
  return;
}



/* Entry: 108128584; end: 1081285bf;  */

uint FUN_108128584(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 != *(char *)(param_2 + 0x10) || cVar1 == '\0') {
    return (uint)(cVar1 != *(char *)(param_2 + 0x10));
  }
  FUN_108128f3c();
  return (uint)param_1 ^ 1;
}



/* Entry: 1081285c0; end: 108128617;  */

void FUN_1081285c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = (undefined8 *)(param_5 + 0x27c);
  puVar2 = puVar1;
  uStack_34 = param_6;
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_108128618(puVar1,&uStack_34);
  if (((ulong)puVar2 & 1) == 0) {
    *(ulong *)(param_5 + 0x284) = CONCAT44(uStack_28,uStack_2c);
    *puVar1 = CONCAT44(uStack_30,uStack_34);
    *(undefined4 *)(param_5 + 0x28c) = uStack_24;
    func_0x000108129194();
  }
  return;
}



/* Entry: 108128618; end: 108128683;  */

bool FUN_108128618(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && ((float)param_1[1] == (float)param_2[1])) &&
      ((float)param_1[2] == (float)param_2[2])) && ((float)param_1[3] == (float)param_2[3])) {
    return (float)param_1[4] == (float)param_2[4];
  }
  return false;
}



/* Entry: 108128684; end: 1081286bf;  */

void FUN_108128684(long *param_1,long *param_2)

{
  undefined8 uStack_28;
  
  if (param_1[0x3e] != *param_2) {
    func_0x0001078d387c(param_1 + 0x3e);
    if (param_1[0x57] != 0) {
      FUN_1081287a0(param_1 + 0x57,0);
      if (param_1[0x4b] != 0) {
        uStack_28 = 0;
        func_0x00010813ab24(param_1[0x4b] + 0x130,&uStack_28);
        FUN_108129078(uStack_28);
      }
      (**(code **)(*param_1 + 0x30))(param_1,param_1);
      func_0x000108129194();
    }
    return;
  }
  return;
}



/* Entry: 1081286c0; end: 10812879f;  */

void FUN_1081286c0(long *param_1,int param_2)

{
  undefined8 uStack_28;
  
  if ((int)param_1[0x53] == param_2) {
    return;
  }
  *(int *)(param_1 + 0x53) = param_2;
  if (param_1[0x57] != 0) {
    FUN_1081287a0(param_1 + 0x57,0);
    if (param_1[0x4b] != 0) {
      uStack_28 = 0;
      func_0x00010813ab24(param_1[0x4b] + 0x130,&uStack_28);
      FUN_108129078(uStack_28);
    }
    (**(code **)(*param_1 + 0x30))(param_1,param_1);
    func_0x000108129194();
  }
  return;
}



/* Entry: 1081287a0; end: 108128807;  */

long * FUN_1081287a0(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (*param_1 != param_2) {
    if (param_2 != 0) {
      do {
        func_0x000108129230();
      } while (extraout_w10 != 0);
    }
    *param_1 = param_2;
    func_0x000108129078();
  }
  return param_1;
}



/* Entry: 108128808; end: 10812892b;  */

void FUN_108128808(long *param_1)

{
  int in_w6;
  double in_d3;
  double dVar1;
  uint in_stack_00000000;
  
  if ((in_w6 == 1) && ((in_stack_00000000 & 0x100) != 0)) {
    dVar1 = 1.0;
    while( true ) {
      func_0x00010812912c();
      func_0x0001081290f8();
      func_0x0001081291ec();
      if ((dVar1 <= in_d3) || ((*(byte *)(*param_1 + 0x18) & 1) != 0)) break;
      dVar1 = dVar1 - (1.0 - in_d3) * 0.125;
      if (dVar1 <= in_d3) {
        dVar1 = in_d3;
      }
      FUN_108129054(param_1);
    }
  }
  else {
    func_0x00010812912c();
    func_0x0001081290f8();
    func_0x0001081291ec();
  }
  return;
}



/* Entry: 10812892c; end: 10812892f;  */

void FUN_10812892c(long *param_1)

{
  undefined8 uStack_28;
  
  if (param_1[0x57] != 0) {
    FUN_1081287a0(param_1 + 0x57,0);
    if (param_1[0x4b] != 0) {
      uStack_28 = 0;
      func_0x00010813ab24(param_1[0x4b] + 0x130,&uStack_28);
      FUN_108129078(uStack_28);
    }
    (**(code **)(*param_1 + 0x30))(param_1,param_1);
    func_0x000108129194();
  }
  return;
}



/* Entry: 108128930; end: 1081289b3;  */

undefined1  [16] FUN_108128930(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long lStack_28;
  
  FUN_108128808(&lStack_28);
  func_0x0001078c2250(lStack_28 + 0x68);
  FUN_108129078(lStack_28);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1081289b4; end: 108128e7b;  */

undefined **
FUN_1081289b4(undefined8 param_1,undefined8 param_2,ulong param_3,double param_4,double param_5,
             undefined8 param_6,float param_7,long *param_8,long *param_9,long *param_10,
             undefined **param_11,undefined4 param_12,undefined8 param_13,undefined8 param_14,
             undefined8 param_15,undefined4 param_16,undefined4 param_17,long *param_18,
             double *param_19)

{
  double *pdVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined **ppuVar5;
  long lVar6;
  long *extraout_x8;
  long *plVar7;
  double extraout_x8_00;
  long lVar8;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar9;
  undefined4 uVar10;
  ulong unaff_x21;
  long *plVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  ulong uVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined *unaff_d13;
  long unaff_d14;
  undefined4 uStack_24c;
  ulong uStack_240;
  long lStack_238;
  undefined *puStack_230;
  double dStack_228;
  undefined4 uStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  long *plStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  long lStack_1d8;
  undefined *apuStack_1d0 [29];
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  
  uStack_b0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_108130040(param_2,param_3,param_6,apuStack_1d0,param_11,param_13,param_14,param_18,
                (undefined1)param_16,0);
  lStack_1d8 = *param_10;
  if (lStack_1d8 == 0) {
    lStack_1d8 = 0;
    if (*param_18 != 0) {
      FUN_10812c928(&uStack_e8);
      in_ZR = uStack_e8 == 4.94065645841247e-324;
      if ((bool)in_ZR) {
        param_11 = &puStack_e0;
        func_0x0001078d4460(&lStack_1d8);
      }
      func_0x000107807ab8(&uStack_e8);
    }
  }
  else if (*(long *)(lStack_1d8 + 0x10) != 0) {
    plVar11 = (long *)(*(long *)(lStack_1d8 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = *param_9;
  fVar18 = (float)param_6;
  if (lVar6 == 0) {
    lVar6 = *param_8;
    if (((lVar6 != 0) && (*(uint *)(lVar6 + 0xc) != 0)) && (lStack_1d8 != 0)) {
      param_5 = param_5 * (double)fVar18;
      if (param_16._1_1_ != '\0') {
        in_ZR = *(char *)(lStack_1d8 + 0x60) == '\x01';
        if ((bool)in_ZR) {
          param_5 = param_5 * (double)param_7;
        }
      }
      puStack_230 = (undefined *)(lVar6 + 0x18);
      dStack_228 = (double)(ulong)*(uint *)(lVar6 + 0xc);
      FUN_1081295e4(&puStack_208,param_5);
      lStack_238 = 0;
      uStack_e8 = (double)((ulong)uStack_e8 & 0xffffffffffffff00);
      uStack_b8 = 0;
      dStack_1e8 = param_19[1];
      dStack_1f0 = *param_19;
      dStack_1e0 = (double)CONCAT44(dStack_1e0._4_4_,*(undefined4 *)(param_19 + 2));
      param_11 = &puStack_230;
      FUN_108130c50(param_4,apuStack_1d0,param_11,&puStack_208,param_15,param_12,&lStack_238,0,
                    &uStack_e8,&dStack_1f0,0,0,0);
      if (lStack_238 != 0) {
        func_0x0001081290ac();
      }
      func_0x000107807aac(puStack_208);
    }
  }
  else {
    param_5 = param_5 * (double)fVar18;
    dVar16 = (double)param_7;
    dVar20 = param_5 * dVar16;
    for (uVar9 = 0; in_ZR = uVar9 == *(ulong *)(lVar6 + 0x18), uVar9 < *(ulong *)(lVar6 + 0x18);
        uVar9 = uVar9 + 1) {
      plVar11 = (long *)(*(long *)(lVar6 + 0x10) + uVar9 * 0xb0);
      lVar6 = lStack_1d8;
      if (plVar11[1] != 0) {
        lVar6 = plVar11[1];
      }
      if (lVar6 != 0) {
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar7 = (long *)(*(long *)(lVar6 + 0x10) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        dVar19 = param_5;
        if ((param_16._1_1_ != '\0') && (dVar19 = dVar20, *(char *)(lVar6 + 0x60) == '\0')) {
          dVar19 = param_5;
        }
        uVar2 = param_12;
        if (*(char *)((long)plVar11 + 0x54) == '\x01') {
          uVar2 = (undefined4)plVar11[10];
        }
        if (*(char *)((long)plVar11 + 0x1c) == '\x01') {
          unaff_d13 = (undefined *)0x0;
          unaff_d14 = 0;
          if ((char)plVar11[6] == '\x01') {
            unaff_d13 = (undefined *)plVar11[4];
            unaff_d14 = plVar11[5];
          }
          uVar12 = (undefined1)plVar11[3];
          uStack_24c = *(undefined4 *)((long)plVar11 + 0x19);
          uStack_e8 = 0.0;
          puStack_e0 = (undefined *)0x0;
          uVar13 = 1;
          lStack_d8 = CONCAT35((int3)((ulong)lStack_d8 >> 0x28),0x100000000);
          pdVar1 = (double *)((long)plVar11 + 0x34);
          if (*(char *)((long)plVar11 + 0x4c) == '\0') {
            pdVar1 = (double *)&uStack_e8;
          }
          dStack_1e8 = pdVar1[1];
          dVar16 = *pdVar1;
          dStack_1e0 = pdVar1[2];
          dStack_1f0 = dVar16;
        }
        else {
          uVar12 = 0;
          uVar13 = 0;
        }
        plVar7 = (long *)0x0;
        if (plVar11[0x15] != 0) {
          do {
            func_0x0001081290e8();
            plVar7 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        uVar14 = 0;
        plStack_1f8 = plVar7;
        if (plVar11[0x14] == 0) {
          uVar10 = 0;
          uStack_240 = uStack_240 & 0xffffffffffffff00;
        }
        else {
          do {
            func_0x0001081290e8();
            fVar17 = (float)param_3;
            fVar15 = SUB84(dVar16,0);
          } while (extraout_w11_00 != 0);
          uStack_e8 = extraout_x8_00;
          func_0x0001008d6514(&plStack_1f8,&uStack_e8);
          if (uStack_e8 != 0.0) {
            func_0x0001081290ac();
          }
          (**(code **)(*(long *)plVar11[0x14] + 0x20))();
          param_3 = (ulong)(uint)(fVar18 * fVar17);
          uVar14 = 1;
          uStack_240 = CONCAT44(fVar18 * fVar17,fVar18 * fVar15);
          uVar10 = *(undefined4 *)(plVar11[0x14] + 0x18);
        }
        lVar8 = *plVar11;
        if (lVar8 == 0) {
          puStack_208 = &UNK_10f7d0ef0;
          uStack_200 = 0;
        }
        else {
          puStack_208 = (undefined *)(lVar8 + 0x18);
          uStack_200 = (ulong)*(uint *)(lVar8 + 0xc);
        }
        FUN_1081295e4(&uStack_210,dVar19,lVar6);
        plVar7 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        }
        plStack_218 = plVar7;
        uStack_e8._0_5_ = CONCAT41(uStack_24c,uVar12);
        dStack_c8 = dStack_1e8;
        dStack_d0 = dStack_1f0;
        dStack_c0 = dStack_1e0;
        dStack_228 = param_19[1];
        puStack_230 = (undefined *)*param_19;
        uStack_220 = *(undefined4 *)(param_19 + 2);
        unaff_x21 = unaff_x21 & 0xffffffff00000000 | uVar14;
        param_11 = &puStack_208;
        dVar16 = param_4;
        puStack_e0 = unaff_d13;
        lStack_d8 = unaff_d14;
        uStack_b8 = uVar13;
        FUN_108130c50(apuStack_1d0,param_11,&uStack_210,param_15,uVar2,&plStack_218,plVar11[2],
                      &uStack_e8,&puStack_230,uStack_240,unaff_x21,uVar10);
        if (plStack_218 != (long *)0x0) {
          func_0x0001081290ac();
        }
        func_0x000107807aac(uStack_210);
        if (plStack_1f8 != (long *)0x0) {
          func_0x0001081290ac();
        }
      }
      func_0x000107807aac(lVar6);
      lVar6 = *param_9;
    }
  }
  FUN_1081317ec(param_1,apuStack_1d0);
  func_0x000107807aac(lStack_1d8);
  ppuVar5 = apuStack_1d0;
  func_0x0001081300e0();
  func_0x000108129240(uStack_b0);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (ppuVar5 != param_11) {
      func_0x000108129254();
      FUN_108120b0c();
    }
    return ppuVar5;
  }
  return ppuVar5;
}



/* Entry: 108128e7c; end: 108128ed3;  */

long FUN_108128e7c(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x000108129254();
    FUN_108120b0c();
  }
  return param_1;
}



/* Entry: 108128ed4; end: 108128f23;  */

undefined8 FUN_108128ed4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 unaff_s8;
  float fVar2;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  FUN_108376ad8();
  fVar2 = (float)param_2[1] + ((float)param_2[3] - (float)param_2[1]) * 0.5;
  func_0x000108377934(*param_2,fVar2);
  func_0x00010837cf24(param_2[2],fVar2);
  FUN_108377cd4();
  puVar1 = auStack_38;
  func_0x00010837ca9c();
  func_0x00010837cee4();
  FUN_10837e8b4();
  *puVar1 = unaff_s9;
  puVar1[1] = unaff_s8;
  func_0x00010837cb1c();
  return param_1;
}



/* Entry: 108128f24; end: 108128f3b;  */

uint FUN_108128f24(uint param_1)

{
  FUN_108128f3c();
  return param_1 ^ 1;
}



/* Entry: 108128f3c; end: 108128f7f;  */

bool FUN_108128f3c(float *param_1,float *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}



/* Entry: 108128f80; end: 108128f9b;  */

void FUN_108128f80(long param_1)

{
  FUN_108128f9c();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 108128f9c; end: 10812902f;  */

undefined8 * FUN_108128f9c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0x1a;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  func_0x00010bd3f3dc(param_1 + 7,param_2,0x1a);
  func_0x00010b9a7630(param_1);
  return param_1;
}



/* Entry: 108129030; end: 108129053;  */

void FUN_108129030(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108129224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108129054; end: 108129077;  */

undefined8 * FUN_108129054(undefined8 *param_1)

{
  FUN_108129078(*param_1);
  return param_1;
}



/* Entry: 108129078; end: 108129267;  */

void FUN_108129078(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108129224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108129268; end: 10812949b;  */

undefined8 *
FUN_108129268(undefined4 param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_2 = &PTR_DAT_110a25f30;
  param_2[1] = 1;
  lVar4 = *param_3;
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
  param_2[2] = lVar4;
  *(undefined1 *)(param_2 + 3) = 1;
  *(undefined4 *)((long)param_2 + 0x1c) = param_1;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  uVar6 = param_4[1];
  uVar5 = *param_4;
  uVar7 = param_4[2];
  param_2[8] = param_4[3];
  param_2[7] = uVar7;
  param_2[6] = uVar6;
  param_2[5] = uVar5;
  plVar1 = (long *)(param_5 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_2[9] = param_5;
  FUN_10835515c();
  func_0x0001081405c4();
  return param_2;
}



/* Entry: 10812949c; end: 10812956b;  */

undefined8 *
FUN_10812949c(float param_1,double param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined1 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lStack_38;
  
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = &PTR_FUN_110a25ff0;
  uVar4 = *param_5;
  param_3[3] = *param_4;
  *param_4 = 0;
  param_3[4] = uVar4;
  *param_5 = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  lStack_38 = *(long *)(param_3[4] + 0x58);
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
  FUN_1083501dc((float)(param_2 * (double)param_1),param_3 + 7,&lStack_38);
  func_0x0001081298a0(&lStack_38);
  *(float *)(param_3 + 10) = param_1;
  param_3[0xb] = param_2;
  *(undefined1 *)(param_3 + 0xc) = param_6;
  *(undefined8 *)((long)param_3 + 100) = 0;
  *(undefined8 *)((long)param_3 + 0x74) = 0;
  *(undefined8 *)((long)param_3 + 0x6c) = 0;
  *(undefined8 *)((long)param_3 + 0x7a) = 0;
  *(undefined1 *)((long)param_3 + 0x4d) = 1;
  return param_3;
}



/* Entry: 10812956c; end: 1081295cb;  */

undefined8 * FUN_10812956c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a25ff0;
  func_0x0001081298a0(param_1 + 7);
  func_0x00010812e700(param_1 + 6);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 0x18))();
  }
  func_0x000107807adc(param_1 + 4);
  FUN_1081298e8(param_1[3]);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1081295cc; end: 1081295cf;  */

undefined8 * FUN_1081295cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a25ff0;
  func_0x0001081298a0(param_1 + 7);
  func_0x00010812e700(param_1 + 6);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 0x18))();
  }
  func_0x000107807adc(param_1 + 4);
  FUN_1081298e8(param_1[3]);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1081295d0; end: 1081295e3;  */

void FUN_1081295d0(void)

{
  FUN_10812956c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081295e4; end: 1081296d3;  */

void FUN_1081295e4(long *param_1,double param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_38;
  long lStack_30;
  double dStack_28;
  
  dStack_28 = param_2;
  if (*(double *)(param_3 + 0x58) == param_2) {
    FUN_1080fa694();
    *param_1 = param_3;
  }
  else {
    lStack_30 = *(long *)(param_3 + 0x18);
    if ((lStack_30 != 0) && (*(long *)(lStack_30 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_30 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_38 = *(long *)(param_3 + 0x20);
    if (lStack_38 != 0) {
      plVar1 = (long *)(lStack_38 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000108129698(param_1,&lStack_30,&lStack_38,param_3 + 0x50,&dStack_28,param_3 + 0x60);
    func_0x000107807b00(lStack_38);
    FUN_1081298e8(lStack_30);
  }
  return;
}



/* Entry: 1081296d4; end: 1081296df;  */

/* WARNING: Removing unreachable block (ram,0x0001003a916c) */

void FUN_1081296d4(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  param_3 = param_3 & 0xffffff;
  lVar1 = *(long *)(param_2 + 0x20);
  if (((((uint)*(byte *)(lVar1 + 0x70) == ((uint)param_3 & 0xff)) &&
       ((uint)*(byte *)(lVar1 + 0x71) == ((uint)param_3 >> 8 & 0xff))) &&
      ((uint)*(byte *)(lVar1 + 0x72) == (uint)(param_3 >> 0x10))) &&
     (*(float *)(param_2 + 0x50) == *(float *)(param_2 + 0x50))) {
    FUN_1080fa694();
    *param_1 = 1;
    param_1[1] = param_2;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108129778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x18) + 0x30))
            (param_1,*(float *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
             *(long **)(param_2 + 0x18),(long *)(param_2 + 0x20),param_3,
             *(undefined1 *)(param_2 + 0x60));
  return;
}



/* Entry: 1081296e0; end: 1081298e7;  */

/* WARNING: Removing unreachable block (ram,0x0001003a916c) */

void FUN_1081296e0(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x20);
  if (((((uint)*(byte *)(lVar1 + 0x70) == ((uint)param_4 & 0xff)) &&
       ((uint)*(byte *)(lVar1 + 0x71) == ((uint)param_4 >> 8 & 0xff))) &&
      ((uint)*(byte *)(lVar1 + 0x72) == ((uint)(param_4 >> 0x10) & 0xff))) &&
     (*(float *)(param_3 + 0x50) == (float)param_2)) {
    FUN_1080fa694();
    *param_1 = 1;
    param_1[1] = param_3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108129778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_3 + 0x18) + 0x30))
            (param_1,param_2,*(undefined8 *)(param_3 + 0x58),*(long **)(param_3 + 0x18),
             (long *)(param_3 + 0x20),param_4 & 0xffffff,*(undefined1 *)(param_3 + 0x60));
  return;
}



/* Entry: 1081298e8; end: 1081298f3;  */

void FUN_1081298e8(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1081298f4; end: 108129927;  */

void FUN_1081298f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_11;
  
  FUN_108129928(&uStack_11,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 108129928; end: 1081299c3;  */

void FUN_108129928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  
  puVar5 = auStack_60;
  func_0x000108129b5c();
  FUN_1081299e0(auStack_60,1);
  FUN_108129a34(lStack_50,param_3,param_4,param_5,param_6,param_7);
  lVar6 = lStack_50;
  lStack_50 = 0;
  FUN_1081299c4(param_1,lVar6 + 0x18);
  func_0x000108129b20();
  func_0x000108129b38();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_68 = FUN_1081299c4;
    lStack_78 = extraout_x8[1];
    if (lStack_78 != 0) {
      plVar1 = (long *)(lStack_78 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_80 = puVar5;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x0001003a8180(puVar2,&puStack_80);
    func_0x0001003a824c(&puStack_80);
    return;
  }
  return;
}



/* Entry: 1081299c4; end: 1081299df;  */

void FUN_1081299c4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x0001003a8180(lVar2,&lStack_20);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1081299e0; end: 108129a07;  */

long FUN_1081299e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108129a08();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108129a08; end: 108129a33;  */

undefined8 * FUN_108129a08(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x19999999999999a) {
    puVar1 = (undefined8 *)(param_2 * 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a26048;
  param_1[1] = 0;
  func_0x000108129a90(param_1 + 3);
  return param_1;
}



/* Entry: 108129a34; end: 108129a67;  */

undefined8 * FUN_108129a34(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a26048;
  param_1[1] = 0;
  func_0x000108129a90(param_1 + 3);
  return param_1;
}



/* Entry: 108129a68; end: 108129a6b;  */

void FUN_108129a68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a26048;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108129a6c; end: 108129a7f;  */

void FUN_108129a6c(void)

{
  func_0x000108129aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108129a80; end: 108129ab3;  */

void FUN_108129a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108129a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108129ab4; end: 108129b1f;  */

void FUN_108129ab4(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 108129b20; end: 108129b6f;  */

void FUN_108129b20(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108129b70; end: 108129b9f;  */

undefined8 * FUN_108129b70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a26098;
  func_0x0001003a8c94(param_1 + 2);
  return param_1;
}



/* Entry: 108129ba0; end: 108129bf7;  */

void FUN_108129ba0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110a26098;
  param_1[1] = 1;
  lVar4 = *param_3;
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
  *param_1 = &PTR_FUN_110a260e8;
  param_1[2] = lVar4;
  param_1[3] = param_2;
  param_1[9] = 0;
  param_1[4] = &UNK_10dd5b8b0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 108129bf8; end: 108129c83;  */

undefined8 * FUN_108129bf8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110a260e8;
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(param_1[4] + lVar2)) {
        func_0x00010812a7d8(param_1[5] + lVar3);
        lVar1 = param_1[7];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    param_1[9] = 0;
    param_1[4] = &UNK_10dd5b8b0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  *param_1 = &PTR_DAT_110a26098;
  func_0x0001003a8c94(param_1 + 2);
  return param_1;
}



/* Entry: 108129c84; end: 108129c87;  */

undefined8 * FUN_108129c84(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110a260e8;
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(param_1[4] + lVar2)) {
        func_0x00010812a7d8(param_1[5] + lVar3);
        lVar1 = param_1[7];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    param_1[9] = 0;
    param_1[4] = &UNK_10dd5b8b0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  *param_1 = &PTR_DAT_110a26098;
  func_0x0001003a8c94(param_1 + 2);
  return param_1;
}



/* Entry: 108129c88; end: 108129c9b;  */

void FUN_108129c88(void)

{
  FUN_108129bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108129c9c; end: 108129cd7;  */

void FUN_108129c9c(long param_1,undefined4 param_2)

{
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  uStack_24 = (undefined2)param_2;
  uStack_22 = (undefined1)((uint)param_2 >> 0x10);
  FUN_108129cd8(param_1 + 0x20,&uStack_24);
  FUN_108129d00();
  return;
}



/* Entry: 108129cd8; end: 108129cff;  */

long FUN_108129cd8(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10812a134(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 108129d00; end: 108129d43;  */

long * FUN_108129d00(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010812a814();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    func_0x0001080fe800();
  }
  return param_1;
}



/* Entry: 108129d44; end: 108129d6b;  */

undefined1  [16] FUN_108129d44(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10812a754(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 108129d6c; end: 108129dd7;  */

undefined2 * FUN_108129d6c(undefined2 *param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (*(char *)(param_1 + 8) == '\x01') {
    if (param_1 != param_2) {
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_2 + 4) = 0;
      uVar2 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_1 + 4) = uVar3;
      func_0x0001080fe800(uVar2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return param_1;
}



/* Entry: 108129dd8; end: 108129e07;  */

uint FUN_108129dd8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 >> 8 & 0xff) - ((uint)((ulong)param_1 >> 8) & 0xff);
  uVar1 = uVar2 - 0xb;
  if ((uVar2 & 0x80000000) == 0) {
    uVar1 = uVar2 + 0xb;
  }
  if (((uint)param_1 >> 0x10 & 0xff) != (param_2 >> 0x10 & 0xff)) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108129e08; end: 10812a133;  */

/* WARNING: Possible PIC construction at 0x000108129f20: Changing call to branch */

void FUN_108129e08(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong *puVar6;
  long *plVar7;
  uint3 *puVar8;
  long lVar9;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long *extraout_x8_04;
  ulong uVar10;
  undefined8 extraout_x8_05;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined1 uVar14;
  ulong uVar15;
  undefined8 *extraout_x12;
  ulong uVar16;
  long *unaff_x22;
  long *plVar17;
  ulong *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  uint uVar18;
  undefined1 auStack_a0 [8];
  long *plStack_98;
  ulong *puStack_90;
  long *plStack_88;
  byte bStack_80;
  ulong *puStack_70;
  uint3 *puStack_68;
  
LAB_108129e38:
  if (*(long *)(param_2 + 0x30) == 0) {
    *param_1 = 0;
    return;
  }
  puStack_90 = (ulong *)((ulong)puStack_90 & 0xffffffffffffff00);
  bStack_80 = 0;
  puVar6 = *(ulong **)(param_2 + 0x20);
  puVar8 = *(uint3 **)(param_2 + 0x28);
  FUN_108129d44();
  lVar9 = *(long *)(param_2 + 0x20);
  lVar12 = *(long *)(param_2 + 0x38);
  plVar17 = unaff_x22;
  puStack_70 = puVar6;
  puStack_68 = puVar8;
  while( true ) {
    puVar8 = puStack_68;
    unaff_x22 = plStack_88;
    if (puStack_70 == (ulong *)(lVar9 + lVar12)) goto LAB_108129f58;
    if ((bStack_80 & 1) == 0) break;
    unaff_x25 = unaff_x25 & 0xffffffffff000000 | param_4 & 0xffffff;
    unaff_x24 = (long *)((ulong)unaff_x24 & 0xffffffffff000000 | (ulong)puStack_90 & 0xffffff);
    uVar15 = unaff_x25;
    FUN_108129dd8(unaff_x25,unaff_x24);
    plVar17 = (long *)((ulong)plVar17 & 0xffffffffff000000 | param_4 & 0xffffff);
    unaff_x23 = (ulong *)((ulong)unaff_x23 & 0xffffffffff000000 | (ulong)*puVar8);
    plVar7 = plVar17;
    FUN_108129dd8(plVar17,unaff_x23);
    uVar18 = (uint)uVar15;
    uVar1 = -uVar18;
    if (-1 < (int)uVar18) {
      uVar1 = uVar18;
    }
    uVar5 = (uint)plVar7;
    uVar2 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar2 = uVar5;
    }
    if (uVar2 < uVar1) {
      FUN_10812a7fc();
      plStack_98 = (long *)0x0;
      if (extraout_x8 != 0) {
        do {
          func_0x00010812a814();
          plStack_98 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      goto LAB_108129f0c;
    }
    if ((int)uVar5 < (int)uVar18 && uVar2 == uVar1) {
      FUN_10812a7fc();
      plStack_98 = (long *)0x0;
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010812a814();
          plStack_98 = extraout_x8_04;
        } while (extraout_w11_01 != 0);
      }
      goto LAB_108129f0c;
    }
    func_0x00010812a7a4(&puStack_70);
  }
  FUN_10812a7fc();
  plStack_98 = (long *)0x0;
  if (extraout_x8_01 != 0) {
    do {
      func_0x00010812a814();
      plStack_98 = extraout_x8_02;
    } while (extraout_w11_00 != 0);
  }
LAB_108129f0c:
  FUN_108129d6c(&puStack_90,auStack_a0);
  unaff_x22 = plStack_98;
  goto SUB_1080fe800;
LAB_108129f58:
  if ((bStack_80 & 1) == 0) {
    unaff_x22 = (long *)0x0;
  }
  else if (plStack_88 != (long *)0x0) {
    plVar17 = plStack_88;
    func_0x00010812f3bc(plStack_88,param_3);
    if (*plVar17 == 1) {
      uVar11 = 0;
      if (plVar17[1] != 0) {
        do {
          func_0x00010812a814();
          uVar11 = extraout_x8_05;
          param_1 = extraout_x12;
        } while (extraout_w11_02 != 0);
      }
      goto LAB_10812a10c;
    }
    puVar6 = *(ulong **)(param_2 + 0x20);
    plVar17 = *(long **)(param_2 + 0x28);
    FUN_108129d44();
    puStack_70 = puVar6;
    puStack_68 = (uint3 *)plVar17;
    while (unaff_x23 = puStack_70,
          puStack_70 != (ulong *)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x38))) {
      unaff_x24 = (long *)((long)puStack_68 + 8);
      if ((long *)*unaff_x24 == unaff_x22) {
        plStack_88 = (long *)puStack_68;
        puStack_90 = puStack_70;
        func_0x00010812a7a4(&puStack_90);
        func_0x00010812a7d8(unaff_x24);
        uVar10 = 0;
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + -1;
        puVar13 = (undefined1 *)((long)unaff_x23 + (-8 - *(long *)(param_2 + 0x20)));
        uVar15 = *(ulong *)(*(long *)(param_2 + 0x20) +
                           ((ulong)puVar13 & *(ulong *)(param_2 + 0x38)));
        uVar14 = 0xfe;
        uVar15 = uVar15 & ~uVar15 << 6 & 0x8080808080808080;
        if ((uVar15 != 0) &&
           (uVar16 = *unaff_x23 & ~*unaff_x23 << 6 & 0x8080808080808080, uVar16 != 0)) {
          uVar16 = uVar16 >> 7;
          uVar10 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          bVar4 = (int)((ulong)LZCOUNT(uVar15) >> 3) +
                  ((uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) < 8;
          uVar10 = (ulong)bVar4;
          uVar14 = 0x80;
          if (!bVar4) {
            uVar14 = 0xfe;
          }
        }
        *(undefined1 *)unaff_x23 = uVar14;
        *(undefined1 *)
         (*(long *)(param_2 + 0x20) + (*(ulong *)(param_2 + 0x38) & 7) +
          (*(ulong *)(param_2 + 0x38) & (ulong)puVar13) + 1) = uVar14;
        *(ulong *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + uVar10;
        puStack_68 = (uint3 *)plStack_88;
        puStack_70 = puStack_90;
      }
      else {
        func_0x00010812a7a4(&puStack_70);
      }
    }
    plVar17 = unaff_x22 + 1;
    do {
      lVar9 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*unaff_x22 + 8))(unaff_x22);
    }
    goto LAB_108129e38;
  }
  uVar11 = 0;
LAB_10812a10c:
  *param_1 = uVar11;
SUB_1080fe800:
  if (unaff_x22 != (long *)0x0) {
    plVar17 = unaff_x22 + 1;
    do {
      lVar9 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080fe8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x22 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10812a134; end: 10812a1c7;  */

void FUN_10812a134(long *param_1,long *param_2,undefined2 *param_3)

{
  long lVar1;
  undefined2 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uVar5;
  undefined2 *puVar6;
  undefined1 extraout_w8;
  long extraout_x9;
  long extraout_x10;
  long extraout_x11;
  
  plVar3 = param_2;
  FUN_10812a1c8();
  plVar4 = param_2;
  puVar6 = param_3;
  FUN_10812a1ec(param_2,param_3,plVar3);
  uVar5 = SUB81(puVar6,0);
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = (undefined2 *)(param_2[1] + (long)plVar4 * 0x10);
    uVar2 = *param_3;
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_3 + 1);
    *puVar6 = uVar2;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(byte *)(*param_2 + (long)plVar4) = (byte)plVar3 & 0x7f;
    func_0x00010812a82c();
    *(undefined1 *)(extraout_x9 + extraout_x10 + extraout_x11 + 1) = extraout_w8;
  }
  lVar1 = param_2[1];
  *param_1 = *param_2 + (long)plVar4;
  param_1[1] = lVar1 + (long)plVar4 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar5;
  return;
}



/* Entry: 10812a1c8; end: 10812a1eb;  */

void FUN_10812a1c8(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10812a2fc(&lStack_18);
  return;
}



/* Entry: 10812a1ec; end: 10812a2fb;  */

undefined1  [16] FUN_10812a1ec(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  lVar7 = 0;
  uVar3 = param_3 >> 7;
  uVar9 = param_1[3];
  lVar5 = *param_1;
  while( true ) {
    uVar3 = uVar3 & uVar9;
    uVar6 = *(ulong *)(lVar5 + uVar3);
    uVar4 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar4 = uVar4 + 0xfefefefefefefeff & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      plVar8 = (long *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar9);
      uVar1 = param_1[1] + (long)plVar8 * 0x10;
      FUN_10812e3b0(uVar1,param_2);
      if ((uVar1 & 1) != 0) {
        uVar2 = 0;
        goto LAB_10812a2c4;
      }
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar3 = lVar7 + uVar3;
  }
  FUN_10812a31c(param_1,param_3);
  uVar2 = 1;
  plVar8 = param_1;
LAB_10812a2c4:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 10812a2fc; end: 10812a31b;  */

void FUN_10812a2fc(undefined8 param_1,undefined2 *param_2)

{
  func_0x00010812a850(*param_2);
  return;
}


