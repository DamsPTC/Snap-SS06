/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10528a92c; end: 10528a963;  */

void FUN_10528a92c(void)

{
  return;
}



/* Entry: 10528a964; end: 10528aad7;  */

long * FUN_10528a964(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_238 [16];
  long lStack_228;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [32];
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x00010528b5bc();
  FUN_10528aad8();
  func_0x0001003b2110(&lStack_b8,0x1138186d0);
  FUN_10529dd1c(auStack_a8,param_2);
  func_0x000105280820(auStack_98,param_2 + 0x18);
  FUN_10528ace8(auStack_88,param_2 + 0x38);
  uStack_70 = 5;
  uStack_78 = *(undefined8 *)(param_2 + 0x50);
  uStack_68 = *(undefined8 *)(param_2 + 0x58);
  uStack_60 = 5;
  if (*(char *)(param_2 + 0x60) == '\0') {
    uStack_60 = 1;
    uStack_68 = 0;
  }
  uStack_5f = 0;
  uStack_58 = *(undefined4 *)(param_2 + 0x68);
  uStack_50 = 4;
  func_0x000105283f30(auStack_48,param_2 + 0x70);
  func_0x000104bdb9bc(&lStack_b0,&lStack_b8,auStack_a8,7);
  lVar8 = 0x60;
  do {
    func_0x00010b9a8d98(auStack_a8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_b8);
  plVar4 = &lStack_b0;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_b0;
  func_0x000104bdbf78();
  func_0x00010528b598();
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x70;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_b8;
  func_0x0001003b1f60();
  func_0x00010528b580();
  func_0x00010528b5bc();
  if ((bRam00000001138186d8 & 1) == 0) {
    plVar4 = (long *)0x1138186d8;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_1a8,"_djinni_record_Group");
      pcVar5 = "groupId";
      func_0x0001003a83dc(auStack_1b0,"groupId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_1a0,auStack_1b0,pcVar5);
      pcVar5 = "name";
      func_0x0001003a83dc(auStack_1b8,"name");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_188,auStack_1b8,pcVar5);
      pcVar5 = "participants";
      func_0x0001003a83dc(auStack_1c0,"participants");
      FUN_10528adb0();
      func_0x0001003b1b50(auStack_170,auStack_1c0,pcVar5);
      pcVar5 = "lastInteractionTimestampMs";
      func_0x0001003a83dc(auStack_1c8,"lastInteractionTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_158,auStack_1c8,pcVar5);
      pcVar5 = "pinnedTimestampMs";
      func_0x0001003a83dc(auStack_1d0,"pinnedTimestampMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_140,auStack_1d0,pcVar5);
      pcVar5 = "type";
      func_0x0001003a83dc(auStack_1d8,"type");
      func_0x000104bf8944();
      func_0x0001003b1b50(auStack_128,auStack_1d8,pcVar5);
      pcVar5 = "publicGroupMetadata";
      func_0x0001003a83dc(auStack_1e0,"publicGroupMetadata");
      FUN_105283fb4();
      func_0x0001003b1b50(auStack_110,auStack_1e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138186c8,auStack_1a8,0,auStack_1a0,7);
      lVar8 = 0x90;
      do {
        func_0x0001003b1c5c(auStack_1a0 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1e0);
      func_0x0001003a8c94(auStack_1d8);
      func_0x0001003a8c94(auStack_1d0);
      func_0x0001003a8c94(auStack_1c8);
      func_0x0001003a8c94(auStack_1c0);
      func_0x0001003a8c94(auStack_1b8);
      func_0x0001003a8c94(auStack_1b0);
      func_0x0001003a8c94(auStack_1a8);
      plVar4 = (long *)0x1138186d8;
      ___cxa_guard_release();
    }
  }
  func_0x00010528b598();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_228,(plVar4[1] - *plVar4) / 0xd8);
    lVar9 = 0;
    lVar8 = 0x18;
    for (uVar10 = 0; uVar10 < (ulong)((plVar4[1] - *plVar4) / 0xd8); uVar10 = uVar10 + 1) {
      FUN_1052bef3c(auStack_238,*plVar4 + lVar9);
      func_0x00010b9a9020(lStack_228 + lVar8,auStack_238);
      func_0x00010b9a8d98(auStack_238);
      lVar8 = lVar8 + 0x10;
      lVar9 = lVar9 + 0xd8;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_228);
    plVar4 = &lStack_228;
    func_0x000104bddf38(plVar4);
    return plVar4;
  }
  return (long *)0x1138186c8;
}



/* Entry: 10528aad8; end: 10528ace7;  */

long * FUN_10528aad8(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_178 [16];
  long lStack_168;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x00010528b5bc();
  if ((bRam00000001138186d8 & 1) == 0) {
    param_1 = (long *)0x1138186d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_e8,"_djinni_record_Group");
      pcVar1 = "groupId";
      func_0x0001003a83dc(auStack_f0,"groupId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_e0,auStack_f0,pcVar1);
      pcVar1 = "name";
      func_0x0001003a83dc(auStack_f8,"name");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_c8,auStack_f8,pcVar1);
      pcVar1 = "participants";
      func_0x0001003a83dc(auStack_100,"participants");
      FUN_10528adb0();
      func_0x0001003b1b50(auStack_b0,auStack_100,pcVar1);
      pcVar1 = "lastInteractionTimestampMs";
      func_0x0001003a83dc(auStack_108,"lastInteractionTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_98,auStack_108,pcVar1);
      pcVar1 = "pinnedTimestampMs";
      func_0x0001003a83dc(auStack_110,"pinnedTimestampMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_80,auStack_110,pcVar1);
      pcVar1 = "type";
      func_0x0001003a83dc(auStack_118,"type");
      func_0x000104bf8944();
      func_0x0001003b1b50(auStack_68,auStack_118,pcVar1);
      pcVar1 = "publicGroupMetadata";
      func_0x0001003a83dc(auStack_120,"publicGroupMetadata");
      FUN_105283fb4();
      func_0x0001003b1b50(auStack_50,auStack_120,pcVar1);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138186c8,auStack_e8,0,auStack_e0,7);
      lVar6 = 0x90;
      do {
        func_0x0001003b1c5c(auStack_e0 + lVar6);
        param_2 = (int)uVar3;
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_120);
      func_0x0001003a8c94(auStack_118);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      param_1 = (long *)0x1138186d8;
      ___cxa_guard_release();
    }
  }
  func_0x00010528b598();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010b9abe10(&lStack_168,(param_1[1] - *param_1) / 0xd8);
    lVar4 = 0;
    lVar6 = 0x18;
    for (uVar5 = 0; uVar5 < (ulong)((param_1[1] - *param_1) / 0xd8); uVar5 = uVar5 + 1) {
      FUN_1052bef3c(auStack_178,*param_1 + lVar4);
      func_0x00010b9a9020(lStack_168 + lVar6,auStack_178);
      func_0x00010b9a8d98(auStack_178);
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0xd8;
    }
    func_0x00010b9a8f84(extraout_x8,&lStack_168);
    plVar2 = &lStack_168;
    func_0x000104bddf38(plVar2);
    return plVar2;
  }
  return (long *)0x1138186c8;
}



/* Entry: 10528ace8; end: 10528adaf;  */

