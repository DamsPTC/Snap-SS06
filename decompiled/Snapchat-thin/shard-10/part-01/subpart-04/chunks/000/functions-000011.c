/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107873928; end: 10787395f;  */

void FUN_107873928(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  while (((pcVar1 != (char *)*param_2 && (-1 < (long)*pcVar1)) &&
         (((byte)(&UNK_10deaf981)[*pcVar1] >> 6 & 1) != 0))) {
    pcVar1 = pcVar1 + 1;
    *param_1 = (long)pcVar1;
  }
  return;
}



/* Entry: 107873b98; end: 107873c9b;  */

long FUN_107873b98(long param_1,uint param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  if (iVar6 != 5) {
    uVar4 = param_2 - 1;
    if (0x1e < uVar4) {
      uVar4 = 0x1f;
    }
    uVar5 = param_2 - 3;
    if (0x1e < uVar5) {
      uVar5 = 0x1f;
    }
    uVar1 = 0;
    if (3 < param_2) {
      uVar1 = uVar5;
    }
    lVar2 = 0x7fffffffffffffff;
    if (iVar6 == 3) {
      lVar2 = 1000000000L << ((ulong)uVar1 & 0x3f);
    }
    lVar3 = 1000000000L << ((ulong)uVar4 & 0x3f);
    if (iVar6 != 4) {
      lVar3 = lVar2;
    }
    return lVar3;
  }
  if ((param_4 & 1) != 0) {
    func_0x00010789a00c();
    return (param_3 - param_1) * 1000000000;
  }
  return 5000000000;
}



/* Entry: 10787459c; end: 1078745fb;  */

long FUN_10787459c(long param_1,long param_2)

{
  func_0x000107874750();
  return param_2 - param_1 >> 2;
}



/* Entry: 10787486c; end: 1078748a7;  */

void FUN_10787486c(void)

{
  return;
}



/* Entry: 107874c84; end: 107874cab;  */

long FUN_107874c84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107874e8c; end: 107874ea7;  */

void FUN_107874e8c(ulong param_1)

{
  ulong uVar1;
  ulong uStack0000000000000000;
  undefined1 uStack0000000000000008;
  
  uStack0000000000000008 = 1;
  uVar1 = param_1;
  uStack0000000000000000 = param_1;
  __ZNSt3__119__shared_mutex_base15try_lock_sharedEv();
  if ((uVar1 & 1) == 0) {
    __ZNSt3__119__shared_mutex_base11lock_sharedEv(param_1);
  }
  return;
}



/* Entry: 10787554c; end: 1078755cb;  */

undefined8 FUN_10787554c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *param_1;
  lVar2 = param_1[1];
  while (lVar9 != lVar2) {
    plVar6 = param_2;
    func_0x0001078751e0(param_2,lVar9);
    lVar9 = lVar9 + 4;
    if (((ulong)plVar6 & 1) != 0) {
      return 1;
    }
  }
  lVar9 = *param_2;
  lVar2 = param_2[1];
  do {
    if (lVar9 == lVar2) {
      lVar9 = *param_1;
      lVar2 = param_1[1];
      if (lVar9 != lVar2) {
        lVar1 = *param_2;
        lVar3 = param_2[1];
        if (lVar1 != lVar3) {
          for (; lVar10 = lVar1, lVar4 = lVar1, lVar9 != lVar2 + -4; lVar9 = lVar9 + 4) {
            for (; lVar10 != lVar3 + -4; lVar10 = lVar10 + 4) {
              lVar7 = lVar9;
              func_0x000107875ba8();
              iVar5 = (int)lVar9 + 4;
              func_0x000107875ba8();
              if ((int)lVar7 != iVar5) {
                lVar7 = lVar9;
                func_0x000107875af0(lVar9,lVar9 + 4,lVar10);
                lVar8 = lVar9;
                func_0x000107875af0(lVar9,lVar9 + 4,lVar4 + 4);
                if ((int)lVar7 != (int)lVar8) {
                  return 1;
                }
              }
              lVar4 = lVar4 + 4;
            }
          }
        }
      }
      return 0;
    }
    plVar6 = param_1;
    func_0x0001078751e0(param_1,lVar9);
    lVar9 = lVar9 + 4;
  } while (((ulong)plVar6 & 1) == 0);
  return 1;
}



/* Entry: 107875bb4; end: 107875cd3;  */

undefined1  [16] FUN_107875bb4(undefined8 *param_1,undefined1 *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_460 [96];
  undefined8 uStack_400;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined1 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long alStack_390 [2];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [256];
  long alStack_278 [2];
  undefined1 auStack_268 [16];
  int aiStack_258 [136];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = alStack_278;
  func_0x0001000daeac(alStack_278,param_2,4);
  if (*(int *)((long)aiStack_258 + *(long *)(alStack_278[0] + -0x18)) == 0) {
    plVar4 = alStack_390;
    func_0x000105680760(alStack_390);
    param_2 = auStack_268;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPNS_15basic_streambufIcS2_EE
              (auStack_380,param_2);
    func_0x000105491b64(&uStack_3a8,auStack_378);
    param_1[1] = uStack_3a0;
    *param_1 = uStack_3a8;
    param_1[2] = uStack_398;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_3a8 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3a8);
    func_0x000105673d7c(alStack_390);
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  plVar2 = alStack_278;
  func_0x000100557e14();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar2;
    return auVar5;
  }
  ___stack_chk_fail();
  func_0x000105673d7c(alStack_390);
  func_0x000100557e14(alStack_278);
  plVar3 = plVar2;
  __Unwind_Resume();
  puStack_3b8 = &UNK_107875cd4;
  plStack_3d0 = plVar4;
  plStack_3c8 = plVar2;
  puStack_3c0 = &stack0xfffffffffffffff0;
  _bzero(auStack_460,0x90);
  plVar4 = (long *)*plVar3;
  if (-1 < *(char *)((long)plVar3 + 0x17)) {
    plVar4 = plVar3;
  }
  _stat(plVar4,auStack_460);
  bVar1 = (int)plVar4 == 0;
  if (!bVar1) {
    uStack_400 = 0;
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = uStack_400;
  auVar6._9_7_ = 0;
  return auVar6;
}



/* Entry: 107876120; end: 10787614f;  */

bool FUN_107876120(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&uStack_20;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000107875ee0(&uStack_20,*param_3,param_3[1]);
  return iVar1 == 0;
}



/* Entry: 10787668c; end: 10787675b;  */

void FUN_10787668c(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  ___sincosf_stret();
  fVar3 = (float)param_4[1];
  fVar4 = (float)((ulong)param_4[1] >> 0x20);
  fVar1 = (float)*param_4;
  fVar2 = (float)((ulong)*param_4 >> 0x20);
  param_3[1] = CONCAT44(param_2 * fVar4 + -param_1 * fVar2,param_2 * fVar3 + -param_1 * fVar1);
  *param_3 = CONCAT44(param_1 * fVar4 + param_2 * fVar2,param_1 * fVar3 + param_2 * fVar1);
  return;
}



/* Entry: 107877034; end: 1078771af;  */

void FUN_107877034(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  dVar22 = *param_2;
  dVar10 = param_2[1];
  dVar2 = param_2[2];
  dVar1 = param_2[3];
  dVar24 = param_2[4];
  dVar21 = param_2[5];
  dVar17 = param_2[6];
  dVar3 = param_2[7];
  dVar26 = param_2[8];
  dVar23 = param_2[9];
  dVar19 = param_2[10];
  dVar5 = param_2[0xb];
  dVar27 = *param_3;
  dVar28 = param_3[1];
  dVar30 = param_3[2];
  dVar7 = param_3[3];
  dVar31 = param_3[4];
  dVar32 = param_3[5];
  dVar11 = param_3[6];
  dVar8 = param_3[7];
  dVar12 = param_3[8];
  dVar14 = param_3[9];
  dVar29 = param_3[10];
  dVar9 = param_3[0xb];
  dVar15 = param_3[0xc];
  dVar16 = param_3[0xd];
  dVar25 = param_3[0xe];
  dVar13 = param_3[0xf];
  dVar4 = param_2[0xc];
  dVar18 = param_2[0xd];
  dVar6 = param_2[0xe];
  dVar20 = param_2[0xf];
  *param_1 = dVar24 * dVar28 + dVar27 * dVar22 + dVar30 * dVar26 + dVar7 * dVar4;
  param_1[1] = dVar21 * dVar28 + dVar27 * dVar10 + dVar30 * dVar23 + dVar7 * dVar18;
  param_1[2] = dVar17 * dVar28 + dVar27 * dVar2 + dVar30 * dVar19 + dVar7 * dVar6;
  param_1[3] = dVar3 * dVar28 + dVar27 * dVar1 + dVar30 * dVar5 + dVar7 * dVar20;
  param_1[4] = dVar24 * dVar32 + dVar31 * dVar22 + dVar11 * dVar26 + dVar8 * dVar4;
  param_1[5] = dVar21 * dVar32 + dVar31 * dVar10 + dVar11 * dVar23 + dVar8 * dVar18;
  param_1[6] = dVar17 * dVar32 + dVar31 * dVar2 + dVar11 * dVar19 + dVar8 * dVar6;
  param_1[7] = dVar3 * dVar32 + dVar31 * dVar1 + dVar11 * dVar5 + dVar8 * dVar20;
  param_1[8] = dVar24 * dVar14 + dVar12 * dVar22 + dVar29 * dVar26 + dVar9 * dVar4;
  param_1[9] = dVar21 * dVar14 + dVar12 * dVar10 + dVar29 * dVar23 + dVar9 * dVar18;
  param_1[10] = dVar17 * dVar14 + dVar12 * dVar2 + dVar29 * dVar19 + dVar9 * dVar6;
  param_1[0xb] = dVar3 * dVar14 + dVar12 * dVar1 + dVar29 * dVar5 + dVar9 * dVar20;
  param_1[0xc] = dVar24 * dVar16 + dVar15 * dVar22 + dVar25 * dVar26 + dVar13 * dVar4;
  param_1[0xd] = dVar21 * dVar16 + dVar15 * dVar10 + dVar25 * dVar23 + dVar13 * dVar18;
  param_1[0xe] = dVar17 * dVar16 + dVar15 * dVar2 + dVar25 * dVar19 + dVar13 * dVar6;
  param_1[0xf] = dVar3 * dVar16 + dVar15 * dVar1 + dVar25 * dVar5 + dVar13 * dVar20;
  return;
}



/* Entry: 1078777a0; end: 1078777b7;  */

void FUN_1078777a0(long *param_1,long param_2)

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



/* Entry: 107878278; end: 10787827b;  */

void FUN_107878278(void)

{
  return;
}



/* Entry: 107878870; end: 1078788fb;  */

void FUN_107878870(ulong *param_1,ulong param_2,ulong *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = param_2;
  uVar5 = *param_3;
  *param_3 = 0;
  param_1[1] = uVar5;
  *(undefined2 *)(param_1 + 2) = 0;
  lVar6 = (*param_1 & 0xffffffff) * 4 * (*param_1 >> 0x20);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      lRam0000000113823db0 = lRam0000000113823db0 + lVar6;
    }
  } while (cVar3 != '\0');
  lVar2 = 0;
  if (lVar6 != 0) {
    lVar2 = (long)(0x1f - (int)LZCOUNT((int)lVar6));
  }
  piVar1 = (int *)(lVar2 * 4 + 0x113823db8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}



/* Entry: 107878d14; end: 107878dcb;  */

void FUN_107878d14(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = (ulong)*(uint *)(param_2 + 0x58);
  func_0x00010774f238(uVar1);
  func_0x00010002b838(auStack_50,uVar1);
  func_0x00010048a6c8(auStack_38,auStack_50,&UNK_10f430936);
  func_0x000107878fec(auStack_68,*(undefined8 *)(param_2 + 0x60));
  func_0x00010533a9c0(param_1,auStack_38,auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  return;
}



/* Entry: 107879078; end: 10787913f;  */

undefined8 FUN_107879078(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_28 [8];
  
  if (*param_2 == 0) {
    puVar2 = &UNK_10f43094b;
    func_0x00010002b82c(param_1,&UNK_10f43094b);
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50(unaff_x20,unaff_x19,puVar2);
    return unaff_x20;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,param_2);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078790c8);
  (*pcVar1)();
}



/* Entry: 107879348; end: 1078793bb;  */

/* WARNING: Possible PIC construction at 0x000107879394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107879418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107879398) */
/* WARNING: Removing unreachable block (ram,0x0001078793b8) */
/* WARNING: Removing unreachable block (ram,0x0001078793a8) */
/* WARNING: Removing unreachable block (ram,0x00010787941c) */
/* WARNING: Removing unreachable block (ram,0x00010787945c) */
/* WARNING: Removing unreachable block (ram,0x000107879488) */
/* WARNING: Removing unreachable block (ram,0x0001078794a8) */
/* WARNING: Removing unreachable block (ram,0x0001078794c4) */
/* WARNING: Removing unreachable block (ram,0x0001078794b8) */
/* WARNING: Removing unreachable block (ram,0x000107879448) */

undefined1  [16] FUN_107879348(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  long *extraout_x8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_2;
  func_0x0001006801f0();
  uStack_40 = param_2;
  uStack_38 = uVar6;
  func_0x0001006801f0(param_3);
  func_0x000107879a18(&uStack_40,param_1,&uStack_40,param_3,uVar6);
  cVar5 = *(char *)((long)param_1 + 0x17);
  plVar7 = (long *)*param_1;
  if (-1 < (long)cVar5) {
    plVar7 = param_1;
  }
  lVar2 = param_1[1];
  if (-1 < cVar5) {
    lVar2 = (long)cVar5;
  }
  pcVar1 = (char *)((long)plVar7 + lVar2);
  for (; pcVar8 = pcVar1, pcVar10 = pcVar1, plVar7 != (long *)pcVar1;
      plVar7 = (long *)((long)plVar7 + 1)) {
    pcVar3 = (char *)extraout_x8[1];
    pcVar9 = (char *)plVar7;
    pcVar11 = (char *)*extraout_x8;
    if ((char *)*extraout_x8 == pcVar3) break;
    do {
      if (pcVar9 == pcVar1 || pcVar11 == pcVar3) {
        pcVar8 = (char *)plVar7;
        pcVar10 = pcVar9;
        if (pcVar11 == pcVar3) goto code_r0x000107879514;
        break;
      }
      cVar5 = *pcVar9;
      cVar4 = *pcVar11;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    } while (cVar5 == cVar4);
  }
code_r0x000107879514:
  auVar12._8_8_ = pcVar10;
  auVar12._0_8_ = pcVar8;
  return auVar12;
}



/* Entry: 107879b50; end: 107879b7b;  */

void FUN_107879b50(void)

