/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107278df0; end: 107278e13;  */

/* WARNING: Possible PIC construction at 0x00010688f29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f2a0) */

ulong FUN_107278df0(ushort **param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ushort *puStack_20;
  ulong uStack_18;
  
  if (*(int *)(param_1 + 5) == 2) {
    uVar1 = param_2 + 0x10;
    puStack_20 = *param_1 + 1;
    uStack_18 = (ulong)**param_1;
    func_0x00010727a490(uVar1);
    return uVar1;
  }
  if (*(int *)(param_1 + 5) == 3) {
    puVar3 = *param_1;
    uVar2 = **(undefined8 **)(param_2 + 0x18);
    uVar1 = (*(undefined8 **)(param_2 + 0x18))[1];
    uStack_18 = (ulong)*(char *)((long)puVar3 + 0x17);
    puStack_20 = puVar3;
    if ((long)uStack_18 < 0) {
      puStack_20 = *(ushort **)puVar3;
      uStack_18 = *(ulong *)(puVar3 + 4);
    }
    param_1 = &puStack_20;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10688f2a0;
    register0x00000008 = (BADSPACEBASE *)&puStack_20;
  }
  else {
    uVar2 = **(undefined8 **)(param_2 + 0x20);
    uVar1 = (*(undefined8 **)(param_2 + 0x20))[1];
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (param_1[1] < uVar1) {
    uVar1 = 0;
  }
  else {
    func_0x000105394f4c(param_1,0,uVar1,uVar2,uVar1);
    uVar1 = (ulong)((int)param_1 == 0);
  }
  return uVar1;
}



/* Entry: 107278e14; end: 107278e3b;  */

void FUN_107278e14(void)

{
  func_0x00010727a490();
  return;
}



/* Entry: 107278e3c; end: 107278e7f;  */

/* WARNING: Possible PIC construction at 0x00010688f29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f2a0) */

bool FUN_107278e3c(undefined8 **param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 *puStack_20;
  long lStack_18;
  
  if (*(int *)(param_1 + 5) == 3) {
    puVar4 = *param_1;
    uVar2 = **(undefined8 **)(param_2 + 0x18);
    uVar3 = (*(undefined8 **)(param_2 + 0x18))[1];
    lStack_18 = (long)*(char *)((long)puVar4 + 0x17);
    puStack_20 = puVar4;
    if (lStack_18 < 0) {
      puStack_20 = (undefined8 *)*puVar4;
      lStack_18 = puVar4[1];
    }
    param_1 = &puStack_20;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10688f2a0;
    register0x00000008 = (BADSPACEBASE *)&puStack_20;
  }
  else {
    uVar2 = **(undefined8 **)(param_2 + 0x20);
    uVar3 = (*(undefined8 **)(param_2 + 0x20))[1];
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (param_1[1] < uVar3) {
    bVar1 = false;
  }
  else {
    func_0x000105394f4c(param_1,0,uVar3,uVar2,uVar3);
    bVar1 = (int)param_1 == 0;
  }
  return bVar1;
}



/* Entry: 107278e80; end: 107278ebf;  */

void FUN_107278e80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_28 = param_5[1];
  uStack_30 = *param_5;
  uStack_18 = param_6[1];
  uStack_20 = *param_6;
  FUN_107278ec0(param_1,&uStack_60);
  return;
}



/* Entry: 107278ec0; end: 107278f47;  */

undefined8 * FUN_107278ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar1 = param_1;
  if (*(int *)(param_1 + 5) != 0) {
    if (*(int *)(param_1 + 5) == 1) {
      func_0x00010727a4b0(param_1,*(undefined8 *)param_2[2],((undefined8 *)param_2[2])[1],
                          *(undefined8 *)param_2[3]);
      return param_1;
    }
    if (*(int *)(param_1 + 5) == 2) {
      param_1 = (undefined8 *)*param_1;
      func_0x00010727a4b0(param_1,*(undefined8 *)param_2[4],((undefined8 *)param_2[4])[1],
                          *(undefined8 *)param_2[5]);
      return param_1;
    }
    if (*(int *)(param_1 + 5) != 3) {
      lVar4 = *(long *)param_2[8];
      lVar6 = ((long *)param_2[8])[1];
      puVar5 = *(undefined8 **)param_2[9];
      puVar1 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      goto LAB_1003b06c0;
    }
    param_2 = param_2 + 6;
    puVar1 = (undefined8 *)*param_1;
  }
  puVar5 = *(undefined8 **)param_2[1];
  lVar4 = *(long *)*param_2;
  lVar6 = ((long *)*param_2)[1];
  puVar3 = (undefined8 *)(long)*(char *)((long)puVar1 + 0x17);
  if ((long)puVar3 < 0) {
    puVar3 = (undefined8 *)puVar1[1];
    puVar1 = (undefined8 *)*puVar1;
  }
LAB_1003b06c0:
  if (puVar3 < puVar5) {
    puVar5 = (undefined8 *)0xffffffffffffffff;
  }
  else if (lVar6 != 0) {
    lVar2 = (long)puVar1 + (long)puVar5;
    func_0x0001003b0714(lVar2,(long)puVar1 + (long)puVar3,lVar4,lVar4 + lVar6);
    puVar5 = (undefined8 *)(lVar2 - (long)puVar1);
    if (lVar2 == (long)puVar1 + (long)puVar3) {
      puVar5 = (undefined8 *)0xffffffffffffffff;
    }
  }
  return puVar5;
}



/* Entry: 107278f48; end: 107278f5f;  */

void FUN_107278f48(void)

{
  func_0x00010727a4b0();
  return;
}



/* Entry: 107278f60; end: 107278fb3;  */

ulong FUN_107278f60(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if ((ulong)param_1[1] < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    lVar1 = lVar2 + param_1[1];
    lVar3 = lVar2 + param_4;
    func_0x0001003b0714(lVar3,lVar1,param_2,param_2 + param_3);
    param_4 = lVar3 - lVar2;
    if (lVar3 == lVar1) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 107278fb4; end: 107278fcb;  */

void FUN_107278fb4(void)

{
  func_0x00010727a4b0();
  return;
}



/* Entry: 107278fcc; end: 107278feb;  */

ulong FUN_107278fcc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  param_2 = (undefined8 *)*param_2;
  uVar5 = *(ulong *)param_1[1];
  lVar1 = *(long *)*param_1;
  lVar2 = ((long *)*param_1)[1];
  uVar4 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar4 < 0) {
    uVar4 = param_2[1];
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar4 < uVar5) {
    uVar5 = 0xffffffffffffffff;
  }
  else if (lVar2 != 0) {
    lVar3 = (long)param_2 + uVar5;
    func_0x0001003b0714(lVar3,(long)param_2 + uVar4,lVar1,lVar1 + lVar2);
    uVar5 = lVar3 - (long)param_2;
    if (lVar3 == (long)param_2 + uVar4) {
      uVar5 = 0xffffffffffffffff;
    }
  }
  return uVar5;
}



/* Entry: 107278fec; end: 107279013;  */

undefined8 FUN_107278fec(undefined8 param_1)

{
  FUN_107279014(param_1);
  return param_1;
}



/* Entry: 107279014; end: 107279027;  */

void FUN_107279014(undefined8 param_1,long param_2)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    if ((bRam00000001131acf40 & 1) == 0) {
      iVar1 = 0x131acf40;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10726ad94(0x1131acf30);
        ___cxa_guard_release(0x1131acf40);
      }
    }
    func_0x000107275304();
    if (extraout_x8 != 0) {
      do {
        func_0x000107274880();
      } while (extraout_w10 != 0);
    }
    return;
  }
  func_0x00010014c49c(param_2);
  FUN_107279044();
  return;
}



/* Entry: 107279028; end: 107279043;  */

void FUN_107279028(void)

{
  func_0x00010014c49c();
  FUN_107279044();
  return;
}



/* Entry: 107279044; end: 1072790af;  */

undefined8 * FUN_107279044(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010727a218();
  uStack_28 = extraout_x8;
  FUN_10726ae20(auStack_40,1);
  FUN_1072790b0(puStack_30,param_2);
  func_0x00010727a344();
  FUN_10726b254();
  func_0x00010727a1d4(uStack_28);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x00010727a52c();
  FUN_10726b254();
  puVar1 = puStack_30;
  func_0x00010727a2ac();
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1109967c0;
  puVar1[1] = 0;
  FUN_1072790e4(puVar1 + 3);
  return puVar1;
}



/* Entry: 1072790b0; end: 1072790e3;  */

undefined8 * FUN_1072790b0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109967c0;
  param_1[1] = 0;
  FUN_1072790e4(param_1 + 3);
  return param_1;
}



/* Entry: 1072790e4; end: 1072790fb;  */

void FUN_1072790e4(long param_1)

{
  FUN_1072790fc();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1072790fc; end: 107279117;  */

void FUN_1072790fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 107279118; end: 10727914f;  */

void FUN_107279118(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x00010727a700();
  *param_1 = extraout_x8;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 1);
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined4 *)(unaff_x19 + 0xd0) = 0x3f800000;
  *(undefined4 *)(unaff_x19 + 0xd8) = 0;
  return;
}



/* Entry: 107279150; end: 107279163;  */

void FUN_107279150(void)

{
  FUN_107279164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107279164; end: 107279257;  */

void FUN_107279164(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010727a700();
  *param_1 = extraout_x8;
  func_0x000107279198(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return;
}



/* Entry: 107279258; end: 10727926f;  */

void FUN_107279258(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107279270; end: 107279297;  */

long FUN_107279270(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107279298; end: 1072792b7;  */

void FUN_107279298(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1072792b8();
  }
  return;
}



/* Entry: 1072792b8; end: 1072792df;  */

long FUN_1072792b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072792e0; end: 107279367;  */

void FUN_1072792e0(void)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x00010014c2bc();
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  uVar4 = unaff_x20[1];
  uVar3 = *unaff_x20;
  uVar6 = unaff_x19[1];
  uVar5 = *unaff_x19;
  uVar2 = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  uVar8 = unaff_x19[4];
  uVar7 = unaff_x19[3];
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  unaff_x19[4] = 0;
  *puVar1 = &PTR_FUN_110996b40;
  puVar1[1] = unaff_x21;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[6] = uVar2;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar1[8] = uVar8;
  puVar1[7] = uVar7;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  *extraout_x8 = puVar1;
  FUN_107279414(&uStack_60);
  return;
}



/* Entry: 107279368; end: 10727936b;  */

undefined8 * FUN_107279368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996b40;
  FUN_107279414(param_1 + 4);
  return param_1;
}



/* Entry: 10727936c; end: 10727937f;  */

void FUN_10727936c(void)

{
  FUN_107279384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107279380; end: 107279383;  */

void FUN_107279380(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_38 [16];
  undefined1 uStack_28;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  auStack_38[0] = 0;
  uStack_28 = 0;
  (*pcVar2)(plVar1,param_1 + 0x20,auStack_38,param_1 + 0x38);
  FUN_107279298(auStack_38);
  return;
}



/* Entry: 107279384; end: 1072793b3;  */

undefined8 * FUN_107279384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996b40;
  FUN_107279414(param_1 + 4);
  return param_1;
}



/* Entry: 1072793b4; end: 107279413;  */

void FUN_1072793b4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_38 [16];
  undefined1 uStack_28;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  auStack_38[0] = 0;
  uStack_28 = 0;
  (*pcVar2)(plVar1,param_1 + 0x20,auStack_38,param_1 + 0x38);
  FUN_107279298(auStack_38);
  return;
}



/* Entry: 107279414; end: 10727943b;  */

void FUN_107279414(long param_1)

{
  FUN_10726b264(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10727943c; end: 1072797b3;  */

void FUN_10727943c(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong extraout_x8;
  long lVar7;
  ulong extraout_x9;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  
  func_0x00010727a484();
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar17 = (ulong)uVar1;
  puVar16 = (ulong *)(param_1 + 8);
  uVar18 = *puVar16;
  *(ulong *)(param_2 + 8) = uVar17;
  if ((uVar18 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar18 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    bVar4 = 2 < uVar18;
    bVar5 = uVar18 == 3;
    func_0x00010727a67c(uVar18 << 1);
    uVar15 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar15 = extraout_x9;
    }
    if (uVar15 - 1 == 0) {
      uVar15 = 2;
    }
    else if ((uVar15 & uVar15 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar18 = *puVar16;
      param_1 = uVar15;
    }
    if (uVar18 < uVar15) {
LAB_1072794dc:
      FUN_107279990(puVar16,uVar15);
      FUN_107279978();
      unaff_x19[1] = uVar15;
      lVar7 = *unaff_x19;
      for (uVar18 = 0; uVar15 != uVar18; uVar18 = uVar18 + 1) {
        *(undefined8 *)(lVar7 + uVar18 * 8) = 0;
      }
      plVar9 = (long *)unaff_x19[2];
      uVar18 = uVar15;
      if (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        uVar8 = uVar15 - 1;
        if ((uVar15 & uVar8) == 0) {
          uVar11 = uVar11 & uVar8;
        }
        else if (uVar15 <= uVar11) {
          uVar12 = 0;
          if (uVar15 != 0) {
            uVar12 = uVar11 / uVar15;
          }
          uVar11 = uVar11 - uVar12 * uVar15;
        }
        *(long **)(lVar7 + uVar11 * 8) = unaff_x19 + 2;
        while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
          uVar12 = plVar9[1];
          if ((uVar15 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar15 <= uVar12) {
            uVar2 = 0;
            if (uVar15 != 0) {
              uVar2 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar2 * uVar15;
          }
          if (uVar12 != uVar11) {
            plVar14 = plVar9;
            if (*(long *)(lVar7 + uVar12 * 8) == 0) {
              *(long **)(lVar7 + uVar12 * 8) = plVar10;
              uVar11 = uVar12;
            }
            else {
              do {
                plVar13 = plVar14;
                plVar14 = (long *)*plVar13;
                if (plVar14 == (long *)0x0) break;
              } while (*(int *)(plVar9 + 2) == *(int *)(plVar14 + 2));
              *plVar10 = (long)plVar14;
              *plVar13 = **(long **)(lVar7 + uVar12 * 8);
              **(long **)(lVar7 + uVar12 * 8) = (long)plVar9;
              plVar9 = plVar10;
            }
          }
        }
      }
    }
    else if (uVar15 < uVar18) {
      func_0x00010727a550();
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010727a464();
      }
      if (uVar15 <= param_1) {
        uVar15 = param_1;
      }
      if (uVar15 < uVar18) {
        if (uVar15 != 0) goto LAB_1072794dc;
        FUN_107279978();
        unaff_x19[1] = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *puVar16;
      }
    }
  }
  uVar15 = uVar18 - 1;
  if ((uVar18 & uVar15) == 0) {
    uVar11 = (ulong)((int)uVar18 - 1U & uVar1);
  }
  else {
    uVar11 = uVar17;
    if (uVar18 <= uVar17) {
      uVar11 = 0;
      if (uVar18 != 0) {
        uVar11 = uVar17 / uVar18;
      }
      uVar11 = uVar17 - uVar11 * uVar18;
    }
  }
  lVar7 = *unaff_x19;
  plVar9 = *(long **)(lVar7 + uVar11 * 8);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    bVar5 = false;
    bVar3 = 0;
    do {
      plVar10 = plVar9;
      plVar9 = (long *)*plVar10;
      if (plVar9 == (long *)0x0) break;
      uVar8 = plVar9[1];
      if ((uVar18 & uVar15) == 0) {
        uVar12 = uVar8 & uVar15;
      }
      else {
        uVar12 = uVar8;
        if (uVar18 <= uVar8) {
          uVar12 = 0;
          if (uVar18 != 0) {
            uVar12 = uVar8 / uVar18;
          }
          uVar12 = uVar8 - uVar12 * uVar18;
        }
      }
      if (uVar12 != uVar11) break;
      if (uVar8 == uVar17) {
        bVar4 = (int)plVar9[2] == (int)unaff_x20[2];
      }
      else {
        bVar4 = false;
      }
      bVar6 = bVar4 != bVar5;
      bVar4 = (bool)(bVar3 & bVar6);
      bVar5 = (bool)(bVar5 | bVar6);
      bVar3 = bVar3 | bVar6;
    } while (!bVar4);
  }
  uVar17 = unaff_x20[1];
  if ((uVar18 & uVar15) == 0) {
    uVar17 = uVar15 & uVar17;
    if (plVar10 == (long *)0x0) goto LAB_107279714;
LAB_1072796d8:
    *unaff_x20 = *plVar10;
    *plVar10 = (long)unaff_x20;
    if (*unaff_x20 == 0) goto LAB_107279768;
    uVar11 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar18 & uVar15) == 0) {
      uVar11 = uVar11 & uVar15;
    }
    else if (uVar18 <= uVar11) {
      uVar15 = 0;
      if (uVar18 != 0) {
        uVar15 = uVar11 / uVar18;
      }
      uVar11 = uVar11 - uVar15 * uVar18;
    }
    if (uVar11 == uVar17) goto LAB_107279768;
  }
  else {
    if (uVar18 <= uVar17) {
      uVar11 = 0;
      if (uVar18 != 0) {
        uVar11 = uVar17 / uVar18;
      }
      uVar17 = uVar17 - uVar11 * uVar18;
    }
    if (plVar10 != (long *)0x0) goto LAB_1072796d8;
LAB_107279714:
    plVar9 = unaff_x19 + 2;
    *unaff_x20 = *plVar9;
    *plVar9 = (long)unaff_x20;
    *(long **)(lVar7 + uVar17 * 8) = plVar9;
    if (*unaff_x20 == 0) goto LAB_107279768;
    uVar11 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar18 & uVar15) == 0) {
      uVar11 = uVar11 & uVar15;
    }
    else if (uVar18 <= uVar11) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = uVar11 / uVar18;
      }
      uVar11 = uVar11 - uVar17 * uVar18;
    }
  }
  *(long **)(lVar7 + uVar11 * 8) = unaff_x20;
LAB_107279768:
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 1072797b4; end: 10727985f;  */

/* WARNING: Possible PIC construction at 0x0001072797d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072797d8) */
/* WARNING: Removing unreachable block (ram,0x00010727980c) */
/* WARNING: Removing unreachable block (ram,0x0001072797f8) */

undefined1 * FUN_1072797b4(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  undefined1 *puStack_30;
  
  func_0x00010727a218();
  if (*(long *)(param_2 + 0x18) != 0) {
    if (*(long *)(param_2 + 0x18) == param_2) {
      puStack_30 = auStack_48;
      func_0x00010727a690(*(undefined8 *)(param_2 + 0x18));
      func_0x00010727a548();
    }
    else {
      func_0x00010727a3b8();
    }
  }
  return auStack_48;
}



/* Entry: 107279860; end: 107279977;  */

void FUN_107279860(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *plVar4;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x19;
  long *unaff_x20;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar2 = alStack_40;
  func_0x00010727a218();
  uVar1 = param_2 == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x00010727a3f0();
    param_1 = (long *)param_1[3];
    plVar4 = (long *)param_2[3];
    if (param_1 == unaff_x20) {
      uVar1 = plVar4 == unaff_x19;
      if ((bool)uVar1) {
        func_0x00010727a690();
        (*extraout_x8_00)();
        func_0x00010727a2ec(unaff_x20[3]);
        unaff_x20[3] = 0;
        func_0x00010727a690(unaff_x19[3]);
        param_2 = unaff_x20;
        (*extraout_x8_01)();
        func_0x00010727a2ec(unaff_x19[3]);
        unaff_x19[3] = 0;
        unaff_x20[3] = (long)unaff_x20;
        func_0x00010727a548(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        func_0x00010727a690();
        func_0x00010727a548();
        plVar2 = (long *)unaff_x20[3];
        func_0x00010727a2ec();
        unaff_x20[3] = unaff_x19[3];
      }
      unaff_x19[3] = (long)unaff_x19;
      param_1 = plVar2;
    }
    else {
      uVar1 = plVar4 == unaff_x19;
      if ((bool)uVar1) {
        param_2 = unaff_x20;
        (**(code **)(*plVar4 + 0x18))(plVar4);
        param_1 = (long *)unaff_x19[3];
        func_0x00010727a2ec();
        unaff_x19[3] = unaff_x20[3];
        unaff_x20[3] = (long)unaff_x20;
      }
      else {
        unaff_x20[3] = (long)plVar4;
        unaff_x19[3] = (long)param_1;
      }
    }
  }
  func_0x00010727a1d4(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lVar3 = *param_1;
  *param_1 = (long)param_2;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107279978; end: 10727998f;  */

void FUN_107279978(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107279990; end: 1072799ab;  */

long FUN_107279990(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_1072799d0();
  return param_1;
}



/* Entry: 1072799ac; end: 1072799cf;  */

undefined8 FUN_1072799ac(undefined8 param_1)

{
  FUN_1072799d0(param_1,0);
  return param_1;
}



/* Entry: 1072799d0; end: 1072799e7;  */

void FUN_1072799d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001072791f8(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1072799e8; end: 107279a2b;  */

void FUN_1072799e8(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001072791f8(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107279a2c; end: 107279a5b;  */

long FUN_107279a2c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_107279af8(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 107279a5c; end: 107279af7;  */

void FUN_107279a5c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  __ZNSt3__119__shared_mutex_base8try_lockEv();
  if ((uVar1 & 1) == 0) {
    __ZNSt3__119__shared_mutex_base4lockEv(param_1);
  }
  return;
}



/* Entry: 107279af8; end: 107279cf3;  */

undefined1  [16] FUN_107279af8(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  ulong unaff_x23;
  undefined1 auVar15 [16];
  long *aplStack_58 [3];
  
  uVar1 = *param_2;
  uVar11 = (ulong)uVar1;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar7 = uVar14 - 1;
    uVar13 = (uint)uVar14;
    if ((uVar14 & uVar7) == 0) {
      unaff_x23 = (ulong)(uVar13 - 1 & uVar1);
    }
    else {
      unaff_x23 = uVar11;
      if (uVar14 <= uVar11) {
        uVar2 = 0;
        if (uVar13 != 0) {
          uVar2 = uVar1 / uVar13;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar13);
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_107279ba8;
          uVar9 = plVar12[1];
          if (uVar9 != uVar11) break;
          if (*(uint *)(plVar12 + 2) == uVar1) {
            uVar6 = 0;
            goto LAB_107279ccc;
          }
        }
        if ((uVar14 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar14 <= uVar9) {
          uVar3 = 0;
          if (uVar14 != 0) {
            uVar3 = uVar9 / uVar14;
          }
          uVar9 = uVar9 - uVar3 * uVar14;
        }
      } while (uVar9 == unaff_x23);
    }
  }
LAB_107279ba8:
  FUN_107279cf4(aplStack_58,param_1,uVar11);
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(param_1[3] + 1))) {
    bVar4 = 2 < uVar14;
    bVar5 = uVar14 == 3;
    func_0x00010727a67c(uVar14 << 1);
    uVar6 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar6 = extraout_x9;
    }
    func_0x000107279d44(param_1,uVar6);
    uVar14 = param_1[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x23 = (ulong)((int)uVar14 - 1U & uVar1);
    }
    else {
      unaff_x23 = uVar11;
      if (uVar14 <= uVar11) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar11 / uVar14;
        }
        unaff_x23 = uVar11 - uVar7 * uVar14;
      }
    }
  }
  plVar12 = aplStack_58[0];
  lVar8 = *param_1;
  plVar10 = *(long **)(lVar8 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_1 + 2;
    *aplStack_58[0] = *plVar10;
    *plVar10 = (long)aplStack_58[0];
    *(long **)(lVar8 + unaff_x23 * 8) = plVar10;
    if (*aplStack_58[0] != 0) {
      uVar11 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar11 = uVar11 & uVar14 - 1;
      }
      else if (uVar14 <= uVar11) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar11 / uVar14;
        }
        uVar11 = uVar11 - uVar7 * uVar14;
      }
      *(long **)(lVar8 + uVar11 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar10;
    *plVar10 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1072799ac(aplStack_58);
  uVar6 = 1;
LAB_107279ccc:
  auVar15._8_8_ = uVar6;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 107279cf4; end: 107279de3;  */

void FUN_107279cf4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)*param_5;
  puVar1[6] = 0;
  return;
}



/* Entry: 107279de4; end: 107279edf;  */

void FUN_107279de4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_107279978(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_107279990(plVar3);
    FUN_107279978(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107279ee0; end: 107279f13;  */

undefined8 * FUN_107279ee0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_107279f14(*param_1);
  }
  return param_1;
}



/* Entry: 107279f14; end: 107279f9f;  */

void FUN_107279f14(void)

{
  __ZNSt3__119__shared_mutex_base6unlockEv();
  return;
}



/* Entry: 107279fa0; end: 107279fcf;  */

void FUN_107279fa0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_107279fd0();
  if (lVar1 != 0) {
    FUN_10727a070(param_1,lVar1);
  }
  return;
}



/* Entry: 107279fd0; end: 10727a06f;  */

long FUN_107279fd0(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar1 = *param_2;
    uVar7 = (ulong)uVar1;
    uVar8 = uVar6 - 1;
    uVar5 = (uint)uVar6;
    if ((uVar6 & uVar8) == 0) {
      uVar9 = (ulong)(uVar5 - 1 & uVar1);
    }
    else {
      uVar9 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar1 / uVar5;
        }
        uVar9 = (ulong)(uVar1 - uVar2 * uVar5);
      }
    }
    plVar4 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar10 = plVar4[1];
        if (uVar10 != uVar7) break;
        if (*(uint *)(plVar4 + 2) == uVar1) {
          return (long)plVar4;
        }
      }
      if ((uVar6 & uVar8) == 0) {
        uVar10 = uVar10 & uVar8;
      }
      else if (uVar6 <= uVar10) {
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar10 / uVar6;
        }
        uVar10 = uVar10 - uVar3 * uVar6;
      }
    } while (uVar10 == uVar9);
  }
  return 0;
}



/* Entry: 10727a070; end: 10727a0a7;  */

undefined8 FUN_10727a070(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10727a0a8(auStack_38);
  FUN_1072799ac(auStack_38);
  return uVar1;
}



/* Entry: 10727a0a8; end: 10727a743;  */