void FUN_10528ace8(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,(param_2[1] - *param_2) / 0xd8);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((param_2[1] - *param_2) / 0xd8); uVar2 = uVar2 + 1) {
    FUN_1052bef3c(auStack_58,*param_2 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0xd8;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 10528adb0; end: 10528ae0b;  */

undefined8 FUN_10528adb0(void)

{
  int iVar1;
  
  if ((bRam00000001130cbcc0 & 1) == 0) {
    iVar1 = 0x130cbcc0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052bf080();
      func_0x00010b990868(0x1130cbcb0);
      ___cxa_guard_release(0x1130cbcc0);
    }
  }
  return 0x1130cbcb0;
}



/* Entry: 10528ae0c; end: 10528aebb;  */

undefined8 *
FUN_10528ae0c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar1;
  param_1[9] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  param_1[0xc] = param_7;
  *(undefined4 *)(param_1 + 0xd) = param_8;
  func_0x00010066de60(param_1 + 0xe,param_9);
  return param_1;
}



/* Entry: 10528aebc; end: 10528af47;  */

void FUN_10528aebc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0xd8) < param_2) {
    if ((undefined8 *)0x12f684bda12f684 < param_2) {
      FUN_10528af48();
      func_0x00010528b588();
      func_0x00010528b580();
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0xd8) * 0xd8;
      FUN_10528b088(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_10528afe8(auStack_48,param_2,(param_1[1] - *param_1) / 0xd8);
    func_0x00010528b5b0();
    func_0x00010528b588();
  }
  return;
}



/* Entry: 10528af48; end: 10528af5b;  */

void FUN_10528af48(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0xd8) * 0xd8;
  FUN_10528b088(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10528af5c; end: 10528afe7;  */

void FUN_10528af5c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0xd8) * 0xd8;
  FUN_10528b088(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 10528afe8; end: 10528b057;  */

long * FUN_10528afe8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010528b034();
  }
  lVar1 = param_4 + param_3 * 0xd8;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xd8;
  return param_1;
}



/* Entry: 10528b058; end: 10528b087;  */

void FUN_10528b058(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x12f684bda12f685) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xd8);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0xd8) {
    func_0x00010528b15c(param_4,uVar1);
    param_4 = lStack_48 + 0xd8;
  }
  uStack_58 = 1;
  func_0x00010528b12c(param_1,param_2,param_3);
  FUN_10528b330(&uStack_70);
  return;
}



/* Entry: 10528b088; end: 10528b12b;  */

void FUN_10528b088(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0xd8) {
    func_0x00010528b15c(param_4,lVar1);
    param_4 = lStack_38 + 0xd8;
  }
  uStack_48 = 1;
  func_0x00010528b12c(param_1,param_2,param_3);
  FUN_10528b330(&uStack_60);
  return;
}



/* Entry: 10528b12c; end: 10528b1f3;  */

void FUN_10528b12c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xd8) {
    func_0x000104be4bb0();
  }
  return;
}



/* Entry: 10528b1f4; end: 10528b21f;  */

undefined1 * FUN_10528b1f4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x80] = 0;
  FUN_10528b220();
  return param_1;
}



/* Entry: 10528b220; end: 10528b233;  */

void FUN_10528b220(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_10528b250();
    *(undefined1 *)(param_1 + 0x80) = 1;
    return;
  }
  return;
}



/* Entry: 10528b234; end: 10528b24f;  */

void FUN_10528b234(long param_1)

{
  FUN_10528b250();
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



/* Entry: 10528b250; end: 10528b32f;  */

void FUN_10528b250(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 7) == '\x01') {
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_2 + 0xb) == '\x01') {
    uVar2 = param_2[9];
    uVar1 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    param_1[8] = uVar1;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[8] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (*(char *)(param_2 + 0xf) == '\x01') {
    uVar2 = param_2[0xd];
    uVar1 = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar2;
    param_1[0xc] = uVar1;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xc] = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  return;
}



/* Entry: 10528b330; end: 10528b35f;  */

long FUN_10528b330(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10528b360(param_1);
  }
  return param_1;
}



/* Entry: 10528b360; end: 10528b37f;  */

void FUN_10528b360(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xd8;
    func_0x000104be4bb0();
  }
  return;
}



/* Entry: 10528b380; end: 10528b3db;  */

void FUN_10528b380(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xd8;
    func_0x000104be4bb0();
  }
  return;
}



/* Entry: 10528b3dc; end: 10528b3e3;  */

void FUN_10528b3dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0xd8;
    func_0x000104be4bb0();
  }
  return;
}



/* Entry: 10528b3e4; end: 10528b47f;  */

void FUN_10528b3e4(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0xd8;
    func_0x000104be4bb0();
  }
  return;
}



/* Entry: 10528b480; end: 10528b517;  */

long FUN_10528b480(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10528b518(param_1,(param_1[1] - *param_1) / 0xd8 + 1);
  FUN_10528afe8(auStack_58,plVar1,(param_1[1] - *param_1) / 0xd8,param_1 + 2);
  func_0x00010528b15c(lStack_48,param_2);
  lStack_48 = lStack_48 + 0xd8;
  func_0x00010528b5b0();
  lVar2 = param_1[1];
  func_0x00010528b588();
  return lVar2;
}



/* Entry: 10528b518; end: 10528b577;  */

long * FUN_10528b518(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x12f684bda12f684 < param_2) {
    FUN_10528af48();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0xd8;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x97b425ed097b41 < uVar1) {
    plVar2 = (long *)0x12f684bda12f684;
  }
  return plVar2;
}



/* Entry: 10528b578; end: 10528b5cf;  */

void FUN_10528b578(void)

{
  return;
}



/* Entry: 10528b5d0; end: 10528b693;  */

undefined1 * FUN_10528b5d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528b694();
  func_0x0001003b2110(auStack_48,0x1138186e8);
  FUN_1052808e4(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_10528b778(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10528b694;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam00000001138186f0 & 1) == 0) {
    puVar1 = (undefined1 *)0x1138186f0;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_HighlightsSummaryInfo");
      pcVar2 = "text";
      func_0x0001003a83dc(auStack_90,"text");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x1138186e0,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x1138186f0;
      ___cxa_guard_release(0x1138186f0);
    }
  }
  FUN_10528b778(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x1138186e0;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 10528b694; end: 10528b777;  */

undefined8 FUN_10528b694(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138186f0 & 1) == 0) {
    param_1 = 0x1138186f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_HighlightsSummaryInfo");
      pcVar1 = "text";
      func_0x0001003a83dc(auStack_40,"text");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x1138186e0,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x1138186f0;
      ___cxa_guard_release(0x1138186f0);
    }
  }
  FUN_10528b778(uStack_18);
  if ((bool)in_ZR) {
    return 0x1138186e0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10528b778; end: 10528b78b;  */

void FUN_10528b778(void)

{
  return;
}



/* Entry: 10528b78c; end: 10528b8e3;  */

undefined1 * FUN_10528b78c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  long lVar6;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [32];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  undefined2 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a0;
  undefined1 uStack_98;
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_68;
  undefined2 uStack_60;
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined4 auStack_48 [2];
  undefined2 uStack_40;
  
  func_0x00010528bd0c();
  FUN_10528b8e4();
  func_0x0001003b2110(auStack_e8,0x113818700);
  func_0x00010528bcd4(auStack_d8,param_2);
  uStack_c0 = 4;
  uStack_c8 = *(undefined4 *)(param_2 + 0x20);
  uStack_b8 = *(undefined4 *)(param_2 + 0x24);
  uStack_b0 = 4;
  uStack_a8 = *(undefined4 *)(param_2 + 0x28);
  uStack_a0 = 4;
  uStack_98 = *(undefined1 *)(param_2 + 0x2c);
  uStack_90 = 7;
  uStack_88 = *(undefined4 *)(param_2 + 0x30);
  uStack_80 = 4;
  uStack_78 = *(undefined1 *)(param_2 + 0x34);
  uStack_70 = 7;
  uStack_68 = *(undefined1 *)(param_2 + 0x35);
  uStack_60 = 7;
  uStack_58 = *(undefined1 *)(param_2 + 0x36);
  uStack_50 = 7;
  auStack_48[0] = *(undefined4 *)(param_2 + 0x38);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_e0,auStack_e8,auStack_d8,10);
  lVar6 = 0x90;
  do {
    func_0x00010b9a8d98(auStack_d8 + lVar6);
    lVar6 = lVar6 + -0x10;
    uVar1 = lVar6 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_e8);
  func_0x00010b9a8f60(param_1,auStack_e0);
  puVar3 = auStack_e0;
  func_0x000104bdbf78();
  func_0x00010528bcf4();
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_48;
  lVar6 = -0xa0;
  do {
    func_0x00010b9a8d98(puVar4);
    puVar4 = puVar4 + -4;
    lVar6 = lVar6 + 0x10;
    uVar1 = lVar6 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_e8);
  __Unwind_Resume(puVar3);
  func_0x00010528bd0c();
  if ((bRam00000001136b9860 & 1) == 0) {
    iVar2 = 0x136b9860;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_220,"_djinni_record_InteractionInfo");
      func_0x0001003a83dc(auStack_228,"messages");
      if ((bRam00000001136b9868 & 1) == 0) goto LAB_10528bbc4;
      goto LAB_10528b970;
    }
  }
  while (func_0x00010528bcf4(), !(bool)uVar1) {
    ___stack_chk_fail();
LAB_10528bbc4:
    iVar2 = 0x136b9868;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000104be7878();
      func_0x00010b990784(0x1136b9890);
      ___cxa_guard_release(0x1136b9868);
    }