{
  long unaff_x19;
  
  func_0x000107879c38();
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107879da0; end: 107879e9f;  */

long FUN_107879da0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  do {
    lStack_50 = lRam0000000113823e70;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x113823e70,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      lRam0000000113823e70 = lRam0000000113823e70 + 1;
    }
  } while (cVar2 != '\0');
  lVar5 = *param_1;
  uStack_48 = param_5;
  uStack_40 = param_4;
  uStack_38 = param_2;
  __ZNSt3__15mutex4lockEv(lVar5);
  func_0x000107879ea0(*param_1 + 0x40,&lStack_50);
  __ZNSt3__15mutex6unlockEv(lVar5);
  plStack_68 = (long *)param_1[2] + 2;
  puVar4 = *(undefined8 **)param_1[2];
  uStack_58 = puVar4[1];
  uStack_60 = *puVar4;
  if (puVar4[1] != 0) {
    plVar1 = (long *)(puVar4[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107879eb8(&plStack_68,&UNK_107879f88,0,&lStack_50,&uStack_38,param_3,&uStack_40,
                      &uStack_48);
  func_0x00010724ae28(&uStack_60);
  return lStack_50;
}



/* Entry: 10787a888; end: 10787a8cb;  */

long * FUN_10787a888(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010732e4c0(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10787a964; end: 10787a987;  */

void FUN_10787a964(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1109e3d48;
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  lVar4 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar4;
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
  return;
}



/* Entry: 10787acf0; end: 10787ad17;  */

long FUN_10787acf0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010787ad18();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10787ae2c; end: 10787aeeb;  */

undefined *** FUN_10787ae2c(undefined ***param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined ***pppuVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_DAT_1109e3e18;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010787af80(param_1,appuStack_48,param_2,&uStack_60);
  func_0x00010787ac34(&uStack_60);
  func_0x0001006393ec(appuStack_48);
  func_0x00010787bda4(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010787ac34(&uStack_60);
  pppuVar4 = appuStack_48;
  func_0x0001006393ec(pppuVar4);
  func_0x00010787bdcc();
  return pppuVar4;
}



/* Entry: 10787b1f4; end: 10787b30b;  */

/* WARNING: Possible PIC construction at 0x00010787b2a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010787b2a4) */
/* WARNING: Removing unreachable block (ram,0x00010787b2d8) */
/* WARNING: Removing unreachable block (ram,0x00010787b2f0) */
/* WARNING: Removing unreachable block (ram,0x00010787b300) */
/* WARNING: Removing unreachable block (ram,0x00010787b2c0) */

undefined8 ** FUN_10787b1f4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [240];
  
  func_0x00010787bdec();
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000100491558();
  puVar2 = (undefined8 *)param_1[1];
  func_0x0001078bba88(param_1 + 2);
  if (param_1[0xb] != 0) {
    func_0x000104c003e8(param_1 + 8);
  }
  func_0x0001078980a4(auStack_120);
  puVar2[0xd] = auStack_120;
  uStack_130 = 0;
  uVar5 = param_1[6];
  uVar4 = param_1[5];
  param_1[5] = 0;
  param_1[6] = 0;
  uStack_128 = 0;
  puVar2[3] = uVar5;
  puVar2[2] = uVar4;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 8) = 0x3f800000;
  puStack_138 = puVar2;
  func_0x00010787ac34(&uStack_130);
  func_0x0001073ada24(*puVar2,auStack_120);
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 7);
  _CFRunLoopRun();
  puVar2[0xd] = 0;
  func_0x0001073ada2c(*puStack_138);
  puVar2 = puStack_138;
  plVar1 = (long *)puStack_138[6];
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    func_0x00010732e4c0(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar3;
  }
  lVar3 = puVar2[4];
  puVar2[4] = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  func_0x00010787ac34(puVar2 + 2);
  return &puStack_138;
}



/* Entry: 10787b860; end: 10787b877;  */

void FUN_10787b860(long *param_1,long param_2)

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



/* Entry: 10787ba30; end: 10787ba33;  */

undefined8 * FUN_10787ba30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3e98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 6);
  return param_1;
}



/* Entry: 10787bd34; end: 10787bd77;  */

void FUN_10787bd34(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  
  func_0x00010787be90();
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  uVar2 = *unaff_x19;
  *puVar1 = &PTR_DAT_1109e3ed8;
  puVar1[1] = unaff_x21;
  uVar3 = *unaff_x20;
  puVar1[3] = unaff_x20[1];
  puVar1[2] = uVar3;
  puVar1[4] = uVar2;
  *unaff_x22 = puVar1;
  return;
}



/* Entry: 10787c09c; end: 10787c1c7;  */

void FUN_10787c09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010028af84(&uStack_60,param_4);
  uVar2 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar3 = (undefined8 *)0x38;
  uStack_38 = uVar2;
  __Znwm();
  uStack_38 = 0;
  *puVar3 = uVar2;
  puVar3[2] = param_3;
  puVar3[1] = param_2;
  *(undefined1 *)(puVar3 + 3) = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  if (cStack_48 == '\x01') {
    puVar3[4] = uStack_58;
    puVar3[3] = uStack_60;
    puVar3[5] = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    *(undefined1 *)(puVar3 + 6) = 1;
  }
  puStack_40 = puVar3;
  func_0x000100489040(param_1,&UNK_10787c410);
  if ((int)param_1 == 0) {
    puStack_40 = (undefined8 *)0x0;
    FUN_10787c5dc(&puStack_40);
    func_0x0001004895c8(&uStack_38);
    func_0x0001001148fc(&uStack_60);
    return;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10787c188);
  (*pcVar1)();
}



/* Entry: 10787c5dc; end: 10787c617;  */

