/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a1e3100; end: 10a1e318f;  */

void FUN_10a1e3100(long param_1,ushort param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f6448a2);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(ushort *)(param_1 + 0x33a) = param_2 | 0x100;
  *(undefined1 *)(param_1 + 0x330) = 1;
  return;
}



/* Entry: 10a1e3190; end: 10a1e321f;  */

void FUN_10a1e3190(long param_1,ushort param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f6448d2);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(ushort *)(param_1 + 0x33c) = param_2 | 0x100;
  *(undefined1 *)(param_1 + 0x330) = 1;
  return;
}



/* Entry: 10a1e3220; end: 10a1e32af;  */

void FUN_10a1e3220(long param_1,ushort param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f644906);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(ushort *)(param_1 + 0x3a2) = param_2 | 0x100;
  *(undefined1 *)(param_1 + 0x330) = 1;
  return;
}



/* Entry: 10a1e32b0; end: 10a1e333f;  */

void FUN_10a1e32b0(long param_1,ushort param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x000107c2b054(auStack_48,&UNK_10f644940);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *(ushort *)(param_1 + 0x3a6) = param_2 | 0x100;
  *(undefined1 *)(param_1 + 0x330) = 1;
  return;
}



/* Entry: 10a1e3340; end: 10a1e33d7;  */

bool FUN_10a1e3340(float param_1,float param_2,float param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  if ((*(char *)(param_4 + 0x4a0) != '\x01') || (*(char *)(param_4 + 0x480) != '\x01')) {
    return false;
  }
  lVar5 = param_4 + 0x468;
  FUN_10a1e33d8(lVar5,param_4 + 0x2e8);
  if ((*(byte *)(param_4 + 0x4a0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1e33d8);
    (*pcVar1)();
  }
  if ((0.0 < param_1) && (0.0 < param_2)) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (0.0 < param_3) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(param_3)) {
        bVar2 = param_3 < 1.0;
        bVar3 = param_3 == 1.0;
        bVar4 = false;
      }
    }
    if ((bVar3 || bVar2 != bVar4) && (lVar6 = *(long *)(param_4 + 0x488), lVar6 != 0)) {
      uVar8 = (uint)(param_1 * (float)*(int *)(lVar6 + 0x10));
      uVar9 = (uint)(param_2 * (float)*(int *)(lVar6 + 0x14));
      pbVar7 = *(byte **)(lVar6 + 0x28);
      if (((int)uVar9 < *(int *)(lVar6 + 0x14) && (int)uVar8 < *(int *)(lVar6 + 0x10)) &&
         (-1 < (int)(uVar9 | uVar8))) {
        pbVar7 = pbVar7 + (long)*(int *)(lVar6 + 0x20) * (long)(int)uVar8 +
                          *(long *)(lVar6 + 0x18) * (ulong)uVar9;
      }
      fVar10 = (float)NEON_ucvtf((uint)*pbVar7);
      return (float)*(double *)(lVar5 + 0x48) < fVar10;
    }
  }
  return false;
}



/* Entry: 10a1e33d8; end: 10a1e3413;  */

long * FUN_10a1e33d8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lStack_60;
  long *plStack_58;
  undefined1 auStack_18 [8];
  
  FUN_10a203020(param_1,auStack_18,param_2);
  if (*param_1 != 0) {
    return (long *)(*param_1 + 0x38);
  }
  pcVar5 = "map::at:  key not found";
  FUN_109ffdddc();
  plVar7 = &lStack_60;
  if ((pcVar5[0x4a0] == '\x01') && ((pcVar5[0x480] & 1U) != 0)) {
    pcVar6 = pcVar5 + 0x468;
    FUN_10a1e33d8(pcVar6,pcVar5 + 0x2e8);
    if ((pcVar5[0x4a0] & 1U) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1e34e0);
      (*pcVar4)();
    }
    plVar7 = (long *)(pcVar5 + 0x488);
    FUN_10a97ecd8((float)*(double *)(pcVar6 + 0x48),plVar7);
  }
  else {
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    FUN_10a97ecd8(0,&lStack_60);
    plVar8 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        plVar7 = plVar8;
      }
    }
  }
  return plVar7;
}



/* Entry: 10a1e3414; end: 10a1e34f3;  */

undefined1  [16] FUN_10a1e3414(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((*(char *)(param_3 + 0x4a0) == '\x01') && ((*(byte *)(param_3 + 0x480) & 1) != 0)) {
    lVar6 = param_3 + 0x468;
    FUN_10a1e33d8(lVar6,param_3 + 0x2e8);
    if ((*(byte *)(param_3 + 0x4a0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1e34e0);
      (*pcVar5)();
    }
    uVar7 = (ulong)(uint)(float)*(double *)(lVar6 + 0x48);
    FUN_10a97ecd8(uVar7,param_3 + 0x488);
  }
  else {
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
    uVar7 = 0;
    FUN_10a97ecd8(0,&uStack_40);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 10a1e34f4; end: 10a1e3513;  */

undefined1  [16] FUN_10a1e34f4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x22;
  auVar1._0_8_ = &UNK_10f645968;
  return auVar1;
}



/* Entry: 10a1e3514; end: 10a1e357b;  */

bool FUN_10a1e3514(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf645968;
    _memcmp(&UNK_10f645968,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a1e357c; end: 10a1e3583;  */

bool FUN_10a1e357c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf645968;
    _memcmp(&UNK_10f645968,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a1e3584; end: 10a1e361f;  */

void FUN_10a1e3584(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000002;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0x13c;
  FUN_10a1e3620(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f644976;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a2031a0();
  FUN_10a203414(param_1);
  return;
}



/* Entry: 10a1e3620; end: 10a1e36f7;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e36b8) */

undefined1  [16] FUN_10a1e3620(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f645968,0x22);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  func_0x00010a2030a4(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1e36f8; end: 10a1e380f;  */

undefined8 * FUN_10a1e36f8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110baf4c0;
  param_1[2] = &PTR_FUN_110baf5f0;
  param_1[5] = &PTR_DAT_110baf620;
  param_1[0x5f] = &PTR_DAT_110baf6c8;
  param_1[0x15] = &PTR_DAT_110baf678;
  plVar1 = (long *)param_1[0x5d];
  param_1[0x5d] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a061678(param_1 + 0x5b);
  FUN_10a1e3810(param_1 + 0x51);
  *param_1 = &PTR_FUN_110bb1278;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x5f] = &PTR_DAT_110bb13d8;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110bb1428;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x5f] = &PTR_DAT_110bb14f8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar3; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar1 = param_1 + 10;
  if ((*plVar1 != 0) && (*(undefined ***)(*(long *)(*plVar1 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar2 = *(long *)(param_1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar1);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1e3810; end: 10a1e3893;  */

char * FUN_10a1e3810(char *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*param_1 == '\x01') {
    FUN_10a08d2e0(auStack_38,param_1 + 8);
    FUN_10ad00b0c(auStack_38);
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  FUN_10a15206c(param_1 + 0x40);
  if (param_1[0x37] < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (param_1[0x1f] < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a1e3894; end: 10a1e38bf;  */

undefined8 * FUN_10a1e3894(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110baf4c0;
  param_1[2] = &PTR_FUN_110baf5f0;
  param_1[5] = &PTR_DAT_110baf620;
  param_1[0x5f] = &PTR_DAT_110baf6c8;
  param_1[0x15] = &PTR_DAT_110baf678;
  plVar1 = (long *)param_1[0x5d];
  param_1[0x5d] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a061678(param_1 + 0x5b);
  FUN_10a1e3810(param_1 + 0x51);
  *param_1 = &PTR_FUN_110bb1278;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x5f] = &PTR_DAT_110bb13d8;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110bb1428;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x5f] = &PTR_DAT_110bb14f8;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar3; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar1 = param_1 + 10;
  if ((*plVar1 != 0) && (*(undefined ***)(*(long *)(*plVar1 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar2 = *(long *)(param_1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar1);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1e38c0; end: 10a1e391b;  */

void FUN_10a1e38c0(void)

{
  FUN_10a1e36f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1e391c; end: 10a1e394b;  */

void FUN_10a1e391c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a1e36f8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a1e394c; end: 10a1e3a03;  */

undefined1 * FUN_10a1e394c(undefined1 *param_1)

{
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  *param_1 = 0;
  func_0x000107c2b054(auStack_38,&UNK_10f643dac);
  func_0x000107c2b054(auStack_50,&UNK_10f643dac);
  FUN_10a107e2c(param_1 + 8,auStack_38,auStack_50,0);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return param_1;
}



/* Entry: 10a1e3a04; end: 10a1e3a7f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a1e3a04(long param_1)

{
  long alStack_58 [5];
  undefined4 uStack_30;
  
  FUN_10a203584(param_1 + 0x98);
  alStack_58[2] = 0;
  alStack_58[1] = 0;
  alStack_58[4] = 0;
  alStack_58[3] = 0;
  uStack_30 = 0x3f800000;
  alStack_58[0] = param_1;
  FUN_10a203660(alStack_58 + 1,alStack_58,alStack_58);
  func_0x00010a203600(param_1,alStack_58 + 1);
  func_0x00010a203aa8(alStack_58 + 1);
  return;
}



/* Entry: 10a1e3a80; end: 10a1e3b6f;  */

void FUN_10a1e3a80(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if ((int)param_2[6] == *(int *)(param_1 + 0x2c0)) {
    bVar4 = *(byte *)((long)param_2 + 0x17);
    uVar2 = param_2[1];
    if (-1 < (char)bVar4) {
      uVar2 = (ulong)bVar4;
    }
    bVar5 = *(byte *)(param_1 + 0x2a7);
    uVar3 = *(ulong *)(param_1 + 0x298);
    if (-1 < (char)bVar5) {
      uVar3 = (ulong)bVar5;
    }
    if (uVar2 == uVar3) {
      plVar8 = (long *)*param_2;
      if (-1 < (char)bVar4) {
        plVar8 = param_2;
      }
      plVar1 = (long *)*(long *)(param_1 + 0x290);
      if (-1 < (char)bVar5) {
        plVar1 = (long *)(param_1 + 0x290);
      }
      _memcmp(plVar8,plVar1);
      if ((int)plVar8 == 0) {
        bVar4 = *(byte *)((long)param_2 + 0x2f);
        uVar2 = param_2[4];
        if (-1 < (char)bVar4) {
          uVar2 = (ulong)bVar4;
        }
        bVar5 = *(byte *)(param_1 + 0x2bf);
        uVar3 = *(ulong *)(param_1 + 0x2b0);
        if (-1 < (char)bVar5) {
          uVar3 = (ulong)bVar5;
        }
        if (uVar2 == uVar3) {
          plVar8 = (long *)param_2[3];
          if (-1 < (char)bVar4) {
            plVar8 = param_2 + 3;
          }
          lVar9 = *(long *)(param_1 + 0x2a8);
          if (-1 < (char)bVar5) {
            lVar9 = param_1 + 0x2a8;
          }
          _memcmp(plVar8,lVar9);
          if ((int)plVar8 == 0) {
            return;
          }
        }
      }
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x290);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x2a8,param_2 + 3);
  *(int *)(param_1 + 0x2c0) = (int)param_2[6];
  FUN_10a08d2e0(auStack_48,param_1 + 0x290);
  FUN_10ad0279c(auStack_30,auStack_48);
  FUN_10a152118(param_1 + 0x2c8,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar8 = plStack_28 + 1;
    do {
      lVar9 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10a1e3b70; end: 10a1e3d77;  */

undefined8 * FUN_10a1e3b70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined1 uStack_41;
  undefined *puStack_40;
  long *plStack_38;
  
  param_1[0x5f] = &PTR_FUN_110c383b8;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined2 *)(param_1 + 0x62) = 0x100;
  puVar6 = param_1;
  uStack_50 = param_2;
  FUN_10a1da04c(param_1,&PTR_PTR_110baf708,param_2);
  FUN_10a1e394c(puVar6 + 0x51);
  *param_1 = &PTR_FUN_110baf4c0;
  param_1[2] = &PTR_FUN_110baf5f0;
  param_1[5] = &PTR_DAT_110baf620;
  param_1[0x5f] = &PTR_DAT_110baf6c8;
  param_1[0x15] = &PTR_DAT_110baf678;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  lVar7 = *(long *)(*(long *)(param_1[0x12] + 0x100) + 0x260);
  puStack_40 = &UNK_10f653c20;
  plStack_38 = (long *)0x21;
  if (lVar7 != 0) {
    FUN_10a2034d0(&puStack_40,&uStack_41,&uStack_50,lVar7 + 0x128);
    FUN_10a02bf24(param_1 + 0x5b,&puStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    puStack_40 = (undefined *)param_1[0x5b];
    plStack_38 = (long *)param_1[0x5c];
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a1e3a04(param_1,&puStack_40);
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    FUN_10a1e3a80(param_1,param_3);
    return param_1;
  }
  FUN_10a0edfc4(&puStack_40);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1e3d14);
  (*pcVar5)();
}



/* Entry: 10a1e3d78; end: 10a1e3e53;  */

void FUN_10a1e3d78(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  char cStack_61;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  FUN_10a1e3e54(auStack_90);
  (**(code **)(*param_2 + 0x230))(auStack_58,param_2,&PTR_DAT_110baf730,auStack_90);
  FUN_10a1e3a80(param_1,auStack_58);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(uStack_78);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  return;
}



/* Entry: 10a1e3e54; end: 10a1e3eff;  */

void FUN_10a1e3e54(undefined8 param_1)

{
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&UNK_10f643dac);
  func_0x000107c2b054(auStack_50,&UNK_10f643dac);
  FUN_10a107e2c(param_1,auStack_38,auStack_50,0);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a1e3f00; end: 10a1e3f6f;  */

void FUN_10a1e3f00(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f645968;
  uStack_28 = 0x22;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bb1c58,&puStack_30);
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110baf730,param_1 + 0x290);
  return;
}



/* Entry: 10a1e3f70; end: 10a1e3f7f;  */

void FUN_10a1e3f70(undefined *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  if (*(long *)(param_1 + 0x2e8) != 0) {
    return;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((char)param_1[0x2a7] < '\0') {
      if (*(long *)(param_1 + 0x298) != 0) goto LAB_10a1e3fb0;
    }
    else if (param_1[0x2a7] != '\0') {
LAB_10a1e3fb0:
      unaff_x20 = *(long **)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x1c8);
      (**(code **)(*unaff_x20 + 0x88))();
      plVar4 = (long *)unaff_x20[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
        unaff_x20 = (long *)*unaff_x20;
        plVar1 = plVar4 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
        unaff_x21 = plVar4;
        if (unaff_x20 != (long *)0x0) {
          FUN_10a08d2e0((undefined1 *)((long)register0x00000008 + -0x50),param_1 + 0x290);
          (**(code **)(*unaff_x20 + 0x20))
                    ((undefined1 *)((long)register0x00000008 + -0x38),unaff_x20,
                     (undefined1 *)((long)register0x00000008 + -0x50));
          uVar5 = *(undefined8 *)((long)register0x00000008 + -0x38);
          *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
          plVar4 = *(long **)(param_1 + 0x2e8);
          *(undefined8 *)(param_1 + 0x2e8) = uVar5;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
            plVar4 = *(long **)((long)register0x00000008 + -0x38);
            *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
          if (*(char *)((long)register0x00000008 + -0x39) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x50));
          }
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x2e8);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,1);
      return;
    }
    unaff_x19 = &UNK_10f6449c8;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x39) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x50));
    }
    unaff_x30 = FUN_10a1e40e0;
    param_1 = unaff_x19;
    __Unwind_Resume();
    if (*(long *)(param_1 + 0x2d8) != 0) {
      return;
    }
    param_1 = param_1 + -0x10;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  } while( true );
}



/* Entry: 10a1e3f80; end: 10a1e40df;  */

void FUN_10a1e3f80(undefined *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((char)param_1[0x2a7] < '\0') {
      if (*(long *)(param_1 + 0x298) != 0) goto LAB_10a1e3fb0;
    }
    else if (param_1[0x2a7] != '\0') {
LAB_10a1e3fb0:
      unaff_x20 = *(long **)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x1c8);
      (**(code **)(*unaff_x20 + 0x88))();
      plVar4 = (long *)unaff_x20[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
        unaff_x20 = (long *)*unaff_x20;
        plVar1 = plVar4 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
        unaff_x21 = plVar4;
        if (unaff_x20 != (long *)0x0) {
          FUN_10a08d2e0((undefined1 *)((long)register0x00000008 + -0x50),param_1 + 0x290);
          (**(code **)(*unaff_x20 + 0x20))
                    ((undefined1 *)((long)register0x00000008 + -0x38),unaff_x20,
                     (undefined1 *)((long)register0x00000008 + -0x50));
          uVar5 = *(undefined8 *)((long)register0x00000008 + -0x38);
          *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
          plVar4 = *(long **)(param_1 + 0x2e8);
          *(undefined8 *)(param_1 + 0x2e8) = uVar5;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
            plVar4 = *(long **)((long)register0x00000008 + -0x38);
            *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
          if (*(char *)((long)register0x00000008 + -0x39) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x50));
          }
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x2e8);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,1);
      return;
    }
    unaff_x19 = &UNK_10f6449c8;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x39) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x50));
    }
    unaff_x30 = FUN_10a1e40e0;
    param_1 = unaff_x19;
    __Unwind_Resume();
    if (*(long *)(param_1 + 0x2d8) != 0) {
      return;
    }
    param_1 = param_1 + -0x10;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  } while( true );
}



/* Entry: 10a1e40e0; end: 10a1e40f3;  */

void FUN_10a1e40e0(undefined *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    if (*(long *)(param_1 + 0x2d8) != 0) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((char)param_1[0x297] < '\0') {
      if (*(long *)(param_1 + 0x288) != 0) goto LAB_10a1e3fb0;
    }
    else if (param_1[0x297] != '\0') {
LAB_10a1e3fb0:
      unaff_x20 = *(long **)(*(long *)(*(long *)(param_1 + 0x80) + 0x100) + 0x1c8);
      (**(code **)(*unaff_x20 + 0x88))();
      plVar4 = (long *)unaff_x20[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
        unaff_x20 = (long *)*unaff_x20;
        plVar1 = plVar4 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
        unaff_x21 = plVar4;
        if (unaff_x20 != (long *)0x0) {
          FUN_10a08d2e0((undefined1 *)((long)register0x00000008 + -0x50),param_1 + 0x280);
          (**(code **)(*unaff_x20 + 0x20))
                    ((undefined1 *)((long)register0x00000008 + -0x38),unaff_x20,
                     (undefined1 *)((long)register0x00000008 + -0x50));
          uVar5 = *(undefined8 *)((long)register0x00000008 + -0x38);
          *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
          plVar4 = *(long **)(param_1 + 0x2d8);
          *(undefined8 *)(param_1 + 0x2d8) = uVar5;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
            plVar4 = *(long **)((long)register0x00000008 + -0x38);
            *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
          if (*(char *)((long)register0x00000008 + -0x39) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x50));
          }
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x2d8);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,1);
      return;
    }
    unaff_x19 = &UNK_10f6449c8;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x39) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x50));
    }
    unaff_x30 = FUN_10a1e40e0;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  } while( true );
}



/* Entry: 10a1e40f4; end: 10a1e4123;  */