LAB_10528b970:
    func_0x0001003b1b50(auStack_218,auStack_228,0x1136b9890);
    func_0x0001003a83dc(auStack_230,"conversationDataState");
    if ((bRam00000001136b9870 & 1) == 0) {
      iVar2 = 0x136b9870;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b990e20(0x1136b98a0);
        ___cxa_guard_release(0x1136b9870);
      }
    }
    func_0x0001003b1b50(auStack_200,auStack_230,0x1136b98a0);
    func_0x0001003a83dc(auStack_238,"tapActionState");
    if ((bRam00000001136b9878 & 1) == 0) {
      iVar2 = 0x136b9878;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b990e20(0x1136b98b0);
        ___cxa_guard_release(0x1136b9878);
      }
    }
    func_0x0001003b1b50(auStack_1e8,auStack_238,0x1136b98b0);
    func_0x0001003a83dc(auStack_240,"longPressActionState");
    if ((bRam00000001136b9880 & 1) == 0) {
      iVar2 = 0x136b9880;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b990e20(0x1136b98c0);
        ___cxa_guard_release(0x1136b9880);
      }
    }
    func_0x0001003b1b50(auStack_1d0,auStack_240,0x1136b98c0);
    pcVar5 = "hasMessagesToReplay";
    func_0x0001003a83dc(auStack_248,"hasMessagesToReplay");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_1b8,auStack_248,pcVar5);
    pcVar5 = "numMessagesToSave";
    func_0x0001003a83dc(auStack_250,"numMessagesToSave");
    func_0x000104bef760();
    func_0x0001003b1b50(auStack_1a0,auStack_250,pcVar5);
    pcVar5 = "hasMessagesToRetry";
    func_0x0001003a83dc(auStack_258,"hasMessagesToRetry");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_188,auStack_258,pcVar5);
    pcVar5 = "hasMessagesToCancel";
    func_0x0001003a83dc(auStack_260,"hasMessagesToCancel");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_170,auStack_260,pcVar5);
    pcVar5 = "mayHaveSaveableSentSnap";
    func_0x0001003a83dc(auStack_268,"mayHaveSaveableSentSnap");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_158,auStack_268,pcVar5);
    func_0x0001003a83dc(auStack_270,"messagesReplayableState");
    if ((bRam00000001136b9888 & 1) == 0) {
      iVar2 = 0x136b9888;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b990e20(0x1136b98d0);
        ___cxa_guard_release(0x1136b9888);
      }
    }
    func_0x0001003b1b50(auStack_140,auStack_270,0x1136b98d0);
    func_0x000104bdbd44(0x1138186f8,auStack_220,0,auStack_218,10);
    lVar6 = 0xd8;
    do {
      func_0x0001003b1c5c(auStack_218 + lVar6);
      lVar6 = lVar6 + -0x18;
      uVar1 = lVar6 == -0x18;
    } while (!(bool)uVar1);
    func_0x0001003a8c94(auStack_270);
    func_0x0001003a8c94(auStack_268);
    func_0x0001003a8c94(auStack_260);
    func_0x0001003a8c94(auStack_258);
    func_0x0001003a8c94(auStack_250);
    func_0x0001003a8c94(auStack_248);
    func_0x0001003a8c94(auStack_240);
    func_0x0001003a8c94(auStack_238);
    func_0x0001003a8c94(auStack_230);
    func_0x0001003a8c94(auStack_228);
    func_0x0001003a8c94(auStack_220);
    ___cxa_guard_release(0x1136b9860);
  }
  return (undefined1 *)0x1138186f8;
}



/* Entry: 10528b8e4; end: 10528bcd3;  */

undefined8 FUN_10528b8e4(void)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x00010528bd0c();
  if ((bRam00000001136b9860 & 1) == 0) {
    iVar1 = 0x136b9860;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_130,"_djinni_record_InteractionInfo");
      func_0x0001003a83dc(auStack_138,"messages");
      if ((bRam00000001136b9868 & 1) == 0) goto LAB_10528bbc4;
      goto LAB_10528b970;
    }
  }
  while (func_0x00010528bcf4(), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_10528bbc4:
    iVar1 = 0x136b9868;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000104be7878();
      func_0x00010b990784(0x1136b9890);
      ___cxa_guard_release(0x1136b9868);
    }
