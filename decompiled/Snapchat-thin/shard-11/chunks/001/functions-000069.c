/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080fcaec; end: 1080fcb33;  */

void FUN_1080fcaec(long param_1,double *param_2)

{
  double dVar1;
  long lStack_48;
  
  func_0x0001080fcf74();
  dVar1 = *param_2;
  func_0x0001080fce1c();
  if (lStack_48 != 0) {
    func_0x0001080fcfcc((float)dVar1);
    func_0x0001080fce68();
    FUN_1080fcbbc();
  }
  func_0x0001080fced0();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fcb34; end: 1080fcb57;  */

void FUN_1080fcb34(void)

{
  return;
}



/* Entry: 1080fcb58; end: 1080fcb97;  */

void FUN_1080fcb58(undefined8 param_1,undefined8 param_2)

{
  long lStack_28;
  
  func_0x0001080fce1c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fcfcc();
  func_0x0001080fce94(0x3f800000,param_2,lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fcb98; end: 1080fcbbb;  */

void FUN_1080fcb98(void)

{
  return;
}



/* Entry: 1080fcbbc; end: 1080fccd7;  */

void FUN_1080fcbbc(double param_1,long *param_2,long param_3,code *param_4,ulong param_5,
                  code *UNRECOVERED_JUMPTABLE,ulong param_7)

{
  undefined1 in_ZR;
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 uVar2;
  double dVar3;
  code *pcStack_88;
  undefined **ppuStack_80;
  code *pcStack_78;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  plVar1 = param_2;
  dVar3 = param_1;
  func_0x0001080fcf64();
  uVar2 = SUB84(dVar3,0);
  func_0x00010811fcbc(param_3,plVar1[2]);
  if (*param_2 == 0) {
    plVar1 = (long *)(param_3 + ((long)param_7 >> 1));
    if ((param_7 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
    func_0x0001080fce7c();
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001080fccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
  }
  else {
    if ((param_5 & 1) != 0) {
      param_4 = *(code **)(*(long *)(param_3 + ((long)param_5 >> 1)) + ((ulong)param_4 & 0xffffffff)
                          );
    }
    (*param_4)();
    plVar1 = (long *)*param_2;
    pcStack_88 = FUN_1080fccd8;
    ppuStack_80 = &PTR_FUN_110a22bf8;
    uStack_64 = SUB84(param_1,0);
    pcStack_78 = UNRECOVERED_JUMPTABLE;
    uStack_70 = param_7;
    uStack_68 = uVar2;
    FUN_1080e5550(0x3f24f8b588e368f1,plVar1,param_3,param_2[2],&pcStack_88);
    func_0x0001080fcf8c(ppuStack_80);
    func_0x0001080fce7c();
    if ((bool)in_ZR) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x0001080fcef8();
  if (plVar1 == (long *)0x0) {
    ___cxa_bad_cast();
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_3 + 0x10);
  if ((*(ulong *)(param_3 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 =
         *(code **)(*(long *)((long)plVar1 + ((long)*(ulong *)(param_3 + 0x18) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001080fcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)
            ((float)((double)*(float *)(param_3 + 0x20) +
                    param_1 * (double)(*(float *)(param_3 + 0x24) - *(float *)(param_3 + 0x20))));
  return;
}



/* Entry: 1080fccd8; end: 1080fcd2f;  */

void FUN_1080fccd8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  double unaff_d8;
  
  func_0x0001080fcef8();
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x19 + 0x10);
    if ((*(ulong *)(unaff_x19 + 0x18) & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(long *)(param_1 + ((long)*(ulong *)(unaff_x19 + 0x18) >> 1)) +
                     ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x0001080fcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((float)((double)*(float *)(unaff_x19 + 0x20) +
                      unaff_d8 *
                      (double)(*(float *)(unaff_x19 + 0x24) - *(float *)(unaff_x19 + 0x20))));
    return;
  }
  ___cxa_bad_cast();
  return;
}



/* Entry: 1080fcd30; end: 1080fcd4b;  */

void FUN_1080fcd30(void)

{
  return;
}



/* Entry: 1080fcd4c; end: 1080fcdb3;  */

void FUN_1080fcd4c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  
  func_0x0001080fcef8();
  if (param_1 != 0) {
    uVar2 = (ulong)*(uint *)(unaff_x19 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x19 + 0x10);
    plVar1 = (long *)(param_1 + ((long)*(ulong *)(unaff_x19 + 0x18) >> 1));
    if ((*(ulong *)(unaff_x19 + 0x18) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
    func_0x00010810c208(uVar2,*(undefined4 *)(unaff_x19 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x0001080fcdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2 & 0xffffffff);
    return;
  }
  ___cxa_bad_cast();
  return;
}



/* Entry: 1080fcdb4; end: 1080fd007;  */

void FUN_1080fcdb4(void)

{
  return;
}



/* Entry: 1080fd008; end: 1080fd187;  */

void FUN_1080fd008(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined1 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110a22c48;
  param_1[1] = 1;
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
  param_1[2] = lVar4;
  param_1[3] = param_3;
  param_1[4] = param_4;
  lVar4 = *param_5;
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
  param_1[5] = lVar4;
  *(undefined1 *)(param_1 + 6) = param_6;
  return;
}



/* Entry: 1080fd188; end: 1080fd1af;  */

void FUN_1080fd188(undefined8 *param_1)

{
  FUN_108126a7c();
  *param_1 = &PTR_FUN_110a22cc8;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 1080fd1b0; end: 1080fd1e3;  */

undefined8 * FUN_1080fd1b0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a22cc8;
  func_0x000104bdb38c(param_1 + 0x5f);
  *param_1 = &PTR_FUN_110a25c40;
  FUN_108126f94(param_1 + 0x57);
  FUN_108120a80(param_1 + 0x54);
  FUN_108375e94(param_1 + 0x4a);
  FUN_108375e94(param_1 + 0x40);
  FUN_10837ca38(param_1 + 0x3e);
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



/* Entry: 1080fd1e4; end: 1080fd1e7;  */

undefined8 * FUN_1080fd1e4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a22cc8;
  func_0x000104bdb38c(param_1 + 0x5f);
  *param_1 = &PTR_FUN_110a25c40;
  FUN_108126f94(param_1 + 0x57);
  FUN_108120a80(param_1 + 0x54);
  FUN_108375e94(param_1 + 0x4a);
  FUN_108375e94(param_1 + 0x40);
  FUN_10837ca38(param_1 + 0x3e);
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



/* Entry: 1080fd1e8; end: 1080fd1fb;  */

void FUN_1080fd1e8(void)

{
  FUN_1080fd1b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fd1fc; end: 1080fd207;  */

void FUN_1080fd1fc(long param_1)

{
  *(undefined1 *)(param_1 + 0x300) = 1;
  return;
}



/* Entry: 1080fd208; end: 1080fd2f7;  */

void FUN_1080fd208(long param_1,float *param_2)

{
  undefined8 auStack_30 [2];
  
  if (*(char *)(param_1 + 0x300) == '\x01') {
    *(undefined1 *)(param_1 + 0x300) = 0;
    if (*(long *)(param_1 + 0x2f8) == 0) {
      FUN_108376ad8(auStack_30);
    }
    else {
      func_0x000108108d5c(auStack_30,(double)(param_2[2] - *param_2),
                          (double)(param_2[3] - param_2[1]),*(long *)(param_1 + 0x2f8) + 0x18);
    }
    FUN_108126dbc(param_1,auStack_30);
    FUN_10837ca5c(auStack_30[0]);
  }
  FUN_108126c7c(param_1,param_2);
  return;
}



/* Entry: 1080fd2f8; end: 1080fd2ff;  */

void FUN_1080fd2f8(long param_1)

{
  param_1 = param_1 + -0x10;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1080fd300; end: 1080fd31f;  */

void FUN_1080fd300(void)

{
  func_0x0001080fe054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fd320; end: 1080fd32f;  */

void FUN_1080fd320(long param_1)

{
  func_0x0001080fe054(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fd330; end: 1080fd3f3;  */

void FUN_1080fd330(long *****param_1,ulong param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long ****pppplVar4;
  undefined1 uVar5;
  long *plVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *****ppppplVar16;
  long *****ppppplVar17;
  uint uVar18;
  uint uVar19;
  long *plVar20;
  long *plStack_1c8;
  long lStack_198;
  long lStack_190;
  long alStack_188 [4];
  byte bStack_168;
  long lStack_160;
  undefined8 auStack_158 [2];
  undefined8 uStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long *plStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  byte bStack_100;
  undefined4 uStack_f8;
  int iStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  long lStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long *plStack_58;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = (long ****)0x0;
  FUN_1080fd3f4(param_2,param_1,&UNK_10f47b0be,0x1080fd4d0,0);
  func_0x0001080fdf6c();
  func_0x0001080fdf6c();
  func_0x0001080fdf6c();
  func_0x0001080fdf6c();
  func_0x0001080fdf6c();
  ppppplVar16 = (long *****)&UNK_10f47b12f;
  plVar6 = (long *)0x28;
  ppppplVar17 = param_1;
  __Znwm();
  plVar20 = plVar6 + 1;
  *plVar20 = 1;
  *plVar6 = (long)&PTR_FUN_110a22e48;
  if ((param_2 == 0) || (uVar15 = param_2, func_0x00010b9a5818(), (uVar15 & 1) != 0)) {
    plVar6[2] = param_2;
    plVar6[3] = 0x1080fdb9c;
    plVar6[4] = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = plVar6;
    func_0x00010b9ac308(param_1,&UNK_10f47b12f,&plStack_58);
    func_0x000104bda3ac(plStack_58);
    do {
      lVar14 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    return;
  }
  func_0x00010b9a5890();
  uStack_68 = 0x1080fd4d0;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001080fdf7c();
  uStack_b8 = extraout_x8;
  func_0x00010b9ac000(ppppplVar17,0);
  ppppplVar10 = ppppplVar17;
  func_0x0001080fe040();
  ppppplVar7 = ppppplVar16;
  func_0x00010b9ac000(&UNK_10f47b12f,2);
  ppppplVar8 = ppppplVar16;
  func_0x00010b9ac000(&UNK_10f47b12f,3);
  ppppplVar9 = ppppplVar16;
  func_0x00010b9ac000(&UNK_10f47b12f,4);
  uVar18 = (uint)ppppplVar7;
  uVar5 = uVar18 == 7;
  if (uVar18 < 7) {
    uVar19 = (uint)ppppplVar8;
    uVar5 = uVar19 == 3;
    if (2 < uVar19) {
      puVar12 = &UNK_10f47b155;
      goto LAB_1080fd564;
    }
    lStack_e8 = (long)(int)ppppplVar9;
    uStack_f8 = SUB84(ppppplVar17,0);
    ppppplVar7 = ppppplVar16;
    iStack_f4 = (int)ppppplVar10;
    uStack_f0 = uVar18;
    uStack_ec = uVar19;
    func_0x00010b9abfa4(&UNK_10f47b12f,5);
    func_0x00010b9a8f04(auStack_108,ppppplVar7);
    uVar5 = bStack_100 == 1;
    if (bStack_100 < 2) {
      ppppplVar10 = &pppplStack_d0;
      FUN_10813e93c(&pppplStack_d0,&uStack_f8);
      pppplVar4 = pppplStack_c8;
      uVar5 = (long *****)pppplStack_d0 == (long *****)0x1;
      if ((bool)uVar5) {
        if (((long *****)pppplStack_c8 != (long *****)0x0) &&
           ((long ****)pppplStack_c8[2] != (long ****)0x0)) {
          do {
            func_0x0001080fe060();
          } while (extraout_w10 != 0);
        }
        func_0x0001080fdff4();
        func_0x0001080fe04c();
        ppppplVar16 = (long *****)pppplVar4;
      }
      else {
        func_0x0001080fe010();
        func_0x0001080fdf94();
      }
      func_0x0001080fdedc(&pppplStack_d0);
    }
    else {
      func_0x00010b9aac28(&lStack_110,auStack_108,0x6f6c6f632064696c);
      if (lStack_110 == 0) {
        func_0x0001080fdf94(0);
      }
      else {
        ppppplVar17 = *(long ******)(lStack_110 + 0x18);
        if (ppppplVar17 != (long *****)0x0) {
          func_0x0001080fdfe4();
        }
        uStack_c0 = *(ulong *)(lStack_110 + 0x28);
        pppplStack_c8 = *(long *****)(lStack_110 + 0x20);
        uVar15 = (long)(int)ppppplVar9 * (long)(int)ppppplVar10;
        uVar5 = uStack_c0 == uVar15;
        pppplStack_d0 = (long ****)ppppplVar17;
        if (uStack_c0 < uVar15) {
          func_0x00010b9a0050(0x6f6c6f632064696c,&UNK_10f47b167);
          func_0x0001080fdf94();
        }
        else {
          ppppplVar10 = (long *****)0x60;
          __Znwm();
          ppppplVar17 = ppppplVar10 + 1;
          *ppppplVar17 = (long ****)0x0;
          ppppplVar10[2] = (long ****)0x0;
          *ppppplVar10 = (long ****)&PTR_DAT_110a22ec0;
          ppppplVar16 = ppppplVar10 + 3;
          func_0x00010b99d634(ppppplVar16,&pppplStack_d0,&uStack_f8);
          if ((ppppplVar10[5] == (long ****)0x0) ||
             (uVar5 = ppppplVar10[5][1] == (long ***)0xffffffffffffffff, (bool)uVar5)) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppplVar17,0x10);
              if (bVar3) {
                *ppppplVar17 = (long ****)((long)*ppppplVar17 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            pppplStack_e0 = (long ****)ppppplVar16;
            pppplStack_d8 = (long ****)ppppplVar10;
            func_0x0001003a8180(ppppplVar10 + 4,&pppplStack_e0);
            func_0x0001003a824c(&pppplStack_e0);
            if (ppppplVar10[5] != (long ****)0x0) goto LAB_1080fd6e0;
          }
          else {
LAB_1080fd6e0:
            do {
              func_0x0001080fe060();
            } while (extraout_w10_00 != 0);
          }
          func_0x0001080fdff4();
          func_0x0001080fe04c();
          func_0x0001003a916c(ppppplVar16);
          ppppplVar17 = (long *****)pppplStack_d0;
        }
        if (ppppplVar17 != (long *****)0x0) {
          (*(code *)(*ppppplVar17)[3])(ppppplVar17);
        }
      }
      func_0x000104bdb3b0();
    }
    puVar11 = auStack_108;
    func_0x00010b9a8d98(puVar11);
  }
  else {
    puVar12 = &UNK_10f47b143;
LAB_1080fd564:
    puVar11 = (undefined1 *)0x6f6c6f632064696c;
    func_0x00010b9a0050(0x6f6c6f632064696c,puVar12);
    func_0x0001080fdf94();
  }
  func_0x0001080fdfb8(uStack_b8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1080fd74c;
  pppplStack_140 = (long ****)ppppplVar17;
  pppplStack_138 = (long ****)ppppplVar10;
  pppplStack_130 = (long ****)ppppplVar16;
  plStack_128 = plVar6;
  ppuStack_120 = &puStack_70;
  func_0x0001080fdf7c();
  uStack_148 = extraout_x8_00;
  func_0x0001080fe034();
  func_0x00010b9a8f04(alStack_188 + 3,puVar11);
  alStack_188[0] = 0;
  alStack_188[1] = 0;
  alStack_188[2] = 0;
  uVar5 = (bStack_168 & 0xfe) == 2;
  if ((bool)uVar5) {
    func_0x00010527d8c0(&lStack_190);
    uVar5 = bStack_168 == 3;
    if ((bool)uVar5) {
      func_0x00010b9a5b88();
      func_0x0001080fe01c();
      if ((alStack_188[3] & 1U) != 0) {
LAB_1080fd858:
        func_0x00010b99dbac(&lStack_160,&lStack_190);
        func_0x000104c625c4(alStack_188,&lStack_160);
        if (lStack_160 != 0) {
          func_0x0001080fdfa0();
        }
        func_0x00010527d974(lStack_190);
        goto LAB_1080fd884;
      }
    }
    else {
      func_0x00010b9a9358(&lStack_160,alStack_188 + 3);
      if (lStack_160 == 0) {
        uVar13 = 0;
        puVar12 = &UNK_10f7d0ef0;
      }
      else {
        puVar12 = (undefined *)(lStack_160 + 0x18);
        uVar13 = *(undefined4 *)(lStack_160 + 0xc);
      }
      func_0x0001080fe01c(puVar12,uVar13);
      func_0x0001003a8cb8(lStack_160);
      if ((int)puVar12 != 0) goto LAB_1080fd858;
    }
    func_0x00010b9a0050(ppppplVar16[3],&UNK_10f47b19c);
    func_0x0001080fdf94();
    func_0x00010527d974(lStack_190);
  }
  else {
    func_0x00010b9aac28(&lStack_160,alStack_188 + 3,ppppplVar16[3]);
    bVar1 = *(byte *)(ppppplVar16[3] + 1);
    if ((bVar1 & 1) == 0) {
      func_0x0001080fdf94();
    }
    else {
      func_0x000105c3d468(alStack_188,lStack_160 + 0x18);
    }
    func_0x000104bdb3b0(lStack_160);
    if (bVar1 == 0) goto LAB_1080fd900;
LAB_1080fd884:
    FUN_108140a90(&lStack_160,alStack_188);
    uVar5 = lStack_160 == 1;
    if ((bool)uVar5) {
      FUN_108140e60(&lStack_198,auStack_158[0]);
      if ((lStack_198 != 0) && (*(long *)(lStack_198 + 0x10) != 0)) {
        do {
          func_0x0001080fe060();
        } while (extraout_w10_01 != 0);
      }
      lStack_190 = lStack_198;
      func_0x00010b9a8f78(plVar6,&lStack_190);
      func_0x0001080fe04c();
      FUN_1080cc5cc(lStack_198);
    }
    else {
      func_0x00010b99febc(ppppplVar16[3],auStack_158);
      func_0x0001080fdf94();
    }
    func_0x0001078c47a0(&lStack_160);
  }
LAB_1080fd900:
  if (alStack_188[0] != 0) {
    func_0x0001080fdfa0();
  }
  func_0x00010b9a8d98(alStack_188 + 3);
  func_0x0001080fdfb8(uStack_148);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001080fe004();
    if (plStack_1c8 != (long *)0x0) {
      (**(code **)(*plStack_1c8 + 0x30))();
    }
    func_0x0001080fdf94(plStack_1c8);
    FUN_1080cc5cc();
    return;
  }
  return;
}



/* Entry: 1080fd3f4; end: 1080fd74b;  */

void FUN_1080fd3f4(ulong param_1,long *****param_2,long *****param_3,long param_4,long param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ****pppplVar9;
  long *****ppppplVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 extraout_x8;
  ulong uVar14;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *****ppppplVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  long *plStack_1c8;
  long lStack_198;
  long lStack_190;
  long alStack_188 [4];
  byte bStack_168;
  long lStack_160;
  undefined8 auStack_158 [2];
  undefined8 uStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long *plStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long lStack_110;
  long **pplStack_108;
  byte bStack_100;
  undefined4 uStack_f8;
  int iStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  long lStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long *plStack_58;
  
  plVar5 = (long *)0x28;
  ppppplVar15 = param_2;
  __Znwm();
  plVar18 = plVar5 + 1;
  *plVar18 = 1;
  *plVar5 = (long)&PTR_FUN_110a22e48;
  if ((param_1 == 0) || (uVar14 = param_1, func_0x00010b9a5818(), (uVar14 & 1) != 0)) {
    plVar5[2] = param_1;
    plVar5[3] = param_4;
    plVar5[4] = param_5;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = *plVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = plVar5;
    func_0x00010b9ac308(param_2,param_3,&plStack_58);
    func_0x000104bda3ac(plStack_58);
    do {
      lVar13 = *plVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    return;
  }
  func_0x00010b9a5890();
  uStack_68 = 0x1080fd4d0;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001080fdf7c();
  uStack_b8 = extraout_x8;
  func_0x00010b9ac000(ppppplVar15,0);
  ppppplVar10 = ppppplVar15;
  func_0x0001080fe040();
  ppppplVar6 = param_3;
  func_0x00010b9ac000(param_3,2);
  ppppplVar7 = param_3;
  func_0x00010b9ac000(param_3,3);
  ppppplVar8 = param_3;
  func_0x00010b9ac000(param_3,4);
  uVar16 = (uint)ppppplVar6;
  uVar4 = uVar16 == 7;
  if (uVar16 < 7) {
    uVar17 = (uint)ppppplVar7;
    uVar4 = uVar17 == 3;
    if (2 < uVar17) {
      pppplVar9 = param_3[3];
      puVar11 = &UNK_10f47b155;
      goto LAB_1080fd564;
    }
    lStack_e8 = (long)(int)ppppplVar8;
    uStack_f8 = SUB84(ppppplVar15,0);
    ppppplVar6 = param_3;
    iStack_f4 = (int)ppppplVar10;
    uStack_f0 = uVar16;
    uStack_ec = uVar17;
    func_0x00010b9abfa4(param_3,5);
    func_0x00010b9a8f04(&pplStack_108,ppppplVar6);
    uVar4 = bStack_100 == 1;
    if (bStack_100 < 2) {
      ppppplVar10 = &pppplStack_d0;
      FUN_10813e93c(&pppplStack_d0,&uStack_f8);
      pppplVar9 = pppplStack_c8;
      uVar4 = (long *****)pppplStack_d0 == (long *****)0x1;
      if ((bool)uVar4) {
        if (((long *****)pppplStack_c8 != (long *****)0x0) &&
           ((long ****)pppplStack_c8[2] != (long ****)0x0)) {
          do {
            func_0x0001080fe060();
          } while (extraout_w10 != 0);
        }
        func_0x0001080fdff4();
        func_0x0001080fe04c();
        param_3 = (long *****)pppplVar9;
      }
      else {
        func_0x0001080fe010();
        func_0x0001080fdf94();
      }
      func_0x0001080fdedc(&pppplStack_d0);
    }
    else {
      func_0x00010b9aac28(&lStack_110,&pplStack_108,param_3[3]);
      if (lStack_110 == 0) {
        func_0x0001080fdf94(0);
      }
      else {
        ppppplVar15 = *(long ******)(lStack_110 + 0x18);
        if (ppppplVar15 != (long *****)0x0) {
          func_0x0001080fdfe4();
        }
        uStack_c0 = *(ulong *)(lStack_110 + 0x28);
        pppplStack_c8 = *(long *****)(lStack_110 + 0x20);
        uVar14 = (long)(int)ppppplVar8 * (long)(int)ppppplVar10;
        uVar4 = uStack_c0 == uVar14;
        pppplStack_d0 = (long ****)ppppplVar15;
        if (uStack_c0 < uVar14) {
          func_0x00010b9a0050(param_3[3],&UNK_10f47b167);
          func_0x0001080fdf94();
        }
        else {
          ppppplVar10 = (long *****)0x60;
          __Znwm();
          ppppplVar15 = ppppplVar10 + 1;
          *ppppplVar15 = (long ****)0x0;
          ppppplVar10[2] = (long ****)0x0;
          *ppppplVar10 = (long ****)&PTR_DAT_110a22ec0;
          param_3 = ppppplVar10 + 3;
          func_0x00010b99d634(param_3,&pppplStack_d0,&uStack_f8);
          if ((ppppplVar10[5] == (long ****)0x0) ||
             (uVar4 = ppppplVar10[5][1] == (long ***)0xffffffffffffffff, (bool)uVar4)) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
              if (bVar3) {
                *ppppplVar15 = (long ****)((long)*ppppplVar15 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            pppplStack_e0 = (long ****)param_3;
            pppplStack_d8 = (long ****)ppppplVar10;
            func_0x0001003a8180(ppppplVar10 + 4,&pppplStack_e0);
            func_0x0001003a824c(&pppplStack_e0);
            if (ppppplVar10[5] != (long ****)0x0) goto LAB_1080fd6e0;
          }
          else {
LAB_1080fd6e0:
            do {
              func_0x0001080fe060();
            } while (extraout_w10_00 != 0);
          }
          func_0x0001080fdff4();
          func_0x0001080fe04c();
          func_0x0001003a916c(param_3);
          ppppplVar15 = (long *****)pppplStack_d0;
        }
        if (ppppplVar15 != (long *****)0x0) {
          (*(code *)(*ppppplVar15)[3])(ppppplVar15);
        }
      }
      func_0x000104bdb3b0();
    }
    pppplVar9 = (long ****)&pplStack_108;
    func_0x00010b9a8d98(pppplVar9);
  }
  else {
    pppplVar9 = param_3[3];
    puVar11 = &UNK_10f47b143;
LAB_1080fd564:
    func_0x00010b9a0050(pppplVar9,puVar11);
    func_0x0001080fdf94();
  }
  func_0x0001080fdfb8(uStack_b8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1080fd74c;
  pppplStack_140 = (long ****)ppppplVar15;
  pppplStack_138 = (long ****)ppppplVar10;
  pppplStack_130 = (long ****)param_3;
  plStack_128 = plVar5;
  ppuStack_120 = &puStack_70;
  func_0x0001080fdf7c();
  uStack_148 = extraout_x8_00;
  func_0x0001080fe034();
  func_0x00010b9a8f04(alStack_188 + 3,pppplVar9);
  alStack_188[0] = 0;
  alStack_188[1] = 0;
  alStack_188[2] = 0;
  uVar4 = (bStack_168 & 0xfe) == 2;
  if ((bool)uVar4) {
    func_0x00010527d8c0(&lStack_190);
    uVar4 = bStack_168 == 3;
    if ((bool)uVar4) {
      func_0x00010b9a5b88();
      func_0x0001080fe01c();
      if ((alStack_188[3] & 1U) != 0) {
LAB_1080fd858:
        func_0x00010b99dbac(&lStack_160,&lStack_190);
        func_0x000104c625c4(alStack_188,&lStack_160);
        if (lStack_160 != 0) {
          func_0x0001080fdfa0();
        }
        func_0x00010527d974(lStack_190);
        goto LAB_1080fd884;
      }
    }
    else {
      func_0x00010b9a9358(&lStack_160,alStack_188 + 3);
      if (lStack_160 == 0) {
        uVar12 = 0;
        puVar11 = &UNK_10f7d0ef0;
      }
      else {
        puVar11 = (undefined *)(lStack_160 + 0x18);
        uVar12 = *(undefined4 *)(lStack_160 + 0xc);
      }
      func_0x0001080fe01c(puVar11,uVar12);
      func_0x0001003a8cb8(lStack_160);
      if ((int)puVar11 != 0) goto LAB_1080fd858;
    }
    func_0x00010b9a0050(param_3[3],&UNK_10f47b19c);
    func_0x0001080fdf94();
    func_0x00010527d974(lStack_190);
  }
  else {
    func_0x00010b9aac28(&lStack_160,alStack_188 + 3,param_3[3]);
    bVar1 = *(byte *)(param_3[3] + 1);
    if ((bVar1 & 1) == 0) {
      func_0x0001080fdf94();
    }
    else {
      func_0x000105c3d468(alStack_188,lStack_160 + 0x18);
    }
    func_0x000104bdb3b0(lStack_160);
    if (bVar1 == 0) goto LAB_1080fd900;
LAB_1080fd884:
    FUN_108140a90(&lStack_160,alStack_188);
    uVar4 = lStack_160 == 1;
    if ((bool)uVar4) {
      FUN_108140e60(&lStack_198,auStack_158[0]);
      if ((lStack_198 != 0) && (*(long *)(lStack_198 + 0x10) != 0)) {
        do {
          func_0x0001080fe060();
        } while (extraout_w10_01 != 0);
      }
      lStack_190 = lStack_198;
      func_0x00010b9a8f78(plVar5,&lStack_190);
      func_0x0001080fe04c();
      FUN_1080cc5cc(lStack_198);
    }
    else {
      func_0x00010b99febc(param_3[3],auStack_158);
      func_0x0001080fdf94();
    }
    func_0x0001078c47a0(&lStack_160);
  }
LAB_1080fd900:
  if (alStack_188[0] != 0) {
    func_0x0001080fdfa0();
  }
  func_0x00010b9a8d98(alStack_188 + 3);
  func_0x0001080fdfb8(uStack_148);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001080fe004();
    if (plStack_1c8 != (long *)0x0) {
      (**(code **)(*plStack_1c8 + 0x30))();
    }
    func_0x0001080fdf94(plStack_1c8);
    FUN_1080cc5cc();
    return;
  }
  return;
}



/* Entry: 1080fd74c; end: 1080fd937;  */

void FUN_1080fd74c(undefined8 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long *plStack_b8;
  long lStack_88;
  long lStack_80;
  long alStack_78 [4];
  byte bStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  func_0x0001080fdf7c();
  uStack_38 = extraout_x8;
  func_0x0001080fe034();
  func_0x00010b9a8f04(alStack_78 + 3,param_1);
  alStack_78[0] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  uVar2 = (bStack_58 & 0xfe) == 2;
  if ((bool)uVar2) {
    func_0x00010527d8c0(&lStack_80);
    uVar2 = bStack_58 == 3;
    if ((bool)uVar2) {
      func_0x00010b9a5b88();
      func_0x0001080fe01c();
      if ((alStack_78[3] & 1U) != 0) {
LAB_1080fd858:
        func_0x00010b99dbac(&lStack_50,&lStack_80);
        func_0x000104c625c4(alStack_78,&lStack_50);
        if (lStack_50 != 0) {
          func_0x0001080fdfa0();
        }
        func_0x00010527d974(lStack_80);
        goto LAB_1080fd884;
      }
    }
    else {
      func_0x00010b9a9358(&lStack_50,alStack_78 + 3);
      if (lStack_50 == 0) {
        uVar4 = 0;
        puVar3 = &UNK_10f7d0ef0;
      }
      else {
        puVar3 = (undefined *)(lStack_50 + 0x18);
        uVar4 = *(undefined4 *)(lStack_50 + 0xc);
      }
      func_0x0001080fe01c(puVar3,uVar4);
      func_0x0001003a8cb8(lStack_50);
      if ((int)puVar3 != 0) goto LAB_1080fd858;
    }
    func_0x00010b9a0050(*(undefined8 *)(unaff_x20 + 0x18),&UNK_10f47b19c);
    func_0x0001080fdf94();
    func_0x00010527d974(lStack_80);
  }
  else {
    func_0x00010b9aac28(&lStack_50,alStack_78 + 3,*(undefined8 *)(unaff_x20 + 0x18));
    bVar1 = *(byte *)(*(long *)(unaff_x20 + 0x18) + 8);
    if ((bVar1 & 1) == 0) {
      func_0x0001080fdf94();
    }
    else {
      func_0x000105c3d468(alStack_78,lStack_50 + 0x18);
    }
    func_0x000104bdb3b0(lStack_50);
    if (bVar1 == 0) goto LAB_1080fd900;
LAB_1080fd884:
    FUN_108140a90(&lStack_50,alStack_78);
    uVar2 = lStack_50 == 1;
    if ((bool)uVar2) {
      FUN_108140e60(&lStack_88,auStack_48[0]);
      if ((lStack_88 != 0) && (*(long *)(lStack_88 + 0x10) != 0)) {
        do {
          func_0x0001080fe060();
        } while (extraout_w10 != 0);
      }
      lStack_80 = lStack_88;
      func_0x00010b9a8f78();
      func_0x0001080fe04c();
      FUN_1080cc5cc(lStack_88);
    }
    else {
      func_0x00010b99febc(*(undefined8 *)(unaff_x20 + 0x18),auStack_48);
      func_0x0001080fdf94();
    }
    func_0x0001078c47a0(&lStack_50);
  }
LAB_1080fd900:
  if (alStack_78[0] != 0) {
    func_0x0001080fdfa0();
  }
  func_0x00010b9a8d98(alStack_78 + 3);
  func_0x0001080fdfb8(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001080fe004();
    if (plStack_b8 != (long *)0x0) {
      (**(code **)(*plStack_b8 + 0x30))();
    }
    func_0x0001080fdf94(plStack_b8);
    FUN_1080cc5cc();
    return;
  }
  return;
}



/* Entry: 1080fd938; end: 1080fd973;  */

void FUN_1080fd938(void)

{
  undefined8 uStack_28;
  
  func_0x0001080fe004();
  if (uStack_28 != (long *)0x0) {
    (**(code **)(*uStack_28 + 0x30))();
  }
  func_0x0001080fdf94(uStack_28);
  FUN_1080cc5cc();
  return;
}



/* Entry: 1080fd974; end: 1080fdb5f;  */

void FUN_1080fd974(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long alStack_f8 [2];
  long lStack_e8;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [4];
  int iStack_cc;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001080fdf7c();
  uStack_38 = extraout_x8;
  FUN_1080fdce4(&lStack_70);
  if (lStack_70 == 0) {
    func_0x0001080fdf94(0);
  }
  else {
    unaff_x21 = &lStack_48;
    plVar1 = &lStack_70;
    param_2 = (undefined8 *)0x0;
    FUN_108140c9c(&lStack_48);
    in_ZR = lStack_48 == 1;
    if ((bool)in_ZR) {
      func_0x0001080fe040();
      in_ZR = (uint)plVar1 == 3;
      if (2 < (uint)plVar1) {
        param_2 = (undefined8 *)&UNK_10f47b1ad;
        func_0x00010b9a0050(*(undefined8 *)(unaff_x20 + 0x18));
        goto LAB_1080fda50;
      }
      func_0x00010b9ac024();
      unaff_x22 = &lStack_68;
      FUN_108140700(&lStack_68,uStack_40,plVar1);
      in_ZR = lStack_68 == 1;
      if ((bool)in_ZR) {
        uStack_7c = 9;
        FUN_1080fdd10(&uStack_78,&uStack_7c,auStack_60);
        param_2 = &uStack_78;
        func_0x00010b9a8f90();
        func_0x000104bdb3b0(uStack_78);
      }
      else {
        param_2 = auStack_60;
        func_0x00010b99ff08(*(undefined8 *)(unaff_x20 + 0x18));
        func_0x0001080fdf94();
      }
      func_0x0001080c5c8c(&lStack_68);
      unaff_x21 = plVar1;
    }
    else {
      func_0x0001080fe010();
LAB_1080fda50:
      func_0x0001080fdf94();
    }
    func_0x0001078c47a0(&lStack_48);
  }
  FUN_1080cc5cc();
  func_0x0001080fdfb8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plStack_b0 = unaff_x22;
  plStack_a8 = unaff_x21;
  FUN_1080fdce4(&plStack_b8);
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8;
    (**(code **)(*plStack_b8 + 0x40))();
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plStack_b8 + 0x38))(auStack_d0);
      lStack_e8 = lStack_c0 * iStack_cc;
      uStack_dc = 9;
      alStack_f8[0] = 0;
      func_0x000104bd909c(&uStack_d8,&uStack_dc,alStack_f8);
      if (alStack_f8[0] != 0) {
        func_0x0001080fdfa0();
      }
      func_0x00010b9a8f90(extraout_x8_00,&uStack_d8);
      func_0x000104bdb3b0(uStack_d8);
      goto LAB_1080fdb50;
    }
    func_0x00010b9a0050(param_2[3],&UNK_10f47b1be);
  }
  func_0x0001080fdf94();
LAB_1080fdb50:
  FUN_1080cc5cc(plStack_b8);
  return;
}



/* Entry: 1080fdb60; end: 1080fdcdb;  */

void FUN_1080fdb60(void)

{
  undefined8 uStack_28;
  
  func_0x0001080fe004();
  if (uStack_28 != (long *)0x0) {
    (**(code **)(*uStack_28 + 0x48))();
  }
  func_0x0001080fdf94(uStack_28);
  FUN_1080cc5cc();
  return;
}



/* Entry: 1080fdcdc; end: 1080fdce3;  */

void FUN_1080fdcdc(long *****param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long ****pppplVar4;
  undefined1 uVar5;
  long *plVar6;
  ulong uVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *****ppppplVar17;
  long *****ppppplVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  long *plStack_1c8;
  long lStack_198;
  long lStack_190;
  long alStack_188 [4];
  byte bStack_168;
  long lStack_160;
  undefined8 auStack_158 [2];
  undefined8 uStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long ****pppplStack_130;
  long *plStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long lStack_110;
  undefined1 auStack_108 [8];
  byte bStack_100;
  undefined4 uStack_f8;
  int iStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  long lStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long *plStack_58;
  
  uVar14 = param_2 - 0x18;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = (long ****)0x0;
  FUN_1080fd3f4(uVar14,param_1,&UNK_10f47b0be,0x1080fd4d0,0);
  func_0x0001080fdf6c();
  func_0x0001080fdf6c();
  func_0x0001080fdf6c();
  func_0x0001080fdf6c();
  func_0x0001080fdf6c();
  ppppplVar17 = (long *****)&UNK_10f47b12f;
  plVar6 = (long *)0x28;
  ppppplVar18 = param_1;
  __Znwm();
  plVar21 = plVar6 + 1;
  *plVar21 = 1;
  *plVar6 = (long)&PTR_FUN_110a22e48;
  if ((uVar14 == 0) || (uVar7 = uVar14, func_0x00010b9a5818(), (uVar7 & 1) != 0)) {
    plVar6[2] = uVar14;
    plVar6[3] = 0x1080fdb9c;
    plVar6[4] = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = plVar6;
    func_0x00010b9ac308(param_1,&UNK_10f47b12f,&plStack_58);
    func_0x000104bda3ac(plStack_58);
    do {
      lVar16 = *plVar21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    return;
  }
  func_0x00010b9a5890();
  uStack_68 = 0x1080fd4d0;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001080fdf7c();
  uStack_b8 = extraout_x8;
  func_0x00010b9ac000(ppppplVar18,0);
  ppppplVar11 = ppppplVar18;
  func_0x0001080fe040();
  ppppplVar8 = ppppplVar17;
  func_0x00010b9ac000(&UNK_10f47b12f,2);
  ppppplVar9 = ppppplVar17;
  func_0x00010b9ac000(&UNK_10f47b12f,3);
  ppppplVar10 = ppppplVar17;
  func_0x00010b9ac000(&UNK_10f47b12f,4);
  uVar19 = (uint)ppppplVar8;
  uVar5 = uVar19 == 7;
  if (uVar19 < 7) {
    uVar20 = (uint)ppppplVar9;
    uVar5 = uVar20 == 3;
    if (2 < uVar20) {
      puVar13 = &UNK_10f47b155;
      goto LAB_1080fd564;
    }
    lStack_e8 = (long)(int)ppppplVar10;
    uStack_f8 = SUB84(ppppplVar18,0);
    ppppplVar8 = ppppplVar17;
    iStack_f4 = (int)ppppplVar11;
    uStack_f0 = uVar19;
    uStack_ec = uVar20;
    func_0x00010b9abfa4(&UNK_10f47b12f,5);
    func_0x00010b9a8f04(auStack_108,ppppplVar8);
    uVar5 = bStack_100 == 1;
    if (bStack_100 < 2) {
      ppppplVar11 = &pppplStack_d0;
      FUN_10813e93c(&pppplStack_d0,&uStack_f8);
      pppplVar4 = pppplStack_c8;
      uVar5 = (long *****)pppplStack_d0 == (long *****)0x1;
      if ((bool)uVar5) {
        if (((long *****)pppplStack_c8 != (long *****)0x0) &&
           ((long ****)pppplStack_c8[2] != (long ****)0x0)) {
          do {
            func_0x0001080fe060();
          } while (extraout_w10 != 0);
        }
        func_0x0001080fdff4();
        func_0x0001080fe04c();
        ppppplVar17 = (long *****)pppplVar4;
      }
      else {
        func_0x0001080fe010();
        func_0x0001080fdf94();
      }
      func_0x0001080fdedc(&pppplStack_d0);
    }
    else {
      func_0x00010b9aac28(&lStack_110,auStack_108,0x6f6c6f632064696c);
      if (lStack_110 == 0) {
        func_0x0001080fdf94(0);
      }
      else {
        ppppplVar18 = *(long ******)(lStack_110 + 0x18);
        if (ppppplVar18 != (long *****)0x0) {
          func_0x0001080fdfe4();
        }
        uStack_c0 = *(ulong *)(lStack_110 + 0x28);
        pppplStack_c8 = *(long *****)(lStack_110 + 0x20);
        uVar14 = (long)(int)ppppplVar10 * (long)(int)ppppplVar11;
        uVar5 = uStack_c0 == uVar14;
        pppplStack_d0 = (long ****)ppppplVar18;
        if (uStack_c0 < uVar14) {
          func_0x00010b9a0050(0x6f6c6f632064696c,&UNK_10f47b167);
          func_0x0001080fdf94();
        }
        else {
          ppppplVar11 = (long *****)0x60;
          __Znwm();
          ppppplVar18 = ppppplVar11 + 1;
          *ppppplVar18 = (long ****)0x0;
          ppppplVar11[2] = (long ****)0x0;
          *ppppplVar11 = (long ****)&PTR_DAT_110a22ec0;
          ppppplVar17 = ppppplVar11 + 3;
          func_0x00010b99d634(ppppplVar17,&pppplStack_d0,&uStack_f8);
          if ((ppppplVar11[5] == (long ****)0x0) ||
             (uVar5 = ppppplVar11[5][1] == (long ***)0xffffffffffffffff, (bool)uVar5)) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppplVar18,0x10);
              if (bVar3) {
                *ppppplVar18 = (long ****)((long)*ppppplVar18 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            pppplStack_e0 = (long ****)ppppplVar17;
            pppplStack_d8 = (long ****)ppppplVar11;
            func_0x0001003a8180(ppppplVar11 + 4,&pppplStack_e0);
            func_0x0001003a824c(&pppplStack_e0);
            if (ppppplVar11[5] != (long ****)0x0) goto LAB_1080fd6e0;
          }
          else {
LAB_1080fd6e0:
            do {
              func_0x0001080fe060();
            } while (extraout_w10_00 != 0);
          }
          func_0x0001080fdff4();
          func_0x0001080fe04c();
          func_0x0001003a916c(ppppplVar17);
          ppppplVar18 = (long *****)pppplStack_d0;
        }
        if (ppppplVar18 != (long *****)0x0) {
          (*(code *)(*ppppplVar18)[3])(ppppplVar18);
        }
      }
      func_0x000104bdb3b0();
    }
    puVar12 = auStack_108;
    func_0x00010b9a8d98(puVar12);
  }
  else {
    puVar13 = &UNK_10f47b143;
LAB_1080fd564:
    puVar12 = (undefined1 *)0x6f6c6f632064696c;
    func_0x00010b9a0050(0x6f6c6f632064696c,puVar13);
    func_0x0001080fdf94();
  }
  func_0x0001080fdfb8(uStack_b8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1080fd74c;
  pppplStack_140 = (long ****)ppppplVar18;
  pppplStack_138 = (long ****)ppppplVar11;
  pppplStack_130 = (long ****)ppppplVar17;
  plStack_128 = plVar6;
  ppuStack_120 = &puStack_70;
  func_0x0001080fdf7c();
  uStack_148 = extraout_x8_00;
  func_0x0001080fe034();
  func_0x00010b9a8f04(alStack_188 + 3,puVar12);
  alStack_188[0] = 0;
  alStack_188[1] = 0;
  alStack_188[2] = 0;
  uVar5 = (bStack_168 & 0xfe) == 2;
  if ((bool)uVar5) {
    func_0x00010527d8c0(&lStack_190);
    uVar5 = bStack_168 == 3;
    if ((bool)uVar5) {
      func_0x00010b9a5b88();
      func_0x0001080fe01c();
      if ((alStack_188[3] & 1U) != 0) {
LAB_1080fd858:
        func_0x00010b99dbac(&lStack_160,&lStack_190);
        func_0x000104c625c4(alStack_188,&lStack_160);
        if (lStack_160 != 0) {
          func_0x0001080fdfa0();
        }
        func_0x00010527d974(lStack_190);
        goto LAB_1080fd884;
      }
    }
    else {
      func_0x00010b9a9358(&lStack_160,alStack_188 + 3);
      if (lStack_160 == 0) {
        uVar15 = 0;
        puVar13 = &UNK_10f7d0ef0;
      }
      else {
        puVar13 = (undefined *)(lStack_160 + 0x18);
        uVar15 = *(undefined4 *)(lStack_160 + 0xc);
      }
      func_0x0001080fe01c(puVar13,uVar15);
      func_0x0001003a8cb8(lStack_160);
      if ((int)puVar13 != 0) goto LAB_1080fd858;
    }
    func_0x00010b9a0050(ppppplVar17[3],&UNK_10f47b19c);
    func_0x0001080fdf94();
    func_0x00010527d974(lStack_190);
  }
  else {
    func_0x00010b9aac28(&lStack_160,alStack_188 + 3,ppppplVar17[3]);
    bVar1 = *(byte *)(ppppplVar17[3] + 1);
    if ((bVar1 & 1) == 0) {
      func_0x0001080fdf94();
    }
    else {
      func_0x000105c3d468(alStack_188,lStack_160 + 0x18);
    }
    func_0x000104bdb3b0(lStack_160);
    if (bVar1 == 0) goto LAB_1080fd900;
LAB_1080fd884:
    FUN_108140a90(&lStack_160,alStack_188);
    uVar5 = lStack_160 == 1;
    if ((bool)uVar5) {
      FUN_108140e60(&lStack_198,auStack_158[0]);
      if ((lStack_198 != 0) && (*(long *)(lStack_198 + 0x10) != 0)) {
        do {
          func_0x0001080fe060();
        } while (extraout_w10_01 != 0);
      }
      lStack_190 = lStack_198;
      func_0x00010b9a8f78(plVar6,&lStack_190);
      func_0x0001080fe04c();
      FUN_1080cc5cc(lStack_198);
    }
    else {
      func_0x00010b99febc(ppppplVar17[3],auStack_158);
      func_0x0001080fdf94();
    }
    func_0x0001078c47a0(&lStack_160);
  }
LAB_1080fd900:
  if (alStack_188[0] != 0) {
    func_0x0001080fdfa0();
  }
  func_0x00010b9a8d98(alStack_188 + 3);
  func_0x0001080fdfb8(uStack_148);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001080fe004();
    if (plStack_1c8 != (long *)0x0) {
      (**(code **)(*plStack_1c8 + 0x30))();
    }
    func_0x0001080fdf94(plStack_1c8);
    FUN_1080cc5cc();
    return;
  }
  return;
}



/* Entry: 1080fdce4; end: 1080fdd0f;  */

void FUN_1080fdce4(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x0001080fe034();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010b9aac80(&lStack_28);
  if (lStack_28 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x0001080fdde8(param_1,&lStack_28);
    if (*param_1 == 0) {
      func_0x00010b9aa6d4(&lStack_28,uVar1);
    }
  }
  func_0x000104bddf04(lStack_28);
  return;
}



/* Entry: 1080fdd10; end: 1080fdd87;  */

void FUN_1080fdd10(undefined8 *param_1,undefined4 *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar1 = *param_2;
  lVar3 = *param_3;
  if (lVar3 != 0) {
    func_0x0001080fdfe4();
  }
  lVar4 = param_3[1];
  puVar2[5] = param_3[2];
  puVar2[4] = lVar4;
  *puVar2 = &PTR_DAT_110d7ef28;
  puVar2[1] = 1;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  puVar2[3] = lVar3;
  *param_1 = puVar2;
  return;
}



/* Entry: 1080fdd88; end: 1080fde5b;  */

void FUN_1080fdd88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_28;
  
  func_0x00010b9aac80(&lStack_28);
  if (lStack_28 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x0001080fdde8(param_1,&lStack_28);
    if (*param_1 == 0) {
      func_0x00010b9aa6d4(&lStack_28,param_3);
    }
  }
  func_0x000104bddf04(lStack_28);
  return;
}



/* Entry: 1080fde5c; end: 1080fde5f;  */

undefined8 * FUN_1080fde5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a22e48;
  FUN_1080fded0(param_1[2]);
  return param_1;
}



/* Entry: 1080fde60; end: 1080fde73;  */

void FUN_1080fde60(void)

{
  FUN_1080fdea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fde74; end: 1080fde9f;  */

void FUN_1080fde74(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18);
  if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x10) + ((long)*(ulong *)(param_1 + 0x20) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001080fde8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1080fdea0; end: 1080fdecf;  */

undefined8 * FUN_1080fdea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a22e48;
  FUN_1080fded0(param_1[2]);
  return param_1;
}



/* Entry: 1080fded0; end: 1080fdf03;  */

void FUN_1080fded0(long param_1)

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



/* Entry: 1080fdf04; end: 1080fdf27;  */

undefined8 * FUN_1080fdf04(undefined8 *param_1)

{
  FUN_1080fdf28(*param_1);
  return param_1;
}



/* Entry: 1080fdf28; end: 1080fdf37;  */

void FUN_1080fdf28(long param_1)

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



/* Entry: 1080fdf38; end: 1080fdf4b;  */

void FUN_1080fdf38(void)

{
  func_0x0001080fdf5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fdf4c; end: 1080fe06f;  */

void FUN_1080fdf4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080fdf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080fe070; end: 1080fe0e7;  */

undefined8 * FUN_1080fe070(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_110a22f10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110a22f50;
  param_1[4] = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 5);
  return param_1;
}



/* Entry: 1080fe0e8; end: 1080fe0f3;  */

long FUN_1080fe0e8(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x28))();
  func_0x0001003a81d8(param_1 + 8);
  return param_1;
}



/* Entry: 1080fe0f4; end: 1080fe107;  */

void FUN_1080fe0f4(void)

{
  func_0x0001080fe0b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fe108; end: 1080fe117;  */

void FUN_1080fe108(long param_1)

{
  func_0x0001080fe0b8(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fe118; end: 1080fe19f;  */

void FUN_1080fe118(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_58;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  FUN_1080fe1a0(param_2,param_1,&UNK_10f47b21a,FUN_1080fe27c,0);
  func_0x0001080fe850();
  func_0x0001080fe850();
  plVar3 = (long *)0x28;
  __Znwm();
  plVar6 = plVar3 + 1;
  *plVar6 = 1;
  *plVar3 = (long)&PTR_DAT_110a22fb8;
  if ((param_2 != 0) && (uVar4 = param_2, func_0x00010b9a5818(), (uVar4 & 1) == 0)) {
    func_0x00010b9a5890();
    puStack_80 = &UNK_10f47b25b;
    pcStack_68 = FUN_1080fe27c;
    plStack_78 = plVar3;
    puStack_70 = &stack0xfffffffffffffff0;
    (**(code **)(uVar4 + 0x20))(&lStack_90);
    lVar5 = *(long *)(*(long *)(lStack_90 + 0x48) + 0x10);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      plVar3 = (long *)(*(long *)(lVar5 + 0x10) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_88 = lVar5;
    func_0x00010b9a8f78(extraout_x8,&lStack_88);
    func_0x000104bddf04(lVar5);
    func_0x0001080fe7dc(lStack_90);
    return;
  }
  plVar3[2] = param_2;
  plVar3[3] = 0x1080fe42c;
  plVar3[4] = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_58 = plVar3;
  func_0x00010b9ac308(param_1,&UNK_10f47b25b,&plStack_58);
  func_0x000104bda3ac(plStack_58);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}



/* Entry: 1080fe1a0; end: 1080fe27b;  */

void FUN_1080fe1a0(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_58;
  
  plVar3 = (long *)0x28;
  __Znwm();
  plVar6 = plVar3 + 1;
  *plVar6 = 1;
  *plVar3 = (long)&PTR_DAT_110a22fb8;
  if ((param_1 != 0) && (uVar4 = param_1, func_0x00010b9a5818(), (uVar4 & 1) == 0)) {
    func_0x00010b9a5890();
    pcStack_68 = FUN_1080fe27c;
    uStack_80 = param_3;
    plStack_78 = plVar3;
    puStack_70 = &stack0xfffffffffffffff0;
    (**(code **)(uVar4 + 0x20))(&lStack_90);
    lVar5 = *(long *)(*(long *)(lStack_90 + 0x48) + 0x10);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      plVar3 = (long *)(*(long *)(lVar5 + 0x10) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_88 = lVar5;
    func_0x00010b9a8f78(extraout_x8,&lStack_88);
    func_0x000104bddf04(lVar5);
    func_0x0001080fe7dc(lStack_90);
    return;
  }
  plVar3[2] = param_1;
  plVar3[3] = param_4;
  plVar3[4] = param_5;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_58 = plVar3;
  func_0x00010b9ac308(param_2,param_3,&plStack_58);
  func_0x000104bda3ac(plStack_58);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}



/* Entry: 1080fe27c; end: 1080fe2ef;  */

void FUN_1080fe27c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  (**(code **)(param_2 + 0x20))(&lStack_30);
  lVar4 = *(long *)(*(long *)(lStack_30 + 0x48) + 0x10);
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
  lStack_28 = lVar4;
  func_0x00010b9a8f78(param_1,&lStack_28);
  func_0x000104bddf04(lVar4);
  func_0x0001080fe7dc(lStack_30);
  return;
}



/* Entry: 1080fe2f0; end: 1080fe39b;  */

void FUN_1080fe2f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_1080fe4c0(&plStack_38);
  if (plStack_38 == (long *)0x0) {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    (**(code **)(*plStack_38 + 0x40))(&lStack_48,plStack_38);
    lVar4 = lStack_48;
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_48 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_40 = lStack_48;
    func_0x00010b9a8f78(param_1,&lStack_40);
    func_0x000104bddf04(lVar4);
    func_0x0001080dafac(lStack_48);
  }
  func_0x0001080dafac(plStack_38);
  return;
}



/* Entry: 1080fe39c; end: 1080fe4b7;  */

void FUN_1080fe39c(void)

{
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001080fe83c();
  func_0x00010b9aac28(&lStack_28);
  if (lStack_28 == 0) {
    func_0x0001080fe8b0(0);
  }
  else {
    func_0x0001080fe88c();
    func_0x0001080fe860();
    if ((*(byte *)(*(long *)(unaff_x20 + 0x18) + 8) & 1) == 0) {
      func_0x0001080fe8b0();
    }
    else {
      func_0x00010812f5f0(&uStack_38,&uStack_30,lStack_28 + 0x18);
      FUN_1080fe740();
      func_0x0001080fe824();
      func_0x0001080fe800(uStack_38);
    }
    func_0x0001003a8cb8(uStack_30);
  }
  func_0x000104bdb3b0();
  return;
}



/* Entry: 1080fe4b8; end: 1080fe4bf;  */

void FUN_1080fe4b8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x8;
  long *plVar7;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_58;
  
  uVar5 = param_2 - 0x18;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  FUN_1080fe1a0(uVar5,param_1,&UNK_10f47b21a,FUN_1080fe27c,0);
  func_0x0001080fe850();
  func_0x0001080fe850();
  plVar3 = (long *)0x28;
  __Znwm();
  plVar7 = plVar3 + 1;
  *plVar7 = 1;
  *plVar3 = (long)&PTR_DAT_110a22fb8;
  if ((uVar5 != 0) && (uVar4 = uVar5, func_0x00010b9a5818(), (uVar4 & 1) == 0)) {
    func_0x00010b9a5890();
    puStack_80 = &UNK_10f47b25b;
    pcStack_68 = FUN_1080fe27c;
    plStack_78 = plVar3;
    puStack_70 = &stack0xfffffffffffffff0;
    (**(code **)(uVar4 + 0x20))(&lStack_90);
    lVar6 = *(long *)(*(long *)(lStack_90 + 0x48) + 0x10);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      plVar3 = (long *)(*(long *)(lVar6 + 0x10) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_88 = lVar6;
    func_0x00010b9a8f78(extraout_x8,&lStack_88);
    func_0x000104bddf04(lVar6);
    func_0x0001080fe7dc(lStack_90);
    return;
  }
  plVar3[2] = uVar5;
  plVar3[3] = 0x1080fe42c;
  plVar3[4] = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_58 = plVar3;
  func_0x00010b9ac308(param_1,&UNK_10f47b25b,&plStack_58);
  func_0x000104bda3ac(plStack_58);
  do {
    lVar6 = *plVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}



/* Entry: 1080fe4c0; end: 1080fe543;  */

void FUN_1080fe4c0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x00010b9abfa4(param_2,0);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010b9aac80(&lStack_28);
  if (lStack_28 == 0) {
    *param_1 = 0;
  }
  else {
    lVar1 = lStack_28;
    ___dynamic_cast(lStack_28,&PTR_DAT_110d7ebe8,&PTR_DAT_110a26380,0);
    FUN_1080dafb8();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      func_0x00010b9aa6d4(&lStack_28,uVar2);
    }
  }
  func_0x000104bddf04(lStack_28);
  return;
}



/* Entry: 1080fe544; end: 1080fe73f;  */

long * FUN_1080fe544(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined4 uVar5;
  long extraout_x8;
  undefined1 auStack_b8 [8];
  undefined8 *puStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  byte bStack_70;
  long lStack_68;
  byte abStack_60 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1080fe4c0(&plStack_80);
  if (plStack_80 == (long *)0x0) {
LAB_1080fe6f4:
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    func_0x00010b9abfa4(param_2,2);
    func_0x00010b9aaac4(&lStack_88);
    if ((*(byte *)(*(long *)(param_2 + 0x18) + 8) & 1) == 0) {
      func_0x0001080fe8bc();
    }
    else {
      func_0x00010b9abfa4(param_2,3);
      func_0x00010b9aaac4(&lStack_90);
      if ((*(byte *)(*(long *)(param_2 + 0x18) + 8) & 1) == 0) {
        func_0x0001080fe8bc();
      }
      else {
        if (lStack_88 == 0) {
          uVar5 = 0;
          puVar3 = &UNK_10f7d0ef0;
        }
        else {
          puVar3 = (undefined *)(lStack_88 + 0x18);
          uVar5 = *(undefined4 *)(lStack_88 + 0xc);
        }
        func_0x00010812e128(&lStack_68,puVar3,uVar5);
        if (lStack_68 == 1) {
          if (lStack_90 == 0) {
            uVar5 = 0;
            puVar3 = &UNK_10f7d0ef0;
          }
          else {
            puVar3 = (undefined *)(lStack_90 + 0x18);
            uVar5 = *(undefined4 *)(lStack_90 + 0xc);
          }
          FUN_10812e2dc(&lStack_78,puVar3,uVar5);
          if (lStack_78 == 1) {
            (**(code **)(*plStack_80 + 0x38))
                      (plStack_80,param_3,(ulong)bStack_70 << 0x10 | (ulong)abStack_60[0] << 8 | 4,
                       param_5,param_4);
          }
          else {
            func_0x00010b99ff08(*(undefined8 *)(param_2 + 0x18),abStack_60);
            func_0x0001080fe8bc();
          }
          func_0x00010780871c(&lStack_78);
          func_0x000107808708(&lStack_68);
          func_0x0001003a8cb8(lStack_90);
          func_0x0001003a8cb8(lStack_88);
          if (lStack_78 != 1) goto LAB_1080fe700;
          goto LAB_1080fe6f4;
        }
        func_0x00010b99ff08(*(undefined8 *)(param_2 + 0x18),abStack_60);
        func_0x0001080fe8bc();
        func_0x000107808708(&lStack_68);
      }
      func_0x0001003a8cb8(lStack_90);
    }
    func_0x0001003a8cb8(lStack_88);
  }
LAB_1080fe700:
  plVar4 = plStack_80;
  func_0x0001080dafac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar4;
  }
  ___stack_chk_fail();
  uVar1 = 5 < (ulong)plVar4[2];
  uVar2 = plVar4[2] == 6;
  if (!(bool)uVar1) {
    return (long *)0x0;
  }
  plStack_a8 = plStack_80;
  pcStack_98 = FUN_1080fe740;
  puStack_b0 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010b9abfa4();
  func_0x00010b9aba70();
  if (!(bool)uVar2) {
    func_0x00010b9aa5f0(auStack_b8,7);
    func_0x00010b9aba8c();
    func_0x00010b9aba44();
    return (long *)0x0;
  }
  func_0x00010b9abb74();
  if (!(bool)uVar1 || (bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a9638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10b9a963c + (ulong)(byte)(&UNK_10e5fd6be)[extraout_x8] * 4))();
    return plVar4;
  }
  return (long *)0x0;
}



/* Entry: 1080fe740; end: 1080fe75f;  */

long FUN_1080fe740(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long extraout_x8;
  undefined1 auStack_28 [8];
  
  uVar1 = 5 < *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x10) == 6;
  if (!(bool)uVar1) {
    return 0;
  }
  func_0x00010b9abfa4(param_1,5);
  func_0x00010b9aba70();
  if ((bool)uVar2) {
    func_0x00010b9abb74();
    if (!(bool)uVar1 || (bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010b9a9638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10b9a963c + (ulong)(byte)(&UNK_10e5fd6be)[extraout_x8] * 4))();
      return param_1;
    }
    return 0;
  }
  func_0x00010b9aa5f0(auStack_28,7);
  func_0x00010b9aba8c();
  func_0x00010b9aba44();
  return 0;
}



/* Entry: 1080fe760; end: 1080fe773;  */

void FUN_1080fe760(void)

{
  FUN_1080fe7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fe774; end: 1080fe79f;  */

void FUN_1080fe774(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18);
  if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x10) + ((long)*(ulong *)(param_1 + 0x20) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001080fe78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1080fe7a0; end: 1080fe7cf;  */

undefined8 * FUN_1080fe7a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a22fb8;
  FUN_1080fe7d0(param_1[2]);
  return param_1;
}



/* Entry: 1080fe7d0; end: 1080fe8c7;  */

void FUN_1080fe7d0(long param_1)

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



/* Entry: 1080fe8c8; end: 1080fe96f;  */

undefined8 * FUN_1080fe8c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = &PTR_FUN_110a23030;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110a23070;
  param_1[4] = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 5);
  param_1[10] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 0xb,param_3 + 1);
  return param_1;
}



/* Entry: 1080fe970; end: 1080fe97b;  */

long FUN_1080fe970(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x58))();
  (*(code *)**(undefined8 **)(param_1 + 0x28))();
  func_0x0001003a81d8(param_1 + 8);
  return param_1;
}



/* Entry: 1080fe97c; end: 1080fe98f;  */

void FUN_1080fe97c(void)

{
  func_0x0001080fe930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fe990; end: 1080fe99f;  */

void FUN_1080fe990(long param_1)

{
  func_0x0001080fe930(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fe9a0; end: 1080fea8b;  */

void FUN_1080fe9a0(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined4 auStack_118 [2];
  undefined2 uStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long *plStack_58;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  FUN_1080fea8c(param_2,param_1,&UNK_10f47b295,FUN_1080feb60,0);
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  plVar4 = param_2;
  puVar8 = param_1;
  func_0x000108100d34();
  plVar13 = plVar4 + 1;
  *plVar13 = 1;
  *plVar4 = (long)&PTR_DAT_110a23168;
  if ((param_2 == (long *)0x0) ||
     (plVar5 = param_2, func_0x00010b9a5818(), ((ulong)plVar5 & 1) != 0)) {
    plVar4[2] = (long)param_2;
    plVar4[3] = (long)FUN_1080ff748;
    plVar4[4] = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = plVar4;
    func_0x00010b9ac308(param_1,&UNK_10f47b325,&plStack_58);
    func_0x000104bda3ac(plStack_58);
    do {
      lVar10 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    return;
  }
  func_0x00010b9a5890();
  plVar4 = plVar5;
  func_0x00010b8c2a68();
  if ((plVar4 == (long *)0x0) || (plVar4[0x23] == 0)) {
    func_0x00010b9a0050(puVar8[3],&UNK_10f47b331);
LAB_1080fec88:
    func_0x000108100bf0();
    return;
  }
  puVar6 = puVar8;
  func_0x00010b9abfc0(puVar8,0);
  if (((*(byte *)(puVar8[3] + 8) & 1) == 0) ||
     (func_0x00010b9abfc0(puVar8,1), (*(byte *)(puVar8[3] + 8) & 1) == 0)) goto LAB_1080fec88;
  plStack_e0 = (long *)0x0;
  if (2 < (ulong)puVar8[2]) {
    func_0x00010b9ac080(&puStack_d0,puVar8,2);
    puVar8 = puStack_d0;
    if (puStack_d0 == (undefined8 *)0x0) {
      func_0x000108100bf0();
    }
    else {
      plVar7 = (long *)0x18;
      __Znwm();
      plVar13 = plStack_e0;
      puStack_d0 = (undefined8 *)0x0;
      plVar14 = plVar7 + 1;
      *plVar14 = 1;
      *plVar7 = (long)&PTR_DAT_110a231e0;
      plVar7[2] = (long)puVar8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_e0 = plVar7;
      func_0x000108100414(plVar13);
      func_0x000108100414(0);
      do {
        lVar10 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
    func_0x000104bda3ac(puStack_d0);
    if (puVar8 == (undefined8 *)0x0) goto LAB_1080fefb8;
  }
  lVar10 = plVar4[0x23];
  uVar12 = *(undefined8 *)(lVar10 + 0x78);
  uStack_f0 = 0;
  (*(code *)plVar5[10])(&puStack_d0,plVar5 + 10);
  uStack_108 = 0;
  func_0x00010b8c3e6c(&lStack_e8,uVar12,&uStack_f0,&puStack_d0,0,&uStack_108);
  func_0x0001003a8cb8(uStack_108);
  FUN_1080d5b98(puStack_d0);
  FUN_108100600(uStack_f0);
  func_0x00010b8d7868(&lStack_f8,lVar10 + 0x80,&lStack_e8,2);
  func_0x00010b8d2ddc(lStack_f8);
  func_0x00010b8d366c(lStack_f8,1);
  func_0x00010b8d48fc(lStack_f8 + 0xb8,&plStack_e0);
  uStack_100 = 0;
  uStack_108 = 0;
  auStack_118[0] = *(undefined4 *)(lStack_e8 + 0x18);
  uStack_110 = 4;
  func_0x00010b9aa86c(&uStack_108,"contextId",9,auStack_118);
  uVar1 = *(undefined4 *)(lStack_e8 + 0x18);
  uVar12 = *(undefined8 *)(lVar10 + 0x78);
  puVar8 = (undefined8 *)0x78;
  __Znwm();
  plVar4 = puVar8 + 1;
  *plVar4 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_110a23258;
  puVar11 = puVar8 + 3;
  *puVar11 = &PTR_DAT_110a232a8;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  puVar8[7] = uVar12;
  *(undefined1 *)(puVar8 + 8) = 0;
  FUN_1080d5a68(puVar8 + 9,lVar10);
  lVar10 = lStack_f8;
  if ((lStack_f8 != 0) && (*(long *)(lStack_f8 + 0x10) != 0)) {
    do {
      func_0x000108100e3c();
      lVar10 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  puVar8[0xb] = lVar10;
  puVar9 = (undefined8 *)0xa8;
  __Znwm();
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110a232e8;
  puVar15 = puVar9 + 3;
  *puVar15 = &PTR_DAT_110a23338;
  puVar9[5] = 0;
  *(char *)(puVar9 + 6) = (char)puVar6;
  puVar9[8] = 0;
  puVar9[7] = 0;
  puVar9[10] = 0;
  puVar9[9] = 0;
  puVar9[0xc] = 0;
  puVar9[0xb] = 0;
  puVar9[0xe] = 0;
  puVar9[0xd] = 0;
  puVar9[0x10] = 0;
  puVar9[0xf] = 0;
  *(undefined8 *)((long)puVar9 + 0x8c) = 0;
  *(undefined8 *)((long)puVar9 + 0x84) = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[1] = 0;
  puVar9[4] = 0;
  puStack_d0 = puVar15;
  puStack_c8 = puVar9;
  do {
    func_0x000108100bd0();
  } while (extraout_w10 != 0);
  func_0x0001003a8180();
  func_0x0001003a824c(&puStack_d0);
  puVar8[0xc] = puVar15;
  uVar12 = 0x128;
  __Znwm();
  FUN_10811668c();
  puVar8[0xd] = uVar12;
  *(char *)(puVar8 + 0xe) = (char)puVar6;
  func_0x00010b8d2d9c(&puStack_d8,puVar8[0xb]);
  func_0x000108108a08(&puStack_d0,&puStack_d8);
  FUN_1080c5c80(puStack_d8);
  if (puStack_d0 != (undefined8 *)0x0) {
    puStack_d8 = (undefined8 *)puVar8[0xc];
    if ((puStack_d8 != (undefined8 *)0x0) && (puStack_d8[2] != 0)) {
      do {
        func_0x000108100e3c();
        puStack_d8 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    FUN_10811f3cc();
    func_0x0001080ec798(puStack_d8);
  }
  func_0x0001078bee50(puStack_d0);
  if ((puVar8[5] == 0) || (*(long *)(puVar8[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_d0 = puVar11;
    puStack_c8 = puVar8;
    func_0x0001003a8180(puVar8 + 4,&puStack_d0);
    func_0x0001003a824c(&puStack_d0);
    if (puVar8[5] != 0) goto LAB_1080fef48;
  }
  else {
LAB_1080fef48:
    do {
      func_0x000108100bd0();
    } while (extraout_w10_00 != 0);
  }
  puStack_d8 = puVar11;
  func_0x00010b9a8f78(&puStack_d0,&puStack_d8);
  func_0x00010b9aa86c(&uStack_108,"native",6,&puStack_d0);
  func_0x00010b9a8f04(extraout_x8,&uStack_108);
  func_0x00010b9a8d98(&puStack_d0);
  func_0x000104bddf04(puVar11);
  func_0x000108100408(puVar11);
  func_0x000108100c54();
  func_0x00010b9a8d98(&uStack_108);
  func_0x0001080d26d8(lStack_f8);
  func_0x000105276914(lStack_e8);
LAB_1080fefb8:
  func_0x000108100414(plStack_e0);
  return;
}



/* Entry: 1080fea8c; end: 1080feb5f;  */

void FUN_1080fea8c(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined4 auStack_118 [2];
  undefined2 uStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long *plStack_58;
  
  plVar4 = param_1;
  lVar10 = param_2;
  func_0x000108100d34();
  plVar13 = plVar4 + 1;
  *plVar13 = 1;
  *plVar4 = (long)&PTR_DAT_110a23168;
  if ((param_1 == (long *)0x0) ||
     (plVar5 = param_1, func_0x00010b9a5818(), ((ulong)plVar5 & 1) != 0)) {
    plVar4[2] = (long)param_1;
    plVar4[3] = param_4;
    plVar4[4] = param_5;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = plVar4;
    func_0x00010b9ac308(param_2,param_3,&plStack_58);
    func_0x000104bda3ac(plStack_58);
    do {
      lVar10 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    return;
  }
  func_0x00010b9a5890();
  plVar4 = plVar5;
  func_0x00010b8c2a68();
  if ((plVar4 == (long *)0x0) || (plVar4[0x23] == 0)) {
    func_0x00010b9a0050(*(undefined8 *)(lVar10 + 0x18),&UNK_10f47b331);
LAB_1080fec88:
    func_0x000108100bf0();
    return;
  }
  lVar6 = lVar10;
  func_0x00010b9abfc0(lVar10,0);
  if (((*(byte *)(*(long *)(lVar10 + 0x18) + 8) & 1) == 0) ||
     (func_0x00010b9abfc0(lVar10,1), (*(byte *)(*(long *)(lVar10 + 0x18) + 8) & 1) == 0))
  goto LAB_1080fec88;
  plStack_e0 = (long *)0x0;
  if (2 < *(ulong *)(lVar10 + 0x10)) {
    func_0x00010b9ac080(&puStack_d0,lVar10,2);
    puVar8 = puStack_d0;
    if (puStack_d0 == (undefined8 *)0x0) {
      func_0x000108100bf0();
    }
    else {
      plVar7 = (long *)0x18;
      __Znwm();
      plVar13 = plStack_e0;
      puStack_d0 = (undefined8 *)0x0;
      plVar14 = plVar7 + 1;
      *plVar14 = 1;
      *plVar7 = (long)&PTR_DAT_110a231e0;
      plVar7[2] = (long)puVar8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_e0 = plVar7;
      func_0x000108100414(plVar13);
      func_0x000108100414(0);
      do {
        lVar10 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
    func_0x000104bda3ac(puStack_d0);
    if (puVar8 == (undefined8 *)0x0) goto LAB_1080fefb8;
  }
  lVar10 = plVar4[0x23];
  uVar12 = *(undefined8 *)(lVar10 + 0x78);
  uStack_f0 = 0;
  (*(code *)plVar5[10])(&puStack_d0,plVar5 + 10);
  uStack_108 = 0;
  func_0x00010b8c3e6c(&lStack_e8,uVar12,&uStack_f0,&puStack_d0,0,&uStack_108);
  func_0x0001003a8cb8(uStack_108);
  FUN_1080d5b98(puStack_d0);
  FUN_108100600(uStack_f0);
  func_0x00010b8d7868(&lStack_f8,lVar10 + 0x80,&lStack_e8,2);
  func_0x00010b8d2ddc(lStack_f8);
  func_0x00010b8d366c(lStack_f8,1);
  func_0x00010b8d48fc(lStack_f8 + 0xb8,&plStack_e0);
  uStack_100 = 0;
  uStack_108 = 0;
  auStack_118[0] = *(undefined4 *)(lStack_e8 + 0x18);
  uStack_110 = 4;
  func_0x00010b9aa86c(&uStack_108,"contextId",9,auStack_118);
  uVar1 = *(undefined4 *)(lStack_e8 + 0x18);
  uVar12 = *(undefined8 *)(lVar10 + 0x78);
  puVar8 = (undefined8 *)0x78;
  __Znwm();
  plVar4 = puVar8 + 1;
  *plVar4 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_110a23258;
  puVar11 = puVar8 + 3;
  *puVar11 = &PTR_DAT_110a232a8;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  puVar8[7] = uVar12;
  *(undefined1 *)(puVar8 + 8) = 0;
  FUN_1080d5a68(puVar8 + 9,lVar10);
  lVar10 = lStack_f8;
  if ((lStack_f8 != 0) && (*(long *)(lStack_f8 + 0x10) != 0)) {
    do {
      func_0x000108100e3c();
      lVar10 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  puVar8[0xb] = lVar10;
  puVar9 = (undefined8 *)0xa8;
  __Znwm();
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110a232e8;
  puVar15 = puVar9 + 3;
  *puVar15 = &PTR_DAT_110a23338;
  puVar9[5] = 0;
  *(char *)(puVar9 + 6) = (char)lVar6;
  puVar9[8] = 0;
  puVar9[7] = 0;
  puVar9[10] = 0;
  puVar9[9] = 0;
  puVar9[0xc] = 0;
  puVar9[0xb] = 0;
  puVar9[0xe] = 0;
  puVar9[0xd] = 0;
  puVar9[0x10] = 0;
  puVar9[0xf] = 0;
  *(undefined8 *)((long)puVar9 + 0x8c) = 0;
  *(undefined8 *)((long)puVar9 + 0x84) = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[1] = 0;
  puVar9[4] = 0;
  puStack_d0 = puVar15;
  puStack_c8 = puVar9;
  do {
    func_0x000108100bd0();
  } while (extraout_w10 != 0);
  func_0x0001003a8180();
  func_0x0001003a824c(&puStack_d0);
  puVar8[0xc] = puVar15;
  uVar12 = 0x128;
  __Znwm();
  FUN_10811668c();
  puVar8[0xd] = uVar12;
  *(char *)(puVar8 + 0xe) = (char)lVar6;
  func_0x00010b8d2d9c(&puStack_d8,puVar8[0xb]);
  func_0x000108108a08(&puStack_d0,&puStack_d8);
  FUN_1080c5c80(puStack_d8);
  if (puStack_d0 != (undefined8 *)0x0) {
    puStack_d8 = (undefined8 *)puVar8[0xc];
    if ((puStack_d8 != (undefined8 *)0x0) && (puStack_d8[2] != 0)) {
      do {
        func_0x000108100e3c();
        puStack_d8 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    FUN_10811f3cc();
    func_0x0001080ec798(puStack_d8);
  }
  func_0x0001078bee50(puStack_d0);
  if ((puVar8[5] == 0) || (*(long *)(puVar8[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_d0 = puVar11;
    puStack_c8 = puVar8;
    func_0x0001003a8180(puVar8 + 4,&puStack_d0);
    func_0x0001003a824c(&puStack_d0);
    if (puVar8[5] != 0) goto LAB_1080fef48;
  }
  else {
LAB_1080fef48:
    do {
      func_0x000108100bd0();
    } while (extraout_w10_00 != 0);
  }
  puStack_d8 = puVar11;
  func_0x00010b9a8f78(&puStack_d0,&puStack_d8);
  func_0x00010b9aa86c(&uStack_108,"native",6,&puStack_d0);
  func_0x00010b9a8f04(extraout_x8,&uStack_108);
  func_0x00010b9a8d98(&puStack_d0);
  func_0x000104bddf04(puVar11);
  func_0x000108100408(puVar11);
  func_0x000108100c54();
  func_0x00010b9a8d98(&uStack_108);
  func_0x0001080d26d8(lStack_f8);
  func_0x000105276914(lStack_e8);
LAB_1080fefb8:
  func_0x000108100414(plStack_e0);
  return;
}



/* Entry: 1080feb60; end: 1080fefc3;  */

void FUN_1080feb60(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 auStack_b8 [2];
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  lVar11 = param_2;
  func_0x00010b8c2a68();
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x118) == 0)) {
    func_0x00010b9a0050(*(undefined8 *)(param_3 + 0x18),&UNK_10f47b331);
LAB_1080fec88:
    func_0x000108100bf0();
    return;
  }
  lVar4 = param_3;
  func_0x00010b9abfc0(param_3,0);
  if (((*(byte *)(*(long *)(param_3 + 0x18) + 8) & 1) == 0) ||
     (func_0x00010b9abfc0(param_3,1), (*(byte *)(*(long *)(param_3 + 0x18) + 8) & 1) == 0))
  goto LAB_1080fec88;
  plStack_80 = (long *)0x0;
  if (2 < *(ulong *)(param_3 + 0x10)) {
    func_0x00010b9ac080(&puStack_70,param_3,2);
    puVar6 = puStack_70;
    if (puStack_70 == (undefined8 *)0x0) {
      func_0x000108100bf0();
    }
    else {
      plVar5 = (long *)0x18;
      __Znwm();
      plVar13 = plStack_80;
      puStack_70 = (undefined8 *)0x0;
      plVar12 = plVar5 + 1;
      *plVar12 = 1;
      *plVar5 = (long)&PTR_DAT_110a231e0;
      plVar5[2] = (long)puVar6;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_80 = plVar5;
      func_0x000108100414(plVar13);
      func_0x000108100414(0);
      do {
        lVar8 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    func_0x000104bda3ac(puStack_70);
    if (puVar6 == (undefined8 *)0x0) goto LAB_1080fefb8;
  }
  lVar11 = *(long *)(lVar11 + 0x118);
  uVar10 = *(undefined8 *)(lVar11 + 0x78);
  uStack_90 = 0;
  (**(code **)(param_2 + 0x50))(&puStack_70,(undefined8 *)(param_2 + 0x50));
  uStack_a8 = 0;
  func_0x00010b8c3e6c(&lStack_88,uVar10,&uStack_90,&puStack_70,0,&uStack_a8);
  func_0x0001003a8cb8(uStack_a8);
  FUN_1080d5b98(puStack_70);
  FUN_108100600(uStack_90);
  func_0x00010b8d7868(&lStack_98,lVar11 + 0x80,&lStack_88,2);
  func_0x00010b8d2ddc(lStack_98);
  func_0x00010b8d366c(lStack_98,1);
  func_0x00010b8d48fc(lStack_98 + 0xb8,&plStack_80);
  uStack_a0 = 0;
  uStack_a8 = 0;
  auStack_b8[0] = *(undefined4 *)(lStack_88 + 0x18);
  uStack_b0 = 4;
  func_0x00010b9aa86c(&uStack_a8,"contextId",9,auStack_b8);
  uVar1 = *(undefined4 *)(lStack_88 + 0x18);
  uVar10 = *(undefined8 *)(lVar11 + 0x78);
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  plVar13 = puVar6 + 1;
  *plVar13 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110a23258;
  puVar9 = puVar6 + 3;
  *puVar9 = &PTR_DAT_110a232a8;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined4 *)(puVar6 + 6) = uVar1;
  puVar6[7] = uVar10;
  *(undefined1 *)(puVar6 + 8) = 0;
  FUN_1080d5a68(puVar6 + 9,lVar11);
  lVar11 = lStack_98;
  if ((lStack_98 != 0) && (*(long *)(lStack_98 + 0x10) != 0)) {
    do {
      func_0x000108100e3c();
      lVar11 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar6[0xb] = lVar11;
  puVar7 = (undefined8 *)0xa8;
  __Znwm();
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110a232e8;
  puVar14 = puVar7 + 3;
  *puVar14 = &PTR_DAT_110a23338;
  puVar7[5] = 0;
  *(char *)(puVar7 + 6) = (char)lVar4;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xc] = 0;
  puVar7[0xb] = 0;
  puVar7[0xe] = 0;
  puVar7[0xd] = 0;
  puVar7[0x10] = 0;
  puVar7[0xf] = 0;
  *(undefined8 *)((long)puVar7 + 0x8c) = 0;
  *(undefined8 *)((long)puVar7 + 0x84) = 0;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[1] = 0;
  puVar7[4] = 0;
  puStack_70 = puVar14;
  puStack_68 = puVar7;
  do {
    func_0x000108100bd0();
  } while (extraout_w10 != 0);
  func_0x0001003a8180();
  func_0x0001003a824c(&puStack_70);
  puVar6[0xc] = puVar14;
  uVar10 = 0x128;
  __Znwm();
  FUN_10811668c();
  puVar6[0xd] = uVar10;
  *(char *)(puVar6 + 0xe) = (char)lVar4;
  func_0x00010b8d2d9c(&puStack_78,puVar6[0xb]);
  func_0x000108108a08(&puStack_70,&puStack_78);
  FUN_1080c5c80(puStack_78);
  if (puStack_70 != (undefined8 *)0x0) {
    puStack_78 = (undefined8 *)puVar6[0xc];
    if ((puStack_78 != (undefined8 *)0x0) && (puStack_78[2] != 0)) {
      do {
        func_0x000108100e3c();
        puStack_78 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    FUN_10811f3cc();
    func_0x0001080ec798(puStack_78);
  }
  func_0x0001078bee50(puStack_70);
  if ((puVar6[5] == 0) || (*(long *)(puVar6[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_70 = puVar9;
    puStack_68 = puVar6;
    func_0x0001003a8180(puVar6 + 4,&puStack_70);
    func_0x0001003a824c(&puStack_70);
    if (puVar6[5] != 0) goto LAB_1080fef48;
  }
  else {
LAB_1080fef48:
    do {
      func_0x000108100bd0();
    } while (extraout_w10_00 != 0);
  }
  puStack_78 = puVar9;
  func_0x00010b9a8f78(&puStack_70,&puStack_78);
  func_0x00010b9aa86c(&uStack_a8,"native",6,&puStack_70);
  func_0x00010b9a8f04(param_1,&uStack_a8);
  func_0x00010b9a8d98(&puStack_70);
  func_0x000104bddf04(puVar9);
  func_0x000108100408(puVar9);
  func_0x000108100c54();
  func_0x00010b9a8d98(&uStack_a8);
  func_0x0001080d26d8(lStack_98);
  func_0x000105276914(lStack_88);
LAB_1080fefb8:
  func_0x000108100414(plStack_80);
  return;
}



/* Entry: 1080fefc4; end: 1080fefff;  */

void FUN_1080fefc4(void)

{
  long lStack_28;
  
  func_0x000108100d48();
  if (lStack_28 != 0) {
    FUN_1080ffa20(lStack_28);
  }
  func_0x000108100bf0();
  if (lStack_28 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080ff000; end: 1080ff19f;  */

void FUN_1080ff000(undefined8 param_1,float param_2,float param_3,undefined8 param_4,
                  undefined8 param_5,code **param_6)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 *extraout_x8_04;
  ulong extraout_x8_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  long lVar10;
  code **unaff_x22;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double unaff_d8;
  double unaff_d9;
  undefined1 auStack_2e0 [16];
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  float fStack_2ac;
  long lStack_2a8;
  undefined1 auStack_2a0 [24];
  long lStack_288;
  code **ppcStack_280;
  undefined1 ***pppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  code *pcStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1e8;
  code **ppcStack_1e0;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  code *pcStack_188;
  long lStack_180;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  code **ppcStack_158;
  undefined8 uStack_138;
  double dStack_130;
  double dStack_128;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  long alStack_90 [2];
  undefined **ppuStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  ppcVar8 = param_6;
  func_0x000108100ba8();
  uStack_58 = extraout_x8;
  FUN_1080ff9ac(alStack_90);
  if (alStack_90[0] == 0) {
    func_0x000108100bf0();
  }
  else {
    unaff_d8 = (double)func_0x000108100d54(param_6);
    unaff_d9 = (double)func_0x00010b9ac024(param_6,2);
    unaff_x22 = param_6;
    func_0x00010b9abfc0(param_6,3);
    ppcVar8 = (code **)0x4;
    func_0x00010b9ac080(&lStack_98,param_6);
    if (lStack_98 == 0) {
      ppcVar8 = (code **)&UNK_10f47b359;
      func_0x00010b9a0050(param_6[3]);
      func_0x000108100bf0();
    }
    else {
      func_0x000108100d80();
      if (lStack_a0 == 0) {
        func_0x000108100c10(param_6[3]);
        func_0x000108100bf0();
      }
      else {
        func_0x00010b8c2a44(&pcStack_a8);
        if (*(long *)(alStack_90[0] + 0x10) != 0) {
          do {
            func_0x000108100bd0();
          } while (extraout_w10 != 0);
        }
        fStack_c0 = (float)unaff_d8;
        param_2 = (float)unaff_d9;
        uStack_70 = 0;
        if (lStack_98 != 0) {
          do {
            fStack_c0 = (float)func_0x000108100e2c();
            uStack_70 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        uStack_b8 = SUB84(unaff_x22,0);
        alStack_90[1] = 0x1080ffd10;
        ppuStack_80 = &PTR_FUN_110a230e0;
        lStack_78 = alStack_90[0];
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_68 = CONCAT44(param_2,fStack_c0);
        ppcVar8 = &pcStack_a8;
        fStack_bc = param_2;
        uStack_60 = uStack_b8;
        func_0x00010b94b6f8();
        (*(code *)*ppuStack_80)(&ppuStack_80);
        func_0x0001080ffab4(&uStack_d0);
        func_0x000108100bf0();
        func_0x000105276914(pcStack_a8);
      }
      func_0x000108100dac();
    }
    func_0x000104bda3ac(lStack_98);
  }
  func_0x000108100d9c();
  func_0x000108100b34(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_1080ff1a0;
  ppcVar9 = ppcVar8;
  dStack_130 = unaff_d9;
  dStack_128 = unaff_d8;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000108100ba8();
  uStack_138 = extraout_x8_01;
  FUN_1080ff9ac(&pcStack_170);
  if (pcStack_170 == (code *)0x0) {
    func_0x000108100bf0();
  }
  else {
    dVar12 = (double)func_0x000108100d54(ppcVar8);
    unaff_x22 = ppcVar8;
    func_0x00010b9ac000(ppcVar8,2);
    dVar13 = (double)func_0x00010b9ac024(ppcVar8,3);
    ppcVar5 = ppcVar8;
    func_0x00010b9ac000(ppcVar8,4);
    ppcVar6 = ppcVar8;
    func_0x00010b9abfc0(ppcVar8,5);
    ppcVar9 = (code **)0x6;
    ppcVar7 = ppcVar8;
    func_0x00010b9ac080(&pcStack_178);
    if (pcStack_178 == (code *)0x0) {
      ppcVar9 = (code **)&UNK_10f47b3a2;
      func_0x00010b9a0050(ppcVar8[3]);
      func_0x000108100bf0();
    }
    else {
      func_0x000108100d80();
      if (lStack_180 == 0) {
        func_0x000108100c10(ppcVar8[3]);
        func_0x000108100bf0();
      }
      else {
        func_0x00010b8c2a44(&pcStack_188);
        uVar11 = *(undefined8 *)(lStack_180 + 0x110);
        if (*(long *)(pcStack_170 + 0x10) != 0) {
          do {
            func_0x000108100bd0();
          } while (extraout_w10_00 != 0);
        }
        pcVar4 = pcStack_178;
        fStack_1a0 = (float)dVar12;
        param_2 = (float)dVar13;
        if (pcStack_178 != (code *)0x0) {
          pcVar1 = pcStack_178 + 8;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
              *(long *)pcVar1 = *(long *)pcVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_19c = SUB84(unaff_x22,0);
        uStack_194 = SUB84(ppcVar5,0);
        uStack_190 = SUB84(ppcVar6,0);
        unaff_x22 = &pcStack_168;
        pcStack_168 = FUN_1080ffe28;
        ppuStack_160 = &PTR_FUN_110a23100;
        fStack_198 = param_2;
        func_0x000108100d34();
        *ppcVar7 = pcStack_170;
        ppcVar7[1] = pcVar4;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        ppcVar7[3] = (code *)CONCAT44(uStack_194,fStack_198);
        ppcVar7[2] = (code *)CONCAT44(uStack_19c,fStack_1a0);
        *(undefined4 *)(ppcVar7 + 4) = uStack_190;
        ppcVar9 = &pcStack_188;
        ppcStack_158 = ppcVar7;
        func_0x00010b94b6f8(uVar11,ppcVar9,&pcStack_168);
        func_0x000108100d68(ppuStack_160);
        func_0x0001080ffad0(&uStack_1b0);
        func_0x000108100bf0();
        func_0x000105276914(pcStack_188);
      }
      func_0x000108100dac();
    }
    func_0x000104bda3ac(pcStack_178);
  }
  func_0x000108100d9c();
  func_0x000108100b34(uStack_138);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_1080ff380;
  ppcStack_1e0 = unaff_x22;
  ppuStack_1c0 = &puStack_e0;
  func_0x000108100ba8();
  uStack_1e8 = extraout_x8_02;
  FUN_1080ff9ac(&lStack_220);
  if (lStack_220 == 0) {
    func_0x000108100bf0();
  }
  else {
    func_0x00010b9ac080(&lStack_228,ppcVar9,1);
    if (lStack_228 == 0) {
      func_0x00010b9a0050(ppcVar9[3],&UNK_10f47b3cd);
      func_0x000108100bf0();
    }
    else {
      func_0x0001080ffa78(&lStack_230,lStack_220);
      if (lStack_230 == 0) {
        func_0x000108100c10(ppcVar9[3]);
        func_0x000108100bf0();
      }
      else {
        func_0x00010b8c2a44(&uStack_238);
        if (*(long *)(lStack_220 + 0x10) != 0) {
          do {
            func_0x000108100bd0();
          } while (extraout_w10_01 != 0);
        }
        uStack_200 = 0;
        if (lStack_228 != 0) {
          do {
            func_0x000108100e2c();
            uStack_200 = extraout_x8_03;
          } while (extraout_w11_00 != 0);
        }
        pcStack_218 = FUN_1080fffec;
        ppuStack_210 = &PTR_FUN_110a23120;
        ppcVar9 = &pcStack_218;
        lStack_208 = lStack_220;
        uStack_250 = 0;
        uStack_248 = 0;
        func_0x00010b94b6f8();
        func_0x000108100d68(ppuStack_210);
        func_0x0001080ffaec(&uStack_250);
        func_0x000108100bf0();
        func_0x000105276914(uStack_238);
      }
      func_0x000108100dac();
    }
    func_0x000104bda3ac(lStack_228);
  }
  func_0x000108100d9c();
  func_0x000108100b34(uStack_1e8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_258 = 0x1080ff4c8;
  ppcStack_280 = ppcVar9;
  pppuStack_260 = &ppuStack_1c0;
  FUN_1080ff9ac(&lStack_288);
  if (lStack_288 == 0) {
    *(undefined2 *)(extraout_x8_04 + 1) = 0;
    *extraout_x8_04 = 0;
    goto LAB_1080ff62c;
  }
  func_0x00010b9a8974(auStack_2a0,*(long *)(lStack_288 + 0x40) + 0x140);
  lVar10 = *(long *)(*(long *)(lStack_288 + 0x40) + 0xa0);
  if (lVar10 == 0) {
LAB_1080ff5fc:
    func_0x000108100d3c();
  }
  else {
    if (*(long *)(lVar10 + 0x10) != 0) {
      do {
        func_0x000108100bd0();
      } while (extraout_w10_02 != 0);
    }
    func_0x000108100d1c(*(undefined8 *)(lVar10 + 0x140));
    if ((extraout_x8_05 & 1) == 0) goto LAB_1080ff5fc;
    func_0x000108108a08(&lStack_2a8,lVar10 + 0x1d8);
    if (lStack_2a8 == 0) {
      func_0x000108100d3c();
    }
    else {
      uStack_2b0 = func_0x000108100d04();
      fStack_2ac = param_2 + param_3;
      uStack_2b8 = param_4;
      FUN_10811fa78();
      FUN_10811fbfc(lStack_2a8);
      auVar14 = NEON_ext(auStack_2e0,auStack_2e0,8,1);
      uStack_2b8 = auVar14._0_8_;
      *(undefined8 *)(*(long *)(lStack_288 + 0x48) + 0x88) = uStack_2b8;
      lStack_2c8 = 0;
      FUN_1080ffb38(&uStack_2c0,&uStack_2b8,&lStack_2c8);
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      FUN_10811eae4(lStack_2a8,uStack_2c0,&uStack_2b8);
      func_0x0001080ffb74(&lStack_2d0,*(undefined8 *)(lStack_288 + 0x50),&uStack_2c0);
      if ((lStack_2d0 != 0) && (*(long *)(lStack_2d0 + 0x10) != 0)) {
        do {
          func_0x000108100bd0();
        } while (extraout_w10_03 != 0);
      }
      lStack_2c8 = lStack_2d0;
      func_0x00010b9a8f78(extraout_x8_04,&lStack_2c8);
      func_0x000104bddf04(lStack_2d0);
      func_0x000108100b28(lStack_2d0);
      func_0x0001078d4938(uStack_2c0);
    }
    func_0x0001078bee50(lStack_2a8);
  }
  func_0x0001080d289c(lVar10);
  func_0x00010b9a8a24(auStack_2a0);
LAB_1080ff62c:
  FUN_108100408(lStack_288);
  return;
}



/* Entry: 1080ff1a0; end: 1080ff37f;  */

void FUN_1080ff1a0(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  undefined8 param_5,undefined8 param_6,code **param_7)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  long lVar9;
  code **unaff_x22;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_210 [16];
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  float fStack_1dc;
  long lStack_1d8;
  undefined1 auStack_1d0 [24];
  long lStack_1b8;
  code **ppcStack_1b0;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_118;
  code **ppcStack_110;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  code **ppcStack_88;
  undefined8 uStack_68;
  
  ppcVar8 = param_7;
  func_0x000108100ba8();
  uStack_68 = extraout_x8;
  FUN_1080ff9ac(&pcStack_a0);
  if (pcStack_a0 == (code *)0x0) {
    func_0x000108100bf0();
  }
  else {
    dVar11 = (double)func_0x000108100d54(param_7);
    unaff_x22 = param_7;
    func_0x00010b9ac000(param_7,2);
    dVar12 = (double)func_0x00010b9ac024(param_7,3);
    ppcVar5 = param_7;
    func_0x00010b9ac000(param_7,4);
    ppcVar6 = param_7;
    func_0x00010b9abfc0(param_7,5);
    ppcVar8 = (code **)0x6;
    ppcVar7 = param_7;
    func_0x00010b9ac080(&pcStack_a8);
    if (pcStack_a8 == (code *)0x0) {
      ppcVar8 = (code **)&UNK_10f47b3a2;
      func_0x00010b9a0050(param_7[3]);
      func_0x000108100bf0();
    }
    else {
      func_0x000108100d80();
      if (lStack_b0 == 0) {
        func_0x000108100c10(param_7[3]);
        func_0x000108100bf0();
      }
      else {
        func_0x00010b8c2a44(&pcStack_b8);
        uVar10 = *(undefined8 *)(lStack_b0 + 0x110);
        if (*(long *)(pcStack_a0 + 0x10) != 0) {
          do {
            func_0x000108100bd0();
          } while (extraout_w10 != 0);
        }
        pcVar4 = pcStack_a8;
        fStack_d0 = (float)dVar11;
        param_3 = (float)dVar12;
        if (pcStack_a8 != (code *)0x0) {
          pcVar1 = pcStack_a8 + 8;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar3) {
              *(long *)pcVar1 = *(long *)pcVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_cc = SUB84(unaff_x22,0);
        uStack_c4 = SUB84(ppcVar5,0);
        uStack_c0 = SUB84(ppcVar6,0);
        unaff_x22 = &pcStack_98;
        pcStack_98 = FUN_1080ffe28;
        ppuStack_90 = &PTR_FUN_110a23100;
        fStack_c8 = param_3;
        func_0x000108100d34();
        *ppcVar7 = pcStack_a0;
        ppcVar7[1] = pcVar4;
        uStack_e0 = 0;
        uStack_d8 = 0;
        ppcVar7[3] = (code *)CONCAT44(uStack_c4,fStack_c8);
        ppcVar7[2] = (code *)CONCAT44(uStack_cc,fStack_d0);
        *(undefined4 *)(ppcVar7 + 4) = uStack_c0;
        ppcVar8 = &pcStack_b8;
        ppcStack_88 = ppcVar7;
        func_0x00010b94b6f8(uVar10,ppcVar8,&pcStack_98);
        func_0x000108100d68(ppuStack_90);
        func_0x0001080ffad0(&uStack_e0);
        func_0x000108100bf0();
        func_0x000105276914(pcStack_b8);
      }
      func_0x000108100dac();
    }
    func_0x000104bda3ac(pcStack_a8);
  }
  func_0x000108100d9c();
  func_0x000108100b34(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_1080ff380;
  ppcStack_110 = unaff_x22;
  uStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000108100ba8();
  uStack_118 = extraout_x8_00;
  FUN_1080ff9ac(&lStack_150);
  if (lStack_150 == 0) {
    func_0x000108100bf0();
  }
  else {
    func_0x00010b9ac080(&lStack_158,ppcVar8,1);
    if (lStack_158 == 0) {
      func_0x00010b9a0050(ppcVar8[3],&UNK_10f47b3cd);
      func_0x000108100bf0();
    }
    else {
      func_0x0001080ffa78(&lStack_160,lStack_150);
      if (lStack_160 == 0) {
        func_0x000108100c10(ppcVar8[3]);
        func_0x000108100bf0();
      }
      else {
        func_0x00010b8c2a44(&uStack_168);
        if (*(long *)(lStack_150 + 0x10) != 0) {
          do {
            func_0x000108100bd0();
          } while (extraout_w10_00 != 0);
        }
        uStack_130 = 0;
        if (lStack_158 != 0) {
          do {
            func_0x000108100e2c();
            uStack_130 = extraout_x8_01;
          } while (extraout_w11 != 0);
        }
        pcStack_148 = FUN_1080fffec;
        ppuStack_140 = &PTR_FUN_110a23120;
        ppcVar8 = &pcStack_148;
        lStack_138 = lStack_150;
        uStack_180 = 0;
        uStack_178 = 0;
        func_0x00010b94b6f8();
        func_0x000108100d68(ppuStack_140);
        func_0x0001080ffaec(&uStack_180);
        func_0x000108100bf0();
        func_0x000105276914(uStack_168);
      }
      func_0x000108100dac();
    }
    func_0x000104bda3ac(lStack_158);
  }
  func_0x000108100d9c();
  func_0x000108100b34(uStack_118);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_188 = 0x1080ff4c8;
  ppcStack_1b0 = ppcVar8;
  ppuStack_190 = &puStack_f0;
  FUN_1080ff9ac(&lStack_1b8);
  if (lStack_1b8 == 0) {
    *(undefined2 *)(extraout_x8_02 + 1) = 0;
    *extraout_x8_02 = 0;
    goto LAB_1080ff62c;
  }
  func_0x00010b9a8974(auStack_1d0,*(long *)(lStack_1b8 + 0x40) + 0x140);
  lVar9 = *(long *)(*(long *)(lStack_1b8 + 0x40) + 0xa0);
  if (lVar9 == 0) {
LAB_1080ff5fc:
    func_0x000108100d3c();
  }
  else {
    if (*(long *)(lVar9 + 0x10) != 0) {
      do {
        func_0x000108100bd0();
      } while (extraout_w10_01 != 0);
    }
    func_0x000108100d1c(*(undefined8 *)(lVar9 + 0x140));
    if ((extraout_x8_03 & 1) == 0) goto LAB_1080ff5fc;
    func_0x000108108a08(&lStack_1d8,lVar9 + 0x1d8);
    if (lStack_1d8 == 0) {
      func_0x000108100d3c();
    }
    else {
      uStack_1e0 = func_0x000108100d04();
      fStack_1dc = param_3 + param_4;
      uStack_1e8 = param_5;
      FUN_10811fa78();
      FUN_10811fbfc(lStack_1d8);
      auVar13 = NEON_ext(auStack_210,auStack_210,8,1);
      uStack_1e8 = auVar13._0_8_;
      *(undefined8 *)(*(long *)(lStack_1b8 + 0x48) + 0x88) = uStack_1e8;
      lStack_1f8 = 0;
      FUN_1080ffb38(&uStack_1f0,&uStack_1e8,&lStack_1f8);
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      FUN_10811eae4(lStack_1d8,uStack_1f0,&uStack_1e8);
      func_0x0001080ffb74(&lStack_200,*(undefined8 *)(lStack_1b8 + 0x50),&uStack_1f0);
      if ((lStack_200 != 0) && (*(long *)(lStack_200 + 0x10) != 0)) {
        do {
          func_0x000108100bd0();
        } while (extraout_w10_02 != 0);
      }
      lStack_1f8 = lStack_200;
      func_0x00010b9a8f78(extraout_x8_02,&lStack_1f8);
      func_0x000104bddf04(lStack_200);
      func_0x000108100b28(lStack_200);
      func_0x0001078d4938(uStack_1f0);
    }
    func_0x0001078bee50(lStack_1d8);
  }
  func_0x0001080d289c(lVar9);
  func_0x00010b9a8a24(auStack_1d0);
LAB_1080ff62c:
  FUN_108100408(lStack_1b8);
  return;
}



/* Entry: 1080ff380; end: 1080ff6bb;  */

void FUN_1080ff380(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  undefined8 param_5,undefined8 param_6,code **param_7)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  ulong extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_130 [16];
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  float fStack_fc;
  long lStack_f8;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  code **ppcStack_d0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  func_0x000108100ba8();
  uStack_38 = extraout_x8;
  FUN_1080ff9ac(&lStack_70);
  if (lStack_70 == 0) {
    func_0x000108100bf0();
  }
  else {
    func_0x00010b9ac080(&lStack_78,param_7,1);
    if (lStack_78 == 0) {
      func_0x00010b9a0050(param_7[3],&UNK_10f47b3cd);
      func_0x000108100bf0();
    }
    else {
      func_0x0001080ffa78(&lStack_80,lStack_70);
      if (lStack_80 == 0) {
        func_0x000108100c10(param_7[3]);
        func_0x000108100bf0();
      }
      else {
        func_0x00010b8c2a44(&uStack_88);
        if (*(long *)(lStack_70 + 0x10) != 0) {
          do {
            func_0x000108100bd0();
          } while (extraout_w10 != 0);
        }
        uStack_50 = 0;
        if (lStack_78 != 0) {
          do {
            func_0x000108100e2c();
            uStack_50 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        pcStack_68 = FUN_1080fffec;
        ppuStack_60 = &PTR_FUN_110a23120;
        param_7 = &pcStack_68;
        lStack_58 = lStack_70;
        uStack_a0 = 0;
        uStack_98 = 0;
        func_0x00010b94b6f8();
        func_0x000108100d68(ppuStack_60);
        func_0x0001080ffaec(&uStack_a0);
        func_0x000108100bf0();
        func_0x000105276914(uStack_88);
      }
      func_0x000108100dac();
    }
    func_0x000104bda3ac(lStack_78);
  }
  func_0x000108100d9c();
  func_0x000108100b34(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_a8 = 0x1080ff4c8;
  ppcStack_d0 = param_7;
  uStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_1080ff9ac(&lStack_d8);
  if (lStack_d8 == 0) {
    *(undefined2 *)(extraout_x8_01 + 1) = 0;
    *extraout_x8_01 = 0;
    goto LAB_1080ff62c;
  }
  func_0x00010b9a8974(auStack_f0,*(long *)(lStack_d8 + 0x40) + 0x140);
  lVar1 = *(long *)(*(long *)(lStack_d8 + 0x40) + 0xa0);
  if (lVar1 == 0) {
LAB_1080ff5fc:
    func_0x000108100d3c();
  }
  else {
    if (*(long *)(lVar1 + 0x10) != 0) {
      do {
        func_0x000108100bd0();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108100d1c(*(undefined8 *)(lVar1 + 0x140));
    if ((extraout_x8_02 & 1) == 0) goto LAB_1080ff5fc;
    func_0x000108108a08(&lStack_f8,lVar1 + 0x1d8);
    if (lStack_f8 == 0) {
      func_0x000108100d3c();
    }
    else {
      uStack_100 = func_0x000108100d04();
      fStack_fc = param_3 + param_4;
      uStack_108 = param_5;
      FUN_10811fa78();
      FUN_10811fbfc(lStack_f8);
      auVar2 = NEON_ext(auStack_130,auStack_130,8,1);
      uStack_108 = auVar2._0_8_;
      *(undefined8 *)(*(long *)(lStack_d8 + 0x48) + 0x88) = uStack_108;
      lStack_118 = 0;
      FUN_1080ffb38(&uStack_110,&uStack_108,&lStack_118);
      uStack_108 = 0;
      uStack_100 = 0;
      FUN_10811eae4(lStack_f8,uStack_110,&uStack_108);
      func_0x0001080ffb74(&lStack_120,*(undefined8 *)(lStack_d8 + 0x50),&uStack_110);
      if ((lStack_120 != 0) && (*(long *)(lStack_120 + 0x10) != 0)) {
        do {
          func_0x000108100bd0();
        } while (extraout_w10_01 != 0);
      }
      lStack_118 = lStack_120;
      func_0x00010b9a8f78(extraout_x8_01,&lStack_118);
      func_0x000104bddf04(lStack_120);
      func_0x000108100b28(lStack_120);
      func_0x0001078d4938(uStack_110);
    }
    func_0x0001078bee50(lStack_f8);
  }
  func_0x0001080d289c(lVar1);
  func_0x00010b9a8a24(auStack_f0);
LAB_1080ff62c:
  FUN_108100408(lStack_d8);
  return;
}



/* Entry: 1080ff6bc; end: 1080ff747;  */

void FUN_1080ff6bc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_28;
  
  func_0x0001080ffc50(&lStack_28);
  lVar5 = lStack_28;
  if (lStack_28 != 0) {
    lVar4 = *(long *)(lStack_28 + 0x20);
    if (lVar4 != 0) {
      *(undefined8 *)(lStack_28 + 0x20) = 0;
      plVar1 = (long *)(lVar4 + 8);
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
        func_0x000108100c40();
      }
    }
    lVar4 = *(long *)(lVar5 + 0x18);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      plVar1 = (long *)(lVar4 + 8);
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        func_0x000108100c40();
      }
    }
  }
  func_0x000108100bf0();
  if (lStack_28 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080ff748; end: 1080ff9a3;  */

void FUN_1080ff748(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar14;
  char *unaff_x22;
  undefined8 uVar15;
  char *unaff_x23;
  char *unaff_x24;
  undefined8 unaff_x25;
  long *plVar16;
  long unaff_x26;
  undefined8 *puVar17;
  undefined4 auStack_208 [2];
  undefined2 uStack_200;
  undefined8 uStack_1f8;
  undefined2 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_148;
  long lStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  char *pcStack_128;
  long *plStack_120;
  char *pcStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  undefined8 uStack_68;
  
  func_0x000108100ba8();
  uStack_68 = extraout_x8_02;
  func_0x0001080ffc50(&lStack_c0);
  if (lStack_c0 == 0) {
LAB_1080ff820:
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  else {
    unaff_x22 = (char *)(lStack_c0 + 0x20);
    if (*(long *)unaff_x22 == 0) {
      func_0x00010b9a0050(*(undefined8 *)(param_3 + 0x18),&UNK_10f47b3f5);
      goto LAB_1080ff820;
    }
    func_0x00010b9abfa4(param_3,1);
    FUN_1080fdd88(&lStack_c8);
    if (((lStack_c8 == 0) ||
        (pcVar10 = param_3, func_0x00010b9abfc0(param_3,2),
        (*(byte *)(*(long *)(param_3 + 0x18) + 8) & 1) == 0)) ||
       (pcVar11 = param_3, func_0x00010b9abfc0(param_3,3), unaff_x23 = pcVar10,
       (*(byte *)(*(long *)(param_3 + 0x18) + 8) & 1) == 0)) {
      pcVar10 = unaff_x23;
      *(undefined2 *)(param_1 + 1) = 0;
      *param_1 = 0;
    }
    else {
      lStack_90 = 0;
      if ((int)pcVar11 == 0) {
        func_0x000108100e18();
        FUN_108116870();
      }
      else {
        func_0x000108100e18();
        FUN_1081172cc();
      }
      FUN_1080ffcc4(&lStack_90,&uStack_b8);
      FUN_1081002fc(&uStack_b8);
      in_ZR = lStack_90 == 1;
      if ((bool)in_ZR) {
        uStack_b8 = 0;
        uStack_b0 = 0;
        unaff_x25 = 6;
        param_3 = "x";
        unaff_x22 = "y";
        pcVar10 = "width";
        unaff_x24 = "height";
        for (unaff_x26 = lStack_80; in_ZR = unaff_x26 == lStack_78, !(bool)in_ZR;
            unaff_x26 = unaff_x26 + 0x10) {
          uStack_d0 = 0;
          uStack_d8 = 0;
          func_0x000108100bb8();
          func_0x00010b9aa86c();
          func_0x000108100c54();
          func_0x000108100bb8();
          func_0x00010b9aa86c();
          func_0x000108100c54();
          func_0x000108100bb8();
          func_0x00010b9aa86c();
          func_0x000108100c54();
          func_0x000108100bb8();
          func_0x00010b9aa86c();
          func_0x000108100c54();
          func_0x00010b9abec8(&uStack_b8,&uStack_d8);
          func_0x00010b9a8d98(&uStack_d8);
        }
        func_0x00010b9abf6c(&uStack_d8,&uStack_b8);
        func_0x00010b9a8f84(param_1,&uStack_d8);
        func_0x000104bddf60(uStack_d8);
        func_0x000104bddf60(uStack_b8);
      }
      else {
        func_0x00010b99ff08(*(undefined8 *)(param_3 + 0x18),auStack_88);
        *(undefined2 *)(param_1 + 1) = 0;
        *param_1 = 0;
      }
      FUN_1081002fc(&lStack_90);
    }
    FUN_1080cc5cc(lStack_c8);
    unaff_x23 = pcVar10;
  }
  lVar13 = lStack_c0;
  func_0x000108100b28();
  func_0x000108100b34(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar12 = (long *)(lVar13 + -0x18);
  lStack_108 = lStack_c0;
  pcStack_f8 = FUN_1080ff9a4;
  *(undefined2 *)(extraout_x8_03 + 1) = 0;
  *extraout_x8_03 = 0;
  puStack_110 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_1080fea8c(plVar12,extraout_x8_03,&UNK_10f47b295,FUN_1080feb60,0);
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  plVar4 = plVar12;
  puVar8 = extraout_x8_03;
  lStack_140 = unaff_x26;
  uStack_138 = unaff_x25;
  pcStack_130 = unaff_x24;
  pcStack_128 = unaff_x23;
  plStack_120 = (long *)unaff_x22;
  pcStack_118 = param_3;
  func_0x000108100d34();
  plVar7 = plVar4 + 1;
  *plVar7 = 1;
  *plVar4 = (long)&PTR_DAT_110a23168;
  if ((plVar12 == (long *)0x0) ||
     (plVar5 = plVar12, func_0x00010b9a5818(), ((ulong)plVar5 & 1) != 0)) {
    plVar4[2] = (long)plVar12;
    plVar4[3] = (long)FUN_1080ff748;
    plVar4[4] = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_148 = plVar4;
    func_0x00010b9ac308(extraout_x8_03,&UNK_10f47b325,&plStack_148);
    func_0x000104bda3ac(plStack_148);
    do {
      lVar13 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    return;
  }
  func_0x00010b9a5890();
  plVar4 = plVar5;
  func_0x00010b8c2a68();
  if ((plVar4 == (long *)0x0) || (plVar4[0x23] == 0)) {
    func_0x00010b9a0050(puVar8[3],&UNK_10f47b331);
LAB_1080fec88:
    func_0x000108100bf0();
    return;
  }
  puVar6 = puVar8;
  func_0x00010b9abfc0(puVar8,0);
  if (((*(byte *)(puVar8[3] + 8) & 1) == 0) ||
     (func_0x00010b9abfc0(puVar8,1), (*(byte *)(puVar8[3] + 8) & 1) == 0)) goto LAB_1080fec88;
  plStack_1d0 = (long *)0x0;
  if (2 < (ulong)puVar8[2]) {
    func_0x00010b9ac080(&puStack_1c0,puVar8,2);
    puVar8 = puStack_1c0;
    if (puStack_1c0 == (undefined8 *)0x0) {
      func_0x000108100bf0();
    }
    else {
      plVar7 = (long *)0x18;
      __Znwm();
      plVar12 = plStack_1d0;
      puStack_1c0 = (undefined8 *)0x0;
      plVar16 = plVar7 + 1;
      *plVar16 = 1;
      *plVar7 = (long)&PTR_DAT_110a231e0;
      plVar7[2] = (long)puVar8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_1d0 = plVar7;
      func_0x000108100414(plVar12);
      func_0x000108100414(0);
      do {
        lVar13 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
    func_0x000104bda3ac(puStack_1c0);
    if (puVar8 == (undefined8 *)0x0) goto LAB_1080fefb8;
  }
  lVar13 = plVar4[0x23];
  uVar15 = *(undefined8 *)(lVar13 + 0x78);
  uStack_1e0 = 0;
  (*(code *)plVar5[10])(&puStack_1c0,plVar5 + 10);
  uStack_1f8 = 0;
  func_0x00010b8c3e6c(&lStack_1d8,uVar15,&uStack_1e0,&puStack_1c0,0,&uStack_1f8);
  func_0x0001003a8cb8(uStack_1f8);
  FUN_1080d5b98(puStack_1c0);
  FUN_108100600(uStack_1e0);
  func_0x00010b8d7868(&lStack_1e8,lVar13 + 0x80,&lStack_1d8,2);
  func_0x00010b8d2ddc(lStack_1e8);
  func_0x00010b8d366c(lStack_1e8,1);
  func_0x00010b8d48fc(lStack_1e8 + 0xb8,&plStack_1d0);
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  auStack_208[0] = *(undefined4 *)(lStack_1d8 + 0x18);
  uStack_200 = 4;
  func_0x00010b9aa86c(&uStack_1f8,"contextId",9,auStack_208);
  uVar1 = *(undefined4 *)(lStack_1d8 + 0x18);
  uVar15 = *(undefined8 *)(lVar13 + 0x78);
  puVar8 = (undefined8 *)0x78;
  __Znwm();
  plVar4 = puVar8 + 1;
  *plVar4 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_110a23258;
  puVar14 = puVar8 + 3;
  *puVar14 = &PTR_DAT_110a232a8;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  puVar8[7] = uVar15;
  *(undefined1 *)(puVar8 + 8) = 0;
  FUN_1080d5a68(puVar8 + 9,lVar13);
  lVar13 = lStack_1e8;
  if ((lStack_1e8 != 0) && (*(long *)(lStack_1e8 + 0x10) != 0)) {
    do {
      func_0x000108100e3c();
      lVar13 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  puVar8[0xb] = lVar13;
  puVar9 = (undefined8 *)0xa8;
  __Znwm();
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110a232e8;
  puVar17 = puVar9 + 3;
  *puVar17 = &PTR_DAT_110a23338;
  puVar9[5] = 0;
  *(char *)(puVar9 + 6) = (char)puVar6;
  puVar9[8] = 0;
  puVar9[7] = 0;
  puVar9[10] = 0;
  puVar9[9] = 0;
  puVar9[0xc] = 0;
  puVar9[0xb] = 0;
  puVar9[0xe] = 0;
  puVar9[0xd] = 0;
  puVar9[0x10] = 0;
  puVar9[0xf] = 0;
  *(undefined8 *)((long)puVar9 + 0x8c) = 0;
  *(undefined8 *)((long)puVar9 + 0x84) = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[1] = 0;
  puVar9[4] = 0;
  puStack_1c0 = puVar17;
  puStack_1b8 = puVar9;
  do {
    func_0x000108100bd0();
  } while (extraout_w10 != 0);
  func_0x0001003a8180();
  func_0x0001003a824c(&puStack_1c0);
  puVar8[0xc] = puVar17;
  uVar15 = 0x128;
  __Znwm();
  FUN_10811668c();
  puVar8[0xd] = uVar15;
  *(char *)(puVar8 + 0xe) = (char)puVar6;
  func_0x00010b8d2d9c(&puStack_1c8,puVar8[0xb]);
  func_0x000108108a08(&puStack_1c0,&puStack_1c8);
  FUN_1080c5c80(puStack_1c8);
  if (puStack_1c0 != (undefined8 *)0x0) {
    puStack_1c8 = (undefined8 *)puVar8[0xc];
    if ((puStack_1c8 != (undefined8 *)0x0) && (puStack_1c8[2] != 0)) {
      do {
        func_0x000108100e3c();
        puStack_1c8 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    FUN_10811f3cc();
    func_0x0001080ec798(puStack_1c8);
  }
  func_0x0001078bee50(puStack_1c0);
  if ((puVar8[5] == 0) || (*(long *)(puVar8[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_1c0 = puVar14;
    puStack_1b8 = puVar8;
    func_0x0001003a8180(puVar8 + 4,&puStack_1c0);
    func_0x0001003a824c(&puStack_1c0);
    if (puVar8[5] != 0) goto LAB_1080fef48;
  }
  else {
LAB_1080fef48:
    do {
      func_0x000108100bd0();
    } while (extraout_w10_00 != 0);
  }
  puStack_1c8 = puVar14;
  func_0x00010b9a8f78(&puStack_1c0,&puStack_1c8);
  func_0x00010b9aa86c(&uStack_1f8,"native",6,&puStack_1c0);
  func_0x00010b9a8f04(extraout_x8,&uStack_1f8);
  func_0x00010b9a8d98(&puStack_1c0);
  func_0x000104bddf04(puVar14);
  func_0x000108100408(puVar14);
  func_0x000108100c54();
  func_0x00010b9a8d98(&uStack_1f8);
  func_0x0001080d26d8(lStack_1e8);
  func_0x000105276914(lStack_1d8);
LAB_1080fefb8:
  func_0x000108100414(plStack_1d0);
  return;
}



/* Entry: 1080ff9a4; end: 1080ff9ab;  */

void FUN_1080ff9a4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined4 auStack_118 [2];
  undefined2 uStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long *plStack_58;
  
  plVar10 = (long *)(param_2 + -0x18);
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  FUN_1080fea8c(plVar10,param_1,&UNK_10f47b295,FUN_1080feb60,0);
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  func_0x000108100b48();
  plVar4 = plVar10;
  puVar8 = param_1;
  func_0x000108100d34();
  plVar7 = plVar4 + 1;
  *plVar7 = 1;
  *plVar4 = (long)&PTR_DAT_110a23168;
  if ((plVar10 == (long *)0x0) ||
     (plVar5 = plVar10, func_0x00010b9a5818(), ((ulong)plVar5 & 1) != 0)) {
    plVar4[2] = (long)plVar10;
    plVar4[3] = (long)FUN_1080ff748;
    plVar4[4] = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = plVar4;
    func_0x00010b9ac308(param_1,&UNK_10f47b325,&plStack_58);
    func_0x000104bda3ac(plStack_58);
    do {
      lVar11 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    return;
  }
  func_0x00010b9a5890();
  plVar4 = plVar5;
  func_0x00010b8c2a68();
  if ((plVar4 == (long *)0x0) || (plVar4[0x23] == 0)) {
    func_0x00010b9a0050(puVar8[3],&UNK_10f47b331);
LAB_1080fec88:
    func_0x000108100bf0();
    return;
  }
  puVar6 = puVar8;
  func_0x00010b9abfc0(puVar8,0);
  if (((*(byte *)(puVar8[3] + 8) & 1) == 0) ||
     (func_0x00010b9abfc0(puVar8,1), (*(byte *)(puVar8[3] + 8) & 1) == 0)) goto LAB_1080fec88;
  plStack_e0 = (long *)0x0;
  if (2 < (ulong)puVar8[2]) {
    func_0x00010b9ac080(&puStack_d0,puVar8,2);
    puVar8 = puStack_d0;
    if (puStack_d0 == (undefined8 *)0x0) {
      func_0x000108100bf0();
    }
    else {
      plVar7 = (long *)0x18;
      __Znwm();
      plVar10 = plStack_e0;
      puStack_d0 = (undefined8 *)0x0;
      plVar14 = plVar7 + 1;
      *plVar14 = 1;
      *plVar7 = (long)&PTR_DAT_110a231e0;
      plVar7[2] = (long)puVar8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_e0 = plVar7;
      func_0x000108100414(plVar10);
      func_0x000108100414(0);
      do {
        lVar11 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
    func_0x000104bda3ac(puStack_d0);
    if (puVar8 == (undefined8 *)0x0) goto LAB_1080fefb8;
  }
  lVar11 = plVar4[0x23];
  uVar13 = *(undefined8 *)(lVar11 + 0x78);
  uStack_f0 = 0;
  (*(code *)plVar5[10])(&puStack_d0,plVar5 + 10);
  uStack_108 = 0;
  func_0x00010b8c3e6c(&lStack_e8,uVar13,&uStack_f0,&puStack_d0,0,&uStack_108);
  func_0x0001003a8cb8(uStack_108);
  FUN_1080d5b98(puStack_d0);
  FUN_108100600(uStack_f0);
  func_0x00010b8d7868(&lStack_f8,lVar11 + 0x80,&lStack_e8,2);
  func_0x00010b8d2ddc(lStack_f8);
  func_0x00010b8d366c(lStack_f8,1);
  func_0x00010b8d48fc(lStack_f8 + 0xb8,&plStack_e0);
  uStack_100 = 0;
  uStack_108 = 0;
  auStack_118[0] = *(undefined4 *)(lStack_e8 + 0x18);
  uStack_110 = 4;
  func_0x00010b9aa86c(&uStack_108,"contextId",9,auStack_118);
  uVar1 = *(undefined4 *)(lStack_e8 + 0x18);
  uVar13 = *(undefined8 *)(lVar11 + 0x78);
  puVar8 = (undefined8 *)0x78;
  __Znwm();
  plVar4 = puVar8 + 1;
  *plVar4 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_DAT_110a23258;
  puVar12 = puVar8 + 3;
  *puVar12 = &PTR_DAT_110a232a8;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  puVar8[7] = uVar13;
  *(undefined1 *)(puVar8 + 8) = 0;
  FUN_1080d5a68(puVar8 + 9,lVar11);
  lVar11 = lStack_f8;
  if ((lStack_f8 != 0) && (*(long *)(lStack_f8 + 0x10) != 0)) {
    do {
      func_0x000108100e3c();
      lVar11 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  puVar8[0xb] = lVar11;
  puVar9 = (undefined8 *)0xa8;
  __Znwm();
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110a232e8;
  puVar15 = puVar9 + 3;
  *puVar15 = &PTR_DAT_110a23338;
  puVar9[5] = 0;
  *(char *)(puVar9 + 6) = (char)puVar6;
  puVar9[8] = 0;
  puVar9[7] = 0;
  puVar9[10] = 0;
  puVar9[9] = 0;
  puVar9[0xc] = 0;
  puVar9[0xb] = 0;
  puVar9[0xe] = 0;
  puVar9[0xd] = 0;
  puVar9[0x10] = 0;
  puVar9[0xf] = 0;
  *(undefined8 *)((long)puVar9 + 0x8c) = 0;
  *(undefined8 *)((long)puVar9 + 0x84) = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[1] = 0;
  puVar9[4] = 0;
  puStack_d0 = puVar15;
  puStack_c8 = puVar9;
  do {
    func_0x000108100bd0();
  } while (extraout_w10 != 0);
  func_0x0001003a8180();
  func_0x0001003a824c(&puStack_d0);
  puVar8[0xc] = puVar15;
  uVar13 = 0x128;
  __Znwm();
  FUN_10811668c();
  puVar8[0xd] = uVar13;
  *(char *)(puVar8 + 0xe) = (char)puVar6;
  func_0x00010b8d2d9c(&puStack_d8,puVar8[0xb]);
  func_0x000108108a08(&puStack_d0,&puStack_d8);
  FUN_1080c5c80(puStack_d8);
  if (puStack_d0 != (undefined8 *)0x0) {
    puStack_d8 = (undefined8 *)puVar8[0xc];
    if ((puStack_d8 != (undefined8 *)0x0) && (puStack_d8[2] != 0)) {
      do {
        func_0x000108100e3c();
        puStack_d8 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    FUN_10811f3cc();
    func_0x0001080ec798(puStack_d8);
  }
  func_0x0001078bee50(puStack_d0);
  if ((puVar8[5] == 0) || (*(long *)(puVar8[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_d0 = puVar12;
    puStack_c8 = puVar8;
    func_0x0001003a8180(puVar8 + 4,&puStack_d0);
    func_0x0001003a824c(&puStack_d0);
    if (puVar8[5] != 0) goto LAB_1080fef48;
  }
  else {
LAB_1080fef48:
    do {
      func_0x000108100bd0();
    } while (extraout_w10_00 != 0);
  }
  puStack_d8 = puVar12;
  func_0x00010b9a8f78(&puStack_d0,&puStack_d8);
  func_0x00010b9aa86c(&uStack_108,"native",6,&puStack_d0);
  func_0x00010b9a8f04(extraout_x8,&uStack_108);
  func_0x00010b9a8d98(&puStack_d0);
  func_0x000104bddf04(puVar12);
  func_0x000108100408(puVar12);
  func_0x000108100c54();
  func_0x00010b9a8d98(&uStack_108);
  func_0x0001080d26d8(lStack_f8);
  func_0x000105276914(lStack_e8);
LAB_1080fefb8:
  func_0x000108100414(plStack_e0);
  return;
}



/* Entry: 1080ff9ac; end: 1080ffa1f;  */

void FUN_1080ff9ac(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long alStack_70 [2];
  ulong uStack_38;
  
  func_0x000108100c5c();
  func_0x000108100cbc();
  if (uStack_38 == 0) {
    *unaff_x19 = 0;
  }
  else {
    uVar1 = uStack_38;
    ___dynamic_cast(uStack_38,&PTR_DAT_110d7ebe8,&PTR_DAT_110a230c8,0);
    if (uVar1 == 0) {
      func_0x000108100cd4();
    }
    else {
      uVar2 = uVar1;
      func_0x00010b9a5818();
      if ((uVar2 & 1) == 0) {
        func_0x00010b9a5890();
        *(undefined1 *)(uVar2 + 0x28) = 1;
        FUN_1080d3dcc(alStack_70,uVar2 + 0x30);
        if (alStack_70[0] != 0) {
          func_0x00010b8c3cbc(uVar2);
          func_0x00010b941c3c(alStack_70[0],*(undefined8 *)(uVar2 + 0x40));
        }
        func_0x0001080d2668(alStack_70);
        return;
      }
      *unaff_x19 = uVar1;
    }
  }
  func_0x000104bddf04(uStack_38);
  return;
}



/* Entry: 1080ffa20; end: 1080ffb37;  */

void FUN_1080ffa20(long param_1)

{
  long alStack_30 [2];
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_1080d3dcc(alStack_30,param_1 + 0x30);
  if (alStack_30[0] != 0) {
    func_0x00010b8c3cbc(param_1);
    func_0x00010b941c3c(alStack_30[0],*(undefined8 *)(param_1 + 0x40));
  }
  func_0x0001080d2668(alStack_30);
  return;
}



/* Entry: 1080ffb38; end: 1080ffcc3;  */

void FUN_1080ffb38(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x98;
  __Znwm();
  FUN_10810ecf0(*param_2,param_2[1],*param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1080ffcc4; end: 1080ffdab;  */

undefined8 * FUN_1080ffcc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_1081002fc(param_1);
    *param_1 = *param_2;
    uVar2 = param_2[2];
    uVar1 = param_2[1];
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_1[1] = uVar1;
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 1080ffdac; end: 1080ffe27;  */

undefined8 FUN_1080ffdac(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108100c1c(param_1 + 8);
  func_0x000108100e0c();
  FUN_108100408();
  return unaff_x19;
}



/* Entry: 1080ffe28; end: 1080fff3b;  */

void FUN_1080ffe28(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar1;
  
  func_0x000108100ba8();
  plVar1 = *(long **)(param_1 + 0x10);
  func_0x000108100cf4(*plVar1);
  if ((bool)in_ZR) {
    func_0x000108100ca0();
    func_0x000108100b58();
    func_0x000108100c84();
    do {
      func_0x000108100c98();
      func_0x000108100dec();
    } while (!(bool)in_ZR);
  }
  else {
    param_1 = *(long *)(*plVar1 + 0x40);
    if (param_1 == 0) {
      func_0x000108100ca0();
      func_0x000108100b58();
      func_0x000108100c84();
      do {
        func_0x000108100c4c();
        func_0x000108100c8c();
      } while (!(bool)in_ZR);
    }
    else {
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          func_0x000108100bd0();
        } while (extraout_w10 != 0);
      }
      func_0x00010b8d35b8(param_1,*(undefined4 *)((long)plVar1 + 0x14),
                          *(undefined4 *)((long)plVar1 + 0x1c),(int)plVar1[4]);
      func_0x000108100b58(plVar1[1]);
      func_0x000108100c84();
      do {
        func_0x000108100c4c();
        func_0x000108100c8c();
      } while (!(bool)in_ZR);
    }
    func_0x0001080d26d8();
  }
  func_0x000108100b34(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    func_0x0001080ffad0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080fff3c; end: 1080fff5b;  */

void FUN_1080fff3c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001080ffad0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080fff5c; end: 1080fff73;  */

void FUN_1080fff5c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1080fff74; end: 1080fffeb;  */

void FUN_1080fff74(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = (long)&PTR_FUN_110a23100;
  plVar1 = param_1;
  func_0x000108100d34();
  lVar2 = *plVar3;
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x000108100e3c();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *plVar1 = lVar2;
  lVar2 = 0;
  if (plVar3[1] != 0) {
    do {
      func_0x000108100e2c();
      lVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  plVar1[1] = lVar2;
  lVar4 = plVar3[3];
  lVar2 = plVar3[2];
  *(int *)(plVar1 + 4) = (int)plVar3[4];
  plVar1[3] = lVar4;
  plVar1[2] = lVar2;
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1080fffec; end: 10810025f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_1080fffec(undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,long param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auStack_e0 [16];
  long lStack_c8;
  long alStack_c0 [2];
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  long alStack_a0 [4];
  undefined8 uStack_80;
  uint uStack_78;
  float fStack_74;
  double dStack_70;
  undefined2 uStack_68;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  lVar1 = param_5;
  func_0x000108100ba8();
  uStack_48 = extraout_x8;
  func_0x000108100cf4(*(undefined8 *)(lVar1 + 0x10));
  if ((bool)in_ZR) {
    uStack_78 = uStack_78 & 0xffff0000;
    uStack_80 = 0;
    uStack_68 = 6;
    dStack_70 = 0.0;
    puVar4 = &uStack_80;
    func_0x000108100b9c(auStack_60,*(undefined8 *)(param_5 + 0x18));
    puVar3 = auStack_60;
    func_0x000104bda914(puVar3);
    do {
      func_0x000108100c98();
      func_0x000108100dec();
    } while (!(bool)in_ZR);
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x00010b9a8974(auStack_60,*(long *)(*(long *)(param_5 + 0x10) + 0x40) + 0x140);
    fVar7 = (float)param_2;
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_5 + 0x10) + 0x40) + 0xa0);
    if (puVar4 == (undefined8 *)0x0) {
      func_0x000108100b6c();
      func_0x000108100ccc();
      do {
        func_0x000108100c4c();
        func_0x000108100c8c();
      } while (!(bool)in_ZR);
    }
    else {
      if (puVar4[2] != 0) {
        do {
          func_0x000108100bd0();
          fVar7 = (float)param_2;
        } while (extraout_w10 != 0);
      }
      func_0x000108100d1c(puVar4[0x28]);
      if ((extraout_x8_00 & 1) == 0) {
        func_0x000108100b6c();
        func_0x000108100ccc();
        do {
          func_0x000108100c4c();
          func_0x000108100c8c();
        } while (!(bool)in_ZR);
      }
      else {
        func_0x000108108a08(alStack_a0,puVar4 + 0x3b);
        if (alStack_a0[0] == 0) {
          func_0x000108100b6c();
          func_0x000108100ccc();
          do {
            func_0x000108100c4c();
            func_0x000108100c8c();
          } while (!(bool)in_ZR);
        }
        else {
          uStack_78 = func_0x000108100d04();
          fStack_74 = fVar7 + param_3;
          uStack_80 = param_4;
          FUN_10811fa78();
          FUN_10811fbfc(alStack_a0[0]);
          auVar6 = NEON_ext(auStack_e0,auStack_e0,8,1);
          uStack_80 = auVar6._0_8_;
          *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x10) + 0x48) + 0x88) = uStack_80;
          alStack_a0[1] = 0;
          FUN_1080ffb38(&uStack_a8,&uStack_80,alStack_a0 + 1);
          alStack_c0[1] = 0;
          uStack_b0 = 0;
          lVar2 = alStack_a0[0];
          FUN_10811eae4(alStack_a0[0],uStack_a8,alStack_c0 + 1);
          __ZNSt3__16chrono12steady_clock3nowEv();
          func_0x0001080ffb74(alStack_c0,*(undefined8 *)(*(long *)(param_5 + 0x10) + 0x50),
                              &uStack_a8);
          uVar5 = *(undefined8 *)(param_5 + 0x18);
          if ((alStack_c0[0] != 0) && (*(long *)(alStack_c0[0] + 0x10) != 0)) {
            do {
              func_0x000108100bd0();
            } while (extraout_w10_00 != 0);
          }
          lStack_c8 = alStack_c0[0];
          func_0x00010b9a8f78(&uStack_80,&lStack_c8);
          uStack_68 = 6;
          dStack_70 = (double)(lVar2 - lVar1) / 1000000.0;
          func_0x000108100b9c(alStack_a0 + 1,uVar5);
          func_0x000108100ccc();
          do {
            func_0x00010b9a8d98(&dStack_70);
            func_0x000108100c8c();
          } while (!(bool)in_ZR);
          func_0x000104bddf04(alStack_c0[0]);
          func_0x000108100b28(alStack_c0[0]);
          func_0x0001078d4938(uStack_a8);
        }
        func_0x0001078bee50(alStack_a0[0]);
      }
    }
    func_0x0001080d289c(puVar4);
    puVar3 = auStack_60;
    func_0x00010b9a8a24(puVar3);
  }
  func_0x000108100b34(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108100c1c(puVar3 + 1);
    func_0x000108100e0c(puVar4);
    FUN_108100408();
    return puVar4;
  }
  return puVar3;
}



/* Entry: 108100260; end: 1081002db;  */

undefined8 FUN_108100260(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108100c1c(param_1 + 8);
  func_0x000108100e0c();
  FUN_108100408();
  return unaff_x19;
}



/* Entry: 1081002dc; end: 1081002fb;  */

void FUN_1081002dc(void)

{
  func_0x000108100e0c();
  func_0x0001080d26d8();
  return;
}



/* Entry: 1081002fc; end: 108100323;  */

long * FUN_1081002fc(long *param_1)

{
  long *unaff_x19;
  long *plStack_28;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    plStack_28 = param_1 + 2;
    FUN_108100350(&plStack_28);
    return param_1 + 2;
  }
  return param_1;
}



/* Entry: 108100324; end: 10810034f;  */

undefined8 FUN_108100324(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_108100350(&uStack_28);
  return param_1;
}



/* Entry: 108100350; end: 10810036b;  */

void FUN_108100350(undefined8 *param_1)

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



/* Entry: 10810036c; end: 10810037f;  */

void FUN_10810036c(void)

{
  FUN_1081003ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108100380; end: 1081003ab;  */

void FUN_108100380(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18);
  if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x10) + ((long)*(ulong *)(param_1 + 0x20) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000108100398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1081003ac; end: 1081003db;  */

undefined8 * FUN_1081003ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a23168;
  FUN_1081003dc(param_1[2]);
  return param_1;
}



/* Entry: 1081003dc; end: 1081003e7;  */

void FUN_1081003dc(long param_1)

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



/* Entry: 1081003e8; end: 108100407;  */

void FUN_1081003e8(void)

{
  func_0x000108100e0c();
  FUN_108100408();
  return;
}



/* Entry: 108100408; end: 10810043b;  */

void FUN_108100408(long param_1)

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



/* Entry: 10810043c; end: 10810044f;  */

void FUN_10810043c(void)

{
  func_0x0001081005d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108100450; end: 1081005ff;  */

undefined8 * FUN_108100450(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined4 uStack_120;
  undefined2 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  undefined4 auStack_c0 [4];
  undefined4 uStack_b0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined8 uStack_28;
  
  func_0x000108100ba8();
  func_0x000108100df8();
  auStack_60[0] = 1;
  uStack_50 = (undefined4)param_2;
  func_0x000108100b58();
  func_0x000108100c84();
  do {
    func_0x000108100c98();
    func_0x000108100dec();
  } while (!(bool)in_ZR);
  func_0x000108100b34(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_80 = 0x10;
    uStack_68 = 0x1081004b0;
    puStack_78 = (undefined1 *)auStack_60;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x000108100ba8();
    func_0x000108100df8();
    auStack_c0[0] = 2;
    uStack_b0 = (undefined4)param_2;
    func_0x000108100b58();
    func_0x000108100c84();
    do {
      func_0x000108100c98();
      func_0x000108100dec();
      uVar3 = (undefined4)param_2;
    } while (!(bool)in_ZR);
    func_0x000108100b34(uStack_88);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_e0 = 0x10;
      uStack_c8 = 0x108100510;
      puStack_d8 = (undefined1 *)auStack_c0;
      ppuStack_d0 = &puStack_70;
      func_0x000108100ba8();
      uVar4 = param_1[2];
      uStack_128 = 4;
      uStack_130._0_4_ = 3;
      uStack_118 = 4;
      uStack_120 = uVar3;
      uStack_e8 = extraout_x8;
      if (*(char *)(param_4 + 8) == '\x01') {
        func_0x0001080dcf80(param_4);
        func_0x00010b9a8e18(&uStack_110,param_4);
      }
      else {
        uStack_108 = 1;
        uStack_110 = 0;
      }
      func_0x000104bda910(auStack_100,uVar4,0,&uStack_130,3);
      func_0x000104bda914(auStack_100);
      lVar5 = 0x20;
      do {
        puVar2 = (undefined8 *)((long)&uStack_130 + lVar5);
        func_0x00010b9a8d98();
        lVar5 = lVar5 + -0x10;
        bVar1 = lVar5 == -0x10;
      } while (!bVar1);
      func_0x000108100b34(uStack_e8);
      if (!bVar1) {
        ___stack_chk_fail();
        *puVar2 = &PTR_DAT_110a231e0;
        func_0x000104bda388(puVar2 + 2);
        return puVar2;
      }
      return puVar2;
    }
  }
  return param_1;
}



/* Entry: 108100600; end: 108100627;  */

void FUN_108100600(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108100de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108100628; end: 10810063b;  */

void FUN_108100628(void)

{
  FUN_108100a34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10810063c; end: 108100647;  */

void FUN_10810063c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108100c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108100648; end: 10810065b;  */

void FUN_108100648(void)

{
  FUN_1081009a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10810065c; end: 10810065f;  */

void FUN_10810065c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a232e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108100660; end: 108100673;  */

void FUN_108100660(void)

{
  FUN_108100998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108100674; end: 10810067f;  */

void FUN_108100674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108100c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108100680; end: 108100693;  */

void FUN_108100680(void)

{
  FUN_1081006e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