undefined4 FUN_10a1e40f4(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x2e8);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
    uVar2 = 1;
    if ((int)plVar1 != 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* Entry: 10a1e4124; end: 10a1e4257;  */

long * FUN_10a1e4124(long *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  plVar6 = param_1;
  for (plVar5 = param_1; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[0x13]) {
    plVar6 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    if ((int)plVar6 != 2) {
      return plVar6;
    }
  }
  if (-1 < param_2) {
    if ((int)param_1[0x5e] != param_2) {
      if (param_2 < (int)param_1[0x5e]) {
        (**(code **)(*(long *)param_1[0x5d] + 0x58))();
      }
      plVar6 = (long *)param_1[0x5d];
      plVar5 = plVar6;
      (**(code **)(*plVar6 + 0x28))(plVar6);
      (**(code **)(*plVar6 + 0x50))(plVar6,param_2 - (int)plVar5);
      lVar4 = param_1[0x5b];
      (**(code **)(*(long *)param_1[0x5d] + 0x10))(auStack_40);
      FUN_10a1db4cc(lVar4,auStack_40);
      if (plStack_38 != (long *)0x0) {
        plVar5 = plStack_38 + 1;
        do {
          lVar4 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      plVar6 = (long *)param_1[0x5d];
      (**(code **)(*plVar6 + 0x28))();
      *(int *)(param_1 + 0x5e) = (int)plVar6;
    }
    return plVar6;
  }
  puVar3 = &UNK_10f64497f;
  FUN_10a00946c(&UNK_10f64497f);
  func_0x00010a0523dc(auStack_40);
  __Unwind_Resume(puVar3);
  return (long *)(puVar3 + 0x228);
}



/* Entry: 10a1e4258; end: 10a1e425f;  */

long FUN_10a1e4258(long param_1)

{
  return param_1 + 0x228;
}



/* Entry: 10a1e4260; end: 10a1e432b;  */

void FUN_10a1e4260(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x20,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x30);
  FUN_10a08d2e0(auStack_48,param_1 + 8);
  FUN_10ad0279c(auStack_30,auStack_48);
  FUN_10a152118(param_1 + 0x40,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10a1e432c; end: 10a1e441f;  */

undefined4 * FUN_10a1e432c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  func_0x000107c2b054(param_1 + 2,&UNK_10f645994);
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x00010a1e4978(param_1);
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0x600;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3c] = 0x10;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  func_0x00010a1e505c();
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  *(undefined8 *)(param_1 + 0xee) = 1;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  *(undefined8 *)(param_1 + 0xf6) = 0x1138351a0;
  *(undefined8 *)(param_1 + 0xf8) = 0x1138351b8;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  puVar1 = param_1;
  func_0x00010a1e5184();
  *(undefined4 **)(param_1 + 0xfa) = puVar1;
  return param_1;
}



/* Entry: 10a1e4420; end: 10a1e457f;  */

undefined4 *
FUN_10a1e4420(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  func_0x000107c2b054(param_1 + 2,&UNK_10f645994);
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x00010a1e4978(param_1);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  func_0x00010a1f4088(param_1 + 0x34,0,param_3,0,0,6,param_5,0);
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  *(undefined8 *)(param_1 + 0xee) = 1;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  *(undefined8 *)(param_1 + 0xf6) = param_4;
  *(undefined8 *)(param_1 + 0xf8) = 0x1138351b8;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  puVar5 = param_1;
  func_0x00010a1e5184();
  *(undefined4 **)(param_1 + 0xfa) = puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a0eb82c(param_1 + 10);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 2));
  }
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *puVar5 = 0;
  *(undefined1 *)(puVar5 + 1) = 0;
  func_0x000107c2b054(puVar5 + 2,&UNK_10f645994);
  *(undefined8 *)(puVar5 + 8) = 0;
  func_0x00010a1e4978(puVar5);
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(undefined8 *)(puVar5 + 10) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  *(undefined8 *)(puVar5 + 0x1e) = 0;
  *(undefined8 *)(puVar5 + 0x24) = 0;
  *(undefined8 *)(puVar5 + 0x22) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x16) = 0;
  *(undefined8 *)(puVar5 + 0x1c) = 0;
  *(undefined8 *)(puVar5 + 0x1a) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0xe) = 0;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x26) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x2a) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x2e) = 0;
  *(undefined8 *)(puVar5 + 0x2c) = 0;
  *(undefined8 *)(puVar5 + 0x32) = 0;
  *(undefined8 *)(puVar5 + 0x30) = 0;
  puVar7 = (undefined4 *)0x0;
  puVar8 = (undefined8 *)0x1;
  puVar9 = (undefined8 *)0x0;
  uVar10 = 0;
  puVar11 = (undefined8 *)0x6;
  func_0x00010a1f4088(puVar5 + 0x34);
  *(undefined8 *)(puVar5 + 0x44) = 0;
  *(undefined8 *)(puVar5 + 0xe8) = 0;
  *(undefined8 *)(puVar5 + 0xe6) = 0;
  *(undefined8 *)(puVar5 + 0xec) = 0;
  *(undefined8 *)(puVar5 + 0xea) = 0;
  *(undefined8 *)(puVar5 + 0xee) = 1;
  *(undefined1 *)(puVar5 + 0xf0) = 0;
  *(undefined8 *)(puVar5 + 0xf4) = 0;
  *(undefined8 *)(puVar5 + 0xf2) = 0;
  *(undefined8 *)(puVar5 + 0xf6) = param_3;
  *(undefined8 *)(puVar5 + 0xf8) = 0x1138351b8;
  *(undefined8 *)(puVar5 + 0xfa) = 0;
  puVar6 = puVar5;
  func_0x00010a1e5184();
  *(undefined4 **)(puVar5 + 0xfa) = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010a0eb82c(puVar5 + 10);
  if (*(char *)((long)puVar5 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(puVar5 + 2));
  }
  __Unwind_Resume();
  uVar2 = *puVar7;
  *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar7 + 1);
  *puVar6 = uVar2;
  if (*(char *)((long)puVar7 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar6 + 2,*(undefined8 *)(puVar7 + 2),*(undefined8 *)(puVar7 + 4));
  }
  else {
    uVar15 = *(undefined8 *)(puVar7 + 4);
    uVar13 = *(undefined8 *)(puVar7 + 2);
    *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar7 + 6);
    *(undefined8 *)(puVar6 + 4) = uVar15;
    *(undefined8 *)(puVar6 + 2) = uVar13;
  }
  uVar13 = *(undefined8 *)(puVar7 + 8);
  lVar12 = puVar8[1];
  uVar15 = *puVar8;
  *(undefined8 *)(puVar6 + 0xc) = puVar8[1];
  *(undefined8 *)(puVar6 + 10) = uVar15;
  *(undefined8 *)(puVar6 + 8) = uVar13;
  if (lVar12 != 0) {
    plVar1 = (long *)(lVar12 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(undefined4 *)(puVar8 + 2);
  *(undefined8 *)(puVar6 + 0x12) = 0;
  *(undefined8 *)(puVar6 + 0x10) = 0;
  puVar6[0xe] = uVar2;
  *(undefined8 *)(puVar6 + 0x16) = 0;
  *(undefined8 *)(puVar6 + 0x14) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  if (puVar8[7] != 0) {
    puVar14 = puVar8 + 3;
    lVar12 = puVar8[7] << 2;
    do {
      func_0x00010928bcfc(puVar6 + 0x10,puVar14);
      puVar14 = (undefined8 *)((long)puVar14 + 4);
      lVar12 = lVar12 + -4;
    } while (lVar12 != 0);
  }
  uVar13 = puVar8[8];
  *(undefined8 *)(puVar6 + 0x1e) = 0;
  *(undefined8 *)(puVar6 + 0x1c) = 0;
  *(undefined8 *)(puVar6 + 0x1a) = uVar13;
  *(undefined8 *)(puVar6 + 0x22) = 0;
  *(undefined8 *)(puVar6 + 0x20) = 0;
  *(undefined8 *)(puVar6 + 0x24) = 0;
  if (puVar8[0xd] != 0) {
    puVar14 = puVar8 + 9;
    lVar12 = puVar8[0xd] << 2;
    do {
      func_0x000109261ecc(puVar6 + 0x1c,puVar14);
      puVar14 = (undefined8 *)((long)puVar14 + 4);
      lVar12 = lVar12 + -4;
    } while (lVar12 != 0);
  }
  uVar13 = puVar8[0xe];
  *(undefined8 *)(puVar6 + 0x2a) = 0;
  *(undefined8 *)(puVar6 + 0x28) = 0;
  *(undefined8 *)(puVar6 + 0x26) = uVar13;
  *(undefined8 *)(puVar6 + 0x2e) = 0;
  *(undefined8 *)(puVar6 + 0x2c) = 0;
  *(undefined8 *)(puVar6 + 0x30) = 0;
  if (puVar8[0x13] != 0) {
    puVar14 = puVar8 + 0xf;
    lVar12 = puVar8[0x13] << 2;
    do {
      func_0x000109261ecc(puVar6 + 0x28,puVar14);
      puVar14 = (undefined8 *)((long)puVar14 + 4);
      lVar12 = lVar12 + -4;
    } while (lVar12 != 0);
  }
  *(undefined8 *)(puVar6 + 0x32) = puVar8[0x14];
  uVar15 = puVar9[1];
  uVar13 = *puVar9;
  uVar17 = puVar9[3];
  uVar16 = puVar9[2];
  puVar6[0x3c] = *(undefined4 *)(puVar9 + 4);
  *(undefined8 *)(puVar6 + 0x36) = uVar15;
  *(undefined8 *)(puVar6 + 0x34) = uVar13;
  *(undefined8 *)(puVar6 + 0x3a) = uVar17;
  *(undefined8 *)(puVar6 + 0x38) = uVar16;
  *(undefined8 *)(puVar6 + 0x3e) = 0;
  lVar12 = puVar9[5];
  *(long *)(puVar6 + 0x3e) = lVar12;
  if (lVar12 != 0) {
    puVar8 = puVar9 + 6;
    puVar5 = puVar6 + 0x40;
    do {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
      lVar12 = lVar12 + -1;
      puVar8 = (undefined8 *)((long)puVar8 + 1);
      puVar5 = (undefined4 *)((long)puVar5 + 1);
    } while (lVar12 != 0);
  }
  *(undefined8 *)(puVar6 + 0x42) = puVar9[7];
  FUN_10a203af0(puVar6 + 0x44,uVar10);
  uVar13 = puVar11[1];
  uVar10 = *puVar11;
  uVar16 = puVar11[3];
  uVar15 = puVar11[2];
  *(undefined8 *)(puVar6 + 0xee) = puVar11[4];
  *(undefined8 *)(puVar6 + 0xe8) = uVar13;
  *(undefined8 *)(puVar6 + 0xe6) = uVar10;
  *(undefined8 *)(puVar6 + 0xec) = uVar16;
  *(undefined8 *)(puVar6 + 0xea) = uVar15;
  *(undefined1 *)(puVar6 + 0xf0) = 0;
  *(undefined8 *)(puVar6 + 0xf4) = 0;
  *(undefined8 *)(puVar6 + 0xf2) = 0;
  *(undefined8 *)(puVar6 + 0xf6) = 0x1138351a0;
  *(undefined8 *)(puVar6 + 0xf8) = 0x1138351b8;
  *(undefined8 *)(puVar6 + 0xfa) = 0;
  return puVar6;
}



/* Entry: 10a1e4580; end: 10a1e46d3;  */

undefined4 * FUN_10a1e4580(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  func_0x000107c2b054(param_1 + 2,&UNK_10f645994);
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x00010a1e4978(param_1);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar6 = (undefined4 *)0x0;
  puVar7 = (undefined8 *)0x1;
  puVar8 = (undefined8 *)0x0;
  uVar9 = 0;
  puVar10 = (undefined8 *)0x6;
  func_0x00010a1f4088(param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  *(undefined8 *)(param_1 + 0xee) = 1;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  *(undefined8 *)(param_1 + 0xf6) = param_3;
  *(undefined8 *)(param_1 + 0xf8) = 0x1138351b8;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  puVar5 = param_1;
  func_0x00010a1e5184();
  *(undefined4 **)(param_1 + 0xfa) = puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a0eb82c(param_1 + 10);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 2));
  }
  __Unwind_Resume();
  uVar2 = *puVar6;
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar6 + 1);
  *puVar5 = uVar2;
  if (*(char *)((long)puVar6 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar5 + 2,*(undefined8 *)(puVar6 + 2),*(undefined8 *)(puVar6 + 4));
  }
  else {
    uVar14 = *(undefined8 *)(puVar6 + 4);
    uVar12 = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar6 + 6);
    *(undefined8 *)(puVar5 + 4) = uVar14;
    *(undefined8 *)(puVar5 + 2) = uVar12;
  }
  uVar12 = *(undefined8 *)(puVar6 + 8);
  lVar11 = puVar7[1];
  uVar14 = *puVar7;
  *(undefined8 *)(puVar5 + 0xc) = puVar7[1];
  *(undefined8 *)(puVar5 + 10) = uVar14;
  *(undefined8 *)(puVar5 + 8) = uVar12;
  if (lVar11 != 0) {
    plVar1 = (long *)(lVar11 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(undefined4 *)(puVar7 + 2);
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  puVar5[0xe] = uVar2;
  *(undefined8 *)(puVar5 + 0x16) = 0;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  if (puVar7[7] != 0) {
    puVar13 = puVar7 + 3;
    lVar11 = puVar7[7] << 2;
    do {
      func_0x00010928bcfc(puVar5 + 0x10,puVar13);
      puVar13 = (undefined8 *)((long)puVar13 + 4);
      lVar11 = lVar11 + -4;
    } while (lVar11 != 0);
  }
  uVar12 = puVar7[8];
  *(undefined8 *)(puVar5 + 0x1e) = 0;
  *(undefined8 *)(puVar5 + 0x1c) = 0;
  *(undefined8 *)(puVar5 + 0x1a) = uVar12;
  *(undefined8 *)(puVar5 + 0x22) = 0;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  *(undefined8 *)(puVar5 + 0x24) = 0;
  if (puVar7[0xd] != 0) {
    puVar13 = puVar7 + 9;
    lVar11 = puVar7[0xd] << 2;
    do {
      func_0x000109261ecc(puVar5 + 0x1c,puVar13);
      puVar13 = (undefined8 *)((long)puVar13 + 4);
      lVar11 = lVar11 + -4;
    } while (lVar11 != 0);
  }
  uVar12 = puVar7[0xe];
  *(undefined8 *)(puVar5 + 0x2a) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  *(undefined8 *)(puVar5 + 0x26) = uVar12;
  *(undefined8 *)(puVar5 + 0x2e) = 0;
  *(undefined8 *)(puVar5 + 0x2c) = 0;
  *(undefined8 *)(puVar5 + 0x30) = 0;
  if (puVar7[0x13] != 0) {
    puVar13 = puVar7 + 0xf;
    lVar11 = puVar7[0x13] << 2;
    do {
      func_0x000109261ecc(puVar5 + 0x28,puVar13);
      puVar13 = (undefined8 *)((long)puVar13 + 4);
      lVar11 = lVar11 + -4;
    } while (lVar11 != 0);
  }
  *(undefined8 *)(puVar5 + 0x32) = puVar7[0x14];
  uVar14 = puVar8[1];
  uVar12 = *puVar8;
  uVar16 = puVar8[3];
  uVar15 = puVar8[2];
  puVar5[0x3c] = *(undefined4 *)(puVar8 + 4);
  *(undefined8 *)(puVar5 + 0x36) = uVar14;
  *(undefined8 *)(puVar5 + 0x34) = uVar12;
  *(undefined8 *)(puVar5 + 0x3a) = uVar16;
  *(undefined8 *)(puVar5 + 0x38) = uVar15;
  *(undefined8 *)(puVar5 + 0x3e) = 0;
  lVar11 = puVar8[5];
  *(long *)(puVar5 + 0x3e) = lVar11;
  if (lVar11 != 0) {
    puVar7 = puVar8 + 6;
    puVar6 = puVar5 + 0x40;
    do {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
      lVar11 = lVar11 + -1;
      puVar7 = (undefined8 *)((long)puVar7 + 1);
      puVar6 = (undefined4 *)((long)puVar6 + 1);
    } while (lVar11 != 0);
  }
  *(undefined8 *)(puVar5 + 0x42) = puVar8[7];
  FUN_10a203af0(puVar5 + 0x44,uVar9);
  uVar12 = puVar10[1];
  uVar9 = *puVar10;
  uVar15 = puVar10[3];
  uVar14 = puVar10[2];
  *(undefined8 *)(puVar5 + 0xee) = puVar10[4];
  *(undefined8 *)(puVar5 + 0xe8) = uVar12;
  *(undefined8 *)(puVar5 + 0xe6) = uVar9;
  *(undefined8 *)(puVar5 + 0xec) = uVar15;
  *(undefined8 *)(puVar5 + 0xea) = uVar14;
  *(undefined1 *)(puVar5 + 0xf0) = 0;
  *(undefined8 *)(puVar5 + 0xf4) = 0;
  *(undefined8 *)(puVar5 + 0xf2) = 0;
  *(undefined8 *)(puVar5 + 0xf6) = 0x1138351a0;
  *(undefined8 *)(puVar5 + 0xf8) = 0x1138351b8;
  *(undefined8 *)(puVar5 + 0xfa) = 0;
  return puVar5;
}



/* Entry: 10a1e46d4; end: 10a1e491f;  */

undefined4 *
FUN_10a1e46d4(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(undefined8 *)(param_1 + 2) = uVar6;
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  lVar5 = param_3[1];
  uVar9 = *param_3;
  *(undefined8 *)(param_1 + 0xc) = param_3[1];
  *(undefined8 *)(param_1 + 10) = uVar9;
  *(undefined8 *)(param_1 + 8) = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(undefined4 *)(param_3 + 2);
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0xe] = uVar2;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (param_3[7] != 0) {
    puVar7 = param_3 + 3;
    lVar5 = param_3[7] << 2;
    do {
      func_0x00010928bcfc(param_1 + 0x10,puVar7);
      puVar7 = (undefined8 *)((long)puVar7 + 4);
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  uVar6 = param_3[8];
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = uVar6;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  if (param_3[0xd] != 0) {
    puVar7 = param_3 + 9;
    lVar5 = param_3[0xd] << 2;
    do {
      func_0x000109261ecc(param_1 + 0x1c,puVar7);
      puVar7 = (undefined8 *)((long)puVar7 + 4);
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  uVar6 = param_3[0xe];
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x26) = uVar6;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (param_3[0x13] != 0) {
    puVar7 = param_3 + 0xf;
    lVar5 = param_3[0x13] << 2;
    do {
      func_0x000109261ecc(param_1 + 0x28,puVar7);
      puVar7 = (undefined8 *)((long)puVar7 + 4);
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x32) = param_3[0x14];
  uVar9 = param_4[1];
  uVar6 = *param_4;
  uVar11 = param_4[3];
  uVar10 = param_4[2];
  param_1[0x3c] = *(undefined4 *)(param_4 + 4);
  *(undefined8 *)(param_1 + 0x36) = uVar9;
  *(undefined8 *)(param_1 + 0x34) = uVar6;
  *(undefined8 *)(param_1 + 0x3a) = uVar11;
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  lVar5 = param_4[5];
  *(long *)(param_1 + 0x3e) = lVar5;
  if (lVar5 != 0) {
    puVar7 = param_4 + 6;
    puVar8 = param_1 + 0x40;
    do {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      lVar5 = lVar5 + -1;
      puVar7 = (undefined8 *)((long)puVar7 + 1);
      puVar8 = (undefined4 *)((long)puVar8 + 1);
    } while (lVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x42) = param_4[7];
  FUN_10a203af0(param_1 + 0x44,param_5);
  uVar9 = param_6[1];
  uVar6 = *param_6;
  uVar11 = param_6[3];
  uVar10 = param_6[2];
  *(undefined8 *)(param_1 + 0xee) = param_6[4];
  *(undefined8 *)(param_1 + 0xe8) = uVar9;
  *(undefined8 *)(param_1 + 0xe6) = uVar6;
  *(undefined8 *)(param_1 + 0xec) = uVar11;
  *(undefined8 *)(param_1 + 0xea) = uVar10;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  *(undefined8 *)(param_1 + 0xf6) = 0x1138351a0;
  *(undefined8 *)(param_1 + 0xf8) = 0x1138351b8;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  return param_1;
}



/* Entry: 10a1e4920; end: 10a1e4a4b;  */

long FUN_10a1e4920(long param_1)

{
  FUN_10a1902ec(param_1 + 0x3d0,0);
  func_0x00010a19032c(param_1 + 0x3c8,0);
  FUN_10a19036c(param_1 + 0x110);
  func_0x00010a0eb82c(param_1 + 0x28);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a1e4a4c; end: 10a1e4b6b;  */

ulong FUN_10a1e4a4c(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = (ulong)*param_2 + 0x9e3779b97f4a7c15;
  uVar2 = (ulong)param_2[0xc] + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b97f4a7c15 ^ uVar2;
  uVar2 = (ulong)param_2[0xd] + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b97f4a7c15 ^ uVar2;
  if (*(ulong *)(param_2 + 10) != 0) {
    puVar4 = param_2 + 2;
    uVar3 = 1;
    do {
      uVar2 = uVar2 + 0x9e3779b97f4a7c15;
      uVar2 = uVar2 * 0x40 + -0x61c8864680b583eb + (uVar2 >> 2) + (ulong)*puVar4 ^ uVar2;
      bVar1 = uVar3 < *(ulong *)(param_2 + 10);
      puVar4 = puVar4 + 1;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (bVar1);
  }
  lVar7 = *(long *)(param_2 + 0x16);
  uVar3 = (ulong)param_2[0x18] + 0x9e3779b97f4a7c15;
  uVar3 = (ulong)param_2[0x19] + 0x9e3779b97f4a7c15 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  uVar3 = lVar7 + -0x61c8864680b583eb + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  if (lVar7 != 0) {
    lVar7 = lVar7 << 2;
    puVar4 = param_2 + 0xe;
    do {
      uVar3 = uVar3 + 0x9e3779b97f4a7c15;
      uVar3 = uVar3 * 0x40 + -0x61c8864680b583eb + (uVar3 >> 2) + (ulong)*puVar4 ^ uVar3;
      lVar7 = lVar7 + -4;
      puVar4 = puVar4 + 1;
    } while (lVar7 != 0);
  }
  uVar5 = *(ulong *)(param_2 + 0x22);
  uVar6 = 0;
  if (uVar5 != 0) {
    lVar7 = uVar5 << 2;
    uVar6 = uVar5;
    puVar4 = param_2 + 0x1a;
    do {
      uVar6 = uVar6 + 0x9e3779b97f4a7c15;
      uVar6 = uVar6 * 0x40 + -0x61c8864680b583eb + (uVar6 >> 2) + (ulong)*puVar4 ^ uVar6;
      lVar7 = lVar7 + -4;
      puVar4 = puVar4 + 1;
    } while (lVar7 != 0);
  }
  uVar2 = uVar2 + 0x9e3779b97f4a7c15;
  uVar2 = uVar2 * 0x40 + -0x61c8864680b583eb + (uVar2 >> 2) + uVar3 ^ uVar2;
  return uVar2 * 0x40 + -0x61c8864680b583eb + (uVar2 >> 2) + uVar6 ^ uVar2;
}



/* Entry: 10a1e4b6c; end: 10a1e4fa3;  */

ulong FUN_10a1e4b6c(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  
  if (param_1[0x14] != param_2[0x14]) {
    return 0;
  }
  lVar14 = *param_1;
  lVar21 = *param_2;
  if (lVar14 == 0) {
    if (((lVar21 == 0) && ((int)param_1[2] == (int)param_2[2])) &&
       (lVar14 = param_1[7], lVar14 == param_2[7])) {
      if (lVar14 != 0) {
        lVar14 = lVar14 << 2;
        plVar10 = param_1 + 3;
        plVar16 = param_2 + 3;
        do {
          if ((int)*plVar10 != (int)*plVar16) {
            return 0;
          }
          lVar14 = lVar14 + -4;
          plVar10 = (long *)((long)plVar10 + 4);
          plVar16 = (long *)((long)plVar16 + 4);
        } while (lVar14 != 0);
      }
      if ((((int)param_1[8] == (int)param_2[8]) &&
          (*(int *)((long)param_1 + 0x44) == *(int *)((long)param_2 + 0x44))) &&
         (param_1[0xd] == param_2[0xd])) {
        plVar10 = param_1 + 9;
        _memcmp(plVar10,param_2 + 9,param_1[0xd] << 2);
        if ((((int)plVar10 == 0) && ((int)param_1[0xe] == (int)param_2[0xe])) &&
           ((*(int *)((long)param_1 + 0x74) == *(int *)((long)param_2 + 0x74) &&
            (param_1[0x13] == param_2[0x13])))) {
          plVar10 = param_1 + 0xf;
          _memcmp(plVar10,param_2 + 0xf,param_1[0x13] << 2);
          return (ulong)((int)plVar10 == 0);
        }
      }
    }
  }
  else if ((((lVar21 != 0) &&
            (uVar15 = *(ulong *)(lVar14 + 0x388), uVar15 == *(ulong *)(lVar21 + 0x388))) &&
           (uVar17 = *(ulong *)(lVar14 + 0x6d0), uVar17 == *(ulong *)(lVar21 + 0x6d0))) &&
          (*(long *)(lVar14 + 0x860) == *(long *)(lVar21 + 0x860))) {
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar2 = lVar14 + 0x28;
      lVar3 = lVar21 + 0x28;
      do {
        lVar11 = lVar14 + 0x390 + uVar18 * 0xd0;
        lVar12 = lVar21 + 0x390 + uVar18 * 0xd0;
        uVar20 = *(ulong *)(lVar11 + 0x68);
        if (uVar20 != *(ulong *)(lVar12 + 0x68)) {
          return 0;
        }
        uVar19 = *(ulong *)(lVar11 + 0xb0);
        if (uVar19 != *(ulong *)(lVar12 + 0xb0)) {
          return 0;
        }
        uVar13 = *(ulong *)(lVar11 + 0x20);
        if (uVar13 != *(ulong *)(lVar12 + 0x20)) {
          return 0;
        }
        uVar4 = *(uint *)(lVar11 + 0xb8);
        uVar5 = *(uint *)(lVar12 + 0xb8);
        if (uVar4 != 0xffffffff && uVar5 == 0xffffffff) {
          return 0;
        }
        if (uVar4 == 0xffffffff && uVar5 != 0xffffffff) {
          return 0;
        }
        uVar6 = *(uint *)(lVar11 + 0xc0);
        uVar7 = *(uint *)(lVar12 + 0xc0);
        if (uVar6 != 0xffffffff && uVar7 == 0xffffffff) {
          return 0;
        }
        if (uVar6 == 0xffffffff && uVar7 != 0xffffffff) {
          return 0;
        }
        if (uVar20 != 0) {
          uVar23 = 1;
          uVar24 = 0;
          do {
            uVar22 = uVar23;
            lVar25 = lVar2 + (ulong)*(uint *)(lVar11 + 0x28 + uVar24 * 8) * 0x30;
            lVar26 = lVar3 + (ulong)*(uint *)(lVar12 + 0x28 + uVar24 * 8) * 0x30;
            if (*(int *)(lVar25 + 0x10) != *(int *)(lVar26 + 0x10)) {
              return 0;
            }
            if (*(int *)(lVar25 + 0x14) != *(int *)(lVar26 + 0x14)) {
              return 0;
            }
            uVar23 = (ulong)((int)uVar22 + 1);
            uVar24 = uVar22;
          } while (uVar22 < uVar20);
        }
        if (uVar19 != 0) {
          uVar20 = 1;
          uVar23 = 0;
          do {
            uVar24 = uVar20;
            lVar25 = lVar2 + (ulong)*(uint *)(lVar11 + 0x70 + uVar23 * 8) * 0x30;
            lVar26 = lVar3 + (ulong)*(uint *)(lVar12 + 0x70 + uVar23 * 8) * 0x30;
            if (*(int *)(lVar25 + 0x10) != *(int *)(lVar26 + 0x10)) {
              return 0;
            }
            if (*(int *)(lVar25 + 0x14) != *(int *)(lVar26 + 0x14)) {
              return 0;
            }
            uVar20 = (ulong)((int)uVar24 + 1);
            uVar23 = uVar24;
          } while (uVar24 < uVar19);
        }
        if (uVar13 != 0) {
          uVar20 = 1;
          uVar19 = 0;
          do {
            uVar23 = uVar20;
            uVar8 = *(uint *)(lVar11 + uVar19 * 8);
            uVar9 = *(uint *)(lVar12 + uVar19 * 8);
            if (uVar8 == 0xffffffff || uVar9 == 0xffffffff) {
              if ((uVar8 == 0xffffffff) != (uVar9 == 0xffffffff)) {
                return 0;
              }
            }
            else {
              lVar25 = lVar2 + (ulong)uVar8 * 0x30;
              lVar26 = lVar3 + (ulong)uVar9 * 0x30;
              if (*(int *)(lVar25 + 0x10) != *(int *)(lVar26 + 0x10)) {
                return 0;
              }
              if (*(int *)(lVar25 + 0x14) != *(int *)(lVar26 + 0x14)) {
                return 0;
              }
            }
            uVar20 = (ulong)((int)uVar23 + 1);
            uVar19 = uVar23;
          } while (uVar23 < uVar13);
        }
        if (uVar4 != 0xffffffff) {
          lVar11 = lVar2 + (ulong)uVar4 * 0x30;
          lVar12 = lVar3 + (ulong)uVar5 * 0x30;
          if (*(int *)(lVar11 + 0x10) != *(int *)(lVar12 + 0x10)) {
            return 0;
          }
          if (*(int *)(lVar11 + 0x14) != *(int *)(lVar12 + 0x14)) {
            return 0;
          }
        }
        if (uVar6 != 0xffffffff) {
          lVar11 = lVar2 + (ulong)uVar6 * 0x30;
          lVar12 = lVar3 + (ulong)uVar7 * 0x30;
          if (*(int *)(lVar11 + 0x10) != *(int *)(lVar12 + 0x10)) {
            return 0;
          }
          if (*(int *)(lVar11 + 0x14) != *(int *)(lVar12 + 0x14)) {
            return 0;
          }
        }
        uVar18 = (ulong)((int)uVar18 + 1);
      } while (uVar18 < uVar17);
    }
    if (uVar15 != 0) {
      uVar17 = 1;
      uVar18 = 0;
      do {
        uVar20 = uVar17;
        if (*(int *)(lVar14 + 0x38 + uVar18 * 0x30) != *(int *)(lVar21 + 0x38 + uVar18 * 0x30)) {
          return 0;
        }
        uVar17 = (ulong)((int)uVar20 + 1);
        uVar18 = uVar20;
      } while (uVar20 < uVar15);
    }
    if (*(long *)(lVar14 + 0x860) != 0) {
      uVar15 = 0;
      uVar17 = 1;
      do {
        uVar18 = lVar14 + 0x6d8 + uVar15 * 0x1c;
        func_0x00010a19901c(uVar18,lVar21 + 0x6d8 + uVar15 * 0x1c);
        if ((uVar18 & 1) == 0) {
          return uVar18;
        }
        bVar1 = uVar17 < *(ulong *)(lVar21 + 0x860);
        uVar15 = uVar17;
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (bVar1);
      return uVar18;
    }
    return 1;
  }
  return 0;
}



/* Entry: 10a1e4fa4; end: 10a1e52f3;  */

void FUN_10a1e4fa4(int *param_1)

{
  ulong uVar1;
  
  uVar1 = ((long)*param_1 + 0x2853a3c667U ^ 0x9e3779b9) + 0x9e3779b9;
  uVar1 = ((ulong)*(ushort *)(param_1 + 1) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) +
          0x9e3779b9;
  uVar1 = ((ulong)*(byte *)((long)param_1 + 6) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) +
          0x9e3779b9;
  uVar1 = ((ulong)*(byte *)((long)param_1 + 7) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) +
          0x9e3779b9;
  uVar1 = ((ulong)*(byte *)(param_1 + 2) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) +
          0x9e3779b9;
  uVar1 = (((ulong)*(byte *)(param_1 + 6) | uVar1 * 0x40) + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) +
          0x9e3779b9;
  *(ulong *)(param_1 + 4) =
       *(long *)(param_1 + 8) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  return;
}



/* Entry: 10a1e52f4; end: 10a1e536b;  */

undefined1 * FUN_10a1e52f4(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  undefined1 uStack_11;
  
  if (*(long *)(param_1 + 1000) == *(long *)(param_2 + 1000)) {
    lStack_38 = param_1 + 0x28;
    lStack_30 = param_1 + 0xd0;
    lStack_28 = param_1 + 0x110;
    lStack_20 = param_1 + 0x398;
    lStack_60 = param_2 + 0x28;
    lStack_58 = param_2 + 0xd0;
    lStack_50 = param_2 + 0x110;
    lStack_48 = param_2 + 0x398;
    puVar1 = &uStack_11;
    lStack_68 = param_2;
    lStack_40 = param_1;
    func_0x00010a1f4104(puVar1,&lStack_40,&lStack_68);
    return puVar1;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10a1e536c; end: 10a1e5613;  */

long FUN_10a1e536c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 **ppuVar1;
  long lVar2;
  undefined8 **ppuVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long **pplVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_88;
  long *plStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  
  lVar5 = param_1;
  FUN_10a1e46d4(param_1,param_3,param_3 + 0x28,param_3 + 0xd0,param_3 + 0x110,param_3 + 0x398);
  *(undefined1 *)(lVar5 + 0x3c0) = 1;
  uVar6 = 0x18;
  __Znwm(0x18);
  FUN_10a0e3500();
  func_0x00010a19032c((undefined8 *)(param_1 + 0x3c8),uVar6);
  ppuStack_a8 = (long **)0x0;
  ppuStack_a0 = (long **)0x0;
  plStack_b0 = (long *)0x0;
  FUN_10a1763a4(&plStack_b0,
                ((*(long **)(param_3 + 0x3e0))[1] - **(long **)(param_3 + 0x3e0) >> 3) *
                -0x3333333333333333);
  lVar5 = **(long **)(param_3 + 0x3e0);
  lVar2 = (*(long **)(param_3 + 0x3e0))[1];
  if (lVar5 != lVar2) {
    do {
      ppuVar1 = ppuStack_a8;
      if (ppuStack_a8 < ppuStack_a0) {
        FUN_10a1f449c(ppuStack_a8,lVar5);
        pplVar9 = ppuVar1 + 5;
      }
      else {
        lVar12 = (long)ppuStack_a8 - (long)plStack_b0;
        uVar10 = (lVar12 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar10) {
          FUN_10a18fdfc();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1e55b0);
          (*pcVar4)();
        }
        lVar8 = (long)ppuStack_a0 - (long)plStack_b0 >> 3;
        uVar11 = lVar8 * -0x6666666666666666;
        if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
          uVar11 = uVar10;
        }
        if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
          uVar11 = 0x666666666666666;
        }
        ppuStack_68 = &plStack_b0;
        if (uVar11 == 0) {
          pplVar9 = (long **)0x0;
        }
        else {
          pplVar9 = &plStack_b0;
          FUN_10a18fe10();
        }
        lVar12 = (long)pplVar9 + lVar12;
        ppuStack_70 = pplVar9 + uVar11 * 5;
        ppuStack_88 = pplVar9;
        plStack_80 = (long *)lVar12;
        ppuStack_78 = (undefined8 **)lVar12;
        FUN_10a1f449c(lVar12,lVar5);
        ppuStack_78 = (undefined8 **)(lVar12 + 0x28);
        ppuVar1 = (undefined8 **)((long)plStack_b0 + (lVar12 - (long)ppuStack_a8));
        func_0x00010a18fe54(&plStack_b0,plStack_b0,ppuStack_a8,ppuVar1);
        pplVar9 = ppuStack_78;
        ppuVar3 = ppuStack_a0;
        ppuStack_a0 = ppuStack_70;
        ppuStack_a8 = ppuStack_78;
        ppuStack_78 = (undefined8 **)plStack_b0;
        ppuStack_70 = ppuVar3;
        ppuStack_88 = (undefined8 **)plStack_b0;
        plStack_80 = plStack_b0;
        plStack_b0 = (long *)ppuVar1;
        func_0x00010a18ff8c(&ppuStack_88);
      }
      lVar5 = lVar5 + 0x28;
      ppuStack_a8 = pplVar9;
    } while (lVar5 != lVar2);
  }
  plVar7 = (long *)0x18;
  __Znwm();
  plVar7[1] = (long)ppuStack_a8;
  *plVar7 = (long)plStack_b0;
  plVar7[2] = (long)ppuStack_a0;
  ppuStack_a8 = (undefined8 **)0x0;
  ppuStack_a0 = (undefined8 **)0x0;
  plStack_b0 = (long *)0x0;
  func_0x00010a1902ec(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_3 + 1000);
  ppuStack_88 = &plStack_b0;
  FUN_10a18bbf4(&ppuStack_88);
  return param_1;
}



/* Entry: 10a1e5614; end: 10a1e634f;  */

void FUN_10a1e5614(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined7 uStack_68;
  byte bStack_61;
  
  FUN_10a185264(&uStack_78,0x400);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f38bea1,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644a0c,0x12);
  uStack_80 = CONCAT44(uStack_80._4_4_,*param_2);
  FUN_10a190268(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644a1f,0x19);
  uStack_80 = CONCAT71(uStack_80._1_7_,*(undefined1 *)(param_2 + 0x34)) & 0xffffffffffffff01;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644a39,0x11);
  if ((byte)(*(char *)(param_2 + 0x35) - 1U) < 4) {
    uVar5 = (ulong)(byte)(*(char *)(param_2 + 0x35) - 1);
    puVar3 = (&PTR_DAT_110bd0940)[uVar5 * 2];
    uVar4 = *(undefined8 *)(&UNK_110bd0948 + uVar5 * 0x10);
  }
  else {
    puVar3 = &UNK_10f655fe3;
    uVar4 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644a4b,0x12);
  if ((param_2[0x36] & 0xff) < 3) {
    uVar5 = (ulong)(uint)param_2[0x36] & 3;
    puVar3 = (&PTR_DAT_110bd0a90)[uVar5 * 2];
    uVar4 = *(undefined8 *)(&UNK_110bd0a98 + uVar5 * 0x10);
  }
  else {
    puVar3 = &UNK_10f655fe3;
    uVar4 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644a5e,0xd);
  uVar5 = (ulong)*(byte *)(param_2 + 0x37);
  if (uVar5 < 4) {
    puVar3 = (&PTR_DAT_110bd0b60)[uVar5 * 2];
    uVar4 = *(undefined8 *)(&UNK_110bd0b68 + uVar5 * 0x10);
  }
  else {
    puVar3 = &UNK_10f655fe3;
    uVar4 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644a6c,0x11);
  uStack_80._0_1_ = (byte)((uint)param_2[0x34] >> 9) & 1;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644a7e,0xf);
  uStack_80._0_1_ = (byte)((uint)param_2[0x34] >> 10) & 1;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644a8e,0xf);
  uStack_80._0_1_ = (byte)((uint)param_2[0x34] >> 0xb) & 1;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644a9e,0xb);
  if ((param_2[0xe6] & 0xff) < 7) {
    uVar5 = (ulong)(uint)param_2[0xe6] & 7;
    puVar3 = (&PTR_DAT_110bd0bf0)[uVar5 * 2];
    uVar4 = *(undefined8 *)(&UNK_110bd0bf8 + uVar5 * 0x10);
  }
  else {
    puVar3 = &UNK_10f655fe3;
    uVar4 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644aaa,0xf);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,(&PTR_DAT_110bd0c60)[(ulong)(*(short *)(param_2 + 0xe7) != 0) * 2],
             *(undefined8 *)(&UNK_110bd0c68 + (ulong)(*(short *)(param_2 + 0xe7) != 0) * 0x10));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644aba,0xf);
  uVar5 = (ulong)*(byte *)((long)param_2 + 0x39e);
  if (uVar5 < 5) {
    puVar3 = (&PTR_DAT_110bd0ba0)[uVar5 * 2];
    uVar4 = *(undefined8 *)(&UNK_110bd0ba8 + uVar5 * 0x10);
  }
  else {
    puVar3 = &UNK_10f655fe3;
    uVar4 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644aca,0xd);
  uStack_80._0_1_ = *(byte *)(param_2 + 0x34) >> 1 & 1;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644ad8,0x12);
  uVar5 = (ulong)*(byte *)((long)param_2 + 0x39f);
  if (uVar5 < 2) {
    puVar3 = (&PTR_DAT_110bd0b40)[uVar5 * 2];
    uVar4 = *(undefined8 *)(&UNK_110bd0b48 + uVar5 * 0x10);
  }
  else {
    puVar3 = &UNK_10f655fe3;
    uVar4 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644aeb,0x11);
  FUN_10a1e63d4(&uStack_78,param_2[0x38]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644afd,0x12);
  FUN_10a1e63d4(&uStack_78,param_2[0x39]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644b10,0x18);
  FUN_10a1e63d4(&uStack_78,param_2[0x3a]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644b29,0x13);
  uStack_80._0_1_ = *(byte *)(param_2 + 0x34) >> 2 & 1;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644b3d,0x15);
  uStack_80._0_1_ = *(byte *)((long)param_2 + 0xd2) & 1;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644b53,0x15);
  uStack_80._0_1_ = *(byte *)(param_2 + 0x34) >> 3 & 1;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644b69,0x19);
  FUN_10a1e63d4(&uStack_78,param_2[0x3b]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644b83,0x17);
  FUN_10a1e63d4(&uStack_78,param_2[0x3c]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644b9b,0x11);
  uStack_80._0_1_ = *(byte *)(param_2 + 1);
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644bad,0x20);
  uStack_80._0_1_ = *(byte *)(param_2 + 0x34) >> 6 & 1;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644bce,0x27);
  uStack_80._0_1_ = (byte)((uint)param_2[0x34] >> 7) & 1;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644bf6,0x1c);
  uStack_80 = CONCAT71(uStack_80._1_7_,*(undefined1 *)((long)param_2 + 0xd1)) & 0xffffffffffffff01;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  if (*(long *)(param_2 + 0x3e) == 0) {
    puVar3 = &UNK_10f644c13;
    uVar4 = 0x17;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_78,&UNK_10f644c2b,0x15);
    lVar7 = *(long *)(param_2 + 0x3e);
    if (lVar7 != 0) {
      pbVar9 = (byte *)(param_2 + 0x40);
      do {
        uVar5 = (ulong)*pbVar9;
        if (uVar5 < 5) {
          puVar3 = (&PTR_DAT_110bd0c80)[uVar5 * 2];
          uVar4 = *(undefined8 *)(&UNK_110bd0c88 + uVar5 * 0x10);
        }
        else {
          uVar4 = 7;
          puVar3 = &UNK_10f655fe3;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,puVar3,uVar4);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&DAT_10f68f19e,2);
        pbVar9 = pbVar9 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar5 = uStack_70;
    if (-1 < (char)bStack_61) {
      uVar5 = (ulong)bStack_61;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&uStack_78,uVar5 - 2,0);
    puVar3 = &UNK_10f56e06f;
    uVar4 = 3;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644c41,0xc);
  uVar5 = (ulong)*(byte *)((long)param_2 + 0xdd);
  if (uVar5 < 0x11) {
    puVar3 = (&PTR_DAT_110bd0980)[uVar5 * 2];
    uVar4 = *(undefined8 *)(&UNK_110bd0988 + uVar5 * 0x10);
  }
  else {
    puVar3 = &UNK_10f655fe3;
    uVar4 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644c4e,0x14);
  uStack_80 = CONCAT71(uStack_80._1_7_,*(byte *)(param_2 + 0x34) >> 4) & 0xffffffffffffff01;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644c63,0x1b);
  uStack_80 = CONCAT71(uStack_80._1_7_,*(byte *)(param_2 + 0x34) >> 5) & 0xffffffffffffff01;
  FUN_10a1e6350(&uStack_78,&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&UNK_10f644c7f,0x10);
  uVar5 = (ulong)*(byte *)(param_2 + 0xe8);
  if (uVar5 < 3) {
    puVar3 = (&PTR_DAT_110bd0ac0)[uVar5 * 2];
    uVar4 = *(undefined8 *)(&UNK_110bd0ac8 + uVar5 * 0x10);
  }
  else {
    puVar3 = &UNK_10f655fe3;
    uVar4 = 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f56e05b,2);
  if (*(long *)(param_2 + 10) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_78,&UNK_10f644c90,0x10);
    uStack_80 = *(ulong *)(param_2 + 0x18);
    FUN_10a1852ac(&uStack_78,&uStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_78,&UNK_10f644c90,0x10);
    uStack_80 = *(ulong *)(*(long *)(param_2 + 10) + 0x388);
    FUN_10a1852ac(&uStack_78,&uStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
  }
  plVar6 = *(long **)(param_2 + 0xf8);
  if ((plVar6 == (long *)0x0) || (*plVar6 == plVar6[1])) {
    puVar3 = &UNK_10f644ca1;
    uVar4 = 0x18;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_78,&UNK_10f644cba,0x16);
    puVar8 = (undefined8 *)**(long **)(param_2 + 0xf8);
    puVar1 = (undefined8 *)(*(long **)(param_2 + 0xf8))[1];
    if (puVar8 != puVar1) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&DAT_10f38bea1,2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&UNK_10f644cd1,0xf);
        uVar5 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
          uVar5 = (ulong)*(byte *)((long)puVar8 + 0x17);
          puVar2 = puVar8;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,puVar2,uVar5);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&DAT_10f56e05b,2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&UNK_10f644ce1,0x14);
        uStack_80 = CONCAT71(uStack_80._1_7_,*(byte *)((long)puVar8 + 0x23) >> 2) &
                    0xffffffffffffff01;
        FUN_10a1e6350(&uStack_78,&uStack_80);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&UNK_10f644cf6,0xf);
        uStack_80 = CONCAT71(uStack_80._1_7_,*(byte *)((long)puVar8 + 0x23) >> 1) &
                    0xffffffffffffff01;
        FUN_10a1e6350(&uStack_78,&uStack_80);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&UNK_10f644d06,0x12);
        uStack_80 = CONCAT71(uStack_80._1_7_,*(undefined1 *)((long)puVar8 + 0x23)) &
                    0xffffffffffffff01;
        FUN_10a1e6350(&uStack_78,&uStack_80);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&UNK_10f644d19,0xd);
        if ((byte)(*(char *)((long)puVar8 + 0x22) + 1U) < 5) {
          uVar5 = (ulong)(byte)(*(char *)((long)puVar8 + 0x22) + 1);
          puVar3 = (&PTR_DAT_110bd0af0)[uVar5 * 2];
          uVar4 = *(undefined8 *)(&UNK_110bd0af8 + uVar5 * 0x10);
        }
        else {
          uVar4 = 7;
          puVar3 = &UNK_10f655fe3;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,puVar3,uVar4);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&DAT_10f56e05b,2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&UNK_10f644d27,0xd);
        if ((byte)(*(char *)(puVar8 + 4) + 1U) < 5) {
          uVar5 = (ulong)(byte)(*(char *)(puVar8 + 4) + 1);
          puVar3 = (&PTR_DAT_110bd0af0)[uVar5 * 2];
          uVar4 = *(undefined8 *)(&UNK_110bd0af8 + uVar5 * 0x10);
        }
        else {
          uVar4 = 7;
          puVar3 = &UNK_10f655fe3;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,puVar3,uVar4);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&DAT_10f56e05b,2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&UNK_10f644d35,0xd);
        if ((byte)(*(char *)((long)puVar8 + 0x21) + 1U) < 5) {
          uVar5 = (ulong)(byte)(*(char *)((long)puVar8 + 0x21) + 1);
          puVar3 = (&PTR_DAT_110bd0af0)[uVar5 * 2];
          uVar4 = *(undefined8 *)(&UNK_110bd0af8 + uVar5 * 0x10);
        }
        else {
          uVar4 = 7;
          puVar3 = &UNK_10f655fe3;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,puVar3,uVar4);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&DAT_10f68f57e,1);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&UNK_10f644d43,5);
        puVar8 = puVar8 + 5;
      } while (puVar8 != puVar1);
    }
    uVar5 = uStack_70;
    if (-1 < (char)bStack_61) {
      uVar5 = (ulong)bStack_61;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&uStack_78,uVar5 - 3,0);
    puVar3 = &UNK_10f63a482;
    uVar4 = 2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,puVar3,uVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_78,&DAT_10f38bf4b,2);
  if ((char)bStack_61 < '\0') {
    func_0x000107c3192c(param_1,uStack_78,uStack_70);
    if ((char)bStack_61 < '\0') {
      __ZdlPv(uStack_78);
    }
  }
  else {
    param_1[1] = uStack_70;
    *param_1 = uStack_78;
    param_1[2] = CONCAT17(bStack_61,uStack_68);
  }
  return;
}