LAB_10528b970:
    func_0x0001003b1b50(auStack_128,auStack_138,0x1136b9890);
    func_0x0001003a83dc(auStack_140,"conversationDataState");
    if ((bRam00000001136b9870 & 1) == 0) {
      iVar1 = 0x136b9870;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136b98a0);
        ___cxa_guard_release(0x1136b9870);
      }
    }
    func_0x0001003b1b50(auStack_110,auStack_140,0x1136b98a0);
    func_0x0001003a83dc(auStack_148,"tapActionState");
    if ((bRam00000001136b9878 & 1) == 0) {
      iVar1 = 0x136b9878;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136b98b0);
        ___cxa_guard_release(0x1136b9878);
      }
    }
    func_0x0001003b1b50(auStack_f8,auStack_148,0x1136b98b0);
    func_0x0001003a83dc(auStack_150,"longPressActionState");
    if ((bRam00000001136b9880 & 1) == 0) {
      iVar1 = 0x136b9880;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136b98c0);
        ___cxa_guard_release(0x1136b9880);
      }
    }
    func_0x0001003b1b50(auStack_e0,auStack_150,0x1136b98c0);
    pcVar2 = "hasMessagesToReplay";
    func_0x0001003a83dc(auStack_158,"hasMessagesToReplay");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_c8,auStack_158,pcVar2);
    pcVar2 = "numMessagesToSave";
    func_0x0001003a83dc(auStack_160,"numMessagesToSave");
    func_0x000104bef760();
    func_0x0001003b1b50(auStack_b0,auStack_160,pcVar2);
    pcVar2 = "hasMessagesToRetry";
    func_0x0001003a83dc(auStack_168,"hasMessagesToRetry");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_98,auStack_168,pcVar2);
    pcVar2 = "hasMessagesToCancel";
    func_0x0001003a83dc(auStack_170,"hasMessagesToCancel");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_80,auStack_170,pcVar2);
    pcVar2 = "mayHaveSaveableSentSnap";
    func_0x0001003a83dc(auStack_178,"mayHaveSaveableSentSnap");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_68,auStack_178,pcVar2);
    func_0x0001003a83dc(auStack_180,"messagesReplayableState");
    if ((bRam00000001136b9888 & 1) == 0) {
      iVar1 = 0x136b9888;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136b98d0);
        ___cxa_guard_release(0x1136b9888);
      }
    }
    func_0x0001003b1b50(auStack_50,auStack_180,0x1136b98d0);
    func_0x000104bdbd44(0x1138186f8,auStack_130,0,auStack_128,10);
    lVar3 = 0xd8;
    do {
      func_0x0001003b1c5c(auStack_128 + lVar3);
      lVar3 = lVar3 + -0x18;
      in_ZR = lVar3 == -0x18;
    } while (!(bool)in_ZR);
    func_0x0001003a8c94(auStack_180);
    func_0x0001003a8c94(auStack_178);
    func_0x0001003a8c94(auStack_170);
    func_0x0001003a8c94(auStack_168);
    func_0x0001003a8c94(auStack_160);
    func_0x0001003a8c94(auStack_158);
    func_0x0001003a8c94(auStack_150);
    func_0x0001003a8c94(auStack_148);
    func_0x0001003a8c94(auStack_140);
    func_0x0001003a8c94(auStack_138);
    func_0x0001003a8c94(auStack_130);
    ___cxa_guard_release(0x1136b9860);
  }
  return 0x1138186f8;
}



/* Entry: 10528bcd4; end: 10528bd1f;  */

void FUN_10528bcd4(undefined8 *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  if ((char)param_2[3] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return;
  }
  func_0x00010069e628();
  func_0x00010b9abe10(&lStack_48,extraout_x8 / 0x5d8);
  lVar1 = 0;
  lVar3 = 0x18;
  for (uVar2 = 0; uVar2 < (ulong)((param_2[1] - *param_2) / 0x5d8); uVar2 = uVar2 + 1) {
    FUN_10528f724(auStack_58,*param_2 + lVar1);
    func_0x00010b9a9020(lStack_48 + lVar3,auStack_58);
    func_0x000104be7fdc();
    lVar3 = lVar3 + 0x10;
    lVar1 = lVar1 + 0x5d8;
  }
  func_0x000104be8014();
  func_0x000104be7ff4();
  return;
}



/* Entry: 10528bd20; end: 10528bdeb;  */