void FUN_10727a0a8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10727a15c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10727a15c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10727a15c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10727a744; end: 10727a9a3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_10727a744(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 **ppuVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x8_00;
  undefined8 *puVar5;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar6;
  byte bVar7;
  long *plVar8;
  byte bVar9;
  ulong uVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined8 uStack_29f;
  undefined1 auStack_290 [32];
  undefined1 auStack_270 [24];
  undefined1 uStack_258;
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [32];
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined8 auStack_1c0 [3];
  undefined1 uStack_1a8;
  undefined8 uStack_198;
  byte bStack_190;
  undefined8 uStack_188;
  byte bStack_180;
  undefined8 uStack_178;
  byte bStack_170;
  undefined8 *puStack_b8;
  undefined1 uStack_b0;
  undefined8 auStack_a8 [11];
  
  puVar6 = param_1;
  func_0x000107285528();
  *puVar6 = &PTR_FUN_110996c50;
  puVar6[1] = param_2;
  lVar4 = param_3[1];
  uVar15 = *param_3;
  puVar6[3] = param_3[1];
  puVar6[2] = uVar15;
  auStack_a8[10] = extraout_x8;
  if (lVar4 != 0) {
    do {
      func_0x0001072859c0();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_4[1];
  uVar15 = *param_4;
  param_1[5] = param_4[1];
  param_1[4] = uVar15;
  if (lVar4 != 0) {
    do {
      func_0x0001072859c0();
    } while (extraout_w10_00 != 0);
  }
  plVar8 = (long *)*param_5;
  func_0x00010002b838(auStack_a8,PTR_DAT_1131ad090);
  (**(code **)(*plVar8 + 0x28))(plVar8,auStack_a8);
  func_0x000107285cf8();
  *(bool *)(param_1 + 6) = (((uint)plVar8 ^ 0xffffffff) & 0x101) == 0;
  plVar8 = (long *)*param_5;
  func_0x00010002b838(auStack_a8,PTR_DAT_1131ad098);
  (**(code **)(*plVar8 + 0x28))(plVar8,auStack_a8);
  func_0x000107285cf8();
  *(undefined1 *)(param_1 + 7) = 0;
  *(bool *)((long)param_1 + 0x31) = (((uint)plVar8 ^ 0xffffffff) & 0x101) == 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  puVar1 = param_1 + 0x3c;
  auStack_a8[0] = 0;
  auStack_a8[1] = 0;
  auStack_a8[3] = 0;
  auStack_a8[2] = 0x4028000000000000;
  auStack_a8[5] = 0x4034000000000000;
  auStack_a8[4] = 0x402e000000000000;
  auStack_a8[7] = 0x4049000000000000;
  auStack_a8[6] = 0x4033000000000000;
  auStack_a8[9] = 0x4049000000000000;
  auStack_a8[8] = 0x4039000000000000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  uStack_b0 = 0;
  puStack_b8 = puVar1;
  FUN_10727d234(puVar1,5);
  puVar5 = (undefined8 *)param_1[0x3d];
  for (lVar4 = 0; uVar2 = lVar4 == 0x50, !(bool)uVar2; lVar4 = lVar4 + 0x10) {
    uVar15 = *(undefined8 *)((long)auStack_a8 + lVar4);
    puVar5[1] = *(undefined8 *)((long)auStack_a8 + lVar4 + 8);
    *puVar5 = uVar15;
    puVar5 = puVar5 + 2;
  }
  param_1[0x3d] = puVar5;
  uStack_b0 = 1;
  ppuVar3 = &puStack_b8;
  FUN_10727d2b8();
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  FUN_10726ed14(param_1 + 0x8d);
  param_1[0x8f] = param_1;
  func_0x0001072854dc(auStack_a8[10]);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10727d2fc(param_1 + 0x8a);
  FUN_10727d2fc(param_1 + 0x87);
  FUN_10727d368(param_1 + 0x45);
  FUN_10727d3c0(puVar1);
  FUN_10727d3e4(param_1 + 7);
  func_0x00010725b6e0(param_1 + 4);
  func_0x000107283b14(puVar6 + 2);
  __Unwind_Resume();
  puVar6 = ppuVar3[1];
  uStack_2f0 = 0;
  uStack_2c8 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    uVar10 = 0;
    bVar11 = 0;
    bVar9 = 0;
    bVar7 = 0;
    uVar15 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    func_0x000107285db4();
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uStack_2e8 = uStack_2f0;
    uStack_2d0 = uStack_2f0;
  }
  else {
    auStack_218[0] = 0;
    uStack_1f8 = 0;
    func_0x00010740e07c(&uStack_1f0,puVar6,auStack_218);
    uVar10 = uStack_1e0 & 0xff;
    uStack_2f0 = uStack_198;
    uStack_2e8 = uStack_188;
    uStack_2e0 = uStack_178;
    uStack_2d8 = uStack_1e8;
    func_0x00010740ec5c(auStack_220,ppuVar3[1]);
    func_0x00010740e088(auStack_250,ppuVar3[1]);
    uStack_2d0 = uStack_248;
    func_0x0001074119b0(auStack_220);
    uVar12 = uStack_240;
    uVar13 = uStack_238;
    uVar14 = uStack_230;
    uVar15 = uStack_1f0;
    bVar11 = bStack_190;
    bVar9 = bStack_180;
    bVar7 = bStack_170;
  }
  auStack_270[0] = 0;
  uStack_258 = 0;
  uStack_1a8 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1d7 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1c7 = 0;
  uStack_1d0 = 0;
  uStack_1cf = 0;
  auStack_1c0[0]._0_1_ = 0;
  func_0x0001001148fc(auStack_270);
  if (puVar6 == (undefined8 *)0x0) {
    uStack_2d0 = 0xc056800000000000;
    uVar12 = 0xc066800000000000;
    uVar13 = 0x4056800000000000;
    uVar14 = 0x4066800000000000;
    uVar15 = 0;
    func_0x000107285db4();
  }
  else {
    if ((uVar10 & 1) == 0) {
      uVar15 = 0;
      uStack_2d8 = 0;
    }
    if ((bVar11 & 1) != 0) {
      uStack_1e8 = CONCAT71(uStack_1e8._1_7_,1);
      uStack_1f0 = uStack_2f0;
    }
    if ((bVar9 & 1) != 0) {
      uStack_1d8 = 1;
      uStack_1e0 = uStack_2e8;
    }
    uStack_2c8 = uStack_2d8;
    if ((bVar7 & 1) != 0) {
      uStack_1d0 = (undefined1)uStack_2e0;
      uStack_1cf = (undefined7)((ulong)uStack_2e0 >> 8);
      uStack_1c8 = 1;
    }
  }
  uStack_2b8 = uStack_1e8;
  uStack_2c0 = uStack_1f0;
  uStack_2a8 = uStack_1d8;
  uStack_2b0 = uStack_1e0;
  uStack_29f = CONCAT17(uStack_1c8,uStack_1cf);
  uStack_2a7 = uStack_1d7;
  uStack_2a0 = uStack_1d0;
  func_0x00010028af84(auStack_290,auStack_1c0);
  FUN_10727d404(uVar15,uStack_2c8,uStack_2d0,uVar12,uVar13,uVar14,extraout_x8_00,&uStack_2c0);
  func_0x0001001148fc(auStack_290);
  puVar6 = auStack_1c0;
  func_0x0001001148fc(puVar6);
  return puVar6;
}



/* Entry: 10727a9a4; end: 10727ac43;  */

void FUN_10727a9a4(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined8 uStack_1df;
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [24];
  undefined1 uStack_198;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [32];
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 auStack_100 [24];
  undefined1 uStack_e8;
  undefined8 uStack_d8;
  byte bStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  
  lVar1 = *(long *)(param_2 + 8);
  uStack_230 = 0;
  uStack_208 = 0;
  if (lVar1 == 0) {
    uVar4 = 0;
    bVar5 = 0;
    bVar3 = 0;
    bVar2 = 0;
    uVar9 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    func_0x000107285db4();
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uStack_228 = uStack_230;
    uStack_210 = uStack_230;
  }
  else {
    auStack_158[0] = 0;
    uStack_138 = 0;
    func_0x00010740e07c(&uStack_130,lVar1,auStack_158);
    uVar4 = uStack_120 & 0xff;
    uStack_230 = uStack_d8;
    uStack_228 = uStack_c8;
    uStack_220 = uStack_b8;
    uStack_218 = uStack_128;
    func_0x00010740ec5c(auStack_160,*(undefined8 *)(param_2 + 8));
    func_0x00010740e088(auStack_190,*(undefined8 *)(param_2 + 8));
    uStack_210 = uStack_188;
    func_0x0001074119b0(auStack_160);
    uVar6 = uStack_180;
    uVar7 = uStack_178;
    uVar8 = uStack_170;
    uVar9 = uStack_130;
    bVar5 = bStack_d0;
    bVar3 = bStack_c0;
    bVar2 = bStack_b0;
  }
  auStack_1b0[0] = 0;
  uStack_198 = 0;
  uStack_e8 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_117 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_107 = 0;
  uStack_110 = 0;
  uStack_10f = 0;
  auStack_100[0] = 0;
  func_0x0001001148fc(auStack_1b0);
  if (lVar1 == 0) {
    uStack_210 = 0xc056800000000000;
    uVar6 = 0xc066800000000000;
    uVar7 = 0x4056800000000000;
    uVar8 = 0x4066800000000000;
    uVar9 = 0;
    func_0x000107285db4();
  }
  else {
    if ((uVar4 & 1) == 0) {
      uVar9 = 0;
      uStack_218 = 0;
    }
    if ((bVar5 & 1) != 0) {
      uStack_128 = CONCAT71(uStack_128._1_7_,1);
      uStack_130 = uStack_230;
    }
    if ((bVar3 & 1) != 0) {
      uStack_118 = 1;
      uStack_120 = uStack_228;
    }
    uStack_208 = uStack_218;
    if ((bVar2 & 1) != 0) {
      uStack_110 = (undefined1)uStack_220;
      uStack_10f = (undefined7)((ulong)uStack_220 >> 8);
      uStack_108 = 1;
    }
  }
  uStack_1f8 = uStack_128;
  uStack_200 = uStack_130;
  uStack_1e8 = uStack_118;
  uStack_1f0 = uStack_120;
  uStack_1df = CONCAT17(uStack_108,uStack_10f);
  uStack_1e7 = uStack_117;
  uStack_1e0 = uStack_110;
  func_0x00010028af84(auStack_1d0,auStack_100);
  FUN_10727d404(uVar9,uStack_208,uStack_210,uVar6,uVar7,uVar8,param_1,&uStack_200);
  func_0x0001001148fc(auStack_1d0);
  func_0x0001001148fc(auStack_100);
  return;
}



/* Entry: 10727ac44; end: 10727ac8b;  */

/* WARNING: Possible PIC construction at 0x00010727adec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010727adf0) */

void FUN_10727ac44(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined1 *param_5,undefined1 (*param_6) [16])

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 **ppuVar6;
  undefined1 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined1 *unaff_x19;
  undefined1 (*unaff_x20) [16];
  undefined1 (*unaff_x21) [16];
  undefined1 *puVar16;
  undefined1 (*unaff_x22) [16];
  undefined1 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 extraout_var;
  undefined1 auVar20 [16];
  undefined8 extraout_var_00;
  undefined4 uVar21;
  undefined4 uVar22;
  long lVar23;
  undefined8 unaff_d8;
  long lVar24;
  undefined8 unaff_d9;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  uVar22 = (undefined4)((ulong)param_2 >> 0x20);
  uVar21 = (undefined4)param_2;
  if (((*param_3)[8] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((param_3[0x1a][0] & 1) != 0) {
    return;
  }
  ppuVar17 = &puStack_20;
  uStack_18 = 0x10727ac5c;
  uVar18 = 0x10727ac74;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104bdc2c8();
  ppuVar6 = &puStack_20;
  do {
    puVar16 = param_5;
    pauVar9 = param_4;
    if ((param_3[1][0] & 1) != 0) {
      return;
    }
    *(undefined1 ***)((long)ppuVar6 + -0x10) = ppuVar17;
    *(undefined8 *)((long)ppuVar6 + -8) = uVar18;
    func_0x000104bdc2c8();
    *(undefined8 *)((long)ppuVar6 + -0x60) = unaff_x26;
    *(long **)((long)ppuVar6 + -0x58) = unaff_x25;
    *(long **)((long)ppuVar6 + -0x50) = unaff_x24;
    *(undefined1 **)((long)ppuVar6 + -0x48) = unaff_x23;
    *(undefined1 (**) [16])((long)ppuVar6 + -0x40) = unaff_x22;
    *(undefined1 (**) [16])((long)ppuVar6 + -0x38) = unaff_x21;
    *(undefined1 (**) [16])((long)ppuVar6 + -0x30) = unaff_x20;
    *(undefined1 **)((long)ppuVar6 + -0x28) = unaff_x19;
    *(undefined1 **)((long)ppuVar6 + -0x20) = (undefined1 *)((long)ppuVar6 + -0x10);
    *(code **)((long)ppuVar6 + -0x18) = FUN_10727ac8c;
    ppuVar17 = (undefined1 **)((long)ppuVar6 + -0x20);
    pauVar12 = (undefined1 (*) [16])((long)ppuVar6 + -0x4d0);
    func_0x000107285528();
    *(undefined8 *)((long)ppuVar6 + -0x68) = extraout_x8;
    uVar7 = param_3[3][0] == '\x01';
    pauVar8 = param_3;
    param_4 = pauVar9;
    param_5 = puVar16;
    lVar24 = CONCAT44(uVar22,uVar21);
    if ((!(bool)uVar7) ||
       (unaff_x20 = param_3, lVar24 = CONCAT44(uVar22,uVar21), *(long *)(*param_3 + 8) == 0))
    goto LAB_10727aed0;
    uVar7 = 0;
    pauVar15 = param_6;
    unaff_x21 = pauVar9;
    if (param_6[1][8] == '\x01') {
      func_0x00010549026c();
      uVar7 = 0;
      if (param_3[3][0] == '\x01') {
        func_0x0001077c3898((undefined1 *)((long)ppuVar6 + -0x488),
                            *(undefined8 *)(**(long **)(*param_3 + 8) + 0x10f8));
        plVar1 = *(long **)((long)ppuVar6 + -0x480);
        for (unaff_x25 = *(long **)((long)ppuVar6 + -0x488); unaff_x24 = plVar1, unaff_x25 != plVar1
            ; unaff_x25 = unaff_x25 + 1) {
          if (*unaff_x25 != 0) {
            func_0x000107781c60((undefined1 *)((long)ppuVar6 + -0x280));
            unaff_x23 = (undefined1 *)((long)ppuVar6 + -0x280);
            param_4 = param_6;
            FUN_107283140();
            func_0x000107285944();
            unaff_x24 = unaff_x25;
            if (((ulong)unaff_x23 & 1) != 0) break;
          }
        }
        uVar7 = unaff_x24 == *(long **)((long)ppuVar6 + -0x480);
        if (!(bool)uVar7) {
          func_0x000107781d30((undefined1 *)((long)ppuVar6 + -0x4d0),*unaff_x24);
          param_6 = *(undefined1 (**) [16])(*(long *)((long)ppuVar6 + -0x4d0) + 0x10);
          param_4 = (undefined1 (*) [16])&UNK_10f406e32;
          func_0x000100060964((undefined1 *)((long)ppuVar6 + -0x280));
          for (; param_6 != (undefined1 (*) [16])0x0; param_6 = *(undefined1 (**) [16])*param_6) {
            pauVar8 = param_6 + 1;
            param_4 = (undefined1 (*) [16])((long)ppuVar6 + -0x280);
            func_0x000104c32db4();
            if (((ulong)pauVar8 & 1) != 0) {
              func_0x000107285944();
              func_0x000107285c14();
              func_0x000107285c0c();
              lVar24 = CONCAT44(uVar22,uVar21);
              unaff_x22 = param_6;
              goto LAB_10727aed0;
            }
          }
          func_0x000107285944();
          func_0x000107285c14();
        }
        func_0x000107285c0c();
        unaff_x22 = param_6;
      }
    }
    if (((pauVar9[1][0] & 1) == 0) && ((pauVar9[5][0] & 1) == 0)) {
      uVar18 = *(undefined8 *)(*param_3 + 8);
      *(undefined1 *)((long)ppuVar6 + -0x488) = 0;
      *(undefined1 *)((long)ppuVar6 + -0x468) = 0;
      param_4 = (undefined1 (*) [16])((long)ppuVar6 + -0x488);
      func_0x00010740e07c((undefined1 *)((long)ppuVar6 + -0x280),uVar18);
      if ((pauVar9[5][0] & 1) == 0) {
        auVar20._0_8_ =
             func_0x000107285730(*(undefined1 *)((long)ppuVar6 + -0x270),
                                 *(undefined8 *)((long)ppuVar6 + -0x280));
        auVar20._8_8_ = extraout_var;
LAB_10727ae00:
        bVar3 = pauVar9[1][0];
        lVar24 = -(ulong)((long)((ulong)CONCAT14(bVar3,(uint)bVar3) << 0x3f) < 0);
        auVar4._8_8_ = -(ulong)((long)((ulong)bVar3 << 0x3f) < 0);
        auVar4._0_8_ = lVar24;
        auVar20 = auVar20 ^ (auVar20 ^ *pauVar9) & auVar4;
        *(long *)((long)ppuVar6 + -0x4c8) = auVar20._8_8_;
        *(long *)((long)ppuVar6 + -0x4d0) = auVar20._0_8_;
        *(undefined8 *)((long)ppuVar6 + -0x4b8) = *(undefined8 *)(pauVar9[5] + 8);
        *(undefined1 *)((long)ppuVar6 + -0x4b0) = pauVar9[6][0];
        *(undefined8 *)((long)ppuVar6 + -0x4a8) = *(undefined8 *)(pauVar9[6] + 8);
        *(undefined1 *)((long)ppuVar6 + -0x4a0) = pauVar9[7][0];
        *(undefined8 *)((long)ppuVar6 + -0x498) = *(undefined8 *)(pauVar9[7] + 8);
        *(undefined1 *)((long)ppuVar6 + -0x490) = pauVar9[8][0];
        *(undefined4 *)((long)ppuVar6 + -0x4c0) = 0;
        _memcpy((undefined1 *)((long)ppuVar6 + -0x480),(undefined1 *)((long)ppuVar6 + -0x4d0),0x48);
        *(undefined4 *)((long)ppuVar6 + -0x3c0) = 0;
        FUN_10727d474((undefined1 *)((long)ppuVar6 + -0x3b8),puVar16);
        *(undefined1 *)((long)ppuVar6 + -0x2a8) = 0;
        *(undefined1 *)((long)ppuVar6 + -0x288) = 0;
        unaff_x21 = (undefined1 (*) [16])((long)ppuVar6 + -0x280);
        func_0x00010727d7bc((undefined1 *)((long)ppuVar6 + -0x280),
                            (undefined1 *)((long)ppuVar6 + -0x488));
        FUN_10727da94(param_3[0x22] + 8,(undefined1 *)((long)ppuVar6 + -0x278));
        FUN_10727d368((undefined1 *)((long)ppuVar6 + -0x278));
        func_0x00010727e204((undefined1 *)((long)ppuVar6 + -0x488));
        if ((*(byte *)(**(long **)(*param_3 + 8) + 0xb7) & 1) == 0) {
          unaff_x22 = *(undefined1 (**) [16])param_3[0x44];
          for (unaff_x21 = *(undefined1 (**) [16])(param_3[0x43] + 8);
              uVar7 = unaff_x21 == unaff_x22, !(bool)uVar7; unaff_x21 = unaff_x21 + 1) {
            (**(code **)(**(long **)*unaff_x21 + 0x10))();
          }
        }
        pauVar8 = param_3;
        FUN_10727af80();
        param_4 = pauVar12;
        param_5 = puVar16;
LAB_10727aed0:
        func_0x0001072854dc(*(undefined8 *)((long)ppuVar6 + -0x68));
        if ((bool)uVar7) {
          return;
        }
        ___stack_chk_fail();
        pauVar9 = pauVar8;
        func_0x000107285c14();
        func_0x000107285c0c();
        func_0x00010728561c();
        *(undefined8 *)((long)ppuVar6 + -0x520) = unaff_d9;
        *(undefined8 *)((long)ppuVar6 + -0x518) = unaff_d8;
        *(undefined8 *)((long)ppuVar6 + -0x510) = unaff_x28;
        *(undefined8 *)((long)ppuVar6 + -0x508) = unaff_x27;
        *(undefined1 (**) [16])((long)ppuVar6 + -0x500) = unaff_x22;
        *(undefined1 (**) [16])((long)ppuVar6 + -0x4f8) = unaff_x21;
        *(undefined1 (**) [16])((long)ppuVar6 + -0x4f0) = unaff_x20;
        *(undefined1 (**) [16])((long)ppuVar6 + -0x4e8) = pauVar8;
        *(undefined1 ***)((long)ppuVar6 + -0x4e0) = ppuVar17;
        *(code **)((long)ppuVar6 + -0x4d8) = FUN_10727af80;
        func_0x000107285514();
        *(undefined8 *)((long)ppuVar6 + -0x528) = extraout_x8_00;
        uVar18 = *(undefined8 *)(*pauVar9 + 8);
        *(undefined1 *)((long)ppuVar6 + -0x5e8) = 0;
        *(undefined1 *)((long)ppuVar6 + -0x5c8) = 0;
        func_0x00010740e07c((undefined1 *)((long)ppuVar6 + -0x680),uVar18,
                            (undefined1 *)((long)ppuVar6 + -0x5e8));
        uVar18 = func_0x000107285730(*(undefined1 *)((long)ppuVar6 + -0x670),
                                     *(undefined8 *)((long)ppuVar6 + -0x680));
        *(undefined8 *)((long)ppuVar6 + -0x6a8) = extraout_var_00;
        *(undefined8 *)((long)ppuVar6 + -0x6b0) = uVar18;
        lVar19 = func_0x000107285d3c(*(undefined1 *)((long)ppuVar6 + -0x620),
                                     *(undefined8 *)((long)ppuVar6 + -0x628));
        if ((bool)uVar7) {
          lVar19 = lVar24;
        }
        lVar23 = *(long *)((long)ppuVar6 + -0x618);
        if (*(char *)((long)ppuVar6 + -0x610) == '\0') {
          lVar23 = lVar24;
        }
        *(long *)((long)ppuVar6 + -0x6a0) = lVar19;
        *(long *)((long)ppuVar6 + -0x698) = lVar23;
        lVar23 = *(long *)((long)ppuVar6 + -0x608);
        if (*(char *)((long)ppuVar6 + -0x600) == '\0') {
          lVar23 = lVar24;
        }
        *(long *)((long)ppuVar6 + -0x690) = lVar23;
        lVar24 = *(long *)(param_4[1] + 8);
        if (param_4[2][0] == '\0') {
          lVar24 = lVar19;
        }
        uVar18 = FUN_10727b470(lVar24,pauVar8,param_4[3] + 8);
        *(undefined8 *)((long)ppuVar6 + -0x6b8) = uVar18;
        uVar18 = FUN_10727b2f8(lVar24);
        *(undefined8 *)((long)ppuVar6 + -0x6c0) = uVar18;
        *(undefined1 **)((long)ppuVar6 + -0x5e8) = (undefined1 *)((long)ppuVar6 + -0x6c0);
        *(undefined1 (**) [16])((long)ppuVar6 + -0x5e0) = param_4;
        *(undefined1 **)((long)ppuVar6 + -0x5d8) = (undefined1 *)((long)ppuVar6 + -0x6b0);
        *(undefined1 **)((long)ppuVar6 + -0x5d0) = (undefined1 *)((long)ppuVar6 + -0x6b8);
        *(undefined1 **)((long)ppuVar6 + -0x5c8) = (undefined1 *)((long)ppuVar6 + -0x6b0);
        *(undefined1 **)((long)ppuVar6 + -0x5c0) = (undefined1 *)((long)ppuVar6 + -0x6c0);
        *(undefined1 (**) [16])((long)ppuVar6 + -0x5b8) = param_4;
        *(undefined1 **)((long)ppuVar6 + -0x5b0) = (undefined1 *)((long)ppuVar6 + -0x6b8);
        func_0x000107280f84(*(undefined4 *)param_4[1]);
        *(undefined1 **)((long)ppuVar6 + -0x770) = (undefined1 *)((long)ppuVar6 + -0x5e8);
        func_0x000107285b48(*(undefined4 *)param_4[1]);
        (*(code *)(&PTR_DAT_110997258)[extraout_x8_01])
                  ((undefined1 *)((long)ppuVar6 + -0x700),(undefined1 *)((long)ppuVar6 + -0x770),
                   param_4);
        FUN_10728109c((undefined1 *)((long)ppuVar6 + -0x720),pauVar8[0x46] + 8);
        *(undefined1 (**) [16])((long)ppuVar6 + -0x708) = pauVar8;
        puVar16 = (undefined1 *)((long)ppuVar6 + -0x568);
        FUN_10724cbe8((undefined1 *)((long)ppuVar6 + -0x568),param_5 + 0xf0);
        *(undefined8 *)((long)ppuVar6 + -0x540) = *(undefined8 *)((long)ppuVar6 + -0x718);
        *(undefined8 *)((long)ppuVar6 + -0x548) = *(undefined8 *)((long)ppuVar6 + -0x720);
        *(undefined8 *)((long)ppuVar6 + -0x720) = 0;
        *(undefined8 *)((long)ppuVar6 + -0x718) = 0;
        *(undefined8 *)((long)ppuVar6 + -0x538) = *(undefined8 *)((long)ppuVar6 + -0x710);
        *(undefined1 (**) [16])((long)ppuVar6 + -0x530) = pauVar8;
        *(undefined1 **)((long)ppuVar6 + -0x770) = puVar16;
        *(undefined1 **)((long)ppuVar6 + -0x768) = puVar16;
        *(undefined1 (**) [16])((long)ppuVar6 + -0x760) = pauVar8;
        *(undefined1 **)((long)ppuVar6 + -0x758) = (undefined1 *)((long)ppuVar6 + -0x6b0);
        *(undefined1 **)((long)ppuVar6 + -0x750) = (undefined1 *)((long)ppuVar6 + -0x700);
        *(undefined1 **)((long)ppuVar6 + -0x748) = (undefined1 *)((long)ppuVar6 + -0x680);
        *(undefined1 **)((long)ppuVar6 + -0x740) = puVar16;
        *(undefined1 **)((long)ppuVar6 + -0x738) = (undefined1 *)((long)ppuVar6 + -0x6b0);
        *(undefined1 **)((long)ppuVar6 + -0x730) = (undefined1 *)((long)ppuVar6 + -0x700);
        *(undefined1 **)((long)ppuVar6 + -0x728) = puVar16;
        uVar2 = *(uint *)(param_5 + 0xe8);
        uVar7 = uVar2 == 0xffffffff;
        if ((bool)uVar7) {
          func_0x00010563ab98();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10727b174);
          (*pcVar5)();
        }
        *(undefined1 **)((long)ppuVar6 + -0x5f0) = (undefined1 *)((long)ppuVar6 + -0x770);
        (*(code *)(&PTR_FUN_110997268)[uVar2])
                  ((undefined1 *)((long)ppuVar6 + -0x5e8),(undefined1 *)((long)ppuVar6 + -0x5f0),
                   param_5 + 8);
        puVar13 = (undefined1 *)((long)ppuVar6 + -0x700);
        func_0x00010740e2d0(*(undefined8 *)(*pauVar8 + 8),puVar13,
                            (undefined1 *)((long)ppuVar6 + -0x5e8),
                            (undefined1 *)((long)ppuVar6 + -0x6d8));
        FUN_107282cb8((undefined1 *)((long)ppuVar6 + -0x5e8));
        FUN_10727b578((undefined1 *)((long)ppuVar6 + -0x568));
        puVar10 = (undefined1 *)((long)ppuVar6 + -0x720);
        func_0x00010725b1d4();
        func_0x0001072854dc(*(undefined8 *)((long)ppuVar6 + -0x528));
        if ((bool)uVar7) {
          return;
        }
        ___stack_chk_fail();
        FUN_107282cb8((undefined1 *)((long)ppuVar6 + -0x5e8));
        FUN_10727b578((undefined1 *)((long)ppuVar6 + -0x568));
        puVar11 = (undefined1 *)((long)ppuVar6 + -0x720);
        func_0x00010725b1d4();
        func_0x00010728561c();
        *(undefined8 *)((long)ppuVar6 + -0x7b0) = unaff_x28;
        *(undefined8 *)((long)ppuVar6 + -0x7a8) = unaff_x27;
        *(undefined1 **)((long)ppuVar6 + -0x7a0) = (undefined1 *)((long)ppuVar6 + -0x700);
        *(undefined1 **)((long)ppuVar6 + -0x798) = puVar16;
        *(undefined1 **)((long)ppuVar6 + -0x790) = param_5;
        *(undefined1 **)((long)ppuVar6 + -0x788) = puVar10;
        *(undefined1 **)((long)ppuVar6 + -0x780) = (undefined1 *)((long)ppuVar6 + -0x4e0);
        *(code **)((long)ppuVar6 + -0x778) = FUN_10727b1b0;
        puVar14 = (undefined1 *)((long)ppuVar6 + -0xa10);
        puVar16 = (undefined1 *)((long)ppuVar6 + -0xa10);
        puVar10 = (undefined1 *)((long)ppuVar6 + -0xa10);
        func_0x000107285528();
        *(undefined8 *)((long)ppuVar6 + -0x7b8) = extraout_x8_02;
        uVar7 = puVar11[0x30] == '\x01';
        if (((bool)uVar7) && (*(long *)(puVar11 + 8) != 0)) {
          func_0x000107285b9c();
          func_0x000107277f30((undefined1 *)((long)ppuVar6 + -0xa10));
          func_0x0001072859d8((undefined1 *)((long)ppuVar6 + -0xa00));
          func_0x000107285adc((undefined1 *)((long)ppuVar6 + -0x9e8));
          param_5 = (undefined1 *)((long)ppuVar6 + -0x9d0);
          FUN_10727e230((undefined1 *)((long)ppuVar6 + -0x9d0));
          func_0x0001072858d8();
          func_0x0001072858d0();
          FUN_10727e274();
          puVar11 = puVar16;
          puVar13 = puVar14;
        }
        func_0x0001072854dc(*(undefined8 *)((long)ppuVar6 + -0x7b8));
        if ((bool)uVar7) {
          return;
        }
        ___stack_chk_fail();
        func_0x0001072858d0();
        FUN_10727e274();
        func_0x00010728561c();
        if (puVar10[0x30] == '\x01') {
          *(undefined1 **)((long)ppuVar6 + -0xa30) = param_5;
          *(undefined1 **)((long)ppuVar6 + -0xa28) = puVar11;
          *(undefined1 **)((long)ppuVar6 + -0xa20) = (undefined1 *)((long)ppuVar6 + -0x780);
          *(code **)((long)ppuVar6 + -0xa18) = FUN_10727b280;
          if ((*(long *)(puVar10 + 8) != 0) && (*(int *)(puVar10 + 0x430) != 0)) {
            *(undefined1 **)((long)ppuVar6 + -0xa58) = puVar10;
            *(undefined1 **)((long)ppuVar6 + -0xa50) = puVar13;
            *(undefined1 **)((long)ppuVar6 + -0xa48) = puVar10;
            *(undefined1 **)((long)ppuVar6 + -0xa40) = puVar13;
            FUN_10727e2a4(puVar10 + 0x220);
            *(undefined1 **)((long)ppuVar6 + -0xa38) = (undefined1 *)((long)ppuVar6 + -0xa58);
            func_0x000107285b48(*(undefined4 *)(puVar10 + 0x430));
            (*(code *)(&PTR_FUN_110996e88)[extraout_x8_03])
                      ((undefined1 *)((long)ppuVar6 + -0xa38),puVar10 + 0x228);
          }
        }
        return;
      }
    }
    else {
      auVar20 = ZEXT216(0);
      if (pauVar9[5][0] == 0) goto LAB_10727ae00;
    }
    uVar18 = 0x10727adf0;
    ppuVar6 = (undefined1 **)((long)ppuVar6 + -0x4d0);
    param_3 = pauVar9 + 4;
    param_6 = pauVar15;
    unaff_x19 = puVar16;
  } while( true );
}



/* Entry: 10727ac8c; end: 10727af7f;  */

void FUN_10727ac8c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined1 (*param_4) [16],
                  undefined1 *param_5,long param_6)