/* Entry: 10a1e6350; end: 10a1e63d3;  */

undefined8 FUN_10a1e6350(undefined8 param_1,undefined1 *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__19to_stringEi(&ppuStack_38,*param_2);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return param_1;
}



/* Entry: 10a1e63d4; end: 10a1e6457;  */

undefined8 FUN_10a1e63d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__19to_stringEj(&ppuStack_38,param_2);
  pppuVar1 = (undefined8 ***)ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,pppuVar1,uStack_30);
  if ((char)bStack_21 < '\0') {
    __ZdlPv(ppuStack_38);
  }
  return param_1;
}



/* Entry: 10a1e6458; end: 10a1e6583;  */

undefined4 FUN_10a1e6458(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  puVar5 = &uStack_60;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000107c2b07c(auStack_50,&UNK_10f644d49);
  puVar3 = param_1;
  FUN_10a203c54(param_1,auStack_50);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  bVar2 = false;
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c2b07c(auStack_50,&UNK_10f645996);
    puVar3 = puVar3 + 6;
    func_0x00010a203cf4(puVar3,auStack_50);
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
    bVar2 = puVar3 != (undefined8 *)0x0;
  }
  func_0x000109237818(param_2,param_3);
  FUN_10a1e6584();
  puVar4 = param_1;
  FUN_10a776c90();
  uVar1 = puVar4[1];
  puVar3 = (undefined8 *)*puVar4;
  if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x17);
    puVar3 = puVar4;
  }
  FUN_10a0ee2b4(&uStack_60,puVar3,uVar1,0);
  uVar6 = 0;
  if (((bVar2) && (199 < (uint)param_2)) && (uVar6 = 0, puVar5 != (undefined8 *)0xffffffffffffffff))
  {
    uVar6 = SUB84(param_1,0);
  }
  return uVar6;
}



/* Entry: 10a1e6584; end: 10a1e6677;  */

bool FUN_10a1e6584(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)0x19;
  __Znwm();
  puVar2[1] = 0x435f48435441425f;
  *puVar2 = 0x47414c465f53474e;
  *(undefined8 *)((long)puVar2 + 0xf) = 0x54434152544e4f43;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  uStack_30 = -0x7fffffffffffffe7;
  uStack_38 = 0x17;
  uStack_28 = 0;
  puStack_40 = puVar2;
  func_0x000107c2b080(&puStack_40);
  FUN_10a203c54(param_1,&puStack_40);
  if (uStack_30 < 0) {
    __ZdlPv(puStack_40);
  }
  bVar1 = false;
  if (param_1 != 0) {
    puStack_40 = (undefined8 *)0x33;
    uStack_30._7_1_ = '\x01';
    uStack_28 = 0;
    func_0x000107c2b080(&puStack_40);
    param_1 = param_1 + 0x30;
    func_0x00010a203cf4(param_1,&puStack_40);
    bVar1 = param_1 != 0;
    if (uStack_30._7_1_ < '\0') {
      __ZdlPv(puStack_40);
    }
  }
  return bVar1;
}



/* Entry: 10a1e6678; end: 10a1e673b;  */

long * FUN_10a1e6678(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110bb1d70;
  plVar1[5] = (long)&PTR_DAT_110bb1da0;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10a1e673c; end: 10a1e67bf;  */

long * FUN_10a1e673c(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110baf830;
  param_1[5] = (long)&PTR_DAT_110baf860;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_10a203d94(param_1 + 0x15);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb1d70;
  param_1[5] = (long)&PTR_DAT_110bb1da0;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  FUN_10a1f4508(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1e67c0; end: 10a1e67f7;  */

void FUN_10a1e67c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long lVar7;
  long lStack_60;
  long *plStack_58;
  undefined *puStack_50;
  long *plStack_48;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar6 = &puStack_20;
  puStack_20 = &UNK_10f644d5e;
  uStack_18 = 0x34;
  if (*(long *)(param_1 + 0xa8) != 0) {
    return;
  }
  FUN_10a0edfc4();
  if (ppuVar6[0x15] == (undefined *)0x0) {
    (**(code **)((long)*ppuVar6 + 0xb0))(&lStack_60);
    puStack_50 = &UNK_10f644d93;
    plStack_48 = (long *)0x1e;
    if (lStack_60 == 0) {
      FUN_10a0edfc4(&puStack_50);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1e68f8);
      (*pcVar5)();
    }
    lVar7 = (long)ppuVar6[0x12];
    FUN_10a2421c8();
    FUN_10a240104(&puStack_50,*(undefined8 *)(lVar7 + 0x220),lVar7,&lStack_60);
    FUN_10a1e6914(ppuVar6 + 0x15,&puStack_50);
    plVar2 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_58 != (long *)0x0) {
      plVar2 = plStack_58 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
  }
  return;
}



/* Entry: 10a1e67f8; end: 10a1e6913;  */

void FUN_10a1e67f8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
  undefined *puStack_30;
  long *plStack_28;
  
  if (param_1[0x15] == 0) {
    (**(code **)(*param_1 + 0xb0))(&lStack_40);
    puStack_30 = &UNK_10f644d93;
    plStack_28 = (long *)0x1e;
    if (lStack_40 == 0) {
      FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1e68f8);
      (*pcVar5)();
    }
    lVar6 = param_1[0x12];
    FUN_10a2421c8();
    FUN_10a240104(&puStack_30,*(undefined8 *)(lVar6 + 0x220),lVar6,&lStack_40);
    FUN_10a1e6914(param_1 + 0x15,&puStack_30);
    plVar2 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return;
}



/* Entry: 10a1e6914; end: 10a1e6977;  */

undefined8 * FUN_10a1e6914(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1e6978; end: 10a1e6987;  */

void FUN_10a1e6978(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
  undefined *puStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    (**(code **)(*(long *)(param_1 + -0x10) + 0xb0))(&lStack_40);
    puStack_30 = &UNK_10f644d93;
    plStack_28 = (long *)0x1e;
    if (lStack_40 == 0) {
      FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1e68f8);
      (*pcVar5)();
    }
    lVar6 = *(long *)(param_1 + 0x80);
    FUN_10a2421c8();
    FUN_10a240104(&puStack_30,*(undefined8 *)(lVar6 + 0x220),lVar6,&lStack_40);
    FUN_10a1e6914((long *)(param_1 + 0x98),&puStack_30);
    plVar2 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return;
}



/* Entry: 10a1e6988; end: 10a1e69e3;  */

void FUN_10a1e6988(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a1e69e4; end: 10a1e6a83;  */

undefined1  [16] FUN_10a1e69e4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long lStack_40;
  long *plStack_38;
  
  (**(code **)(*param_1 + 0xb0))(&lStack_40);
  if (lStack_40 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = (long)*(char *)(lStack_40 + 0x6f);
    if (lVar5 < 0) {
      lVar6 = *(long *)(lStack_40 + 0x58);
      lVar5 = *(long *)(lStack_40 + 0x60);
    }
    else {
      lVar6 = lStack_40 + 0x58;
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = lVar6;
  return auVar7;
}



/* Entry: 10a1e6a84; end: 10a1e6aef;  */

void FUN_10a1e6a84(undefined8 param_1)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [40];
  undefined1 *puStack_28;
  
  FUN_10a1e69e4();
  FUN_10a1e6af0(auStack_68);
  FUN_10a203dec(param_1,&puStack_28,auStack_68);
  func_0x00010787ad88(auStack_50);
  puStack_28 = auStack_68;
  FUN_10a1f4560(&puStack_28);
  return;
}



/* Entry: 10a1e6af0; end: 10a1e6c6f;  */

void FUN_10a1e6af0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *apuStack_230 [2];
  char cStack_219;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [24];
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_48;
  
  uVar1 = param_2;
  func_0x000109237818();
  if ((uint)uVar1 < 200) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 7) = 0x3f800000;
  }
  else {
    func_0x000109237af0(auStack_1e0,param_2,param_3);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    FUN_10a18d1ac(&lStack_210,auStack_1d8,&uStack_1f8);
    FUN_10a77ed38(param_1,lStack_210,(lStack_208 - lStack_210 >> 3) * -0x3333333333333333);
    for (lVar2 = lStack_1c0; lVar2 != lStack_1b8; lVar2 = lVar2 + 0x20) {
      FUN_10a0d09b4(apuStack_230,lVar2);
      uStack_48 = uStack_218;
      func_0x000107912f84(param_1 + 3,&uStack_48,&uStack_48);
      if (cStack_219 < '\0') {
        __ZdlPv(apuStack_230[0]);
      }
    }
    if (lStack_210 != 0) {
      lStack_208 = lStack_210;
      __ZdlPv();
    }
    apuStack_230[0] = &uStack_1f8;
    func_0x00010a18d7e8(apuStack_230);
    func_0x00010923ff08(auStack_1e0);
  }
  return;
}



/* Entry: 10a1e6c70; end: 10a1e6cab;  */

long FUN_10a1e6c70(long param_1)

{
  long lStack_28;
  
  func_0x00010787ad88(param_1 + 0x18);
  lStack_28 = param_1;
  FUN_10a1f4560(&lStack_28);
  return param_1;
}



/* Entry: 10a1e6cac; end: 10a1e6cff;  */

void FUN_10a1e6cac(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a1e6d00; end: 10a1e6ee3;  */

void FUN_10a1e6d00(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lStack_48;
  
  plVar1 = *(long **)(param_1 + 8);
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar2 = uVar3 >> 3;
  if (((ulong)plVar1 & 7) == 0) {
    if (uVar3 < 8) goto LAB_10a1e6d6c;
    uVar5 = 0;
    plVar4 = plVar1;
    do {
      uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + *plVar4 ^ uVar5;
      uVar2 = uVar2 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar2 != 0);
  }
  else if (uVar3 < 8) {
LAB_10a1e6d6c:
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    plVar4 = plVar1;
    do {
      uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + *plVar4 ^ uVar5;
      uVar2 = uVar2 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar2 != 0);
  }
  lStack_48 = 0;
  if ((uVar3 & 7) == 0) {
    lStack_48 = 0;
  }
  else {
    _memcpy(&lStack_48,(long)plVar1 + (uVar3 - (uVar3 & 7)));
  }
  uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + lStack_48 ^ uVar5;
  uVar5 = uVar3 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  *(ulong *)(param_1 + 0x18) = uVar5;
  if (*(int *)(param_1 + 0x50) != 2) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == *(long **)(param_1 + 0x40)) {
    return;
  }
  uVar2 = (long)*(long **)(param_1 + 0x40) - (long)plVar1;
  uVar3 = uVar2 >> 3;
  if (((ulong)plVar1 & 7) == 0) {
    if (7 < uVar2) {
      uVar6 = 0;
      plVar4 = plVar1;
      do {
        uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + *plVar4 ^ uVar6;
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar3 != 0);
      goto LAB_10a1e6e70;
    }
  }
  else if (7 < uVar2) {
    uVar6 = 0;
    plVar4 = plVar1;
    do {
      uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + *plVar4 ^ uVar6;
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
    goto LAB_10a1e6e70;
  }
  uVar6 = 0;
LAB_10a1e6e70:
  lStack_48 = 0;
  if ((uVar2 & 7) == 0) {
    lStack_48 = 0;
  }
  else {
    _memcpy(&lStack_48,(long)plVar1 + (uVar2 - (uVar2 & 7)));
  }
  uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + lStack_48 ^ uVar6;
  *(ulong *)(param_1 + 0x18) =
       uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) +
       (uVar2 + 0x9e3779b9 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6) ^ uVar5;
  return;
}



/* Entry: 10a1e6ee4; end: 10a1e6fdb;  */

void FUN_10a1e6ee4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_10a08d2e0(&ppuStack_48,param_2 + 0x70);
  pppuVar2 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar2 = &ppuStack_48;
  }
  FUN_10ad03cf0(&uStack_68,pppuVar2,uStack_40);
  if (0x7ffffffffffffff7 < uStack_60) {
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1e6fbc);
    (*pcVar3)();
  }
  if (uStack_60 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uStack_60;
    puVar4 = param_1;
    if (uStack_60 == 0) goto LAB_10a1e6f8c;
  }
  else {
    puVar1 = (ulong *)0x19;
    if ((uStack_60 | 7) != 0x17) {
      puVar1 = (ulong *)((uStack_60 | 7) + 1);
    }
    puVar4 = puVar1;
    __Znwm();
    param_1[1] = uStack_60;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar4;
  }
  _memmove(puVar4,uStack_68,uStack_60);
  param_1 = puVar4;
LAB_10a1e6f8c:
  *(undefined1 *)((long)param_1 + uStack_60) = 0;
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  return;
}



/* Entry: 10a1e6fdc; end: 10a1e7067;  */

undefined1  [16] FUN_10a1e6fdc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f6459b5;
  return auVar1;
}



/* Entry: 10a1e7068; end: 10a1e70bf;  */

void FUN_10a1e7068(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f643dac;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a1e70c0(param_1,&uStack_58);
  FUN_10a204030();
  return;
}



/* Entry: 10a1e70c0; end: 10a1e7197;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e7158) */

undefined1  [16] FUN_10a1e70c0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6459b5,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a203f34(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a1e7198; end: 10a1e71ab;  */

undefined8 * FUN_10a1e7198(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1e71ac; end: 10a1e7217;  */

void FUN_10a1e71ac(void)

{
  FUN_10ac63308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1e7218; end: 10a1e721f;  */

undefined8 FUN_10a1e7218(void)

{
  return 0;
}



/* Entry: 10a1e7220; end: 10a1e7233;  */

void FUN_10a1e7220(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = &UNK_10f644db2;
  FUN_10a00946c();
  if (*(int *)(*(long *)(*(long *)(puVar1 + 0x90) + 0xa20) + 0x18) < 0xca) {
    if ((*(byte *)(param_2 + 0x194) & 1) != 0) {
      return;
    }
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = (ulong)*(uint *)(puVar1 + 0x98);
    if ((*(byte *)(param_2 + 0x194) & 1) != 0) {
      *(uint *)(param_2 + 0x18c) = *(uint *)(puVar1 + 0x98);
      *(undefined1 *)(param_2 + 400) = 1;
      return;
    }
    uVar3 = 0x100000000;
  }
  *(undefined1 *)(param_2 + 0x194) = 1;
  *(ulong *)(param_2 + 0x18c) = uVar3 | uVar2;
  return;
}



/* Entry: 10a1e7234; end: 10a1e7343;  */

void FUN_10a1e7234(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0xa20) + 0x18) < 0xca) {
    if ((*(byte *)(param_2 + 0x194) & 1) != 0) {
      return;
    }
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = (ulong)*(uint *)(param_1 + 0x98);
    if ((*(byte *)(param_2 + 0x194) & 1) != 0) {
      *(uint *)(param_2 + 0x18c) = *(uint *)(param_1 + 0x98);
      *(undefined1 *)(param_2 + 400) = 1;
      return;
    }
    uVar2 = 0x100000000;
  }
  *(undefined1 *)(param_2 + 0x194) = 1;
  *(ulong *)(param_2 + 0x18c) = uVar2 | uVar1;
  return;
}



/* Entry: 10a1e7344; end: 10a1e788b;  */

void FUN_10a1e7344(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6459d5,0x15);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb27b8;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb27b8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"text",FUN_10a2040ec,FUN_10a20419c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2db9ba,FUN_10a2044c4,FUN_10a204574);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644dc7,FUN_10a20462c,FUN_10a204748);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0dc,FUN_10a204e00,FUN_10a204ebc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"textColor",FUN_10a204f94,FUN_10a205064);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644dd1,FUN_10a20512c,FUN_10a2051e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2daf5e,FUN_10a2052b4,FUN_10a205398);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2daf4e,FUN_10a205478,FUN_10a205548);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2db3c4,FUN_10a205618,FUN_10a2056e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6850aa,FUN_10a2057b0,FUN_10a205880);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644ddf,FUN_10a205948,FUN_10a205a04);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644dea,FUN_10a205adc,FUN_10a205b98);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644df6,FUN_10a205c9c,FUN_10a205d6c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f644e03,FUN_10a205e34,FUN_10a205ee8);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6459d5,0x15);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1e7870);
  (*pcVar6)();
}



/* Entry: 10a1e788c; end: 10a1e7963;  */

undefined8 * FUN_10a1e788c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar4 = &puStack_30;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 800,param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_1 + 0x2d8);
  func_0x00010a1ea71c(param_1 + 0x380,param_1 + 0x310);
  if (*(long *)(param_1 + 0x3a8) == 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
    puStack_30 = &UNK_10f653c20;
    uStack_28 = 0x21;
    if (lVar5 == 0) {
      FUN_10a0edfc4();
      func_0x00010a1ff0cc(ppuVar4 + 0xc);
      if (*(char *)((long)ppuVar4 + 0x17) < '\0') {
        __ZdlPv(*ppuVar4);
      }
      return ppuVar4;
    }
    FUN_10a026ab4(param_1 + 0x3a8,lVar5 + 0x128);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x3b0);
  uVar7 = *(undefined8 *)(param_1 + 0x3a8);
  if (*(long *)(param_1 + 0x3b0) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x3b0) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a0) = uVar8;
  *(undefined8 *)(param_1 + 0x398) = uVar7;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return (undefined8 *)(param_1 + 0x398);
}



/* Entry: 10a1e7964; end: 10a1e7adb;  */

undefined8 * FUN_10a1e7964(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 uStack_22;
  
  param_1[0x7b] = &PTR_FUN_110c383b8;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0x100;
  puVar1 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110bafbb0,param_2);
  uStack_22 = 1;
  FUN_10a00db68(puVar1 + 0x51,param_2,&uStack_22);
  *param_1 = &PTR_FUN_110baf938;
  param_1[2] = &PTR_FUN_110bafa70;
  param_1[5] = &PTR_FUN_110bafaa0;
  param_1[0x7b] = &PTR_FUN_110bafb70;
  param_1[0x15] = &PTR_FUN_110bafaf8;
  param_1[0x51] = &PTR_FUN_110bafb18;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((long)param_1 + 0x2cc) = 0x30;
  param_1[0x5b] = 0x3f8000003f800000;
  param_1[0x5a] = 0x3f8000003e800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined8 *)((long)param_1 + 0x331) = 0;
  *(undefined8 *)((long)param_1 + 0x329) = 0;
  *(undefined4 *)((long)param_1 + 0x33c) = 0x30;
  param_1[0x69] = 0x3f8000003f800000;
  param_1[0x68] = 0x3f8000003e800000;
  *(undefined4 *)(param_1 + 0x6a) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = 0;
  *(undefined8 *)((long)param_1 + 0x364) = 0;
  *(undefined8 *)((long)param_1 + 0x374) = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  FUN_10a1e788c(param_1);
  return param_1;
}



/* Entry: 10a1e7adc; end: 10a1e7c3b;  */

long * FUN_10a1e7adc(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bafa70;
  param_1[5] = (long)&PTR_FUN_110bafaa0;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  param_1[0x15] = (long)&PTR_FUN_110bafaf8;
  param_1[0x51] = (long)&PTR_FUN_110bafb18;
  FUN_10a205fa0(param_1 + 0x79);
  FUN_10a205fa0(param_1 + 0x77);
  func_0x00010a0523dc(param_1 + 0x75);
  func_0x00010a0523dc(param_1 + 0x73);
  func_0x00010a1ff0cc(param_1 + 0x70);
  if (*(char *)((long)param_1 + 0x337) < '\0') {
    __ZdlPv(param_1[100]);
  }
  func_0x00010a1ff0cc(param_1 + 0x62);
  if (*(char *)((long)param_1 + 0x2c7) < '\0') {
    __ZdlPv(param_1[0x56]);
  }
  FUN_10a00dc2c(param_1 + 0x51);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3968;
  param_1[5] = (long)&PTR_DAT_110bb3998;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  param_1[0x15] = (long)&PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if ((char)param_1[0x3c] == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = (long)&PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  lVar1 = param_2[2];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110b9f848;
  param_1[5] = (long)&PTR_DAT_110b9f878;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1e7c3c; end: 10a1e7cbf;  */

long FUN_10a1e7c3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  FUN_10a1e7964();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1 + 0x2b0,param_3);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x2c8) = uVar2;
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x40);
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  uVar7 = *(undefined8 *)(param_3 + 0x50);
  uVar6 = *(undefined8 *)(param_3 + 0x48);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_3 + 0x58);
  *(undefined8 *)(param_1 + 0x2f0) = uVar5;
  *(undefined8 *)(param_1 + 0x2e8) = uVar4;
  *(undefined8 *)(param_1 + 0x300) = uVar7;
  *(undefined8 *)(param_1 + 0x2f8) = uVar6;
  *(undefined8 *)(param_1 + 0x2e0) = uVar3;
  *(undefined8 *)(param_1 + 0x2d8) = uVar2;
  func_0x00010a1ea71c(param_1 + 0x310,param_3 + 0x60);
  return param_1;
}



/* Entry: 10a1e7cc0; end: 10a1e7ccb;  */

undefined8 * FUN_10a1e7cc0(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110baf938;
  param_1[2] = &PTR_FUN_110bafa70;
  param_1[5] = &PTR_FUN_110bafaa0;
  param_1[0x7b] = &PTR_FUN_110bafb70;
  param_1[0x15] = &PTR_FUN_110bafaf8;
  param_1[0x51] = &PTR_FUN_110bafb18;
  FUN_10a205fa0(param_1 + 0x79);
  FUN_10a205fa0(param_1 + 0x77);
  func_0x00010a0523dc(param_1 + 0x75);
  func_0x00010a0523dc(param_1 + 0x73);
  func_0x00010a1ff0cc(param_1 + 0x70);
  if (*(char *)((long)param_1 + 0x337) < '\0') {
    __ZdlPv(param_1[100]);
  }
  func_0x00010a1ff0cc(param_1 + 0x62);
  if (*(char *)((long)param_1 + 0x2c7) < '\0') {
    __ZdlPv(param_1[0x56]);
  }
  FUN_10a00dc2c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110bb1598;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x7b] = &PTR_DAT_110bb16f8;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110bb1748;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x7b] = &PTR_DAT_110bb1818;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1e7ccc; end: 10a1e8137;  */