undefined1 * FUN_10528bd20(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528bdec();
  func_0x0001003b2110(auStack_48,0x113818710);
  FUN_10529dd1c(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_10528bed0(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10528bdec;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818718 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818718;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_KickedParticipant");
      pcVar2 = "participantId";
      func_0x0001003a83dc(auStack_90,"participantId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818708,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818718;
      ___cxa_guard_release(0x113818718);
    }
  }
  FUN_10528bed0(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818708;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 10528bdec; end: 10528becf;  */

undefined8 FUN_10528bdec(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818718 & 1) == 0) {
    param_1 = 0x113818718;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_KickedParticipant");
      pcVar1 = "participantId";
      func_0x0001003a83dc(auStack_40,"participantId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818708,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818718;
      ___cxa_guard_release(0x113818718);
    }
  }
  FUN_10528bed0(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818708;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10528bed0; end: 10528bee3;  */

void FUN_10528bed0(void)

{
  return;
}



/* Entry: 10528bee4; end: 10528bf47;  */

void FUN_10528bee4(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  func_0x000108b8099c(&uStack_40,lStack_28 + 0x18);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10528bf48; end: 10528c00b;  */

undefined1 * FUN_10528bf48(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528c00c();
  func_0x0001003b2110(auStack_48,0x113818728);
  func_0x000108b80a1c(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_10528c0f0(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10528c00c;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818730 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818730;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_LocalMediaReference");
      pcVar2 = "id";
      func_0x0001003a83dc(auStack_90,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818720,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818730;
      ___cxa_guard_release(0x113818730);
    }
  }
  FUN_10528c0f0(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818720;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 10528c00c; end: 10528c0ef;  */

undefined8 FUN_10528c00c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818730 & 1) == 0) {
    param_1 = 0x113818730;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_LocalMediaReference");
      pcVar1 = "id";
      func_0x0001003a83dc(auStack_40,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818720,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818730;
      ___cxa_guard_release(0x113818730);
    }
  }
  FUN_10528c0f0(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818720;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10528c0f0; end: 10528c103;  */

void FUN_10528c0f0(void)

{
  return;
}



/* Entry: 10528c104; end: 10528c45f;  */

void FUN_10528c104(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_3d8 [32];
  undefined1 auStack_3b8 [64];
  undefined1 uStack_378;
  undefined1 auStack_370 [48];
  undefined1 auStack_340 [32];
  undefined1 auStack_320 [64];
  undefined1 auStack_2e0 [32];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [464];
  undefined1 auStack_c0 [24];
  long lStack_a8;
  undefined1 auStack_a0 [64];
  
  func_0x00010b9a97d0(&lStack_a8);
  func_0x000108b8099c(auStack_c0,lStack_a8 + 0x18);
  lVar2 = lStack_a8 + 0x28;
  func_0x00010b9a9518(lVar2);
  FUN_105296090(auStack_290,lStack_a8 + 0x38);
  FUN_10528c460(auStack_2a8,lStack_a8 + 0x48);
  lVar3 = lStack_a8 + 0x58;
  func_0x00010b9a9518(lVar3);
  lVar5 = *(long *)(lStack_a8 + 0x68);
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c0 = 0;
  if (*(char *)(lStack_a8 + 0x70) == '\t' && lVar5 != 0) {
    param_3 = *(undefined1 **)(lVar5 + 0x10);
    FUN_10528d490(&uStack_2c0);
    lVar4 = lVar5 + 0x18;
    for (uVar6 = 0; uVar6 < *(ulong *)(lVar5 + 0x10); uVar6 = uVar6 + 1) {
      func_0x000108b8099c(auStack_a0,lVar4);
      param_3 = auStack_a0;
      func_0x00010528d604(&uStack_2c0);
      func_0x000100100fec(auStack_a0);
      lVar4 = lVar4 + 0x10;
    }
  }
  lVar5 = lStack_a8 + 0x78;
  func_0x00010b9a9608(lVar5);
  lVar4 = lStack_a8 + 0x88;
  func_0x000104bedf58();
  FUN_105280c90(auStack_2e0,lStack_a8 + 0x98);
  cVar1 = (char)lStack_a8 + -0x58;
  func_0x00010b9a9608();
  FUN_10528c4f4(auStack_320,lStack_a8 + 0xb8);
  func_0x00010528c540(auStack_340,lStack_a8 + 200);
  func_0x00010528c5a4(auStack_370,lStack_a8 + 0xd8);
  if (*(byte *)(lStack_a8 + 0xf0) < 2) {
    auStack_3b8[0] = 0;
    uStack_378 = 0;
  }
  else {
    FUN_105285454(auStack_a0,lStack_a8 + 0xe8);
    func_0x00010528d88c(auStack_3b8,auStack_a0);
    func_0x000104bee430(auStack_a0);
  }
  if (1 < *(byte *)(lStack_a8 + 0x100)) {
    func_0x00010b9a9518();
  }
  func_0x00010528c5e4(auStack_a0,lStack_a8 + 0x108);
  FUN_105280c90(auStack_3d8,lStack_a8 + 0x118);
  FUN_10528ce14(param_1,auStack_c0,lVar2,auStack_290,auStack_2a8,lVar3,&uStack_2c0,lVar5,lVar4,
                (ulong)param_3 & 0xff,auStack_2e0,cVar1);
  func_0x0001002a2294(auStack_3d8);
  func_0x000104bee410(auStack_3b8);
  func_0x00010069ab0c(auStack_370);
  func_0x00010069b2d8(auStack_340);
  func_0x00010069b1f4(auStack_320);
  func_0x0001002a2294(auStack_2e0);
  func_0x000104bee630(&uStack_2c0);
  func_0x000104be1594(auStack_2a8);
  func_0x000104bee6b8(auStack_290);
  func_0x000100100fec(auStack_c0);
  func_0x000104bdbf78(&lStack_a8);
  return;
}



/* Entry: 10528c460; end: 10528c4f3;  */

void FUN_10528c460(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x00010528db38();
  if (((bool)in_ZR) && (lVar2 = *param_1, lVar2 != 0)) {
    FUN_10528d190();
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_10528bee4(auStack_48,lVar1);
      func_0x000100697654();
      func_0x00010528d3e4();
      func_0x00010528db8c();
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 10528c4f4; end: 10528c61b;  */

void FUN_10528c4f4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 *unaff_x19;
  undefined1 auStack_58 [56];
  
  func_0x00010528dad0();
  if ((bool)in_CY && !(bool)in_ZR) {
    FUN_105293990(auStack_58);
    func_0x000100697654();
    func_0x00010528d6b0();
    func_0x000104be1498(auStack_58);
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0x38] = 0;
  }
  return;
}



/* Entry: 10528c61c; end: 10528cb2b;  */

undefined8 FUN_10528c61c(void)

{
  int iVar1;
  char *pcVar2;
  undefined1 *unaff_x19;
  long lVar3;
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b98e0 & 1) == 0) {
    iVar1 = 0x136b98e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_1d8,"_djinni_record_LocalMessageContent");
      pcVar2 = "content";
      func_0x0001003a83dc(auStack_1e0,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_1d0,auStack_1e0,pcVar2);
      pcVar2 = "contentType";
      func_0x0001003a83dc(auStack_1e8,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_1b8,auStack_1e8,pcVar2);
      pcVar2 = "platformAnalytics";
      func_0x0001003a83dc(auStack_1f0,"platformAnalytics");
      FUN_10529629c();
      func_0x0001003b1b50(auStack_1a0,auStack_1f0,pcVar2);
      pcVar2 = "localMediaReferences";
      func_0x0001003a83dc(auStack_1f8,"localMediaReferences");
      FUN_10528cbf0();
      func_0x0001003b1b50(auStack_188,auStack_1f8,pcVar2);
      unaff_x19 = auStack_1d0;
      pcVar2 = "savePolicy";
      func_0x0001003a83dc(auStack_200,"savePolicy");
      FUN_10528cc4c();
      func_0x0001003b1b50(auStack_170,auStack_200,pcVar2);
      func_0x0001003a83dc(auStack_208,"incidentalAttachments");
      if ((bRam00000001136b98e8 & 1) == 0) goto LAB_10528ca38;
      goto LAB_10528c784;
    }
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
LAB_10528ca38:
    iVar1 = 0x136b98e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000108b80a94();
      func_0x00010b990868(0x1136b9918);
      ___cxa_guard_release(0x1136b98e8);
    }
LAB_10528c784:
    func_0x0001003b1b50(unaff_x19 + 0x78,auStack_208,0x1136b9918);
    pcVar2 = "allowsTranscription";
    func_0x0001003a83dc(auStack_210,"allowsTranscription");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_140,auStack_210,pcVar2);
    pcVar2 = "quotedMessageId";
    func_0x0001003a83dc(auStack_218,"quotedMessageId");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_128,auStack_218,pcVar2);
    pcVar2 = "feedDisplayInfo";
    func_0x0001003a83dc(auStack_220,"feedDisplayInfo");
    FUN_1052810e0();
    func_0x0001003b1b50(auStack_110,auStack_220,pcVar2);
    pcVar2 = "botMention";
    func_0x0001003a83dc(auStack_228,"botMention");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_f8,auStack_228,pcVar2);
    pcVar2 = "messageTypeMetadata";
    func_0x0001003a83dc(auStack_230,"messageTypeMetadata");
    FUN_10528cca4();
    func_0x0001003b1b50(auStack_e0,auStack_230,pcVar2);
    pcVar2 = "remoteMediaReferences";
    func_0x0001003a83dc(auStack_238,"remoteMediaReferences");
    FUN_10528cd00();
    func_0x0001003b1b50(auStack_c8,auStack_238,pcVar2);
    pcVar2 = "bundleMetadata";
    func_0x0001003a83dc(auStack_240,"bundleMetadata");
    FUN_10528cd5c();
    func_0x0001003b1b50(auStack_b0,auStack_240,pcVar2);
    func_0x0001003a83dc(auStack_248,"externalContentMetadata");
    if ((bRam00000001136b98f0 & 1) == 0) {
      iVar1 = 0x136b98f0;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_105285580();
        func_0x00010b990784(0x1136b9928);
        ___cxa_guard_release(0x1136b98f0);
      }
    }
    func_0x0001003b1b50(auStack_98,auStack_248,0x1136b9928);
    func_0x0001003a83dc(auStack_250,"messageBehaviorHint");
    if ((bRam00000001136b98f8 & 1) == 0) {
      iVar1 = 0x136b98f8;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        if ((bRam00000001136b9900 & 1) == 0) {
          iVar1 = 0x136b9900;
          ___cxa_guard_acquire();
          if (iVar1 != 0) {
            func_0x00010b990e20(0x1136b9948);
            ___cxa_guard_release(0x1136b9900);
          }
        }
        func_0x00010b990784(0x1136b9948);
        ___cxa_guard_release(0x1136b98f8);
      }
    }
    func_0x0001003b1b50(auStack_80,auStack_250,0x1136b9938);
    pcVar2 = "snapModeInfo";
    func_0x0001003a83dc(auStack_258,"snapModeInfo");
    FUN_10528cdb8();
    func_0x0001003b1b50(auStack_68,auStack_258,pcVar2);
    pcVar2 = "localPlatformData";
    func_0x0001003a83dc(auStack_260,"localPlatformData");
    FUN_1052810e0();
    func_0x0001003b1b50(auStack_50,auStack_260,pcVar2);
    unaff_x19 = auStack_1d0;
    func_0x000104bdbd44(0x1136b9908,auStack_1d8,0,auStack_1d0,0x11);
    lVar3 = 0x180;
    do {
      func_0x0001003b1c5c(unaff_x19 + lVar3);
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x18);
    func_0x0001003a8c94(auStack_260);
    func_0x0001003a8c94(auStack_258);
    func_0x0001003a8c94(auStack_250);
    func_0x0001003a8c94(auStack_248);
    func_0x0001003a8c94(auStack_240);
    func_0x0001003a8c94(auStack_238);
    func_0x0001003a8c94(auStack_230);
    func_0x0001003a8c94(auStack_228);
    func_0x0001003a8c94(auStack_220);
    func_0x0001003a8c94(auStack_218);
    func_0x0001003a8c94(auStack_210);
    func_0x0001003a8c94(auStack_208);
    func_0x0001003a8c94(auStack_200);
    func_0x0001003a8c94(auStack_1f8);
    func_0x0001003a8c94(auStack_1f0);
    func_0x0001003a8c94(auStack_1e8);
    func_0x0001003a8c94(auStack_1e0);
    func_0x0001003a8c94(auStack_1d8);
    ___cxa_guard_release(0x1136b98e0);
  }
  return 0x1136b9908;
}