{
  byte bVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  code *pcVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 extraout_var;
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  long lVar21;
  undefined1 *puStack_a48;
  undefined1 *puStack_a40;
  undefined1 *puStack_a38;
  undefined1 *puStack_a30;
  undefined1 **ppuStack_a28;
  undefined1 *puStack_a20;
  undefined8 *puStack_a18;
  undefined1 ***pppuStack_a10;
  code *pcStack_a08;
  undefined8 auStack_a00 [2];
  undefined1 auStack_9f0 [24];
  undefined1 auStack_9d8 [24];
  undefined1 auStack_9c0 [536];
  undefined8 uStack_7a8;
  undefined1 **ppuStack_770;
  code *pcStack_768;
  undefined8 **ppuStack_760;
  undefined8 **ppuStack_758;
  ulong uStack_750;
  undefined8 *puStack_748;
  undefined1 *puStack_740;
  undefined8 *puStack_738;
  undefined8 **ppuStack_730;
  undefined8 *puStack_728;
  undefined1 *puStack_720;
  undefined8 **ppuStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  ulong uStack_6f8;
  undefined1 auStack_6f0 [40];
  undefined1 auStack_6c8 [24];
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 auStack_6a0 [2];
  long lStack_690;
  long lStack_688;
  long lStack_680;
  undefined8 auStack_670 [2];
  undefined1 uStack_660;
  undefined8 uStack_618;
  undefined1 uStack_610;
  long lStack_608;
  char cStack_600;
  long lStack_5f8;
  char cStack_5f0;
  undefined1 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined1 (*pauStack_5d0) [16];
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined1 (*pauStack_5a8) [16];
  undefined8 *puStack_5a0;
  undefined8 *apuStack_558 [4];
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  ulong uStack_520;
  undefined8 uStack_518;
  undefined1 *puStack_4d0;
  code *pcStack_4c8;
  long alStack_4c0 [2];
  undefined4 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 uStack_4a0;
  undefined8 uStack_498;
  undefined1 uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined1 uStack_478;
  undefined7 uStack_477;
  long *aplStack_470 [3];
  undefined1 uStack_458;
  undefined4 uStack_3b0;
  undefined1 auStack_3a8 [272];
  undefined1 uStack_298;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [8];
  undefined1 uStack_260;
  undefined8 uStack_58;
  
  uVar20 = (undefined4)((ulong)param_2 >> 0x20);
  uVar19 = (undefined4)param_2;
  pauVar10 = (undefined1 (*) [16])alStack_4c0;
  func_0x000107285528();
  uVar5 = *(char *)(param_3 + 0x30) == '\x01';
  uVar6 = param_3;
  pauVar7 = param_4;
  puVar13 = param_5;
  lVar21 = CONCAT44(uVar20,uVar19);
  uStack_58 = extraout_x8;
  if ((!(bool)uVar5) || (lVar21 = CONCAT44(uVar20,uVar19), *(long *)(param_3 + 8) == 0))
  goto LAB_10727aed0;
  uVar5 = 0;
  if (*(char *)(param_6 + 0x18) == '\x01') {
    func_0x00010549026c();
    uVar5 = 0;
    if (*(char *)(param_3 + 0x30) == '\x01') {
      func_0x0001077c3898(&uStack_478,*(undefined8 *)(**(long **)(param_3 + 8) + 0x10f8));
      plVar3 = aplStack_470[0];
      for (plVar15 = (long *)CONCAT71(uStack_477,uStack_478); plVar17 = plVar3, plVar15 != plVar3;
          plVar15 = plVar15 + 1) {
        if (*plVar15 != 0) {
          func_0x000107781c60(&uStack_270);
          puVar14 = &uStack_270;
          FUN_107283140(puVar14,param_6);
          func_0x000107285944();
          plVar17 = plVar15;
          if (((ulong)puVar14 & 1) != 0) break;
        }
      }
      uVar5 = plVar17 == aplStack_470[0];
      if (!(bool)uVar5) {
        func_0x000107781d30(alStack_4c0,*plVar17);
        plVar15 = *(long **)(alStack_4c0[0] + 0x10);
        func_0x000100060964(&uStack_270,&UNK_10f406e32);
        for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
          uVar6 = (ulong)(plVar15 + 2);
          pauVar7 = (undefined1 (*) [16])&uStack_270;
          func_0x000104c32db4();
          if ((uVar6 & 1) != 0) {
            func_0x000107285944();
            func_0x000107285c14();
            func_0x000107285c0c();
            lVar21 = CONCAT44(uVar20,uVar19);
            goto LAB_10727aed0;
          }
        }
        func_0x000107285944();
        func_0x000107285c14();
      }
      func_0x000107285c0c();
    }
  }
  if (((param_4[1][0] & 1) == 0) && ((param_4[5][0] & 1) == 0)) {
    uStack_478 = 0;
    uStack_458 = 0;
    func_0x00010740e07c(&uStack_270,*(undefined8 *)(param_3 + 8),&uStack_478);
    if ((param_4[5][0] & 1) == 0) {
      auVar18._0_8_ = func_0x000107285730(uStack_260,uStack_270);
      auVar18._8_8_ = extraout_var;
      goto LAB_10727ae00;
    }
LAB_10727ade8:
    pauVar7 = param_4 + 4;
    func_0x00010727ac74();
    lVar21 = CONCAT44(uVar20,uVar19);
    alStack_4c0[0] = *(long *)*pauVar7;
    alStack_4c0[1] = *(long *)(*pauVar7 + 8);
    uStack_4b0 = 1;
  }
  else {
    auVar18 = ZEXT216(0);
    if (param_4[5][0] != 0) goto LAB_10727ade8;
LAB_10727ae00:
    uStack_4b0 = 0;
    bVar1 = param_4[1][0];
    lVar21 = -(ulong)((long)((ulong)CONCAT14(bVar1,(uint)bVar1) << 0x3f) < 0);
    auVar2._8_8_ = -(ulong)((long)((ulong)bVar1 << 0x3f) < 0);
    auVar2._0_8_ = lVar21;
    auVar18 = auVar18 ^ (auVar18 ^ *param_4) & auVar2;
    alStack_4c0[1] = auVar18._8_8_;
    alStack_4c0[0] = auVar18._0_8_;
  }
  uStack_4a8 = *(undefined8 *)(param_4[5] + 8);
  uStack_4a0 = param_4[6][0];
  uStack_498 = *(undefined8 *)(param_4[6] + 8);
  uStack_490 = param_4[7][0];
  uStack_488 = *(undefined8 *)(param_4[7] + 8);
  uStack_480 = param_4[8][0];
  _memcpy(aplStack_470,alStack_4c0,0x48);
  uStack_3b0 = 0;
  FUN_10727d474(auStack_3a8,param_5);
  uStack_298 = 0;
  uStack_278 = 0;
  func_0x00010727d7bc(&uStack_270,&uStack_478);
  FUN_10727da94(param_3 + 0x228,auStack_268);
  FUN_10727d368(auStack_268);
  func_0x00010727e204(&uStack_478);
  if ((*(byte *)(**(long **)(param_3 + 8) + 0xb7) & 1) == 0) {
    puVar16 = *(undefined8 **)(param_3 + 0x440);
    for (puVar14 = *(undefined8 **)(param_3 + 0x438); uVar5 = puVar14 == puVar16, !(bool)uVar5;
        puVar14 = puVar14 + 2) {
      (**(code **)(*(long *)*puVar14 + 0x10))();
    }
  }
  FUN_10727af80();
  uVar6 = param_3;
  pauVar7 = pauVar10;
  puVar13 = param_5;
LAB_10727aed0:
  func_0x0001072854dc(uStack_58);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = uVar6;
  func_0x000107285c14();
  func_0x000107285c0c();
  func_0x00010728561c();
  pcStack_4c8 = FUN_10727af80;
  puStack_4d0 = &stack0xfffffffffffffff0;
  func_0x000107285514();
  puStack_5d8 = (undefined8 *)((ulong)puStack_5d8 & 0xffffffffffffff00);
  puStack_5b8 = (undefined8 *)((ulong)puStack_5b8 & 0xffffffffffffff00);
  uStack_518 = extraout_x8_00;
  func_0x00010740e07c(auStack_670,*(undefined8 *)(uVar8 + 8),&puStack_5d8);
  auStack_6a0[0] = func_0x000107285730(uStack_660,auStack_670[0]);
  lStack_690 = func_0x000107285d3c(uStack_610,uStack_618);
  if ((bool)uVar5) {
    lStack_690 = lVar21;
  }
  lStack_688 = lStack_608;
  if (cStack_600 == '\0') {
    lStack_688 = lVar21;
  }
  lStack_680 = lStack_5f8;
  if (cStack_5f0 == '\0') {
    lStack_680 = lVar21;
  }
  lVar21 = *(long *)(pauVar7[1] + 8);
  if (pauVar7[2][0] == '\0') {
    lVar21 = lStack_690;
  }
  uStack_6a8 = FUN_10727b470(lVar21,uVar6,pauVar7[3] + 8);
  uStack_6b0 = FUN_10727b2f8(lVar21);
  puStack_5d8 = &uStack_6b0;
  puStack_5c8 = auStack_6a0;
  puStack_5c0 = &uStack_6a8;
  pauStack_5d0 = pauVar7;
  puStack_5b8 = puStack_5c8;
  puStack_5b0 = puStack_5d8;
  pauStack_5a8 = pauVar7;
  puStack_5a0 = puStack_5c0;
  func_0x000107280f84(*(undefined4 *)pauVar7[1]);
  ppuStack_760 = &puStack_5d8;
  func_0x000107285b48(*(undefined4 *)pauVar7[1]);
  (*(code *)(&PTR_DAT_110997258)[extraout_x8_01])(auStack_6f0,&ppuStack_760,pauVar7);
  FUN_10728109c(&uStack_710,uVar6 + 0x468);
  uStack_6f8 = uVar6;
  FUN_10724cbe8(apuStack_558,puVar13 + 0xf0);
  uStack_530 = uStack_708;
  uStack_538 = uStack_710;
  uStack_710 = 0;
  uStack_708 = 0;
  uStack_528 = uStack_700;
  puStack_748 = auStack_6a0;
  puStack_740 = auStack_6f0;
  puStack_738 = auStack_670;
  uVar5 = *(uint *)(puVar13 + 0xe8) == 0xffffffff;
  ppuStack_760 = apuStack_558;
  ppuStack_758 = apuStack_558;
  uStack_750 = uVar6;
  ppuStack_730 = apuStack_558;
  puStack_728 = puStack_748;
  puStack_720 = puStack_740;
  ppuStack_718 = apuStack_558;
  uStack_520 = uVar6;
  if ((bool)uVar5) {
    func_0x00010563ab98();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10727b174);
    (*pcVar4)();
  }
  puStack_5e0 = (undefined1 *)&ppuStack_760;
  (*(code *)(&PTR_FUN_110997268)[*(uint *)(puVar13 + 0xe8)])(&puStack_5d8,&puStack_5e0,puVar13 + 8);
  puVar11 = auStack_6f0;
  func_0x00010740e2d0(*(undefined8 *)(uVar6 + 8),puVar11,&puStack_5d8,auStack_6c8);
  FUN_107282cb8(&puStack_5d8);
  FUN_10727b578(apuStack_558);
  func_0x00010725b1d4();
  func_0x0001072854dc(uStack_518);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  FUN_107282cb8(&puStack_5d8);
  FUN_10727b578(apuStack_558);
  puVar14 = &uStack_710;
  func_0x00010725b1d4();
  func_0x00010728561c();
  pcStack_768 = FUN_10727b1b0;
  puVar12 = auStack_a00;
  puVar16 = auStack_a00;
  puVar9 = auStack_a00;
  ppuStack_770 = &puStack_4d0;
  func_0x000107285528();
  uVar5 = *(char *)(puVar14 + 6) == '\x01';
  uStack_7a8 = extraout_x8_02;
  if (((bool)uVar5) && (puVar14[1] != 0)) {
    func_0x000107285b9c();
    func_0x000107277f30(auStack_a00);
    func_0x0001072859d8(auStack_9f0);
    func_0x000107285adc(auStack_9d8);
    puVar13 = auStack_9c0;
    FUN_10727e230(auStack_9c0);
    func_0x0001072858d8();
    func_0x0001072858d0();
    FUN_10727e274();
    puVar14 = puVar16;
    puVar11 = (undefined1 *)puVar12;
  }
  func_0x0001072854dc(uStack_7a8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072858d0();
  FUN_10727e274();
  func_0x00010728561c();
  if (((*(char *)((long)puVar9 + 0x30) == '\x01') &&
      (pcStack_a08 = FUN_10727b280, *(long *)((long)puVar9 + 8) != 0)) &&
     (*(int *)((long)puVar9 + 0x430) != 0)) {
    puStack_a48 = (undefined1 *)puVar9;
    puStack_a40 = puVar11;
    puStack_a38 = (undefined1 *)puVar9;
    puStack_a30 = puVar11;
    puStack_a20 = puVar13;
    puStack_a18 = puVar14;
    pppuStack_a10 = &ppuStack_770;
    FUN_10727e2a4((undefined1 *)((long)puVar9 + 0x220));
    ppuStack_a28 = &puStack_a48;
    func_0x000107285b48(*(undefined4 *)((long)puVar9 + 0x430));
    (*(code *)(&PTR_FUN_110996e88)[extraout_x8_03])
              (&ppuStack_a28,(undefined1 *)((long)puVar9 + 0x228));
  }
  return;
}



/* Entry: 10727af80; end: 10727b1af;  */

void FUN_10727af80(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined1 *param_5)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puStack_588;
  undefined1 *puStack_580;
  undefined1 *puStack_578;
  undefined1 *puStack_570;
  undefined1 **ppuStack_568;
  undefined1 *puStack_560;
  undefined8 *puStack_558;
  undefined1 **ppuStack_550;
  code *pcStack_548;
  undefined8 auStack_540 [2];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [536];
  undefined8 uStack_2e8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_230 [40];
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b0 [16];
  undefined1 uStack_1a0;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  char cStack_140;
  undefined8 uStack_138;
  char cStack_130;
  undefined1 *puStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *apuStack_98 [4];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107285514();
  puStack_118 = (undefined8 *)((ulong)puStack_118 & 0xffffffffffffff00);
  puStack_f8 = (undefined1 *)((ulong)puStack_f8 & 0xffffffffffffff00);
  func_0x00010740e07c(auStack_1b0,*(undefined8 *)(param_3 + 8),&puStack_118);
  func_0x000107285730(uStack_1a0);
  func_0x000107285d3c(uStack_150);
  uStack_1d0 = uStack_158;
  if ((bool)in_ZR) {
    uStack_1d0 = param_2;
  }
  if (cStack_140 == '\0') {
    uStack_148 = param_2;
  }
  if (cStack_130 == '\0') {
    uStack_138 = param_2;
  }
  uVar9 = *(undefined8 *)(param_4 + 0x18);
  if (*(char *)(param_4 + 0x20) == '\0') {
    uVar9 = uStack_1d0;
  }
  uVar8 = uVar9;
  uStack_1c8 = uStack_148;
  uStack_1c0 = uStack_138;
  FUN_10727b470();
  uStack_1e8 = uVar8;
  FUN_10727b2f8();
  puStack_118 = &uStack_1f0;
  puStack_108 = auStack_1e0;
  puStack_100 = &uStack_1e8;
  uStack_1f0 = uVar9;
  lStack_110 = param_4;
  puStack_f8 = puStack_108;
  puStack_f0 = puStack_118;
  lStack_e8 = param_4;
  puStack_e0 = puStack_100;
  func_0x000107280f84(*(undefined4 *)(param_4 + 0x10));
  ppuStack_2a0 = &puStack_118;
  func_0x000107285b48(*(undefined4 *)(param_4 + 0x10));
  (*(code *)(&PTR_DAT_110997258)[extraout_x8_00])(auStack_230,&ppuStack_2a0,param_4);
  FUN_10728109c(&uStack_250,unaff_x19 + 0x468);
  FUN_10724cbe8(apuStack_98,param_5 + 0xf0);
  uStack_70 = uStack_248;
  uStack_78 = uStack_250;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_68 = uStack_240;
  uVar2 = *(uint *)(param_5 + 0xe8) == 0xffffffff;
  ppuStack_2a0 = apuStack_98;
  ppuStack_298 = apuStack_98;
  if ((bool)uVar2) {
    func_0x00010563ab98();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10727b174);
    (*pcVar1)();
  }
  puStack_120 = (undefined1 *)&ppuStack_2a0;
  (*(code *)(&PTR_FUN_110997268)[*(uint *)(param_5 + 0xe8)])(&puStack_118,&puStack_120,param_5 + 8);
  puVar6 = auStack_230;
  func_0x00010740e2d0(*(undefined8 *)(unaff_x19 + 8),puVar6,&puStack_118,auStack_208);
  FUN_107282cb8(&puStack_118);
  FUN_10727b578(apuStack_98);
  func_0x00010725b1d4();
  func_0x0001072854dc(extraout_x8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_107282cb8(&puStack_118);
  FUN_10727b578(apuStack_98);
  puVar3 = &uStack_250;
  func_0x00010725b1d4();
  func_0x00010728561c();
  pcStack_2a8 = FUN_10727b1b0;
  puVar7 = auStack_540;
  puVar4 = auStack_540;
  puVar5 = auStack_540;
  puStack_2b0 = &stack0xfffffffffffffff0;
  func_0x000107285528();
  uVar2 = *(char *)(puVar3 + 6) == '\x01';
  uStack_2e8 = extraout_x8_01;
  if (((bool)uVar2) && (puVar3[1] != 0)) {
    func_0x000107285b9c();
    func_0x000107277f30(auStack_540);
    func_0x0001072859d8(auStack_530);
    func_0x000107285adc(auStack_518);
    param_5 = auStack_500;
    FUN_10727e230(auStack_500);
    func_0x0001072858d8();
    func_0x0001072858d0();
    FUN_10727e274();
    puVar3 = puVar4;
    puVar6 = (undefined1 *)puVar7;
  }
  func_0x0001072854dc(uStack_2e8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001072858d0();
    FUN_10727e274();
    func_0x00010728561c();
    if (((*(char *)((long)puVar5 + 0x30) == '\x01') &&
        (pcStack_548 = FUN_10727b280, *(long *)((long)puVar5 + 8) != 0)) &&
       (*(int *)((long)puVar5 + 0x430) != 0)) {
      puStack_588 = (undefined1 *)puVar5;
      puStack_580 = puVar6;
      puStack_578 = (undefined1 *)puVar5;
      puStack_570 = puVar6;
      puStack_560 = param_5;
      puStack_558 = puVar3;
      ppuStack_550 = &puStack_2b0;
      FUN_10727e2a4((undefined1 *)((long)puVar5 + 0x220));
      ppuStack_568 = &puStack_588;
      func_0x000107285b48(*(undefined4 *)((long)puVar5 + 0x430));
      (*(code *)(&PTR_FUN_110996e88)[extraout_x8_02])
                (&ppuStack_568,(undefined1 *)((long)puVar5 + 0x228));
    }
    return;
  }
  return;
}



/* Entry: 10727b1b0; end: 10727b27f;  */

void FUN_10727b1b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x20;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 **ppuStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [536];
  undefined8 uStack_48;
  
  puVar4 = auStack_2a0;
  puVar2 = auStack_2a0;
  puVar3 = auStack_2a0;
  func_0x000107285528();
  uVar1 = param_1[0x30] == '\x01';
  uStack_48 = extraout_x8;
  if (((bool)uVar1) && (*(long *)(param_1 + 8) != 0)) {
    func_0x000107285b9c();
    func_0x000107277f30(auStack_2a0);
    func_0x0001072859d8(auStack_290);
    func_0x000107285adc(auStack_278);
    unaff_x20 = auStack_260;
    FUN_10727e230(auStack_260);
    func_0x0001072858d8();
    func_0x0001072858d0();
    FUN_10727e274();
    param_1 = puVar2;
    param_2 = puVar4;
  }
  func_0x0001072854dc(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001072858d0();
    FUN_10727e274();
    func_0x00010728561c();
    if (((puVar3[0x30] == '\x01') && (pcStack_2a8 = FUN_10727b280, *(long *)(puVar3 + 8) != 0)) &&
       (*(int *)(puVar3 + 0x430) != 0)) {
      puStack_2e8 = puVar3;
      puStack_2e0 = param_2;
      puStack_2d8 = puVar3;
      puStack_2d0 = param_2;
      puStack_2c0 = unaff_x20;
      puStack_2b8 = param_1;
      puStack_2b0 = &stack0xfffffffffffffff0;
      FUN_10727e2a4(puVar3 + 0x220);
      ppuStack_2c8 = &puStack_2e8;
      func_0x000107285b48(*(undefined4 *)(puVar3 + 0x430));
      (*(code *)(&PTR_FUN_110996e88)[extraout_x8_00])(&ppuStack_2c8,puVar3 + 0x228);
    }
    return;
  }
  return;
}



/* Entry: 10727b280; end: 10727b2f7;  */

void FUN_10727b280(long param_1,undefined8 param_2)

{
  long extraout_x8;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(param_1 + 8) != 0)) &&
     (*(int *)(param_1 + 0x430) != 0)) {
    lStack_48 = param_1;
    uStack_40 = param_2;
    lStack_38 = param_1;
    uStack_30 = param_2;
    FUN_10727e2a4(param_1 + 0x220);
    plStack_28 = &lStack_48;
    func_0x000107285b48(*(undefined4 *)(param_1 + 0x430));
    (*(code *)(&PTR_FUN_110996e88)[extraout_x8])(&plStack_28,param_1 + 0x228);
  }
  return;
}



/* Entry: 10727b2f8; end: 10727b367;  */

double FUN_10727b2f8(double param_1,long param_2)

{
  undefined1 uStack_21;
  
  func_0x00010785f1f4();
  uStack_21 = 0;
  param_2 = param_2 + 0xbb0;
  FUN_10724e2c8(param_2,&uStack_21);
  if ((((int)param_2 != 0) && (ABS(param_1 - (double)(long)param_1) < 1e-06)) && (1.0 <= param_1)) {
    param_1 = param_1 + -0.01;
  }
  return param_1;
}



/* Entry: 10727b368; end: 10727b46f;  */

void FUN_10727b368(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined1 *puStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [88];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  undefined1 *puStack_58;
  
  puStack_140 = (undefined8 *)((ulong)puStack_140 & 0xffffffffffffff00);
  puStack_120 = (undefined1 *)((ulong)puStack_120 & 0xffffffffffffff00);
  func_0x00010740e07c(auStack_e0,*(undefined8 *)(param_4 + 8),&puStack_140);
  func_0x000107285d3c(uStack_80);
  if ((bool)in_ZR) {
    uStack_88 = param_2;
  }
  if (cStack_70 == '\0') {
    uStack_78 = param_2;
  }
  uVar2 = *(undefined8 *)(param_5 + 0x18);
  if (*(char *)(param_5 + 0x20) == '\0') {
    uVar2 = uStack_88;
  }
  uVar1 = uVar2;
  uStack_e8 = uStack_78;
  FUN_10727b470(param_4,param_5 + 0x38);
  uStack_f0 = uVar1;
  FUN_10727b2f8();
  puStack_140 = &uStack_f8;
  puStack_130 = &uStack_e8;
  puStack_128 = &uStack_f0;
  lStack_138 = param_5;
  puStack_120 = auStack_e0;
  puStack_118 = puStack_140;
  lStack_110 = param_5;
  puStack_108 = puStack_130;
  puStack_100 = puStack_128;
  uStack_f8 = uVar2;
  func_0x000107280f84(*(undefined4 *)(param_5 + 0x10));
  puStack_58 = (undefined1 *)&puStack_140;
  func_0x000107285b48(*(undefined4 *)(param_5 + 0x10));
  (*(code *)(&PTR_FUN_110997248)[extraout_x8])(param_3,&puStack_58,param_5);
  return;
}



/* Entry: 10727b470; end: 10727b577;  */