void FUN_10a1e7ccc(undefined8 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  byte bVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *unaff_x23;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  undefined ***pppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x248))(param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_5 + 0x78,plVar7);
  uStack_c8 = 0x10a205ff8;
  ppuStack_c0 = &PTR_FUN_110bb2390;
  puStack_148 = (undefined8 *)0x0;
  lStack_140 = 0;
  uStack_150 = 0;
  uStack_138 = uStack_138 & 0xffffff00;
  uStack_134 = 0x30;
  uStack_128 = 0x3f8000003f800000;
  uStack_130 = 0x3f8000003e800000;
  uStack_120 = 0x3f800000;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_10c = 0;
  fStack_108 = 0.0;
  uStack_fc = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plVar7 = param_6;
  lStack_b8 = param_5;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bb1e60);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110bb1e60);
    (**(code **)(*param_6 + 0xa8))(&uStack_88,param_6,&PTR_s_text_110bb1f60,&UNK_10f643dac,0);
    if (lStack_140 < 0) {
      __ZdlPv(uStack_150);
    }
    puStack_148 = puStack_80;
    uStack_150 = uStack_88;
    lStack_140 = lStack_78;
    plVar7 = param_6;
    (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110bb1e80);
    if ((int)plVar7 != 0) {
      uStack_88 = uStack_c8;
      unaff_x23 = &uStack_88;
      (*(code *)ppuStack_c0[2])(&puStack_80,&ppuStack_c0);
      FUN_10a1f46a0(param_6,&PTR_DAT_110bb1e80,&uStack_88,0);
      (*(code *)*puStack_80)(&puStack_80);
    }
    plVar7 = param_6;
    (**(code **)(*param_6 + 0xd0))(param_6,&PTR_DAT_110bb1f80,uStack_134);
    uStack_134 = (uint)plVar7;
    if (uStack_134 < 3) {
      uStack_134 = 2;
    }
    if (799 < uStack_134) {
      uStack_134 = 800;
    }
    auVar16 = NEON_fmov(0x3f800000,4);
    uStack_d8 = auVar16._8_8_;
    uStack_e0 = auVar16._0_8_;
    uVar13 = (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110bb1fa0,&uStack_e0);
    uStack_128 = CONCAT44(param_3,param_2);
    plVar7 = param_6;
    uStack_120 = param_4;
    uStack_130._4_4_ = uVar13;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bb1ea0,0);
    uStack_158 = 0x3f80000000000000;
    uStack_160 = 0;
    uStack_d8 = 0x3f80000000000000;
    uStack_e0 = 0;
    uStack_138._0_1_ = (byte)uStack_138 & 0xfe | (byte)plVar7;
    uStack_10c = (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110bb1ec0,&uStack_e0);
    fStack_108 = param_2;
    uStack_104 = param_3;
    uStack_100 = param_4;
    fVar14 = (float)(**(code **)(*param_6 + 0xe0))(param_6,&PTR_DAT_110bb1ee0,&UNK_10e49dd4c);
    uVar17 = NEON_fmov(0xbf800000,4);
    uVar17 = CONCAT44(param_2,fVar14) ^
             (CONCAT44(param_2,fVar14) ^ uVar17) &
             CONCAT44(-(uint)(param_2 < (float)(uVar17 >> 0x20)),-(uint)(fVar14 < (float)uVar17));
    uVar18 = NEON_fmov(0x3f800000,4);
    uVar20 = CONCAT44(-(uint)((float)(uVar18 >> 0x20) < (float)(uVar17 >> 0x20)),
                      -(uint)((float)uVar18 < (float)uVar17));
    uVar17 = uVar17 ^ (uVar17 ^ uVar18) & uVar20;
    uStack_fc = (undefined4)uVar17;
    uStack_f8 = (undefined4)(uVar17 >> 0x20);
    plVar7 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110bb1f00,0);
    uVar19 = (undefined4)uVar20;
    uVar13 = (undefined4)uVar18;
    bVar10 = 2;
    if ((int)plVar7 == 0) {
      bVar10 = 0;
    }
    uStack_138 = CONCAT31(uStack_138._1_3_,(byte)uStack_138 & 0xfd | bVar10);
    uStack_d8 = uStack_158;
    uStack_e0 = uStack_160;
    uStack_11c = (**(code **)(*param_6 + 0x110))(param_6,&PTR_DAT_110bb1f20,&uStack_e0);
    uStack_118 = uVar13;
    uStack_114 = uVar19;
    uStack_110 = param_4;
    fVar15 = (float)(**(code **)(*param_6 + 0x48))(param_6,&PTR_DAT_110bb1f40);
    fVar14 = 0.0;
    if (0.0 <= fVar15) {
      fVar14 = fVar15;
    }
    fVar15 = 1.0;
    if (fVar14 <= 1.0) {
      fVar15 = fVar14;
    }
    uStack_130 = CONCAT44(uStack_130._4_4_,fVar15);
    (**(code **)(*param_6 + 0x220))(param_6);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_5 + 0x2b0,&uStack_150);
  *(undefined4 *)(param_5 + 0x308) = uStack_f8;
  *(ulong *)(param_5 + 0x2f0) = CONCAT44(uStack_10c,uStack_110);
  *(ulong *)(param_5 + 0x2e8) = CONCAT44(uStack_114,uStack_118);
  *(ulong *)(param_5 + 0x300) = CONCAT44(uStack_fc,uStack_100);
  *(ulong *)(param_5 + 0x2f8) = CONCAT44(uStack_104,fStack_108);
  *(undefined8 *)(param_5 + 0x2d0) = uStack_130;
  *(ulong *)(param_5 + 0x2c8) = CONCAT44(uStack_134,uStack_138);
  *(ulong *)(param_5 + 0x2e0) = CONCAT44(uStack_11c,uStack_120);
  *(undefined8 *)(param_5 + 0x2d8) = uStack_128;
  plVar7 = &lStack_f0;
  func_0x00010a1ea71c(param_5 + 0x310);
  plVar6 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar1 = plStack_e8 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  pppuVar8 = &ppuStack_c0;
  (*(code *)*ppuStack_c0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*puStack_80)(unaff_x23 + 1);
  func_0x00010a1ff0cc(&lStack_f0);
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  pppuVar9 = pppuVar8;
  __Unwind_Resume();
  pcStack_168 = FUN_10a1e8138;
  ppuStack_1a0 = (undefined **)&UNK_10f6459d5;
  ppuStack_198 = (undefined **)0x15;
  puStack_190 = &uStack_150;
  puStack_188 = &uStack_c8;
  plStack_180 = param_6;
  pppuStack_178 = pppuVar8;
  puStack_170 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar7 + 0x30))(plVar7,&PTR_DAT_110bb1c58,&ppuStack_1a0);
  (**(code **)(*plVar7 + 0x18))(plVar7,&PTR_DAT_110bb1e60);
  FUN_10a00d760(plVar7,&PTR_s_text_110bb1f60,pppuVar9 + 0x56);
  ppuStack_1a0 = pppuVar9[0x62];
  if ((ppuStack_1a0 == (undefined **)0x0) || (((ulong)ppuStack_1a0[1] & 1) != 0)) {
    ppuStack_1a0 = (undefined **)0x0;
    ppuStack_198 = (undefined **)0x0;
  }
  else {
    ppuStack_198 = pppuVar9[99];
    if (ppuStack_198 != (undefined **)0x0) {
      ppuVar2 = ppuStack_198 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar5) {
          *ppuVar2 = *ppuVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  FUN_10a1f4a50(plVar7,&PTR_DAT_110bb1e80,&ppuStack_1a0,&UNK_10f645a1b,10);
  ppuVar2 = ppuStack_198;
  if (ppuStack_198 != (undefined **)0x0) {
    ppuVar3 = ppuStack_198 + 1;
    do {
      puVar12 = *ppuVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
      if (bVar5) {
        *ppuVar3 = puVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar12 == (undefined *)0x0) {
      (**(code **)(*ppuStack_198 + 0x10))(ppuStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
    }
  }
  (**(code **)(*plVar7 + 0x50))(plVar7,&PTR_DAT_110bb1f80,*(undefined4 *)((long)pppuVar9 + 0x2cc));
  (**(code **)(*plVar7 + 0x90))(plVar7,&PTR_DAT_110bb1fa0,(long)pppuVar9 + 0x2d4);
  (**(code **)(*plVar7 + 0x70))(plVar7,&PTR_DAT_110bb1ea0,*(byte *)(pppuVar9 + 0x59) & 1);
  (**(code **)(*plVar7 + 0x90))(plVar7,&PTR_DAT_110bb1ec0,(long)pppuVar9 + 0x2f4);
  (**(code **)(*plVar7 + 0x78))(plVar7,&PTR_DAT_110bb1ee0,(long)pppuVar9 + 0x304);
  (**(code **)(*plVar7 + 0x70))(plVar7,&PTR_DAT_110bb1f00,*(byte *)(pppuVar9 + 0x59) >> 1 & 1);
  (**(code **)(*plVar7 + 0x90))(plVar7,&PTR_DAT_110bb1f20,(long)pppuVar9 + 0x2e4);
  (**(code **)(*plVar7 + 0x60))(plVar7,&PTR_DAT_110bb1f40);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return;
}



/* Entry: 10a1e8138; end: 10a1e835b;  */

void FUN_10a1e8138(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puStack_40;
  long *plStack_38;
  
  puStack_40 = &UNK_10f6459d5;
  plStack_38 = (long *)0x15;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bb1c58,&puStack_40);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bb1e60);
  FUN_10a00d760(param_2,&PTR_s_text_110bb1f60,param_1 + 0x2b0);
  puStack_40 = *(undefined **)(param_1 + 0x310);
  if ((puStack_40 == (undefined *)0x0) || ((puStack_40[8] & 1) != 0)) {
    puStack_40 = (undefined *)0x0;
    plStack_38 = (long *)0x0;
  }
  else {
    plStack_38 = *(long **)(param_1 + 0x318);
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_10a1f4a50(param_2,&PTR_DAT_110bb1e80,&puStack_40,&UNK_10f645a1b,10);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110bb1f80,*(undefined4 *)(param_1 + 0x2cc));
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110bb1fa0,param_1 + 0x2d4);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bb1ea0,*(byte *)(param_1 + 0x2c8) & 1);
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110bb1ec0,param_1 + 0x2f4);
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bb1ee0,param_1 + 0x304);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bb1f00,*(byte *)(param_1 + 0x2c8) >> 1 & 1);
  (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110bb1f20,param_1 + 0x2e4);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x2d0),param_2,&PTR_DAT_110bb1f40);
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a1e835c; end: 10a1e860f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e859c) */

void FUN_10a1e835c(undefined8 param_1,long param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  long lStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_70;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  FUN_10a597328(&pppuStack_68,*(undefined8 *)(*(long *)(param_2 + 0x90) + 0x900));
  plVar7 = (long *)(param_3 + 0x60);
  if (*plVar7 == 0) {
    FUN_10a770ff4(&lStack_88,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 0x888) + 0x40));
    FUN_10a1e8610(plVar7,&lStack_88);
    plVar5 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  uStack_70 = 0;
  if ((*(byte *)(param_3 + 0x18) >> 1 & 1) != 0) {
    fVar8 = *(float *)(param_3 + 0x20);
    if (0.05 <= fVar8) {
      fVar8 = (fVar8 + -0.05) * (fVar8 + -0.05) * 47.0 + 3.0;
    }
    else {
      fVar8 = (fVar8 / 0.05) * 3.0;
    }
    uStack_70 = CONCAT44(fVar8,1);
  }
  uVar2 = *(uint *)(param_3 + 0x1c);
  if (uVar2 == 0) {
    fVar8 = 0.0;
  }
  else if (uVar2 < 0xc9) {
    fVar8 = (((float)uVar2 + -16.0) / 184.0) * -245.0 + 326.0;
  }
  else {
    fVar8 = 81.0;
  }
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
    pppuStack_68 = &pppuStack_68;
  }
  FUN_10a1c0bf8(&lStack_88,pppuStack_68,uStack_60,0);
  lStack_b8 = CONCAT44(lStack_b8._4_4_,0x3f800000);
  FUN_10a14e0c0(&plStack_a0,((long)plStack_80 - lStack_88 >> 4) * -0x5555555555555555,&lStack_b8);
  lStack_b8 = *plVar7;
  uStack_b0 = 0;
  uStack_a8 = 0;
  FUN_10a9e5bac(param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 0xa90) + 0x18),
                &lStack_88,&plStack_a0,&lStack_b8,0,0,0,0,(int)((fVar8 / 72.0) * (float)uVar2),
                param_4,&uStack_70,0);
  if (plStack_a0 != (long *)0x0) {
    plStack_98 = plStack_a0;
    __ZdlPv();
  }
  plStack_a0 = &lStack_88;
  FUN_10a1cd268(&plStack_a0);
  return;
}



/* Entry: 10a1e8610; end: 10a1e8673;  */

undefined8 * FUN_10a1e8610(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1e8674; end: 10a1e87a7;  */

int FUN_10a1e8674(undefined8 param_1,long *param_2)

{
  float *pfVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *param_2;
  if (param_2[1] == lStack_68) {
    iVar6 = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    uVar9 = 0;
    iVar10 = 0;
    iVar6 = 0;
    do {
      lStack_68 = lStack_68 + lVar7;
      plVar3 = param_2 + 3;
      FUN_10a206104(plVar3,lStack_68,&UNK_10dd5b8f9,&lStack_68,&uStack_69);
      uVar5 = (param_2[9] - param_2[8] >> 2) * -0x5555555555555555;
      if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1e87a8);
        (*pcVar2)();
      }
      fVar11 = *(float *)((long)plVar3 + 0x7c);
      pfVar1 = (float *)(param_2[8] + lVar8);
      iVar4 = (int)((float)iVar10 + fVar11 * (*(float *)(plVar3 + 0xc) + *pfVar1) +
                   (float)(int)(fVar11 * (float)(int)plVar3[0xe]));
      if (iVar6 <= iVar4) {
        iVar6 = iVar4;
      }
      iVar10 = (int)((float)iVar10 + fVar11 * (float)(int)pfVar1[2]);
      uVar9 = uVar9 + 1;
      lStack_68 = *param_2;
      uVar5 = (param_2[1] - lStack_68 >> 3) * -0x3333333333333333;
      lVar8 = lVar8 + 0xc;
      lVar7 = lVar7 + 0x28;
    } while (uVar9 <= uVar5 && uVar5 - uVar9 != 0);
  }
  return iVar6;
}



/* Entry: 10a1e87a8; end: 10a1e88c3;  */

float FUN_10a1e87a8(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_180 [144];
  long lStack_f0;
  long lStack_e8;
  long *plStack_48;
  long *plStack_38;
  
  FUN_10a1e835c(auStack_180,param_1,param_2,0);
  if (lStack_e8 == 0) {
    fVar5 = 0.0;
  }
  else {
    for (; lStack_f0 != 0; lStack_f0 = *(long *)lStack_f0) {
    }
    FUN_10a1e8674();
    fVar5 = (float)(param_1 & 0xffffffff);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  FUN_10a1f4af8(auStack_180);
  return fVar5;
}



/* Entry: 10a1e88c4; end: 10a1e88f3;  */

long FUN_10a1e88c4(long param_1)

{
  long lStack_28;
  
  func_0x00010a1f4b9c(param_1 + 0x140);
  func_0x00010a1f4b9c(param_1 + 0x130);
  func_0x000107c2826c(param_1 + 0x108);
  if (*(char *)(param_1 + 0x107) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xd8);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0xc0;
  func_0x00010a1f4bf4(&lStack_28);
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  FUN_10a1f4c88(param_1 + 0x80);
  func_0x00010a1f4cfc(param_1 + 0x58);
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  func_0x00010a1f4dc4(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x00010a1f4ebc(&lStack_28);
  return param_1;
}



/* Entry: 10a1e88f4; end: 10a1ea003;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e8d74) */
/* WARNING: Removing unreachable block (ram,0x00010a1e8acc) */
/* WARNING: Removing unreachable block (ram,0x00010a1e9e30) */

code ** FUN_10a1e88f4(long param_1,long *param_2)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  code **ppcVar15;
  bool bVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  code **ppcVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined4 uVar26;
  long lVar27;
  byte bVar28;
  byte bVar29;
  byte bVar34;
  byte bVar35;
  float fVar30;
  float fVar31;
  uint uVar32;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar40;
  byte bVar41;
  uint uVar39;
  byte bVar42;
  byte bVar43;
  undefined1 auVar33 [16];
  float fVar44;
  uint uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fStack_4c0;
  long *plStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  code *pcStack_460;
  long lStack_458;
  undefined1 auStack_448 [16];
  long *plStack_438;
  long lStack_420;
  long lStack_418;
  long *plStack_3d0;
  long lStack_330;
  long *plStack_328;
  long lStack_320;
  long *plStack_318;
  code *pcStack_310;
  long *plStack_308;
  long lStack_300;
  code **ppcStack_2f8;
  long *aplStack_2f0 [2];
  undefined8 uStack_2e0;
  char acStack_2d9 [57];
  code *pcStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)(param_1 + 0x2b0);
  plVar1 = (long *)(param_1 + 800);
  bVar28 = *(byte *)(param_1 + 0x2c7);
  uVar23 = *(ulong *)(param_1 + 0x2b8);
  uVar25 = uVar23;
  if (-1 < (char)bVar28) {
    uVar25 = (ulong)bVar28;
  }
  bVar43 = *(byte *)(param_1 + 0x337);
  uVar3 = *(ulong *)(param_1 + 0x328);
  if (-1 < (char)bVar43) {
    uVar3 = (ulong)bVar43;
  }
  if (uVar25 == uVar3) {
    plVar17 = (long *)*plVar14;
    if (-1 < (char)bVar28) {
      plVar17 = plVar14;
    }
    plVar11 = (long *)*plVar1;
    if (-1 < (char)bVar43) {
      plVar11 = plVar1;
    }
    _memcmp(plVar17,plVar11);
    if (((((int)plVar17 != 0) || (*(int *)(param_1 + 0x2cc) != *(int *)(param_1 + 0x33c))) ||
        (*(long *)(param_1 + 0x310) != *(long *)(param_1 + 0x380))) ||
       (*(char *)(param_1 + 0x2c8) != *(char *)(param_1 + 0x338))) goto LAB_10a1e8aec;
    iVar22 = 0;
    fVar30 = *(float *)(param_1 + 0x2d4) - *(float *)(param_1 + 0x344);
    fVar44 = *(float *)(param_1 + 0x2d8) - *(float *)(param_1 + 0x348);
    fVar47 = *(float *)(param_1 + 0x2dc) - *(float *)(param_1 + 0x34c);
    if (fVar30 < 0.0) {
      fVar30 = -fVar30;
    }
    if (fVar44 < 0.0) {
      fVar44 = -fVar44;
    }
    if (fVar47 < 0.0) {
      fVar47 = -fVar47;
    }
    pcStack_2a0 = (code *)CONCAT71(pcStack_2a0._1_7_,1);
    pcStack_460._0_1_ = 1;
    pcStack_310 = (code *)CONCAT71(pcStack_310._1_7_,1);
    bVar9 = ABS(*(float *)(param_1 + 0x2e0) - *(float *)(param_1 + 0x350)) < 1e-06;
    do {
      if (iVar22 == 1) {
        ppcVar15 = &pcStack_460;
        fVar50 = fVar44;
      }
      else if (iVar22 == 2) {
        ppcVar15 = &pcStack_310;
        fVar50 = fVar47;
      }
      else {
        if (iVar22 == 3) goto LAB_10a1e8a88;
        ppcVar15 = &pcStack_2a0;
        fVar50 = fVar30;
      }
      *(bool *)ppcVar15 = fVar50 < 1e-06;
      iVar22 = iVar22 + 1;
    } while (iVar22 != 4);
    bVar9 = true;
LAB_10a1e8a88:
    iVar22 = 0;
    while (((uVar25 = (ulong)(byte)pcStack_460, iVar22 == 1 ||
            (uVar25 = (ulong)pcStack_310 & 0xff, iVar22 == 2)) ||
           (uVar25 = (ulong)pcStack_2a0 & 0xff, iVar22 != 3))) {
      while (iVar22 = iVar22 + 1, (uVar25 & 1) == 0) {
        if (iVar22 == 3) goto LAB_10a1e8aec;
        uVar25 = 0;
      }
    }
    if (!bVar9) goto LAB_10a1e8aec;
    iVar22 = 0;
    fVar30 = *(float *)(param_1 + 0x2f4) - *(float *)(param_1 + 0x364);
    fVar44 = *(float *)(param_1 + 0x2f8) - *(float *)(param_1 + 0x368);
    fVar47 = *(float *)(param_1 + 0x2fc) - *(float *)(param_1 + 0x36c);
    if (fVar30 < 0.0) {
      fVar30 = -fVar30;
    }
    if (fVar44 < 0.0) {
      fVar44 = -fVar44;
    }
    if (fVar47 < 0.0) {
      fVar47 = -fVar47;
    }
    pcStack_2a0 = (code *)CONCAT71(pcStack_2a0._1_7_,1);
    pcStack_460._0_1_ = 1;
    pcStack_310 = (code *)CONCAT71(pcStack_310._1_7_,1);
    bVar9 = ABS(*(float *)(param_1 + 0x300) - *(float *)(param_1 + 0x370)) < 1e-06;
    do {
      if (iVar22 == 1) {
        ppcVar15 = &pcStack_460;
        fVar50 = fVar44;
      }
      else if (iVar22 == 2) {
        ppcVar15 = &pcStack_310;
        fVar50 = fVar47;
      }
      else {
        if (iVar22 == 3) goto LAB_10a1e8d30;
        ppcVar15 = &pcStack_2a0;
        fVar50 = fVar30;
      }
      *(bool *)ppcVar15 = fVar50 < 1e-06;
      iVar22 = iVar22 + 1;
    } while (iVar22 != 4);
    bVar9 = true;
LAB_10a1e8d30:
    iVar22 = 0;
    while (((uVar25 = (ulong)(byte)pcStack_460, iVar22 == 1 ||
            (uVar25 = (ulong)pcStack_310 & 0xff, iVar22 == 2)) ||
           (uVar25 = (ulong)pcStack_2a0 & 0xff, iVar22 != 3))) {
      while (iVar22 = iVar22 + 1, (uVar25 & 1) == 0) {
        if (iVar22 == 3) goto LAB_10a1e8aec;
        uVar25 = 0;
      }
    }
    if (!bVar9) goto LAB_10a1e8aec;
    iVar22 = 0x100;
    if (1e-06 <= ABS(*(float *)(param_1 + 0x308) - *(float *)(param_1 + 0x378))) {
      iVar22 = 0;
    }
    if (ABS(*(float *)(param_1 + 0x304) - *(float *)(param_1 + 0x374)) < 1e-06) {
      iVar22 = iVar22 + 1;
    }
    if (iVar22 != 0x101) goto LAB_10a1e8aec;
    ppcVar15 = (code **)(param_1 + 0x2e4);
    FUN_10a1f4f48(ppcVar15,param_1 + 0x354);
    iVar22 = 0;
    while (((ppcVar21 = (code **)((ulong)ppcVar15 >> 8 & 0xffffff), iVar22 == 1 ||
            (ppcVar21 = (code **)((ulong)ppcVar15 >> 0x10 & 0xffff), iVar22 == 2)) ||
           (ppcVar21 = ppcVar15, iVar22 != 3))) {
      while (iVar22 = iVar22 + 1, ((ulong)ppcVar21 & 1) == 0) {
        if (iVar22 == 3) goto LAB_10a1e8aec;
        ppcVar21 = (code **)0x0;
      }
    }
    if ((((ulong)ppcVar15 & 0xff000000) == 0) ||
       (1e-06 <= ABS(*(float *)(param_1 + 0x2d0) - *(float *)(param_1 + 0x340))))
    goto LAB_10a1e8aec;
LAB_10a1e9d3c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return ppcVar15;
    }
LAB_10a1e9e5c:
    ___stack_chk_fail();
  }
  else {
LAB_10a1e8aec:
    if (-1 < (char)bVar28) {
      if (bVar28 != 0) goto LAB_10a1e8af4;
LAB_10a1e8b68:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
        ppcVar15 = (code **)&stack0xffffffffffffffd0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_1 + 800,param_1 + 0x2b0);
        *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x2f0);
        *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x2e8);
        *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x300);
        *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x2f8);
        *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_1 + 0x308);
        *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x2d0);
        *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x2c8);
        *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x2e0);
        *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_1 + 0x2d8);
        func_0x00010a1ea71c(param_1 + 0x380,param_1 + 0x310);
        if (*(long *)(param_1 + 0x3a8) == 0) {
          lVar18 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
          if (lVar18 == 0) {
            FUN_10a0edfc4();
            func_0x00010a1ff0cc(ppcVar15 + 0xc);
            if (*(char *)((long)ppcVar15 + 0x17) < '\0') {
              __ZdlPv(*ppcVar15);
            }
            return ppcVar15;
          }
          FUN_10a026ab4(param_1 + 0x3a8,lVar18 + 0x128);
        }
        pcVar8 = *(code **)(param_1 + 0x3a8);
        uVar49 = *(undefined8 *)(param_1 + 0x3b0);
        if (*(long *)(param_1 + 0x3b0) != 0) {
          plVar14 = (long *)(*(long *)(param_1 + 0x3b0) + 8);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = *plVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar14 = *(long **)(param_1 + 0x3a0);
        *(undefined8 *)(param_1 + 0x3a0) = uVar49;
        *(code **)(param_1 + 0x398) = pcVar8;
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
          do {
            lVar18 = *plVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        return (code **)(param_1 + 0x398);
      }
      goto LAB_10a1e9e5c;
    }
    if (uVar23 == 0) goto LAB_10a1e8b68;
LAB_10a1e8af4:
    FUN_10a1e835c(&pcStack_460,param_1,plVar14,1);
    if (plStack_438 == (long *)0x0) {
LAB_10a1e8bac:
      FUN_10a1e788c(param_1);
LAB_10a1e9cc4:
      if (plStack_318 != (long *)0x0) {
        plVar14 = plStack_318 + 1;
        do {
          lVar18 = *plVar14;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_318 + 0x10))(plStack_318);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_318);
        }
      }
      if (plStack_328 != (long *)0x0) {
        plVar14 = plStack_328 + 1;
        do {
          lVar18 = *plVar14;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_328 + 0x10))(plStack_328);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_328);
        }
      }
      ppcVar15 = &pcStack_460;
      FUN_10a1f4af8(ppcVar15);
      goto LAB_10a1e9d3c;
    }
    bVar43 = 0;
    bVar28 = 0;
    do {
      if (plStack_438[10] != 0) {
        bVar28 = *(byte *)(plStack_438 + 0xf) ^ 1 | bVar28;
        bVar43 = *(byte *)(plStack_438 + 0xf) | bVar43;
        if (((bVar43 & 1) != 0) && ((bVar28 & 1) != 0)) {
          bVar28 = 1;
          goto LAB_10a1e8bc8;
        }
      }
      plStack_438 = (long *)*plStack_438;
    } while (plStack_438 != (long *)0x0);
    if (((bVar43 | bVar28) & 1) == 0) goto LAB_10a1e8bac;
    if ((bVar43 & 1) == 0) {
      lVar18 = 0;
      FUN_10a2421c8();
      plVar17 = *(long **)(lVar18 + 0x228);
      (**(code **)(*plVar17 + 0x68))();
      if ((char)plVar17[0xf] == '\x01') {
        fVar44 = *(float *)(param_1 + 0x2d4);
        if (((ABS(fVar44 - *(float *)(param_1 + 0x2dc)) < 1e-06) &&
            (ABS(*(float *)(param_1 + 0x2d8) - *(float *)(param_1 + 0x2dc)) < 1e-06)) &&
           (ABS(fVar44 - *(float *)(param_1 + 0x2d8)) < 1e-06)) {
          bVar43 = *(byte *)(param_1 + 0x2c8);
          if ((bVar43 & 1) == 0) {
            if ((bVar43 >> 1 & 1) == 0) {
              if (ABS(fVar44 - *(float *)(param_1 + 0x2e0)) < 1e-06) {
                bVar6 = false;
                bVar7 = false;
                bVar9 = true;
                uVar26 = 1;
                goto LAB_10a1e8e1c;
              }
            }
            else {
LAB_10a1e8dcc:
              if (((1e-06 <= ABS(*(float *)(param_1 + 0x2e4) - *(float *)(param_1 + 0x2ec))) ||
                  (1e-06 <= ABS(*(float *)(param_1 + 0x2e8) - *(float *)(param_1 + 0x2ec)))) ||
                 (1e-06 <= ABS(*(float *)(param_1 + 0x2e4) - *(float *)(param_1 + 0x2e8))))
              goto LAB_10a1e8e10;
            }
          }
          else {
            if (((1e-06 <= ABS(*(float *)(param_1 + 0x2f4) - *(float *)(param_1 + 0x2fc))) ||
                (1e-06 <= ABS(*(float *)(param_1 + 0x2f8) - *(float *)(param_1 + 0x2fc)))) ||
               (1e-06 <= ABS(*(float *)(param_1 + 0x2f4) - *(float *)(param_1 + 0x2f8))))
            goto LAB_10a1e8e10;
            if ((bVar43 >> 1 & 1) != 0) goto LAB_10a1e8dcc;
          }
          bVar9 = false;
          uVar26 = 2;
          bVar6 = false;
          bVar7 = true;
          goto LAB_10a1e8e1c;
        }
      }
LAB_10a1e8e10:
      bVar6 = false;
      bVar7 = false;
      bVar9 = false;
      uVar26 = 4;
    }
    else {
LAB_10a1e8bc8:
      bVar9 = false;
      uVar26 = 4;
      bVar6 = true;
      bVar7 = false;
    }