/* Entry: 10528cb2c; end: 10528cb9f;  */

void FUN_10528cb2c(void)

{
  undefined1 in_CY;
  long extraout_x9;
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x00010528da74();
  lVar1 = 0;
  while (func_0x00010528db94(), !(bool)in_CY) {
    FUN_10528bf48(auStack_58,extraout_x9 + lVar1);
    func_0x00010528db08();
    func_0x00010b9a8d98(auStack_58);
    lVar1 = lVar1 + 0x18;
  }
  func_0x00010528db74();
  func_0x00010528db00();
  return;
}



/* Entry: 10528cba0; end: 10528cbef;  */

long * FUN_10528cba0(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_238 [16];
  long lStack_228;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined8 uStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  long lStack_178;
  long lStack_170;
  undefined1 auStack_168 [8];
  undefined2 uStack_160;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if ((char)param_2[7] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105293c38();
  func_0x0001003b2110(auStack_78,0x113818840);
  FUN_105293d98(auStack_68,param_2);
  func_0x000105293dac(auStack_58,param_2 + 5);
  func_0x000105293dc0(auStack_48,param_2 + 6);
  func_0x000104bdb9bc(&lStack_70,auStack_78,auStack_68,3);
  lVar9 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  plVar4 = &lStack_70;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_70;
  func_0x000104bdbf78();
  func_0x000105293f14(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar9 = -0x30;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  plVar4 = plVar2;
  __Unwind_Resume();
  pcStack_88 = FUN_105293c38;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar9;
  plStack_98 = plVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818848 & 1) == 0) {
    plVar4 = (long *)0x113818848;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_MessageTypeMetadata");
      pcVar5 = "audioNoteMetadata";
      func_0x0001003a83dc(auStack_100,"audioNoteMetadata");
      FUN_105293dd4();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar5);
      pcVar5 = "shareMetadata";
      func_0x0001003a83dc(auStack_108,"shareMetadata");
      FUN_105293e30();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar5);
      pcVar5 = "snapReplyMetadata";
      func_0x0001003a83dc(auStack_110,"snapReplyMetadata");
      FUN_105293e8c();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818838,auStack_f8,0,auStack_f0,3);
      lVar9 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar9);
        iVar6 = (int)uVar7;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      plVar4 = (long *)0x113818848;
      ___cxa_guard_release();
    }
  }
  func_0x000105293f14(uStack_a8);
  if ((bool)uVar1) {
    return (long *)0x113818838;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((char)plVar4[4] != '\x01') {
    *(undefined2 *)(extraout_x8_00 + 1) = 1;
    *extraout_x8_00 = 0;
    return plVar4;
  }
  pcStack_118 = FUN_105293d98;
  uStack_148 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &puStack_90;
  FUN_10527f01c();
  func_0x0001003b2110(&lStack_178,0x113818160);
  auStack_168[0] = (undefined1)*plVar4;
  uStack_160 = 7;
  FUN_10527f14c(auStack_158,plVar4 + 1);
  func_0x000104bdb9bc(&lStack_170,&lStack_178,auStack_168,2);
  lVar9 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_168 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_178);
  plVar4 = &lStack_170;
  func_0x00010b9a8f60(extraout_x8_00);
  plVar2 = &lStack_170;
  func_0x000104bdbf78();
  func_0x00010527f56c(uStack_148);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_158;
  lVar9 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_178;
  func_0x0001003b1f60();
  func_0x00010527f548();
  pcStack_188 = FUN_10527f01c;
  uStack_1a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = lVar9;
  plStack_198 = plVar2;
  pppuStack_190 = &ppuStack_120;
  if ((bRam0000000113818168 & 1) == 0) {
    plVar4 = (long *)0x113818168;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_1e0,"_djinni_record_AudioNoteMetadata");
      pcVar5 = "allowsTranscription";
      func_0x0001003a83dc(auStack_1e8,"allowsTranscription");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_1d8,auStack_1e8,pcVar5);
      pcVar5 = "transcriptions";
      func_0x0001003a83dc(auStack_1f0,"transcriptions");
      FUN_10527f200();
      func_0x0001003b1b50(auStack_1c0,auStack_1f0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818158,auStack_1e0,0,auStack_1d8,2);
      lVar9 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_1d8 + lVar9);
        iVar6 = (int)uVar7;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1f0);
      func_0x0001003a8c94(auStack_1e8);
      func_0x0001003a8c94(auStack_1e0);
      plVar4 = (long *)0x113818168;
      ___cxa_guard_release();
    }
  }
  func_0x00010527f56c(uStack_1a8);
  if ((bool)uVar1) {
    return (long *)0x113818158;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_228,plVar4[1] - *plVar4 >> 4);
  lVar9 = 0x18;
  for (uVar8 = 0; uVar8 < (ulong)(plVar4[1] - *plVar4 >> 4); uVar8 = uVar8 + 1) {
    FUN_10529da70(auStack_238,*plVar4 + lVar9 + -0x18);
    func_0x00010b9a9020(lStack_228 + lVar9,auStack_238);
    func_0x00010b9a8d98(auStack_238);
    lVar9 = lVar9 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_228);
  plVar4 = &lStack_228;
  func_0x000104bddf38(plVar4);
  return plVar4;
}



/* Entry: 10528cbf0; end: 10528cc4b;  */

undefined8 FUN_10528cbf0(void)

{
  int iVar1;
  
  if ((bRam00000001130cbcd8 & 1) == 0) {
    iVar1 = 0x130cbcd8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528c00c();
      func_0x00010b990868(0x1130cbcc8);
      ___cxa_guard_release(0x1130cbcd8);
    }
  }
  return 0x1130cbcc8;
}



/* Entry: 10528cc4c; end: 10528cca3;  */

undefined8 FUN_10528cc4c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbcf0 & 1) == 0) {
    iVar1 = 0x130cbcf0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbce0);
      ___cxa_guard_release(0x1130cbcf0);
    }
  }
  return 0x1130cbce0;
}



/* Entry: 10528cca4; end: 10528ccff;  */

undefined8 FUN_10528cca4(void)

{
  int iVar1;
  
  if ((bRam00000001130cbd08 & 1) == 0) {
    iVar1 = 0x130cbd08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105293c38();
      func_0x00010b990784(0x1130cbcf8);
      ___cxa_guard_release(0x1130cbd08);
    }
  }
  return 0x1130cbcf8;
}



/* Entry: 10528cd00; end: 10528cd5b;  */

undefined8 FUN_10528cd00(void)

{
  int iVar1;
  
  if ((bRam00000001130cbd20 & 1) == 0) {
    iVar1 = 0x130cbd20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528d91c();
      func_0x00010b990784(0x1130cbd10);
      ___cxa_guard_release(0x1130cbd20);
    }
  }
  return 0x1130cbd10;
}



/* Entry: 10528cd5c; end: 10528cdb7;  */

undefined8 FUN_10528cd5c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbd50 & 1) == 0) {
    iVar1 = 0x130cbd50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10527fb78();
      func_0x00010b990784(0x1130cbd40);
      ___cxa_guard_release(0x1130cbd50);
    }
  }
  return 0x1130cbd40;
}