long * FUN_10787c5dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001001148fc(lVar1 + 0x18);
    func_0x0001004895c8(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10787ca68; end: 10787ce3f;  */

/* WARNING: Removing unreachable block (ram,0x00010787cccc) */

void FUN_10787ca68(long *param_1,double ***param_2,undefined1 *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  double ****ppppdVar10;
  double ****ppppdVar11;
  undefined1 *puVar12;
  double ***pppdVar13;
  uint uVar14;
  undefined8 *extraout_x8;
  ulong uVar15;
  double ***extraout_x8_00;
  long extraout_x8_01;
  double ****ppppdVar16;
  undefined8 extraout_x8_02;
  double ****ppppdVar17;
  double ***pppdVar18;
  double ***extraout_x9;
  double ***pppdVar19;
  ulong uVar20;
  ulong extraout_x9_00;
  long *plVar21;
  undefined8 extraout_x9_01;
  double ****extraout_x10;
  double ****ppppdVar22;
  double ***pppdVar23;
  double ***pppdVar24;
  double ***extraout_x11;
  undefined8 *puVar25;
  double ****ppppdVar26;
  double ****ppppdVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  double ***pppdVar32;
  uint uVar33;
  double **ppdVar34;
  double dVar35;
  double ***pppdVar36;
  undefined8 uVar37;
  double ****ppppdVar38;
  double dVar39;
  double **ppdVar40;
  double ****unaff_d8;
  double ****unaff_d9;
  double **unaff_d10;
  double dVar41;
  double ****unaff_d11;
  double *apdStack_2a0 [2];
  double **ppdStack_290;
  double **ppdStack_288;
  double ***pppdStack_280;
  double ***pppdStack_278;
  double ***pppdStack_270;
  double **ppdStack_268;
  float fStack_260;
  double ***pppdStack_258;
  double **ppdStack_250;
  undefined8 uStack_248;
  long lStack_240;
  double **ppdStack_238;
  double ***pppdStack_230;
  ulong uStack_228;
  float fStack_220;
  double ***pppdStack_210;
  double ***pppdStack_208;
  undefined8 uStack_200;
  double ***pppdStack_1f0;
  double *pdStack_1e8;
  double ***pppdStack_1e0;
  double ***pppdStack_1d8;
  undefined1 auStack_170 [8];
  double ***pppdStack_168;
  double ***pppdStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  double ***pppdStack_138;
  double *pdStack_130;
  undefined8 uStack_128;
  double ***pppdStack_120;
  double ***pppdStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double *pdStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  double **ppdStack_d0;
  double **ppdStack_c8;
  undefined8 uStack_c0;
  int iStack_b4;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined8 uStack_88;
  
  uVar14 = (uint)param_4;
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppdVar34 = *param_2;
  ppppdVar38 = (double ****)param_2[2];
  uVar6 = (double)ppdVar34 == (double)ppppdVar38;
  if ((double)ppdVar34 <= (double)ppppdVar38) {
    uVar6 = (double)ppppdVar38 == -85.0511287798066;
    if (-85.0511287798066 <= (double)ppppdVar38) {
      ppppdVar38 = (double ****)param_2[1];
      ppdVar40 = param_2[3];
      bVar8 = false;
      uVar6 = false;
      bVar7 = false;
      if ((double)ppdVar34 <= 85.0511287798066) {
        bVar8 = false;
        uVar6 = false;
        bVar7 = true;
        if (!NAN((double)ppppdVar38) && !NAN((double)ppdVar40)) {
          bVar8 = (double)ppppdVar38 < (double)ppdVar40;
          uVar6 = (double)ppppdVar38 == (double)ppdVar40;
          bVar7 = false;
        }
      }
      unaff_d8 = (double ****)0x40554345b1a549d7;
      if ((bool)uVar6 || bVar8 != bVar7) {
        ppdVar40 = (double **)0xc0554345b1a549d7;
        if (-85.0511287798066 <= (double)ppdVar34) {
          ppdVar40 = ppdVar34;
        }
        func_0x000107881564(ppdVar40,auStack_b0);
        unaff_d8 = (double ****)param_2[3];
        unaff_d9 = (double ****)0x40554345b1a549d7;
        if ((double)param_2[2] <= 85.0511287798066) {
          unaff_d9 = (double ****)param_2[2];
        }
        func_0x000107881564(&ppdStack_d0);
        func_0x00010725ac68(&uStack_110,auStack_b0,&ppdStack_d0);
        func_0x0001072594c0(&uStack_110);
        pppdStack_120 = (double ***)unaff_d9;
        pppdStack_118 = (double ***)unaff_d8;
        func_0x0001078811c0(&pppdStack_120);
        uStack_128 = uStack_f8;
        pdStack_130 = pdStack_100;
        ppdVar34 = (double **)pdStack_100;
        ppppdVar38 = unaff_d8;
        func_0x0001078811c0(&pdStack_130);
        unaff_d10 = ppdVar34;
        unaff_d11 = ppppdVar38;
        func_0x0001072594e0(&uStack_110);
        pppdStack_138 = (double ***)unaff_d11;
        func_0x0001078811c0(auStack_140);
        uStack_148 = uStack_108;
        uStack_150 = uStack_110;
        uVar37 = uStack_110;
        ppppdVar26 = unaff_d11;
        func_0x0001078811c0(&uStack_150);
        ppppdVar17 = ppppdVar26;
        func_0x00010739d7bc(&uStack_110);
        pppdStack_168 = (double ***)ppppdVar17;
        func_0x0001078811c0(auStack_170);
        iVar29 = 1 << (ulong)((uint)param_3 & 0x1f);
        ppdStack_d0 = (double **)0x0;
        ppdStack_c8 = (double **)0x0;
        uStack_c0 = 0;
        pppdStack_158 = (double ***)ppppdVar17;
        iStack_b4 = iVar29;
        func_0x000107881770();
        func_0x00010787ff74(auStack_b0,auStack_e8);
        func_0x00010787fd48(unaff_d9,unaff_d8,ppdVar34,ppppdVar38,unaff_d10,unaff_d11,iVar29,
                            auStack_b0);
        func_0x0001078817a0();
        iVar29 = iStack_b4;
        func_0x000107881770();
        func_0x00010787ff74();
        ppdVar34 = unaff_d10;
        ppppdVar38 = unaff_d11;
        func_0x00010787fd48(unaff_d10,unaff_d11,uVar37,ppppdVar26,unaff_d9,unaff_d8,iVar29,
                            auStack_b0);
        func_0x0001078817a0();
        if (ppdStack_d0 != ppdStack_c8) {
          func_0x0001078813d8((long)ppdStack_c8 - (long)ppdStack_d0 >> 4);
          func_0x0001078803ac();
        }
        pppdVar36 = (double ***)ppdStack_d0;
        if (ppdStack_d0 != ppdStack_c8) {
          do {
            pppdVar13 = pppdVar36;
            pppdVar36 = pppdVar13 + 2;
            if (pppdVar36 == (double ***)ppdStack_c8) goto LAB_10787cce8;
          } while (*(uint *)pppdVar13 != *(uint *)(pppdVar13 + 2) ||
                   *(uint *)((long)pppdVar13 + 4) != *(uint *)((long)pppdVar13 + 0x14));
          while (pppdVar19 = pppdVar36, pppdVar36 = pppdVar19 + 2,
                pppdVar36 != (double ***)ppdStack_c8) {
            if (*(uint *)pppdVar13 != *(uint *)pppdVar36 ||
                *(uint *)((long)pppdVar13 + 4) != *(uint *)((long)pppdVar19 + 0x14)) {
              ppdVar34 = *pppdVar36;
              pppdVar13[3] = pppdVar19[3];
              pppdVar13[2] = ppdVar34;
              pppdVar13 = pppdVar13 + 2;
            }
          }
          if (pppdVar13 + 2 != (double ***)ppdStack_c8) {
            ppdStack_c8 = (double **)(pppdVar13 + 2);
          }
        }
LAB_10787cce8:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        puVar12 = (undefined1 *)((long)ppdStack_c8 - (long)ppdStack_d0 >> 4);
        func_0x000107493f68(param_1);
        ppdVar40 = ppdStack_c8;
        pppdVar36 = (double ***)ppdStack_d0;
        while( true ) {
          uVar14 = (uint)param_4;
          uVar6 = pppdVar36 == (double ***)ppdVar40;
          if ((bool)uVar6) break;
          uVar15 = param_1[1];
          if (uVar15 < (ulong)param_1[2]) {
            param_4 = (ulong)*(uint *)pppdVar36;
            puVar12 = param_3;
            func_0x000107880ce0(uVar15,param_3,param_4,*(uint *)((long)pppdVar36 + 4));
            lVar9 = uVar15 + 0x10;
          }
          else {
            plVar21 = param_1;
            func_0x0001074934c4(param_1,((long)(uVar15 - *param_1) >> 4) + 1);
            func_0x00010749358c(auStack_b0,plVar21,param_1[1] - *param_1 >> 4,param_1 + 2);
            param_4 = (ulong)*(uint *)pppdVar36;
            func_0x000107880ce0(lStack_a0,param_3,param_4,*(uint *)((long)pppdVar36 + 4));
            lStack_a0 = lStack_a0 + 0x10;
            puVar12 = auStack_b0;
            func_0x000107493504(param_1);
            lVar9 = param_1[1];
            func_0x000107493614(auStack_b0);
          }
          param_1[1] = lVar9;
          pppdVar36 = pppdVar36 + 2;
        }
        param_2 = &ppdStack_d0;
        func_0x00010787ffb8();
        goto LAB_10787cdac;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar12 = param_3;
LAB_10787cdac:
  func_0x000107881990(uStack_88);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010728f1b4(param_1);
  ppppdVar26 = (double ****)&ppdStack_d0;
  func_0x00010787ffb8();
  func_0x0001078813c8();
  pppdStack_1f0 = (double ***)unaff_d11;
  pdStack_1e8 = (double *)unaff_d10;
  pppdStack_1e0 = (double ***)unaff_d9;
  pppdStack_1d8 = (double ***)unaff_d8;
  pppdVar36 = *ppppdVar26;
  pppdVar13 = ppppdVar26[1];
  if (pppdVar36 == pppdVar13) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    ppdStack_238 = (double **)CONCAT71(ppdStack_238._1_7_,1);
    func_0x000107880cf0(&lStack_240);
  }
  else {
    ppdStack_238 = (double **)0x0;
    lStack_240 = 0;
    uStack_228 = 0;
    pppdStack_230 = (double ***)0x0;
    fStack_220 = 1.0;
    ppppdVar17 = ppppdVar26;
    for (; pppdVar19 = (double ***)ppdStack_238, pppdVar36 != pppdVar13; pppdVar36 = pppdVar36 + 2)
    {
      bVar3 = *(byte *)((long)pppdVar36 + 4);
      pppdVar32 = (double ***)(ulong)bVar3;
      uVar31 = (uint)bVar3;
      if ((double ***)ppdStack_238 != (double ***)0x0) {
        uVar15 = (long)ppdStack_238 - 1;
        uVar33 = (uint)ppdStack_238;
        if (((ulong)ppdStack_238 & uVar15) == 0) {
          param_2 = (double ***)((ulong)(uVar33 - 1) & (ulong)pppdVar32);
        }
        else {
          param_2 = pppdVar32;
          if (ppdStack_238 <= pppdVar32) {
            uVar4 = 0;
            if (uVar33 != 0) {
              uVar4 = uVar31 / uVar33;
            }
            param_2 = (double ***)(ulong)(uVar31 - uVar4 * uVar33);
          }
        }
        ppppdVar27 = *(double *****)(lStack_240 + (long)param_2 * 8);
        if (ppppdVar27 != (double ****)0x0) {
          do {
            while( true ) {
              ppppdVar27 = (double ****)*ppppdVar27;
              if (ppppdVar27 == (double ****)0x0) goto code_r0x00010787cf3c;
              pppdVar18 = ppppdVar27[1];
              if (pppdVar18 != pppdVar32) break;
              if (*(byte *)(ppppdVar27 + 2) == uVar31) goto code_r0x00010787d1bc;
            }
            if (((ulong)ppdStack_238 & uVar15) == 0) {
              pppdVar18 = (double ***)((ulong)pppdVar18 & uVar15);
            }
            else if (ppdStack_238 <= pppdVar18) {
              uVar20 = 0;
              if ((double ***)ppdStack_238 != (double ***)0x0) {
                uVar20 = (ulong)pppdVar18 / (ulong)ppdStack_238;
              }
              pppdVar18 = (double ***)((long)pppdVar18 - uVar20 * (long)ppdStack_238);
            }
          } while (pppdVar18 == param_2);
        }
      }
code_r0x00010787cf3c:
      func_0x0001078817b0();
      pppdStack_270 = (double ***)0x1;
      *ppppdVar17 = (double ***)0x0;
      ppppdVar17[1] = pppdVar32;
      *(byte *)(ppppdVar17 + 2) = bVar3;
      ppppdVar17[4] = (double ***)0x0;
      ppppdVar17[5] = (double ***)0x0;
      ppppdVar17[3] = (double ***)0x0;
      ppppdVar38 = (double ****)(ulong)(uint)fStack_220;
      pppdStack_278 = (double ***)&pppdStack_230;
      if ((pppdVar19 == (double ***)0x0) ||
         (pppdVar18 = param_2, fStack_220 * (float)pppdVar19 < (float)(uStack_228 + 1))) {
        bVar7 = (double ***)0x2 < pppdVar19;
        bVar8 = pppdVar19 == (double ***)0x3;
        pppdStack_280 = (double ***)ppppdVar17;
        func_0x000107881374((long)pppdVar19 << 1);
        pppdVar18 = extraout_x8_00;
        if (!bVar7 || bVar8) {
          pppdVar18 = extraout_x9;
        }
        pppdVar23 = pppdVar19;
        if ((long)pppdVar18 - 1U == 0) {
          pppdVar18 = (double ***)0x2;
        }
        else if (((ulong)pppdVar18 & (long)pppdVar18 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          pppdVar23 = (double ***)ppdStack_238;
        }
        if (pppdVar23 < pppdVar18) {
code_r0x00010787cfd8:
          if ((ulong)pppdVar18 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10787d6fc);
            (*pcVar5)();
          }
          lVar9 = (long)pppdVar18 << 3;
          __Znwm(lVar9);
          FUN_107880d6c(&lStack_240,lVar9);
          ppdStack_238 = (double **)pppdVar18;
          for (pppdVar19 = (double ***)0x0; pppdVar18 != pppdVar19;
              pppdVar19 = (double ***)((long)pppdVar19 + 1)) {
            *(undefined8 *)(lStack_240 + (long)pppdVar19 * 8) = 0;
          }
          pppdVar19 = pppdVar18;
          if ((double ****)pppdStack_230 != (double ****)0x0) {
            pppdVar23 = (double ***)pppdStack_230[1];
            uVar20 = (long)pppdVar18 - 1;
            uVar15 = 0;
            if (pppdVar18 != (double ***)0x0) {
              uVar15 = (ulong)pppdVar23 / (ulong)pppdVar18;
            }
            pppdVar24 = pppdVar23;
            if (pppdVar18 <= pppdVar23) {
              pppdVar24 = (double ***)((long)pppdVar23 - uVar15 * (long)pppdVar18);
            }
            if (((ulong)pppdVar18 & uVar20) == 0) {
              pppdVar24 = (double ***)((ulong)pppdVar23 & uVar20);
            }
            *(double *****)(lStack_240 + (long)pppdVar24 * 8) = &pppdStack_230;
            lVar9 = lStack_240;
            ppppdVar27 = (double ****)pppdStack_230;
            while (ppppdVar22 = ppppdVar27, ppppdVar27 = (double ****)*ppppdVar22,
                  ppppdVar27 != (double ****)0x0) {
              pppdVar23 = ppppdVar27[1];
              if (((ulong)pppdVar18 & uVar20) == 0) {
                pppdVar23 = (double ***)((ulong)pppdVar23 & uVar20);
              }
              else if (pppdVar18 <= pppdVar23) {
                uVar15 = 0;
                if (pppdVar18 != (double ***)0x0) {
                  uVar15 = (ulong)pppdVar23 / (ulong)pppdVar18;
                }
                pppdVar23 = (double ***)((long)pppdVar23 - uVar15 * (long)pppdVar18);
              }
              if (pppdVar23 != pppdVar24) {
                if (*(long *)(lVar9 + (long)pppdVar23 * 8) == 0) {
                  *(double *****)(lVar9 + (long)pppdVar23 * 8) = ppppdVar22;
                  pppdVar24 = pppdVar23;
                }
                else {
                  func_0x0001078814b8();
                  lVar9 = extraout_x8_01;
                  uVar20 = extraout_x9_00;
                  ppppdVar27 = extraout_x10;
                  pppdVar24 = extraout_x11;
                }
              }
            }
          }
        }
        else {
          pppdVar19 = pppdVar23;
          if (pppdVar18 < pppdVar23) {
            ppppdVar38 = (double ****)(ulong)(uint)fStack_220;
            pppdVar19 = (double ***)(long)((float)uStack_228 / fStack_220);
            if ((pppdVar23 < (double ***)0x3) || (((ulong)pppdVar23 & (long)pppdVar23 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((double ***)0x1 < pppdVar19) {
              pppdVar19 = (double ***)(1L << (-LZCOUNT((long)pppdVar19 + -1) & 0x3fU));
            }
            if (pppdVar18 <= pppdVar19) {
              pppdVar18 = pppdVar19;
            }
            pppdVar19 = (double ***)ppdStack_238;
            if (pppdVar18 < pppdVar23) {
              if (pppdVar18 != (double ***)0x0) goto code_r0x00010787cfd8;
              FUN_107880d6c(&lStack_240,0);
              ppdStack_238 = (double **)0x0;
              pppdVar19 = (double ***)0x0;
            }
          }
        }
        if (((ulong)pppdVar19 & (long)pppdVar19 - 1U) == 0) {
          pppdVar18 = (double ***)((ulong)((int)pppdVar19 - 1) & (ulong)pppdVar32);
        }
        else {
          pppdVar18 = pppdVar32;
          if (pppdVar19 <= pppdVar32) {
            uVar15 = 0;
            if (pppdVar19 != (double ***)0x0) {
              uVar15 = (ulong)pppdVar32 / (ulong)pppdVar19;
            }
            pppdVar18 = (double ***)((long)pppdVar32 - uVar15 * (long)pppdVar19);
          }
        }
      }
      plVar21 = *(long **)(lStack_240 + (long)pppdVar18 * 8);
      if (plVar21 == (long *)0x0) {
        *ppppdVar17 = pppdStack_230;
        pppdStack_230 = (double ***)ppppdVar17;
        *(double *****)(lStack_240 + (long)pppdVar18 * 8) = &pppdStack_230;
        if (*ppppdVar17 != (double ***)0x0) {
          pppdVar32 = (double ***)(*ppppdVar17)[1];
          if (((ulong)pppdVar19 & (long)pppdVar19 - 1U) == 0) {
            pppdVar32 = (double ***)((ulong)pppdVar32 & (long)pppdVar19 - 1U);
          }
          else if (pppdVar19 <= pppdVar32) {
            uVar15 = 0;
            if (pppdVar19 != (double ***)0x0) {
              uVar15 = (ulong)pppdVar32 / (ulong)pppdVar19;
            }
            pppdVar32 = (double ***)((long)pppdVar32 - uVar15 * (long)pppdVar19);
          }
          *(double *****)(lStack_240 + (long)pppdVar32 * 8) = ppppdVar17;
        }
      }
      else {
        *ppppdVar17 = (double ***)*plVar21;
        *plVar21 = (long)ppppdVar17;
      }
      pppdStack_280 = (double ***)0x0;
      uStack_228 = uStack_228 + 1;
      func_0x000107880d84(&pppdStack_280);
      ppppdVar27 = ppppdVar17;
code_r0x00010787d1bc:
      ppppdVar17 = ppppdVar27 + 3;
      FUN_10781dc2c(ppppdVar17,pppdVar36);
    }
    pppdVar36 = *ppppdVar26;
    pppdVar13 = ppppdVar26[1];
    ppdStack_250 = (double **)0x0;
    uStack_248 = 0;
    pppdStack_258 = &ppdStack_250;
    for (; pppdVar36 != pppdVar13; pppdVar36 = pppdVar36 + 2) {
      ppppdVar26 = (double ****)&ppdStack_250;
      if (&ppdStack_250 == pppdStack_258) {
code_r0x00010787d234:
        ppppdVar27 = (double ****)&ppdStack_250;
        pppdStack_210 = &ppdStack_250;
        if ((double ***)ppdStack_250 != (double ***)0x0) {
          pppdStack_210 = (double ***)ppppdVar26;
          ppppdVar27 = ppppdVar26 + 1;
          goto code_r0x00010787d244;
        }
code_r0x00010787d260:
        pppdVar19 = pppdStack_210;
        func_0x0001078817b0();
        pppdStack_270 = (double ***)0x1;
        ppdVar40 = *pppdVar36;
        *(double ***)((long)ppppdVar17 + 0x24) = pppdVar36[1];
        *(double ***)((long)ppppdVar17 + 0x1c) = ppdVar40;
        pppdStack_278 = &ppdStack_250;
        func_0x000107516444(&pppdStack_258,pppdVar19,ppppdVar27,ppppdVar17);
        pppdStack_280 = (double ***)0x0;
        ppppdVar17 = &pppdStack_280;
        func_0x00010751646c();
      }
      else {
        func_0x00010002c810();
        ppppdVar17 = (double ****)((long)ppppdVar26 + 0x1c);
        func_0x0001075153a0(ppppdVar17,pppdVar36);
        if (((uint)ppppdVar17 >> 7 & 1) != 0) goto code_r0x00010787d234;
        ppppdVar17 = &pppdStack_258;
        func_0x0001075163d0(ppppdVar17,&pppdStack_210,pppdVar36);
        ppppdVar27 = ppppdVar17;
code_r0x00010787d244:
        if (*ppppdVar27 == (double ***)0x0) goto code_r0x00010787d260;
      }
    }
    dVar41 = (double)ppdVar34 + 1.0;
    ppppdVar26 = (double ****)pppdStack_258;
    for (ppppdVar17 = (double ****)pppdStack_230; pppdStack_258 = (double ***)ppppdVar26,
        ppppdVar17 != (double ****)0x0; ppppdVar17 = (double ****)*ppppdVar17) {
      uVar6 = *(undefined1 *)(ppppdVar17 + 2);
      pppdVar19 = ppppdVar17[4];
      ppppdVar26 = (double ****)0x80000000;
      iVar28 = -0x80000000;
      pppdVar13 = ppppdVar17[3];
      iVar29 = 0x7fffffff;
      uVar31 = 0x7fffffff;
      for (pppdVar36 = pppdVar13; uVar33 = (uint)ppppdVar26, pppdVar36 != pppdVar19;
          pppdVar36 = pppdVar36 + 2) {
        iVar2 = *(int *)(pppdVar36 + 1);
        uVar4 = *(uint *)((long)pppdVar36 + 0xc);
        iVar30 = iVar2;
        if (iVar29 <= iVar2) {
          iVar30 = iVar29;
        }
        uVar1 = uVar4;
        if ((int)uVar31 <= (int)uVar4) {
          uVar1 = uVar31;
        }
        if (iVar28 <= iVar2) {
          iVar28 = iVar2;
        }
        if ((int)uVar33 <= (int)uVar4) {
          uVar33 = uVar4;
        }
        ppppdVar26 = (double ****)(ulong)uVar33;
        iVar29 = iVar30;
        uVar31 = uVar1;
      }
      ppppdVar27 = (double ****)0x0;
      pppdStack_278 = (double ***)0x0;
      pppdStack_280 = (double ***)0x0;
      ppdStack_268 = (double **)0x0;
      pppdStack_270 = (double ***)0x0;
      fStack_260 = 1.0;
      for (; pppdVar13 != pppdVar19; pppdVar13 = pppdVar13 + 2) {
        func_0x0001075177dc(&pppdStack_280,pppdVar13);
      }
      for (iVar29 = iVar29 + -1; iVar30 = uVar31 - 1, iVar29 <= iVar28 + 1; iVar29 = iVar29 + 1) {
        for (; iVar30 <= (int)(uVar33 + 1); iVar30 = iVar30 + 1) {
          func_0x000107359e6c(apdStack_2a0,uVar6,iVar29,iVar30);
          pppdVar36 = (double ***)apdStack_2a0;
          pppdVar13 = (double ***)(ulong)uVar14;
          func_0x0001073b9b38();
          ppppdVar22 = (double ****)&ppdStack_268;
          ppdStack_290 = (double **)pppdVar36;
          ppdStack_288 = (double **)pppdVar13;
          func_0x00010784b2bc(ppppdVar22,&ppdStack_290);
          ppppdVar11 = (double ****)pppdStack_278;
          ppppdVar10 = ppppdVar22;
          if ((double ****)pppdStack_278 != (double ****)0x0) {
            uVar15 = (long)pppdStack_278 - 1;
            if (((ulong)pppdStack_278 & uVar15) == 0) {
              ppppdVar26 = (double ****)(uVar15 & (ulong)ppppdVar22);
            }
            else {
              ppppdVar26 = ppppdVar22;
              if (pppdStack_278 <= ppppdVar22) {
                uVar20 = 0;
                if ((double ****)pppdStack_278 != (double ****)0x0) {
                  uVar20 = (ulong)ppppdVar22 / (ulong)pppdStack_278;
                }
                ppppdVar26 = (double ****)((long)ppppdVar22 - uVar20 * (long)pppdStack_278);
              }
            }
            ppdVar34 = pppdStack_280[(long)ppppdVar26];
            if (ppdVar34 != (double **)0x0) {
              do {
                while( true ) {
                  ppdVar34 = (double **)*ppdVar34;
                  if (ppdVar34 == (double **)0x0) goto code_r0x00010787d430;
                  ppppdVar16 = (double ****)ppdVar34[1];
                  if (ppppdVar16 != ppppdVar22) break;
                  ppppdVar10 = (double ****)(ppdVar34 + 2);
                  func_0x0001073bc1c0(ppppdVar10,&ppdStack_290);
                  if (((ulong)ppppdVar10 & 1) != 0) goto code_r0x00010787d548;
                }
                if (((ulong)ppppdVar11 & uVar15) == 0) {
                  ppppdVar16 = (double ****)((ulong)ppppdVar16 & uVar15);
                }
                else if (ppppdVar11 <= ppppdVar16) {
                  uVar20 = 0;
                  if (ppppdVar11 != (double ****)0x0) {
                    uVar20 = (ulong)ppppdVar16 / (ulong)ppppdVar11;
                  }
                  ppppdVar16 = (double ****)((long)ppppdVar16 - uVar20 * (long)ppppdVar11);
                }
              } while (ppppdVar16 == ppppdVar26);
            }
          }
code_r0x00010787d430:
          func_0x0001078817b8();
          uStack_200 = 1;
          pppdStack_210 = (double ***)ppppdVar10;
          pppdStack_208 = (double ***)&pppdStack_270;
          *ppppdVar10 = (double ***)0x0;
          ppppdVar10[1] = (double ***)ppppdVar22;
          ppppdVar10[3] = (double ***)ppdStack_288;
          ppppdVar10[2] = (double ***)ppdStack_290;
          ppppdVar27 = (double ****)(ulong)(uint)(float)((long)ppdStack_268 + 1);
          ppppdVar38 = (double ****)(ulong)(uint)fStack_260;
          if ((ppppdVar11 == (double ****)0x0) ||
             (fStack_260 * (float)ppppdVar11 < (float)((long)ppdStack_268 + 1))) {
            bVar7 = (double ****)0x2 < ppppdVar11;
            bVar8 = ppppdVar11 == (double ****)0x3;
            func_0x000107881374((long)ppppdVar11 << 1);
            uVar37 = extraout_x8_02;
            if (!bVar7 || bVar8) {
              uVar37 = extraout_x9_01;
            }
            func_0x000107517a3c(&pppdStack_280,uVar37);
            ppppdVar11 = (double ****)pppdStack_278;
            if (((ulong)pppdStack_278 & (long)pppdStack_278 - 1U) == 0) {
              ppppdVar26 = (double ****)((long)pppdStack_278 - 1U & (ulong)ppppdVar22);
            }
            else {
              ppppdVar26 = ppppdVar22;
              if (pppdStack_278 <= ppppdVar22) {
                uVar15 = 0;
                if ((double ****)pppdStack_278 != (double ****)0x0) {
                  uVar15 = (ulong)ppppdVar22 / (ulong)pppdStack_278;
                }
                ppppdVar26 = (double ****)((long)ppppdVar22 - uVar15 * (long)pppdStack_278);
              }
            }
          }
          ppdVar34 = pppdStack_280[(long)ppppdVar26];
          if (ppdVar34 == (double **)0x0) {
            *pppdStack_210 = (double **)pppdStack_270;
            pppdStack_270 = pppdStack_210;
            pppdStack_280[(long)ppppdVar26] = (double **)&pppdStack_270;
            if ((double ***)*pppdStack_210 != (double ***)0x0) {
              ppppdVar22 = (double ****)(*pppdStack_210)[1];
              if (((ulong)ppppdVar11 & (long)ppppdVar11 - 1U) == 0) {
                ppppdVar22 = (double ****)((ulong)ppppdVar22 & (long)ppppdVar11 - 1U);
              }
              else if (ppppdVar11 <= ppppdVar22) {
                uVar15 = 0;
                if (ppppdVar11 != (double ****)0x0) {
                  uVar15 = (ulong)ppppdVar22 / (ulong)ppppdVar11;
                }
                ppppdVar22 = (double ****)((long)ppppdVar22 - uVar15 * (long)ppppdVar11);
              }
              pppdStack_280[(long)ppppdVar22] = (double **)pppdStack_210;
            }
          }
          else {
            *pppdStack_210 = (double **)*ppdVar34;
            *ppdVar34 = (double *)pppdStack_210;
          }
          pppdStack_210 = (double ***)0x0;
          ppdStack_268 = (double **)((long)ppdStack_268 + 1);
          func_0x000107517c34(&pppdStack_210);
code_r0x00010787d548:
        }
      }
      func_0x00010741657c(puVar12,0);
      pppdStack_210 = (double ***)ppppdVar27;
      pppdStack_208 = (double ***)ppppdVar38;
      func_0x00010726b794(&pppdStack_210,uVar6);
      ppppdVar26 = ppppdVar38;
      for (ppppdVar22 = (double ****)pppdStack_270; ppppdVar22 != (double ****)0x0;
          ppppdVar22 = (double ****)*ppppdVar22) {
        dVar35 = (double)NEON_ucvtf((ulong)*(uint *)(ppppdVar22 + 3));
        dVar39 = (double)NEON_ucvtf((ulong)*(uint *)((long)ppppdVar22 + 0x1c));
        ppppdVar26 = (double ****)ABS((dVar39 + 0.5) - (double)ppppdVar38);
        bVar8 = false;
        bVar7 = true;
        if (ABS((dVar35 + 0.5) - (double)ppppdVar27) <= dVar41) {
          bVar8 = false;
          bVar7 = true;
          if (!NAN((double)ppppdVar26) && !NAN(dVar41)) {
            bVar8 = (double)ppppdVar26 == dVar41;
            bVar7 = dVar41 <= (double)ppppdVar26;
          }
        }
        if (!bVar7 || bVar8) {
          ppppdVar10 = &pppdStack_258;
          func_0x0001075163d0(ppppdVar10,&ppdStack_290,ppppdVar22 + 2);
          if (*ppppdVar10 == (double ***)0x0) {
            ppppdVar11 = ppppdVar10;
            func_0x0001078817b0();
            uStack_200 = 1;
            pppdVar36 = ppppdVar22[2];
            pppdStack_208 = &ppdStack_250;
            *(double ****)((long)ppppdVar11 + 0x24) = ppppdVar22[3];
            *(double ****)((long)ppppdVar11 + 0x1c) = pppdVar36;
            func_0x000107516444(&pppdStack_258,ppdStack_290,ppppdVar10,ppppdVar11);
            pppdStack_210 = (double ***)0x0;
            func_0x00010751646c(&pppdStack_210);
          }
        }
      }
      func_0x000107517c6c(&pppdStack_280);
      ppppdVar38 = ppppdVar26;
      ppppdVar26 = (double ****)pppdStack_258;
    }
    lVar9 = 0;
    func_0x000107881970();
    ppppdVar38 = ppppdVar26;
    while (ppppdVar38 != (double ****)&ppdStack_250) {
      lVar9 = lVar9 + 1;
      func_0x00010002c7d4();
    }
    pppdStack_278 = (double ***)((ulong)pppdStack_278 & 0xffffffffffffff00);
    if (lVar9 != 0) {
      func_0x000107516278(extraout_x8,lVar9);
      puVar25 = (undefined8 *)extraout_x8[1];
      while (ppppdVar26 != (double ****)&ppdStack_250) {
        uVar37 = *(undefined8 *)((long)ppppdVar26 + 0x1c);
        puVar25[1] = *(undefined8 *)((long)ppppdVar26 + 0x24);
        *puVar25 = uVar37;
        func_0x00010002c7d4();
        puVar25 = puVar25 + 2;
      }
      extraout_x8[1] = puVar25;
    }
    pppdStack_278 = (double ***)CONCAT71(pppdStack_278._1_7_,1);
    func_0x000107880cf0(&pppdStack_280);
    func_0x0001075171d8(&pppdStack_258);
    func_0x000107880d1c(&lStack_240);
  }
  return;
}



/* Entry: 10787e898; end: 10787e967;  */

void FUN_10787e898(long param_1)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  func_0x0001078814d8();
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001078811b8(uVar4);
    lVar3 = uVar4 + 0x70;
  }
  else {
    plVar1 = unaff_x19;
    func_0x00010787ebb0();
    func_0x00010787eb2c(&lStack_58,plVar1,(unaff_x19[1] - *unaff_x19) / 0x70,
                        (ulong *)(param_1 + 0x10));
    func_0x0001078811b8(lStack_48);
    lVar3 = lStack_48 + 0x70;
    func_0x0001078815ac(lStack_50);
    lStack_58 = *unaff_x19;
    *unaff_x19 = unaff_x20;
    unaff_x19[1] = lVar3;
    lVar2 = unaff_x19[2];
    unaff_x19[2] = lStack_40;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    lStack_40 = lVar2;
    func_0x00010787eb70(&lStack_58);
  }
  unaff_x19[1] = lVar3;
  return;
}



/* Entry: 10787ec10; end: 10787eceb;  */

/* WARNING: Possible PIC construction at 0x00010787ec98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787ece8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010787ec9c) */
/* WARNING: Removing unreachable block (ram,0x00010787ecd8) */

void FUN_10787ec10(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  undefined1 uVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar4 = (undefined1 **)&stack0xffffffffffffffc0;
  func_0x0001078814d8();
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
    uVar9 = unaff_x20[1];
    uVar8 = *unaff_x20;
    puVar2[2] = unaff_x20[2];
    puVar2[1] = uVar9;
    *puVar2 = uVar8;
    unaff_x19[1] = (long)(puVar2 + 3);
    return;
  }
  uVar1 = ((long)puVar2 - *unaff_x19) / 0x18 + 1;
  uVar5 = 0xaaaaaaaaaaaaaa9 < uVar1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    uVar3 = ((long)*(undefined8 **)(param_1 + 0x10) - *unaff_x19) / 0x18;
    param_1 = uVar3 * 2;
    if (param_1 < uVar1 || param_1 - uVar1 == 0) {
      param_1 = uVar1;
    }
    uVar5 = 0x555555555555554 < uVar3;
    if ((bool)uVar5) {
      param_1 = 0xaaaaaaaaaaaaaaa;
    }
    puVar7 = (undefined *)0x10787ec9c;
    ppuVar6 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  else {
    ppuVar4 = &puStack_50;
    ppuVar6 = &puStack_50;
    puStack_48 = &SUB_10787ecec;
    puVar7 = &SUB_10787ecf8;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x0001078811a0();
  }
  *(undefined8 **)((long)ppuVar4 + -0x20) = unaff_x20;
  *(long **)((long)ppuVar4 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar6;
  *(undefined **)((long)ppuVar4 + -8) = puVar7;
  func_0x00010788195c();
  if ((bool)uVar5) {
    func_0x000104bd35f4();
    *(undefined8 **)((long)ppuVar4 + -0x40) = unaff_x20;
    *(long **)((long)ppuVar4 + -0x38) = unaff_x19;
    *(undefined1 **)((long)ppuVar4 + -0x30) = (undefined1 *)((long)ppuVar4 + -0x10);
    *(undefined **)((long)ppuVar4 + -0x28) = &UNK_10787ed30;
    func_0x000107881704();
    if (param_1 != 0) {
      func_0x0001078817c0();
    }
    return;
  }
  __Znwm(param_1 * 0x18);
  return;
}



/* Entry: 10787ee54; end: 10787eea7;  */

void FUN_10787ee54(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107881704();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10787f610; end: 10787f63b;  */

undefined8 FUN_10787f610(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010787eea8(&uStack_28);
  return param_1;
}



/* Entry: 10787ffdc; end: 10788016b;  */

void FUN_10787ffdc(double *param_1,double *param_2,int param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  dVar3 = (double)(long)param_2[1];
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  dVar4 = param_2[3];
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    dVar6 = param_2[5];
    dVar7 = param_1[4];
    dVar8 = param_1[5];
    if (param_2[2] <= *param_1 + dVar7 * (dVar6 / dVar8)) goto LAB_1078800a4;
  }
  else {
    dVar6 = param_2[5];
    dVar7 = param_1[4];
    dVar8 = param_1[5];
    if (*param_2 <= param_1[2] + dVar7 * (-dVar6 / dVar8)) goto LAB_1078800a4;
  }
  dVar7 = param_1[1];
  dVar6 = *param_1;
  dVar12 = param_1[3];
  dVar8 = param_1[2];
  dVar14 = param_1[5];
  dVar13 = param_1[4];
  dVar11 = param_2[3];
  dVar10 = param_2[2];
  dVar9 = param_2[5];
  dVar5 = param_2[4];
  dVar15 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = dVar15;
  param_1[3] = dVar11;
  param_1[2] = dVar10;
  param_1[5] = dVar9;
  param_1[4] = dVar5;
  param_2[3] = dVar12;
  param_2[2] = dVar8;
  param_2[5] = dVar14;
  param_2[4] = dVar13;
  param_2[1] = dVar7;
  *param_2 = dVar6;
  dVar7 = param_1[4];
  dVar8 = param_1[5];
  dVar6 = param_2[5];
LAB_1078800a4:
  dVar12 = (double)NEON_fminnm((double)param_3,(long)dVar4);
  dVar4 = param_2[4];
  dVar13 = 1.0;
  if (dVar7 <= 0.0) {
    dVar13 = 0.0;
  }
  dVar14 = 1.0;
  if (0.0 <= dVar4) {
    dVar14 = 0.0;
  }
  iVar2 = (int)dVar3;
  while( true ) {
    dVar3 = (double)iVar2;
    if (dVar12 <= dVar3) {
      return;
    }
    dVar5 = (double)NEON_fminnm(param_1[5],(dVar13 + dVar3) - param_1[1]);
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    dVar3 = (double)NEON_fminnm(param_2[5],(dVar14 + dVar3) - param_2[1]);
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    iStack_64 = (int)(*param_2 + dVar3 * (dVar4 / dVar6));
    iStack_68 = (int)(*param_1 + dVar5 * (dVar7 / dVar8));
    plVar1 = *(long **)(param_4 + 0x18);
    iStack_6c = iVar2;
    if (plVar1 == (long *)0x0) break;
    (**(code **)(*plVar1 + 0x30))(plVar1,&iStack_64,&iStack_68,&iStack_6c);
    iVar2 = iVar2 + 1;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 107880368; end: 1078803ab;  */

long * FUN_107880368(long *param_1)

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



/* Entry: 107880d6c; end: 107880d83;  */

void FUN_107880d6c(long *param_1,long param_2)

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



/* Entry: 107880f58; end: 107880f83;  */

long * FUN_107880f58(long *param_1)

{
  func_0x000107880f84();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107881b2c; end: 107881e43;  */

uint * FUN_107881b2c(uint *param_1,uint param_2,int *param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint extraout_w8;
  int extraout_w8_00;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  uint uStack_b8;
  undefined1 uStack_b4;
  int iStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  *param_1 = param_2;
  puVar6 = param_1 + 4;
  puVar6[0] = 0;
  puVar6[1] = 0;
  puVar4 = param_1 + 2;
  *(uint **)puVar4 = puVar6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  iVar3 = *param_3;
  *(bool *)(param_1 + 1) = iVar3 == 1 || iVar3 == 4;
  uStack_b4 = (undefined1)param_4;
  uStack_b8 = param_2;
  if (iVar3 != 7) {
    if (iVar3 == 6) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = *(undefined8 *)(param_3 + 4);
      uStack_a0 = *(undefined8 *)(param_3 + 2);
      if (param_4 != 0) {
        uVar10 = *(undefined8 *)(param_3 + 2);
        uVar8 = *(undefined8 *)(param_3 + 4);
        func_0x0001078843a4();
        func_0x0001078844a4();
        uStack_a0 = uVar8;
        uStack_98 = uVar10;
      }
      func_0x000107884500();
      uStack_70 = 0;
      func_0x0001078842fc();
      dVar9 = (double)NEON_fminnm((double)(1 << (ulong)(param_2 & 0x1f)),uStack_98);
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      iStack_b0 = (int)dVar9;
      func_0x0001078844e8();
      func_0x000107882458();
      func_0x000107884418();
      goto LAB_107881c60;
    }
    if (iVar3 == 5) {
      func_0x00010788452c();
      func_0x000107883d20(&uStack_b8,param_3 + 2,&plStack_d0,0);
      goto LAB_107881c60;
    }
    if (iVar3 == 4) {
      func_0x0001078842fc(param_1,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
      func_0x00010788450c();
      goto LAB_107881c60;
    }
    if (iVar3 == 3) {
      puVar7 = *(undefined8 **)(param_3 + 2);
      puVar1 = *(undefined8 **)(param_3 + 4);
      func_0x0001078842fc();
      for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = puVar7[1];
        uStack_a0 = *puVar7;
        if (param_4 != 0) {
          uVar10 = *puVar7;
          uVar8 = puVar7[1];
          func_0x0001078843a4();
          func_0x0001078844a4();
          uStack_a0 = uVar8;
          uStack_98 = uVar10;
        }
        func_0x000107884500();
        uStack_70 = 0;
        func_0x000107884420(uStack_98);
        iStack_b0 = extraout_w8_00;
        func_0x0001078844e8();
        func_0x000107882458();
        func_0x000107884418();
      }
      goto LAB_107881c60;
    }
    if (iVar3 == 2) {
      lVar5 = *(long *)(param_3 + 2);
      lVar2 = *(long *)(param_3 + 4);
      func_0x0001078842fc();
      for (; lVar5 != lVar2; lVar5 = lVar5 + 0x18) {
        func_0x000107883d20(&uStack_b8,lVar5,&plStack_d0,0);
      }
      goto LAB_107881c60;
    }
    if (iVar3 == 1) {
      lVar5 = *(long *)(param_3 + 2);
      lVar2 = *(long *)(param_3 + 4);
      func_0x0001078842fc();
      for (; lVar5 != lVar2; lVar5 = lVar5 + 0x18) {
        func_0x00010788450c();
      }
      goto LAB_107881c60;
    }
  }
  func_0x00010788452c();
LAB_107881c60:
  func_0x00010788106c(puVar4,*(undefined8 *)(param_1 + 4));
  *(long **)(param_1 + 2) = plStack_d0;
  *(long *)(param_1 + 4) = lStack_c8;
  *(long *)(param_1 + 6) = lStack_c0;
  if (lStack_c0 == 0) {
    *(uint **)puVar4 = puVar6;
  }
  else {
    *(uint **)(lStack_c8 + 0x10) = puVar6;
    plStack_d0 = &lStack_c8;
    lStack_c8 = 0;
    lStack_c0 = 0;
  }
  func_0x0001078844e0();
  if (*(long *)(param_1 + 6) != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 2);
    param_1[0x1c] = 0;
    func_0x000107881e44(param_1);
    if (*(long *)(param_1 + 0x1a) != 0) {
      func_0x00010788445c(*(undefined8 *)(param_1 + 0x12));
      param_1[0x1d] = extraout_w8;
    }
  }
  return param_1;
}



/* Entry: 107882658; end: 10788275b;  */

void FUN_107882658(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar4 = param_2[1] + ((lVar1 - lVar3) / -0x28) * 0x28;
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_48 = lVar4;
  lStack_50 = lVar4;
  for (lVar2 = lVar3; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    func_0x000107882528(lStack_48,lVar2);
    lStack_48 = lStack_48 + 0x28;
  }
  uStack_58 = 1;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    func_0x000104c31c5c(lVar3);
  }
  func_0x0001078827c4(&plStack_70);
  param_2[1] = lVar4;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1078831b0; end: 1078832bb;  */

void FUN_1078831b0(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *param_2;
  bVar1 = param_2[1] < param_1[1];
  if (iVar4 != *param_1) {
    bVar1 = iVar4 < *param_1;
  }
  bVar2 = param_3[1] < param_2[1];
  if (*param_3 != iVar4) {
    bVar2 = *param_3 < iVar4;
  }
  if (bVar1) {
    if (bVar2) {
      iVar4 = param_1[2];
      uVar5 = *(undefined8 *)param_1;
      iVar3 = param_3[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      param_1[2] = iVar3;
    }
    else {
      func_0x000107884570();
      bVar1 = param_3[1] < param_2[1];
      if (*param_3 != *param_2) {
        bVar1 = *param_3 < *param_2;
      }
      if (!bVar1) {
        return;
      }
      iVar4 = param_2[2];
      uVar5 = *(undefined8 *)param_2;
      iVar3 = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = iVar3;
    }
    *(undefined8 *)param_3 = uVar5;
    param_3[2] = iVar4;
  }
  else if (bVar2) {
    iVar4 = param_2[2];
    uVar5 = *(undefined8 *)param_2;
    iVar3 = param_3[2];
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    param_2[2] = iVar3;
    *(undefined8 *)param_3 = uVar5;
    param_3[2] = iVar4;
    bVar1 = param_2[1] < param_1[1];
    if (*param_2 != *param_1) {
      bVar1 = *param_2 < *param_1;
    }
    if (bVar1) {
      func_0x000107884570();
    }
  }
  return;
}



/* Entry: 107883a58; end: 107883af7;  */

undefined1  [16] FUN_107883a58(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1078842fc; end: 10788469b;  */

void FUN_1078842fc(void)

{
  return;
}



/* Entry: 107884bbc; end: 107884bfb;  */

void FUN_107884bbc(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078861e4; end: 107886213;  */

void FUN_1078861e4(long param_1,undefined8 param_2,int param_3)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x38) = 4;
  *(long *)(param_1 + 0x40) = (long)param_3;
  return;
}



/* Entry: 1078867b8; end: 1078867c3;  */

void FUN_1078867b8(void)

{
  return;
}



/* Entry: 107886e20; end: 107886f4f;  */

void FUN_107886e20(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(char *)(lVar1 + 8) == '\x01') {
    *(undefined1 *)(lVar1 + 8) = 0;
  }
  if (*(char *)(lVar1 + 0x1c) == '\x01') {
    *(undefined1 *)(lVar1 + 0x1c) = 0;
  }
  if (*(char *)(lVar1 + 0x34) == '\x01') {
    *(undefined1 *)(lVar1 + 0x34) = 0;
  }
  if (*(char *)(lVar1 + 0x40) == '\x01') {
    *(undefined1 *)(lVar1 + 0x40) = 0;
  }
  if (*(char *)(lVar1 + 0x4c) == '\x01') {
    *(undefined1 *)(lVar1 + 0x4c) = 0;
  }
  if (*(char *)(lVar1 + 0x53) == '\x01') {
    *(undefined1 *)(lVar1 + 0x53) = 0;
  }
  if (*(char *)(lVar1 + 0x60) == '\x01') {
    *(undefined1 *)(lVar1 + 0x60) = 0;
  }
  if (*(char *)(lVar1 + 0x78) == '\x01') {
    *(undefined1 *)(lVar1 + 0x78) = 0;
  }
  if (*(char *)(lVar1 + 0x88) == '\x01') {
    *(undefined1 *)(lVar1 + 0x88) = 0;
  }
  if (*(char *)(lVar1 + 0xc0) == '\x01') {
    *(undefined1 *)(lVar1 + 0xc0) = 0;
  }
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined4 *)(lVar1 + 0xd0) = 0;
  lVar5 = 0x20;
  *(undefined1 *)(lVar1 + 0xd8) = 0;
  puVar2 = (undefined4 *)(lVar1 + 0xe8);
  do {
    *(undefined8 *)(puVar2 + -2) = 0;
    *puVar2 = 0;
    lVar5 = lVar5 + -1;
    puVar2 = puVar2 + 4;
  } while (lVar5 != 0);
  lVar5 = 0x20;
  puVar2 = (undefined4 *)(lVar1 + 0x3f0);
  do {
    *(undefined8 *)(puVar2 + -2) = 0;
    *puVar2 = 0;
    lVar5 = lVar5 + -1;
    puVar2 = puVar2 + 4;
  } while (lVar5 != 0);
  lVar3 = 0x10;
  lVar5 = lVar1;
  do {
    *(undefined8 *)(lVar5 + 0x2e8) = 0;
    *(undefined8 *)(lVar5 + 0x5e8) = 0;
    lVar5 = lVar5 + 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar4 = (undefined8 *)(lVar1 + 0x368);
  lVar5 = 0x10;
  do {
    *puVar4 = 0;
    puVar4[0x60] = 0;
    puVar4 = puVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined8 *)(lVar1 + 0x6f0) = 0;
  return;
}



/* Entry: 10788732c; end: 107887387;  */

bool FUN_10788732c(char *param_1,char *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return param_1[4] != param_2[4];
  }
  return true;
}



/* Entry: 107887628; end: 107887677;  */

void FUN_107887628(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    uVar2 = (uint)param_2;
    if (((uVar2 >> 0x18 == 1) && ((param_2 >> 0x20 & 1) != 0)) &&
       (((uint)(param_2 >> 0x10) & 0xff) == 4)) {
      if ((~uVar2 & 0xff) != 0) {
        func_0x000107886950(param_1,param_3,0x10,uVar2 & 0xff);
      }
      if ((~uVar2 & 0xff00) != 0) {
        func_0x000107889c50();
        func_0x000107887ed4();
        _objc_msgSend();
        lVar1 = *(long *)(param_1 + 0x30) + (param_2 >> 8 & 0xff) * 0x10;
        *(undefined8 *)(lVar1 + 1000) = 0;
        *(undefined4 *)(lVar1 + 0x3f0) = 0;
      }
    }
    return;
  }
  return;
}



/* Entry: 107887984; end: 107887a7f;  */

void FUN_107887984(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x24;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lStack_68;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x6f0);
  if (lVar4 != 0) {
    func_0x000107887eb4();
    lVar3 = ((ulong)param_4 * 2 + (ulong)param_4) * 0x10;
    __Znam();
    puVar1 = (undefined4 *)(lVar3 + 0x18);
    _bzero();
    puVar2 = (undefined4 *)(unaff_x24 + 0x14);
    for (uVar5 = (ulong)param_4; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar6 = puVar2[-3];
      uVar7 = *puVar2;
      uVar8 = puVar2[3];
      *(undefined8 *)(puVar1 + -6) = *(undefined8 *)(puVar2 + -5);
      puVar1[-4] = uVar6;
      puVar1[-3] = 0;
      *(undefined8 *)(puVar1 + -2) = *(undefined8 *)(puVar2 + -2);
      *puVar1 = uVar7;
      puVar1[1] = 0;
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(puVar2 + 1);
      puVar1[4] = uVar8;
      puVar2 = puVar2 + 9;
      puVar1[5] = 0;
      puVar1 = puVar1 + 0xc;
    }
    lStack_68 = lVar3;
    func_0x000107887df4(*(undefined8 *)(lVar4 + 0x1c0));
    func_0x000107887e84();
    func_0x000107887d70(&lStack_68);
  }
  return;
}



/* Entry: 107887cf0; end: 107887d07;  */

void FUN_107887cf0(long *param_1,long param_2)

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



/* Entry: 107887f8c; end: 107887f8f;  */

undefined8 * FUN_107887f8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e4228;
  func_0x00010724e5b8(param_1 + 1);
  return param_1;
}



/* Entry: 1078881d0; end: 10788823b;  */

undefined8 FUN_1078881d0(void)

{
  int iVar1;
  
  if ((bRam00000001137263d8 & 1) == 0) {
    iVar1 = 0x137263d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _objc_lookUpClass(&UNK_10f430aae);
      func_0x0001078902dc(0x1137263d0);
    }
  }
  return uRam00000001137263d0;
}