LAB_10a1e8e1c:
    if (plStack_3d0 == (long *)0x0) {
      fVar44 = 0.0;
    }
    else {
      fVar44 = 0.0;
      fVar47 = 0.0;
      plVar17 = plStack_3d0;
      do {
        fVar44 = (float)((uint)fVar44 ^
                        ((uint)fVar44 ^ (uint)*(float *)(plVar17 + 7)) &
                        -(uint)(fVar44 < *(float *)(plVar17 + 7)));
        fVar47 = (float)((uint)fVar47 ^
                        ((uint)fVar47 ^ (uint)*(float *)((long)plVar17 + 0x3c)) &
                        -(uint)(fVar47 < *(float *)((long)plVar17 + 0x3c)));
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
      fVar44 = fVar44 + fVar47 + 0.0;
    }
    puStack_488 = (undefined8 *)0x0;
    uStack_480 = CONCAT44(fVar44,0x45800000);
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    pcStack_2a0 = FUN_10a1f5030;
    uStack_298 = &PTR_DAT_110950c70;
    ppcStack_2f8 = (code **)0x0;
    uStack_470 = 0;
    FUN_10a1ea004(&lStack_468,0,0x3f800000,&puStack_488,&pcStack_460,&pcStack_2a0,1,3,0,0,2,
                  &pcStack_310,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0xa20),1);
    if (ppcStack_2f8 == &pcStack_310) {
      lVar18 = 0x20;
LAB_10a1e8f08:
      (**(code **)(*ppcStack_2f8 + lVar18))();
    }
    else if (ppcStack_2f8 != (code **)0x0) {
      lVar18 = 0x28;
      goto LAB_10a1e8f08;
    }
    (*(code *)*uStack_298)(&uStack_298);
    if (*(long *)(lStack_468 + 0x20) == *(long *)(lStack_468 + 0x18)) goto LAB_10a1e9e6c;
    fVar47 = *(float *)(lStack_468 + 0x3c);
    fVar50 = *(float *)(lStack_468 + 0x34);
    fStack_4c0 = *(float *)(lStack_468 + 0x38) - *(float *)(lStack_468 + 0x30);
    fVar44 = *(float *)(*(long *)(*(long *)(lStack_468 + 0x18) + 0x28) + 0x28);
    fVar30 = 0.0;
    if (0.0 < fVar44) {
      fVar30 = fVar44 * *(float *)(lStack_468 + 0x10);
      lVar18 = CONCAT71(pcStack_460._1_7_,(byte)pcStack_460);
      if (lStack_458 != lVar18) {
        lVar24 = 0;
        uVar25 = 0;
        lVar27 = 8;
        do {
          pcStack_2a0 = (code *)(lVar18 + lVar24);
          puVar10 = auStack_448;
          FUN_10a206104(puVar10,pcStack_2a0,&UNK_10dd5b8f9,&pcStack_2a0,&pcStack_310);
          if (0 < *(int *)(puVar10 + 0x70) && 0 < *(int *)(puVar10 + 0x74)) break;
          uVar23 = (lStack_418 - lStack_420 >> 2) * -0x5555555555555555;
          if (uVar23 < uVar25 || uVar23 - uVar25 == 0) goto LAB_10a1e9e6c;
          lVar18 = CONCAT71(pcStack_460._1_7_,(byte)pcStack_460);
          fVar30 = fVar30 + *(float *)(lStack_468 + 0x10) *
                            *(float *)(puVar10 + 0x7c) * (float)*(int *)(lStack_420 + lVar27);
          uVar25 = uVar25 + 1;
          uVar23 = (lStack_458 - lVar18 >> 3) * -0x3333333333333333;
          lVar27 = lVar27 + 0xc;
          lVar24 = lVar24 + 0x28;
        } while (uVar25 <= uVar23 && uVar23 - uVar25 != 0);
      }
      fStack_4c0 = fStack_4c0 + fVar30;
    }
    uVar49 = 0;
    if ((*(byte *)(param_1 + 0x2c8) >> 1 & 1) != 0) {
      fVar51 = 0.0;
      fVar44 = 0.0;
      for (; plStack_3d0 != (long *)0x0; plStack_3d0 = (long *)*plStack_3d0) {
        fVar31 = *(float *)(plStack_3d0 + 7);
        if (*(float *)(plStack_3d0 + 7) <= fVar44) {
          fVar31 = fVar44;
        }
        fVar44 = fVar31;
      }
      lVar18 = CONCAT71(pcStack_460._1_7_,(byte)pcStack_460);
      if (lStack_458 != lVar18) {
        lVar27 = 0;
        uVar25 = 0;
        fVar51 = 0.0;
        do {
          puVar10 = auStack_448;
          FUN_10a20cf48(puVar10,lVar18 + lVar27);
          if (puVar10 == (undefined1 *)0x0) goto LAB_10a1e9e4c;
          fVar31 = fVar51;
          if ((*(long *)(puVar10 + 0x50) != 0) && (*(long *)(puVar10 + 0xa0) != 0)) {
            fVar48 = (fVar44 - *(float *)(puVar10 + 100)) - (fVar44 - *(float *)(puVar10 + 0xb4));
            if (fVar48 < 0.0) {
              fVar48 = -fVar48;
            }
            lVar24 = *(long *)(*(long *)(puVar10 + 0xa0) + 0x18);
            lVar18 = *(long *)(*(long *)(puVar10 + 0x50) + 0x18);
            fVar31 = ((fVar44 - *(float *)(puVar10 + 0xb4)) +
                     (float)(*(int *)(lVar24 + 0xc) - *(int *)(lVar24 + 4))) -
                     ((fVar44 - *(float *)(puVar10 + 100)) +
                     (float)(*(int *)(lVar18 + 0xc) - *(int *)(lVar18 + 4)));
            if (fVar31 < 0.0) {
              fVar31 = -fVar31;
            }
            if (fVar31 <= fVar48) {
              fVar31 = fVar48;
            }
            if (fVar31 <= fVar51) {
              fVar31 = fVar51;
            }
          }
          fVar51 = fVar31;
          uVar25 = uVar25 + 1;
          lVar18 = CONCAT71(pcStack_460._1_7_,(byte)pcStack_460);
          uVar23 = (lStack_458 - lVar18 >> 3) * -0x3333333333333333;
          lVar27 = lVar27 + 0x28;
        } while (uVar25 <= uVar23 && uVar23 - uVar25 != 0);
      }
      if (lStack_458 == lVar18) goto LAB_10a1e9e6c;
      puVar10 = auStack_448;
      FUN_10a20cf48();
      if (puVar10 != (undefined1 *)0x0) {
        fVar44 = 0.0;
        if ((*(long *)(puVar10 + 0x50) != 0) && (*(long *)(puVar10 + 0xa0) != 0)) {
          fVar44 = *(float *)(puVar10 + 0x60) - *(float *)(puVar10 + 0xb0);
          if (fVar44 < 0.0) {
            fVar44 = -fVar44;
          }
          if (fVar44 <= 0.0) {
            fVar44 = 0.0;
          }
        }
        if (lStack_458 == CONCAT71(pcStack_460._1_7_,(byte)pcStack_460)) goto LAB_10a1e9e6c;
        puVar10 = auStack_448;
        FUN_10a20cf48(puVar10,lStack_458 + -0x28);
        if (puVar10 != (undefined1 *)0x0) {
          uVar49 = CONCAT44(fVar51,fVar44);
          if ((*(long *)(puVar10 + 0x50) != 0) && (*(long *)(puVar10 + 0xa0) != 0)) {
            piVar19 = *(int **)(*(long *)(puVar10 + 0x50) + 0x18);
            piVar20 = *(int **)(*(long *)(puVar10 + 0xa0) + 0x18);
            fVar31 = (*(float *)(puVar10 + 0x60) + (float)(piVar19[2] - *piVar19)) -
                     (*(float *)(puVar10 + 0xb0) + (float)(piVar20[2] - *piVar20));
            if (fVar31 < 0.0) {
              fVar31 = -fVar31;
            }
            if (fVar31 <= fVar44) {
              fVar31 = fVar44;
            }
            uVar49 = CONCAT44(fVar51,fVar31);
          }
          goto LAB_10a1e9228;
        }
      }
LAB_10a1e9e4c:
      FUN_109ffdddc(&UNK_10f639994);
      goto LAB_10a1e9e6c;
    }
LAB_10a1e9228:
    fVar47 = fVar47 - fVar50;
    pbVar2 = (byte *)(param_1 + 0x2c8);
    if ((*pbVar2 & 1) != 0) {
      fVar44 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2cc));
      fVar50 = *(float *)(param_1 + 0x304) * fVar44 * 0.25;
      fVar44 = -*(float *)(param_1 + 0x308) * fVar44 * 0.25;
      uVar25 = CONCAT44(fVar44,fVar50) ^
               (CONCAT44(fVar44,fVar50) ^ CONCAT44(-fVar44,-fVar50)) &
               ~CONCAT44(-(uint)(0.0 <= fVar44),-(uint)(0.0 <= fVar50));
      uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) + (float)(uVar25 >> 0x20),
                        (float)uVar49 + (float)uVar25);
    }
    fVar50 = fStack_4c0 + (float)uVar49 * 2.0;
    fVar44 = 1.0;
    if (4096.0 < fVar50) {
      fVar44 = 4096.0 / fVar50;
      fStack_4c0 = fStack_4c0 * fVar44;
      fVar47 = fVar47 * fVar44;
      fVar50 = (float)uVar49 * fVar44;
      uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) * fVar44,fVar50);
      fVar50 = (float)(int)(fStack_4c0 + fVar50 * 2.0);
    }
    iVar22 = (int)(fVar47 + (float)((ulong)uVar49 >> 0x20) * 2.0);
    plVar17 = param_2;
    (**(code **)(*param_2 + 0xb8))(param_2,(int)fVar50,iVar22,uVar26);
    if (((ulong)plVar17 & 1) == 0) {
      uVar32 = (int)fVar50 - 1;
      uVar39 = iVar22 - 1;
      uVar45 = uVar32 >> 1;
      uVar46 = uVar39 >> 1;
      bVar29 = (byte)uVar45 | (byte)uVar32;
      bVar34 = (byte)(uVar45 >> 8) | (byte)(uVar32 >> 8);
      bVar35 = (byte)(uVar45 >> 0x10) | (byte)(uVar32 >> 0x10);
      bVar37 = (byte)(uVar32 >> 0x18);
      bVar37 = bVar37 >> 1 | bVar37;
      uVar32 = CONCAT13(bVar37,CONCAT12(bVar35,CONCAT11(bVar34,bVar29)));
      bVar38 = (byte)uVar46 | (byte)uVar39;
      bVar40 = (byte)(uVar46 >> 8) | (byte)(uVar39 >> 8);
      bVar43 = (byte)(uVar39 >> 0x18);
      bVar41 = (byte)(uVar46 >> 0x10) | (byte)(uVar39 >> 0x10);
      bVar43 = bVar43 >> 1 | bVar43;
      uVar39 = uVar32 >> 2;
      uVar45 = (uint)(CONCAT17(bVar43,CONCAT16(bVar41,CONCAT15(bVar40,CONCAT14(bVar38,uVar32)))) >>
                     0x22);
      bVar29 = (byte)uVar39 | bVar29;
      bVar34 = (byte)(uVar39 >> 8) | bVar34;
      bVar35 = (byte)(uVar39 >> 0x10) | bVar35;
      bVar37 = bVar37 >> 2 | bVar37;
      uVar32 = CONCAT13(bVar37,CONCAT12(bVar35,CONCAT11(bVar34,bVar29)));
      bVar38 = (byte)uVar45 | bVar38;
      bVar40 = (byte)(uVar45 >> 8) | bVar40;
      bVar41 = (byte)(uVar45 >> 0x10) | bVar41;
      bVar43 = bVar43 >> 2 | bVar43;
      uVar39 = uVar32 >> 4;
      uVar32 = (uint)(CONCAT17(bVar43,CONCAT16(bVar41,CONCAT15(bVar40,CONCAT14(bVar38,uVar32)))) >>
                     0x24);
      bVar34 = (byte)(uVar39 >> 8) | bVar34;
      bVar35 = (byte)(uVar39 >> 0x10) | bVar35;
      bVar37 = bVar37 >> 4 | bVar37;
      bVar40 = (byte)(uVar32 >> 8) | bVar40;
      bVar41 = (byte)(uVar32 >> 0x10) | bVar41;
      bVar43 = bVar43 >> 4 | bVar43;
      bVar36 = bVar37 | bVar35;
      bVar42 = bVar43 | bVar41;
      iVar22 = CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar37 | bVar35 | bVar34,
                                                        bVar36 | bVar34 | (byte)uVar39 | bVar29)));
      uVar49 = NEON_ucvtf(CONCAT44((int)(CONCAT17(bVar43,CONCAT16(bVar42,CONCAT15(bVar43 | bVar41 | 
                                                  bVar40,CONCAT14(bVar42 | bVar40 | (byte)uVar32 |
                                                                                    bVar38,iVar22)))
                                                 ) >> 0x20) + 1,iVar22 + 1),4);
      uVar49 = CONCAT44(((float)((ulong)uVar49 >> 0x20) - fVar47) * 0.5,
                        ((float)uVar49 - fStack_4c0) * 0.5);
    }
    *(undefined8 *)(param_1 + 0x390) = uVar49;
    lVar18 = *(long *)(param_1 + 0x90);
    FUN_10a2421c8();
    fVar50 = (float)((ulong)uVar49 >> 0x20);
    fVar51 = (float)(int)(fStack_4c0 + (float)uVar49 + (float)uVar49);
    fVar47 = (float)(int)(fVar47 + fVar50 + fVar50);
    plVar17 = *(long **)(lVar18 + 0x228);
    pcStack_2a0 = (code *)((ulong)(uint)(int)fVar51 << 0x20);
    uStack_298 = (undefined **)CONCAT44(1,(int)fVar47);
    uStack_28c = 0;
    uStack_288 = 1;
    uStack_284 = 1;
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_278 = uStack_278 & 0xffffffffffffff00;
    uStack_290 = uVar26;
    (**(code **)(*plVar17 + 0x20))(plVar17,&pcStack_2a0);
    FUN_10a099d88((long *)(param_1 + 0x398),plVar17);
    pcStack_2a0 = (code *)0x0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    plStack_f0 = (long *)0x0;
    uStack_e0 = 0xffffffffffffffff;
    uStack_d8 = 0xffffffffffffffff;
    uStack_c0 = 0;
    plStack_c8 = (long *)0x0;
    uStack_d0 = 0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
    uStack_a8 = 0x3f800000;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    plStack_308 = (long *)0x0;
    pcStack_310 = (code *)0x0;
    lStack_300 = 0;
    ppcStack_2f8 = (code **)0xffffffffffffffff;
    aplStack_2f0[0] = (long *)0xffffffffffffffff;
    aplStack_2f0[1] = (long *)0x0;
    acStack_2d9[1] = '\0';
    acStack_2d9[2] = '\0';
    acStack_2d9[3] = '\0';
    acStack_2d9[4] = '\0';
    acStack_2d9[5] = '\0';
    acStack_2d9[6] = '\0';
    acStack_2d9[7] = '\0';
    acStack_2d9[8] = '\0';
    uStack_2e0 = (long *)0x0;
    acStack_2d9[9] = -1;
    acStack_2d9[10] = -1;
    acStack_2d9[0xb] = -1;
    acStack_2d9[0xc] = -1;
    acStack_2d9[0xd] = -1;
    acStack_2d9[0xe] = -1;
    acStack_2d9[0xf] = -1;
    acStack_2d9[0x10] = -1;
    acStack_2d9[0x11] = -1;
    acStack_2d9[0x12] = -1;
    acStack_2d9[0x13] = -1;
    acStack_2d9[0x14] = -1;
    acStack_2d9[0x15] = -1;
    acStack_2d9[0x16] = -1;
    acStack_2d9[0x17] = -1;
    acStack_2d9[0x18] = -1;
    acStack_2d9[0x21] = '\0';
    acStack_2d9[0x22] = '\0';
    acStack_2d9[0x23] = '\0';
    acStack_2d9[0x24] = '\0';
    acStack_2d9[0x25] = '\0';
    acStack_2d9[0x26] = '\0';
    acStack_2d9[0x27] = '\0';
    acStack_2d9[0x28] = '\0';
    acStack_2d9[0x19] = '\0';
    acStack_2d9[0x1a] = '\0';
    acStack_2d9[0x1b] = '\0';
    acStack_2d9[0x1c] = '\0';
    acStack_2d9[0x1d] = '\0';
    acStack_2d9[0x1e] = '\0';
    acStack_2d9[0x1f] = '\0';
    acStack_2d9[0x20] = '\0';
    acStack_2d9[0x29] = '\0';
    acStack_2d9[0x2a] = '\0';
    acStack_2d9[0x2b] = '\0';
    acStack_2d9[0x2c] = '\0';
    acStack_2d9[0x2d] = '\0';
    acStack_2d9[0x2e] = '\0';
    acStack_2d9[0x2f] = '\0';
    acStack_2d9[0x30] = '\0';
    FUN_10a061728(&pcStack_2a0,&pcStack_310);
    uVar49 = uStack_2e0;
    if ((long *)uStack_2e0 != (long *)0x0) {
      plVar17 = (long *)(uStack_2e0 + 8);
      do {
        lVar18 = *plVar17;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar16) {
          *plVar17 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*(long *)uStack_2e0 + 0x10))(uStack_2e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(uVar49);
      }
    }
    plVar17 = plStack_308;
    if (plStack_308 != (long *)0x0) {
      plVar11 = plStack_308 + 1;
      do {
        lVar18 = *plVar11;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar16) {
          *plVar11 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_308 + 0x10))(plStack_308);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    uStack_298 = *(undefined ***)(param_1 + 0x398);
    lVar18 = *(long *)(param_1 + 0x3a0);
    if (lVar18 != 0) {
      plVar17 = (long *)(lVar18 + 8);
      do {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar16) {
          *plVar17 = *plVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar17 = (long *)CONCAT44(uStack_28c,uStack_290);
    uStack_290 = (undefined4)lVar18;
    uStack_28c = (undefined4)((ulong)lVar18 >> 0x20);
    if (plVar17 != (long *)0x0) {
      plVar11 = plVar17 + 1;
      do {
        lVar18 = *plVar11;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar16) {
          *plVar11 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
      }
    }
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xffffffffffffffff;
    uStack_278 = 0xffffffffffffffff;
    uStack_240 = 0x3f800000;
    uStack_248 = 0x3f8000003f800000;
    uStack_a0 = 2;
    uStack_9c = 2;
    uStack_480 = 0;
    uStack_478 = 0;
    puStack_488 = &uStack_480;
    if (bVar9) {
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb1fc0);
      FUN_10a20e230(&puStack_488,&pcStack_310,&pcStack_310);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
      uStack_248 = uStack_248 & 0xffffffff00000000;
    }
    else if (bVar7) {
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb1fd8);
      FUN_10a20e230(&puStack_488,&pcStack_310,&pcStack_310);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
      uStack_248 = uStack_248 & 0xffffffff;
    }
    else {
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb1ff0);
      FUN_10a20e230(&puStack_488,&pcStack_310,&pcStack_310);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
    }
    (**(code **)(*param_2 + 0x88))(param_2,&pcStack_2a0);
    plStack_308 = (long *)CONCAT44((int)fVar47,(int)fVar51);
    pcStack_310 = (code *)0x0;
    (**(code **)(*param_2 + 0xc0))(param_2,&pcStack_310);
    fVar30 = fVar30 * fVar44 + *(float *)(param_1 + 0x390);
    fVar50 = *(float *)(param_1 + 0x394) -
             (*(float *)(lStack_468 + 0xc) - *(float *)(lStack_468 + 4)) *
             (1.0 - *(float *)(lStack_468 + 0x10));
    if ((bVar28 & 1) != 0) {
      plVar17 = (long *)(param_1 + 0x3c8);
      lVar18 = *(long *)(param_1 + 0x3c8);
      if (lVar18 == 0) {
        FUN_10a20e2f8(&pcStack_310);
        FUN_10a1ea3e8(plVar17,&pcStack_310);
        plVar11 = plStack_308;
        if (plStack_308 != (long *)0x0) {
          plVar13 = plStack_308 + 1;
          do {
            lVar18 = *plVar13;
            cVar5 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar16) {
              *plVar13 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_308 + 0x10))(plStack_308);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        lVar18 = *plVar17;
      }
      plVar11 = param_2 + 4;
      FUN_10a5dfd94(plVar11,*(undefined8 *)(lVar18 + 0x10));
      plVar13 = param_2 + 4;
      FUN_10a01eacc(plVar13,plVar11);
      if ((undefined8 **)plVar13[0x2b] != &puStack_488) {
        FUN_10a1f503c((undefined8 **)plVar13[0x2b],puStack_488,&uStack_480);
      }
      plVar11 = *(long **)(lStack_330 + 0x28);
      (**(code **)(*plVar11 + 0x28))();
      plVar12 = *(long **)(lStack_330 + 0x28);
      (**(code **)(*plVar12 + 0x30))();
      lVar18 = *plVar17;
      *(float *)(lVar18 + 0x20) = (float)((ulong)plVar11 & 0xffffffff);
      *(float *)(lVar18 + 0x24) = (float)((ulong)plVar12 & 0xffffffff);
      *(float *)(lVar18 + 0x28) = fVar51;
      *(float *)(lVar18 + 0x2c) = fVar47;
      FUN_10a1768e8(*plVar17,lStack_330 + 0x28);
      plVar17 = (long *)*plVar17;
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb2008);
      if (*plVar17 == 0) {
        uVar49 = 0;
      }
      else {
        uVar49 = *(undefined8 *)(*plVar17 + 0x268);
      }
      FUN_10a5e17a8(plVar13,&pcStack_310,uVar49,&UNK_10e4ac8a8);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
      bVar28 = *pbVar2;
      if ((bVar28 & 1) != 0) {
        fVar31 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2cc));
        if ((bVar28 >> 1 & 1) == 0) {
          bVar16 = false;
        }
        else {
          bVar16 = 0.0 < *(float *)(param_1 + 0x2d0);
        }
        FUN_10a1ea44c(fVar30 + *(float *)(param_1 + 0x304) * fVar31 * 0.25,
                      fVar50 - *(float *)(param_1 + 0x308) * fVar31 * 0.25,fVar44,param_1,param_2,
                      lStack_468,param_1 + 0x2f4,bVar16,0);
        bVar28 = *pbVar2;
      }
      if (((bVar28 >> 1 & 1) != 0) && (0.0 < *(float *)(param_1 + 0x2d0))) {
        FUN_10a1ea44c(fVar30,fVar50,fVar44,param_1,param_2,lStack_468,param_1 + 0x2e4,1,0);
      }
      FUN_10a1ea44c(fVar30,fVar50,fVar44,param_1,param_2,lStack_468,param_1 + 0x2d4,0,0);
    }
    if (!bVar6) {
LAB_10a1e9ac0:
      lVar18 = *(long *)(param_1 + 0x398);
      if ((lVar18 != 0) &&
         (___dynamic_cast(lVar18,&PTR_DAT_110ba0e18,&PTR_DAT_110c54570,0), lVar18 != 0)) {
        uVar4 = *(undefined4 *)(lVar18 + 0x7c);
        FUN_10a303694(1);
        if (bVar9) {
          FUN_10a303840();
          _glTexParameteri(uVar4,0x8e42,1);
          _glTexParameteri(uVar4,0x8e43,1);
          _glTexParameteri(uVar4,0x8e44,1);
          uVar49 = 0x1903;
        }
        else {
          if (!bVar7) goto LAB_10a1e9ba0;
          FUN_10a303840();
          _glTexParameteri(uVar4,0x8e42,0x1903);
          _glTexParameteri(uVar4,0x8e43,0x1903);
          _glTexParameteri(uVar4,0x8e44,0x1903);
          uVar49 = 0x1904;
        }
        _glTexParameteri(uVar4,0x8e45,uVar49);
      }
LAB_10a1e9ba0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar1,plVar14);
      *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x2f0);
      *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x2e8);
      *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x300);
      *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x2f8);
      *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_1 + 0x308);
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x2d0);
      *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)pbVar2;
      *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x2e0);
      *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_1 + 0x2d8);
      func_0x00010a1ea71c(param_1 + 0x380,param_1 + 0x310);
      plVar14 = *(long **)(param_1 + 0x398);
      (**(code **)(*plVar14 + 0x70))();
      FUN_10a1da3a4(param_1,(int)fVar51,(int)fVar47,0,0,uVar26,plVar14,0);
      (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
      FUN_10a0da1b8(&puStack_488,uStack_480);
      plVar14 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar1 = plStack_c8 + 1;
        do {
          lVar18 = *plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      plVar14 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        plVar1 = plStack_f0 + 1;
        do {
          lVar18 = *plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      func_0x00010a048e34(&uStack_298,pcStack_2a0);
      lVar18 = lStack_468;
      lStack_468 = 0;
      if (lVar18 != 0) {
        func_0x00010a20e1b8(&lStack_468);
      }
      goto LAB_10a1e9cc4;
    }
    plVar17 = (long *)(param_1 + 0x3b8);
    if (*(long *)(param_1 + 0x3b8) != 0) {
LAB_10a1e99d4:
      plVar11 = *(long **)(lStack_320 + 0x28);
      (**(code **)(*plVar11 + 0x28))();
      plVar13 = *(long **)(lStack_320 + 0x28);
      (**(code **)(*plVar13 + 0x30))();
      lVar18 = *plVar17;
      *(float *)(lVar18 + 0x20) = (float)((ulong)plVar11 & 0xffffffff);
      *(float *)(lVar18 + 0x24) = (float)((ulong)plVar13 & 0xffffffff);
      *(float *)(lVar18 + 0x28) = fVar51;
      *(float *)(lVar18 + 0x2c) = fVar47;
      FUN_10a1768e8(*plVar17,lStack_320 + 0x28);
      plVar11 = param_2 + 4;
      FUN_10a5dfd94(plVar11,*(undefined8 *)(*plVar17 + 0x10));
      plVar13 = param_2 + 4;
      FUN_10a01eacc(plVar13,plVar11);
      plVar17 = (long *)*plVar17;
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb2008);
      if (*plVar17 == 0) {
        uVar49 = 0;
      }
      else {
        uVar49 = *(undefined8 *)(*plVar17 + 0x268);
      }
      FUN_10a5e17a8(plVar13,&pcStack_310,uVar49,&UNK_10e4ac8a8);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
      auVar33 = NEON_fmov(0x3f800000,4);
      plStack_308 = auVar33._8_8_;
      pcStack_310 = auVar33._0_8_;
      FUN_10a1ea44c(fVar30,fVar50,fVar44,param_1,param_2,lStack_468,&pcStack_310,0,1);
      goto LAB_10a1e9ac0;
    }
    FUN_10a20e2f8(&pcStack_310);
    FUN_10a1ea3e8(plVar17,&pcStack_310);
    plVar11 = plStack_308;
    if (plStack_308 != (long *)0x0) {
      plVar13 = plStack_308 + 1;
      do {
        lVar18 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_308 + 0x10))(plStack_308);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = *(long **)(*(long *)(*plVar17 + 0x10) + 0x228);
    if (*(long **)(*(long *)(*plVar17 + 0x10) + 0x230) != plVar11) {
      lVar18 = *plVar11;
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb1ff0);
      func_0x000107c2b074(aplStack_2f0,&PTR_DAT_110bb2020);
      FUN_10a0d9f14(&plStack_4a0,&pcStack_310,2,&uStack_470);
      FUN_10a0da1b8((long *)(lVar18 + 0x200),*(undefined8 *)(lVar18 + 0x208));
      *(long **)(lVar18 + 0x200) = plStack_4a0;
      *(long *)(lVar18 + 0x208) = lStack_498;
      *(long *)(lVar18 + 0x210) = lStack_490;
      if (lStack_490 == 0) {
        *(long *)(lVar18 + 0x200) = lVar18 + 0x208;
      }
      else {
        plStack_4a0 = &lStack_498;
        *(long *)(lStack_498 + 0x10) = lVar18 + 0x208;
        lStack_498 = 0;
        lStack_490 = 0;
      }
      FUN_10a0da1b8(&plStack_4a0,lStack_498);
      lVar18 = 0;
      do {
        if (((char *)((long)register0x00000008 + -0x2d9))[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)aplStack_2f0 + lVar18));
        }
        lVar18 = lVar18 + -0x20;
      } while (lVar18 != -0x40);
      goto LAB_10a1e99d4;
    }
  }
  FUN_10a00946c(&UNK_10f6921f0);
LAB_10a1e9e6c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1e9e70);
  (*pcVar8)();
}



/* Entry: 10a1ea004; end: 10a1ea3e7;  */

void FUN_10a1ea004(long *param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,int param_10,int param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,float *param_16)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  
  FUN_10a206870(&lStack_78,param_4,param_5,param_7,param_8,param_9,param_12,param_13,param_14,0);
  lVar3 = lStack_78;
  if (*(long *)(lStack_78 + 0x10) != 0) {
    if (*(char *)(param_6[1] + 8) == '\x01') {
      (*(code *)*param_6)(*(undefined4 *)(lStack_78 + 0x18));
      if (param_6 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0xb0;
        __Znwm();
        *(undefined8 *)((long)puVar4 + 0x2c) = 0;
        *(undefined8 *)((long)puVar4 + 0x24) = 0;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0;
        *(undefined8 *)((long)puVar4 + 0x14) = 0;
        *(undefined8 *)((long)puVar4 + 0x3c) = 0;
        *(undefined8 *)((long)puVar4 + 0x34) = 0;
        *(undefined8 *)((long)puVar4 + 0x4c) = 0;
        *(undefined8 *)((long)puVar4 + 0x44) = 0;
        *(undefined8 *)((long)puVar4 + 0x5c) = 0;
        *(undefined8 *)((long)puVar4 + 0x54) = 0;
        *(undefined8 *)((long)puVar4 + 0x6c) = 0;
        *(undefined8 *)((long)puVar4 + 100) = 0;
        *(undefined8 *)((long)puVar4 + 0x7c) = 0;
        *(undefined8 *)((long)puVar4 + 0x74) = 0;
        *(undefined8 *)((long)puVar4 + 0x8c) = 0;
        *(undefined8 *)((long)puVar4 + 0x84) = 0;
        *(undefined4 *)(puVar4 + 2) = 0x3f800000;
        puVar4[4] = 0;
        puVar4[3] = 0;
        puVar4[6] = 0;
        puVar4[5] = 0;
        puVar4[8] = 0;
        puVar4[7] = 0;
        puVar4[10] = 0;
        puVar4[9] = 0;
        puVar4[0xc] = 0;
        puVar4[0xb] = 0;
        puVar4[0xe] = 0;
        puVar4[0xd] = 0;
        puVar4[0x10] = 0;
        puVar4[0xf] = 0;
        puVar4[0x11] = 0;
        *(undefined4 *)(puVar4 + 0x12) = 0x3f800000;
        *(undefined4 *)((long)puVar4 + 0x94) = 0;
        puVar4[0x13] = 0;
        puVar4[0x14] = 0;
        puVar4[0x15] = 0;
        uVar11 = *(undefined8 *)param_4;
        puVar4[1] = *(undefined8 *)(param_4 + 2);
        *puVar4 = uVar11;
        *param_1 = (long)puVar4;
        goto LAB_10a1ea370;
      }
      iVar9 = (int)param_8;
      iVar10 = (int)param_7;
      iVar2 = iVar10;
      if (iVar9 == 3) {
        iVar2 = 1;
      }
      iVar1 = 0;
      if (iVar2 == 0) {
        iVar1 = iVar9;
      }
      uVar5 = 0;
      if ((int)param_9 == 2) {
        uVar5 = (uint)(iVar9 == 2);
        iVar10 = 1;
      }
      iVar2 = 0;
      if (iVar10 == 0) {
        iVar2 = (int)param_9;
      }
      FUN_10a206870(&uStack_98,param_2,param_3,param_4,param_6,0,iVar1,iVar2,param_12,param_13,
                    param_14,uVar5 | 0x100);
      uVar11 = uStack_98;
      uStack_98 = 0;
      func_0x00010a20ca08(&lStack_78,uVar11);
      func_0x00010a20ca08(&uStack_98,0);
      param_5 = param_6;
    }
    else {
      for (lVar7 = *(long *)(lStack_78 + 8); lVar7 != lVar3; lVar7 = *(long *)(lVar7 + 8)) {
        FUN_10a24f238(*(undefined4 *)(lVar3 + 0x18),lVar7 + 0x10);
      }
    }
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_10a24f5f0(param_3,lStack_78);
    FUN_10a24fa04(lStack_78,param_4,param_10,param_11,&uStack_98);
    FUN_10a206a94(&lStack_80,&lStack_78,param_4,param_5,param_13);
    *(undefined4 *)(lStack_80 + 0x34) = uStack_98._4_4_;
    *(undefined4 *)(lStack_80 + 0x3c) = uStack_90._4_4_;
    lVar3 = *(long *)(lStack_80 + 0x58);
    if (lVar3 != *(long *)(lStack_80 + 0x60)) {
      uVar6 = *(long *)(lStack_80 + 0x60) - lVar3 >> 6;
      *(undefined4 *)(lVar3 + 0x34) = uStack_90._4_4_;
      if (1 < uVar6) {
        lVar7 = uVar6 - 1;
        pfVar8 = (float *)(lVar3 + 0x74);
        do {
          *pfVar8 = pfVar8[-0x10] - pfVar8[-0x11];
          lVar7 = lVar7 + -1;
          pfVar8 = pfVar8 + 0x10;
        } while (lVar7 != 0);
      }
    }
    *param_1 = lStack_80;
    goto LAB_10a1ea370;
  }
  puVar4 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined8 *)((long)puVar4 + 0x2c) = 0;
  *(undefined8 *)((long)puVar4 + 0x24) = 0;
  *(undefined8 *)((long)puVar4 + 0x1c) = 0;
  *(undefined8 *)((long)puVar4 + 0x14) = 0;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0;
  *(undefined8 *)((long)puVar4 + 0x34) = 0;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0;
  *(undefined8 *)((long)puVar4 + 0x44) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = 0;
  *(undefined8 *)((long)puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 0x6c) = 0;
  *(undefined8 *)((long)puVar4 + 100) = 0;
  *(undefined8 *)((long)puVar4 + 0x7c) = 0;
  *(undefined8 *)((long)puVar4 + 0x74) = 0;
  *(undefined8 *)((long)puVar4 + 0x8c) = 0;
  *(undefined8 *)((long)puVar4 + 0x84) = 0;
  *(undefined4 *)(puVar4 + 2) = 0x3f800000;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[0xe] = 0;
  puVar4[0xd] = 0;
  puVar4[0x10] = 0;
  puVar4[0xf] = 0;
  puVar4[0x11] = 0;
  *(undefined4 *)(puVar4 + 0x12) = 0x3f800000;
  *(undefined4 *)((long)puVar4 + 0x94) = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  uVar11 = *(undefined8 *)param_4;
  puVar4[1] = *(undefined8 *)(param_4 + 2);
  *puVar4 = uVar11;
  if (param_10 == 2) {
    fVar12 = param_4[2];
  }
  else if (param_10 == 1) {
    fVar12 = (*param_4 + param_4[2]) * 0.5;
  }
  else {
    fVar12 = *param_4;
  }
  fVar13 = *param_16 + param_16[1];
  if (param_11 == 0) {
    fVar14 = param_4[1];
LAB_10a1ea344:
    fVar13 = fVar13 + fVar14;
  }
  else {
    if (param_11 == 1) {
      fVar14 = (param_4[1] + param_4[3]) * 0.5;
      fVar13 = fVar13 * 0.5;
      goto LAB_10a1ea344;
    }
    fVar13 = param_4[3];
  }
  uStack_98 = CONCAT44(fVar13 - *param_16,fVar12);
  uStack_90 = 0;
  uStack_88 = 1;
  FUN_10a20699c(puVar4 + 8,&uStack_98);
  *param_1 = (long)puVar4;