/* Entry: 10528cdb8; end: 10528ce13;  */

undefined8 FUN_10528cdb8(void)

{
  int iVar1;
  
  if ((bRam00000001130cbd68 & 1) == 0) {
    iVar1 = 0x130cbd68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529bb48();
      func_0x00010b990784(0x1130cbd58);
      ___cxa_guard_release(0x1130cbd68);
    }
  }
  return 0x1130cbd58;
}



/* Entry: 10528ce14; end: 10528cf6b;  */

long FUN_10528ce14(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 *param_19,undefined8 param_20)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010528db50();
  *(undefined4 *)(lVar1 + 0x18) = param_3;
  FUN_10528cf6c(lVar1 + 0x20,param_4);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0x1f8) = param_5[1];
  *(undefined8 *)(param_1 + 0x1f0) = uVar2;
  *(undefined8 *)(param_1 + 0x200) = param_5[2];
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  *(undefined4 *)(param_1 + 0x208) = param_6;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  uVar2 = *param_7;
  *(undefined8 *)(param_1 + 0x218) = param_7[1];
  *(undefined8 *)(param_1 + 0x210) = uVar2;
  *(undefined8 *)(param_1 + 0x220) = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  *(undefined1 *)(param_1 + 0x228) = param_8;
  *(undefined8 *)(param_1 + 0x230) = param_9;
  *(undefined8 *)(param_1 + 0x238) = param_10;
  func_0x0001006b78fc(param_1 + 0x240,param_11);
  *(undefined1 *)(param_1 + 0x260) = param_12;
  func_0x000100699f98(param_1 + 0x268,param_14);
  func_0x000100699ef0(param_1 + 0x2a8,param_15);
  func_0x00010069aa64(param_1 + 0x2c8,param_16);
  FUN_10528d108(param_1 + 0x2f8,param_17);
  *(undefined8 *)(param_1 + 0x340) = param_18;
  uVar2 = *param_19;
  uVar4 = param_19[3];
  uVar3 = param_19[2];
  *(undefined8 *)(param_1 + 0x350) = param_19[1];
  *(undefined8 *)(param_1 + 0x348) = uVar2;
  *(undefined8 *)(param_1 + 0x360) = uVar4;
  *(undefined8 *)(param_1 + 0x358) = uVar3;
  func_0x0001006b78fc(param_1 + 0x368,param_20);
  return param_1;
}



/* Entry: 10528cf6c; end: 10528cfbb;  */

void FUN_10528cf6c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100697818();
  func_0x0001006b78fc();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(unaff_x19 + 0x2d);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x00010061fb2c(param_1 + 0x38,unaff_x19 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  FUN_10528cfbc(unaff_x20 + 0x68,unaff_x19 + 0x68);
  return;
}



/* Entry: 10528cfbc; end: 10528cfe7;  */

undefined1 * FUN_10528cfbc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x160] = 0;
  FUN_10528cfe8();
  return param_1;
}



/* Entry: 10528cfe8; end: 10528cffb;  */

void FUN_10528cfe8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_10528d018();
    *(undefined1 *)(param_1 + 0x160) = 1;
    return;
  }
  return;
}



/* Entry: 10528cffc; end: 10528d017;  */

void FUN_10528cffc(long param_1)

{
  FUN_10528d018();
  *(undefined1 *)(param_1 + 0x160) = 1;
  return;
}



/* Entry: 10528d018; end: 10528d0af;  */