/* Entry: 10788854c; end: 1078885bb;  */

undefined * FUN_10788854c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f20 & 1) == 0) {
    iVar1 = 0x13823f20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430b56;
      _sel_registerName();
      puRam0000000113823f18 = puVar2;
      ___cxa_guard_release(0x113823f20);
    }
  }
  return puRam0000000113823f18;
}



/* Entry: 1078888cc; end: 10788893b;  */

undefined * FUN_1078888cc(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823fa0 & 1) == 0) {
    iVar1 = 0x13823fa0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430c72;
      _sel_registerName();
      puRam0000000113823f98 = puVar2;
      ___cxa_guard_release(0x113823fa0);
    }
  }
  return puRam0000000113823f98;
}



/* Entry: 107888c48; end: 107888cb7;  */

undefined * FUN_107888c48(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824010 & 1) == 0) {
    iVar1 = 0x13824010;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430d17;
      _sel_registerName();
      puRam0000000113824008 = puVar2;
      ___cxa_guard_release(0x113824010);
    }
  }
  return puRam0000000113824008;
}



/* Entry: 107888fb8; end: 107889023;  */

undefined8 FUN_107888fb8(void)

{
  int iVar1;
  
  if ((bRam0000000113726468 & 1) == 0) {
    iVar1 = 0x13726468;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f430e34);
      func_0x0001078902dc(0x113726460);
    }
  }
  return uRam0000000113726460;
}