LAB_10a1ea370:
  func_0x00010a20ca08(&lStack_78,0);
  return;
}



/* Entry: 10a1ea3e8; end: 10a1ea44b;  */

undefined8 * FUN_10a1ea3e8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1ea44c; end: 10a1ea647;  */

void FUN_10a1ea44c(float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,uint param_8,uint param_9)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  char cStack_69;
  
  lVar1 = 0x3b8;
  if (param_9 == 0) {
    lVar1 = 0x3c8;
  }
  pfVar3 = *(float **)(param_6 + 0x20);
  for (pfVar2 = *(float **)(param_6 + 0x18); pfVar2 != pfVar3; pfVar2 = pfVar2 + 0x1c) {
    lVar5 = *(long *)(pfVar2 + 10);
    if (((param_8 & *(byte *)(lVar5 + 0x40) & 1) == 0) && (param_9 == *(byte *)(lVar5 + 0x40))) {
      fStack_80 = param_3 * (param_1 + *pfVar2);
      fStack_7c = param_3 * (param_2 + pfVar2[1]);
      fVar8 = (param_1 + (float)*(undefined8 *)(pfVar2 + 2)) * param_3;
      fVar9 = (param_2 + (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20)) * param_3;
      uStack_78 = CONCAT44(fVar9,fVar8);
      lVar4 = 0x68;
      if (param_8 == 0) {
        lVar4 = 0x18;
      }
      lVar4 = *(long *)(lVar5 + lVar4);
      if (lVar4 != 0) {
        if (param_8 != 0) {
          fVar12 = *(float *)(param_6 + 0x10);
          fVar10 = param_3 * (*(float *)(lVar5 + 0x78) - *(float *)(lVar5 + 0x28)) * fVar12;
          puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x68) + 0x18);
          puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x18) + 0x18);
          fStack_80 = fStack_80 + fVar10;
          uVar15 = *puVar7;
          uVar14 = puVar7[1];
          uVar17 = *puVar6;
          uVar16 = puVar6[1];
          uVar14 = NEON_scvtf(CONCAT44(((int)((ulong)uVar14 >> 0x20) -
                                       ((int)((ulong)uVar15 >> 0x20) + (int)((ulong)uVar16 >> 0x20))
                                       ) + (int)((ulong)uVar17 >> 0x20),
                                       ((int)uVar14 - ((int)uVar15 + (int)uVar16)) + (int)uVar17),4)
          ;
          fVar13 = (float)((ulong)uVar14 >> 0x20) * param_3 * fVar12;
          fVar11 = fVar12 * param_3 * (*(float *)(lVar5 + 0x7c) - *(float *)(lVar5 + 0x2c)) - fVar13
          ;
          fStack_7c = fStack_7c + fVar11;
          uStack_78 = CONCAT44(fVar9 + fVar11 + fVar13,
                               fVar8 + fVar10 + (float)uVar14 * param_3 * fVar12);
        }
        FUN_10a176cb8(*(undefined8 *)(param_4 + lVar1),&fStack_80,lVar4 + 0x10,
                      *(undefined8 *)(lVar4 + 0x18));
      }
    }
  }
  lVar5 = param_5 + 0x20;
  FUN_10a5dfd94(lVar5,*(undefined8 *)(*(long *)(param_4 + lVar1) + 0x10));
  lVar4 = param_5 + 0x20;
  FUN_10a01eacc(lVar4,lVar5);
  func_0x000107c2b074(&fStack_80,&PTR_DAT_110bb2038);
  FUN_10a015dcc(lVar4,&fStack_80,param_7);
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT44(fStack_7c,fStack_80));
  }
  FUN_10a177034(*(undefined8 *)(param_4 + lVar1),param_5);
  return;
}



/* Entry: 10a1ea648; end: 10a1ea69f;  */

/* WARNING: Removing unreachable block (ram,0x00010a1e8d74) */
/* WARNING: Removing unreachable block (ram,0x00010a1e8acc) */
/* WARNING: Removing unreachable block (ram,0x00010a1e9e30) */

code ** FUN_10a1ea648(long param_1,long *param_2)

{
  long *plVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  code **ppcVar15;
  long lVar16;
  bool bVar17;
  long *plVar18;
  long lVar19;
  int *piVar20;
  int *piVar21;
  code **ppcVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined4 uVar27;
  long lVar28;
  byte bVar29;
  byte bVar30;
  byte bVar35;
  byte bVar36;
  float fVar31;
  float fVar32;
  uint uVar33;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  uint uVar40;
  byte bVar43;
  byte bVar44;
  undefined1 auVar34 [16];
  float fVar45;
  uint uVar46;
  uint uVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fStack_4c0;
  long *plStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  code *pcStack_460;
  long lStack_458;
  undefined1 auStack_448 [16];
  long *plStack_438;
  long lStack_420;
  long lStack_418;
  long *plStack_3d0;
  long lStack_330;
  long *plStack_328;
  long lStack_320;
  long *plStack_318;
  code *pcStack_310;
  long *plStack_308;
  long lStack_300;
  code **ppcStack_2f8;
  long *aplStack_2f0 [2];
  undefined8 uStack_2e0;
  char acStack_2d9 [57];
  code *pcStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  
  lVar16 = param_1 + -0x288;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = (long *)(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x98);
  bVar29 = *(byte *)(param_1 + 0x3f);
  uVar24 = *(ulong *)(param_1 + 0x30);
  uVar26 = uVar24;
  if (-1 < (char)bVar29) {
    uVar26 = (ulong)bVar29;
  }
  bVar44 = *(byte *)(param_1 + 0xaf);
  uVar3 = *(ulong *)(param_1 + 0xa0);
  if (-1 < (char)bVar44) {
    uVar3 = (ulong)bVar44;
  }
  if (uVar26 == uVar3) {
    plVar18 = (long *)*plVar14;
    if (-1 < (char)bVar29) {
      plVar18 = plVar14;
    }
    plVar11 = (long *)*plVar1;
    if (-1 < (char)bVar44) {
      plVar11 = plVar1;
    }
    _memcmp(plVar18,plVar11);
    if (((((int)plVar18 != 0) || (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0xb4))) ||
        (*(long *)(param_1 + 0x88) != *(long *)(param_1 + 0xf8))) ||
       (*(char *)(param_1 + 0x40) != *(char *)(param_1 + 0xb0))) goto LAB_10a1e8aec;
    iVar23 = 0;
    fVar31 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0xbc);
    fVar45 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0xc0);
    fVar48 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xc4);
    if (fVar31 < 0.0) {
      fVar31 = -fVar31;
    }
    if (fVar45 < 0.0) {
      fVar45 = -fVar45;
    }
    if (fVar48 < 0.0) {
      fVar48 = -fVar48;
    }
    pcStack_2a0 = (code *)CONCAT71(pcStack_2a0._1_7_,1);
    pcStack_460._0_1_ = 1;
    pcStack_310 = (code *)CONCAT71(pcStack_310._1_7_,1);
    bVar9 = ABS(*(float *)(param_1 + 0x58) - *(float *)(param_1 + 200)) < 1e-06;
    do {
      if (iVar23 == 1) {
        ppcVar15 = &pcStack_460;
        fVar51 = fVar45;
      }
      else if (iVar23 == 2) {
        ppcVar15 = &pcStack_310;
        fVar51 = fVar48;
      }
      else {
        if (iVar23 == 3) goto LAB_10a1e8a88;
        ppcVar15 = &pcStack_2a0;
        fVar51 = fVar31;
      }
      *(bool *)ppcVar15 = fVar51 < 1e-06;
      iVar23 = iVar23 + 1;
    } while (iVar23 != 4);
    bVar9 = true;
LAB_10a1e8a88:
    iVar23 = 0;
    while (((uVar26 = (ulong)(byte)pcStack_460, iVar23 == 1 ||
            (uVar26 = (ulong)pcStack_310 & 0xff, iVar23 == 2)) ||
           (uVar26 = (ulong)pcStack_2a0 & 0xff, iVar23 != 3))) {
      while (iVar23 = iVar23 + 1, (uVar26 & 1) == 0) {
        if (iVar23 == 3) goto LAB_10a1e8aec;
        uVar26 = 0;
      }
    }
    if (!bVar9) goto LAB_10a1e8aec;
    iVar23 = 0;
    fVar31 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xdc);
    fVar45 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xe0);
    fVar48 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xe4);
    if (fVar31 < 0.0) {
      fVar31 = -fVar31;
    }
    if (fVar45 < 0.0) {
      fVar45 = -fVar45;
    }
    if (fVar48 < 0.0) {
      fVar48 = -fVar48;
    }
    pcStack_2a0 = (code *)CONCAT71(pcStack_2a0._1_7_,1);
    pcStack_460._0_1_ = 1;
    pcStack_310 = (code *)CONCAT71(pcStack_310._1_7_,1);
    bVar9 = ABS(*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0xe8)) < 1e-06;
    do {
      if (iVar23 == 1) {
        ppcVar15 = &pcStack_460;
        fVar51 = fVar45;
      }
      else if (iVar23 == 2) {
        ppcVar15 = &pcStack_310;
        fVar51 = fVar48;
      }
      else {
        if (iVar23 == 3) goto LAB_10a1e8d30;
        ppcVar15 = &pcStack_2a0;
        fVar51 = fVar31;
      }
      *(bool *)ppcVar15 = fVar51 < 1e-06;
      iVar23 = iVar23 + 1;
    } while (iVar23 != 4);
    bVar9 = true;
LAB_10a1e8d30:
    iVar23 = 0;
    while (((uVar26 = (ulong)(byte)pcStack_460, iVar23 == 1 ||
            (uVar26 = (ulong)pcStack_310 & 0xff, iVar23 == 2)) ||
           (uVar26 = (ulong)pcStack_2a0 & 0xff, iVar23 != 3))) {
      while (iVar23 = iVar23 + 1, (uVar26 & 1) == 0) {
        if (iVar23 == 3) goto LAB_10a1e8aec;
        uVar26 = 0;
      }
    }
    if (!bVar9) goto LAB_10a1e8aec;
    iVar23 = 0x100;
    if (1e-06 <= ABS(*(float *)(param_1 + 0x80) - *(float *)(param_1 + 0xf0))) {
      iVar23 = 0;
    }
    if (ABS(*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0xec)) < 1e-06) {
      iVar23 = iVar23 + 1;
    }
    if (iVar23 != 0x101) goto LAB_10a1e8aec;
    ppcVar15 = (code **)(param_1 + 0x5c);
    FUN_10a1f4f48(ppcVar15,param_1 + 0xcc);
    iVar23 = 0;
    while (((ppcVar22 = (code **)((ulong)ppcVar15 >> 8 & 0xffffff), iVar23 == 1 ||
            (ppcVar22 = (code **)((ulong)ppcVar15 >> 0x10 & 0xffff), iVar23 == 2)) ||
           (ppcVar22 = ppcVar15, iVar23 != 3))) {
      while (iVar23 = iVar23 + 1, ((ulong)ppcVar22 & 1) == 0) {
        if (iVar23 == 3) goto LAB_10a1e8aec;
        ppcVar22 = (code **)0x0;
      }
    }
    if ((((ulong)ppcVar15 & 0xff000000) == 0) ||
       (1e-06 <= ABS(*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0xb8)))) goto LAB_10a1e8aec;
LAB_10a1e9d3c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return ppcVar15;
    }
LAB_10a1e9e5c:
    ___stack_chk_fail();
  }
  else {
LAB_10a1e8aec:
    if (-1 < (char)bVar29) {
      if (bVar29 != 0) goto LAB_10a1e8af4;
LAB_10a1e8b68:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
        ppcVar15 = (code **)&stack0xffffffffffffffd0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_1 + 0x98,param_1 + 0x28);
        *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x50);
        func_0x00010a1ea71c(param_1 + 0xf8,param_1 + 0x88);
        if (*(long *)(param_1 + 0x120) == 0) {
          lVar16 = *(long *)(*(long *)(*(long *)(param_1 + -0x1f8) + 0x100) + 0x260);
          if (lVar16 == 0) {
            FUN_10a0edfc4();
            func_0x00010a1ff0cc(ppcVar15 + 0xc);
            if (*(char *)((long)ppcVar15 + 0x17) < '\0') {
              __ZdlPv(*ppcVar15);
            }
            return ppcVar15;
          }
          FUN_10a026ab4(param_1 + 0x120,lVar16 + 0x128);
        }
        pcVar8 = *(code **)(param_1 + 0x120);
        uVar50 = *(undefined8 *)(param_1 + 0x128);
        if (*(long *)(param_1 + 0x128) != 0) {
          plVar14 = (long *)(*(long *)(param_1 + 0x128) + 8);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = *plVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar14 = *(long **)(param_1 + 0x118);
        *(undefined8 *)(param_1 + 0x118) = uVar50;
        *(code **)(param_1 + 0x110) = pcVar8;
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
          do {
            lVar16 = *plVar1;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        return (code **)(param_1 + 0x110);
      }
      goto LAB_10a1e9e5c;
    }
    if (uVar24 == 0) goto LAB_10a1e8b68;
LAB_10a1e8af4:
    FUN_10a1e835c(&pcStack_460,lVar16,plVar14,1);
    if (plStack_438 == (long *)0x0) {
LAB_10a1e8bac:
      FUN_10a1e788c(lVar16);
LAB_10a1e9cc4:
      if (plStack_318 != (long *)0x0) {
        plVar14 = plStack_318 + 1;
        do {
          lVar16 = *plVar14;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_318 + 0x10))(plStack_318);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_318);
        }
      }
      if (plStack_328 != (long *)0x0) {
        plVar14 = plStack_328 + 1;
        do {
          lVar16 = *plVar14;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_328 + 0x10))(plStack_328);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_328);
        }
      }
      ppcVar15 = &pcStack_460;
      FUN_10a1f4af8(ppcVar15);
      goto LAB_10a1e9d3c;
    }
    bVar44 = 0;
    bVar29 = 0;
    do {
      if (plStack_438[10] != 0) {
        bVar29 = *(byte *)(plStack_438 + 0xf) ^ 1 | bVar29;
        bVar44 = *(byte *)(plStack_438 + 0xf) | bVar44;
        if (((bVar44 & 1) != 0) && ((bVar29 & 1) != 0)) {
          bVar29 = 1;
          goto LAB_10a1e8bc8;
        }
      }
      plStack_438 = (long *)*plStack_438;
    } while (plStack_438 != (long *)0x0);
    if (((bVar44 | bVar29) & 1) == 0) goto LAB_10a1e8bac;
    if ((bVar44 & 1) == 0) {
      lVar19 = 0;
      FUN_10a2421c8();
      plVar18 = *(long **)(lVar19 + 0x228);
      (**(code **)(*plVar18 + 0x68))();
      if ((char)plVar18[0xf] == '\x01') {
        fVar45 = *(float *)(param_1 + 0x4c);
        if (((ABS(fVar45 - *(float *)(param_1 + 0x54)) < 1e-06) &&
            (ABS(*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x54)) < 1e-06)) &&
           (ABS(fVar45 - *(float *)(param_1 + 0x50)) < 1e-06)) {
          bVar44 = *(byte *)(param_1 + 0x40);
          if ((bVar44 & 1) == 0) {
            if ((bVar44 >> 1 & 1) == 0) {
              if (ABS(fVar45 - *(float *)(param_1 + 0x58)) < 1e-06) {
                bVar6 = false;
                bVar7 = false;
                bVar9 = true;
                uVar27 = 1;
                goto LAB_10a1e8e1c;
              }
            }
            else {
LAB_10a1e8dcc:
              if (((1e-06 <= ABS(*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 100))) ||
                  (1e-06 <= ABS(*(float *)(param_1 + 0x60) - *(float *)(param_1 + 100)))) ||
                 (1e-06 <= ABS(*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x60))))
              goto LAB_10a1e8e10;
            }
          }
          else {
            if (((1e-06 <= ABS(*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x74))) ||
                (1e-06 <= ABS(*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x74)))) ||
               (1e-06 <= ABS(*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x70))))
            goto LAB_10a1e8e10;
            if ((bVar44 >> 1 & 1) != 0) goto LAB_10a1e8dcc;
          }
          bVar9 = false;
          uVar27 = 2;
          bVar6 = false;
          bVar7 = true;
          goto LAB_10a1e8e1c;
        }
      }
LAB_10a1e8e10:
      bVar6 = false;
      bVar7 = false;
      bVar9 = false;
      uVar27 = 4;
    }
    else {
LAB_10a1e8bc8:
      bVar9 = false;
      uVar27 = 4;
      bVar6 = true;
      bVar7 = false;
    }
LAB_10a1e8e1c:
    if (plStack_3d0 == (long *)0x0) {
      fVar45 = 0.0;
    }
    else {
      fVar45 = 0.0;
      fVar48 = 0.0;
      plVar18 = plStack_3d0;
      do {
        fVar45 = (float)((uint)fVar45 ^
                        ((uint)fVar45 ^ (uint)*(float *)(plVar18 + 7)) &
                        -(uint)(fVar45 < *(float *)(plVar18 + 7)));
        fVar48 = (float)((uint)fVar48 ^
                        ((uint)fVar48 ^ (uint)*(float *)((long)plVar18 + 0x3c)) &
                        -(uint)(fVar48 < *(float *)((long)plVar18 + 0x3c)));
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      fVar45 = fVar45 + fVar48 + 0.0;
    }
    puStack_488 = (undefined8 *)0x0;
    uStack_480 = CONCAT44(fVar45,0x45800000);
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    pcStack_2a0 = FUN_10a1f5030;
    uStack_298 = &PTR_DAT_110950c70;
    ppcStack_2f8 = (code **)0x0;
    uStack_470 = 0;
    FUN_10a1ea004(&lStack_468,0,0x3f800000,&puStack_488,&pcStack_460,&pcStack_2a0,1,3,0,0,2,
                  &pcStack_310,*(undefined8 *)(*(long *)(param_1 + -0x1f8) + 0xa20),1);
    if (ppcStack_2f8 == &pcStack_310) {
      lVar19 = 0x20;
LAB_10a1e8f08:
      (**(code **)(*ppcStack_2f8 + lVar19))();
    }
    else if (ppcStack_2f8 != (code **)0x0) {
      lVar19 = 0x28;
      goto LAB_10a1e8f08;
    }
    (*(code *)*uStack_298)(&uStack_298);
    if (*(long *)(lStack_468 + 0x20) == *(long *)(lStack_468 + 0x18)) goto LAB_10a1e9e6c;
    fVar48 = *(float *)(lStack_468 + 0x3c);
    fVar51 = *(float *)(lStack_468 + 0x34);
    fStack_4c0 = *(float *)(lStack_468 + 0x38) - *(float *)(lStack_468 + 0x30);
    fVar45 = *(float *)(*(long *)(*(long *)(lStack_468 + 0x18) + 0x28) + 0x28);
    fVar31 = 0.0;
    if (0.0 < fVar45) {
      fVar31 = fVar45 * *(float *)(lStack_468 + 0x10);
      lVar19 = CONCAT71(pcStack_460._1_7_,(byte)pcStack_460);
      if (lStack_458 != lVar19) {
        lVar25 = 0;
        uVar26 = 0;
        lVar28 = 8;
        do {
          pcStack_2a0 = (code *)(lVar19 + lVar25);
          puVar10 = auStack_448;
          FUN_10a206104(puVar10,pcStack_2a0,&UNK_10dd5b8f9,&pcStack_2a0,&pcStack_310);
          if (0 < *(int *)(puVar10 + 0x70) && 0 < *(int *)(puVar10 + 0x74)) break;
          uVar24 = (lStack_418 - lStack_420 >> 2) * -0x5555555555555555;
          if (uVar24 < uVar26 || uVar24 - uVar26 == 0) goto LAB_10a1e9e6c;
          lVar19 = CONCAT71(pcStack_460._1_7_,(byte)pcStack_460);
          fVar31 = fVar31 + *(float *)(lStack_468 + 0x10) *
                            *(float *)(puVar10 + 0x7c) * (float)*(int *)(lStack_420 + lVar28);
          uVar26 = uVar26 + 1;
          uVar24 = (lStack_458 - lVar19 >> 3) * -0x3333333333333333;
          lVar28 = lVar28 + 0xc;
          lVar25 = lVar25 + 0x28;
        } while (uVar26 <= uVar24 && uVar24 - uVar26 != 0);
      }
      fStack_4c0 = fStack_4c0 + fVar31;
    }
    uVar50 = 0;
    if ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0) {
      fVar52 = 0.0;
      fVar45 = 0.0;
      for (; plStack_3d0 != (long *)0x0; plStack_3d0 = (long *)*plStack_3d0) {
        fVar32 = *(float *)(plStack_3d0 + 7);
        if (*(float *)(plStack_3d0 + 7) <= fVar45) {
          fVar32 = fVar45;
        }
        fVar45 = fVar32;
      }
      lVar19 = CONCAT71(pcStack_460._1_7_,(byte)pcStack_460);
      if (lStack_458 != lVar19) {
        lVar28 = 0;
        uVar26 = 0;
        fVar52 = 0.0;
        do {
          puVar10 = auStack_448;
          FUN_10a20cf48(puVar10,lVar19 + lVar28);
          if (puVar10 == (undefined1 *)0x0) goto LAB_10a1e9e4c;
          fVar32 = fVar52;
          if ((*(long *)(puVar10 + 0x50) != 0) && (*(long *)(puVar10 + 0xa0) != 0)) {
            fVar49 = (fVar45 - *(float *)(puVar10 + 100)) - (fVar45 - *(float *)(puVar10 + 0xb4));
            if (fVar49 < 0.0) {
              fVar49 = -fVar49;
            }
            lVar25 = *(long *)(*(long *)(puVar10 + 0xa0) + 0x18);
            lVar19 = *(long *)(*(long *)(puVar10 + 0x50) + 0x18);
            fVar32 = ((fVar45 - *(float *)(puVar10 + 0xb4)) +
                     (float)(*(int *)(lVar25 + 0xc) - *(int *)(lVar25 + 4))) -
                     ((fVar45 - *(float *)(puVar10 + 100)) +
                     (float)(*(int *)(lVar19 + 0xc) - *(int *)(lVar19 + 4)));
            if (fVar32 < 0.0) {
              fVar32 = -fVar32;
            }
            if (fVar32 <= fVar49) {
              fVar32 = fVar49;
            }
            if (fVar32 <= fVar52) {
              fVar32 = fVar52;
            }
          }
          fVar52 = fVar32;
          uVar26 = uVar26 + 1;
          lVar19 = CONCAT71(pcStack_460._1_7_,(byte)pcStack_460);
          uVar24 = (lStack_458 - lVar19 >> 3) * -0x3333333333333333;
          lVar28 = lVar28 + 0x28;
        } while (uVar26 <= uVar24 && uVar24 - uVar26 != 0);
      }
      if (lStack_458 == lVar19) goto LAB_10a1e9e6c;
      puVar10 = auStack_448;
      FUN_10a20cf48();
      if (puVar10 != (undefined1 *)0x0) {
        fVar45 = 0.0;
        if ((*(long *)(puVar10 + 0x50) != 0) && (*(long *)(puVar10 + 0xa0) != 0)) {
          fVar45 = *(float *)(puVar10 + 0x60) - *(float *)(puVar10 + 0xb0);
          if (fVar45 < 0.0) {
            fVar45 = -fVar45;
          }
          if (fVar45 <= 0.0) {
            fVar45 = 0.0;
          }
        }
        if (lStack_458 == CONCAT71(pcStack_460._1_7_,(byte)pcStack_460)) goto LAB_10a1e9e6c;
        puVar10 = auStack_448;
        FUN_10a20cf48(puVar10,lStack_458 + -0x28);
        if (puVar10 != (undefined1 *)0x0) {
          uVar50 = CONCAT44(fVar52,fVar45);
          if ((*(long *)(puVar10 + 0x50) != 0) && (*(long *)(puVar10 + 0xa0) != 0)) {
            piVar20 = *(int **)(*(long *)(puVar10 + 0x50) + 0x18);
            piVar21 = *(int **)(*(long *)(puVar10 + 0xa0) + 0x18);
            fVar32 = (*(float *)(puVar10 + 0x60) + (float)(piVar20[2] - *piVar20)) -
                     (*(float *)(puVar10 + 0xb0) + (float)(piVar21[2] - *piVar21));
            if (fVar32 < 0.0) {
              fVar32 = -fVar32;
            }
            if (fVar32 <= fVar45) {
              fVar32 = fVar45;
            }
            uVar50 = CONCAT44(fVar52,fVar32);
          }
          goto LAB_10a1e9228;
        }
      }
LAB_10a1e9e4c:
      FUN_109ffdddc(&UNK_10f639994);
      goto LAB_10a1e9e6c;
    }