double FUN_10727b470(double param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  
  if (*(char *)(param_3 + 1) == '\x01') {
    FUN_10727ac44();
    dVar6 = *param_3;
    dVar2 = 60.0;
    if (dVar6 <= 60.0) {
      dVar2 = dVar6;
    }
    dVar7 = 0.0;
    if (0.0 <= dVar6) {
      dVar7 = dVar2;
    }
    FUN_10727c0dc(param_2[0x3c],param_2[0x3d]);
    if (ABS(dVar7 - param_1) <= 2.0) {
      pcVar3 = *(code **)((long)*param_2 + 0x90);
      dVar2 = 0.0;
    }
    else {
      pcVar3 = *(code **)((long)*param_2 + 0x90);
      dVar2 = dVar7;
    }
    (*pcVar3)(param_2,dVar2,2.0 < ABS(dVar7 - param_1));
    return dVar7;
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (((*(char *)(param_2 + 0x43) != '\x01') || (param_1 <= param_2[0x41])) ||
       (param_2[0x42] <= param_1)) {
      func_0x000107285c9c();
      return *param_2;
    }
    *(undefined1 *)(param_2 + 0x43) = 0;
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  pdVar1 = (double *)param_2[0x3d];
  for (pdVar4 = (double *)param_2[0x3c];
      (pdVar5 = pdVar1, pdVar4 != pdVar1 && (pdVar5 = pdVar4, *pdVar4 <= param_1));
      pdVar4 = pdVar4 + 2) {
  }
  if (pdVar5 == (double *)param_2[0x3c]) {
    return 0.0;
  }
  if (pdVar5 == pdVar1) {
    return pdVar1[-1];
  }
  return pdVar5[-1] + ((param_1 - pdVar5[-2]) / (*pdVar5 - pdVar5[-2])) * (pdVar5[1] - pdVar5[-1]);
}



/* Entry: 10727b578; end: 10727b59b;  */

void FUN_10727b578(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x000107285ba8();
  func_0x00010725b1d4();
  plVar1 = (long *)unaff_x19[3];
  if (plVar1 == unaff_x19) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 10727b59c; end: 10727b5b7;  */

void FUN_10727b59c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x20;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 **ppuStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [536];
  undefined8 uStack_48;
  
  if ((param_1[0x30] != '\x01') || (*(long *)(param_1 + 8) == 0)) {
    return;
  }
  puVar4 = auStack_2a0;
  puVar2 = auStack_2a0;
  puVar3 = auStack_2a0;
  func_0x000107285528();
  uVar1 = param_1[0x30] == '\x01';
  uStack_48 = extraout_x8;
  if (((bool)uVar1) && (*(long *)(param_1 + 8) != 0)) {
    func_0x000107285b9c();
    func_0x000107277f30(auStack_2a0);
    func_0x0001072859d8(auStack_290);
    func_0x000107285adc(auStack_278);
    unaff_x20 = auStack_260;
    FUN_10727e230(auStack_260);
    func_0x0001072858d8();
    func_0x0001072858d0();
    FUN_10727e274();
    param_1 = puVar2;
    param_2 = puVar4;
  }
  func_0x0001072854dc(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001072858d0();
    FUN_10727e274();
    func_0x00010728561c();
    if (((puVar3[0x30] == '\x01') && (pcStack_2a8 = FUN_10727b280, *(long *)(puVar3 + 8) != 0)) &&
       (*(int *)(puVar3 + 0x430) != 0)) {
      puStack_2e8 = puVar3;
      puStack_2e0 = param_2;
      puStack_2d8 = puVar3;
      puStack_2d0 = param_2;
      puStack_2c0 = unaff_x20;
      puStack_2b8 = param_1;
      puStack_2b0 = &stack0xfffffffffffffff0;
      FUN_10727e2a4(puVar3 + 0x220);
      ppuStack_2c8 = &puStack_2e8;
      func_0x000107285b48(*(undefined4 *)(puVar3 + 0x430));
      (*(code *)(&PTR_FUN_110996e88)[extraout_x8_00])(&ppuStack_2c8,puVar3 + 0x228);
    }
    return;
  }
  return;
}



/* Entry: 10727b5b8; end: 10727b64f;  */

void FUN_10727b5b8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006392cc();
  if (*(int *)(param_2 + 0xf0) == 0) {
    func_0x000107283b38(unaff_x19 + 8,unaff_x20 + 8);
  }
  else if (*(int *)(param_2 + 0xf0) == 1) {
    func_0x000107283b64();
  }
  else {
    func_0x000107283b98(unaff_x19 + 8,unaff_x20 + 8);
  }
  func_0x00010727b614(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  return;
}



/* Entry: 10727b650; end: 10727bd1b;  */

void FUN_10727b650(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar5;
  undefined1 auStack_588 [24];
  undefined1 auStack_570 [24];
  long lStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined8 uStack_508;
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [24];
  undefined *puStack_4c8;
  undefined1 auStack_4c0 [16];
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long alStack_498 [2];
  undefined1 auStack_488 [24];
  undefined8 *puStack_470;
  undefined1 auStack_468 [24];
  undefined8 *puStack_450;
  undefined **ppuStack_448;
  undefined1 *puStack_440;
  undefined1 *puStack_438;
  undefined ***pppuStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 auStack_418 [4];
  undefined4 uStack_414;
  undefined4 uStack_410;
  long lStack_408;
  long lStack_400;
  long *plStack_3f8;
  undefined2 uStack_380;
  undefined1 uStack_378;
  undefined1 uStack_368;
  undefined8 uStack_360;
  undefined **ppuStack_358;
  undefined1 *puStack_350;
  undefined1 *puStack_348;
  undefined ***pppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 auStack_328 [184];
  undefined4 uStack_270;
  undefined1 auStack_268 [168];
  undefined1 auStack_1c0 [136];
  undefined1 auStack_138 [32];
  undefined **ppuStack_118;
  long lStack_110;
  undefined ***pppuStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [24];
  undefined8 *puStack_a8;
  undefined8 uStack_68;
  
  func_0x000107285528();
  uVar1 = *(char *)(param_1 + 0x30) == '\x01';
  uStack_68 = extraout_x8;
  if (((bool)uVar1) && (*(long *)(param_1 + 8) != 0)) {
    ppuStack_118 = &PTR_FUN_1109978a0;
    pppuStack_100 = &ppuStack_118;
    lStack_110 = param_1;
    FUN_107282f0c(auStack_1c0,param_6);
    FUN_10724cbe8(&ppuStack_448,param_6 + 0x88);
    FUN_10724cbe8(&uStack_428,&ppuStack_118);
    lStack_408 = param_1 + 0x450;
    lStack_400 = param_1 + 0x38;
    puVar2 = &uStack_360;
    plStack_3f8 = (long *)(param_1 + 8);
    FUN_107285160(puVar2,&ppuStack_448);
    func_0x000107285a34();
    *puVar2 = &PTR_FUN_110997c00;
    FUN_107285160(puVar2 + 1,&uStack_360);
    puStack_a8 = puVar2;
    FUN_10724cacc(auStack_c0,auStack_138);
    func_0x0001006393ec(auStack_c0);
    FUN_10727c148(&uStack_360);
    FUN_10727c148(&ppuStack_448);
    func_0x0001006393ec(&ppuStack_118);
    func_0x000107285adc(&ppuStack_448);
    func_0x0001072859d8(&pppuStack_430);
    auStack_418[0] = *param_4;
    uStack_410 = 0;
    uStack_414 = 0;
    func_0x000107285c58(&lStack_408,param_5);
    puStack_348 = puStack_438;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_368 = 0;
    puStack_350 = puStack_440;
    ppuStack_358 = ppuStack_448;
    ppuStack_448 = (undefined **)0x0;
    puStack_440 = (undefined1 *)0x0;
    puStack_438 = (undefined1 *)0x0;
    uStack_338 = uStack_428;
    pppuStack_340 = pppuStack_430;
    uStack_330 = uStack_420;
    uStack_428 = 0;
    uStack_420 = 0;
    pppuStack_430 = (undefined ***)0x0;
    _memcpy(auStack_328,auStack_418,0xb1);
    uStack_270 = 2;
    FUN_107282f0c(auStack_268,auStack_1c0);
    FUN_107282fac(&ppuStack_448);
    FUN_10727bd1c(param_1,&uStack_360);
    plVar5 = *(long **)(param_1 + 0x20);
    func_0x000107285adc(auStack_4f8);
    func_0x0001072859d8(auStack_4e0);
    puStack_450 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    *puVar2 = &PTR_SUB_110997ae0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2 + 1,auStack_4f8)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2 + 4,auStack_4e0)
    ;
    puStack_450 = puVar2;
    func_0x0001072859d8(auStack_588);
    func_0x000107285adc(auStack_570);
    lStack_558 = param_1;
    FUN_10728109c(&uStack_550,param_1 + 0x468);
    FUN_107282fc8(auStack_538,auStack_588);
    puStack_470 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)0x58;
    __Znwm();
    *puVar2 = &PTR_SUB_110997b70;
    puVar2[2] = uStack_548;
    puVar2[1] = uStack_550;
    uStack_550 = 0;
    uStack_548 = 0;
    puVar2[3] = uStack_540;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2 + 4,auStack_538)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2 + 7,auStack_520)
    ;
    puVar2[10] = uStack_508;
    puStack_470 = puVar2;
    if ((*(byte *)(plVar5 + 1) & 1) == 0) {
      plVar3 = plVar5;
      (**(code **)(*plVar5 + 0x10))();
      if ((int)plVar3 == 0) {
        lStack_4a8 = plVar5[4];
        lStack_4b0 = plVar5[3];
        if (plVar5[4] != 0) {
          do {
            func_0x0001072859c0();
          } while (extraout_w10 != 0);
        }
        lStack_4a0 = plVar5[5];
        (**(code **)(*plVar5 + 0x20))(&puStack_4c8,plVar5);
        func_0x000107284784(&ppuStack_118,auStack_468);
        lStack_f0 = lStack_4a8;
        lStack_f8 = lStack_4b0;
        if (lStack_4a8 != 0) {
          do {
            func_0x0001072859c0();
          } while (extraout_w10_00 != 0);
        }
        lStack_e8 = lStack_4a0;
        func_0x0001072847c4(auStack_e0,auStack_488);
        FUN_10724bb70(alStack_498,auStack_4c0);
        if (alStack_498[0] != 0) {
          FUN_107283e5c(auStack_c0,&ppuStack_118);
          ppuVar4 = (undefined **)0x78;
          __Znwm();
          FUN_107283e5c(&ppuStack_448,auStack_c0);
          *ppuVar4 = (undefined *)&PTR_FUN_1109979a0;
          ppuVar4[1] = puStack_4c8;
          ppuVar4[3] = (undefined *)0x1;
          ppuVar4[2] = (undefined *)0x38;
          FUN_107283e5c(ppuVar4 + 4,&ppuStack_448);
          func_0x000107284804(&ppuStack_448);
          ppuStack_448 = ppuVar4;
          func_0x000107284804(auStack_c0);
          func_0x0001073ae140(alStack_498[0],&ppuStack_448);
          ppuVar4 = ppuStack_448;
          ppuStack_448 = (undefined **)0x0;
          if (ppuVar4 != (undefined **)0x0) {
            func_0x000107285be0();
          }
        }
        func_0x00010724bcd8(alStack_498);
        func_0x000107284804(&ppuStack_118);
        FUN_10724ae28(auStack_4c0);
        func_0x00010725b1d4(&lStack_4b0);
      }
      else {
        (**(code **)(*plVar5 + 0x18))();
        if (plVar5 != (long *)0x0) {
          puStack_440 = auStack_488;
          ppuStack_448 = &PTR_DAT_110997920;
          puStack_438 = auStack_468;
          pppuStack_430 = &ppuStack_448;
          (**(code **)(*plVar5 + 0x38))();
          func_0x000107283e00(&ppuStack_448);
        }
      }
    }
    FUN_10728512c(auStack_488);
    FUN_10727bd88(&uStack_550);
    func_0x00010727bdb0(auStack_588);
    func_0x000107284e14(auStack_468);
    func_0x00010727bdcc(auStack_4f8);
    FUN_107283000(&uStack_360);
    func_0x000107285c68();
  }
  else if (*(long *)(param_6 + 0xa0) != 0) {
    func_0x0001072854dc(extraout_x8);
    if ((bool)uVar1) {
      if (*(long **)(param_6 + 0xa0) == (long *)0x0) {
        func_0x000104bfeb48();
        func_0x000104c00420();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_6 + 0xa0) + 0x30))();
      return;
    }
    goto LAB_10727bb24;
  }
  func_0x0001072854dc(uStack_68);
  if ((bool)uVar1) {
    return;
  }
LAB_10727bb24:
  ___stack_chk_fail();
  ppuVar4 = ppuStack_448;
  ppuStack_448 = (undefined **)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    func_0x000107285be0();
  }
  func_0x00010724bcd8(alStack_498);
  func_0x000107284804(&ppuStack_118);
  FUN_10724ae28(auStack_4c0);
  func_0x00010725b1d4(&lStack_4b0);
  FUN_10728512c(auStack_488);
  FUN_10727bd88(&uStack_550);
  func_0x00010727bdb0(auStack_588);
  func_0x000107284e14(auStack_468);
  func_0x00010727bdcc(auStack_4f8);
  FUN_107283000(&uStack_360);
  func_0x000107285c68();
  do {
    func_0x00010728561c();
    func_0x0001006393ec(&ppuStack_118);
  } while( true );
}



/* Entry: 10727bd1c; end: 10727bd87;  */

long * FUN_10727bd1c(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  func_0x0001072856b0();
  if (((*(byte *)(param_1 + 0x1d8) & 1) == 0) &&
     (plVar1 = unaff_x20, (**(code **)(*unaff_x20 + 0x68))(), ((ulong)plVar1 & 1) == 0)) {
    puVar3 = (undefined8 *)unaff_x20[0x88];
    for (puVar2 = (undefined8 *)unaff_x20[0x87]; puVar2 != puVar3; puVar2 = puVar2 + 2) {
      func_0x0001072856d8(*puVar2);
    }
  }
  func_0x00010740e044(unaff_x20[1]);
  if ((char)unaff_x20[0x3b] == '\x01') {
    FUN_10727b5b8();
  }
  else {
    FUN_107283290();
  }
  return unaff_x20 + 7;
}



/* Entry: 10727bd88; end: 10727bde7;  */

undefined8 FUN_10727bd88(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010727bdb0(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10727bde8; end: 10727bdf3;  */

undefined1  [16] FUN_10727bde8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x1f8);
}



/* Entry: 10727bdf4; end: 10727bfef;  */

void FUN_10727bdf4(long param_1,double param_2,uint param_3)

{
  double *pdVar1;
  long lVar2;
  double ***pppdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double **ppdVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_148 [32];
  undefined1 uStack_128;
  double **ppdStack_120;
  undefined1 uStack_118;
  double dStack_c8;
  char cStack_c0;
  double *pdStack_98;
  double *pdStack_90;
  undefined8 uStack_88;
  
  if ((param_3 & 1) == 0) {
    if (*(char *)(param_1 + 0x200) == '\x01') {
      *(undefined1 *)(param_1 + 0x200) = 0;
    }
    if (*(char *)(param_1 + 0x218) == '\x01') {
      *(undefined1 *)(param_1 + 0x218) = 0;
    }
  }
  else {
    dVar11 = 0.0;
    if (0.0 <= param_2) {
      dVar11 = param_2;
    }
    *(double *)(param_1 + 0x1f8) = dVar11;
    *(undefined1 *)(param_1 + 0x200) = 1;
    pdStack_98 = (double *)0x0;
    pdStack_90 = (double *)0x0;
    uStack_88 = 0;
    pdVar5 = *(double **)(param_1 + 0x1e0);
    pdVar1 = *(double **)(param_1 + 0x1e8);
    ppdStack_120 = &pdStack_98;
    uStack_118 = 0;
    lVar2 = (long)pdVar1 - (long)pdVar5;
    if (lVar2 != 0) {
      FUN_10727d234(&pdStack_98,lVar2 >> 4);
      for (; pdVar5 != pdVar1; pdVar5 = pdVar5 + 2) {
        dVar11 = *pdVar5;
        pdStack_90[1] = pdVar5[1];
        *pdStack_90 = dVar11;
        pdStack_90 = pdStack_90 + 2;
      }
    }
    uStack_118 = 1;
    pppdVar3 = &ppdStack_120;
    FUN_10727d2b8();
    pdVar1 = pdStack_90;
    for (pdVar5 = pdStack_98;
        (pdVar4 = pdVar1, pdVar5 != pdVar1 &&
        (func_0x000107285c9c(), pdVar4 = pdVar5, pdVar5[1] <= (double)*pppdVar3));
        pdVar5 = pdVar5 + 2) {
    }
    if ((pdVar4 == pdStack_90) || (pdVar4 == pdStack_98)) {
      if (*(char *)(param_1 + 0x218) == '\x01') {
        *(undefined1 *)(param_1 + 0x218) = 0;
      }
    }
    else {
      dVar6 = *pdVar4;
      dVar8 = pdVar4[1];
      dVar7 = pdVar4[-2];
      dVar9 = pdVar4[-1];
      func_0x000107285c9c();
      ppdVar10 = *pppdVar3;
      dVar11 = pdVar4[-2];
      dVar12 = pdVar4[-1];
      auStack_148[0] = 0;
      uStack_128 = 0;
      func_0x00010740e07c(&ppdStack_120,*(undefined8 *)(param_1 + 8),auStack_148);
      dVar11 = dVar11 + (((double)ppdVar10 - dVar12) / (dVar8 - dVar9)) * (dVar6 - dVar7);
      if (cStack_c0 == '\0') {
        dStack_c8 = 0.0;
      }
      if (dVar11 <= dStack_c8) {
        *(undefined8 *)(param_1 + 0x208) = 0;
        *(double *)(param_1 + 0x210) = dVar11;
      }
      else {
        *(double *)(param_1 + 0x208) = dVar11;
        *(undefined8 *)(param_1 + 0x210) = 0x4039000000000000;
      }
      if ((*(byte *)(param_1 + 0x218) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x218) = 1;
      }
    }
    FUN_10727d3c0(&pdStack_98);
  }
  return;
}



/* Entry: 10727bff0; end: 10727c007;  */

ulong * FUN_10727bff0(ulong *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  int iVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong *puStack_90;
  ulong *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((param_1[1] & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  uVar4 = *param_2;
  lVar5 = param_2[1];
  puVar10 = param_1 + 0x87;
  pcStack_18 = FUN_10727c008;
  puVar18 = (undefined8 *)param_1[0x88];
  if ((undefined8 *)param_1[0x89] <= puVar18) {
    puVar15 = (ulong *)*puVar10;
    lVar16 = (long)puVar18 - (long)puVar15;
    lVar19 = lVar16 >> 4;
    uVar2 = lVar19 + 1;
    puVar12 = puVar10;
    if (uVar2 >> 0x3c == 0) {
      uVar13 = (long)param_1[0x89] - (long)puVar15;
      uVar14 = (long)uVar13 >> 3;
      if (uVar14 <= uVar2) {
        uVar14 = uVar2;
      }
      if (0x7fffffffffffffef < uVar13) {
        uVar14 = 0xfffffffffffffff;
      }
      puStack_20 = &stack0xfffffffffffffff0;
      if (uVar14 >> 0x3c == 0) {
        lVar11 = uVar14 << 4;
        puStack_20 = &stack0xfffffffffffffff0;
        __Znwm();
        puVar3 = (undefined8 *)(lVar11 + lVar16);
        *puVar3 = uVar4;
        puVar3[1] = lVar5;
        if (lVar5 != 0) {
          plVar1 = (long *)(lVar5 + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          puVar15 = (ulong *)*puVar10;
          lVar16 = param_1[0x88] - (long)puVar15;
          lVar19 = lVar16 >> 4;
        }
        puVar18 = puVar3 + 2;
        puVar17 = puVar3 + lVar19 * -2;
        puVar12 = puVar17;
        _memcpy(puVar17,puVar15,lVar16);
        *puVar10 = (ulong)puVar17;
        param_1[0x88] = (ulong)puVar18;
        param_1[0x89] = lVar11 + uVar14 * 0x10;
        if (puVar15 != (ulong *)0x0) {
          func_0x000107285884();
        }
        goto LAB_107283120;
      }
    }
    else {
      puStack_20 = &stack0xfffffffffffffff0;
      FUN_107283134();
    }
    func_0x000104bd35f4();
    pcStack_68 = FUN_107283134;
    ppuStack_70 = &puStack_20;
    func_0x0001072858a4();
    pcStack_78 = FUN_107283140;
    puStack_90 = puVar15;
    puStack_88 = puVar10;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x0001072856b0();
    func_0x000104c2fcd4();
    func_0x000104c2fcf0();
    puVar17 = (ulong *)param_1[0x88];
    puVar8 = (ulong *)*puVar10;
    if (-1 < (char)*(byte *)((long)param_1 + 0x44f)) {
      puVar17 = (ulong *)(ulong)*(byte *)((long)param_1 + 0x44f);
      puVar8 = puVar10;
    }
    iVar9 = (int)&puStack_90;
    if (puVar15 == puVar17) {
      puStack_90 = puVar12;
      puStack_88 = puVar15;
      func_0x000100067218(&puStack_90,puVar8,puVar17);
      puVar10 = (ulong *)(ulong)(iVar9 == 0);
    }
    else {
      puVar10 = (ulong *)0x0;
    }
    return puVar10;
  }
  *puVar18 = uVar4;
  puVar18[1] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar18 = puVar18 + 2;
  puVar12 = puVar10;
LAB_107283120:
  param_1[0x88] = (ulong)puVar18;
  return puVar12;
}



/* Entry: 10727c008; end: 10727c027;  */

ulong * FUN_10727c008(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  int iVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  puVar10 = (ulong *)(param_1 + 0x438);
  puVar18 = *(undefined8 **)(param_1 + 0x440);
  if (puVar18 < *(undefined8 **)(param_1 + 0x448)) {
    *puVar18 = uVar4;
    puVar18[1] = lVar5;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar18 = puVar18 + 2;
    puVar12 = puVar10;
LAB_107283120:
    *(undefined8 **)(param_1 + 0x440) = puVar18;
    return puVar12;
  }
  puVar15 = (ulong *)*puVar10;
  lVar16 = (long)puVar18 - (long)puVar15;
  lVar19 = lVar16 >> 4;
  uVar2 = lVar19 + 1;
  puVar12 = puVar10;
  if (uVar2 >> 0x3c == 0) {
    uVar13 = (long)*(undefined8 **)(param_1 + 0x448) - (long)puVar15;
    uVar14 = (long)uVar13 >> 3;
    if (uVar14 <= uVar2) {
      uVar14 = uVar2;
    }
    if (0x7fffffffffffffef < uVar13) {
      uVar14 = 0xfffffffffffffff;
    }
    if (uVar14 >> 0x3c == 0) {
      lVar11 = uVar14 << 4;
      __Znwm();
      puVar3 = (undefined8 *)(lVar11 + lVar16);
      *puVar3 = uVar4;
      puVar3[1] = lVar5;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        puVar15 = (ulong *)*puVar10;
        lVar16 = *(long *)(param_1 + 0x440) - (long)puVar15;
        lVar19 = lVar16 >> 4;
      }
      puVar18 = puVar3 + 2;
      puVar17 = puVar3 + lVar19 * -2;
      puVar12 = puVar17;
      _memcpy(puVar17,puVar15,lVar16);
      *puVar10 = (ulong)puVar17;
      *(undefined8 **)(param_1 + 0x440) = puVar18;
      *(ulong *)(param_1 + 0x448) = lVar11 + uVar14 * 0x10;
      if (puVar15 != (ulong *)0x0) {
        func_0x000107285884();
      }
      goto LAB_107283120;
    }
  }
  else {
    FUN_107283134();
  }
  func_0x000104bd35f4();
  pcStack_58 = FUN_107283134;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x0001072858a4();
  pcStack_68 = FUN_107283140;
  puStack_80 = puVar15;
  puStack_78 = puVar10;
  puStack_70 = (undefined1 *)&puStack_60;
  func_0x0001072856b0();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  puVar17 = *(ulong **)(param_1 + 0x440);
  puVar8 = (ulong *)*puVar10;
  if (-1 < (char)*(byte *)(param_1 + 0x44f)) {
    puVar17 = (ulong *)(ulong)*(byte *)(param_1 + 0x44f);
    puVar8 = puVar10;
  }
  iVar9 = (int)&puStack_80;
  if (puVar15 == puVar17) {
    puStack_80 = puVar12;
    puStack_78 = puVar15;
    func_0x000100067218(&puStack_80,puVar8,puVar17);
    puVar10 = (ulong *)(ulong)(iVar9 == 0);
  }
  else {
    puVar10 = (ulong *)0x0;
  }
  return puVar10;
}



/* Entry: 10727c028; end: 10727c0db;  */

bool FUN_10727c028(void)

{
  bool bVar1;
  long unaff_x19;
  double dVar2;
  double dVar3;
  undefined1 auStack_b8 [88];
  double dStack_60;
  char cStack_58;
  double dStack_50;
  byte bStack_48;
  double dStack_40;
  char cStack_38;
  
  func_0x000107285ae4();
  func_0x00010740e07c(auStack_b8);
  if (((bStack_48 & 1) == 0) || (bVar1 = false, ABS(dStack_50) <= 0.2)) {
    dVar3 = dStack_40;
    if (cStack_38 == '\0') {
      dVar3 = 0.0;
    }
    if (dVar3 <= 1.0) {
      bVar1 = true;
    }
    else {
      dVar2 = dStack_60;
      if (cStack_58 == '\0') {
        dVar2 = 0.0;
      }
      FUN_10727c0dc(*(undefined8 *)(unaff_x19 + 0x1e0),*(undefined8 *)(unaff_x19 + 0x1e8));
      bVar1 = ABS(dVar3 - dVar2) <= 0.5;
    }
  }
  return bVar1;
}



/* Entry: 10727c0dc; end: 10727c147;  */

double FUN_10727c0dc(double param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  
  for (pdVar1 = param_2;
      (pdVar2 = param_3, pdVar1 != param_3 && (pdVar2 = pdVar1, *pdVar1 <= param_1));
      pdVar1 = pdVar1 + 2) {
  }
  if (pdVar2 != param_2) {
    if (pdVar2 != param_3) {
      return pdVar2[-1] +
             ((param_1 - pdVar2[-2]) / (*pdVar2 - pdVar2[-2])) * (pdVar2[1] - pdVar2[-1]);
    }
    return param_3[-1];
  }
  return 0.0;
}



/* Entry: 10727c148; end: 10727c19f;  */

/* WARNING: Possible PIC construction at 0x00010727c158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010727c15c) */

long * FUN_10727c148(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107285ba8();
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



/* Entry: 10727c1a0; end: 10727c21f;  */

void FUN_10727c1a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_1d0 [136];
  undefined1 auStack_148 [272];
  undefined8 uStack_38;
  
  func_0x000107285514();
  uStack_38 = extraout_x8;
  FUN_10727c220(auStack_1d0);
  puVar1 = auStack_148;
  func_0x0001072859e0();
  func_0x000107285778();
  func_0x000107285a8c();
  func_0x0001072854dc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107285a8c();
  func_0x00010728561c();
  func_0x0001006392cc();
  func_0x00010725aae0();
  if (*(char *)(param_2 + 1) == '\x01') {
    puVar2 = param_2;
    FUN_10727ac44();
    *(undefined8 *)(puVar1 + 0x58) = *puVar2;
    puVar1[0x60] = 1;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    puVar2 = param_2 + 2;
    FUN_10727ac44();
    *(undefined8 *)(puVar1 + 0x68) = *puVar2;
    puVar1[0x70] = 1;
  }
  if (*(char *)(param_2 + 5) == '\x01') {
    param_2 = param_2 + 4;
    FUN_10727ac44();
    *(undefined8 *)(puVar1 + 0x78) = *param_2;
    puVar1[0x80] = 1;
  }
  return;
}



/* Entry: 10727c220; end: 10727c2a7;  */

void FUN_10727c220(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001006392cc();
  func_0x00010725aae0();
  if (*(char *)(unaff_x20 + 1) == '\x01') {
    puVar1 = unaff_x20;
    FUN_10727ac44();
    *(undefined8 *)(unaff_x19 + 0x58) = *puVar1;
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
  }
  if (*(char *)(unaff_x20 + 3) == '\x01') {
    puVar1 = unaff_x20 + 2;
    FUN_10727ac44();
    *(undefined8 *)(unaff_x19 + 0x68) = *puVar1;
    *(undefined1 *)(unaff_x19 + 0x70) = 1;
  }
  if (*(char *)(unaff_x20 + 5) == '\x01') {
    puVar1 = unaff_x20 + 4;
    FUN_10727ac44();
    *(undefined8 *)(unaff_x19 + 0x78) = *puVar1;
    *(undefined1 *)(unaff_x19 + 0x80) = 1;
  }
  return;
}



/* Entry: 10727c2a8; end: 10727c483;  */

void FUN_10727c2a8(undefined8 param_1,int *param_2,double *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar8;
  long unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x22;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_678 [104];
  undefined1 auStack_610 [16];
  undefined1 auStack_600 [16];
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  ulong uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 uStack_5d0;
  ulong uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 uStack_5b0;
  undefined1 uStack_5a0;
  undefined8 uStack_568;
  byte bStack_560;
  ulong uStack_530;
  undefined8 uStack_528;
  undefined1 uStack_520;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined8 uStack_4d8;
  byte bStack_4d0;
  undefined1 auStack_4a0 [16];
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_368;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined1 auStack_288 [272];
  undefined8 uStack_178;
  double dStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 uStack_e7;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  func_0x000107285514();
  uStack_58 = extraout_x8;
  if ((*(byte *)(param_2 + 0x1c) & 1) == 0) {
    *(undefined8 *)(unaff_x19 + 0xf0) = &PTR_FUN_110997570;
    *(undefined4 *)(unaff_x19 + 0xe8) = 0;
    *(undefined8 **)(unaff_x19 + 0x108) = (undefined8 *)(unaff_x19 + 0xf0);
  }
  else {
    lVar8 = *(long *)(param_2 + 0x18);
    if (lVar8 == 0) {
      pppuStack_60 = &ppuStack_78;
      ppuStack_78 = &PTR_DAT_110997670;
    }
    else {
      lStack_68 = *(long *)(param_2 + 0x1a);
      if (lStack_68 != 0) {
        plVar4 = (long *)(lStack_68 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_78 = &PTR_FUN_1109975f0;
      uStack_98 = 0;
      uStack_90 = 0;
      pppuStack_60 = &ppuStack_78;
      lStack_70 = lVar8;
      FUN_1072835ec(&uStack_98);
    }
    *(undefined4 *)(unaff_x19 + 0xe8) = 0;
    FUN_10724cbe8(unaff_x19 + 0xf0,&ppuStack_78);
    in_ZR = 0;
    if ((char)param_2[4] == '\x01') {
      plVar4 = (long *)(param_2 + 2);
      FUN_1072833b8();
      lVar8 = *plVar4;
      if ((char)param_2[0x16] == '\x01') {
        func_0x000107285a10();
        uVar10 = *(undefined8 *)(param_2 + 0xe);
        func_0x000107285a10();
        uVar11 = *(undefined8 *)(param_2 + 0x10);
        func_0x000107285a10();
        uVar12 = *(undefined8 *)(param_2 + 0x12);
        func_0x000107285a10();
        func_0x00010725aa9c(uVar10,uVar11,uVar12,*(undefined8 *)(param_2 + 0x14),&uStack_d0);
      }
      else {
        uStack_c8 = 0x3fe8000000000000;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0x3fd0000000000000;
        uStack_a8 = 0xc000000000000000;
        uStack_b0 = 0x4008000000000000;
      }
      dStack_128 = (double)lVar8;
      in_ZR = *param_2 == 1;
      uStack_d8 = !(bool)in_ZR;
      if ((bool)uStack_d8) {
        uStack_81 = (undefined1)*(undefined8 *)(param_2 + 10);
        uStack_80 = (undefined7)((ulong)*(undefined8 *)(param_2 + 10) >> 8);
        uStack_79 = (undefined1)param_2[0xc];
      }
      uStack_118 = uStack_c8;
      uStack_120 = uStack_d0;
      uStack_108 = uStack_b8;
      uStack_110 = uStack_c0;
      uStack_f8 = uStack_a8;
      uStack_100 = uStack_b0;
      uStack_f0 = 0;
      uStack_e7 = CONCAT17(uStack_79,uStack_80);
      uStack_ef = CONCAT17(uStack_81,uStack_88);
      param_3 = &dStack_128;
      func_0x00010727def0(unaff_x19 + 8,unaff_x19 + 8,param_3);
    }
    func_0x0001006393ec(&ppuStack_78);
    unaff_x20 = param_2;
  }
  func_0x0001072854dc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107285690();
  func_0x000107283610();
  func_0x0001006393ec(&ppuStack_78);
  func_0x000107285624();
  func_0x000107285dd4();
  func_0x000107285528();
  uStack_178 = extraout_x8_00;
  FUN_10727c220(&uStack_310,param_3);
  func_0x000107285748(*unaff_x22,unaff_x22[1],&uStack_320);
  uStack_308 = uStack_318;
  uStack_310 = uStack_320;
  uStack_300 = 1;
  func_0x0001072859e0(auStack_288);
  puVar7 = &uStack_310;
  func_0x000107285864();
  puVar5 = auStack_288;
  func_0x000107283610();
  func_0x0001072854dc(uStack_178);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = auStack_288;
  func_0x000107283610();
  func_0x00010728561c();
  func_0x000107285528();
  uStack_368 = extraout_x8_01;
  if (*(long *)(puVar6 + 8) != 0) {
    func_0x000107285dd4();
    func_0x000107285748(*puVar7,puVar7[1],&uStack_480);
    func_0x000107285748(unaff_x22[2],unaff_x22[3],&uStack_530);
    uStack_5e8 = uStack_478;
    uStack_5f0 = uStack_480;
    uStack_5d8 = uStack_528;
    uStack_5e0 = uStack_530;
    uStack_5d0 = 1;
    uVar9 = uStack_530;
    uVar10 = uStack_528;
    FUN_10727c220(auStack_678,puVar5);
    func_0x0001072859e0(&uStack_480);
    uStack_5c0 = uStack_5c0 & 0xffffffffffffff00;
    uStack_5a0 = 0;
    func_0x00010740e07c(&uStack_530,*(undefined8 *)(unaff_x20 + 2),&uStack_5c0);
    func_0x000107285730(uStack_4f8);
    uStack_490 = CONCAT17((byte)(uVar9 >> 0x38) & (byte)((ulong)uStack_508 >> 0x38),
                          CONCAT16((byte)(uVar9 >> 0x30) & (byte)((ulong)uStack_508 >> 0x30),
                                   CONCAT15((byte)(uVar9 >> 0x28) &
                                            (byte)((ulong)uStack_508 >> 0x28),
                                            CONCAT14((byte)(uVar9 >> 0x20) &
                                                     (byte)((ulong)uStack_508 >> 0x20),
                                                     CONCAT13((byte)(uVar9 >> 0x18) &
                                                              (byte)((ulong)uStack_508 >> 0x18),
                                                              CONCAT12((byte)(uVar9 >> 0x10) &
                                                                       (byte)((ulong)uStack_508 >>
                                                                             0x10),
                                                                       CONCAT11((byte)(uVar9 >> 8) &
                                                                                (byte)((ulong)
                                                  uStack_508 >> 8),(byte)uVar9 & (byte)uStack_508)))
                                                  ))));
    uStack_488 = CONCAT17((byte)((ulong)uVar10 >> 0x38) & (byte)((ulong)uStack_500 >> 0x38),
                          CONCAT16((byte)((ulong)uVar10 >> 0x30) & (byte)((ulong)uStack_500 >> 0x30)
                                   ,CONCAT15((byte)((ulong)uVar10 >> 0x28) &
                                             (byte)((ulong)uStack_500 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar10 >> 0x20) &
                                                      (byte)((ulong)uStack_500 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar10 >> 0x18) &
                                                               (byte)((ulong)uStack_500 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar10 >> 0x10
                                                                              ) & (byte)((ulong)
                                                  uStack_500 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar10 >> 8) &
                                                           (byte)((ulong)uStack_500 >> 8),
                                                           (byte)uVar10 & (byte)uStack_500)))))));
    func_0x00010740e364(&uStack_530,*(undefined8 *)(unaff_x20 + 2),&uStack_5f0,auStack_4a0,
                        auStack_610,auStack_600);
    func_0x000107285c58(&uStack_5c0,auStack_678);
    uStack_5b8 = uStack_528;
    uStack_5c0 = uStack_530;
    uStack_5b0 = uStack_520;
    if ((bStack_560 & 1) == 0) {
      if ((bStack_4d0 & 1) == 0) goto LAB_10727c658;
      uStack_568 = uStack_4d8;
      bStack_560 = 1;
    }
    func_0x000107285864();
    func_0x000107283610(&uStack_480);
  }
  func_0x0001072854dc(uStack_368);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10727c658:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10727c660);
  (*pcVar3)();
}