/* Entry: 107889334; end: 1078893a3;  */

undefined * FUN_107889334(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138240c0 & 1) == 0) {
    iVar1 = 0x138240c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430f3e;
      _sel_registerName();
      puRam00000001138240b8 = puVar2;
      ___cxa_guard_release(0x1138240c0);
    }
  }
  return puRam00000001138240b8;
}



/* Entry: 1078896b0; end: 10788971f;  */

undefined * FUN_1078896b0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824130 & 1) == 0) {
    iVar1 = 0x13824130;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430ff4;
      _sel_registerName();
      puRam0000000113824128 = puVar2;
      ___cxa_guard_release(0x113824130);
    }
  }
  return puRam0000000113824128;
}



/* Entry: 107889a20; end: 107889a8f;  */

undefined * FUN_107889a20(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824170 & 1) == 0) {
    iVar1 = 0x13824170;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4310bd;
      _sel_registerName();
      puRam0000000113824168 = puVar2;
      ___cxa_guard_release(0x113824170);
    }
  }
  return puRam0000000113824168;
}



/* Entry: 107889da0; end: 107889e0f;  */

undefined * FUN_107889da0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138241f0 & 1) == 0) {
    iVar1 = 0x138241f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4311a0;
      _sel_registerName();
      puRam00000001138241e8 = puVar2;
      ___cxa_guard_release(0x1138241f0);
    }
  }
  return puRam00000001138241e8;
}