undefined8 * FUN_10528d018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  func_0x00010066f0b4(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  if (*(char *)(param_2 + 0x23) == '\x01') {
    uVar2 = param_2[0x21];
    uVar1 = param_2[0x20];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar2;
    param_1[0x20] = uVar1;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x20] = 0;
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  FUN_10528d0b0(param_1 + 0x24,param_2 + 0x24);
  FUN_10528d0b0(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



/* Entry: 10528d0b0; end: 10528d0db;  */

undefined1 * FUN_10528d0b0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10528d0dc();
  return param_1;
}



/* Entry: 10528d0dc; end: 10528d107;  */

void FUN_10528d0dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x00010528db50();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 10528d108; end: 10528d133;  */

undefined1 * FUN_10528d108(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_10528d134();
  return param_1;
}



/* Entry: 10528d134; end: 10528d147;  */

void FUN_10528d134(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10528d164();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10528d148; end: 10528d163;  */

void FUN_10528d148(long param_1)

{
  FUN_10528d164();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10528d164; end: 10528d18f;  */

void FUN_10528d164(long param_1)

{
  long unaff_x19;
  
  func_0x000100697818();
  FUN_105285798();
  FUN_1052857dc(param_1 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Entry: 10528d190; end: 10528d1df;  */

void FUN_10528d190(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001006974f8();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x000100697568();
    if ((bool)in_CY) {
      FUN_10528d1e0();
      func_0x00010528daf4();
      func_0x00010528d384();
      func_0x00010528da6c();
      func_0x00010528dac4();
      func_0x000100697660();
      FUN_10528d284();
      func_0x000100697794();
      return;
    }
    func_0x00010069757c();
    FUN_10528d210();
    func_0x000100697654();
    FUN_10528d1ec();
    func_0x00010528d384(auStack_48);
  }
  return;
}



/* Entry: 10528d1e0; end: 10528d1eb;  */

void FUN_10528d1e0(void)

{
  func_0x00010528dac4();
  func_0x000100697660();
  FUN_10528d284();
  func_0x000100697794();
  return;
}



/* Entry: 10528d1ec; end: 10528d20f;  */

void FUN_10528d1ec(void)

{
  func_0x000100697660();
  FUN_10528d284();
  func_0x000100697794();
  return;
}



/* Entry: 10528d210; end: 10528d25f;  */

void FUN_10528d210(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000100697598();
  if (param_2 != 0) {
    func_0x00010528d240(param_4);
  }
  func_0x000100697630();
  return;
}



/* Entry: 10528d260; end: 10528d283;  */

void FUN_10528d260(undefined8 param_1,ulong param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001006976b0();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x00010528da94();
    lVar1 = extraout_x8_00;
  }
  uStack_48 = 1;
  FUN_10528d2d4();
  FUN_10528d304(auStack_60);
  return;
}



/* Entry: 10528d284; end: 10528d2d3;  */

void FUN_10528d284(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  func_0x0001006976b0();
  lVar1 = extraout_x8;
  while (lVar1 != param_3) {
    func_0x00010528da94();
    lVar1 = extraout_x8_00;
  }
  uStack_38 = 1;
  FUN_10528d2d4();
  FUN_10528d304(auStack_50);
  return;
}



/* Entry: 10528d2d4; end: 10528d303;  */

void FUN_10528d2d4(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 10528d304; end: 10528d333;  */

long FUN_10528d304(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10528d334(param_1);
  }
  return param_1;
}



/* Entry: 10528d334; end: 10528d353;  */

void FUN_10528d334(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 10528d354; end: 10528d3af;  */

void FUN_10528d354(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 10528d3b0; end: 10528d3b7;  */

void FUN_10528d3b0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100697818(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    func_0x00010528db80();
  }
  return;
}



/* Entry: 10528d3b8; end: 10528d417;  */

void FUN_10528d3b8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100697818();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    func_0x00010528db80();
  }
  return;
}



/* Entry: 10528d418; end: 10528d41b;  */

void FUN_10528d418(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 10528d41c; end: 10528d46f;  */

undefined8 FUN_10528d41c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  func_0x00010528da20();
  FUN_10528d470();
  func_0x00010528da40();
  FUN_10528d210();
  func_0x00010528d9dc();
  func_0x000100697654();
  FUN_10528d1ec();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010528d384(auStack_58);
  return uVar1;
}



/* Entry: 10528d470; end: 10528d48f;  */

long * FUN_10528d470(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long alStack_58 [5];
  
  uVar2 = (long *)0xaaaaaaaaaaaaaa9 < param_2;
  uVar3 = param_2 == (long *)0xaaaaaaaaaaaaaaa;
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    plVar4 = (long *)(uVar1 * 2);
    if (plVar4 < param_2 || (long)plVar4 - (long)param_2 == 0) {
      plVar4 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      plVar4 = (long *)0xaaaaaaaaaaaaaaa;
    }
    return plVar4;
  }
  FUN_10528d1e0();
  func_0x0001006974f8();
  if ((bool)uVar2 && !(bool)uVar3) {
    func_0x000100697568();
    if ((bool)uVar2) {
      FUN_10528d4e0();
      func_0x00010528daf4();
      FUN_10528d5a4();
      func_0x00010528da6c();
      func_0x00010528dac4();
      func_0x000100697818();
      plVar4 = (long *)(param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18);
      _memcpy(plVar4);
      func_0x000100697794();
      return plVar4;
    }
    func_0x00010069757c();
    FUN_10528d530();
    func_0x000100697654();
    FUN_10528d4ec();
    param_1 = alStack_58;
    FUN_10528d5a4(param_1);
  }
  return param_1;
}



/* Entry: 10528d490; end: 10528d4df;  */

void FUN_10528d490(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001006974f8();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x000100697568();
    if ((bool)in_CY) {
      FUN_10528d4e0();
      func_0x00010528daf4();
      FUN_10528d5a4();
      func_0x00010528da6c();
      func_0x00010528dac4();
      func_0x000100697818();
      _memcpy(*(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
      func_0x000100697794();
      return;
    }
    func_0x00010069757c();
    FUN_10528d530();
    func_0x000100697654();
    FUN_10528d4ec();
    FUN_10528d5a4(auStack_48);
  }
  return;
}



/* Entry: 10528d4e0; end: 10528d4eb;  */

void FUN_10528d4e0(long *param_1,long param_2)

{
  func_0x00010528dac4();
  func_0x000100697818();
  _memcpy(*(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x000100697794();
  return;
}



/* Entry: 10528d4ec; end: 10528d52f;  */

void FUN_10528d4ec(long *param_1,long param_2)

{
  func_0x000100697818();
  _memcpy(*(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x000100697794();
  return;
}



/* Entry: 10528d530; end: 10528d57f;  */

void FUN_10528d530(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000100697598();
  if (param_2 != 0) {
    func_0x00010528d560(param_4);
  }
  func_0x000100697630();
  return;
}



/* Entry: 10528d580; end: 10528d5a3;  */

long * FUN_10528d580(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10528d5d0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10528d5a4; end: 10528d5cf;  */

long * FUN_10528d5a4(long *param_1)

{
  FUN_10528d5d0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10528d5d0; end: 10528d5d7;  */

void FUN_10528d5d0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100697818(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    func_0x00010528db80();
  }
  return;
}



/* Entry: 10528d5d8; end: 10528d637;  */

void FUN_10528d5d8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100697818();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    func_0x00010528db80();
  }
  return;
}



/* Entry: 10528d638; end: 10528d63b;  */

void FUN_10528d638(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 10528d63c; end: 10528d68f;  */

undefined8 FUN_10528d63c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  func_0x00010528da20();
  FUN_10528d690();
  func_0x00010528da40();
  FUN_10528d530();
  func_0x00010528d9dc();
  func_0x000100697654();
  FUN_10528d4ec();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10528d5a4(auStack_58);
  return uVar1;
}



/* Entry: 10528d690; end: 10528d6cb;  */

long * FUN_10528d690(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_10528d4e0();
    func_0x000104be7250();
    *(undefined1 *)(param_1 + 7) = 1;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 10528d6cc; end: 10528d767;  */

void FUN_10528d6cc(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x00010528db38();
  if (((bool)in_ZR) && (lVar2 = *param_1, lVar2 != 0)) {
    func_0x000100697518();
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_10528f0b0(auStack_48,lVar1);
      func_0x000100697654();
      func_0x00010528d7c4();
      func_0x0001006994c8(auStack_48);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 10528d768; end: 10528d773;  */

void FUN_10528d768(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010528dac4();
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x0001006994c8();
  }
  return;
}



/* Entry: 10528d774; end: 10528d793;  */

void FUN_10528d774(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x0001006994c8();
  }
  return;
}



/* Entry: 10528d794; end: 10528d7f7;  */

void FUN_10528d794(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x0001006994c8();
  }
  return;
}



/* Entry: 10528d7f8; end: 10528d7fb;  */

void FUN_10528d7f8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 10528d7fc; end: 10528d84f;  */

undefined8 FUN_10528d7fc(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  func_0x00010528da20();
  FUN_10528d850();
  func_0x00010528da40();
  func_0x0001006975a8();
  func_0x00010528d9dc();
  func_0x000100697654();
  func_0x00010069768c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001006977ec(auStack_58);
  return uVar1;
}



/* Entry: 10528d850; end: 10528d8a7;  */

long * FUN_10528d850(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_10528d768();
    func_0x000104be73b4();
    *(undefined1 *)(param_1 + 5) = 1;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 10528d8a8; end: 10528d91b;  */

void FUN_10528d8a8(void)

{
  undefined1 in_CY;
  long extraout_x9;
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x00010528da74();
  lVar1 = 0;
  while (func_0x00010528db94(), !(bool)in_CY) {
    FUN_10528f1e0(auStack_58,extraout_x9 + lVar1);
    func_0x00010528db08();
    func_0x00010b9a8d98(auStack_58);
    lVar1 = lVar1 + 0x18;
  }
  func_0x00010528db74();
  func_0x00010528db00();
  return;
}



/* Entry: 10528d91c; end: 10528d977;  */

undefined8 FUN_10528d91c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbd38 & 1) == 0) {
    iVar1 = 0x130cbd38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528f2a0();
      func_0x00010b990868(0x1130cbd28);
      ___cxa_guard_release(0x1130cbd38);
    }
  }
  return 0x1130cbd28;
}



/* Entry: 10528d978; end: 10528dba7;  */

ulong FUN_10528d978(ulong param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (param_2[2] - *param_2) / 0x18;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_3 || uVar2 - param_3 == 0) {
    uVar2 = param_3;
  }
  if (0x555555555555554 < uVar1) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Entry: 10528dba8; end: 10528dbeb;  */

long FUN_10528dba8(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  lVar1 = lStack_28 + 0x18;
  func_0x00010b9a9518(lVar1);
  func_0x000104bdbf78(&lStack_28);
  return lVar1;
}



/* Entry: 10528dbec; end: 10528dccf;  */

undefined8 FUN_10528dbec(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818748 & 1) == 0) {
    iVar1 = 0x13818748;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_MassSnapDestination");
      pcVar2 = "type";
      func_0x0001003a83dc(auStack_40,"type");
      FUN_10528dcd0();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar2);
      param_2 = 0;
      func_0x000104bdbd44(0x113818738,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      ___cxa_guard_release(0x113818748);
    }
  }
  FUN_10528dd28(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818738;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbd80 & 1) == 0) {
    iVar1 = 0x130cbd80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbd70);
      ___cxa_guard_release(0x1130cbd80);
    }
  }
  return 0x1130cbd70;
}