/* Entry: 10727c484; end: 10727c52b;  */

void FUN_10727c484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  undefined8 *unaff_x22;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_548 [104];
  undefined1 auStack_4e0 [16];
  undefined1 auStack_4d0 [16];
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 uStack_4a0;
  ulong uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined1 uStack_470;
  undefined8 uStack_438;
  byte bStack_430;
  ulong uStack_400;
  undefined8 uStack_3f8;
  undefined1 uStack_3f0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined8 uStack_3a8;
  byte bStack_3a0;
  undefined1 auStack_370 [16];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_238;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 auStack_158 [272];
  undefined8 uStack_48;
  
  func_0x000107285dd4();
  func_0x000107285528();
  uStack_48 = extraout_x8;
  FUN_10727c220(&uStack_1e0,param_3);
  func_0x000107285748(*unaff_x22,unaff_x22[1],&uStack_1f0);
  uStack_1d8 = uStack_1e8;
  uStack_1e0 = uStack_1f0;
  uStack_1d0 = 1;
  func_0x0001072859e0(auStack_158);
  puVar4 = &uStack_1e0;
  func_0x000107285864();
  puVar2 = auStack_158;
  func_0x000107283610();
  func_0x0001072854dc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_158;
  func_0x000107283610();
  func_0x00010728561c();
  func_0x000107285528();
  uStack_238 = extraout_x8_00;
  if (*(long *)(puVar3 + 8) != 0) {
    func_0x000107285dd4();
    func_0x000107285748(*puVar4,puVar4[1],&uStack_350);
    func_0x000107285748(unaff_x22[2],unaff_x22[3],&uStack_400);
    uStack_4b8 = uStack_348;
    uStack_4c0 = uStack_350;
    uStack_4a8 = uStack_3f8;
    uStack_4b0 = uStack_400;
    uStack_4a0 = 1;
    uVar5 = uStack_400;
    uVar6 = uStack_3f8;
    FUN_10727c220(auStack_548,puVar2);
    func_0x0001072859e0(&uStack_350);
    uStack_490 = uStack_490 & 0xffffffffffffff00;
    uStack_470 = 0;
    func_0x00010740e07c(&uStack_400,*(undefined8 *)(unaff_x20 + 8),&uStack_490);
    func_0x000107285730(uStack_3c8);
    uStack_360 = CONCAT17((byte)(uVar5 >> 0x38) & (byte)((ulong)uStack_3d8 >> 0x38),
                          CONCAT16((byte)(uVar5 >> 0x30) & (byte)((ulong)uStack_3d8 >> 0x30),
                                   CONCAT15((byte)(uVar5 >> 0x28) &
                                            (byte)((ulong)uStack_3d8 >> 0x28),
                                            CONCAT14((byte)(uVar5 >> 0x20) &
                                                     (byte)((ulong)uStack_3d8 >> 0x20),
                                                     CONCAT13((byte)(uVar5 >> 0x18) &
                                                              (byte)((ulong)uStack_3d8 >> 0x18),
                                                              CONCAT12((byte)(uVar5 >> 0x10) &
                                                                       (byte)((ulong)uStack_3d8 >>
                                                                             0x10),
                                                                       CONCAT11((byte)(uVar5 >> 8) &
                                                                                (byte)((ulong)
                                                  uStack_3d8 >> 8),(byte)uVar5 & (byte)uStack_3d8)))
                                                  ))));
    uStack_358 = CONCAT17((byte)((ulong)uVar6 >> 0x38) & (byte)((ulong)uStack_3d0 >> 0x38),
                          CONCAT16((byte)((ulong)uVar6 >> 0x30) & (byte)((ulong)uStack_3d0 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar6 >> 0x28) &
                                            (byte)((ulong)uStack_3d0 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar6 >> 0x20) &
                                                     (byte)((ulong)uStack_3d0 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar6 >> 0x18) &
                                                              (byte)((ulong)uStack_3d0 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar6 >> 0x10)
                                                                       & (byte)((ulong)uStack_3d0 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar6
                                                                                      >> 8) &
                                                                                (byte)((ulong)
                                                  uStack_3d0 >> 8),(byte)uVar6 & (byte)uStack_3d0)))
                                                  ))));
    func_0x00010740e364(&uStack_400,*(undefined8 *)(unaff_x20 + 8),&uStack_4c0,auStack_370,
                        auStack_4e0,auStack_4d0);
    func_0x000107285c58(&uStack_490,auStack_548);
    uStack_488 = uStack_3f8;
    uStack_490 = uStack_400;
    uStack_480 = uStack_3f0;
    if ((bStack_430 & 1) == 0) {
      if ((bStack_3a0 & 1) == 0) goto LAB_10727c658;
      uStack_438 = uStack_3a8;
      bStack_430 = 1;
    }
    func_0x000107285864();
    func_0x000107283610(&uStack_350);
  }
  func_0x0001072854dc(uStack_238);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10727c658:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10727c660);
  (*pcVar1)();
}



/* Entry: 10727c52c; end: 10727c677;  */

void FUN_10727c52c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x20;
  long unaff_x22;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_358 [104];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [16];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined1 uStack_280;
  undefined8 uStack_248;
  byte bStack_240;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_48;
  
  func_0x000107285528();
  uStack_48 = extraout_x8;
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107285dd4();
    func_0x000107285748(*param_2,param_2[1],&uStack_160);
    func_0x000107285748(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                        &uStack_210);
    uStack_2c8 = uStack_158;
    uStack_2d0 = uStack_160;
    uStack_2b8 = uStack_208;
    uStack_2c0 = uStack_210;
    uStack_2b0 = 1;
    uVar2 = uStack_210;
    uVar3 = uStack_208;
    FUN_10727c220(auStack_358);
    func_0x0001072859e0(&uStack_160);
    uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
    uStack_280 = 0;
    func_0x00010740e07c(&uStack_210,*(undefined8 *)(unaff_x20 + 8),&uStack_2a0);
    func_0x000107285730(uStack_1d8);
    uStack_170 = CONCAT17((byte)(uVar2 >> 0x38) & (byte)((ulong)uStack_1e8 >> 0x38),
                          CONCAT16((byte)(uVar2 >> 0x30) & (byte)((ulong)uStack_1e8 >> 0x30),
                                   CONCAT15((byte)(uVar2 >> 0x28) &
                                            (byte)((ulong)uStack_1e8 >> 0x28),
                                            CONCAT14((byte)(uVar2 >> 0x20) &
                                                     (byte)((ulong)uStack_1e8 >> 0x20),
                                                     CONCAT13((byte)(uVar2 >> 0x18) &
                                                              (byte)((ulong)uStack_1e8 >> 0x18),
                                                              CONCAT12((byte)(uVar2 >> 0x10) &
                                                                       (byte)((ulong)uStack_1e8 >>
                                                                             0x10),
                                                                       CONCAT11((byte)(uVar2 >> 8) &
                                                                                (byte)((ulong)
                                                  uStack_1e8 >> 8),(byte)uVar2 & (byte)uStack_1e8)))
                                                  ))));
    uStack_168 = CONCAT17((byte)((ulong)uVar3 >> 0x38) & (byte)((ulong)uStack_1e0 >> 0x38),
                          CONCAT16((byte)((ulong)uVar3 >> 0x30) & (byte)((ulong)uStack_1e0 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar3 >> 0x28) &
                                            (byte)((ulong)uStack_1e0 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar3 >> 0x20) &
                                                     (byte)((ulong)uStack_1e0 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar3 >> 0x18) &
                                                              (byte)((ulong)uStack_1e0 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar3 >> 0x10)
                                                                       & (byte)((ulong)uStack_1e0 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar3
                                                                                      >> 8) &
                                                                                (byte)((ulong)
                                                  uStack_1e0 >> 8),(byte)uVar3 & (byte)uStack_1e0)))
                                                  ))));
    func_0x00010740e364(&uStack_210,*(undefined8 *)(unaff_x20 + 8),&uStack_2d0,auStack_180,
                        auStack_2f0,auStack_2e0);
    func_0x000107285c58(&uStack_2a0,auStack_358);
    uStack_298 = uStack_208;
    uStack_2a0 = uStack_210;
    uStack_290 = uStack_200;
    if ((bStack_240 & 1) == 0) {
      if ((bStack_1b0 & 1) == 0) goto LAB_10727c658;
      uStack_248 = uStack_1b8;
      bStack_240 = 1;
    }
    func_0x000107285864();
    func_0x000107283610(&uStack_160);
  }
  func_0x0001072854dc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10727c658:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10727c660);
  (*pcVar1)();
}