/* Entry: 10788a114; end: 10788a17f;  */

undefined8 FUN_10788a114(void)

{
  int iVar1;
  
  if ((bRam0000000113726508 & 1) == 0) {
    iVar1 = 0x13726508;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f431228);
      func_0x0001078902dc(0x113726500);
    }
  }
  return uRam0000000113726500;
}



/* Entry: 10788a488; end: 10788a4f7;  */

undefined * FUN_10788a488(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824290 & 1) == 0) {
    iVar1 = 0x13824290;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4312b2;
      _sel_registerName();
      puRam0000000113824288 = puVar2;
      ___cxa_guard_release(0x113824290);
    }
  }
  return puRam0000000113824288;
}



/* Entry: 10788a800; end: 10788a86f;  */

undefined * FUN_10788a800(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138242f0 & 1) == 0) {
    iVar1 = 0x138242f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431376;
      _sel_registerName();
      puRam00000001138242e8 = puVar2;
      ___cxa_guard_release(0x1138242f0);
    }
  }
  return puRam00000001138242e8;
}



/* Entry: 10788ab7c; end: 10788abeb;  */

undefined * FUN_10788ab7c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824360 & 1) == 0) {
    iVar1 = 0x13824360;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4313f8;
      _sel_registerName();
      puRam0000000113824358 = puVar2;
      ___cxa_guard_release(0x113824360);
    }
  }
  return puRam0000000113824358;
}



/* Entry: 10788aefc; end: 10788af6b;  */

undefined * FUN_10788aefc(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138243e0 & 1) == 0) {
    iVar1 = 0x138243e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43148a;
      _sel_registerName();
      puRam00000001138243d8 = puVar2;
      ___cxa_guard_release(0x1138243e0);
    }
  }
  return puRam00000001138243d8;
}



/* Entry: 10788b278; end: 10788b2e7;  */

undefined * FUN_10788b278(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824450 & 1) == 0) {
    iVar1 = 0x13824450;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4314d5;
      _sel_registerName();
      puRam0000000113824448 = puVar2;
      ___cxa_guard_release(0x113824450);
    }
  }
  return puRam0000000113824448;
}



/* Entry: 10788b5f0; end: 10788bec7;  */

void FUN_10788b5f0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  func_0x0001078907c8();
  *param_1 = &PTR_DAT_1109e4278;
  (**(code **)(*param_2 + 0x68))();
  *(undefined8 *)(unaff_x19 + 8) = 0;
  func_0x00010788b430();
  func_0x0001078903f4();
  *(long **)(unaff_x19 + 8) = param_2;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  *(long **)(unaff_x19 + 0x20) = param_2 + 1;
  func_0x00010785f1f4();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(long **)(unaff_x19 + 0x28) = param_2;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x74) = 0;
  *(undefined8 *)(unaff_x19 + 0x6c) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  func_0x0001073af27c(&uStack_80,0,0);
  *(ulong *)(unaff_x19 + 0xd0) = CONCAT44(uStack_74,uStack_78);
  *(ulong *)(unaff_x19 + 200) = CONCAT44(uStack_7c,uStack_80);
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  func_0x00010724b8b8(&uStack_80);
  _bzero(unaff_x19 + 0xd8,0x1c0);
  uVar1 = unaff_x19 + 0x298;
  func_0x00010788f090();
  *(undefined8 *)(unaff_x19 + 0x2788) = 0;
  *(undefined8 *)(unaff_x19 + 0x2760) = 0;
  *(undefined8 *)(unaff_x19 + 0x2758) = 0;
  *(undefined8 *)(unaff_x19 + 0x2770) = 0;
  *(undefined8 *)(unaff_x19 + 0x2768) = 0;
  *(undefined8 *)(unaff_x19 + 0x277a) = 0;
  *(undefined8 *)(unaff_x19 + 0x2772) = 0;
  func_0x00010788afdc();
  func_0x000107890478();
  func_0x00010789033c();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890330();
    if (uVar1 != 0) goto LAB_10788b6fc;
LAB_10788b70c:
    func_0x00010788afdc();
    func_0x000107890478();
    func_0x00010789033c();
    if ((uVar1 & 1) == 0) {
      func_0x00010788b2e8();
      func_0x000107890330();
      if (uVar1 != 0) goto LAB_10788b730;
    }
    else {
LAB_10788b730:
      func_0x0001078904cc();
      _objc_msgSend();
      if ((uVar1 & 1) != 0) goto LAB_10788b844;
    }
    func_0x00010788afdc();
    func_0x000107890478();
    func_0x00010789033c();
    if ((uVar1 & 1) == 0) {
      func_0x00010788b2e8();
      func_0x000107890330();
      if (uVar1 != 0) goto LAB_10788b764;
    }
    else {
LAB_10788b764:
      func_0x0001078904cc();
      _objc_msgSend();
      if ((uVar1 & 1) != 0) goto LAB_10788b844;
    }
    func_0x00010788afdc();
    func_0x000107890478();
    func_0x00010789033c();
    if ((uVar1 & 1) == 0) {
      func_0x00010788b2e8();
      func_0x000107890330();
      if (uVar1 != 0) goto LAB_10788b798;
    }
    else {
LAB_10788b798:
      func_0x0001078904cc();
      _objc_msgSend();
      if ((uVar1 & 1) != 0) goto LAB_10788b844;
    }
    func_0x00010788afdc();
    func_0x000107890478();
    func_0x00010789033c();
    if ((uVar1 & 1) == 0) {
      func_0x00010788b2e8();
      func_0x000107890330();
      if (uVar1 != 0) goto LAB_10788b7cc;
    }
    else {
LAB_10788b7cc:
      func_0x0001078904cc();
      _objc_msgSend();
      if ((uVar1 & 1) != 0) goto LAB_10788b844;
    }
    func_0x00010788afdc();
    func_0x000107890478();
    func_0x00010789033c();
    if ((uVar1 & 1) == 0) {
      func_0x00010788b2e8();
      func_0x000107890330();
      if (uVar1 != 0) goto LAB_10788b800;
    }
    else {
LAB_10788b800:
      func_0x0001078904cc();
      _objc_msgSend();
      if ((uVar1 & 1) != 0) goto LAB_10788b844;
    }
    func_0x00010788afdc();
    func_0x000107890478();
    func_0x00010789033c();
    if ((uVar1 & 1) == 0) {
      func_0x00010788b2e8();
      func_0x000107890330();
      if (uVar1 != 0) goto LAB_10788b834;
    }
    else {
LAB_10788b834:
      func_0x0001078904cc();
      _objc_msgSend();
      if ((uVar1 & 1) != 0) goto LAB_10788b844;
    }
    uVar7 = 0x2000;
  }
  else {
LAB_10788b6fc:
    func_0x0001078904cc();
    _objc_msgSend();
    if ((uVar1 & 1) == 0) goto LAB_10788b70c;
LAB_10788b844:
    uVar7 = 0x4000;
  }
  *(undefined8 *)(unaff_x19 + 0x2758) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x2760) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x2768) = 0x1f;
  *(undefined8 *)(unaff_x19 + 0x2778) = 0x1000;
  *(undefined8 *)(unaff_x19 + 0x2770) = 0x10000000;
  *(undefined1 *)(unaff_x19 + 0x2780) = 1;
  func_0x00010788afdc();
  func_0x000107890478();
  func_0x00010789033c();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890330();
    if (uVar1 != 0) goto LAB_10788b894;
  }
  else {
LAB_10788b894:
    func_0x0001078904cc();
    _objc_msgSend();
  }
  *(char *)(unaff_x19 + 0x2781) = (char)uVar1;
  func_0x00010788afdc();
  func_0x000107890478();
  func_0x00010789033c();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890330();
    if (uVar1 != 0) goto LAB_10788b8c8;
  }
  else {
LAB_10788b8c8:
    func_0x0001078904cc();
    _objc_msgSend();
    if ((uVar1 & 1) != 0) {
      uVar7 = 0x20;
      goto LAB_10788b920;
    }
  }
  func_0x00010788afdc();
  func_0x000107890478();
  func_0x00010789033c();
  if ((uVar1 & 1) == 0) {
    func_0x00010788b2e8();
    func_0x000107890330();
    if (uVar1 == 0) {
      uVar7 = 4;
      goto LAB_10788b920;
    }
  }
  func_0x0001078904cc();
  _objc_msgSend();
  uVar7 = 0x20;
  if ((uVar1 & 1) == 0) {
    uVar7 = 4;
  }
LAB_10788b920:
  *(undefined8 *)(unaff_x19 + 0x2788) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x2798) = 0;
  *(undefined8 *)(unaff_x19 + 0x2790) = 0;
  *(undefined8 *)(unaff_x19 + 0x27a8) = 0;
  *(undefined8 *)(unaff_x19 + 0x27a0) = 0;
  uStack_80 = uStack_80 & 0xffffff00;
  puVar2 = (undefined *)(*(long *)(unaff_x19 + 0x28) + 0x5e0);
  func_0x00010724e2c8(puVar2,&uStack_80);
  *(char *)(unaff_x19 + 0x27b0) = (char)puVar2;
  *(undefined1 *)(unaff_x19 + 0x27b1) = 0;
  func_0x00010726ed14(unaff_x19 + 0x27b8);
  *(long *)(unaff_x19 + 0x27c8) = unaff_x19;
  if ((bRam0000000113726418 & 1) == 0) {
    puVar2 = (undefined *)0x113726418;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      puVar2 = &UNK_10f430d57;
      _sel_registerName();
      func_0x0001078902dc(0x113726410);
    }
  }
  func_0x000107890428();
  if (*(undefined **)(unaff_x19 + 0x10) == puVar2) {
    func_0x00010788b354();
    func_0x000107890420();
  }
  else {
    puVar3 = puVar2;
    if (*(undefined **)(unaff_x19 + 0x10) != (undefined *)0x0) {
      func_0x00010788b354();
      func_0x0001078904e0();
    }
    *(undefined **)(unaff_x19 + 0x10) = puVar2;
    puVar2 = puVar3;
  }
  func_0x00010788b430();
  func_0x000107890428();
  puVar3 = puVar2;
  FUN_1078881d0();
  func_0x00010788b198();
  func_0x0001078904d8();
  func_0x00010788b208();
  func_0x0001078904d8();
  puVar4 = puVar3;
  func_0x00010788a644();
  func_0x000107890360();
  func_0x00010788986c();
  func_0x000107890360();
  func_0x0001078898d8();
  func_0x000107890360();
  func_0x00010788a5d8();
  func_0x000107890360();
  func_0x000107887fa8();
  func_0x00010788b198();
  func_0x000107890470();
  func_0x00010788b208();
  func_0x000107890470();
  puVar5 = puVar4;
  func_0x0001078899b4();
  puVar6 = puVar4;
  _objc_msgSend(puVar4,puVar5,0);
  func_0x000107889800();
  puVar5 = puVar4;
  func_0x000107890418(puVar4,puVar6);
  func_0x0001078893a4();
  puVar6 = puVar4;
  func_0x00010789051c(puVar4,puVar5);
  func_0x000107889e10();
  puVar5 = puVar4;
  func_0x00010789051c(puVar4,puVar6);
  func_0x000107888d28();
  puVar6 = puVar2;
  _objc_msgSend(puVar2,puVar5,puVar4);
  puVar5 = puVar6;
  if (puVar4 != (undefined *)0x0) {
    func_0x00010788b354();
    func_0x000107890514();
  }
  if (puVar3 != (undefined *)0x0) {
    func_0x00010788b354();
    func_0x0001078904e0();
  }
  if (*(undefined **)(unaff_x19 + 0xa0) == puVar6) {
    func_0x00010788b354();
    func_0x000107890624();
  }
  else {
    if (*(undefined **)(unaff_x19 + 0xa0) != (undefined *)0x0) {
      func_0x00010788b354();
      func_0x0001078904e0();
    }
    *(undefined **)(unaff_x19 + 0xa0) = puVar6;
  }
  if (puVar2 != (undefined *)0x0) {
    func_0x00010788b354();
    func_0x000107890420();
  }
  func_0x00010788b430();
  func_0x000107890428();
  puVar2 = puVar5;
  func_0x000107888164();
  func_0x00010788b198();
  func_0x0001078904d8();
  func_0x00010788b208();
  func_0x0001078904d8();
  puVar3 = puVar2;
  func_0x00010788a0a8();
  func_0x000107890360();
  func_0x00010788a03c();
  func_0x000107890360();
  FUN_10788a114();
  func_0x000107890360();
  func_0x00010788a41c();
  func_0x000107890360();
  func_0x00010788a950();
  func_0x000107890360();
  FUN_107888fb8();
  func_0x000107890330();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010788b354();
    func_0x0001078904e0();
  }
  if (*(undefined **)(unaff_x19 + 0xc0) == puVar3) {
    func_0x00010788b354();
    func_0x000107890514();
  }
  else {
    if (*(undefined **)(unaff_x19 + 0xc0) != (undefined *)0x0) {
      func_0x00010788b354();
      func_0x0001078904e0();
    }
    *(undefined **)(unaff_x19 + 0xc0) = puVar3;
  }
  if (puVar5 != (undefined *)0x0) {
    func_0x00010788b354();
    func_0x000107890420();
  }
  uStack_60 = 7;
  uStack_58 = 0x3f800000;
  uStack_7c = 7;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0x101;
  uStack_6e = 1;
  func_0x00010788bec8();
  func_0x0001073c8a0c();
  return;
}



/* Entry: 10788c678; end: 10788cbc7;  */

void FUN_10788c678(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar4;
  undefined8 unaff_x23;
  uint uVar5;
  double dVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  
  func_0x0001078908ec();
  func_0x000107890558();
  lVar2 = 0;
  if (((param_2 >> 0x20 != 0) && (uVar5 = (uint)param_2, uVar5 != 0)) &&
     (func_0x000107890730(), lVar2 = param_1, param_1 != 0)) {
    func_0x00010788823c();
    func_0x00010788b198();
    func_0x000107890458();
    func_0x00010788b208();
    func_0x000107890458();
    lVar2 = param_1;
    func_0x00010788adac();
    func_0x0001078906fc();
    func_0x000107890648();
    func_0x000107889eec();
    func_0x0001078906fc();
    func_0x0001078905a8();
    func_0x00010788a260();
    func_0x0001078906fc();
    _objc_msgSend();
    func_0x00010788aa2c();
    func_0x0001078906fc();
    func_0x000107890834();
    FUN_10788a800();
    uVar1 = 5;
    if ((param_5 & 0x100) == 0) {
      uVar1 = 1;
    }
    lVar3 = param_1;
    _objc_msgSend(param_1,lVar2,(param_5 & 0x100) >> 7);
    func_0x00010788aa9c();
    _objc_msgSend(param_1,lVar3,uVar1 | param_5 >> 0xf & 2);
    if ((param_5 & 1) != 0) {
      uVar4 = (uint)(param_2 >> 0x20);
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      dVar6 = (double)uVar5;
      _log2(dVar6);
      func_0x00010788a180((double)(long)dVar6 + 1.0);
      func_0x0001078906fc();
      func_0x000107890720();
    }
    func_0x000107889024();
    func_0x000107890618();
    _objc_msgSend();
    lVar2 = param_1;
    func_0x00010788b354();
    func_0x0001078906fc();
    _objc_msgSend();
    if (unaff_x21 != 0) {
      func_0x000107893e30();
      func_0x0001078892c4();
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      in_stack_00000038 = 1;
      lVar2 = param_1;
      in_stack_00000028 = param_2 & 0xffffffff;
      in_stack_00000030 = param_2 >> 0x20;
      _objc_msgSend(param_1,unaff_x23,&stack0x00000010,0);
    }
    func_0x00010788838c();
    _objc_msgSend(param_1,lVar2);
    do {
      func_0x000107890798();
    } while (extraout_w11 != 0);
    do {
      func_0x000107890788();
    } while (extraout_w11_00 != 0);
    do {
      func_0x0001078903c8();
      lVar2 = param_1;
    } while (extraout_w10 != 0);
  }
  *unaff_x19 = lVar2;
  unaff_x19[1] = unaff_x20;
  func_0x0001078906d0();
  return;
}