LAB_10a1e9228:
    fVar48 = fVar48 - fVar51;
    pbVar2 = (byte *)(param_1 + 0x40);
    if ((*pbVar2 & 1) != 0) {
      fVar45 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x44));
      fVar51 = *(float *)(param_1 + 0x7c) * fVar45 * 0.25;
      fVar45 = -*(float *)(param_1 + 0x80) * fVar45 * 0.25;
      uVar26 = CONCAT44(fVar45,fVar51) ^
               (CONCAT44(fVar45,fVar51) ^ CONCAT44(-fVar45,-fVar51)) &
               ~CONCAT44(-(uint)(0.0 <= fVar45),-(uint)(0.0 <= fVar51));
      uVar50 = CONCAT44((float)((ulong)uVar50 >> 0x20) + (float)(uVar26 >> 0x20),
                        (float)uVar50 + (float)uVar26);
    }
    fVar51 = fStack_4c0 + (float)uVar50 * 2.0;
    fVar45 = 1.0;
    if (4096.0 < fVar51) {
      fVar45 = 4096.0 / fVar51;
      fStack_4c0 = fStack_4c0 * fVar45;
      fVar48 = fVar48 * fVar45;
      fVar51 = (float)uVar50 * fVar45;
      uVar50 = CONCAT44((float)((ulong)uVar50 >> 0x20) * fVar45,fVar51);
      fVar51 = (float)(int)(fStack_4c0 + fVar51 * 2.0);
    }
    iVar23 = (int)(fVar48 + (float)((ulong)uVar50 >> 0x20) * 2.0);
    plVar18 = param_2;
    (**(code **)(*param_2 + 0xb8))(param_2,(int)fVar51,iVar23,uVar27);
    if (((ulong)plVar18 & 1) == 0) {
      uVar33 = (int)fVar51 - 1;
      uVar40 = iVar23 - 1;
      uVar46 = uVar33 >> 1;
      uVar47 = uVar40 >> 1;
      bVar30 = (byte)uVar46 | (byte)uVar33;
      bVar35 = (byte)(uVar46 >> 8) | (byte)(uVar33 >> 8);
      bVar36 = (byte)(uVar46 >> 0x10) | (byte)(uVar33 >> 0x10);
      bVar38 = (byte)(uVar33 >> 0x18);
      bVar38 = bVar38 >> 1 | bVar38;
      uVar33 = CONCAT13(bVar38,CONCAT12(bVar36,CONCAT11(bVar35,bVar30)));
      bVar39 = (byte)uVar47 | (byte)uVar40;
      bVar41 = (byte)(uVar47 >> 8) | (byte)(uVar40 >> 8);
      bVar44 = (byte)(uVar40 >> 0x18);
      bVar42 = (byte)(uVar47 >> 0x10) | (byte)(uVar40 >> 0x10);
      bVar44 = bVar44 >> 1 | bVar44;
      uVar40 = uVar33 >> 2;
      uVar46 = (uint)(CONCAT17(bVar44,CONCAT16(bVar42,CONCAT15(bVar41,CONCAT14(bVar39,uVar33)))) >>
                     0x22);
      bVar30 = (byte)uVar40 | bVar30;
      bVar35 = (byte)(uVar40 >> 8) | bVar35;
      bVar36 = (byte)(uVar40 >> 0x10) | bVar36;
      bVar38 = bVar38 >> 2 | bVar38;
      uVar33 = CONCAT13(bVar38,CONCAT12(bVar36,CONCAT11(bVar35,bVar30)));
      bVar39 = (byte)uVar46 | bVar39;
      bVar41 = (byte)(uVar46 >> 8) | bVar41;
      bVar42 = (byte)(uVar46 >> 0x10) | bVar42;
      bVar44 = bVar44 >> 2 | bVar44;
      uVar40 = uVar33 >> 4;
      uVar33 = (uint)(CONCAT17(bVar44,CONCAT16(bVar42,CONCAT15(bVar41,CONCAT14(bVar39,uVar33)))) >>
                     0x24);
      bVar35 = (byte)(uVar40 >> 8) | bVar35;
      bVar36 = (byte)(uVar40 >> 0x10) | bVar36;
      bVar38 = bVar38 >> 4 | bVar38;
      bVar41 = (byte)(uVar33 >> 8) | bVar41;
      bVar42 = (byte)(uVar33 >> 0x10) | bVar42;
      bVar44 = bVar44 >> 4 | bVar44;
      bVar37 = bVar38 | bVar36;
      bVar43 = bVar44 | bVar42;
      iVar23 = CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar38 | bVar36 | bVar35,
                                                        bVar37 | bVar35 | (byte)uVar40 | bVar30)));
      uVar50 = NEON_ucvtf(CONCAT44((int)(CONCAT17(bVar44,CONCAT16(bVar43,CONCAT15(bVar44 | bVar42 | 
                                                  bVar41,CONCAT14(bVar43 | bVar41 | (byte)uVar33 |
                                                                                    bVar39,iVar23)))
                                                 ) >> 0x20) + 1,iVar23 + 1),4);
      uVar50 = CONCAT44(((float)((ulong)uVar50 >> 0x20) - fVar48) * 0.5,
                        ((float)uVar50 - fStack_4c0) * 0.5);
    }
    *(undefined8 *)(param_1 + 0x108) = uVar50;
    lVar19 = *(long *)(param_1 + -0x1f8);
    FUN_10a2421c8();
    fVar51 = (float)((ulong)uVar50 >> 0x20);
    fVar52 = (float)(int)(fStack_4c0 + (float)uVar50 + (float)uVar50);
    fVar48 = (float)(int)(fVar48 + fVar51 + fVar51);
    plVar18 = *(long **)(lVar19 + 0x228);
    pcStack_2a0 = (code *)((ulong)(uint)(int)fVar52 << 0x20);
    uStack_298 = (undefined **)CONCAT44(1,(int)fVar48);
    uStack_28c = 0;
    uStack_288 = 1;
    uStack_284 = 1;
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_278 = uStack_278 & 0xffffffffffffff00;
    uStack_290 = uVar27;
    (**(code **)(*plVar18 + 0x20))(plVar18,&pcStack_2a0);
    FUN_10a099d88((long *)(param_1 + 0x110),plVar18);
    pcStack_2a0 = (code *)0x0;
    uStack_f8 = 0;
    uStack_e8 = 0;
    plStack_f0 = (long *)0x0;
    uStack_e0 = 0xffffffffffffffff;
    uStack_d8 = 0xffffffffffffffff;
    uStack_c0 = 0;
    plStack_c8 = (long *)0x0;
    uStack_d0 = 0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
    uStack_a8 = 0x3f800000;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    plStack_308 = (long *)0x0;
    pcStack_310 = (code *)0x0;
    lStack_300 = 0;
    ppcStack_2f8 = (code **)0xffffffffffffffff;
    aplStack_2f0[0] = (long *)0xffffffffffffffff;
    aplStack_2f0[1] = (long *)0x0;
    acStack_2d9[1] = '\0';
    acStack_2d9[2] = '\0';
    acStack_2d9[3] = '\0';
    acStack_2d9[4] = '\0';
    acStack_2d9[5] = '\0';
    acStack_2d9[6] = '\0';
    acStack_2d9[7] = '\0';
    acStack_2d9[8] = '\0';
    uStack_2e0 = (long *)0x0;
    acStack_2d9[9] = -1;
    acStack_2d9[10] = -1;
    acStack_2d9[0xb] = -1;
    acStack_2d9[0xc] = -1;
    acStack_2d9[0xd] = -1;
    acStack_2d9[0xe] = -1;
    acStack_2d9[0xf] = -1;
    acStack_2d9[0x10] = -1;
    acStack_2d9[0x11] = -1;
    acStack_2d9[0x12] = -1;
    acStack_2d9[0x13] = -1;
    acStack_2d9[0x14] = -1;
    acStack_2d9[0x15] = -1;
    acStack_2d9[0x16] = -1;
    acStack_2d9[0x17] = -1;
    acStack_2d9[0x18] = -1;
    acStack_2d9[0x21] = '\0';
    acStack_2d9[0x22] = '\0';
    acStack_2d9[0x23] = '\0';
    acStack_2d9[0x24] = '\0';
    acStack_2d9[0x25] = '\0';
    acStack_2d9[0x26] = '\0';
    acStack_2d9[0x27] = '\0';
    acStack_2d9[0x28] = '\0';
    acStack_2d9[0x19] = '\0';
    acStack_2d9[0x1a] = '\0';
    acStack_2d9[0x1b] = '\0';
    acStack_2d9[0x1c] = '\0';
    acStack_2d9[0x1d] = '\0';
    acStack_2d9[0x1e] = '\0';
    acStack_2d9[0x1f] = '\0';
    acStack_2d9[0x20] = '\0';
    acStack_2d9[0x29] = '\0';
    acStack_2d9[0x2a] = '\0';
    acStack_2d9[0x2b] = '\0';
    acStack_2d9[0x2c] = '\0';
    acStack_2d9[0x2d] = '\0';
    acStack_2d9[0x2e] = '\0';
    acStack_2d9[0x2f] = '\0';
    acStack_2d9[0x30] = '\0';
    FUN_10a061728(&pcStack_2a0,&pcStack_310);
    uVar50 = uStack_2e0;
    if ((long *)uStack_2e0 != (long *)0x0) {
      plVar18 = (long *)(uStack_2e0 + 8);
      do {
        lVar19 = *plVar18;
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar17) {
          *plVar18 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*(long *)uStack_2e0 + 0x10))(uStack_2e0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(uVar50);
      }
    }
    plVar18 = plStack_308;
    if (plStack_308 != (long *)0x0) {
      plVar11 = plStack_308 + 1;
      do {
        lVar19 = *plVar11;
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar17) {
          *plVar11 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_308 + 0x10))(plStack_308);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    uStack_298 = *(undefined ***)(param_1 + 0x110);
    lVar19 = *(long *)(param_1 + 0x118);
    if (lVar19 != 0) {
      plVar18 = (long *)(lVar19 + 8);
      do {
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar17) {
          *plVar18 = *plVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar18 = (long *)CONCAT44(uStack_28c,uStack_290);
    uStack_290 = (undefined4)lVar19;
    uStack_28c = (undefined4)((ulong)lVar19 >> 0x20);
    if (plVar18 != (long *)0x0) {
      plVar11 = plVar18 + 1;
      do {
        lVar19 = *plVar11;
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar17) {
          *plVar11 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_280 = 0xffffffffffffffff;
    uStack_278 = 0xffffffffffffffff;
    uStack_240 = 0x3f800000;
    uStack_248 = 0x3f8000003f800000;
    uStack_a0 = 2;
    uStack_9c = 2;
    uStack_480 = 0;
    uStack_478 = 0;
    puStack_488 = &uStack_480;
    if (bVar9) {
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb1fc0);
      FUN_10a20e230(&puStack_488,&pcStack_310,&pcStack_310);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
      uStack_248 = uStack_248 & 0xffffffff00000000;
    }
    else if (bVar7) {
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb1fd8);
      FUN_10a20e230(&puStack_488,&pcStack_310,&pcStack_310);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
      uStack_248 = uStack_248 & 0xffffffff;
    }
    else {
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb1ff0);
      FUN_10a20e230(&puStack_488,&pcStack_310,&pcStack_310);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
    }
    (**(code **)(*param_2 + 0x88))(param_2,&pcStack_2a0);
    plStack_308 = (long *)CONCAT44((int)fVar48,(int)fVar52);
    pcStack_310 = (code *)0x0;
    (**(code **)(*param_2 + 0xc0))(param_2,&pcStack_310);
    fVar31 = fVar31 * fVar45 + *(float *)(param_1 + 0x108);
    fVar51 = *(float *)(param_1 + 0x10c) -
             (*(float *)(lStack_468 + 0xc) - *(float *)(lStack_468 + 4)) *
             (1.0 - *(float *)(lStack_468 + 0x10));
    if ((bVar29 & 1) != 0) {
      plVar18 = (long *)(param_1 + 0x140);
      lVar19 = *(long *)(param_1 + 0x140);
      if (lVar19 == 0) {
        FUN_10a20e2f8(&pcStack_310);
        FUN_10a1ea3e8(plVar18,&pcStack_310);
        plVar11 = plStack_308;
        if (plStack_308 != (long *)0x0) {
          plVar13 = plStack_308 + 1;
          do {
            lVar19 = *plVar13;
            cVar5 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar17) {
              *plVar13 = lVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar19 == 0) {
            (**(code **)(*plStack_308 + 0x10))(plStack_308);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        lVar19 = *plVar18;
      }
      plVar11 = param_2 + 4;
      FUN_10a5dfd94(plVar11,*(undefined8 *)(lVar19 + 0x10));
      plVar13 = param_2 + 4;
      FUN_10a01eacc(plVar13,plVar11);
      if ((undefined8 **)plVar13[0x2b] != &puStack_488) {
        FUN_10a1f503c((undefined8 **)plVar13[0x2b],puStack_488,&uStack_480);
      }
      plVar11 = *(long **)(lStack_330 + 0x28);
      (**(code **)(*plVar11 + 0x28))();
      plVar12 = *(long **)(lStack_330 + 0x28);
      (**(code **)(*plVar12 + 0x30))();
      lVar19 = *plVar18;
      *(float *)(lVar19 + 0x20) = (float)((ulong)plVar11 & 0xffffffff);
      *(float *)(lVar19 + 0x24) = (float)((ulong)plVar12 & 0xffffffff);
      *(float *)(lVar19 + 0x28) = fVar52;
      *(float *)(lVar19 + 0x2c) = fVar48;
      FUN_10a1768e8(*plVar18,lStack_330 + 0x28);
      plVar18 = (long *)*plVar18;
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb2008);
      if (*plVar18 == 0) {
        uVar50 = 0;
      }
      else {
        uVar50 = *(undefined8 *)(*plVar18 + 0x268);
      }
      FUN_10a5e17a8(plVar13,&pcStack_310,uVar50,&UNK_10e4ac8a8);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
      bVar29 = *pbVar2;
      if ((bVar29 & 1) != 0) {
        fVar32 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x44));
        if ((bVar29 >> 1 & 1) == 0) {
          bVar17 = false;
        }
        else {
          bVar17 = 0.0 < *(float *)(param_1 + 0x48);
        }
        FUN_10a1ea44c(fVar31 + *(float *)(param_1 + 0x7c) * fVar32 * 0.25,
                      fVar51 - *(float *)(param_1 + 0x80) * fVar32 * 0.25,fVar45,lVar16,param_2,
                      lStack_468,param_1 + 0x6c,bVar17,0);
        bVar29 = *pbVar2;
      }
      if (((bVar29 >> 1 & 1) != 0) && (0.0 < *(float *)(param_1 + 0x48))) {
        FUN_10a1ea44c(fVar31,fVar51,fVar45,lVar16,param_2,lStack_468,param_1 + 0x5c,1,0);
      }
      FUN_10a1ea44c(fVar31,fVar51,fVar45,lVar16,param_2,lStack_468,param_1 + 0x4c,0,0);
    }
    if (!bVar6) {
LAB_10a1e9ac0:
      lVar19 = *(long *)(param_1 + 0x110);
      if ((lVar19 != 0) &&
         (___dynamic_cast(lVar19,&PTR_DAT_110ba0e18,&PTR_DAT_110c54570,0), lVar19 != 0)) {
        uVar4 = *(undefined4 *)(lVar19 + 0x7c);
        FUN_10a303694(1);
        if (bVar9) {
          FUN_10a303840();
          _glTexParameteri(uVar4,0x8e42,1);
          _glTexParameteri(uVar4,0x8e43,1);
          _glTexParameteri(uVar4,0x8e44,1);
          uVar50 = 0x1903;
        }
        else {
          if (!bVar7) goto LAB_10a1e9ba0;
          FUN_10a303840();
          _glTexParameteri(uVar4,0x8e42,0x1903);
          _glTexParameteri(uVar4,0x8e43,0x1903);
          _glTexParameteri(uVar4,0x8e44,0x1903);
          uVar50 = 0x1904;
        }
        _glTexParameteri(uVar4,0x8e45,uVar50);
      }
LAB_10a1e9ba0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar1,plVar14);
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)pbVar2;
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x50);
      func_0x00010a1ea71c(param_1 + 0xf8,param_1 + 0x88);
      plVar14 = *(long **)(param_1 + 0x110);
      (**(code **)(*plVar14 + 0x70))();
      FUN_10a1da3a4(lVar16,(int)fVar52,(int)fVar48,0,0,uVar27,plVar14,0);
      (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
      FUN_10a0da1b8(&puStack_488,uStack_480);
      plVar14 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar1 = plStack_c8 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      plVar14 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        plVar1 = plStack_f0 + 1;
        do {
          lVar16 = *plVar1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
      func_0x00010a048e34(&uStack_298,pcStack_2a0);
      lVar16 = lStack_468;
      lStack_468 = 0;
      if (lVar16 != 0) {
        func_0x00010a20e1b8(&lStack_468);
      }
      goto LAB_10a1e9cc4;
    }
    plVar18 = (long *)(param_1 + 0x130);
    if (*(long *)(param_1 + 0x130) != 0) {
LAB_10a1e99d4:
      plVar11 = *(long **)(lStack_320 + 0x28);
      (**(code **)(*plVar11 + 0x28))();
      plVar13 = *(long **)(lStack_320 + 0x28);
      (**(code **)(*plVar13 + 0x30))();
      lVar19 = *plVar18;
      *(float *)(lVar19 + 0x20) = (float)((ulong)plVar11 & 0xffffffff);
      *(float *)(lVar19 + 0x24) = (float)((ulong)plVar13 & 0xffffffff);
      *(float *)(lVar19 + 0x28) = fVar52;
      *(float *)(lVar19 + 0x2c) = fVar48;
      FUN_10a1768e8(*plVar18,lStack_320 + 0x28);
      plVar11 = param_2 + 4;
      FUN_10a5dfd94(plVar11,*(undefined8 *)(*plVar18 + 0x10));
      plVar13 = param_2 + 4;
      FUN_10a01eacc(plVar13,plVar11);
      plVar18 = (long *)*plVar18;
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb2008);
      if (*plVar18 == 0) {
        uVar50 = 0;
      }
      else {
        uVar50 = *(undefined8 *)(*plVar18 + 0x268);
      }
      FUN_10a5e17a8(plVar13,&pcStack_310,uVar50,&UNK_10e4ac8a8);
      if (lStack_300 < 0) {
        __ZdlPv(pcStack_310);
      }
      auVar34 = NEON_fmov(0x3f800000,4);
      plStack_308 = auVar34._8_8_;
      pcStack_310 = auVar34._0_8_;
      FUN_10a1ea44c(fVar31,fVar51,fVar45,lVar16,param_2,lStack_468,&pcStack_310,0,1);
      goto LAB_10a1e9ac0;
    }
    FUN_10a20e2f8(&pcStack_310);
    FUN_10a1ea3e8(plVar18,&pcStack_310);
    plVar11 = plStack_308;
    if (plStack_308 != (long *)0x0) {
      plVar13 = plStack_308 + 1;
      do {
        lVar19 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_308 + 0x10))(plStack_308);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = *(long **)(*(long *)(*plVar18 + 0x10) + 0x228);
    if (*(long **)(*(long *)(*plVar18 + 0x10) + 0x230) != plVar11) {
      lVar19 = *plVar11;
      func_0x000107c2b074(&pcStack_310,&PTR_DAT_110bb1ff0);
      func_0x000107c2b074(aplStack_2f0,&PTR_DAT_110bb2020);
      FUN_10a0d9f14(&plStack_4a0,&pcStack_310,2,&uStack_470);
      FUN_10a0da1b8((long *)(lVar19 + 0x200),*(undefined8 *)(lVar19 + 0x208));
      *(long **)(lVar19 + 0x200) = plStack_4a0;
      *(long *)(lVar19 + 0x208) = lStack_498;
      *(long *)(lVar19 + 0x210) = lStack_490;
      if (lStack_490 == 0) {
        *(long *)(lVar19 + 0x200) = lVar19 + 0x208;
      }
      else {
        plStack_4a0 = &lStack_498;
        *(long *)(lStack_498 + 0x10) = lVar19 + 0x208;
        lStack_498 = 0;
        lStack_490 = 0;
      }
      FUN_10a0da1b8(&plStack_4a0,lStack_498);
      lVar19 = 0;
      do {
        if (((char *)((long)register0x00000008 + -0x2d9))[lVar19] < '\0') {
          __ZdlPv(*(undefined8 *)((long)aplStack_2f0 + lVar19));
        }
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x40);
      goto LAB_10a1e99d4;
    }
  }
  FUN_10a00946c(&UNK_10f6921f0);
LAB_10a1e9e6c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1e9e70);
  (*pcVar8)();
}



/* Entry: 10a1ea6a0; end: 10a1ea797;  */

void FUN_10a1ea6a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  FUN_10a770f5c(auStack_30,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x90) + 0x888) + 0x40));
  FUN_10a1e8610(param_1 + 0x310,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a1ea798; end: 10a1ea80f;  */

undefined4 FUN_10a1ea798(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2d4);
}



/* Entry: 10a1ea810; end: 10a1ebd33;  */

/* WARNING: Removing unreachable block (ram,0x00010a1eb6cc) */
/* WARNING: Removing unreachable block (ram,0x00010a1eb6ac) */
/* WARNING: Removing unreachable block (ram,0x00010a1eb69c) */
/* WARNING: Removing unreachable block (ram,0x00010a1eb6bc) */
/* WARNING: Removing unreachable block (ram,0x00010a1eb710) */