/* Entry: 10727c678; end: 10727c713;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10727c678(double param_1,double param_2,double param_3,double param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  double *pdVar3;
  undefined1 *puVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 *in_x3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double unaff_d11;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1dc0 [24];
  undefined1 uStack_1da8;
  ulong auStack_1da0 [13];
  double dStack_1d38;
  undefined1 uStack_1d30;
  undefined4 uStack_1d2f;
  undefined3 uStack_1d2b;
  undefined1 uStack_1d28;
  undefined4 uStack_1d27;
  undefined3 uStack_1d23;
  undefined1 uStack_1d20;
  undefined4 uStack_1d1f;
  undefined3 uStack_1d1b;
  double dStack_1d10;
  double dStack_1d08;
  double dStack_1d00;
  double dStack_1cf8;
  undefined1 auStack_1cf0 [24];
  undefined1 auStack_1cd8 [80];
  double dStack_1c88;
  undefined1 uStack_1c80;
  undefined1 auStack_1c68 [272];
  undefined8 uStack_1b58;
  undefined1 auStack_1ad8 [24];
  undefined1 uStack_1ac0;
  undefined1 auStack_1ab8 [32];
  undefined1 uStack_1a98;
  double adStack_1a90 [16];
  undefined1 uStack_1a10;
  undefined4 uStack_1a0f;
  undefined3 uStack_1a0b;
  double adStack_1a08 [34];
  undefined8 uStack_18f8;
  double dStack_18f0;
  double dStack_18e8;
  double dStack_1890;
  double dStack_1888;
  double dStack_1880;
  undefined8 uStack_1878;
  double dStack_1870;
  undefined1 uStack_1868;
  undefined7 uStack_1867;
  double dStack_1860;
  undefined8 uStack_1858;
  undefined4 uStack_181c;
  undefined4 uStack_1817;
  undefined4 uStack_17f7;
  undefined3 uStack_17f3;
  undefined4 uStack_17ef;
  undefined3 uStack_17eb;
  undefined1 uStack_17e8;
  undefined7 uStack_17e7;
  undefined1 uStack_17e0;
  undefined7 uStack_17df;
  double dStack_17d8;
  double dStack_17d0;
  undefined1 auStack_17c8 [76];
  undefined2 uStack_177c;
  ushort uStack_1778;
  double dStack_1720;
  double dStack_1718;
  double dStack_1710;
  undefined8 uStack_1708;
  double adStack_978 [34];
  undefined8 uStack_868;
  double adStack_7f0 [8];
  double dStack_7b0;
  double dStack_7a8;
  undefined1 uStack_7a0;
  double dStack_778;
  undefined1 uStack_770;
  double adStack_768 [34];
  undefined8 uStack_658;
  undefined8 uStack_448;
  undefined8 uStack_238;
  undefined1 auStack_1e0 [64];
  double dStack_1a0;
  double dStack_198;
  undefined1 uStack_190;
  double adStack_158 [34];
  undefined8 uStack_48;
  
  dVar14 = param_1;
  dVar9 = param_2;
  func_0x000107285528();
  uStack_48 = extraout_x8;
  FUN_10727c220(auStack_1e0);
  uStack_190 = 1;
  pdVar3 = adStack_158;
  dStack_1a0 = param_1;
  dStack_198 = param_2;
  func_0x0001072859e0();
  func_0x000107285864();
  func_0x000107285a8c();
  func_0x0001072854dc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107285a8c();
  func_0x00010728561c();
  func_0x000107285514();
  func_0x000107285720();
  func_0x000107285850();
  func_0x000107285a64();
  func_0x000107285640();
  func_0x0001072856a8();
  func_0x00010728585c();
  func_0x0001072854dc(uStack_238);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855f0();
  func_0x00010728585c();
  func_0x00010728561c();
  func_0x000107285514();
  func_0x000107285720();
  func_0x000107285850();
  func_0x000107285a64();
  func_0x000107285640();
  func_0x0001072856a8();
  func_0x00010728585c();
  func_0x0001072854dc(uStack_448);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855f0();
  func_0x00010728585c();
  func_0x00010728561c();
  dVar7 = dVar14;
  dVar10 = dVar9;
  dVar12 = param_3;
  func_0x000107285514();
  func_0x000107285720();
  uStack_770 = 1;
  uStack_7a0 = 1;
  dStack_7b0 = dVar14;
  dStack_7a8 = dVar9;
  dStack_778 = param_3;
  func_0x000107285850();
  func_0x000107285a64();
  pdVar5 = adStack_7f0;
  pdVar6 = adStack_768;
  func_0x000107285640();
  func_0x0001072856a8();
  func_0x00010728585c();
  func_0x0001072854dc(uStack_658);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855f0();
  func_0x00010728585c();
  func_0x00010728561c();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107285528();
  dVar8 = dVar7;
  dVar11 = dVar10;
  uStack_868 = extraout_x8_00;
  if (pdVar3[1] == 0.0) goto LAB_10727cad8;
  FUN_10727c2a8(adStack_978);
  func_0x000107285a64();
  puVar4 = auStack_17c8;
  func_0x000107285844(*(undefined8 *)pdVar3[1]);
  func_0x00010785f1f4();
  dStack_1870._0_1_ = 0;
  puVar4 = puVar4 + 0x9b0;
  FUN_10724e2c8(puVar4,&dStack_1870);
  if ((int)puVar4 == 0) {
LAB_10727ca64:
    dStack_1888 = dStack_1718;
    dStack_1890 = dStack_1720;
    uStack_1878 = uStack_1708;
    dStack_1880 = dStack_1710;
    func_0x00010786ed1c(&dStack_1890,uStack_177c,uStack_1778);
    dVar8 = dStack_1720 - dVar7;
    dVar11 = dStack_1710 - dVar10;
    dStack_17d8 = dVar8;
    dStack_17d0 = dVar11;
    func_0x0001072857b4();
    uStack_1817 = 0;
    uStack_181c = 0;
    func_0x000107285974();
    uStack_17f3 = 0;
    uStack_17f7 = 0;
    uStack_17eb = 0;
    uStack_17ef = 0;
    func_0x00010740ed34(pdVar3[1],&dStack_17d8);
    dStack_1870._0_1_ = SUB81(dVar8,0);
    dStack_1870._1_7_ = (undefined7)((ulong)dVar8 >> 8);
    uStack_1868 = SUB81(dVar11,0);
    uStack_1867 = (undefined7)((ulong)dVar11 >> 8);
    func_0x000107285780();
    pdVar5 = &dStack_1870;
    pdVar6 = adStack_978;
    func_0x000107285640();
  }
  else {
    iVar2 = (int)auStack_17c8;
    func_0x000107417d68();
    if (iVar2 == 0) goto LAB_10727ca64;
    uStack_1868 = SUB81(dStack_1718,0);
    uStack_1867 = (undefined7)((ulong)dStack_1718 >> 8);
    dStack_1870._0_1_ = SUB81(dStack_1720,0);
    dStack_1870._1_7_ = (undefined7)((ulong)dStack_1720 >> 8);
    uStack_1858 = uStack_1708;
    dStack_1860 = dStack_1710;
    pdVar6 = (double *)(ulong)uStack_1778;
    func_0x00010786ed1c(&dStack_1870,uStack_177c);
    dVar8 = dStack_1720 - dVar7;
    dVar11 = dStack_1710 - dVar10;
    dStack_1890 = dStack_1720;
    dStack_1888 = dStack_1710;
    dStack_17d8 = dVar8;
    dStack_17d0 = dVar11;
    FUN_10727ce2c(auStack_17c8,&dStack_1890);
    func_0x000107285a80();
    FUN_10727ce2c(auStack_17c8,&dStack_17d8);
    func_0x000107285b84();
    pdVar5 = (double *)0x0;
    func_0x00010741657c(auStack_17c8);
    dVar12 = unaff_d11 - dVar7;
    param_4 = dVar14 - dVar10;
    dVar8 = param_4 + dVar8;
    dVar11 = dVar12 + dVar11;
    in_ZR = ABS(dVar8) == 1.79769313486232e+308;
    if (((ulong)ABS(dVar8) < 0x7ff0000000000000) && ((ulong)ABS(dVar11) < 0x7ff0000000000000)) {
      dVar8 = (double)NEON_fminnm(dVar8,0x4056800000000000);
      dVar12 = -90.0;
      if (dVar8 <= -90.0) {
        dVar8 = dVar12;
      }
      func_0x000107285748(&uStack_17e8);
      func_0x0001072857b4();
      uStack_181c = 0;
      uStack_1817 = 0;
      func_0x000107285974();
      uStack_17f7 = 0;
      uStack_17f3 = 0;
      uStack_17ef = 0;
      uStack_17eb = 0;
      dStack_1870._1_7_ = uStack_17e7;
      uStack_1868 = uStack_17e0;
      uStack_1867 = uStack_17df;
      dStack_1870._0_1_ = uStack_17e8;
      func_0x000107285780();
      pdVar5 = &dStack_1870;
      pdVar6 = adStack_978;
      func_0x000107285640();
    }
  }
  func_0x0001072856a8();
  pdVar3 = adStack_978;
  func_0x000107283610();
  param_3 = dVar10;
  dVar9 = dVar7;
LAB_10727cad8:
  func_0x0001072854dc(uStack_868);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  dStack_18f0 = dVar9;
  dStack_18e8 = param_3;
  func_0x000107285528();
  uStack_18f8 = extraout_x8_01;
  if (pdVar3[1] != 0.0) {
    FUN_10727c2a8(adStack_1a08);
    auStack_1ad8[0] = 0;
    uStack_1ac0 = 0;
    auStack_1ab8[0] = 0;
    uStack_1a98 = 0;
    func_0x00010740e07c(adStack_1a90,pdVar3[1],auStack_1ab8);
    func_0x000107285d3c(uStack_1a10);
    if ((bool)in_ZR) {
      adStack_1a90[0xf] = dVar11;
    }
    (**(code **)((long)*pdVar3 + 0x90))(pdVar3,adStack_1a90[0xf] - dVar8,1);
    uStack_1a0b = 0;
    uStack_1a0f = 0;
    adStack_1a90[1] = 0.0;
    adStack_1a90[0] = 0.0;
    adStack_1a90[3] = 0.0;
    adStack_1a90[2] = 0.0;
    adStack_1a90[5] = 0.0;
    adStack_1a90[4] = 0.0;
    adStack_1a90[7] = 0.0;
    adStack_1a90[6] = 0.0;
    adStack_1a90[9] = 0.0;
    adStack_1a90[8] = 0.0;
    adStack_1a90[0xb] = 0.0;
    adStack_1a90[10] = 0.0;
    adStack_1a90[0xd] = 0.0;
    adStack_1a90[0xc] = 0.0;
    adStack_1a90[0xe] = 0.0;
    uStack_1a10 = 1;
    pdVar5 = adStack_1a90;
    pdVar6 = adStack_1a08;
    in_x3 = auStack_1ad8;
    adStack_1a90[0xf] = adStack_1a90[0xf] - dVar8;
    func_0x000107285778();
    func_0x000107285a78();
    pdVar3 = adStack_1a08;
    func_0x000107283610();
  }
  func_0x0001072854dc(uStack_18f8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010728561c();
    func_0x000107285514();
    dVar17 = *pdVar5;
    dVar15 = pdVar5[1];
    dVar16 = *pdVar6;
    dVar13 = pdVar6[1];
    uStack_1b58 = extraout_x8_02;
    FUN_10727c2a8(auStack_1c68,in_x3);
    auStack_1dc0[0] = 0;
    uStack_1da8 = 0;
    auStack_1da0[0] = auStack_1da0[0] & 0xffffffffffffff00;
    auStack_1da0[4] = auStack_1da0[4] & 0xffffffffffffff00;
    func_0x00010740e07c(auStack_1cf0,pdVar3[1],auStack_1da0);
    dVar8 = 0.0;
    auStack_1da0[1] = 0;
    auStack_1da0[0] = 0;
    auStack_1da0[3] = 0;
    auStack_1da0[2] = 0;
    FUN_10727ce6c(auStack_1cd8,auStack_1da0);
    dStack_1d10 = dVar8;
    dStack_1d08 = dVar11;
    dStack_1d00 = dVar12;
    dStack_1cf8 = param_4;
    func_0x00010786ed1c(&dStack_1d10,*(undefined2 *)(*(long *)pdVar3[1] + 0xa4),
                        *(undefined2 *)(*(long *)pdVar3[1] + 0xa8));
    func_0x000107285b84();
    dVar8 = dVar17 - dVar8;
    dVar11 = dVar15 - dVar11;
    dVar9 = dVar8;
    _exp2();
    dVar7 = dVar11;
    _exp2();
    uVar1 = dVar9 + dVar7 == 40000.0;
    dVar10 = 40000.0;
    dVar12 = dVar8;
    if (dVar9 + dVar7 < 40000.0) {
      _atan2();
      ___sincos_stret();
      dVar14 = dVar17 + dVar8 * -200.0;
      unaff_d11 = dVar15 + dVar11 * -200.0;
      dVar12 = dVar17 - dVar14;
      dVar11 = dVar15 - unaff_d11;
      dVar10 = dVar8;
    }
    func_0x000107285d3c(uStack_1c80);
    if ((bool)uVar1) {
      dStack_1c88 = dVar10;
    }
    dVar9 = -((dVar16 - dVar14) * dVar11) + (dVar13 - unaff_d11) * dVar12;
    _atan2(dVar9,dVar11 * (dVar13 - unaff_d11) + (dVar16 - dVar14) * dVar12);
    dStack_1d38 = (dVar9 + dStack_1c88 * -0.017453292519943295) * -57.29577951308232;
    uStack_1d2b = 0;
    uStack_1d2f = 0;
    uStack_1d27 = 0;
    uStack_1d23 = 0;
    uStack_1d1f = 0;
    uStack_1d1b = 0;
    auStack_1da0[1] = 0;
    auStack_1da0[0] = 0;
    auStack_1da0[3] = 0;
    auStack_1da0[2] = 0;
    auStack_1da0[5] = 0;
    auStack_1da0[4] = 0;
    auStack_1da0[7] = 0;
    auStack_1da0[6] = 0;
    auStack_1da0[9] = 0;
    auStack_1da0[8] = 0;
    auStack_1da0[0xb] = 0;
    auStack_1da0[10] = 0;
    auStack_1da0[0xc] = 0;
    uStack_1d30 = 1;
    uStack_1d28 = 0;
    uStack_1d20 = 0;
    func_0x000107285778();
    func_0x0001001148fc(auStack_1dc0);
    puVar4 = auStack_1c68;
    func_0x000107283610();
    func_0x0001072854dc(uStack_1b58);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010728561c();
      NEON_ucvtf((ulong)*(uint *)(puVar4 + 0x50));
      func_0x000107417f00();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10727c714; end: 10727c7a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10727c714(double param_1,double param_2,double param_3,double param_4,double *param_5,
                  undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double unaff_d11;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1be0 [24];
  undefined1 uStack_1bc8;
  ulong auStack_1bc0 [13];
  double dStack_1b58;
  undefined1 uStack_1b50;
  undefined4 uStack_1b4f;
  undefined3 uStack_1b4b;
  undefined1 uStack_1b48;
  undefined4 uStack_1b47;
  undefined3 uStack_1b43;
  undefined1 uStack_1b40;
  undefined4 uStack_1b3f;
  undefined3 uStack_1b3b;
  double dStack_1b30;
  double dStack_1b28;
  double dStack_1b20;
  double dStack_1b18;
  undefined1 auStack_1b10 [24];
  undefined1 auStack_1af8 [80];
  double dStack_1aa8;
  undefined1 uStack_1aa0;
  undefined1 auStack_1a88 [272];
  undefined8 uStack_1978;
  undefined1 auStack_18f8 [24];
  undefined1 uStack_18e0;
  undefined1 auStack_18d8 [32];
  undefined1 uStack_18b8;
  double adStack_18b0 [16];
  undefined1 uStack_1830;
  undefined4 uStack_182f;
  undefined3 uStack_182b;
  double adStack_1828 [34];
  undefined8 uStack_1718;
  double dStack_1710;
  double dStack_1708;
  double dStack_16b0;
  double dStack_16a8;
  double dStack_16a0;
  undefined8 uStack_1698;
  double dStack_1690;
  undefined1 uStack_1688;
  undefined7 uStack_1687;
  double dStack_1680;
  undefined8 uStack_1678;
  undefined4 uStack_163c;
  undefined4 uStack_1637;
  undefined4 uStack_1617;
  undefined3 uStack_1613;
  undefined4 uStack_160f;
  undefined3 uStack_160b;
  undefined1 uStack_1608;
  undefined7 uStack_1607;
  undefined1 uStack_1600;
  undefined7 uStack_15ff;
  double dStack_15f8;
  double dStack_15f0;
  undefined1 auStack_15e8 [76];
  undefined2 uStack_159c;
  ushort uStack_1598;
  double dStack_1540;
  double dStack_1538;
  double dStack_1530;
  undefined8 uStack_1528;
  double adStack_798 [34];
  undefined8 uStack_688;
  double adStack_610 [8];
  double dStack_5d0;
  double dStack_5c8;
  undefined1 uStack_5c0;
  double dStack_598;
  undefined1 uStack_590;
  double adStack_588 [34];
  undefined8 uStack_478;
  undefined8 uStack_268;
  undefined8 uStack_58;
  
  func_0x000107285514();
  func_0x000107285720();
  func_0x000107285850();
  func_0x000107285a64();
  func_0x000107285640();
  func_0x0001072856a8();
  func_0x00010728585c();
  func_0x0001072854dc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855f0();
  func_0x00010728585c();
  func_0x00010728561c();
  func_0x000107285514();
  func_0x000107285720();
  func_0x000107285850();
  func_0x000107285a64();
  func_0x000107285640();
  func_0x0001072856a8();
  func_0x00010728585c();
  func_0x0001072854dc(uStack_268);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855f0();
  func_0x00010728585c();
  func_0x00010728561c();
  dVar8 = param_1;
  dVar7 = param_2;
  dVar10 = param_3;
  func_0x000107285514();
  func_0x000107285720();
  uStack_590 = 1;
  uStack_5c0 = 1;
  dStack_5d0 = param_1;
  dStack_5c8 = param_2;
  dStack_598 = param_3;
  func_0x000107285850();
  func_0x000107285a64();
  pdVar4 = adStack_610;
  pdVar5 = adStack_588;
  func_0x000107285640();
  func_0x0001072856a8();
  func_0x00010728585c();
  func_0x0001072854dc(uStack_478);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855f0();
  func_0x00010728585c();
  func_0x00010728561c();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107285528();
  dVar6 = dVar8;
  dVar9 = dVar7;
  uStack_688 = extraout_x8;
  if (param_5[1] == 0.0) goto LAB_10727cad8;
  FUN_10727c2a8(adStack_798);
  func_0x000107285a64();
  puVar3 = auStack_15e8;
  func_0x000107285844(*(undefined8 *)param_5[1]);
  func_0x00010785f1f4();
  dStack_1690._0_1_ = 0;
  puVar3 = puVar3 + 0x9b0;
  FUN_10724e2c8(puVar3,&dStack_1690);
  if ((int)puVar3 == 0) {
LAB_10727ca64:
    dStack_16a8 = dStack_1538;
    dStack_16b0 = dStack_1540;
    uStack_1698 = uStack_1528;
    dStack_16a0 = dStack_1530;
    func_0x00010786ed1c(&dStack_16b0,uStack_159c,uStack_1598);
    dVar6 = dStack_1540 - dVar8;
    dVar9 = dStack_1530 - dVar7;
    dStack_15f8 = dVar6;
    dStack_15f0 = dVar9;
    func_0x0001072857b4();
    uStack_1637 = 0;
    uStack_163c = 0;
    func_0x000107285974();
    uStack_1613 = 0;
    uStack_1617 = 0;
    uStack_160b = 0;
    uStack_160f = 0;
    func_0x00010740ed34(param_5[1],&dStack_15f8);
    dStack_1690._0_1_ = SUB81(dVar6,0);
    dStack_1690._1_7_ = (undefined7)((ulong)dVar6 >> 8);
    uStack_1688 = SUB81(dVar9,0);
    uStack_1687 = (undefined7)((ulong)dVar9 >> 8);
    func_0x000107285780();
    pdVar4 = &dStack_1690;
    pdVar5 = adStack_798;
    func_0x000107285640();
  }
  else {
    iVar2 = (int)auStack_15e8;
    func_0x000107417d68();
    if (iVar2 == 0) goto LAB_10727ca64;
    uStack_1688 = SUB81(dStack_1538,0);
    uStack_1687 = (undefined7)((ulong)dStack_1538 >> 8);
    dStack_1690._0_1_ = SUB81(dStack_1540,0);
    dStack_1690._1_7_ = (undefined7)((ulong)dStack_1540 >> 8);
    uStack_1678 = uStack_1528;
    dStack_1680 = dStack_1530;
    pdVar5 = (double *)(ulong)uStack_1598;
    func_0x00010786ed1c(&dStack_1690,uStack_159c);
    dVar6 = dStack_1540 - dVar8;
    dVar9 = dStack_1530 - dVar7;
    dStack_16b0 = dStack_1540;
    dStack_16a8 = dStack_1530;
    dStack_15f8 = dVar6;
    dStack_15f0 = dVar9;
    FUN_10727ce2c(auStack_15e8,&dStack_16b0);
    func_0x000107285a80();
    FUN_10727ce2c(auStack_15e8,&dStack_15f8);
    func_0x000107285b84();
    pdVar4 = (double *)0x0;
    func_0x00010741657c(auStack_15e8);
    dVar10 = unaff_d11 - dVar8;
    param_4 = param_1 - dVar7;
    dVar6 = param_4 + dVar6;
    dVar9 = dVar10 + dVar9;
    in_ZR = ABS(dVar6) == 1.79769313486232e+308;
    if (((ulong)ABS(dVar6) < 0x7ff0000000000000) && ((ulong)ABS(dVar9) < 0x7ff0000000000000)) {
      dVar6 = (double)NEON_fminnm(dVar6,0x4056800000000000);
      dVar10 = -90.0;
      if (dVar6 <= -90.0) {
        dVar6 = dVar10;
      }
      func_0x000107285748(&uStack_1608);
      func_0x0001072857b4();
      uStack_163c = 0;
      uStack_1637 = 0;
      func_0x000107285974();
      uStack_1617 = 0;
      uStack_1613 = 0;
      uStack_160f = 0;
      uStack_160b = 0;
      dStack_1690._1_7_ = uStack_1607;
      uStack_1688 = uStack_1600;
      uStack_1687 = uStack_15ff;
      dStack_1690._0_1_ = uStack_1608;
      func_0x000107285780();
      pdVar4 = &dStack_1690;
      pdVar5 = adStack_798;
      func_0x000107285640();
    }
  }
  func_0x0001072856a8();
  param_5 = adStack_798;
  func_0x000107283610();
  param_3 = dVar7;
  param_2 = dVar8;
LAB_10727cad8:
  func_0x0001072854dc(uStack_688);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  dStack_1710 = param_2;
  dStack_1708 = param_3;
  func_0x000107285528();
  uStack_1718 = extraout_x8_00;
  if (param_5[1] != 0.0) {
    FUN_10727c2a8(adStack_1828);
    auStack_18f8[0] = 0;
    uStack_18e0 = 0;
    auStack_18d8[0] = 0;
    uStack_18b8 = 0;
    func_0x00010740e07c(adStack_18b0,param_5[1],auStack_18d8);
    func_0x000107285d3c(uStack_1830);
    if ((bool)in_ZR) {
      adStack_18b0[0xf] = dVar9;
    }
    (**(code **)((long)*param_5 + 0x90))(param_5,adStack_18b0[0xf] - dVar6,1);
    uStack_182b = 0;
    uStack_182f = 0;
    adStack_18b0[1] = 0.0;
    adStack_18b0[0] = 0.0;
    adStack_18b0[3] = 0.0;
    adStack_18b0[2] = 0.0;
    adStack_18b0[5] = 0.0;
    adStack_18b0[4] = 0.0;
    adStack_18b0[7] = 0.0;
    adStack_18b0[6] = 0.0;
    adStack_18b0[9] = 0.0;
    adStack_18b0[8] = 0.0;
    adStack_18b0[0xb] = 0.0;
    adStack_18b0[10] = 0.0;
    adStack_18b0[0xd] = 0.0;
    adStack_18b0[0xc] = 0.0;
    adStack_18b0[0xe] = 0.0;
    uStack_1830 = 1;
    pdVar4 = adStack_18b0;
    pdVar5 = adStack_1828;
    param_8 = auStack_18f8;
    adStack_18b0[0xf] = adStack_18b0[0xf] - dVar6;
    func_0x000107285778();
    func_0x000107285a78();
    param_5 = adStack_1828;
    func_0x000107283610();
  }
  func_0x0001072854dc(uStack_1718);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010728561c();
    func_0x000107285514();
    dVar15 = *pdVar4;
    dVar13 = pdVar4[1];
    dVar14 = *pdVar5;
    dVar11 = pdVar5[1];
    uStack_1978 = extraout_x8_01;
    FUN_10727c2a8(auStack_1a88,param_8);
    auStack_1be0[0] = 0;
    uStack_1bc8 = 0;
    auStack_1bc0[0] = auStack_1bc0[0] & 0xffffffffffffff00;
    auStack_1bc0[4] = auStack_1bc0[4] & 0xffffffffffffff00;
    func_0x00010740e07c(auStack_1b10,param_5[1],auStack_1bc0);
    dVar12 = 0.0;
    auStack_1bc0[1] = 0;
    auStack_1bc0[0] = 0;
    auStack_1bc0[3] = 0;
    auStack_1bc0[2] = 0;
    FUN_10727ce6c(auStack_1af8,auStack_1bc0);
    dStack_1b30 = dVar12;
    dStack_1b28 = dVar9;
    dStack_1b20 = dVar10;
    dStack_1b18 = param_4;
    func_0x00010786ed1c(&dStack_1b30,*(undefined2 *)(*(long *)param_5[1] + 0xa4),
                        *(undefined2 *)(*(long *)param_5[1] + 0xa8));
    func_0x000107285b84();
    dVar12 = dVar15 - dVar12;
    dVar9 = dVar13 - dVar9;
    dVar8 = dVar12;
    _exp2();
    dVar7 = dVar9;
    _exp2();
    uVar1 = dVar8 + dVar7 == 40000.0;
    dVar10 = 40000.0;
    dVar6 = dVar12;
    if (dVar8 + dVar7 < 40000.0) {
      _atan2();
      ___sincos_stret();
      param_1 = dVar15 + dVar12 * -200.0;
      unaff_d11 = dVar13 + dVar9 * -200.0;
      dVar6 = dVar15 - param_1;
      dVar9 = dVar13 - unaff_d11;
      dVar10 = dVar12;
    }
    func_0x000107285d3c(uStack_1aa0);
    if ((bool)uVar1) {
      dStack_1aa8 = dVar10;
    }
    dVar8 = -((dVar14 - param_1) * dVar9) + (dVar11 - unaff_d11) * dVar6;
    _atan2(dVar8,dVar9 * (dVar11 - unaff_d11) + (dVar14 - param_1) * dVar6);
    dStack_1b58 = (dVar8 + dStack_1aa8 * -0.017453292519943295) * -57.29577951308232;
    uStack_1b4b = 0;
    uStack_1b4f = 0;
    uStack_1b47 = 0;
    uStack_1b43 = 0;
    uStack_1b3f = 0;
    uStack_1b3b = 0;
    auStack_1bc0[1] = 0;
    auStack_1bc0[0] = 0;
    auStack_1bc0[3] = 0;
    auStack_1bc0[2] = 0;
    auStack_1bc0[5] = 0;
    auStack_1bc0[4] = 0;
    auStack_1bc0[7] = 0;
    auStack_1bc0[6] = 0;
    auStack_1bc0[9] = 0;
    auStack_1bc0[8] = 0;
    auStack_1bc0[0xb] = 0;
    auStack_1bc0[10] = 0;
    auStack_1bc0[0xc] = 0;
    uStack_1b50 = 1;
    uStack_1b48 = 0;
    uStack_1b40 = 0;
    func_0x000107285778();
    func_0x0001001148fc(auStack_1be0);
    puVar3 = auStack_1a88;
    func_0x000107283610();
    func_0x0001072854dc(uStack_1978);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010728561c();
      NEON_ucvtf((ulong)*(uint *)(puVar3 + 0x50));
      func_0x000107417f00();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10727c7a8; end: 10727c83b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10727c7a8(double param_1,double param_2,double param_3,double param_4,double *param_5,
                  undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double unaff_d11;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_19d0 [24];
  undefined1 uStack_19b8;
  ulong auStack_19b0 [13];
  double dStack_1948;
  undefined1 uStack_1940;
  undefined4 uStack_193f;
  undefined3 uStack_193b;
  undefined1 uStack_1938;
  undefined4 uStack_1937;
  undefined3 uStack_1933;
  undefined1 uStack_1930;
  undefined4 uStack_192f;
  undefined3 uStack_192b;
  double dStack_1920;
  double dStack_1918;
  double dStack_1910;
  double dStack_1908;
  undefined1 auStack_1900 [24];
  undefined1 auStack_18e8 [80];
  double dStack_1898;
  undefined1 uStack_1890;
  undefined1 auStack_1878 [272];
  undefined8 uStack_1768;
  undefined1 auStack_16e8 [24];
  undefined1 uStack_16d0;
  undefined1 auStack_16c8 [32];
  undefined1 uStack_16a8;
  double adStack_16a0 [16];
  undefined1 uStack_1620;
  undefined4 uStack_161f;
  undefined3 uStack_161b;
  double adStack_1618 [34];
  undefined8 uStack_1508;
  double dStack_1500;
  double dStack_14f8;
  double dStack_14a0;
  double dStack_1498;
  double dStack_1490;
  undefined8 uStack_1488;
  double dStack_1480;
  undefined1 uStack_1478;
  undefined7 uStack_1477;
  double dStack_1470;
  undefined8 uStack_1468;
  undefined4 uStack_142c;
  undefined4 uStack_1427;
  undefined4 uStack_1407;
  undefined3 uStack_1403;
  undefined4 uStack_13ff;
  undefined3 uStack_13fb;
  undefined1 uStack_13f8;
  undefined7 uStack_13f7;
  undefined1 uStack_13f0;
  undefined7 uStack_13ef;
  double dStack_13e8;
  double dStack_13e0;
  undefined1 auStack_13d8 [76];
  undefined2 uStack_138c;
  ushort uStack_1388;
  double dStack_1330;
  double dStack_1328;
  double dStack_1320;
  undefined8 uStack_1318;
  double adStack_588 [34];
  undefined8 uStack_478;
  double adStack_400 [8];
  double dStack_3c0;
  double dStack_3b8;
  undefined1 uStack_3b0;
  double dStack_388;
  undefined1 uStack_380;
  double adStack_378 [34];
  undefined8 uStack_268;
  undefined8 uStack_58;
  
  func_0x000107285514();
  func_0x000107285720();
  func_0x000107285850();
  func_0x000107285a64();
  func_0x000107285640();
  func_0x0001072856a8();
  func_0x00010728585c();
  func_0x0001072854dc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855f0();
  func_0x00010728585c();
  func_0x00010728561c();
  dVar8 = param_1;
  dVar7 = param_2;
  dVar10 = param_3;
  func_0x000107285514();
  func_0x000107285720();
  uStack_380 = 1;
  uStack_3b0 = 1;
  dStack_3c0 = param_1;
  dStack_3b8 = param_2;
  dStack_388 = param_3;
  func_0x000107285850();
  func_0x000107285a64();
  pdVar4 = adStack_400;
  pdVar5 = adStack_378;
  func_0x000107285640();
  func_0x0001072856a8();
  func_0x00010728585c();
  func_0x0001072854dc(uStack_268);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855f0();
  func_0x00010728585c();
  func_0x00010728561c();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107285528();
  dVar6 = dVar8;
  dVar9 = dVar7;
  uStack_478 = extraout_x8;
  if (param_5[1] == 0.0) goto LAB_10727cad8;
  FUN_10727c2a8(adStack_588);
  func_0x000107285a64();
  puVar3 = auStack_13d8;
  func_0x000107285844(*(undefined8 *)param_5[1]);
  func_0x00010785f1f4();
  dStack_1480._0_1_ = 0;
  puVar3 = puVar3 + 0x9b0;
  FUN_10724e2c8(puVar3,&dStack_1480);
  if ((int)puVar3 == 0) {
LAB_10727ca64:
    dStack_1498 = dStack_1328;
    dStack_14a0 = dStack_1330;
    uStack_1488 = uStack_1318;
    dStack_1490 = dStack_1320;
    func_0x00010786ed1c(&dStack_14a0,uStack_138c,uStack_1388);
    dVar6 = dStack_1330 - dVar8;
    dVar9 = dStack_1320 - dVar7;
    dStack_13e8 = dVar6;
    dStack_13e0 = dVar9;
    func_0x0001072857b4();
    uStack_1427 = 0;
    uStack_142c = 0;
    func_0x000107285974();
    uStack_1403 = 0;
    uStack_1407 = 0;
    uStack_13fb = 0;
    uStack_13ff = 0;
    func_0x00010740ed34(param_5[1],&dStack_13e8);
    dStack_1480._0_1_ = SUB81(dVar6,0);
    dStack_1480._1_7_ = (undefined7)((ulong)dVar6 >> 8);
    uStack_1478 = SUB81(dVar9,0);
    uStack_1477 = (undefined7)((ulong)dVar9 >> 8);
    func_0x000107285780();
    pdVar4 = &dStack_1480;
    pdVar5 = adStack_588;
    func_0x000107285640();
  }
  else {
    iVar2 = (int)auStack_13d8;
    func_0x000107417d68();
    if (iVar2 == 0) goto LAB_10727ca64;
    uStack_1478 = SUB81(dStack_1328,0);
    uStack_1477 = (undefined7)((ulong)dStack_1328 >> 8);
    dStack_1480._0_1_ = SUB81(dStack_1330,0);
    dStack_1480._1_7_ = (undefined7)((ulong)dStack_1330 >> 8);
    uStack_1468 = uStack_1318;
    dStack_1470 = dStack_1320;
    pdVar5 = (double *)(ulong)uStack_1388;
    func_0x00010786ed1c(&dStack_1480,uStack_138c);
    dVar6 = dStack_1330 - dVar8;
    dVar9 = dStack_1320 - dVar7;
    dStack_14a0 = dStack_1330;
    dStack_1498 = dStack_1320;
    dStack_13e8 = dVar6;
    dStack_13e0 = dVar9;
    FUN_10727ce2c(auStack_13d8,&dStack_14a0);
    func_0x000107285a80();
    FUN_10727ce2c(auStack_13d8,&dStack_13e8);
    func_0x000107285b84();
    pdVar4 = (double *)0x0;
    func_0x00010741657c(auStack_13d8);
    dVar10 = unaff_d11 - dVar8;
    param_4 = param_1 - dVar7;
    dVar6 = param_4 + dVar6;
    dVar9 = dVar10 + dVar9;
    in_ZR = ABS(dVar6) == 1.79769313486232e+308;
    if (((ulong)ABS(dVar6) < 0x7ff0000000000000) && ((ulong)ABS(dVar9) < 0x7ff0000000000000)) {
      dVar6 = (double)NEON_fminnm(dVar6,0x4056800000000000);
      dVar10 = -90.0;
      if (dVar6 <= -90.0) {
        dVar6 = dVar10;
      }
      func_0x000107285748(&uStack_13f8);
      func_0x0001072857b4();
      uStack_142c = 0;
      uStack_1427 = 0;
      func_0x000107285974();
      uStack_1407 = 0;
      uStack_1403 = 0;
      uStack_13ff = 0;
      uStack_13fb = 0;
      dStack_1480._1_7_ = uStack_13f7;
      uStack_1478 = uStack_13f0;
      uStack_1477 = uStack_13ef;
      dStack_1480._0_1_ = uStack_13f8;
      func_0x000107285780();
      pdVar4 = &dStack_1480;
      pdVar5 = adStack_588;
      func_0x000107285640();
    }
  }
  func_0x0001072856a8();
  param_5 = adStack_588;
  func_0x000107283610();
  param_3 = dVar7;
  param_2 = dVar8;
LAB_10727cad8:
  func_0x0001072854dc(uStack_478);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  dStack_1500 = param_2;
  dStack_14f8 = param_3;
  func_0x000107285528();
  uStack_1508 = extraout_x8_00;
  if (param_5[1] != 0.0) {
    FUN_10727c2a8(adStack_1618);
    auStack_16e8[0] = 0;
    uStack_16d0 = 0;
    auStack_16c8[0] = 0;
    uStack_16a8 = 0;
    func_0x00010740e07c(adStack_16a0,param_5[1],auStack_16c8);
    func_0x000107285d3c(uStack_1620);
    if ((bool)in_ZR) {
      adStack_16a0[0xf] = dVar9;
    }
    (**(code **)((long)*param_5 + 0x90))(param_5,adStack_16a0[0xf] - dVar6,1);
    uStack_161b = 0;
    uStack_161f = 0;
    adStack_16a0[1] = 0.0;
    adStack_16a0[0] = 0.0;
    adStack_16a0[3] = 0.0;
    adStack_16a0[2] = 0.0;
    adStack_16a0[5] = 0.0;
    adStack_16a0[4] = 0.0;
    adStack_16a0[7] = 0.0;
    adStack_16a0[6] = 0.0;
    adStack_16a0[9] = 0.0;
    adStack_16a0[8] = 0.0;
    adStack_16a0[0xb] = 0.0;
    adStack_16a0[10] = 0.0;
    adStack_16a0[0xd] = 0.0;
    adStack_16a0[0xc] = 0.0;
    adStack_16a0[0xe] = 0.0;
    uStack_1620 = 1;
    pdVar4 = adStack_16a0;
    pdVar5 = adStack_1618;
    param_8 = auStack_16e8;
    adStack_16a0[0xf] = adStack_16a0[0xf] - dVar6;
    func_0x000107285778();
    func_0x000107285a78();
    param_5 = adStack_1618;
    func_0x000107283610();
  }
  func_0x0001072854dc(uStack_1508);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010728561c();
    func_0x000107285514();
    dVar15 = *pdVar4;
    dVar13 = pdVar4[1];
    dVar14 = *pdVar5;
    dVar11 = pdVar5[1];
    uStack_1768 = extraout_x8_01;
    FUN_10727c2a8(auStack_1878,param_8);
    auStack_19d0[0] = 0;
    uStack_19b8 = 0;
    auStack_19b0[0] = auStack_19b0[0] & 0xffffffffffffff00;
    auStack_19b0[4] = auStack_19b0[4] & 0xffffffffffffff00;
    func_0x00010740e07c(auStack_1900,param_5[1],auStack_19b0);
    dVar12 = 0.0;
    auStack_19b0[1] = 0;
    auStack_19b0[0] = 0;
    auStack_19b0[3] = 0;
    auStack_19b0[2] = 0;
    FUN_10727ce6c(auStack_18e8,auStack_19b0);
    dStack_1920 = dVar12;
    dStack_1918 = dVar9;
    dStack_1910 = dVar10;
    dStack_1908 = param_4;
    func_0x00010786ed1c(&dStack_1920,*(undefined2 *)(*(long *)param_5[1] + 0xa4),
                        *(undefined2 *)(*(long *)param_5[1] + 0xa8));
    func_0x000107285b84();
    dVar12 = dVar15 - dVar12;
    dVar9 = dVar13 - dVar9;
    dVar8 = dVar12;
    _exp2();
    dVar7 = dVar9;
    _exp2();
    uVar1 = dVar8 + dVar7 == 40000.0;
    dVar10 = 40000.0;
    dVar6 = dVar12;
    if (dVar8 + dVar7 < 40000.0) {
      _atan2();
      ___sincos_stret();
      param_1 = dVar15 + dVar12 * -200.0;
      unaff_d11 = dVar13 + dVar9 * -200.0;
      dVar6 = dVar15 - param_1;
      dVar9 = dVar13 - unaff_d11;
      dVar10 = dVar12;
    }
    func_0x000107285d3c(uStack_1890);
    if ((bool)uVar1) {
      dStack_1898 = dVar10;
    }
    dVar8 = -((dVar14 - param_1) * dVar9) + (dVar11 - unaff_d11) * dVar6;
    _atan2(dVar8,dVar9 * (dVar11 - unaff_d11) + (dVar14 - param_1) * dVar6);
    dStack_1948 = (dVar8 + dStack_1898 * -0.017453292519943295) * -57.29577951308232;
    uStack_193b = 0;
    uStack_193f = 0;
    uStack_1937 = 0;
    uStack_1933 = 0;
    uStack_192f = 0;
    uStack_192b = 0;
    auStack_19b0[1] = 0;
    auStack_19b0[0] = 0;
    auStack_19b0[3] = 0;
    auStack_19b0[2] = 0;
    auStack_19b0[5] = 0;
    auStack_19b0[4] = 0;
    auStack_19b0[7] = 0;
    auStack_19b0[6] = 0;
    auStack_19b0[9] = 0;
    auStack_19b0[8] = 0;
    auStack_19b0[0xb] = 0;
    auStack_19b0[10] = 0;
    auStack_19b0[0xc] = 0;
    uStack_1940 = 1;
    uStack_1938 = 0;
    uStack_1930 = 0;
    func_0x000107285778();
    func_0x0001001148fc(auStack_19d0);
    puVar3 = auStack_1878;
    func_0x000107283610();
    func_0x0001072854dc(uStack_1768);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010728561c();
      NEON_ucvtf((ulong)*(uint *)(puVar3 + 0x50));
      func_0x000107417f00();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10727c83c; end: 10727c8cf;  */