/* Entry: 10788d344; end: 10788d3df;  */

void FUN_10788d344(undefined8 param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (((((int)param_3 != 0) && (param_3 >> 0x20 != 0)) && (param_4 != 0)) &&
     ((func_0x000107893e30(param_5,param_3), *(int *)(param_2 + 0x10) == (int)param_3 &&
      (*(int *)(param_2 + 0x14) == (int)(param_3 >> 0x20))))) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = param_5 & 0xffffffff;
    func_0x0001078892c4();
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_48 = 1;
    uStack_58 = param_3 & 0xffffffff;
    uStack_50 = param_3 >> 0x20;
    _objc_msgSend(uVar2,param_5,&uStack_70,0,param_4,uVar1);
  }
  return;
}



/* Entry: 10788db50; end: 10788db87;  */

void FUN_10788db50(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107890850();
  func_0x000107890908();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10788eae8; end: 10788f01b;  */

void FUN_10788eae8(long param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_98;
  undefined4 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar12 = param_2[3];
  lVar5 = param_2[4];
  lVar14 = param_2[5];
  for (plVar6 = *(long **)(param_1 + 0x2790); plVar6 != *(long **)(param_1 + 0x2798);
      plVar6 = plVar6 + 4) {
    if (((*plVar6 == lVar12) && (plVar6[1] == lVar5)) && (plVar6[2] == lVar14)) {
      lVar12 = plVar6[3];
      goto LAB_10788eeac;
    }
  }
  lStack_98 = 0;
  lVar11 = *(long *)(param_1 + 8);
  lVar16 = param_1;
  func_0x00010788b128();
  lVar15 = lVar16;
  func_0x00010788b510();
  _objc_msgSend(lVar16,lVar15,&UNK_10f431595,4);
  lVar15 = lVar16;
  func_0x000107888edc();
  _objc_msgSend(lVar11,lVar15,lVar16,0,&lStack_98);
  if ((lVar11 == 0) || (lStack_98 != 0)) {
    FUN_10788b278();
    func_0x000107890428();
    func_0x000107890708();
    func_0x0001078903f4();
    lVar12 = 0;
    if (lVar11 == 0) goto LAB_10788eeac;
  }
  else {
    lVar16 = lVar11;
    func_0x00010788b128();
    func_0x000107890818();
    func_0x000107890584();
    func_0x000107888d94();
    func_0x00010789082c(lVar11,lVar16);
    if ((lVar11 == 0) || (lStack_98 != 0)) {
      FUN_10788b278();
      func_0x000107890470();
      func_0x000107890708();
      func_0x0001078903f4();
      lVar12 = 0;
      if (lVar11 == 0) goto LAB_10788eea0;
    }
    else {
      func_0x0001078880f4();
      func_0x00010788b198();
      func_0x0001078903f4();
      func_0x00010788b208();
      func_0x0001078903f4();
      lVar16 = lVar11;
      func_0x00010788accc();
      lVar15 = lVar11;
      func_0x0001078905a8(lVar11,lVar16);
      func_0x000107889cc0();
      lVar16 = lVar11;
      func_0x000107890418(lVar11,lVar15);
      func_0x00010788a568();
      lVar15 = lVar11;
      func_0x000107890710(lVar11,lVar16);
      func_0x000107889790();
      lVar16 = lVar11;
      func_0x000107890720(lVar11,lVar15);
      func_0x0001078884dc();
      func_0x000107890470();
      lVar15 = lVar16;
      func_0x000107889094();
      _objc_msgSend(lVar16,lVar15,0);
      lVar15 = lVar16;
      func_0x00010788a260();
      lVar4 = lVar16;
      func_0x000107890648(lVar16,lVar15);
      func_0x000107889480();
      lVar15 = lVar16;
      _objc_msgSend(lVar16,lVar4,0);
      func_0x00010788ae1c();
      func_0x000107890418(lVar16,lVar15);
      lVar15 = *(long *)(param_1 + 8);
      func_0x000107888f48();
      _objc_msgSend(lVar15,lVar16,lVar11,&lStack_98);
      if ((lVar15 == 0) || (lStack_98 != 0)) {
        FUN_10788b278();
        func_0x0001078903f4();
        func_0x000107890708();
        func_0x0001078903f4();
        lVar12 = 0;
      }
      else {
        plVar6 = *(long **)(param_1 + 0x2798);
        uStack_80 = lVar12;
        uStack_78 = lVar5;
        lStack_70 = lVar14;
        if (plVar6 < *(long **)(param_1 + 0x27a0)) {
          plVar6[2] = lVar14;
          plVar6[1] = lVar5;
          *plVar6 = lVar12;
          plVar6[3] = lVar15;
          lStack_68 = 0;
          plVar6 = plVar6 + 4;
        }
        else {
          plVar13 = *(long **)(param_1 + 0x2790);
          lVar12 = (long)plVar6 - (long)plVar13 >> 5;
          uVar1 = lVar12 + 1;
          lStack_68 = lVar15;
          if (uVar1 >> 0x3b != 0) {
            func_0x00010788f608();
LAB_10788ef74:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10788ef78);
            (*pcVar3)();
          }
          uVar7 = (long)*(long **)(param_1 + 0x27a0) - (long)plVar13;
          uVar10 = (long)uVar7 >> 4;
          if (uVar10 <= uVar1) {
            uVar10 = uVar1;
          }
          if (0x7fffffffffffffdf < uVar7) {
            uVar10 = 0x7ffffffffffffff;
          }
          if (uVar10 >> 0x3b != 0) {
            func_0x000104bd35f4();
            goto LAB_10788ef74;
          }
          lVar5 = uVar10 << 5;
          __Znwm();
          plVar2 = (long *)(lVar5 + ((long)plVar6 - (long)plVar13));
          plVar2[1] = uStack_78;
          *plVar2 = uStack_80;
          plVar2[2] = lStack_70;
          plVar2[3] = lVar15;
          lStack_68 = 0;
          plVar8 = plVar2 + lVar12 * -4;
          for (plVar9 = plVar13; plVar9 != plVar6; plVar9 = plVar9 + 4) {
            lVar16 = plVar9[1];
            lVar14 = *plVar9;
            plVar8[2] = plVar9[2];
            plVar8[1] = lVar16;
            *plVar8 = lVar14;
            plVar8[3] = plVar9[3];
            plVar9[3] = 0;
            plVar8 = plVar8 + 4;
          }
          for (; plVar13 != plVar6; plVar13 = plVar13 + 4) {
            FUN_10788f614(plVar13);
          }
          plVar6 = plVar2 + 4;
          lVar14 = *(long *)(param_1 + 0x2790);
          *(long **)(param_1 + 0x2790) = plVar2 + lVar12 * -4;
          *(long **)(param_1 + 0x2798) = plVar6;
          *(ulong *)(param_1 + 0x27a0) = lVar5 + uVar10 * 0x20;
          if (lVar14 != 0) {
            __ZdlPv();
          }
        }
        *(long **)(param_1 + 0x2798) = plVar6;
        FUN_10788f614(&uStack_80);
        lVar12 = *(long *)(*(long *)(param_1 + 0x2798) + -8);
      }
      if (lVar11 != 0) {
        func_0x00010788b354();
        func_0x000107890514();
      }
    }
    func_0x00010788b354();
    func_0x000107890420();
  }
LAB_10788eea0:
  func_0x00010788b354();
  func_0x000107890438();
LAB_10788eeac:
  if (lVar12 != 0) {
    plStack_88 = param_2;
    (**(code **)(*param_2 + 0x10))(param_2,&UNK_10f431582,0x12);
    func_0x0001078868d4(param_2,lVar12);
    lStack_98 = 7;
    uStack_90 = 0x3f800000;
    uStack_80 = CONCAT44(7,(undefined4)uStack_80);
    uStack_78 = CONCAT44(0xff,param_3);
    lStack_70 = CONCAT53(lStack_70._3_5_,0x20101);
    plVar6 = param_2;
    func_0x000107887388(param_2,&lStack_98,&uStack_80);
    lVar12 = param_2[7];
    FUN_1078888cc();
    _objc_msgSend(lVar12,plVar6,3,0,3,1);
    func_0x00010748eeb8(&plStack_88);
  }
  return;
}



/* Entry: 10788f204; end: 10788f25b;  */

void FUN_10788f204(void)

{
  func_0x0001078907b8();
  func_0x00010788f228();
  return;
}



/* Entry: 10788f434; end: 10788f467;  */

long FUN_10788f434(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010788b354();
    func_0x000107890438();
  }
  return param_1;
}



/* Entry: 10788f614; end: 10788f647;  */

long FUN_10788f614(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010788b354();
    func_0x000107890438();
  }
  return param_1;
}



/* Entry: 10788f768; end: 10788f78b;  */

undefined8 FUN_10788f768(undefined8 param_1)

{
  func_0x00010788f78c(param_1,0);
  return param_1;
}



/* Entry: 10788f8cc; end: 10788f8cf;  */

undefined8 * FUN_10788f8cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e4448;
  func_0x000107276ba4(param_1 + 0x4d6);
  func_0x00010750828c(param_1 + 0x4d1);
  func_0x00010788f184(param_1 + 0x39);
  func_0x00010788f1bc(param_1 + 1);
  return param_1;
}



/* Entry: 10788faf0; end: 10788fb13;  */

undefined8 * FUN_10788faf0(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e4488;
  func_0x00010788fd00(param_2 + 1);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  return param_2;
}



/* Entry: 10788fe48; end: 10788fe6f;  */

long FUN_10788fe48(void)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  func_0x0001078907c8();
  *puVar1 = &PTR_DAT_1109e4508;
  func_0x00010788fd00(puVar1 + 1);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107890504();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  return unaff_x19;
}



/* Entry: 107890144; end: 10789016b;  */

void FUN_107890144(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109e4578;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10789097c; end: 10789097f;  */

long FUN_10789097c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x0001078885bc();
  _objc_msgSend(uVar2,lVar1);
  return param_1;
}



/* Entry: 107890c6c; end: 107890c7f;  */

void FUN_107890c6c(void)

{
  func_0x000107890c48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107890e0c; end: 107890ee7;  */

void FUN_107890e0c(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined4 auStack_90 [6];
  undefined4 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  auStack_90[0] = 0xed;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110996720;
  uStack_68 = 0;
  uStack_50 = 0xed;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  puVar1 = auStack_90;
  func_0x00010729d56c(puVar1,&UNK_10f43186d,&UNK_10f431871);
  func_0x00010729d56c();
  auStack_a0[0] = 1;
  uStack_98 = 0;
  uStack_b0 = *param_1;
  uStack_a8 = 3;
  func_0x00010743fa9c(param_1,puVar1,auStack_a0,&uStack_b0,7);
  func_0x000107262330(auStack_90);
  return;
}



/* Entry: 1078916fc; end: 107891743;  */

void FUN_1078916fc(long *param_1,long param_2,uint param_3)

{
  if (param_3 < *(uint *)(param_2 + 0x38)) {
    func_0x00010788b430();
    func_0x00010789197c();
  }
  else {
    param_2 = 0;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 107891928; end: 10789197b;  */

void FUN_107891928(long param_1)

{
  long unaff_x19;
  
  func_0x0001078919d4();
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010788b354();
    func_0x000107891994();
  }
  func_0x0001078918d8(unaff_x19 + 0x18);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    func_0x00010788b354();
    func_0x000107891994();
  }
  return;
}



/* Entry: 107891b38; end: 107891b97;  */

void FUN_107891b38(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    *param_1 = 0;
  }
  else {
    func_0x000107892230();
    func_0x00010788cc48();
    func_0x00010788f048(&uStack_28,auStack_40);
    func_0x00010788f6e4(auStack_40);
    *param_1 = uStack_28;
  }
  return;
}



/* Entry: 107891fe8; end: 107892073;  */

void FUN_107891fe8(undefined8 param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
                  long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((((int)param_5 != 0) && (param_5 >> 0x20 != 0)) && (param_6 != 0)) {
    func_0x000107893e30(param_7,param_5);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    func_0x0001078892c4();
    uStack_70 = 0;
    uStack_58 = 1;
    uStack_80 = param_3 & 0xffffffff;
    uStack_78 = param_4 & 0xffffffff;
    uStack_68 = param_5 & 0xffffffff;
    uStack_60 = param_5 >> 0x20;
    func_0x00010789224c(uVar1,param_7,&uStack_80);
  }
  return;
}



/* Entry: 10789248c; end: 107892b33;  */

void FUN_10789248c(void)