void FUN_10a1ea810(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 **ppuStack_7b0;
  ulong uStack_7a8;
  byte bStack_799;
  undefined8 **ppuStack_798;
  ulong uStack_790;
  byte bStack_781;
  undefined8 **ppuStack_780;
  ulong uStack_778;
  byte bStack_769;
  undefined8 **ppuStack_768;
  ulong uStack_760;
  byte bStack_751;
  undefined8 **ppuStack_750;
  ulong uStack_748;
  byte bStack_739;
  undefined8 **ppuStack_738;
  ulong uStack_730;
  byte bStack_721;
  undefined8 **ppuStack_720;
  ulong uStack_718;
  byte bStack_709;
  undefined8 **ppuStack_708;
  ulong uStack_700;
  byte bStack_6f1;
  undefined8 **ppuStack_6f0;
  ulong uStack_6e8;
  byte bStack_6d9;
  undefined8 **ppuStack_6d8;
  ulong uStack_6d0;
  byte bStack_6c1;
  undefined8 **ppuStack_6c0;
  ulong uStack_6b8;
  byte bStack_6a9;
  undefined8 **ppuStack_6a8;
  ulong uStack_6a0;
  byte bStack_691;
  undefined8 **ppuStack_690;
  ulong uStack_688;
  byte bStack_679;
  undefined8 **ppuStack_678;
  ulong uStack_670;
  byte bStack_661;
  undefined8 **ppuStack_660;
  ulong uStack_658;
  byte bStack_649;
  undefined8 **ppuStack_648;
  ulong uStack_640;
  byte bStack_631;
  undefined8 **ppuStack_630;
  ulong uStack_628;
  ulong uStack_620;
  undefined8 **appuStack_618 [2];
  char cStack_601;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_570;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 **ppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined8 **ppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  byte bStack_81;
  
  func_0x00010989f98c(auStack_98,param_2 + 0x28);
  lStack_a8 = *(long *)(param_2 + 0x310);
  plVar11 = *(long **)(param_2 + 0x318);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_a0 = plVar11;
  if (lStack_a8 == 0) {
    func_0x000107c2b054(&ppuStack_c0,&UNK_10f644e15);
  }
  else if (*(char *)(lStack_a8 + 0x6f) < '\0') {
    func_0x000107c3192c(&ppuStack_c0,*(undefined8 *)(lStack_a8 + 0x58),
                        *(undefined8 *)(lStack_a8 + 0x60));
  }
  else {
    uStack_b8 = *(ulong *)(lStack_a8 + 0x60);
    ppuStack_c0 = *(undefined8 ***)(lStack_a8 + 0x58);
    uStack_b0 = *(ulong *)(lStack_a8 + 0x68);
  }
  uVar20 = *(undefined4 *)(param_2 + 0x2d4);
  uVar19 = *(undefined4 *)(param_2 + 0x2d8);
  uVar18 = *(undefined4 *)(param_2 + 0x2dc);
  uVar17 = *(undefined4 *)(param_2 + 0x2e0);
  pcVar2 = "false";
  if ((*(byte *)(param_2 + 0x2c8) & 1) != 0) {
    pcVar2 = "true";
  }
  func_0x000107c2b054(&ppuStack_d8,pcVar2);
  uVar24 = *(undefined4 *)(param_2 + 0x2f4);
  uVar23 = *(undefined4 *)(param_2 + 0x2f8);
  uVar22 = *(undefined4 *)(param_2 + 0x2fc);
  uVar21 = *(undefined4 *)(param_2 + 0x300);
  pcVar2 = "false";
  if ((*(byte *)(param_2 + 0x2c8) & 2) != 0) {
    pcVar2 = "true";
  }
  func_0x000107c2b054(&ppuStack_f0,pcVar2);
  uVar15 = *(undefined4 *)(param_2 + 0x2e4);
  uVar12 = *(undefined4 *)(param_2 + 0x2e8);
  uVar16 = *(undefined4 *)(param_2 + 0x2ec);
  uVar13 = *(undefined4 *)(param_2 + 0x2f0);
  func_0x000107c2b054(&ppuStack_108,"true");
  uVar4 = uStack_90;
  if (-1 < (char)bStack_81) {
    uVar4 = (ulong)bStack_81;
  }
  FUN_10a003c90(appuStack_618,uVar4 + 8,&ppuStack_630);
  pppuVar3 = (undefined8 ***)appuStack_618[0];
  if (-1 < cStack_601) {
    pppuVar3 = appuStack_618;
  }
  if (uVar4 != 0) {
    _memmove(pppuVar3,auStack_98,uVar4);
  }
  *(undefined8 *)((long)pppuVar3 + uVar4) = 0x203a747865742020;
  *(undefined1 *)((undefined8 *)((long)pppuVar3 + uVar4) + 1) = 0;
  if (*(char *)(param_2 + 0x2c7) < '\0') {
    func_0x000107c3192c(&ppuStack_630,*(undefined8 *)(param_2 + 0x2b0),
                        *(undefined8 *)(param_2 + 0x2b8));
  }
  else {
    uStack_628 = *(ulong *)(param_2 + 0x2b8);
    ppuStack_630 = *(undefined8 ***)(param_2 + 0x2b0);
    uStack_620 = *(ulong *)(param_2 + 0x2c0);
  }
  uVar4 = uStack_628;
  pppuVar3 = (undefined8 ***)ppuStack_630;
  if (-1 < (long)uStack_620) {
    uVar4 = uStack_620 >> 0x38;
    pppuVar3 = &ppuStack_630;
  }
  pppuVar7 = appuStack_618;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar7,pppuVar3,uVar4);
  puStack_5f8 = pppuVar7[1];
  puStack_600 = *pppuVar7;
  puStack_5f0 = pppuVar7[2];
  pppuVar7[1] = (undefined8 **)0x0;
  pppuVar7[2] = (undefined8 **)0x0;
  *pppuVar7 = (undefined8 **)0x0;
  ppuVar8 = &puStack_600;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar8,&UNK_10f644e23,0x11);
  uStack_5d8 = ppuVar8[1];
  uStack_5e0 = *ppuVar8;
  lStack_5d0 = (long)ppuVar8[2];
  ppuVar8[1] = (undefined8 *)0x0;
  ppuVar8[2] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  uVar4 = uStack_b8;
  pppuVar3 = (undefined8 ***)ppuStack_c0;
  if (-1 < (long)uStack_b0) {
    uVar4 = uStack_b0 >> 0x38;
    pppuVar3 = &ppuStack_c0;
  }
  puVar9 = &uStack_5e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uVar4);
  uStack_5b8 = puVar9[1];
  uStack_5c0 = *puVar9;
  lStack_5b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_5c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e35,8);
  uStack_598 = puVar9[1];
  uStack_5a0 = *puVar9;
  lStack_590 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEj(&ppuStack_648,*(undefined4 *)(param_2 + 0x2cc));
  pppuVar3 = (undefined8 ***)ppuStack_648;
  if (-1 < (char)bStack_631) {
    uStack_640 = (ulong)bStack_631;
    pppuVar3 = &ppuStack_648;
  }
  puVar9 = &uStack_5a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_640);
  uStack_578 = puVar9[1];
  uStack_580 = *puVar9;
  lStack_570 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_580;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e3e,0x12);
  uStack_558 = puVar9[1];
  uStack_560 = *puVar9;
  lStack_550 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_660,uVar20);
  pppuVar3 = (undefined8 ***)ppuStack_660;
  if (-1 < (char)bStack_649) {
    uStack_658 = (ulong)bStack_649;
    pppuVar3 = &ppuStack_660;
  }
  puVar9 = &uStack_560;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_658);
  uStack_538 = puVar9[1];
  uStack_540 = *puVar9;
  lStack_530 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_540;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_518 = puVar9[1];
  uStack_520 = *puVar9;
  lStack_510 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_678,uVar19);
  pppuVar3 = (undefined8 ***)ppuStack_678;
  if (-1 < (char)bStack_661) {
    uStack_670 = (ulong)bStack_661;
    pppuVar3 = &ppuStack_678;
  }
  puVar9 = &uStack_520;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_670);
  uStack_4f8 = puVar9[1];
  uStack_500 = *puVar9;
  lStack_4f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_500;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_4d8 = puVar9[1];
  uStack_4e0 = *puVar9;
  lStack_4d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_690,uVar18);
  pppuVar3 = (undefined8 ***)ppuStack_690;
  if (-1 < (char)bStack_679) {
    uStack_688 = (ulong)bStack_679;
    pppuVar3 = &ppuStack_690;
  }
  puVar9 = &uStack_4e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_688);
  uStack_4b8 = puVar9[1];
  uStack_4c0 = *puVar9;
  lStack_4b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_4c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_498 = puVar9[1];
  uStack_4a0 = *puVar9;
  lStack_490 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_6a8,uVar17);
  pppuVar3 = (undefined8 ***)ppuStack_6a8;
  if (-1 < (char)bStack_691) {
    uStack_6a0 = (ulong)bStack_691;
    pppuVar3 = &ppuStack_6a8;
  }
  puVar9 = &uStack_4a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_6a0);
  uStack_478 = puVar9[1];
  uStack_480 = *puVar9;
  lStack_470 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_480;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e51,0x12);
  uStack_458 = puVar9[1];
  uStack_460 = *puVar9;
  lStack_450 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    ppuStack_d8 = &ppuStack_d8;
  }
  puVar9 = &uStack_460;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppuStack_d8,uStack_d0);
  uStack_438 = puVar9[1];
  uStack_440 = *puVar9;
  lStack_430 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_440;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e64,0x15);
  uStack_418 = puVar9[1];
  uStack_420 = *puVar9;
  lStack_410 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_6c0,*(undefined4 *)(param_2 + 0x304));
  pppuVar3 = (undefined8 ***)ppuStack_6c0;
  if (-1 < (char)bStack_6a9) {
    uStack_6b8 = (ulong)bStack_6a9;
    pppuVar3 = &ppuStack_6c0;
  }
  puVar9 = &uStack_420;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_6b8);
  uStack_3f8 = puVar9[1];
  uStack_400 = *puVar9;
  lStack_3f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_400;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_3d8 = puVar9[1];
  uStack_3e0 = *puVar9;
  lStack_3d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_6d8,*(undefined4 *)(param_2 + 0x308));
  pppuVar3 = (undefined8 ***)ppuStack_6d8;
  if (-1 < (char)bStack_6c1) {
    uStack_6d0 = (ulong)bStack_6c1;
    pppuVar3 = &ppuStack_6d8;
  }
  puVar9 = &uStack_3e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_6d0);
  uStack_3b8 = puVar9[1];
  uStack_3c0 = *puVar9;
  lStack_3b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_3c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e7a,0x15);
  uStack_398 = puVar9[1];
  uStack_3a0 = *puVar9;
  lStack_390 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_6f0,uVar24);
  pppuVar3 = (undefined8 ***)ppuStack_6f0;
  if (-1 < (char)bStack_6d9) {
    uStack_6e8 = (ulong)bStack_6d9;
    pppuVar3 = &ppuStack_6f0;
  }
  puVar9 = &uStack_3a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_6e8);
  uStack_378 = puVar9[1];
  uStack_380 = *puVar9;
  lStack_370 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_380;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_358 = puVar9[1];
  uStack_360 = *puVar9;
  lStack_350 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_708,uVar23);
  pppuVar3 = (undefined8 ***)ppuStack_708;
  if (-1 < (char)bStack_6f1) {
    uStack_700 = (ulong)bStack_6f1;
    pppuVar3 = &ppuStack_708;
  }
  puVar9 = &uStack_360;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_700);
  uStack_338 = puVar9[1];
  uStack_340 = *puVar9;
  lStack_330 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_340;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_318 = puVar9[1];
  uStack_320 = *puVar9;
  lStack_310 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_720,uVar22);
  pppuVar3 = (undefined8 ***)ppuStack_720;
  if (-1 < (char)bStack_709) {
    uStack_718 = (ulong)bStack_709;
    pppuVar3 = &ppuStack_720;
  }
  puVar9 = &uStack_320;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_718);
  uStack_2f8 = puVar9[1];
  uStack_300 = *puVar9;
  lStack_2f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_300;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_2d8 = puVar9[1];
  uStack_2e0 = *puVar9;
  lStack_2d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_738,uVar21);
  pppuVar3 = (undefined8 ***)ppuStack_738;
  if (-1 < (char)bStack_721) {
    uStack_730 = (ulong)bStack_721;
    pppuVar3 = &ppuStack_738;
  }
  puVar9 = &uStack_2e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_730);
  uStack_2b8 = puVar9[1];
  uStack_2c0 = *puVar9;
  lStack_2b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_2c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e90,0xf);
  uStack_298 = puVar9[1];
  uStack_2a0 = *puVar9;
  lStack_290 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuStack_f0 = &ppuStack_f0;
  }
  puVar9 = &uStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppuStack_f0,uStack_e8);
  uStack_278 = puVar9[1];
  uStack_280 = *puVar9;
  lStack_270 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644ea0,0xf);
  uStack_258 = puVar9[1];
  uStack_260 = *puVar9;
  lStack_250 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_750,*(undefined4 *)(param_2 + 0x2d0));
  pppuVar3 = (undefined8 ***)ppuStack_750;
  if (-1 < (char)bStack_739) {
    uStack_748 = (ulong)bStack_739;
    pppuVar3 = &ppuStack_750;
  }
  puVar9 = &uStack_260;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_748);
  uStack_238 = puVar9[1];
  uStack_240 = *puVar9;
  lStack_230 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644eb0,0x15);
  uStack_218 = puVar9[1];
  uStack_220 = *puVar9;
  lStack_210 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_768,uVar15);
  pppuVar3 = (undefined8 ***)ppuStack_768;
  if (-1 < (char)bStack_751) {
    uStack_760 = (ulong)bStack_751;
    pppuVar3 = &ppuStack_768;
  }
  puVar9 = &uStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_760);
  uStack_1f8 = puVar9[1];
  uStack_200 = *puVar9;
  lStack_1f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_1d8 = puVar9[1];
  uStack_1e0 = *puVar9;
  lStack_1d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_780,uVar12);
  pppuVar3 = (undefined8 ***)ppuStack_780;
  if (-1 < (char)bStack_769) {
    uStack_778 = (ulong)bStack_769;
    pppuVar3 = &ppuStack_780;
  }
  puVar9 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_778);
  uStack_1b8 = puVar9[1];
  uStack_1c0 = *puVar9;
  lStack_1b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_198 = puVar9[1];
  uStack_1a0 = *puVar9;
  lStack_190 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_798,uVar16);
  pppuVar3 = (undefined8 ***)ppuStack_798;
  if (-1 < (char)bStack_781) {
    uStack_790 = (ulong)bStack_781;
    pppuVar3 = &ppuStack_798;
  }
  puVar9 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_790);
  uStack_178 = puVar9[1];
  uStack_180 = *puVar9;
  lStack_170 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_158 = puVar9[1];
  uStack_160 = *puVar9;
  lStack_150 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_7b0,uVar13);
  pppuVar3 = (undefined8 ***)ppuStack_7b0;
  if (-1 < (char)bStack_799) {
    uStack_7a8 = (ulong)bStack_799;
    pppuVar3 = &ppuStack_7b0;
  }
  puVar9 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_7a8);
  uStack_138 = puVar9[1];
  uStack_140 = *puVar9;
  lStack_130 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644ec6,0x16);
  uStack_118 = puVar9[1];
  uStack_120 = *puVar9;
  lStack_110 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (-1 < (char)bStack_f1) {
    uStack_100 = (ulong)bStack_f1;
    ppuStack_108 = &ppuStack_108;
  }
  puVar9 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppuStack_108,uStack_100);
  uVar14 = *puVar9;
  param_1[1] = puVar9[1];
  *param_1 = uVar14;
  param_1[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if ((char)bStack_799 < '\0') {
    __ZdlPv(ppuStack_7b0);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if ((char)bStack_781 < '\0') {
    __ZdlPv(ppuStack_798);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if ((char)bStack_769 < '\0') {
    __ZdlPv(ppuStack_780);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if ((char)bStack_751 < '\0') {
    __ZdlPv(ppuStack_768);
  }
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  if (lStack_230 < 0) {
    __ZdlPv(uStack_240);
  }
  if ((char)bStack_739 < '\0') {
    __ZdlPv(ppuStack_750);
  }
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if (lStack_270 < 0) {
    __ZdlPv(uStack_280);
  }
  if (lStack_290 < 0) {
    __ZdlPv(uStack_2a0);
  }
  if (lStack_2b0 < 0) {
    __ZdlPv(uStack_2c0);
  }
  if ((char)bStack_721 < '\0') {
    __ZdlPv(ppuStack_738);
  }
  if (lStack_2d0 < 0) {
    __ZdlPv(uStack_2e0);
  }
  if (lStack_2f0 < 0) {
    __ZdlPv(uStack_300);
  }
  if ((char)bStack_709 < '\0') {
    __ZdlPv(ppuStack_720);
  }
  if (lStack_310 < 0) {
    __ZdlPv(uStack_320);
  }
  if (lStack_330 < 0) {
    __ZdlPv(uStack_340);
  }
  if ((char)bStack_6f1 < '\0') {
    __ZdlPv(ppuStack_708);
  }
  if (lStack_350 < 0) {
    __ZdlPv(uStack_360);
  }
  if (lStack_370 < 0) {
    __ZdlPv(uStack_380);
  }
  if ((char)bStack_6d9 < '\0') {
    __ZdlPv(ppuStack_6f0);
  }
  if (lStack_390 < 0) {
    __ZdlPv(uStack_3a0);
  }
  if (lStack_3b0 < 0) {
    __ZdlPv(uStack_3c0);
  }
  if ((char)bStack_6c1 < '\0') {
    __ZdlPv(ppuStack_6d8);
  }
  if (lStack_3d0 < 0) {
    __ZdlPv(uStack_3e0);
  }
  if (lStack_3f0 < 0) {
    __ZdlPv(uStack_400);
  }
  if ((char)bStack_6a9 < '\0') {
    __ZdlPv(ppuStack_6c0);
  }
  if (lStack_410 < 0) {
    __ZdlPv(uStack_420);
  }
  if (lStack_430 < 0) {
    __ZdlPv(uStack_440);
  }
  if (lStack_450 < 0) {
    __ZdlPv(uStack_460);
  }
  if (lStack_470 < 0) {
    __ZdlPv(uStack_480);
  }
  if ((char)bStack_691 < '\0') {
    __ZdlPv(ppuStack_6a8);
  }
  if (lStack_490 < 0) {
    __ZdlPv(uStack_4a0);
  }
  if (lStack_4b0 < 0) {
    __ZdlPv(uStack_4c0);
  }
  if ((char)bStack_679 < '\0') {
    __ZdlPv(ppuStack_690);
  }
  if (lStack_4d0 < 0) {
    __ZdlPv(uStack_4e0);
  }
  if (lStack_4f0 < 0) {
    __ZdlPv(uStack_500);
  }
  if ((char)bStack_661 < '\0') {
    __ZdlPv(ppuStack_678);
  }
  if (lStack_510 < 0) {
    __ZdlPv(uStack_520);
  }
  if (lStack_530 < 0) {
    __ZdlPv(uStack_540);
  }
  if ((char)bStack_649 < '\0') {
    __ZdlPv(ppuStack_660);
  }
  if (lStack_550 < 0) {
    __ZdlPv(uStack_560);
  }
  if (lStack_570 < 0) {
    __ZdlPv(uStack_580);
  }
  if ((char)bStack_631 < '\0') {
    __ZdlPv(ppuStack_648);
  }
  if (lStack_590 < 0) {
    __ZdlPv(uStack_5a0);
  }
  if (lStack_5b0 < 0) {
    __ZdlPv(uStack_5c0);
  }
  if (lStack_5d0 < 0) {
    __ZdlPv(uStack_5e0);
  }
  if ((long)puStack_5f0 < 0) {
    __ZdlPv(puStack_600);
  }
  if ((long)uStack_620 < 0) {
    __ZdlPv(ppuStack_630);
  }
  if (cStack_601 < '\0') {
    __ZdlPv(appuStack_618[0]);
  }
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return;
}



/* Entry: 10a1ebd34; end: 10a1ebdc7;  */

/* WARNING: Removing unreachable block (ram,0x00010a1eb6cc) */
/* WARNING: Removing unreachable block (ram,0x00010a1eb6ac) */
/* WARNING: Removing unreachable block (ram,0x00010a1eb69c) */
/* WARNING: Removing unreachable block (ram,0x00010a1eb6bc) */
/* WARNING: Removing unreachable block (ram,0x00010a1eb710) */

void FUN_10a1ebd34(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 **ppuStack_7b0;
  ulong uStack_7a8;
  byte bStack_799;
  undefined8 **ppuStack_798;
  ulong uStack_790;
  byte bStack_781;
  undefined8 **ppuStack_780;
  ulong uStack_778;
  byte bStack_769;
  undefined8 **ppuStack_768;
  ulong uStack_760;
  byte bStack_751;
  undefined8 **ppuStack_750;
  ulong uStack_748;
  byte bStack_739;
  undefined8 **ppuStack_738;
  ulong uStack_730;
  byte bStack_721;
  undefined8 **ppuStack_720;
  ulong uStack_718;
  byte bStack_709;
  undefined8 **ppuStack_708;
  ulong uStack_700;
  byte bStack_6f1;
  undefined8 **ppuStack_6f0;
  ulong uStack_6e8;
  byte bStack_6d9;
  undefined8 **ppuStack_6d8;
  ulong uStack_6d0;
  byte bStack_6c1;
  undefined8 **ppuStack_6c0;
  ulong uStack_6b8;
  byte bStack_6a9;
  undefined8 **ppuStack_6a8;
  ulong uStack_6a0;
  byte bStack_691;
  undefined8 **ppuStack_690;
  ulong uStack_688;
  byte bStack_679;
  undefined8 **ppuStack_678;
  ulong uStack_670;
  byte bStack_661;
  undefined8 **ppuStack_660;
  ulong uStack_658;
  byte bStack_649;
  undefined8 **ppuStack_648;
  ulong uStack_640;
  byte bStack_631;
  undefined8 **ppuStack_630;
  ulong uStack_628;
  ulong uStack_620;
  undefined8 **appuStack_618 [2];
  char cStack_601;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_570;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 **ppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined8 **ppuStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  byte bStack_81;
  
  func_0x00010989f98c(auStack_98,param_2);
  lStack_a8 = *(long *)(param_2 + 0x2e8);
  plVar11 = *(long **)(param_2 + 0x2f0);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_a0 = plVar11;
  if (lStack_a8 == 0) {
    func_0x000107c2b054(&ppuStack_c0,&UNK_10f644e15);
  }
  else if (*(char *)(lStack_a8 + 0x6f) < '\0') {
    func_0x000107c3192c(&ppuStack_c0,*(undefined8 *)(lStack_a8 + 0x58),
                        *(undefined8 *)(lStack_a8 + 0x60));
  }
  else {
    uStack_b8 = *(ulong *)(lStack_a8 + 0x60);
    ppuStack_c0 = *(undefined8 ***)(lStack_a8 + 0x58);
    uStack_b0 = *(ulong *)(lStack_a8 + 0x68);
  }
  uVar20 = *(undefined4 *)(param_2 + 0x2ac);
  uVar19 = *(undefined4 *)(param_2 + 0x2b0);
  uVar18 = *(undefined4 *)(param_2 + 0x2b4);
  uVar17 = *(undefined4 *)(param_2 + 0x2b8);
  pcVar2 = "false";
  if ((*(byte *)(param_2 + 0x2a0) & 1) != 0) {
    pcVar2 = "true";
  }
  func_0x000107c2b054(&ppuStack_d8,pcVar2);
  uVar24 = *(undefined4 *)(param_2 + 0x2cc);
  uVar23 = *(undefined4 *)(param_2 + 0x2d0);
  uVar22 = *(undefined4 *)(param_2 + 0x2d4);
  uVar21 = *(undefined4 *)(param_2 + 0x2d8);
  pcVar2 = "false";
  if ((*(byte *)(param_2 + 0x2a0) & 2) != 0) {
    pcVar2 = "true";
  }
  func_0x000107c2b054(&ppuStack_f0,pcVar2);
  uVar15 = *(undefined4 *)(param_2 + 700);
  uVar12 = *(undefined4 *)(param_2 + 0x2c0);
  uVar16 = *(undefined4 *)(param_2 + 0x2c4);
  uVar13 = *(undefined4 *)(param_2 + 0x2c8);
  func_0x000107c2b054(&ppuStack_108,"true");
  uVar4 = uStack_90;
  if (-1 < (char)bStack_81) {
    uVar4 = (ulong)bStack_81;
  }
  FUN_10a003c90(appuStack_618,uVar4 + 8,&ppuStack_630);
  pppuVar3 = (undefined8 ***)appuStack_618[0];
  if (-1 < cStack_601) {
    pppuVar3 = appuStack_618;
  }
  if (uVar4 != 0) {
    _memmove(pppuVar3,auStack_98,uVar4);
  }
  *(undefined8 *)((long)pppuVar3 + uVar4) = 0x203a747865742020;
  *(undefined1 *)((undefined8 *)((long)pppuVar3 + uVar4) + 1) = 0;
  if (*(char *)(param_2 + 0x29f) < '\0') {
    func_0x000107c3192c(&ppuStack_630,*(undefined8 *)(param_2 + 0x288),
                        *(undefined8 *)(param_2 + 0x290));
  }
  else {
    uStack_628 = *(ulong *)(param_2 + 0x290);
    ppuStack_630 = *(undefined8 ***)(param_2 + 0x288);
    uStack_620 = *(ulong *)(param_2 + 0x298);
  }
  uVar4 = uStack_628;
  pppuVar3 = (undefined8 ***)ppuStack_630;
  if (-1 < (long)uStack_620) {
    uVar4 = uStack_620 >> 0x38;
    pppuVar3 = &ppuStack_630;
  }
  pppuVar7 = appuStack_618;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar7,pppuVar3,uVar4);
  puStack_5f8 = pppuVar7[1];
  puStack_600 = *pppuVar7;
  puStack_5f0 = pppuVar7[2];
  pppuVar7[1] = (undefined8 **)0x0;
  pppuVar7[2] = (undefined8 **)0x0;
  *pppuVar7 = (undefined8 **)0x0;
  ppuVar8 = &puStack_600;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar8,&UNK_10f644e23,0x11);
  uStack_5d8 = ppuVar8[1];
  uStack_5e0 = *ppuVar8;
  lStack_5d0 = (long)ppuVar8[2];
  ppuVar8[1] = (undefined8 *)0x0;
  ppuVar8[2] = (undefined8 *)0x0;
  *ppuVar8 = (undefined8 *)0x0;
  uVar4 = uStack_b8;
  pppuVar3 = (undefined8 ***)ppuStack_c0;
  if (-1 < (long)uStack_b0) {
    uVar4 = uStack_b0 >> 0x38;
    pppuVar3 = &ppuStack_c0;
  }
  puVar9 = &uStack_5e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uVar4);
  uStack_5b8 = puVar9[1];
  uStack_5c0 = *puVar9;
  lStack_5b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_5c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e35,8);
  uStack_598 = puVar9[1];
  uStack_5a0 = *puVar9;
  lStack_590 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEj(&ppuStack_648,*(undefined4 *)(param_2 + 0x2a4));
  pppuVar3 = (undefined8 ***)ppuStack_648;
  if (-1 < (char)bStack_631) {
    uStack_640 = (ulong)bStack_631;
    pppuVar3 = &ppuStack_648;
  }
  puVar9 = &uStack_5a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_640);
  uStack_578 = puVar9[1];
  uStack_580 = *puVar9;
  lStack_570 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_580;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e3e,0x12);
  uStack_558 = puVar9[1];
  uStack_560 = *puVar9;
  lStack_550 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_660,uVar20);
  pppuVar3 = (undefined8 ***)ppuStack_660;
  if (-1 < (char)bStack_649) {
    uStack_658 = (ulong)bStack_649;
    pppuVar3 = &ppuStack_660;
  }
  puVar9 = &uStack_560;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_658);
  uStack_538 = puVar9[1];
  uStack_540 = *puVar9;
  lStack_530 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_540;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_518 = puVar9[1];
  uStack_520 = *puVar9;
  lStack_510 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_678,uVar19);
  pppuVar3 = (undefined8 ***)ppuStack_678;
  if (-1 < (char)bStack_661) {
    uStack_670 = (ulong)bStack_661;
    pppuVar3 = &ppuStack_678;
  }
  puVar9 = &uStack_520;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_670);
  uStack_4f8 = puVar9[1];
  uStack_500 = *puVar9;
  lStack_4f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_500;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_4d8 = puVar9[1];
  uStack_4e0 = *puVar9;
  lStack_4d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_690,uVar18);
  pppuVar3 = (undefined8 ***)ppuStack_690;
  if (-1 < (char)bStack_679) {
    uStack_688 = (ulong)bStack_679;
    pppuVar3 = &ppuStack_690;
  }
  puVar9 = &uStack_4e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_688);
  uStack_4b8 = puVar9[1];
  uStack_4c0 = *puVar9;
  lStack_4b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_4c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_498 = puVar9[1];
  uStack_4a0 = *puVar9;
  lStack_490 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_6a8,uVar17);
  pppuVar3 = (undefined8 ***)ppuStack_6a8;
  if (-1 < (char)bStack_691) {
    uStack_6a0 = (ulong)bStack_691;
    pppuVar3 = &ppuStack_6a8;
  }
  puVar9 = &uStack_4a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_6a0);
  uStack_478 = puVar9[1];
  uStack_480 = *puVar9;
  lStack_470 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_480;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e51,0x12);
  uStack_458 = puVar9[1];
  uStack_460 = *puVar9;
  lStack_450 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    ppuStack_d8 = &ppuStack_d8;
  }
  puVar9 = &uStack_460;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppuStack_d8,uStack_d0);
  uStack_438 = puVar9[1];
  uStack_440 = *puVar9;
  lStack_430 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_440;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e64,0x15);
  uStack_418 = puVar9[1];
  uStack_420 = *puVar9;
  lStack_410 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_6c0,*(undefined4 *)(param_2 + 0x2dc));
  pppuVar3 = (undefined8 ***)ppuStack_6c0;
  if (-1 < (char)bStack_6a9) {
    uStack_6b8 = (ulong)bStack_6a9;
    pppuVar3 = &ppuStack_6c0;
  }
  puVar9 = &uStack_420;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_6b8);
  uStack_3f8 = puVar9[1];
  uStack_400 = *puVar9;
  lStack_3f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_400;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_3d8 = puVar9[1];
  uStack_3e0 = *puVar9;
  lStack_3d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_6d8,*(undefined4 *)(param_2 + 0x2e0));
  pppuVar3 = (undefined8 ***)ppuStack_6d8;
  if (-1 < (char)bStack_6c1) {
    uStack_6d0 = (ulong)bStack_6c1;
    pppuVar3 = &ppuStack_6d8;
  }
  puVar9 = &uStack_3e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_6d0);
  uStack_3b8 = puVar9[1];
  uStack_3c0 = *puVar9;
  lStack_3b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_3c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e7a,0x15);
  uStack_398 = puVar9[1];
  uStack_3a0 = *puVar9;
  lStack_390 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_6f0,uVar24);
  pppuVar3 = (undefined8 ***)ppuStack_6f0;
  if (-1 < (char)bStack_6d9) {
    uStack_6e8 = (ulong)bStack_6d9;
    pppuVar3 = &ppuStack_6f0;
  }
  puVar9 = &uStack_3a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_6e8);
  uStack_378 = puVar9[1];
  uStack_380 = *puVar9;
  lStack_370 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_380;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_358 = puVar9[1];
  uStack_360 = *puVar9;
  lStack_350 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_708,uVar23);
  pppuVar3 = (undefined8 ***)ppuStack_708;
  if (-1 < (char)bStack_6f1) {
    uStack_700 = (ulong)bStack_6f1;
    pppuVar3 = &ppuStack_708;
  }
  puVar9 = &uStack_360;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_700);
  uStack_338 = puVar9[1];
  uStack_340 = *puVar9;
  lStack_330 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_340;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_318 = puVar9[1];
  uStack_320 = *puVar9;
  lStack_310 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_720,uVar22);
  pppuVar3 = (undefined8 ***)ppuStack_720;
  if (-1 < (char)bStack_709) {
    uStack_718 = (ulong)bStack_709;
    pppuVar3 = &ppuStack_720;
  }
  puVar9 = &uStack_320;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_718);
  uStack_2f8 = puVar9[1];
  uStack_300 = *puVar9;
  lStack_2f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_300;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_2d8 = puVar9[1];
  uStack_2e0 = *puVar9;
  lStack_2d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_738,uVar21);
  pppuVar3 = (undefined8 ***)ppuStack_738;
  if (-1 < (char)bStack_721) {
    uStack_730 = (ulong)bStack_721;
    pppuVar3 = &ppuStack_738;
  }
  puVar9 = &uStack_2e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_730);
  uStack_2b8 = puVar9[1];
  uStack_2c0 = *puVar9;
  lStack_2b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_2c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644e90,0xf);
  uStack_298 = puVar9[1];
  uStack_2a0 = *puVar9;
  lStack_290 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    ppuStack_f0 = &ppuStack_f0;
  }
  puVar9 = &uStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppuStack_f0,uStack_e8);
  uStack_278 = puVar9[1];
  uStack_280 = *puVar9;
  lStack_270 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644ea0,0xf);
  uStack_258 = puVar9[1];
  uStack_260 = *puVar9;
  lStack_250 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_750,*(undefined4 *)(param_2 + 0x2a8));
  pppuVar3 = (undefined8 ***)ppuStack_750;
  if (-1 < (char)bStack_739) {
    uStack_748 = (ulong)bStack_739;
    pppuVar3 = &ppuStack_750;
  }
  puVar9 = &uStack_260;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_748);
  uStack_238 = puVar9[1];
  uStack_240 = *puVar9;
  lStack_230 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644eb0,0x15);
  uStack_218 = puVar9[1];
  uStack_220 = *puVar9;
  lStack_210 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_768,uVar15);
  pppuVar3 = (undefined8 ***)ppuStack_768;
  if (-1 < (char)bStack_751) {
    uStack_760 = (ulong)bStack_751;
    pppuVar3 = &ppuStack_768;
  }
  puVar9 = &uStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_760);
  uStack_1f8 = puVar9[1];
  uStack_200 = *puVar9;
  lStack_1f0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_1d8 = puVar9[1];
  uStack_1e0 = *puVar9;
  lStack_1d0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_780,uVar12);
  pppuVar3 = (undefined8 ***)ppuStack_780;
  if (-1 < (char)bStack_769) {
    uStack_778 = (ulong)bStack_769;
    pppuVar3 = &ppuStack_780;
  }
  puVar9 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_778);
  uStack_1b8 = puVar9[1];
  uStack_1c0 = *puVar9;
  lStack_1b0 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_198 = puVar9[1];
  uStack_1a0 = *puVar9;
  lStack_190 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_798,uVar16);
  pppuVar3 = (undefined8 ***)ppuStack_798;
  if (-1 < (char)bStack_781) {
    uStack_790 = (ulong)bStack_781;
    pppuVar3 = &ppuStack_798;
  }
  puVar9 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_790);
  uStack_178 = puVar9[1];
  uStack_180 = *puVar9;
  lStack_170 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&DAT_10f68f19e,2);
  uStack_158 = puVar9[1];
  uStack_160 = *puVar9;
  lStack_150 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_7b0,uVar13);
  pppuVar3 = (undefined8 ***)ppuStack_7b0;
  if (-1 < (char)bStack_799) {
    uStack_7a8 = (ulong)bStack_799;
    pppuVar3 = &ppuStack_7b0;
  }
  puVar9 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,pppuVar3,uStack_7a8);
  uStack_138 = puVar9[1];
  uStack_140 = *puVar9;
  lStack_130 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  puVar9 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,&UNK_10f644ec6,0x16);
  uStack_118 = puVar9[1];
  uStack_120 = *puVar9;
  lStack_110 = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (-1 < (char)bStack_f1) {
    uStack_100 = (ulong)bStack_f1;
    ppuStack_108 = &ppuStack_108;
  }
  puVar9 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar9,ppuStack_108,uStack_100);
  uVar14 = *puVar9;
  param_1[1] = puVar9[1];
  *param_1 = uVar14;
  param_1[2] = puVar9[2];
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = 0;
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if ((char)bStack_799 < '\0') {
    __ZdlPv(ppuStack_7b0);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if ((char)bStack_781 < '\0') {
    __ZdlPv(ppuStack_798);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if ((char)bStack_769 < '\0') {
    __ZdlPv(ppuStack_780);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if ((char)bStack_751 < '\0') {
    __ZdlPv(ppuStack_768);
  }
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  if (lStack_230 < 0) {
    __ZdlPv(uStack_240);
  }
  if ((char)bStack_739 < '\0') {
    __ZdlPv(ppuStack_750);
  }
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if (lStack_270 < 0) {
    __ZdlPv(uStack_280);
  }
  if (lStack_290 < 0) {
    __ZdlPv(uStack_2a0);
  }
  if (lStack_2b0 < 0) {
    __ZdlPv(uStack_2c0);
  }
  if ((char)bStack_721 < '\0') {
    __ZdlPv(ppuStack_738);
  }
  if (lStack_2d0 < 0) {
    __ZdlPv(uStack_2e0);
  }
  if (lStack_2f0 < 0) {
    __ZdlPv(uStack_300);
  }
  if ((char)bStack_709 < '\0') {
    __ZdlPv(ppuStack_720);
  }
  if (lStack_310 < 0) {
    __ZdlPv(uStack_320);
  }
  if (lStack_330 < 0) {
    __ZdlPv(uStack_340);
  }
  if ((char)bStack_6f1 < '\0') {
    __ZdlPv(ppuStack_708);
  }
  if (lStack_350 < 0) {
    __ZdlPv(uStack_360);
  }
  if (lStack_370 < 0) {
    __ZdlPv(uStack_380);
  }
  if ((char)bStack_6d9 < '\0') {
    __ZdlPv(ppuStack_6f0);
  }
  if (lStack_390 < 0) {
    __ZdlPv(uStack_3a0);
  }
  if (lStack_3b0 < 0) {
    __ZdlPv(uStack_3c0);
  }
  if ((char)bStack_6c1 < '\0') {
    __ZdlPv(ppuStack_6d8);
  }
  if (lStack_3d0 < 0) {
    __ZdlPv(uStack_3e0);
  }
  if (lStack_3f0 < 0) {
    __ZdlPv(uStack_400);
  }
  if ((char)bStack_6a9 < '\0') {
    __ZdlPv(ppuStack_6c0);
  }
  if (lStack_410 < 0) {
    __ZdlPv(uStack_420);
  }
  if (lStack_430 < 0) {
    __ZdlPv(uStack_440);
  }
  if (lStack_450 < 0) {
    __ZdlPv(uStack_460);
  }
  if (lStack_470 < 0) {
    __ZdlPv(uStack_480);
  }
  if ((char)bStack_691 < '\0') {
    __ZdlPv(ppuStack_6a8);
  }
  if (lStack_490 < 0) {
    __ZdlPv(uStack_4a0);
  }
  if (lStack_4b0 < 0) {
    __ZdlPv(uStack_4c0);
  }
  if ((char)bStack_679 < '\0') {
    __ZdlPv(ppuStack_690);
  }
  if (lStack_4d0 < 0) {
    __ZdlPv(uStack_4e0);
  }
  if (lStack_4f0 < 0) {
    __ZdlPv(uStack_500);
  }
  if ((char)bStack_661 < '\0') {
    __ZdlPv(ppuStack_678);
  }
  if (lStack_510 < 0) {
    __ZdlPv(uStack_520);
  }
  if (lStack_530 < 0) {
    __ZdlPv(uStack_540);
  }
  if ((char)bStack_649 < '\0') {
    __ZdlPv(ppuStack_660);
  }
  if (lStack_550 < 0) {
    __ZdlPv(uStack_560);
  }
  if (lStack_570 < 0) {
    __ZdlPv(uStack_580);
  }
  if ((char)bStack_631 < '\0') {
    __ZdlPv(ppuStack_648);
  }
  if (lStack_590 < 0) {
    __ZdlPv(uStack_5a0);
  }
  if (lStack_5b0 < 0) {
    __ZdlPv(uStack_5c0);
  }
  if (lStack_5d0 < 0) {
    __ZdlPv(uStack_5e0);
  }
  if ((long)puStack_5f0 < 0) {
    __ZdlPv(puStack_600);
  }
  if ((long)uStack_620 < 0) {
    __ZdlPv(ppuStack_630);
  }
  if (cStack_601 < '\0') {
    __ZdlPv(appuStack_618[0]);
  }
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return;
}



/* Entry: 10a1ebdc8; end: 10a1ebe43;  */

undefined8 * FUN_10a1ebdc8(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110bb2b30;
  param_1[2] = &PTR_FUN_110bb2be0;
  param_1[5] = &PTR_DAT_110bb2c10;
  param_1[0x17] = &PTR_DAT_110bb2c98;
  FUN_10a20e3dc(param_1 + 0x15);
  *param_1 = &PTR_DAT_110bb1998;
  param_1[2] = &PTR_FUN_110bb3338;
  param_1[5] = &PTR_DAT_110bb3368;
  param_1[0x17] = &PTR_DAT_110bb1a68;
  FUN_10a1f534c(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1ebe44; end: 10a1ebe67;  */

undefined8 * FUN_10a1ebe44(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110bb2b30;
  param_1[2] = &PTR_FUN_110bb2be0;
  param_1[5] = &PTR_DAT_110bb2c10;
  param_1[0x17] = &PTR_DAT_110bb2c98;
  FUN_10a20e3dc(param_1 + 0x15);
  *param_1 = &PTR_DAT_110bb1998;
  param_1[2] = &PTR_FUN_110bb3338;
  param_1[5] = &PTR_DAT_110bb3368;
  param_1[0x17] = &PTR_DAT_110bb1a68;
  FUN_10a1f534c(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1ebe68; end: 10a1ebeab;  */

void FUN_10a1ebe68(void)

{
  FUN_10a1ebdc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1ebeac; end: 10a1ebfff;  */

void FUN_10a1ebeac(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a1ebdc8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a1ec000; end: 10a1ec027;  */

void FUN_10a1ec000(void)

{
  return;
}



/* Entry: 10a1ec028; end: 10a1ec093;  */

void FUN_10a1ec028(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f645a33;
  uStack_28 = 0x1b;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bb1c58,&puStack_30);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(param_1 + 0xa8),0);
  return;
}



/* Entry: 10a1ec094; end: 10a1ec0bb;  */

undefined1  [16] FUN_10a1ec094(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f645a4f;
  return auVar1;
}



/* Entry: 10a1ec0bc; end: 10a1ec3eb;  */

void FUN_10a1ec0bc(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f645a4f,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb3788;
  pppuVar2 = (undefined8 ***)&UNK_10f643dac;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb3788;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c681e8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ec3cc;
    FUN_10a054dac(param_1,&UNK_10f644edd,FUN_10a20e474,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ec3cc;
    FUN_10a054dac(param_1,&DAT_10f644ee7,FUN_10a20e5a4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ec3cc;
    FUN_10a054dac(param_1,&DAT_10f644ef0,FUN_10a20e66c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ec3cc;
    FUN_10a054dac(param_1,&UNK_10f644efa,FUN_10a20e734,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a1ec3cc;
    FUN_10a054dac(param_1,&UNK_10f644f03,FUN_10a20e7fc,1,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f645a4f,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a1ec3cc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1ec3d0);
  (*pcVar6)();
}



/* Entry: 10a1ec3ec; end: 10a1ec483;  */

long * FUN_10a1ec3ec(long *param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110b9f848;
  param_1[5] = (long)&PTR_DAT_110b9f878;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a1ec484; end: 10a1ec543;  */

long * FUN_10a1ec484(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = (long *)param_1[0x13];
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    plVar4 = (long *)(ulong)*(uint *)(param_1 + 0x3d);
  }
  else {
    plVar6 = (long *)param_1[0x14];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 0xb0))();
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return plVar4;
}