void FUN_10727c83c(double param_1,double param_2,double param_3,double param_4,double *param_5,
                  undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double unaff_d11;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_17c0 [24];
  undefined1 uStack_17a8;
  ulong auStack_17a0 [13];
  double dStack_1738;
  undefined1 uStack_1730;
  undefined4 uStack_172f;
  undefined3 uStack_172b;
  undefined1 uStack_1728;
  undefined4 uStack_1727;
  undefined3 uStack_1723;
  undefined1 uStack_1720;
  undefined4 uStack_171f;
  undefined3 uStack_171b;
  double dStack_1710;
  double dStack_1708;
  double dStack_1700;
  double dStack_16f8;
  undefined1 auStack_16f0 [24];
  undefined1 auStack_16d8 [80];
  double dStack_1688;
  undefined1 uStack_1680;
  undefined1 auStack_1668 [272];
  undefined8 uStack_1558;
  undefined1 auStack_14d8 [24];
  undefined1 uStack_14c0;
  undefined1 auStack_14b8 [32];
  undefined1 uStack_1498;
  double adStack_1490 [16];
  undefined1 uStack_1410;
  undefined4 uStack_140f;
  undefined3 uStack_140b;
  double adStack_1408 [34];
  undefined8 uStack_12f8;
  double dStack_12f0;
  double dStack_12e8;
  double dStack_1290;
  double dStack_1288;
  double dStack_1280;
  undefined8 uStack_1278;
  undefined1 uStack_1270;
  undefined7 uStack_126f;
  undefined1 uStack_1268;
  undefined7 uStack_1267;
  double dStack_1260;
  undefined8 uStack_1258;
  undefined4 uStack_121c;
  undefined4 uStack_1217;
  undefined4 uStack_11f7;
  undefined3 uStack_11f3;
  undefined4 uStack_11ef;
  undefined3 uStack_11eb;
  undefined1 uStack_11e8;
  undefined7 uStack_11e7;
  undefined1 uStack_11e0;
  undefined7 uStack_11df;
  double dStack_11d8;
  double dStack_11d0;
  undefined1 auStack_11c8 [76];
  undefined2 uStack_117c;
  ushort uStack_1178;
  double dStack_1120;
  double dStack_1118;
  double dStack_1110;
  undefined8 uStack_1108;
  double adStack_378 [34];
  undefined8 uStack_268;
  double adStack_1f0 [8];
  double dStack_1b0;
  double dStack_1a8;
  undefined1 uStack_1a0;
  double dStack_178;
  undefined1 uStack_170;
  double adStack_168 [34];
  undefined8 uStack_58;
  
  dVar8 = param_1;
  dVar7 = param_2;
  dVar10 = param_3;
  func_0x000107285514();
  func_0x000107285720();
  uStack_170 = 1;
  uStack_1a0 = 1;
  dStack_1b0 = param_1;
  dStack_1a8 = param_2;
  dStack_178 = param_3;
  func_0x000107285850();
  func_0x000107285a64();
  pdVar4 = adStack_1f0;
  pdVar5 = adStack_168;
  func_0x000107285640();
  func_0x0001072856a8();
  func_0x00010728585c();
  func_0x0001072854dc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072855f0();
  func_0x00010728585c();
  func_0x00010728561c();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107285528();
  dVar6 = dVar8;
  dVar9 = dVar7;
  uStack_268 = extraout_x8;
  if (param_5[1] == 0.0) goto LAB_10727cad8;
  FUN_10727c2a8(adStack_378);
  func_0x000107285a64();
  puVar3 = auStack_11c8;
  func_0x000107285844(*(undefined8 *)param_5[1]);
  func_0x00010785f1f4();
  uStack_1270 = 0;
  puVar3 = puVar3 + 0x9b0;
  FUN_10724e2c8(puVar3,&uStack_1270);
  if ((int)puVar3 == 0) {
LAB_10727ca64:
    dStack_1288 = dStack_1118;
    dStack_1290 = dStack_1120;
    uStack_1278 = uStack_1108;
    dStack_1280 = dStack_1110;
    func_0x00010786ed1c(&dStack_1290,uStack_117c,uStack_1178);
    dVar6 = dStack_1120 - dVar8;
    dVar9 = dStack_1110 - dVar7;
    dStack_11d8 = dVar6;
    dStack_11d0 = dVar9;
    func_0x0001072857b4();
    uStack_1217 = 0;
    uStack_121c = 0;
    func_0x000107285974();
    uStack_11f3 = 0;
    uStack_11f7 = 0;
    uStack_11eb = 0;
    uStack_11ef = 0;
    func_0x00010740ed34(param_5[1],&dStack_11d8);
    uStack_1270 = SUB81(dVar6,0);
    uStack_126f = (undefined7)((ulong)dVar6 >> 8);
    uStack_1268 = SUB81(dVar9,0);
    uStack_1267 = (undefined7)((ulong)dVar9 >> 8);
    func_0x000107285780();
    pdVar4 = (double *)&uStack_1270;
    pdVar5 = adStack_378;
    func_0x000107285640();
  }
  else {
    iVar2 = (int)auStack_11c8;
    func_0x000107417d68();
    if (iVar2 == 0) goto LAB_10727ca64;
    uStack_1268 = SUB81(dStack_1118,0);
    uStack_1267 = (undefined7)((ulong)dStack_1118 >> 8);
    uStack_1270 = SUB81(dStack_1120,0);
    uStack_126f = (undefined7)((ulong)dStack_1120 >> 8);
    uStack_1258 = uStack_1108;
    dStack_1260 = dStack_1110;
    pdVar5 = (double *)(ulong)uStack_1178;
    func_0x00010786ed1c(&uStack_1270,uStack_117c);
    dVar6 = dStack_1120 - dVar8;
    dVar9 = dStack_1110 - dVar7;
    dStack_1290 = dStack_1120;
    dStack_1288 = dStack_1110;
    dStack_11d8 = dVar6;
    dStack_11d0 = dVar9;
    FUN_10727ce2c(auStack_11c8,&dStack_1290);
    func_0x000107285a80();
    FUN_10727ce2c(auStack_11c8,&dStack_11d8);
    func_0x000107285b84();
    pdVar4 = (double *)0x0;
    func_0x00010741657c(auStack_11c8);
    dVar10 = unaff_d11 - dVar8;
    param_4 = param_1 - dVar7;
    dVar6 = param_4 + dVar6;
    dVar9 = dVar10 + dVar9;
    in_ZR = ABS(dVar6) == 1.79769313486232e+308;
    if (((ulong)ABS(dVar6) < 0x7ff0000000000000) && ((ulong)ABS(dVar9) < 0x7ff0000000000000)) {
      dVar6 = (double)NEON_fminnm(dVar6,0x4056800000000000);
      dVar10 = -90.0;
      if (dVar6 <= -90.0) {
        dVar6 = dVar10;
      }
      func_0x000107285748(&uStack_11e8);
      func_0x0001072857b4();
      uStack_121c = 0;
      uStack_1217 = 0;
      func_0x000107285974();
      uStack_11f7 = 0;
      uStack_11f3 = 0;
      uStack_11ef = 0;
      uStack_11eb = 0;
      uStack_126f = uStack_11e7;
      uStack_1268 = uStack_11e0;
      uStack_1267 = uStack_11df;
      uStack_1270 = uStack_11e8;
      func_0x000107285780();
      pdVar4 = (double *)&uStack_1270;
      pdVar5 = adStack_378;
      func_0x000107285640();
    }
  }
  func_0x0001072856a8();
  param_5 = adStack_378;
  func_0x000107283610();
  param_3 = dVar7;
  param_2 = dVar8;
LAB_10727cad8:
  func_0x0001072854dc(uStack_268);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  dStack_12f0 = param_2;
  dStack_12e8 = param_3;
  func_0x000107285528();
  uStack_12f8 = extraout_x8_00;
  if (param_5[1] != 0.0) {
    FUN_10727c2a8(adStack_1408);
    auStack_14d8[0] = 0;
    uStack_14c0 = 0;
    auStack_14b8[0] = 0;
    uStack_1498 = 0;
    func_0x00010740e07c(adStack_1490,param_5[1],auStack_14b8);
    func_0x000107285d3c(uStack_1410);
    if ((bool)in_ZR) {
      adStack_1490[0xf] = dVar9;
    }
    (**(code **)((long)*param_5 + 0x90))(param_5,adStack_1490[0xf] - dVar6,1);
    uStack_140b = 0;
    uStack_140f = 0;
    adStack_1490[1] = 0.0;
    adStack_1490[0] = 0.0;
    adStack_1490[3] = 0.0;
    adStack_1490[2] = 0.0;
    adStack_1490[5] = 0.0;
    adStack_1490[4] = 0.0;
    adStack_1490[7] = 0.0;
    adStack_1490[6] = 0.0;
    adStack_1490[9] = 0.0;
    adStack_1490[8] = 0.0;
    adStack_1490[0xb] = 0.0;
    adStack_1490[10] = 0.0;
    adStack_1490[0xd] = 0.0;
    adStack_1490[0xc] = 0.0;
    adStack_1490[0xe] = 0.0;
    uStack_1410 = 1;
    pdVar4 = adStack_1490;
    pdVar5 = adStack_1408;
    param_8 = auStack_14d8;
    adStack_1490[0xf] = adStack_1490[0xf] - dVar6;
    func_0x000107285778();
    func_0x000107285a78();
    param_5 = adStack_1408;
    func_0x000107283610();
  }
  func_0x0001072854dc(uStack_12f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  func_0x000107285514();
  dVar15 = *pdVar4;
  dVar13 = pdVar4[1];
  dVar14 = *pdVar5;
  dVar11 = pdVar5[1];
  uStack_1558 = extraout_x8_01;
  FUN_10727c2a8(auStack_1668,param_8);
  auStack_17c0[0] = 0;
  uStack_17a8 = 0;
  auStack_17a0[0] = auStack_17a0[0] & 0xffffffffffffff00;
  auStack_17a0[4] = auStack_17a0[4] & 0xffffffffffffff00;
  func_0x00010740e07c(auStack_16f0,param_5[1],auStack_17a0);
  dVar12 = 0.0;
  auStack_17a0[1] = 0;
  auStack_17a0[0] = 0;
  auStack_17a0[3] = 0;
  auStack_17a0[2] = 0;
  FUN_10727ce6c(auStack_16d8,auStack_17a0);
  dStack_1710 = dVar12;
  dStack_1708 = dVar9;
  dStack_1700 = dVar10;
  dStack_16f8 = param_4;
  func_0x00010786ed1c(&dStack_1710,*(undefined2 *)(*(long *)param_5[1] + 0xa4),
                      *(undefined2 *)(*(long *)param_5[1] + 0xa8));
  func_0x000107285b84();
  dVar12 = dVar15 - dVar12;
  dVar9 = dVar13 - dVar9;
  dVar8 = dVar12;
  _exp2();
  dVar7 = dVar9;
  _exp2();
  uVar1 = dVar8 + dVar7 == 40000.0;
  dVar10 = 40000.0;
  dVar6 = dVar12;
  if (dVar8 + dVar7 < 40000.0) {
    _atan2();
    ___sincos_stret();
    param_1 = dVar15 + dVar12 * -200.0;
    unaff_d11 = dVar13 + dVar9 * -200.0;
    dVar6 = dVar15 - param_1;
    dVar9 = dVar13 - unaff_d11;
    dVar10 = dVar12;
  }
  func_0x000107285d3c(uStack_1680);
  if ((bool)uVar1) {
    dStack_1688 = dVar10;
  }
  dVar8 = -((dVar14 - param_1) * dVar9) + (dVar11 - unaff_d11) * dVar6;
  _atan2(dVar8,dVar9 * (dVar11 - unaff_d11) + (dVar14 - param_1) * dVar6);
  dStack_1738 = (dVar8 + dStack_1688 * -0.017453292519943295) * -57.29577951308232;
  uStack_172b = 0;
  uStack_172f = 0;
  uStack_1727 = 0;
  uStack_1723 = 0;
  uStack_171f = 0;
  uStack_171b = 0;
  auStack_17a0[1] = 0;
  auStack_17a0[0] = 0;
  auStack_17a0[3] = 0;
  auStack_17a0[2] = 0;
  auStack_17a0[5] = 0;
  auStack_17a0[4] = 0;
  auStack_17a0[7] = 0;
  auStack_17a0[6] = 0;
  auStack_17a0[9] = 0;
  auStack_17a0[8] = 0;
  auStack_17a0[0xb] = 0;
  auStack_17a0[10] = 0;
  auStack_17a0[0xc] = 0;
  uStack_1730 = 1;
  uStack_1728 = 0;
  uStack_1720 = 0;
  func_0x000107285778();
  func_0x0001001148fc(auStack_17c0);
  puVar3 = auStack_1668;
  func_0x000107283610();
  func_0x0001072854dc(uStack_1558);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  NEON_ucvtf((ulong)*(uint *)(puVar3 + 0x50));
  func_0x000107417f00();
  return;
}



/* Entry: 10727c8d0; end: 10727cb1f;  */

void FUN_10727c8d0(double param_1,double param_2,double param_3,double param_4,double *param_5,
                  double *param_6,double *param_7,undefined1 *param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double unaff_d8;
  double dVar8;
  double dVar9;
  double dVar10;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_15b0 [24];
  undefined1 uStack_1598;
  ulong auStack_1590 [13];
  double dStack_1528;
  undefined1 uStack_1520;
  undefined4 uStack_151f;
  undefined3 uStack_151b;
  undefined1 uStack_1518;
  undefined4 uStack_1517;
  undefined3 uStack_1513;
  undefined1 uStack_1510;
  undefined4 uStack_150f;
  undefined3 uStack_150b;
  double dStack_1500;
  double dStack_14f8;
  double dStack_14f0;
  double dStack_14e8;
  undefined1 auStack_14e0 [24];
  undefined1 auStack_14c8 [80];
  double dStack_1478;
  undefined1 uStack_1470;
  undefined1 auStack_1458 [272];
  undefined8 uStack_1348;
  undefined1 auStack_12c8 [24];
  undefined1 uStack_12b0;
  undefined1 auStack_12a8 [32];
  undefined1 uStack_1288;
  double adStack_1280 [16];
  undefined1 uStack_1200;
  undefined4 uStack_11ff;
  undefined3 uStack_11fb;
  double adStack_11f8 [34];
  undefined8 uStack_10e8;
  double dStack_10e0;
  double dStack_10d8;
  double dStack_1080;
  double dStack_1078;
  double dStack_1070;
  undefined8 uStack_1068;
  undefined1 uStack_1060;
  undefined7 uStack_105f;
  undefined1 uStack_1058;
  undefined7 uStack_1057;
  double dStack_1050;
  undefined8 uStack_1048;
  undefined4 uStack_100c;
  undefined4 uStack_1007;
  undefined4 uStack_fe7;
  undefined3 uStack_fe3;
  undefined4 uStack_fdf;
  undefined3 uStack_fdb;
  undefined1 uStack_fd8;
  undefined7 uStack_fd7;
  undefined1 uStack_fd0;
  undefined7 uStack_fcf;
  double dStack_fc8;
  double dStack_fc0;
  undefined1 auStack_fb8 [76];
  undefined2 uStack_f6c;
  ushort uStack_f68;
  double dStack_f10;
  double dStack_f08;
  double dStack_f00;
  undefined8 uStack_ef8;
  double adStack_168 [34];
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107285528();
  dVar4 = param_1;
  dVar6 = param_2;
  uStack_58 = extraout_x8;
  if (param_5[1] == 0.0) goto LAB_10727cad8;
  FUN_10727c2a8(adStack_168);
  func_0x000107285a64();
  puVar3 = auStack_fb8;
  func_0x000107285844(*(undefined8 *)param_5[1]);
  func_0x00010785f1f4();
  uStack_1060 = 0;
  puVar3 = puVar3 + 0x9b0;
  FUN_10724e2c8(puVar3,&uStack_1060);
  if ((int)puVar3 == 0) {
LAB_10727ca64:
    dStack_1078 = dStack_f08;
    dStack_1080 = dStack_f10;
    uStack_1068 = uStack_ef8;
    dStack_1070 = dStack_f00;
    func_0x00010786ed1c(&dStack_1080,uStack_f6c,uStack_f68);
    dVar4 = dStack_f10 - param_1;
    dVar6 = dStack_f00 - param_2;
    dStack_fc8 = dVar4;
    dStack_fc0 = dVar6;
    func_0x0001072857b4();
    uStack_1007 = 0;
    uStack_100c = 0;
    func_0x000107285974();
    uStack_fe3 = 0;
    uStack_fe7 = 0;
    uStack_fdb = 0;
    uStack_fdf = 0;
    func_0x00010740ed34(param_5[1],&dStack_fc8);
    uStack_1060 = SUB81(dVar4,0);
    uStack_105f = (undefined7)((ulong)dVar4 >> 8);
    uStack_1058 = SUB81(dVar6,0);
    uStack_1057 = (undefined7)((ulong)dVar6 >> 8);
    func_0x000107285780();
    param_6 = (double *)&uStack_1060;
    param_7 = adStack_168;
    func_0x000107285640();
  }
  else {
    iVar2 = (int)auStack_fb8;
    func_0x000107417d68();
    if (iVar2 == 0) goto LAB_10727ca64;
    uStack_1058 = SUB81(dStack_f08,0);
    uStack_1057 = (undefined7)((ulong)dStack_f08 >> 8);
    uStack_1060 = SUB81(dStack_f10,0);
    uStack_105f = (undefined7)((ulong)dStack_f10 >> 8);
    uStack_1048 = uStack_ef8;
    dStack_1050 = dStack_f00;
    param_7 = (double *)(ulong)uStack_f68;
    func_0x00010786ed1c(&uStack_1060,uStack_f6c);
    dVar4 = dStack_f10 - param_1;
    dVar6 = dStack_f00 - param_2;
    dStack_1080 = dStack_f10;
    dStack_1078 = dStack_f00;
    dStack_fc8 = dVar4;
    dStack_fc0 = dVar6;
    FUN_10727ce2c(auStack_fb8,&dStack_1080);
    func_0x000107285a80();
    FUN_10727ce2c(auStack_fb8,&dStack_fc8);
    func_0x000107285b84();
    param_6 = (double *)0x0;
    func_0x00010741657c(auStack_fb8);
    param_3 = unaff_d11 - param_1;
    param_4 = unaff_d10 - param_2;
    dVar4 = param_4 + dVar4;
    dVar6 = param_3 + dVar6;
    in_ZR = ABS(dVar4) == 1.79769313486232e+308;
    if (((ulong)ABS(dVar4) < 0x7ff0000000000000) && ((ulong)ABS(dVar6) < 0x7ff0000000000000)) {
      dVar4 = (double)NEON_fminnm(dVar4,0x4056800000000000);
      param_3 = -90.0;
      if (dVar4 <= -90.0) {
        dVar4 = param_3;
      }
      func_0x000107285748(&uStack_fd8);
      func_0x0001072857b4();
      uStack_100c = 0;
      uStack_1007 = 0;
      func_0x000107285974();
      uStack_fe7 = 0;
      uStack_fe3 = 0;
      uStack_fdf = 0;
      uStack_fdb = 0;
      uStack_105f = uStack_fd7;
      uStack_1058 = uStack_fd0;
      uStack_1057 = uStack_fcf;
      uStack_1060 = uStack_fd8;
      func_0x000107285780();
      param_6 = (double *)&uStack_1060;
      param_7 = adStack_168;
      func_0x000107285640();
    }
  }
  func_0x0001072856a8();
  param_5 = adStack_168;
  func_0x000107283610();
  unaff_d8 = param_2;
  unaff_d9 = param_1;
LAB_10727cad8:
  func_0x0001072854dc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  dStack_10e0 = unaff_d9;
  dStack_10d8 = unaff_d8;
  func_0x000107285528();
  uStack_10e8 = extraout_x8_00;
  if (param_5[1] != 0.0) {
    FUN_10727c2a8(adStack_11f8);
    auStack_12c8[0] = 0;
    uStack_12b0 = 0;
    auStack_12a8[0] = 0;
    uStack_1288 = 0;
    func_0x00010740e07c(adStack_1280,param_5[1],auStack_12a8);
    func_0x000107285d3c(uStack_1200);
    if ((bool)in_ZR) {
      adStack_1280[0xf] = dVar6;
    }
    (**(code **)((long)*param_5 + 0x90))(param_5,adStack_1280[0xf] - dVar4,1);
    uStack_11fb = 0;
    uStack_11ff = 0;
    adStack_1280[1] = 0.0;
    adStack_1280[0] = 0.0;
    adStack_1280[3] = 0.0;
    adStack_1280[2] = 0.0;
    adStack_1280[5] = 0.0;
    adStack_1280[4] = 0.0;
    adStack_1280[7] = 0.0;
    adStack_1280[6] = 0.0;
    adStack_1280[9] = 0.0;
    adStack_1280[8] = 0.0;
    adStack_1280[0xb] = 0.0;
    adStack_1280[10] = 0.0;
    adStack_1280[0xd] = 0.0;
    adStack_1280[0xc] = 0.0;
    adStack_1280[0xe] = 0.0;
    uStack_1200 = 1;
    param_6 = adStack_1280;
    param_7 = adStack_11f8;
    param_8 = auStack_12c8;
    adStack_1280[0xf] = adStack_1280[0xf] - dVar4;
    func_0x000107285778();
    func_0x000107285a78();
    param_5 = adStack_11f8;
    func_0x000107283610();
  }
  func_0x0001072854dc(uStack_10e8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  func_0x000107285514();
  dVar13 = *param_6;
  dVar11 = param_6[1];
  dVar12 = *param_7;
  dVar8 = param_7[1];
  uStack_1348 = extraout_x8_01;
  FUN_10727c2a8(auStack_1458,param_8);
  auStack_15b0[0] = 0;
  uStack_1598 = 0;
  auStack_1590[0] = auStack_1590[0] & 0xffffffffffffff00;
  auStack_1590[4] = auStack_1590[4] & 0xffffffffffffff00;
  func_0x00010740e07c(auStack_14e0,param_5[1],auStack_1590);
  dVar9 = 0.0;
  auStack_1590[1] = 0;
  auStack_1590[0] = 0;
  auStack_1590[3] = 0;
  auStack_1590[2] = 0;
  FUN_10727ce6c(auStack_14c8,auStack_1590);
  dStack_1500 = dVar9;
  dStack_14f8 = dVar6;
  dStack_14f0 = param_3;
  dStack_14e8 = param_4;
  func_0x00010786ed1c(&dStack_1500,*(undefined2 *)(*(long *)param_5[1] + 0xa4),
                      *(undefined2 *)(*(long *)param_5[1] + 0xa8));
  func_0x000107285b84();
  dVar9 = dVar13 - dVar9;
  dVar6 = dVar11 - dVar6;
  dVar4 = dVar9;
  _exp2();
  dVar5 = dVar6;
  _exp2();
  uVar1 = dVar4 + dVar5 == 40000.0;
  dVar7 = 40000.0;
  dVar10 = dVar9;
  if (dVar4 + dVar5 < 40000.0) {
    _atan2();
    ___sincos_stret();
    unaff_d10 = dVar13 + dVar9 * -200.0;
    unaff_d11 = dVar11 + dVar6 * -200.0;
    dVar10 = dVar13 - unaff_d10;
    dVar6 = dVar11 - unaff_d11;
    dVar7 = dVar9;
  }
  func_0x000107285d3c(uStack_1470);
  if ((bool)uVar1) {
    dStack_1478 = dVar7;
  }
  dVar4 = -((dVar12 - unaff_d10) * dVar6) + (dVar8 - unaff_d11) * dVar10;
  _atan2(dVar4,dVar6 * (dVar8 - unaff_d11) + (dVar12 - unaff_d10) * dVar10);
  dStack_1528 = (dVar4 + dStack_1478 * -0.017453292519943295) * -57.29577951308232;
  uStack_151b = 0;
  uStack_151f = 0;
  uStack_1517 = 0;
  uStack_1513 = 0;
  uStack_150f = 0;
  uStack_150b = 0;
  auStack_1590[1] = 0;
  auStack_1590[0] = 0;
  auStack_1590[3] = 0;
  auStack_1590[2] = 0;
  auStack_1590[5] = 0;
  auStack_1590[4] = 0;
  auStack_1590[7] = 0;
  auStack_1590[6] = 0;
  auStack_1590[9] = 0;
  auStack_1590[8] = 0;
  auStack_1590[0xb] = 0;
  auStack_1590[10] = 0;
  auStack_1590[0xc] = 0;
  uStack_1520 = 1;
  uStack_1518 = 0;
  uStack_1510 = 0;
  func_0x000107285778();
  func_0x0001001148fc(auStack_15b0);
  puVar3 = auStack_1458;
  func_0x000107283610();
  func_0x0001072854dc(uStack_1348);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  NEON_ucvtf((ulong)*(uint *)(puVar3 + 0x50));
  func_0x000107417f00();
  return;
}



/* Entry: 10727cb20; end: 10727cc33;  */

void FUN_10727cb20(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5,double *param_6,double *param_7,undefined1 *param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double unaff_d10;
  double unaff_d11;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_510 [24];
  undefined1 uStack_4f8;
  ulong auStack_4f0 [13];
  double dStack_488;
  undefined1 uStack_480;
  undefined4 uStack_47f;
  undefined3 uStack_47b;
  undefined1 uStack_478;
  undefined4 uStack_477;
  undefined3 uStack_473;
  undefined1 uStack_470;
  undefined4 uStack_46f;
  undefined3 uStack_46b;
  double dStack_460;
  double dStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [80];
  double dStack_3d8;
  undefined1 uStack_3d0;
  undefined1 auStack_3b8 [272];
  undefined8 uStack_2a8;
  undefined1 auStack_228 [24];
  undefined1 uStack_210;
  undefined1 auStack_208 [32];
  undefined1 uStack_1e8;
  double adStack_1e0 [16];
  undefined1 uStack_160;
  undefined4 uStack_15f;
  undefined3 uStack_15b;
  double adStack_158 [34];
  undefined8 uStack_48;
  
  func_0x000107285528();
  uStack_48 = extraout_x8;
  if (param_5[1] != 0.0) {
    FUN_10727c2a8(adStack_158);
    auStack_228[0] = 0;
    uStack_210 = 0;
    auStack_208[0] = 0;
    uStack_1e8 = 0;
    func_0x00010740e07c(adStack_1e0,param_5[1],auStack_208);
    func_0x000107285d3c(uStack_160);
    if ((bool)in_ZR) {
      adStack_1e0[0xf] = param_2;
    }
    (**(code **)((long)*param_5 + 0x90))(param_5,adStack_1e0[0xf] - param_1,1);
    uStack_15b = 0;
    uStack_15f = 0;
    adStack_1e0[1] = 0.0;
    adStack_1e0[0] = 0.0;
    adStack_1e0[3] = 0.0;
    adStack_1e0[2] = 0.0;
    adStack_1e0[5] = 0.0;
    adStack_1e0[4] = 0.0;
    adStack_1e0[7] = 0.0;
    adStack_1e0[6] = 0.0;
    adStack_1e0[9] = 0.0;
    adStack_1e0[8] = 0.0;
    adStack_1e0[0xb] = 0.0;
    adStack_1e0[10] = 0.0;
    adStack_1e0[0xd] = 0.0;
    adStack_1e0[0xc] = 0.0;
    adStack_1e0[0xe] = 0.0;
    uStack_160 = 1;
    param_6 = adStack_1e0;
    param_7 = adStack_158;
    param_8 = auStack_228;
    adStack_1e0[0xf] = adStack_1e0[0xf] - param_1;
    func_0x000107285778();
    func_0x000107285a78();
    param_5 = adStack_158;
    func_0x000107283610();
  }
  func_0x0001072854dc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  func_0x000107285514();
  dVar11 = *param_6;
  dVar9 = param_6[1];
  dVar10 = *param_7;
  dVar6 = param_7[1];
  uStack_2a8 = extraout_x8_00;
  FUN_10727c2a8(auStack_3b8,param_8);
  auStack_510[0] = 0;
  uStack_4f8 = 0;
  auStack_4f0[0] = auStack_4f0[0] & 0xffffffffffffff00;
  auStack_4f0[4] = auStack_4f0[4] & 0xffffffffffffff00;
  func_0x00010740e07c(auStack_440,param_5[1],auStack_4f0);
  dVar7 = 0.0;
  auStack_4f0[1] = 0;
  auStack_4f0[0] = 0;
  auStack_4f0[3] = 0;
  auStack_4f0[2] = 0;
  FUN_10727ce6c(auStack_428,auStack_4f0);
  dStack_460 = dVar7;
  dStack_458 = param_2;
  uStack_450 = param_3;
  uStack_448 = param_4;
  func_0x00010786ed1c(&dStack_460,*(undefined2 *)(*(long *)param_5[1] + 0xa4),
                      *(undefined2 *)(*(long *)param_5[1] + 0xa8));
  func_0x000107285b84();
  dVar7 = dVar11 - dVar7;
  param_2 = dVar9 - param_2;
  dVar4 = dVar7;
  _exp2();
  dVar3 = param_2;
  _exp2();
  uVar1 = dVar4 + dVar3 == 40000.0;
  dVar5 = 40000.0;
  dVar8 = dVar7;
  if (dVar4 + dVar3 < 40000.0) {
    _atan2();
    ___sincos_stret();
    unaff_d10 = dVar11 + dVar7 * -200.0;
    unaff_d11 = dVar9 + param_2 * -200.0;
    dVar8 = dVar11 - unaff_d10;
    param_2 = dVar9 - unaff_d11;
    dVar5 = dVar7;
  }
  func_0x000107285d3c(uStack_3d0);
  if ((bool)uVar1) {
    dStack_3d8 = dVar5;
  }
  dVar4 = -((dVar10 - unaff_d10) * param_2) + (dVar6 - unaff_d11) * dVar8;
  _atan2(dVar4,param_2 * (dVar6 - unaff_d11) + (dVar10 - unaff_d10) * dVar8);
  dStack_488 = (dVar4 + dStack_3d8 * -0.017453292519943295) * -57.29577951308232;
  uStack_47b = 0;
  uStack_47f = 0;
  uStack_477 = 0;
  uStack_473 = 0;
  uStack_46f = 0;
  uStack_46b = 0;
  auStack_4f0[1] = 0;
  auStack_4f0[0] = 0;
  auStack_4f0[3] = 0;
  auStack_4f0[2] = 0;
  auStack_4f0[5] = 0;
  auStack_4f0[4] = 0;
  auStack_4f0[7] = 0;
  auStack_4f0[6] = 0;
  auStack_4f0[9] = 0;
  auStack_4f0[8] = 0;
  auStack_4f0[0xb] = 0;
  auStack_4f0[10] = 0;
  auStack_4f0[0xc] = 0;
  uStack_480 = 1;
  uStack_478 = 0;
  uStack_470 = 0;
  func_0x000107285778();
  func_0x0001001148fc(auStack_510);
  puVar2 = auStack_3b8;
  func_0x000107283610();
  func_0x0001072854dc(uStack_2a8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  NEON_ucvtf((ulong)*(uint *)(puVar2 + 0x50));
  func_0x000107417f00();
  return;
}



/* Entry: 10727cc34; end: 10727ce2b;  */

void FUN_10727cc34(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,double *param_6,double *param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double unaff_d10;
  double unaff_d11;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_2e0 [24];
  undefined1 uStack_2c8;
  ulong auStack_2c0 [13];
  double dStack_258;
  undefined1 uStack_250;
  undefined4 uStack_24f;
  undefined3 uStack_24b;
  undefined1 uStack_248;
  undefined4 uStack_247;
  undefined3 uStack_243;
  undefined1 uStack_240;
  undefined4 uStack_23f;
  undefined3 uStack_23b;
  double dStack_230;
  double dStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [80];
  double dStack_1a8;
  undefined1 uStack_1a0;
  undefined1 auStack_188 [272];
  undefined8 uStack_78;
  
  func_0x000107285514();
  dVar11 = *param_6;
  dVar9 = param_6[1];
  dVar10 = *param_7;
  dVar6 = param_7[1];
  uStack_78 = extraout_x8;
  FUN_10727c2a8(auStack_188,param_8);
  auStack_2e0[0] = 0;
  uStack_2c8 = 0;
  auStack_2c0[0] = auStack_2c0[0] & 0xffffffffffffff00;
  auStack_2c0[4] = auStack_2c0[4] & 0xffffffffffffff00;
  func_0x00010740e07c(auStack_210,*(undefined8 *)(unaff_x19 + 8),auStack_2c0);
  dVar7 = 0.0;
  auStack_2c0[1] = 0;
  auStack_2c0[0] = 0;
  auStack_2c0[3] = 0;
  auStack_2c0[2] = 0;
  FUN_10727ce6c(auStack_1f8,auStack_2c0);
  dStack_230 = dVar7;
  dStack_228 = param_2;
  uStack_220 = param_3;
  uStack_218 = param_4;
  func_0x00010786ed1c(&dStack_230,*(undefined2 *)(**(long **)(unaff_x19 + 8) + 0xa4),
                      *(undefined2 *)(**(long **)(unaff_x19 + 8) + 0xa8));
  func_0x000107285b84();
  dVar7 = dVar11 - dVar7;
  param_2 = dVar9 - param_2;
  dVar4 = dVar7;
  _exp2();
  dVar3 = param_2;
  _exp2();
  uVar1 = dVar4 + dVar3 == 40000.0;
  dVar5 = 40000.0;
  dVar8 = dVar7;
  if (dVar4 + dVar3 < 40000.0) {
    _atan2();
    ___sincos_stret();
    unaff_d10 = dVar11 + dVar7 * -200.0;
    unaff_d11 = dVar9 + param_2 * -200.0;
    dVar8 = dVar11 - unaff_d10;
    param_2 = dVar9 - unaff_d11;
    dVar5 = dVar7;
  }
  func_0x000107285d3c(uStack_1a0);
  if ((bool)uVar1) {
    dStack_1a8 = dVar5;
  }
  dVar4 = -((dVar10 - unaff_d10) * param_2) + (dVar6 - unaff_d11) * dVar8;
  _atan2(dVar4,param_2 * (dVar6 - unaff_d11) + (dVar10 - unaff_d10) * dVar8);
  dStack_258 = (dVar4 + dStack_1a8 * -0.017453292519943295) * -57.29577951308232;
  uStack_24b = 0;
  uStack_24f = 0;
  uStack_247 = 0;
  uStack_243 = 0;
  uStack_23f = 0;
  uStack_23b = 0;
  auStack_2c0[1] = 0;
  auStack_2c0[0] = 0;
  auStack_2c0[3] = 0;
  auStack_2c0[2] = 0;
  auStack_2c0[5] = 0;
  auStack_2c0[4] = 0;
  auStack_2c0[7] = 0;
  auStack_2c0[6] = 0;
  auStack_2c0[9] = 0;
  auStack_2c0[8] = 0;
  auStack_2c0[0xb] = 0;
  auStack_2c0[10] = 0;
  auStack_2c0[0xc] = 0;
  uStack_250 = 1;
  uStack_248 = 0;
  uStack_240 = 0;
  func_0x000107285778();
  func_0x0001001148fc(auStack_2e0);
  puVar2 = auStack_188;
  func_0x000107283610();
  func_0x0001072854dc(uStack_78);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728561c();
  NEON_ucvtf((ulong)*(uint *)(puVar2 + 0x50));
  func_0x000107417f00();
  return;
}



/* Entry: 10727ce2c; end: 10727ce6b;  */

void FUN_10727ce2c(long param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  double dStack_18;
  
  uStack_20 = *param_2;
  dStack_18 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 0x50));
  dStack_18 = dStack_18 - (double)param_2[1];
  func_0x000107417f00(param_1,&uStack_20,0);
  return;
}



/* Entry: 10727ce6c; end: 10727ce83;  */

undefined8 FUN_10727ce6c(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 4) == '\0') {
    param_1 = param_2;
  }
  return *param_1;
}