{
  char cVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined1 *puVar10;
  undefined8 *****unaff_x19;
  long unaff_x20;
  undefined8 ******ppppppuVar11;
  undefined8 *****pppppuVar12;
  undefined *puVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuStack_2d8;
  undefined8 ****ppppuStack_2d0;
  undefined8 uStack_2c0;
  undefined8 *****pppppuStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 ***pppuStack_2a8;
  undefined1 uStack_2a0;
  undefined8 *****pppppuStack_298;
  undefined8 *****pppppuStack_290;
  undefined1 auStack_288 [8];
  undefined8 ***pppuStack_280;
  undefined1 auStack_278 [64];
  undefined1 uStack_238;
  undefined1 auStack_230 [8];
  undefined8 ***pppuStack_228;
  undefined1 uStack_220;
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 ***pppuStack_1d0;
  undefined1 uStack_1c8;
  undefined1 uStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined1 uStack_168;
  undefined1 uStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 ****ppppuStack_110;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  long lStack_70;
  
  func_0x000107893650();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_120 = (undefined8 ****)0x0;
  ppppuStack_118 = (undefined8 ****)0x0;
  ppppuStack_110 = (undefined8 ****)0x0;
  func_0x000107893608();
  pppppuVar12 = (undefined8 *****)unaff_x19[0xc];
  pppppuVar16 = (undefined8 *****)unaff_x19[0xe];
  ppppuStack_2d0 = unaff_x19[0xd];
  unaff_x19[0xd] = ppppuStack_118;
  unaff_x19[0xc] = ppppuStack_120;
  unaff_x19[0xe] = ppppuStack_110;
  ppppuStack_120 = pppppuVar12;
  ppppuStack_118 = ppppuStack_2d0;
  ppppuStack_110 = pppppuVar16;
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 4);
  if (pppppuVar12 == (undefined8 *****)ppppuStack_2d0) goto LAB_107892894;
  ppppppuVar11 = *(undefined8 *******)(unaff_x20 + 0x10);
  if (ppppppuVar11 == (undefined8 ******)0x0) {
    unaff_x19 = (undefined8 *****)&pppuStack_178;
    for (; pppppuVar12 != (undefined8 *****)ppppuStack_2d0; pppppuVar12 = pppppuVar12 + 5) {
      if (pppppuVar12[4] != (undefined8 ****)0x0) {
        pppuStack_178._0_1_ = 3;
        pppuStack_170 = *pppppuVar12;
        uStack_168 = 0;
        uStack_128 = 0;
        func_0x00010725b570(pppppuVar12 + 1,&pppuStack_178);
        func_0x0001078935f8();
      }
    }
    goto LAB_107892894;
  }
  pppppuVar12 = unaff_x19;
  (*(code *)(*unaff_x19)[4])();
  ppppuVar4 = pppppuVar12[1];
  (*(code *)(*ppppuVar4)[5])(&ppppuStack_180,ppppuVar4,0);
  pppppuVar16 = (undefined8 *****)ppppuStack_120;
  pppppuVar12 = (undefined8 *****)ppppuStack_118;
  if ((undefined8 *****)ppppuStack_180 == (undefined8 *****)0x0) {
LAB_1078928e0:
    for (; pppppuVar16 != pppppuVar12; pppppuVar16 = pppppuVar16 + 5) {
      if (pppppuVar16[4] != (undefined8 ****)0x0) {
        auStack_1d8[0] = 2;
        pppuStack_1d0 = *pppppuVar16;
        uStack_1c8 = 0;
        uStack_188 = 0;
        func_0x00010725b570(pppppuVar16 + 1,auStack_1d8);
        func_0x0001078935f8();
      }
    }
  }
  else {
    func_0x00010788b0b8();
    func_0x0001078935e8();
    pppppuVar16 = (undefined8 *****)ppppuStack_120;
    pppppuVar12 = (undefined8 *****)ppppuStack_118;
    if (ppppuVar4 == (undefined8 ****)0x0) goto LAB_1078928e0;
    func_0x000107888af8();
    func_0x0001078935e8();
    pppppuVar16 = (undefined8 *****)ppppuStack_120;
    pppppuVar12 = (undefined8 *****)ppppuStack_118;
    if (ppppuVar4 == (undefined8 ****)0x0) goto LAB_1078928e0;
    func_0x00010788b0b8();
    func_0x0001078935e8();
    ppppuVar5 = ppppuVar4;
    func_0x000107888af8();
    func_0x0001078935e8();
    ppppuVar6 = ppppuVar5;
    func_0x000107889104();
    func_0x0001078935e8();
    (*(code *)(*unaff_x19)[0xd])();
    ppppuVar3 = ppppuStack_118;
    pppppuVar12 = (undefined8 *****)ppppuStack_120;
    if (unaff_x19 == (undefined8 *****)0x0) {
      for (; pppppuVar12 != (undefined8 *****)ppppuVar3; pppppuVar12 = pppppuVar12 + 5) {
        if (pppppuVar12[4] != (undefined8 ****)0x0) {
          auStack_230[0] = 3;
          pppuStack_228 = *pppppuVar12;
          uStack_220 = 0;
          uStack_1e0 = 0;
          func_0x00010725b570(pppppuVar12 + 1,auStack_230);
          func_0x0001078935f8();
        }
      }
    }
    else {
      pppppuVar12 = unaff_x19;
      func_0x00010788823c();
      pppppuVar16 = pppppuVar12;
      func_0x00010788b198();
      _objc_msgSend(pppppuVar12,pppppuVar16);
      pppppuVar16 = pppppuVar12;
      func_0x00010788b208();
      _objc_msgSend(pppppuVar12,pppppuVar16);
      pppppuVar16 = pppppuVar12;
      func_0x00010788a260();
      func_0x000107893610();
      func_0x00010788adac();
      puVar13 = (undefined *)((ulong)ppppuVar4 & 0xffffffff);
      pppppuVar7 = pppppuVar12;
      _objc_msgSend(pppppuVar12,pppppuVar16,puVar13);
      func_0x000107889eec();
      func_0x000107893610();
      FUN_10788a800();
      func_0x00010789361c();
      func_0x00010788aa9c();
      func_0x00010789361c();
      func_0x000107889024();
      _objc_msgSend(unaff_x19,pppppuVar7,pppppuVar12);
      ppppuVar4 = ppppuStack_118;
      pppppuVar16 = (undefined8 *****)ppppuStack_120;
      if (unaff_x19 == (undefined8 *****)0x0) {
        for (; pppppuVar16 != (undefined8 *****)ppppuVar4; pppppuVar16 = pppppuVar16 + 5) {
          if (pppppuVar16[4] != (undefined8 ****)0x0) {
            auStack_288[0] = 3;
            pppuStack_280 = *pppppuVar16;
            auStack_278[0] = 0;
            uStack_238 = 0;
            func_0x00010725b570(pppppuVar16 + 1,auStack_288);
            func_0x00010725b590(auStack_278);
          }
        }
      }
      else {
        pppppuVar16 = unaff_x19;
        func_0x00010788846c();
        pppppuStack_2d8 = ppppppuVar11;
        _objc_msgSend(ppppppuVar11,pppppuVar16);
        ppppppuVar8 = (undefined8 ******)pppppuStack_2d8;
        func_0x00010788b430();
        _objc_msgSend(pppppuStack_2d8,ppppppuVar8);
        ppppuVar4 = ppppuStack_180;
        ppppppuVar8 = (undefined8 ******)pppppuStack_2d8;
        func_0x00010788869c();
        uStack_b8 = 0;
        puStack_b0 = (undefined8 *)0x0;
        uStack_a8 = 0;
        puStack_f0 = (undefined *)0x1;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        ppppppuVar9 = (undefined8 ******)pppppuStack_2d8;
        puStack_100 = puVar13;
        uStack_f8 = (ulong)ppppuVar5 & 0xffffffff;
        _objc_msgSend(pppppuStack_2d8,ppppppuVar8,ppppuVar4,0,0,&uStack_b8,&puStack_100,unaff_x19,0,
                      0,&uStack_d8);
        func_0x00010788893c();
        ppppppuVar8 = (undefined8 ******)pppppuStack_2d8;
        _objc_msgSend(pppppuStack_2d8,ppppppuVar9);
        func_0x00010789363c();
        ppppppuVar14 = ppppppuVar8 + 1;
        *ppppppuVar14 = (undefined8 *****)0x0;
        ppppppuVar8[2] = (undefined8 *****)0x0;
        *ppppppuVar8 = (undefined8 *****)&PTR_DAT_1109e49f8;
        ppppppuVar15 = ppppppuVar8 + 3;
        ppppppuVar8[4] = (undefined8 *****)ppppuStack_118;
        *ppppppuVar15 = (undefined8 *****)ppppuStack_120;
        ppppppuVar8[5] = (undefined8 *****)ppppuStack_110;
        ppppuStack_120 = (undefined8 *****)0x0;
        ppppuStack_118 = (undefined8 *****)0x0;
        ppppuStack_110 = (undefined8 *****)0x0;
        ppppppuVar9 = ppppppuVar8;
        pppppuStack_298 = ppppppuVar15;
        pppppuStack_290 = ppppppuVar8;
        func_0x00010788b430();
        pppppuVar16 = unaff_x19;
        _objc_msgSend(unaff_x19,ppppppuVar9);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
          if (bVar2) {
            *ppppppuVar14 = (undefined8 *****)((long)*ppppppuVar14 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        pppuStack_2a8 = (undefined8 ***)((ulong)puVar13 | (long)ppppuVar5 << 0x20);
        uStack_c0 = 0;
        pppppuVar7 = pppppuVar16;
        pppppuStack_2b8 = ppppppuVar15;
        pppppuStack_2b0 = ppppppuVar8;
        uStack_2a0 = ((ulong)ppppuVar6 & 0xfffffffffffffffe) == 0x50;
        func_0x00010789363c();
        *pppppuVar7 = (undefined8 ****)&PTR_DAT_1109e4a48;
        pppppuVar7[1] = pppppuVar16;
        uStack_2c0 = 0;
        pppppuVar7[2] = ppppppuVar15;
        pppppuVar7[3] = ppppppuVar8;
        pppppuStack_2b8 = (undefined8 *****)0x0;
        pppppuStack_2b0 = (undefined8 *****)0x0;
        pppppuVar7[4] = (undefined8 ****)pppuStack_2a8;
        *(undefined1 *)(pppppuVar7 + 5) = uStack_2a0;
        uStack_b8 = 0;
        uStack_a8 = 0x4802000000;
        puStack_a0 = &UNK_10789307c;
        puStack_98 = &UNK_107893088;
        puVar10 = auStack_90;
        puStack_b0 = &uStack_b8;
        func_0x00010788f540(puVar10,&uStack_d8);
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0x42000000;
        puStack_f0 = &UNK_107893090;
        puStack_e8 = &UNK_1109e49b8;
        puStack_e0 = &uStack_b8;
        func_0x00010788831c();
        _objc_msgSend(ppppppuVar11,puVar10,&puStack_100);
        func_0x000107893628();
        func_0x00010788f648(auStack_90);
        func_0x00010788f648(&uStack_d8);
        func_0x000107892b34(&uStack_2c0);
        ppppppuVar11 = &pppppuStack_298;
        func_0x0001078930d4(ppppppuVar11);
        ppppppuVar8 = ppppppuVar11;
        if ((undefined8 ******)pppppuStack_2d8 != (undefined8 ******)0x0) {
          func_0x00010788b354();
          ppppppuVar8 = (undefined8 ******)pppppuStack_2d8;
          _objc_msgSend(pppppuStack_2d8,ppppppuVar11);
        }
        func_0x00010788b354();
        _objc_msgSend(unaff_x19,ppppppuVar8);
        ppppuStack_2d0 = unaff_x19;
      }
      if (pppppuVar12 != (undefined8 *****)0x0) {
        func_0x00010788b354();
        func_0x000107893600();
      }
    }
  }
  unaff_x19 = (undefined8 *****)ppppuStack_180;
  if ((undefined8 *****)ppppuStack_180 != (undefined8 *****)0x0) {
    func_0x00010788b354();
    func_0x000107893600();
  }
LAB_107892894:
  func_0x000107892b74(&ppppuStack_120);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010788f648(&uStack_d8);
    func_0x000107892b34(&uStack_2c0);
    ppppppuVar11 = &pppppuStack_298;
    func_0x0001078930d4(ppppppuVar11);
    if ((undefined8 ******)pppppuStack_2d8 != (undefined8 ******)0x0) {
      func_0x00010788b354();
      _objc_msgSend(pppppuStack_2d8,ppppppuVar11);
      ppppppuVar11 = (undefined8 ******)pppppuStack_2d8;
    }
    func_0x00010788b354();
    _objc_msgSend(ppppuStack_2d0,ppppppuVar11);
    if (unaff_x19 != (undefined8 *****)0x0) {
      func_0x00010788b354();
      func_0x000107893600();
    }
    if ((undefined8 *****)ppppuStack_180 != (undefined8 *****)0x0) goto LAB_107892b14;
    do {
      func_0x000107892b74(&ppppuStack_120);
      func_0x000107893634();
LAB_107892b14:
      func_0x00010788b354();
      func_0x000107893600();
    } while( true );
  }
  return;
}



/* Entry: 107892d84; end: 107892e03;  */

void FUN_107892d84(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107893644();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x28) * 0x28;
  func_0x000107892eb4(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 107892fdc; end: 10789303b;  */

void FUN_107892fdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x28) {
    func_0x00010725b6a4(param_3 + -0x20);
  }
  return;
}



/* Entry: 10789313c; end: 107893177;  */

undefined8 FUN_10789313c(undefined8 param_1)

{
  func_0x00010789363c();
  func_0x000107893480();
  return param_1;
}



/* Entry: 107893588; end: 1078935ab;  */

void FUN_107893588(long param_1)

{
  func_0x0001078935ac();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1078937e8; end: 1078938cb;  */

void FUN_1078937e8(long param_1)

{
  undefined4 *puVar1;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined4 auStack_90 [6];
  undefined4 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  auStack_90[0] = 0xee;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110996720;
  uStack_68 = 0;
  uStack_50 = 0xee;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  puVar1 = auStack_90;
  func_0x00010729d56c(puVar1,"client",&UNK_10f43155c);
  func_0x00010729d56c();
  auStack_a0[0] = 1;
  uStack_98 = 0;
  uStack_b0 = *(undefined8 *)(param_1 + 8);
  uStack_a8 = 3;
  func_0x00010743fa9c((undefined8 *)(param_1 + 8),puVar1,auStack_a0,&uStack_b0,7);
  func_0x000107262330(auStack_90);
  return;
}



/* Entry: 107893dd0; end: 107893e2f;  */

uint FUN_107893dd0(long param_1)

{
  int iVar1;
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    uVar2 = 0x10000;
  }
  else if (iVar1 == 1) {
    func_0x000107893edc();
    uVar2 = extraout_w8 | 1;
  }
  else {
    func_0x000107893edc();
    uVar2 = 0x101;
    if (iVar1 != 2) {
      uVar2 = 0x201;
    }
    uVar2 = extraout_w8_00 | uVar2;
  }
  return uVar2;
}



/* Entry: 107894828; end: 10789482b;  */

undefined8 * FUN_107894828(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e4cb0;
  func_0x000107894de4(param_1 + 0x45);
  func_0x00010724b8b8(param_1 + 0x43);
  func_0x000107894a54(param_1 + 0x3e);
  func_0x000107894a78(param_1 + 0x3b);
  func_0x000107894a78(param_1 + 0x38);
  func_0x000107894a9c(param_1 + 0x34);
  func_0x000107894ac0(param_1 + 0x31);
  func_0x0001057f951c(param_1 + 0x2e);
  func_0x000107276ba4(param_1 + 0x19);
  func_0x000107276ba4(param_1 + 4);
  func_0x000107894db8(param_1 + 2);
  return param_1;
}



/* Entry: 107894ae4; end: 107894aef;  */

void FUN_107894ae4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  
  func_0x000107895e0c();
  func_0x000107895eb4();
  _memcpy(extraout_x8 - param_3);
  func_0x000107895e18();
  return;
}



/* Entry: 107894d64; end: 107894dab;  */

undefined4 FUN_107894d64(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



/* Entry: 107895c2c; end: 107895c63;  */

long FUN_107895c2c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e4d80);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1078961f4; end: 10789625f;  */

undefined8 * FUN_1078961f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[2] = param_3;
  func_0x000107896424();
  return param_1;
}



/* Entry: 107896524; end: 107896527;  */

undefined8 * FUN_107896524(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_1109e4f08;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x68) == '\x01') {
      func_0x000107896594((long)param_1 + lVar1 + 0x50);
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x60);
  return param_1;
}