/* Entry: 10727ce84; end: 10727cf1b;  */

void FUN_10727ce84(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar14;
  undefined8 *puStack_10a0;
  undefined8 *puStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined **ppuStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined4 uStack_1050;
  undefined4 uStack_1048;
  undefined1 uStack_1044;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  ulong uStack_1030;
  undefined1 uStack_1028;
  undefined1 auStack_220 [24];
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 auStack_1d8 [136];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  double dVar13;
  
  if ((*(long **)(param_1 + 8) != (long *)0x0) &&
     (param_2 != *(byte *)(**(long **)(param_1 + 8) + 0xb7))) {
    if ((param_2 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x1d8) & 1) == 0) {
        puVar11 = *(undefined8 **)(param_1 + 0x458);
        puVar6 = *(undefined8 **)(param_1 + 0x450);
        while( true ) {
          if (puVar6 == puVar11) break;
          func_0x0001072856d8(*puVar6);
          puVar6 = puVar6 + 2;
        }
      }
    }
    else if ((*(byte *)(param_1 + 0x1d8) & 1) == 0) {
      puVar11 = *(undefined8 **)(param_1 + 0x440);
      puVar6 = *(undefined8 **)(param_1 + 0x438);
      while( true ) {
        if (puVar6 == puVar11) break;
        func_0x0001072856d8(*puVar6);
        puVar6 = puVar6 + 2;
      }
    }
    lVar5 = **(long **)(param_1 + 8);
    *(char *)(lVar5 + 0xb7) = (char)param_2;
    puVar7 = &UNK_10de67fc9;
    (*(code *)PTR____chkstk_darwin_11034bd40)(lVar5,&UNK_10de67fc9);
    uVar9 = *(undefined8 *)(lVar5 + 0x48);
    uStack_1090 = (undefined8 *)CONCAT44(uStack_1090._4_4_,0x76);
    uStack_1078 = (undefined8 *)((ulong)uStack_1078._4_4_ << 0x20);
    uStack_1060 = 0;
    uStack_1058 = 0;
    ppuStack_1070 = &PTR_FUN_110996720;
    uStack_1068 = 0;
    uStack_1050 = 0x76;
    uStack_1048 = 0;
    uStack_1044 = 1;
    uStack_1038 = 0;
    uStack_1030 = 0;
    uStack_1040 = 0;
    puVar6 = &uStack_1090;
    FUN_10729d56c(puVar6,"reason",puVar7);
    uStack_80 = 1;
    uStack_78 = 0;
    puStack_60 = (undefined8 *)**(undefined8 **)(lVar5 + 0x48);
    uStack_58 = 3;
    func_0x00010743fa9c(uVar9,puVar6,&uStack_80,&puStack_60,7);
    puVar6 = &uStack_1090;
    FUN_107262330();
    if (*(int *)(lVar5 + 0x10d0) == 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
    }
    else {
      puVar6 = (undefined8 *)0x7fffffffffffffff;
    }
    lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
    uStack_1080 = *(undefined8 *)(lVar8 + 0x1a0);
    uStack_1088 = *(undefined8 *)(lVar8 + 0x198);
    ppuStack_1070 = *(undefined ***)(lVar8 + 0x1b0);
    uStack_1078 = *(undefined8 **)(lVar8 + 0x1a8);
    uStack_1068 = *(undefined8 *)(lVar8 + 0x1b8);
    uStack_1090 = puVar6;
    puStack_60 = puVar6;
    if (*(long *)(lVar5 + 0x1168) != **(long **)(lVar8 + 0x1c8)) {
      func_0x000107410e94(lVar5 + 0x1168);
      func_0x0001074e31dc(lVar5 + 0x1168,&uStack_1090);
    }
    uVar12 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa4));
    dVar13 = (double)(ulong)uVar12;
    uVar14 = NEON_ucvtf(*(undefined4 *)(lVar5 + 0xa8));
    *(uint *)(lVar5 + 0x143c) = uVar12;
    *(undefined4 *)(lVar5 + 0x1440) = uVar14;
    func_0x000107411798();
    func_0x0001074e33b8((float)dVar13,lVar5 + 0x1168);
    func_0x0001074e3804(&uStack_80,lVar5 + 0x1168);
    func_0x000107413c78(lVar5 + 0x50,&uStack_80);
    func_0x0001074137f8(lVar5 + 0x50,&puStack_60);
    if (*(char *)(lVar5 + 0x1164) == '\x01') {
      uStack_1090 = (undefined8 *)((ulong)uStack_1090 & 0xffffffffffffff00);
      func_0x0001074117a0();
      uStack_1030 = uStack_1030 & 0xffffffffffffff00;
      uStack_1028 = 0;
      func_0x000107410058(lVar5,&uStack_1090);
    }
    lVar8 = *(long *)(lVar5 + 0x10f8);
    uVar4 = (undefined1)*(undefined8 *)(lVar8 + 8);
    func_0x0001077c5a6c();
    uStack_1090 = (undefined8 *)CONCAT71(uStack_1090._1_7_,uVar4);
    uStack_1090 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar5 + 0x10d0),(undefined4)uStack_1090);
    uStack_1088 = CONCAT44(*(undefined4 *)(lVar5 + 0x10dc),*(undefined4 *)(lVar5 + 0x10d4));
    uStack_1080 = CONCAT71(uStack_1080._1_7_,*(undefined1 *)(lVar5 + 0x10e0));
    uStack_1078 = puStack_60;
    _memcpy(&ppuStack_1070,lVar5 + 0x58,0xe50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_220,*(long *)(lVar8 + 8) + 0x90);
    lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
    uStack_208 = *(undefined1 *)(lVar8 + 0x22);
    uStack_1f8 = *(undefined8 *)(lVar8 + 0x1a0);
    uStack_200 = *(undefined8 *)(lVar8 + 0x198);
    uStack_1e0 = (undefined1)*(undefined8 *)(lVar8 + 0x1b8);
    uStack_1df = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b8) >> 8);
    uStack_1e8 = (undefined1)*(undefined8 *)(lVar8 + 0x1b0);
    uStack_1e7 = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1b0) >> 8);
    uStack_1f0 = (undefined1)*(undefined8 *)(lVar8 + 0x1a8);
    uStack_1ef = (undefined7)((ulong)*(undefined8 *)(lVar8 + 0x1a8) >> 8);
    func_0x000107411660(auStack_1d8,*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 0x108);
    puVar6 = &uStack_1090;
    uStack_150 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x10f8) + 8) + 400);
    lVar8 = *(long *)(*(long *)(lVar5 + 0x10f8) + 8);
    puVar11 = *(undefined8 **)(lVar8 + 0x1c0);
    lStack_140 = puVar11[1];
    uStack_148 = *puVar11;
    if (puVar11[1] != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11 != 0);
      func_0x0001074117c0();
      puVar6 = extraout_x8;
      lVar8 = extraout_x9;
    }
    lStack_130 = *(long *)(lVar8 + 0xb0);
    uStack_138 = *(undefined8 *)(lVar8 + 0xa8);
    if (*(long *)(lVar8 + 0xb0) != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_00 != 0);
      func_0x0001074117c0();
      puVar6 = extraout_x8_00;
      lVar8 = extraout_x9_00;
    }
    lStack_120 = *(long *)(lVar8 + 0xd8);
    uStack_128 = *(undefined8 *)(lVar8 + 0xd0);
    if (*(long *)(lVar8 + 0xd8) != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_01 != 0);
      func_0x0001074117c0();
      puVar6 = extraout_x8_01;
      lVar8 = extraout_x9_01;
    }
    lStack_110 = *(long *)(lVar8 + 0x100);
    uStack_118 = *(undefined8 *)(lVar8 + 0xf8);
    if (*(long *)(lVar8 + 0x100) != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_02 != 0);
      func_0x0001074117c0();
      puVar6 = extraout_x8_02;
      lVar8 = extraout_x9_02;
    }
    uStack_108 = *(undefined8 *)(lVar8 + 0x338);
    lStack_100 = *(long *)(lVar8 + 0x340);
    if (lStack_100 != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_03 != 0);
      func_0x0001074117c0();
      puVar6 = extraout_x8_03;
      lVar8 = extraout_x9_03;
    }
    uStack_f8 = *(undefined8 *)(lVar8 + 0x348);
    lStack_f0 = *(long *)(lVar8 + 0x350);
    if (lStack_f0 != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_04 != 0);
      func_0x0001074117c0();
      puVar6 = extraout_x8_04;
      lVar8 = extraout_x9_04;
    }
    uStack_e8 = *(undefined8 *)(lVar8 + 0x358);
    lStack_e0 = *(long *)(lVar8 + 0x360);
    if (lStack_e0 != 0) {
      do {
        func_0x000107411734();
      } while (extraout_w11_05 != 0);
      func_0x0001074117c0();
      puVar6 = extraout_x8_05;
      lVar8 = extraout_x9_05;
    }
    uStack_d8 = *(undefined8 *)(lVar8 + 0x368);
    lStack_d0 = *(long *)(lVar8 + 0x370);
    if (lStack_d0 != 0) {
      do {
        func_0x000107411734();
        puVar6 = extraout_x8_06;
      } while (extraout_w11_06 != 0);
    }
    uStack_c8 = *(undefined8 *)(lVar5 + 0x10e8);
    lStack_c0 = *(long *)(lVar5 + 0x10f0);
    if (lStack_c0 != 0) {
      do {
        func_0x000107411734();
        puVar6 = extraout_x8_07;
      } while (extraout_w11_07 != 0);
    }
    *(undefined1 *)(puVar6 + 0x1fb) = *(undefined1 *)(lVar5 + 0x1101);
    *(bool *)((long)puVar6 + 0xfd9) = *(long *)(lVar5 + 0x1108) != 0;
    *(undefined1 *)((long)puVar6 + 0xfda) = *(undefined1 *)(lVar5 + 0x10d8);
    uStack_ac = uStack_78;
    uStack_a8 = uStack_74;
    uStack_b4 = uStack_80;
    uStack_b0 = uStack_7c;
    uStack_9c = (undefined4)uStack_68;
    uStack_98 = (undefined4)((ulong)uStack_68 >> 0x20);
    uStack_a4 = (undefined4)uStack_70;
    uStack_a0 = (undefined4)((ulong)uStack_70 >> 0x20);
    uStack_88 = *(undefined8 *)(lVar5 + 0x1118);
    uStack_90 = *(undefined8 *)(lVar5 + 0x1110);
    if (*(long *)(lVar5 + 0x1118) != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10 != 0);
    }
    plVar10 = *(long **)(lVar5 + 0x38);
    puVar6 = (undefined8 *)0x1028;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_1109adf98;
    _memcpy(puVar6 + 3,&uStack_1090,0xe70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar6 + 0x1d1,auStack_220);
    puVar6[0x1d5] = uStack_200;
    puVar6[0x1d4] = CONCAT71(uStack_207,uStack_208);
    puVar6[0x1d7] = CONCAT71(uStack_1ef,uStack_1f0);
    puVar6[0x1d6] = uStack_1f8;
    *(ulong *)((long)puVar6 + 0xec1) = CONCAT17(uStack_1e0,uStack_1e7);
    *(ulong *)((long)puVar6 + 0xeb9) = CONCAT17(uStack_1e8,uStack_1ef);
    func_0x000107411660(puVar6 + 0x1da,auStack_1d8);
    puVar6[0x1eb] = uStack_150;
    puVar6[0x1ed] = lStack_140;
    puVar6[0x1ec] = uStack_148;
    if (lStack_140 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_00 != 0);
    }
    puVar6[0x1ef] = lStack_130;
    puVar6[0x1ee] = uStack_138;
    if (lStack_130 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_01 != 0);
    }
    puVar6[0x1f1] = lStack_120;
    puVar6[0x1f0] = uStack_128;
    if (lStack_120 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_02 != 0);
    }
    puVar6[499] = lStack_110;
    puVar6[0x1f2] = uStack_118;
    if (lStack_110 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_03 != 0);
    }
    puVar6[0x1f5] = lStack_100;
    puVar6[500] = uStack_108;
    if (lStack_100 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_04 != 0);
    }
    puVar6[0x1f7] = lStack_f0;
    puVar6[0x1f6] = uStack_f8;
    if (lStack_f0 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_05 != 0);
    }
    puVar6[0x1f9] = lStack_e0;
    puVar6[0x1f8] = uStack_e8;
    if (lStack_e0 != 0) {
      do {
        func_0x000107411724();
      } while (extraout_w10_06 != 0);
    }
    puVar6[0x1fb] = lStack_d0;
    puVar6[0x1fa] = uStack_d8;
    if (lStack_d0 != 0) {
      plVar1 = (long *)(lStack_d0 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar6[0x1fd] = lStack_c0;
    puVar6[0x1fc] = uStack_c8;
    puVar6[0x1ff] = CONCAT44(uStack_ac,uStack_b0);
    puVar6[0x1fe] = CONCAT44(uStack_b4,uStack_b8);
    uStack_c8 = 0;
    lStack_c0 = 0;
    puVar6[0x201] = CONCAT44(uStack_9c,uStack_a0);
    puVar6[0x200] = CONCAT44(uStack_a4,uStack_a8);
    *(undefined4 *)(puVar6 + 0x202) = uStack_98;
    puVar6[0x204] = uStack_88;
    puVar6[0x203] = uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_10a0 = puVar6 + 3;
    puStack_1098 = puVar6;
    (**(code **)(*plVar10 + 0x20))(plVar10,&puStack_10a0);
    FUN_10725ab14(&puStack_10a0);
    func_0x000107410df4(&uStack_1090);
    return;
  }
  return;
}



/* Entry: 10727cf1c; end: 10727cf33;  */

byte FUN_10727cf1c(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    bVar1 = *(byte *)(**(long **)(param_1 + 8) + 0xb7);
  }
  return bVar1 & 1;
}



/* Entry: 10727cf34; end: 10727d0b3;  */

void FUN_10727cf34(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  char in_stack_000000f0;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double *pdStack_140;
  double *pdStack_138;
  undefined8 **ppuStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  undefined **appuStack_e8 [3];
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_48;
  
  func_0x000107285528();
  uStack_48 = extraout_x8;
  FUN_10725aba0(*param_2,param_2[1],param_2[2],param_2[3],&uStack_160);
  iStack_f0 = 0;
  pppuVar2 = appuStack_e8;
  pppuStack_d0 = pppuVar2;
  if ((param_3[5] & 1) == 0) {
    lVar4 = 0;
    appuStack_e8[0] = &PTR_FUN_1109976f0;
  }
  else {
    appuStack_e8[0] = &PTR_DAT_110997770;
    uVar5 = *param_3;
    if ((long)uVar5 < 1) {
      lVar4 = 0;
    }
    else {
      func_0x00010725aa9c(param_3[1],param_3[2],param_3[3],param_3[4],&uStack_c8);
      dStack_128 = (double)uVar5;
      uStack_118 = uStack_c0;
      uStack_120 = uStack_c8;
      uStack_108 = uStack_b0;
      uStack_110 = uStack_b8;
      uStack_f8 = uStack_a0;
      uStack_100 = uStack_a8;
      if (iStack_f0 != 1) {
        iStack_f0 = 1;
      }
      lVar4 = 1;
    }
  }
  uVar1 = *(char *)(param_1 + 0x30) == '\x01';
  if (((bool)uVar1) && (*(long *)(param_1 + 8) != 0)) {
    pdStack_140 = &dStack_128;
    ppuStack_130 = &pdStack_140;
    pdStack_138 = pdStack_140;
    (*(code *)(&PTR_FUN_1109977e0)[lVar4])(&uStack_c8,&ppuStack_130,&dStack_128);
    func_0x00010740e300(uStack_160,uStack_158,uStack_150,uStack_148,*(undefined8 *)(param_1 + 8),
                        &uStack_c8);
    FUN_107283a20(&uStack_c8);
  }
  func_0x0001006393ec();
  func_0x0001072854dc(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  FUN_107283a20(&uStack_c8);
  func_0x0001006393ec();
  func_0x000107285624();
  func_0x000107285ae4();
  if (pppuVar2 != (undefined ***)0x0) {
    func_0x00010740e044();
    puVar3 = &uStack_b0;
    if (in_stack_000000f0 == '\x01') {
      FUN_107283000();
      *(undefined1 *)(puVar3 + 0x34) = 0;
    }
    return;
  }
  return;
}



/* Entry: 10727d0b4; end: 10727d0e3;  */

void FUN_10727d0b4(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107285ae4();
  if (param_1 != 0) {
    func_0x00010740e044();
    lVar1 = unaff_x19 + 0x38;
    if (*(char *)(unaff_x19 + 0x1d8) == '\x01') {
      FUN_107283000();
      *(undefined1 *)(lVar1 + 0x1a0) = 0;
    }
    return;
  }
  return;
}



/* Entry: 10727d0e4; end: 10727d21b;  */

undefined8 * FUN_10727d0e4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined **ppuStack_290;
  undefined8 *apuStack_288 [2];
  undefined1 *puStack_278;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [168];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [128];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x000107285528();
  uVar1 = *(char *)((long)param_1 + 0x31) == '\x01';
  uStack_48 = extraout_x8;
  if (((bool)uVar1) && (param_1[1] != 0)) {
    _bzero(auStack_e8,0xa0);
    uStack_f0 = *param_3;
    auStack_e8[0] = 1;
    ppuStack_290 = &PTR_FUN_110997c80;
    apuStack_288[0] = param_1;
    puStack_278 = (undefined1 *)&ppuStack_290;
    FUN_10724cacc(&ppuStack_290,auStack_68);
    func_0x0001006393ec(&ppuStack_290);
    func_0x000107285838(apuStack_288);
    uStack_1a0 = 0;
    FUN_107282f0c(auStack_198,&uStack_f0);
    FUN_10727bd1c(param_1,&ppuStack_290);
    FUN_107283000(&ppuStack_290);
    ppuStack_290 = &PTR_DAT_110997d00;
    apuStack_288[0] = param_1;
    puStack_278 = (undefined1 *)&ppuStack_290;
    func_0x00010740e018(param_1[1],param_2,&uStack_f0,&ppuStack_290);
    FUN_1072854a8(&ppuStack_290);
    param_1 = &uStack_f0;
    func_0x00010725ab38(param_1);
  }
  func_0x0001072854dc(uStack_48);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010728576c();
  FUN_1072854a8();
  puVar2 = &uStack_f0;
  func_0x00010725ab38();
  func_0x00010728561c();
  *puVar2 = &PTR_FUN_110996c50;
  if (puVar2[0x8d] != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(puVar2 + 0x8d);
  FUN_1072508cc(puVar2 + 0x8d);
  FUN_10727d2fc(puVar2 + 0x8a);
  FUN_10727d2fc(puVar2 + 0x87);
  FUN_10727d368(puVar2 + 0x45);
  FUN_10727d3c0(puVar2 + 0x3c);
  FUN_10727d3e4(puVar2 + 7);
  func_0x00010725b6e0(puVar2 + 4);
  func_0x000107283b14(puVar2 + 2);
  return puVar2;
}



/* Entry: 10727d21c; end: 10727d21f;  */

undefined8 * FUN_10727d21c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110996c50;
  if (param_1[0x8d] != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(param_1 + 0x8d);
  FUN_1072508cc(param_1 + 0x8d);
  FUN_10727d2fc(param_1 + 0x8a);
  FUN_10727d2fc(param_1 + 0x87);
  FUN_10727d368(param_1 + 0x45);
  FUN_10727d3c0(param_1 + 0x3c);
  FUN_10727d3e4(param_1 + 7);
  func_0x00010725b6e0(param_1 + 4);
  func_0x000107283b14(param_1 + 2);
  return param_1;
}



/* Entry: 10727d220; end: 10727d233;  */

void FUN_10727d220(void)

{
  FUN_107283a98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10727d234; end: 10727d26b;  */

void FUN_10727d234(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    FUN_10727d278();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_10727d26c();
  func_0x0001072858a4();
  FUN_10727d29c();
  return;
}



/* Entry: 10727d26c; end: 10727d277;  */

void FUN_10727d26c(void)

{
  func_0x0001072858a4();
  FUN_10727d29c();
  return;
}



/* Entry: 10727d278; end: 10727d29b;  */

void FUN_10727d278(void)

{
  FUN_10727d29c();
  return;
}



/* Entry: 10727d29c; end: 10727d2b7;  */

long FUN_10727d29c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10727d2e4(param_1);
  }
  return param_1;
}



/* Entry: 10727d2b8; end: 10727d2e3;  */

long FUN_10727d2b8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10727d2e4(param_1);
  }
  return param_1;
}



/* Entry: 10727d2e4; end: 10727d2fb;  */

void FUN_10727d2e4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10727d2fc; end: 10727d367;  */

long * FUN_10727d2fc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x00010727d344();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}


