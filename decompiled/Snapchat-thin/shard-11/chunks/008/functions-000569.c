/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10897bf04; end: 10897bf4b;  */

void FUN_10897bf04(undefined8 *param_1,long param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  uVar2 = *param_3;
  puVar1[2] = uVar2;
  *puVar1 = 0;
  puVar1[1] = uVar2 & 0xffffffff;
  return;
}



/* Entry: 10897bf4c; end: 10897bf9f;  */

void FUN_10897bf4c(long param_1)

{
  func_0x000107c28148(param_1 + 0x18);
  FUN_1089a3c0c();
  func_0x00010897c51c();
  func_0x00010897c640();
  func_0x00010897c9d0();
  func_0x00010897c678();
  return;
}



/* Entry: 10897bfa0; end: 10897c047;  */

void FUN_10897bfa0(void)

{
  return;
}



/* Entry: 10897c048; end: 10897c0bf;  */

void FUN_10897c048(long param_1)

{
  code *extraout_x8;
  
  func_0x000107c28148(param_1 + 0x10);
  FUN_1089a3c0c();
  func_0x00010897c51c();
  func_0x00010897c640();
  (*extraout_x8)();
  func_0x00010897c678();
  return;
}



/* Entry: 10897c0c0; end: 10897c0cf;  */

void FUN_10897c0c0(void)

{
  return;
}



/* Entry: 10897c0d0; end: 10897c0f3;  */

void FUN_10897c0d0(long param_1)

{
  func_0x00010897c5f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10897c0f4; end: 10897cb1f;  */

void FUN_10897c0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long in_x9;
  long in_x10;
  
                    /* WARNING: Could not recover jumptable at 0x00010897c108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x10 + in_x9 * 8))(param_5,param_2,param_3,param_1);
  return;
}



/* Entry: 10897cb20; end: 10897cb77;  */

void FUN_10897cb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [32];
  
  FUN_10897cb78(auStack_40);
  func_0x0001072a02ac(param_1,auStack_40,param_4);
  func_0x000107c279a4(auStack_40);
  return;
}



/* Entry: 10897cb78; end: 10897cbdb;  */

void FUN_10897cb78(undefined1 *param_1,long param_2)

{
  func_0x000100ab9b18();
  if (param_2 != 0) {
    func_0x000107c60c94(param_1,param_2 + 0x28);
    param_1[0x18] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10897cbdc; end: 10897cc9f;  */

undefined * FUN_10897cbdc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auStack_70 [24];
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar1 = &PTR_DAT_110aa1670;
  if (param_3 == 0) {
    ppuVar1 = &PTR_DAT_110aa1680;
  }
  puStack_38 = ppuVar1[1];
  puStack_40 = *ppuVar1;
  func_0x000107c27958(auStack_70,&puStack_40);
  FUN_10897cb20(&ppuStack_58,param_1,param_2,auStack_70);
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppuStack_58 = &ppuStack_58;
  }
  puVar2 = &DAT_10f4edb20;
  func_0x000107c27944(&DAT_10f4edb20,1,ppuStack_58,uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  return puVar2;
}



/* Entry: 10897cca0; end: 10897cd63;  */

ulong FUN_10897cca0(void)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_54;
  undefined8 **ppuStack_50;
  long lStack_48;
  char cStack_39;
  char cStack_38;
  
  FUN_10897cb78(&ppuStack_50);
  if (cStack_38 == '\x01') {
    if ((long)cStack_39 < 0) {
      if (lStack_48 == 0) goto LAB_10897cd24;
    }
    else {
      if (cStack_39 == '\0') goto LAB_10897cd24;
      ppuStack_50 = &ppuStack_50;
      lStack_48 = (long)cStack_39;
    }
    uStack_54 = 0;
    uVar2 = (long)ppuStack_50 + lStack_48;
    FUN_10897cd64(ppuStack_50,uVar2,&uStack_54);
    bVar1 = (uVar2 & 0xffffffff) != 0x16;
    uVar4 = 0;
    if (bVar1) {
      uVar4 = uStack_54 & 0xffffff00;
    }
    uVar3 = 0;
    if (bVar1) {
      uVar3 = uStack_54 & 0xff;
    }
    uVar2 = 0;
    if (bVar1) {
      uVar2 = 0x100000000;
    }
  }
  else {
LAB_10897cd24:
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  func_0x000107c279a4(&ppuStack_50);
  return uVar2 | (uVar4 | uVar3);
}



/* Entry: 10897cd64; end: 10897cd6f;  */

void FUN_10897cd64(char *param_1,char *param_2,uint *param_3)

{
  ulong uVar1;
  uint uStack_34;
  
  if (param_1 == param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)(*param_1 == '-');
  }
  FUN_10897ce2c(param_1 + uVar1,param_2,&uStack_34);
  if (((int)param_2 != 0x22) && ((int)param_2 != 0x16)) {
    if ((int)uVar1 == 0) {
      if ((int)uStack_34 < 0) {
        return;
      }
    }
    else {
      if (0x80000000 < uStack_34) {
        return;
      }
      uStack_34 = -uStack_34;
    }
    *param_3 = uStack_34;
  }
  return;
}



/* Entry: 10897cd70; end: 10897ce2b;  */

void FUN_10897cd70(char *param_1,char *param_2,uint *param_3,code *param_4)

{
  ulong uVar1;
  uint uStack_34;
  
  if (param_1 == param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)(*param_1 == '-');
  }
  (*param_4)(param_1 + uVar1,param_2,&uStack_34);
  if (((int)param_2 != 0x22) && ((int)param_2 != 0x16)) {
    if ((int)uVar1 == 0) {
      if ((int)uStack_34 < 0) {
        return;
      }
    }
    else {
      if (0x80000000 < uStack_34) {
        return;
      }
      uStack_34 = -uStack_34;
    }
    *param_3 = uStack_34;
  }
  return;
}



/* Entry: 10897ce2c; end: 10897ce37;  */

undefined1  [16] FUN_10897ce2c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  byte bStack_32;
  byte bStack_31;
  
  func_0x00010744c4e8();
  pbVar1 = &bStack_32;
  func_0x00010744316c();
  if ((pbVar1 == unaff_x20) || (9 < *pbVar1 - 0x30)) {
    if (pbVar1 == unaff_x19) {
      uVar3 = 0;
      uVar4 = 0x16;
    }
    else {
      uVar4 = 0;
      uVar3 = 0;
      *param_3 = 0;
      unaff_x19 = pbVar1;
    }
  }
  else {
    pbVar2 = &bStack_31;
    func_0x000107443194();
    uVar3 = (ulong)pbVar1 & 0xffffffff00000000;
    uVar4 = (ulong)pbVar1 & 0xffffffff;
    unaff_x19 = pbVar2;
    if (uVar4 == 0x22) {
      for (; (unaff_x19 = unaff_x20, pbVar2 != unaff_x20 &&
             (unaff_x19 = pbVar2, *pbVar2 - 0x30 < 10)); pbVar2 = pbVar2 + 1) {
      }
    }
  }
  auVar5._8_8_ = uVar3 | uVar4;
  auVar5._0_8_ = unaff_x19;
  return auVar5;
}



/* Entry: 10897ce38; end: 10897cffb;  */

undefined8 *
FUN_10897ce38(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [8];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0x32aaaba7;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3cb0b1bb;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  FUN_10897cffc(param_1 + 0xf,0);
  FUN_10897cffc(param_1 + 0x11,0);
  param_1[0x13] = param_2;
  param_1[0x14] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 0x15,param_3 + 1);
  param_1[0x1a] = param_4;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  uVar2 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar3 = (undefined8 *)0x20;
  uStack_48 = uVar2;
  __Znwm();
  uStack_48 = 0;
  *puVar3 = uVar2;
  puVar3[1] = FUN_10897d040;
  puVar3[2] = 0;
  puVar3[3] = param_1;
  puVar4 = auStack_58;
  puStack_50 = puVar3;
  func_0x000107c2844c(puVar4,FUN_10897d7a4,puVar3);
  if ((int)puVar4 == 0) {
    puStack_50 = (undefined8 *)0x0;
    FUN_10897d814(&puStack_50);
    func_0x000107c28454(&uStack_48);
    func_0x000107c284c4(param_1,auStack_58);
    __ZNSt3__16threadD1Ev(auStack_58);
    return param_1;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10897cf78);
  (*pcVar1)();
}



/* Entry: 10897cffc; end: 10897d03f;  */

void FUN_10897cffc(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110aa16a0;
  param_1[1] = puVar1;
  *(undefined4 *)(puVar1 + 3) = param_2;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 10897d040; end: 10897d2f3;  */

void FUN_10897d040(long param_1)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong **ppuVar8;
  ulong *puVar9;
  long lVar10;
  long *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar11;
  ulong *puVar12;
  undefined8 *apuStack_a0 [2];
  ulong *puStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  ulong **ppuStack_70;
  ulong **ppuStack_68;
  
  _pthread_setname_np(&UNK_10f4edb24);
  while( true ) {
    puVar9 = *(ulong **)(param_1 + 0x78);
    lVar10 = *(long *)(param_1 + 0x80);
    uVar6 = *puVar9;
    iVar2 = **(int **)(param_1 + 0x88);
    lVar11 = *(long *)(param_1 + 0x98);
    puStack_90 = puVar9;
    lStack_88 = lVar10;
    if (lVar10 != 0) {
      do {
        func_0x00010897d8ec();
      } while (extraout_w10 != 0);
      do {
        func_0x00010897d8ec();
      } while (extraout_w10_00 != 0);
    }
    puVar7 = (undefined8 *)0x28;
    puStack_78 = puVar9;
    ppuStack_70 = (ulong **)lVar10;
    __Znwm();
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_SUB_110aa16f0;
    puVar7[2] = 0;
    puVar7[3] = puVar9;
    puVar7[4] = lVar10;
    if (lVar10 != 0) {
      do {
        func_0x00010897d8ec();
      } while (extraout_w10_01 != 0);
    }
    apuStack_a0[0] = puVar7;
    func_0x000104c04b3c(lVar11,lVar11 + 0x70,apuStack_a0,0,lVar11 + 0x10);
    puVar7 = apuStack_a0[0];
    apuStack_a0[0] = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      func_0x00010897d990();
    }
    ppuVar8 = &puStack_78;
    func_0x00010897d844();
    func_0x00010897d980();
    puVar9 = *(ulong **)(param_1 + 0x90);
    lVar10 = *(long *)(param_1 + 0x98) + 0x130;
    puVar12 = *(ulong **)(param_1 + 0x88);
    if (puVar9 == (ulong *)0x0) {
      func_0x00010897d9b4(lVar10);
    }
    else {
      puVar1 = puVar9 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      func_0x00010897d9b4(lVar10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
        if (bVar5) {
          *extraout_x9 = *extraout_x9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puStack_78 = &uStack_80;
    func_0x00010bd42e30();
    FUN_10894e06c();
    ppuStack_70 = ppuVar8;
    *ppuVar8 = (ulong *)0x0;
    ppuVar8[1] = (ulong *)FUN_10897d67c;
    *(undefined4 *)(ppuVar8 + 2) = 0;
    ppuVar8[3] = puVar12;
    ppuVar8[4] = puVar9;
    if (puVar9 != (ulong *)0x0) {
      do {
        func_0x00010897d8ec();
      } while (extraout_w10_02 != 0);
    }
    ppuStack_68 = ppuVar8;
    func_0x00010bd4058c(*(undefined8 *)((uStack_80 & 0xfffffffffffffffc) + 8));
    ppuStack_70 = (ulong **)0x0;
    ppuStack_68 = (ulong **)0x0;
    FUN_10897d600(&puStack_78);
    func_0x00010897d980();
    func_0x00010897d844(apuStack_a0);
    func_0x00010897d960();
    ppuStack_70 = (ulong **)CONCAT71(ppuStack_70._1_7_,1);
    puVar9 = (ulong *)(param_1 + 8);
    puStack_78 = (ulong *)(param_1 + 8);
    __ZNSt3__15mutex4lockEv();
    __ZNSt3__16chrono12steady_clock3nowEv();
    puStack_90 = puVar9 + *(long *)(param_1 + 0xd0) * 0x1e848;
    do {
      if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
        func_0x00010897d988();
        return;
      }
      lVar10 = param_1 + 0x48;
      func_0x000104c38e48(lVar10,&puStack_78,&puStack_90);
    } while ((int)lVar10 != 1);
    bVar3 = *(byte *)(param_1 + 0xd8);
    func_0x00010897d988();
    if ((bVar3 & 1) != 0) break;
    if (**(int **)(param_1 + 0x78) == (int)uVar6) {
      FUN_10897d420(param_1);
    }
    if (**(int **)(param_1 + 0x88) == iVar2) {
      FUN_10897d4e4(param_1);
    }
  }
  return;
}



/* Entry: 10897d2f4; end: 10897d387;  */

long FUN_10897d2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  pcStack_58 = FUN_10897d5f0;
  ppuStack_50 = &PTR_DAT_110873830;
  lVar1 = param_1;
  FUN_10897ce38(param_1,param_2,&pcStack_58,param_3);
  func_0x00010897d920();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010897d920();
  func_0x00010897d8fc();
  (*(code *)**(undefined8 **)(lVar1 + 0xa8))();
  func_0x00010897d74c(lVar1 + 0x88);
  func_0x00010897d74c(lVar1 + 0x78);
  __ZNSt3__118condition_variableD1Ev(lVar1 + 0x48);
  __ZNSt3__15mutexD1Ev(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__16threadD1Ev_110346860)(lVar1);
  return lVar1;
}



/* Entry: 10897d388; end: 10897d41f;  */

void FUN_10897d388(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0xa8))();
  func_0x00010897d74c(param_1 + 0x88);
  func_0x00010897d74c(param_1 + 0x78);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x48);
  __ZNSt3__15mutexD1Ev(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__16threadD1Ev_110346860)(param_1);
  return;
}



/* Entry: 10897d420; end: 10897d4e3;  */

void FUN_10897d420(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (*(long *)(*(long *)(param_1 + 0x98) + 0x1d0) == -0x8000000000000000) {
    func_0x00010897d9c8();
    if ((extraout_x8 & 1) == 0) {
      pcVar1 = *(code **)(param_1 + 0xa0);
      func_0x000107c278b8(auStack_38,&UNK_10f4edb31);
      (*pcVar1)(auStack_38,(undefined8 *)(param_1 + 0xa0));
      func_0x00010897d910();
      return;
    }
    FUN_1089a3c0c();
    func_0x00010897d8b4();
    func_0x00010897d8cc(6);
    func_0x00010897d8e0();
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x00010897d9c8();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x00010897d948();
      func_0x000107c2793c(&UNK_10f4edb7c);
      func_0x00010897d930();
      func_0x00010897d9a8(*(undefined8 *)(param_1 + 0xa0));
      func_0x00010897d910();
      return;
    }
    FUN_1089a3c0c();
    func_0x00010897d8b4();
    func_0x00010897d8cc(6);
    func_0x00010897d8e0();
  }
  func_0x00010897d940();
  return;
}



/* Entry: 10897d4e4; end: 10897d5a7;  */

void FUN_10897d4e4(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (*(long *)(*(long *)(param_1 + 0x98) + 0x1d8) == -0x8000000000000000) {
    func_0x00010897d9c8();
    if ((extraout_x8 & 1) == 0) {
      pcVar1 = *(code **)(param_1 + 0xa0);
      func_0x000107c278b8(auStack_38,&UNK_10f4edbc9);
      (*pcVar1)(auStack_38,(undefined8 *)(param_1 + 0xa0));
      func_0x00010897d910();
      return;
    }
    FUN_1089a3c0c();
    func_0x00010897d8b4();
    func_0x00010897d8cc(7);
    func_0x00010897d8e0();
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x00010897d9c8();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x00010897d948();
      func_0x000107c2793c(&UNK_10f4edc14);
      func_0x00010897d930();
      func_0x00010897d9a8(*(undefined8 *)(param_1 + 0xa0));
      func_0x00010897d910();
      return;
    }
    FUN_1089a3c0c();
    func_0x00010897d8b4();
    func_0x00010897d8cc(7);
    func_0x00010897d8e0();
  }
  func_0x00010897d940();
  return;
}



/* Entry: 10897d5a8; end: 10897d5ef;  */

void FUN_10897d5a8(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  pcVar1 = (code *)*param_1;
  func_0x000107c278b8(auStack_38);
  (*pcVar1)(auStack_38,param_1);
  func_0x00010897d910();
  return;
}



/* Entry: 10897d5f0; end: 10897d5ff;  */

undefined8 FUN_10897d5f0(undefined8 param_1,undefined8 param_2)

{
  func_0x000105277f8c(param_2);
  FUN_10897d700();
  return param_2;
}



/* Entry: 10897d600; end: 10897d623;  */

undefined8 FUN_10897d600(undefined8 param_1)

{
  FUN_10897d700();
  return param_1;
}



/* Entry: 10897d624; end: 10897d67b;  */

void FUN_10897d624(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piStack_30;
  long lStack_28;
  
  piStack_30 = (int *)0x0;
  lStack_28 = 0;
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar3;
    if (lVar3 != 0) {
      piStack_30 = (int *)*param_1;
      if (piStack_30 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piStack_30,0x10);
          if (bVar2) {
            *piStack_30 = *piStack_30 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  func_0x00010897d74c(&piStack_30);
  return;
}



/* Entry: 10897d67c; end: 10897d6ff;  */

void FUN_10897d67c(long param_1,long param_2)

{
  int extraout_w10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_21;
  
  puStack_40 = &uStack_21;
  uStack_48 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  lStack_38 = param_2;
  lStack_30 = param_2;
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x00010897d8ec();
    } while (extraout_w10 != 0);
  }
  FUN_10897d700(&puStack_40);
  if (param_1 != 0) {
    FUN_10897d624(&uStack_50);
    DataMemoryBarrier(2,3);
  }
  func_0x00010897d960();
  FUN_10897d600(&puStack_40);
  return;
}



/* Entry: 10897d700; end: 10897d773;  */

void FUN_10897d700(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010897d844(*(long *)(param_1 + 0x10) + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894e450();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10897d774; end: 10897d777;  */

void FUN_10897d774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa16a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10897d778; end: 10897d78b;  */

void FUN_10897d778(void)

{
  func_0x00010897d794();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897d78c; end: 10897d7a3;  */

void FUN_10897d78c(void)

{
  return;
}



/* Entry: 10897d7a4; end: 10897d813;  */

undefined8 FUN_10897d7a4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puStack_28;
  
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000107c28450();
  pcVar1 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    pcVar1 = *(code **)(*(long *)(param_1[3] + ((long)param_1[2] >> 1)) +
                       ((ulong)pcVar1 & 0xffffffff));
  }
  (*pcVar1)();
  FUN_10897d814(&puStack_28);
  return 0;
}



/* Entry: 10897d814; end: 10897d897;  */

long * FUN_10897d814(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c28454();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10897d898; end: 10897d8ab;  */

void FUN_10897d898(void)

{
  func_0x00010897d86c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897d8ac; end: 10897d9d3;  */

void FUN_10897d8ac(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piStack_30;
  long lStack_28;
  
  piStack_30 = (int *)0x0;
  lStack_28 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_28 = lVar3;
    if (lVar3 != 0) {
      piStack_30 = *(int **)(param_1 + 0x18);
      if (piStack_30 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piStack_30,0x10);
          if (bVar2) {
            *piStack_30 = *piStack_30 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
  }
  func_0x00010897d74c(&piStack_30);
  return;
}



/* Entry: 10897d9d4; end: 10897da9b;  */

void FUN_10897d9d4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 *puStack_28;
  
  FUN_10897dc10(auStack_48,param_1);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110aa1730;
  FUN_10897dc10(puVar1 + 3,auStack_48);
  puStack_28 = puVar1;
  func_0x000104c04b3c(param_2,param_2 + 0x70,&puStack_28,0,param_2 + 0x10);
  puVar1 = puStack_28;
  puStack_28 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010897ddac();
  }
  func_0x00010897dda4(uStack_38);
  return;
}



/* Entry: 10897da9c; end: 10897dc0f;  */

void FUN_10897da9c(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 *puStack_48;
  
  puVar5 = auStack_90;
  FUN_10897dc10(auStack_90,param_1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_68 = param_3[0xf];
  lStack_70 = param_3[0xe];
  if (param_3[0xf] != 0) {
    plVar1 = (long *)(param_3[0xf] + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  __ZNSt3__15mutex4lockEv(param_3 + 2);
  uVar3 = (char)param_3[1] != '\0';
  bVar4 = (char)param_3[1] == '\x01';
  if (bVar4) {
    func_0x00010897ddcc();
    if (!(bool)uVar3 || bVar4) {
      FUN_108b851fc(param_3);
      func_0x00010897ddcc();
      if (!(bool)uVar3) goto LAB_10897db90;
    }
    lVar7 = param_3[0x34];
    param_3[0x34] = lVar7 + 1;
    puVar6 = (undefined8 *)0x38;
    __Znwm();
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6[2] = lVar7 + 1;
    *puVar6 = &PTR_DAT_110aa1770;
    FUN_10897dc10(puVar6 + 3,auStack_90);
    lStack_50 = lStack_68;
    lStack_58 = lStack_70;
    lStack_70 = 0;
    lStack_68 = 0;
    puStack_60 = puVar6;
    puStack_48 = puVar5 + param_2 * 1000;
    (**(code **)(*param_3 + 0x10))(param_3,&puStack_60);
    FUN_10897dd3c(&puStack_60);
  }
LAB_10897db90:
  __ZNSt3__15mutex6unlockEv(param_3 + 2);
  func_0x00010897dd64(&lStack_70);
  func_0x00010897dda4(uStack_80);
  return;
}



/* Entry: 10897dc10; end: 10897dc5b;  */

long FUN_10897dc10(long param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(0,param_2,param_1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_10897dc5c;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return param_1;
}



/* Entry: 10897dc5c; end: 10897dc5f;  */

void FUN_10897dc5c(void)

{
  return;
}



/* Entry: 10897dc60; end: 10897dcb3;  */

undefined8 FUN_10897dc60(undefined8 param_1)

{
  FUN_10897dd8c(&PTR_FUN_110aa1730);
  return param_1;
}



/* Entry: 10897dcb4; end: 10897dcb7;  */

void FUN_10897dcb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010897ddc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1 + 0x18);
  return;
}



/* Entry: 10897dcb8; end: 10897dd37;  */

long * FUN_10897dcb8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010897ddac();
  }
  return param_1;
}



/* Entry: 10897dd38; end: 10897dd3b;  */

void FUN_10897dd38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010897ddc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1 + 0x18);
  return;
}



/* Entry: 10897dd3c; end: 10897dd8b;  */

long * FUN_10897dd3c(long *param_1)

{
  long lVar1;
  
  func_0x00010897dd64(param_1 + 1);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010897ddac();
  }
  return param_1;
}



/* Entry: 10897dd8c; end: 10897de63;  */

void FUN_10897dd8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010897dda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[5])(1,param_2 + 3,param_2 + 3);
  return;
}



/* Entry: 10897de64; end: 10897dea7;  */

undefined8 * FUN_10897de64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa17b0;
  FUN_10897e2fc(param_1 + 10);
  func_0x00010897e37c(param_1 + 8);
  func_0x00010897b3e4(param_1 + 4);
  return param_1;
}



/* Entry: 10897dea8; end: 10897deab;  */

undefined8 * FUN_10897dea8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa17b0;
  FUN_10897e2fc(param_1 + 10);
  func_0x00010897e37c(param_1 + 8);
  func_0x00010897b3e4(param_1 + 4);
  return param_1;
}



/* Entry: 10897deac; end: 10897debf;  */

void FUN_10897deac(void)

{
  FUN_10897de64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897dec0; end: 10897deef;  */

void FUN_10897dec0(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x18);
  *(char *)(param_1 + 0x18) = (char)param_2;
  if (bVar2 == param_2) {
    return;
  }
  lVar1 = 0;
  if (param_2 == 0) {
    lVar1 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010897deec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + lVar1))();
  return;
}



/* Entry: 10897def0; end: 10897df97;  */

void FUN_10897def0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_60 [24];
  undefined8 *apuStack_48 [2];
  undefined8 uStack_38;
  
  plVar1 = param_1 + 10;
  uStack_38 = param_3;
  FUN_10897df98(plVar1,&uStack_38);
  if (((ulong)plVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x10))(apuStack_48,param_1,param_2,uStack_38,param_4);
    (**(code **)*apuStack_48[0])();
    func_0x00010897dfb4(auStack_60,param_1 + 10,&uStack_38,apuStack_48);
    FUN_10897e440(apuStack_48);
  }
  return;
}



/* Entry: 10897df98; end: 10897dfd3;  */

bool FUN_10897df98(long param_1)

{
  FUN_10897e3a4();
  return param_1 != 0;
}



/* Entry: 10897dfd4; end: 10897e027;  */

void FUN_10897dfd4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010897eb98();
  if (lVar1 != 0) {
    func_0x00010897eba8(*(undefined8 *)(param_2 + 8));
    FUN_10897e02c(param_1 + 0x50,lVar1,param_2);
  }
  return;
}



/* Entry: 10897e028; end: 10897e02b;  */

long FUN_10897e028(ulong *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar9;
  byte bVar15;
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  uVar2 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297;
  lVar3 = 0;
  uVar4 = *param_1;
  uVar6 = uVar4 >> 0xc ^ uVar2 >> 7;
  bVar5 = (byte)uVar2 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar9 = *(undefined8 *)(uVar4 + uVar6);
    bVar8 = (byte)((ulong)uVar9 >> 8);
    bVar10 = (byte)((ulong)uVar9 >> 0x10);
    bVar11 = (byte)((ulong)uVar9 >> 0x18);
    bVar12 = (byte)((ulong)uVar9 >> 0x20);
    bVar13 = (byte)((ulong)uVar9 >> 0x28);
    bVar14 = (byte)((ulong)uVar9 >> 0x30);
    bVar15 = (byte)((ulong)uVar9 >> 0x38);
    for (uVar2 = CONCAT17(-(bVar15 == bVar5),
                          CONCAT16(-(bVar14 == bVar5),
                                   CONCAT15(-(bVar13 == bVar5),
                                            CONCAT14(-(bVar12 == bVar5),
                                                     CONCAT13(-(bVar11 == bVar5),
                                                              CONCAT12(-(bVar10 == bVar5),
                                                                       CONCAT11(-(bVar8 == bVar5),
                                                                                -((byte)uVar9 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      uVar7 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(long *)(param_1[1] + uVar7 * 0x18) == *param_2) {
        return uVar4 + uVar7;
      }
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar15 == 0x80),
                                CONCAT16(-(bVar14 == 0x80),
                                         CONCAT15(-(bVar13 == 0x80),
                                                  CONCAT14(-(bVar12 == 0x80),
                                                           CONCAT13(-(bVar11 == 0x80),
                                                                    CONCAT12(-(bVar10 == 0x80),
                                                                             CONCAT11(-(bVar8 == 
                                                  0x80),-((byte)uVar9 == 0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
  return 0;
}



/* Entry: 10897e02c; end: 10897e06b;  */

void FUN_10897e02c(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  FUN_10897e440(param_3 + 8);
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10897e06c; end: 10897e113;  */

void FUN_10897e06c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010897eb98();
  if (param_1 != 0) {
    (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),param_3,param_4);
  }
  return;
}



/* Entry: 10897e114; end: 10897e13f;  */

undefined1  [16] FUN_10897e114(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x00010897e858(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10897e140; end: 10897e213;  */

long * FUN_10897e140(long *param_1)

{
  param_1[1] = param_1[1] + 0x18;
  *param_1 = *param_1 + 1;
  func_0x00010897e858();
  return param_1;
}



/* Entry: 10897e214; end: 10897e23b;  */

void FUN_10897e214(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010897e37c(&uStack_20);
  return;
}



/* Entry: 10897e23c; end: 10897e2b3;  */

void FUN_10897e23c(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_34 = param_5;
  uStack_30 = param_4;
  uStack_24 = param_3;
  FUN_10897e2b4(&uStack_50,&uStack_34,param_2 + 0x10,&uStack_24,&uStack_30,param_2 + 0x30,
                param_2 + 0x38,param_2 + 0x20,param_2 + 0x1c,param_2 + 8);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10897eb24(&uStack_50);
  return;
}



/* Entry: 10897e2b4; end: 10897e2fb;  */

void FUN_10897e2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 uStack_11;
  
  FUN_10897e8b0(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 10897e2fc; end: 10897e337;  */

long * FUN_10897e2fc(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_10897e338(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10897e338; end: 10897e3a3;  */

void FUN_10897e338(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1] + 8;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      FUN_10897e440(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x18;
  }
  return;
}



/* Entry: 10897e3a4; end: 10897e43f;  */

long FUN_10897e3a4(ulong *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar9;
  byte bVar15;
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  uVar2 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297;
  lVar3 = 0;
  uVar4 = *param_1;
  uVar6 = uVar4 >> 0xc ^ uVar2 >> 7;
  bVar5 = (byte)uVar2 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar9 = *(undefined8 *)(uVar4 + uVar6);
    bVar8 = (byte)((ulong)uVar9 >> 8);
    bVar10 = (byte)((ulong)uVar9 >> 0x10);
    bVar11 = (byte)((ulong)uVar9 >> 0x18);
    bVar12 = (byte)((ulong)uVar9 >> 0x20);
    bVar13 = (byte)((ulong)uVar9 >> 0x28);
    bVar14 = (byte)((ulong)uVar9 >> 0x30);
    bVar15 = (byte)((ulong)uVar9 >> 0x38);
    for (uVar2 = CONCAT17(-(bVar15 == bVar5),
                          CONCAT16(-(bVar14 == bVar5),
                                   CONCAT15(-(bVar13 == bVar5),
                                            CONCAT14(-(bVar12 == bVar5),
                                                     CONCAT13(-(bVar11 == bVar5),
                                                              CONCAT12(-(bVar10 == bVar5),
                                                                       CONCAT11(-(bVar8 == bVar5),
                                                                                -((byte)uVar9 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      uVar7 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(long *)(param_1[1] + uVar7 * 0x18) == *param_2) {
        return uVar4 + uVar7;
      }
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar15 == 0x80),
                                CONCAT16(-(bVar14 == 0x80),
                                         CONCAT15(-(bVar13 == 0x80),
                                                  CONCAT14(-(bVar12 == 0x80),
                                                           CONCAT13(-(bVar11 == 0x80),
                                                                    CONCAT12(-(bVar10 == 0x80),
                                                                             CONCAT11(-(bVar8 == 
                                                  0x80),-((byte)uVar9 == 0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
  return 0;
}



/* Entry: 10897e440; end: 10897e467;  */

long FUN_10897e440(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10897e468; end: 10897e46b;  */

void FUN_10897e468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_10897e49c(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 10897e46c; end: 10897e49b;  */

void FUN_10897e46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_10897e49c(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 10897e49c; end: 10897e5ff;  */

void FUN_10897e49c(long *param_1,ulong *param_2,long *param_3,undefined8 param_4,undefined8 *param_5
                  ,undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined1 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar16;
  byte bVar22;
  
  lVar11 = 0;
  puVar6 = (ulong *)*param_2;
  uVar12 = *puVar6;
  Hint_Prefetch(uVar12,0,2,0);
  uVar8 = (long)&PTR_LOOP_110c8acd8 + *param_3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar8;
  uVar7 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
  uVar8 = uVar7 >> 7 ^ uVar12 >> 0xc;
  bVar14 = (byte)uVar7 & 0x7f;
  while( true ) {
    uVar8 = uVar8 & puVar6[2];
    uVar16 = *(undefined8 *)(uVar12 + uVar8);
    bVar15 = (byte)((ulong)uVar16 >> 8);
    bVar17 = (byte)((ulong)uVar16 >> 0x10);
    bVar18 = (byte)((ulong)uVar16 >> 0x18);
    bVar19 = (byte)((ulong)uVar16 >> 0x20);
    bVar20 = (byte)((ulong)uVar16 >> 0x28);
    bVar21 = (byte)((ulong)uVar16 >> 0x30);
    bVar22 = (byte)((ulong)uVar16 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar22 == bVar14),
                          CONCAT16(-(bVar21 == bVar14),
                                   CONCAT15(-(bVar20 == bVar14),
                                            CONCAT14(-(bVar19 == bVar14),
                                                     CONCAT13(-(bVar18 == bVar14),
                                                              CONCAT12(-(bVar17 == bVar14),
                                                                       CONCAT11(-(bVar15 == bVar14),
                                                                                -((byte)uVar16 ==
                                                                                 bVar14)))))))) &
                 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar9 = (ulong *)(uVar8 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & puVar6[2]);
      if (*(long *)(puVar6[1] + (long)puVar9 * 0x18) == *param_3) {
        uVar10 = 0;
        goto LAB_10897e57c;
      }
    }
    bVar15 = NEON_umaxv(CONCAT17(-(bVar22 == 0x80),
                                 CONCAT16(-(bVar21 == 0x80),
                                          CONCAT15(-(bVar20 == 0x80),
                                                   CONCAT14(-(bVar19 == 0x80),
                                                            CONCAT13(-(bVar18 == 0x80),
                                                                     CONCAT12(-(bVar17 == 0x80),
                                                                              CONCAT11(-(bVar15 ==
                                                                                        0x80),-((
                                                  byte)uVar16 == 0x80)))))))),1);
    if ((bVar15 & 1) != 0) break;
    lVar11 = lVar11 + 8;
    uVar8 = lVar11 + uVar8;
  }
  FUN_10897e600();
  param_6 = (undefined8 *)*param_6;
  puVar13 = (undefined8 *)(*(long *)(*param_2 + 8) + (long)puVar6 * 0x18);
  *puVar13 = *(undefined8 *)*param_5;
  puVar13[1] = *param_6;
  lVar11 = param_6[1];
  puVar13[2] = lVar11;
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
  uVar10 = 1;
  puVar9 = puVar6;
LAB_10897e57c:
  lVar11 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + (long)puVar9;
  param_1[1] = lVar11 + (long)puVar9 * 0x18;
  *(undefined1 *)(param_1 + 2) = uVar10;
  return;
}



/* Entry: 10897e600; end: 10897e6fb;  */

void FUN_10897e600(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  long lVar5;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_1;
  lVar9 = param_2;
  func_0x000107c2b954();
  lVar5 = *param_1;
  if ((*(long *)(lVar5 + -8) == 0) && (*(char *)(lVar5 + (long)plVar3) != -2)) {
    uVar7 = param_1[2];
    if ((uVar7 < 9) || (uVar7 * 0x19 < (ulong)(param_1[3] << 5))) {
      FUN_10897e6fc(param_1,uVar7 << 1 | 1);
    }
    else {
      func_0x00010ae6c914(param_1,&UNK_110aa17d8,auStack_40);
    }
    plVar3 = param_1;
    lVar9 = param_2;
    func_0x000107c2b954();
    lVar5 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  uVar2 = *(char *)(lVar5 + (long)plVar3) == -0x80;
  *(ulong *)(lVar5 + -8) = *(long *)(lVar5 + -8) - (ulong)(byte)uVar2;
  func_0x00010897ebc4((uint)param_2 & 0x7f);
  *(undefined1 *)(extraout_x10 + (extraout_x9 & extraout_x11) + (extraout_x9 & 7)) = extraout_w8;
  func_0x00010897ebd8(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *plVar3;
  plVar6 = (long *)plVar3[1];
  lVar8 = plVar3[2];
  plVar3[2] = lVar9;
  func_0x000107810840();
  lVar10 = plVar3[1];
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar5 + lVar9)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar6;
      uVar7 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)&PTR_LOOP_110c8acd8 + *plVar6) * -0x622015f714c7d297;
      plVar4 = plVar3;
      func_0x000107c2b954(plVar3,uVar7);
      func_0x00010897ebc4((uint)uVar7 & 0x7f);
      *(undefined1 *)(extraout_x10_00 + (extraout_x11_00 & extraout_x9_00) + (extraout_x9_00 & 7)) =
           extraout_w8_00;
      FUN_10897e7f0(lVar10 + (long)plVar4 * 0x18,plVar6);
    }
    plVar6 = plVar6 + 3;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar5 + -8);
    return;
  }
  return;
}



/* Entry: 10897e6fc; end: 10897e7ef;  */

void FUN_10897e6fc(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  undefined1 extraout_w8;
  ulong extraout_x9;
  long extraout_x10;
  ulong extraout_x11;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  plVar4 = (long *)param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  func_0x000107810840();
  lVar8 = param_1[1];
  for (lVar7 = 0; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + *plVar4;
      uVar5 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)&PTR_LOOP_110c8acd8 + *plVar4) * -0x622015f714c7d297;
      plVar3 = param_1;
      func_0x000107c2b954(param_1,uVar5);
      func_0x00010897ebc4((uint)uVar5 & 0x7f);
      *(undefined1 *)(extraout_x10 + (extraout_x11 & extraout_x9) + (extraout_x9 & 7)) = extraout_w8
      ;
      FUN_10897e7f0(lVar8 + (long)plVar3 * 0x18,plVar4);
    }
    plVar4 = plVar4 + 3;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10897e7f0; end: 10897e8af;  */

undefined8 * FUN_10897e7f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = param_2 + 1;
  param_1[1] = *puVar1;
  param_1[2] = param_2[2];
  *puVar1 = 0;
  param_2[2] = 0;
  if (param_2[2] != 0) {
    func_0x000107c278a0();
  }
  return puVar1;
}



/* Entry: 10897e8b0; end: 10897e98f;  */

undefined1 *
FUN_10897e8b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10897e990(auStack_70,1);
  FUN_10897e9e8(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11)
  ;
  lVar1 = lStack_60;
  lStack_60 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  puVar2 = auStack_70;
  func_0x00010897eb14();
  func_0x00010897ebd8(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = auStack_70;
  func_0x00010897eb14();
  func_0x00010897ebbc();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_10897e9b8();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10897e990; end: 10897e9b7;  */

long FUN_10897e990(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10897e9b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10897e9b8; end: 10897e9e7;  */

undefined8 * FUN_10897e9b8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xd79435e50d7944) {
    puVar1 = (undefined8 *)(param_2 * 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa1808;
  FUN_10897ea68(param_1 + 3);
  return param_1;
}



/* Entry: 10897e9e8; end: 10897ea3f;  */

undefined8 * FUN_10897e9e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa1808;
  FUN_10897ea68(param_1 + 3);
  return param_1;
}



/* Entry: 10897ea40; end: 10897ea43;  */

void FUN_10897ea40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1808;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10897ea44; end: 10897ea57;  */

void FUN_10897ea44(void)

{
  FUN_10897eb04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897ea58; end: 10897ea67;  */

void FUN_10897ea58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010897ea60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x30))();
  return;
}



/* Entry: 10897ea68; end: 10897eb03;  */

undefined8
FUN_10897ea68(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 *param_9,undefined4 *param_10)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *param_2;
  uVar6 = *param_3;
  uVar3 = *param_4;
  uVar7 = *param_5;
  uVar8 = *param_6;
  uVar9 = *param_7;
  uStack_28 = param_8[1];
  uStack_30 = *param_8;
  if (param_8[1] != 0) {
    plVar1 = (long *)(param_8[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10897ebec(param_1,uVar2,uVar6,uVar3,uVar7,uVar8,uVar9,&uStack_30,*param_9,*param_10,0,0);
  func_0x00010897b3e4(&uStack_30);
  return param_1;
}



/* Entry: 10897eb04; end: 10897eb23;  */

void FUN_10897eb04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa1808;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10897eb24; end: 10897eb4b;  */

long FUN_10897eb24(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10897eb4c; end: 10897ebeb;  */

long FUN_10897eb4c(ulong *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar9;
  byte bVar15;
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  uVar2 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297;
  lVar3 = 0;
  uVar4 = *param_1;
  uVar6 = uVar4 >> 0xc ^ uVar2 >> 7;
  bVar5 = (byte)uVar2 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar9 = *(undefined8 *)(uVar4 + uVar6);
    bVar8 = (byte)((ulong)uVar9 >> 8);
    bVar10 = (byte)((ulong)uVar9 >> 0x10);
    bVar11 = (byte)((ulong)uVar9 >> 0x18);
    bVar12 = (byte)((ulong)uVar9 >> 0x20);
    bVar13 = (byte)((ulong)uVar9 >> 0x28);
    bVar14 = (byte)((ulong)uVar9 >> 0x30);
    bVar15 = (byte)((ulong)uVar9 >> 0x38);
    for (uVar2 = CONCAT17(-(bVar15 == bVar5),
                          CONCAT16(-(bVar14 == bVar5),
                                   CONCAT15(-(bVar13 == bVar5),
                                            CONCAT14(-(bVar12 == bVar5),
                                                     CONCAT13(-(bVar11 == bVar5),
                                                              CONCAT12(-(bVar10 == bVar5),
                                                                       CONCAT11(-(bVar8 == bVar5),
                                                                                -((byte)uVar9 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      uVar7 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(long *)(param_1[1] + uVar7 * 0x18) == *param_2) {
        return uVar4 + uVar7;
      }
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar15 == 0x80),
                                CONCAT16(-(bVar14 == 0x80),
                                         CONCAT15(-(bVar13 == 0x80),
                                                  CONCAT14(-(bVar12 == 0x80),
                                                           CONCAT13(-(bVar11 == 0x80),
                                                                    CONCAT12(-(bVar10 == 0x80),
                                                                             CONCAT11(-(bVar8 == 
                                                  0x80),-((byte)uVar9 == 0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
  return 0;
}



/* Entry: 10897ebec; end: 10897ee03;  */

undefined8 *
FUN_10897ebec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             undefined4 param_9,int param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [144];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = &PTR_FUN_110aa1858;
  param_1[2] = param_7;
  param_1[3] = param_6;
  *(undefined4 *)(param_1 + 4) = param_9;
  *(int *)((long)param_1 + 0x24) = param_10;
  uVar1 = 0xa0021;
  if (param_10 != 0) {
    uVar1 = 0xa0022;
  }
  *(undefined4 *)(param_1 + 5) = uVar1;
  uVar5 = param_8[1];
  uVar4 = *param_8;
  *param_8 = 0;
  param_8[1] = 0;
  param_1[6] = &PTR_FUN_110aa29d8;
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  uStack_70 = 0;
  uStack_68 = 0;
  param_1[9] = param_7;
  func_0x00010897b3e4(&uStack_70);
  FUN_1089a00a0(param_1 + 10);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10897f7e4(param_13);
  *(undefined4 *)(param_1 + 0x18) = 0x100;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  param_1[0x1b] = param_3;
  param_1[0x1c] = param_5;
  param_1[0x1e] = uVar5;
  param_1[0x1d] = uVar4;
  param_1[0x20] = uVar5;
  param_1[0x1f] = uVar4;
  param_1[0x21] = extraout_x9;
  param_1[0x22] = extraout_x8;
  FUN_108982878(auStack_100,param_9,param_4,param_5,param_2,param_1 + 6,param_6,param_10);
  puVar2 = (undefined8 *)param_1[2];
  func_0x00010897f85c();
  (*extraout_x8_00)();
  param_1[1] = puVar2;
  if (param_1[0x22] == 0) {
    FUN_1089a3c0c();
    puVar3 = puVar2;
    func_0x00010897f7fc();
    func_0x00010897f83c();
    func_0x00010897f894(*puVar2,puVar3);
    func_0x00010897f880();
    func_0x00010897f814();
  }
  else {
    FUN_1089a3c0c();
    puVar3 = puVar2;
    func_0x00010897f7fc();
    func_0x00010897f83c();
    func_0x00010897f894(*puVar2,puVar3);
    func_0x00010897f880();
    func_0x00010897f814();
    (**(code **)(*(long *)param_1[1] + 0x98))((long *)param_1[1],param_1[0x21],param_1[0x22]);
  }
  (**(code **)(*(long *)param_1[2] + 0x88))((long *)param_1[2],0,0);
  func_0x000108a166ec(auStack_100);
  return param_1;
}



/* Entry: 10897ee04; end: 10897ee97;  */

undefined8 FUN_10897ee04(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_38 [24];
  
  uVar3 = param_2 >> 0x10 & 0xffff;
  if ((uint)uVar3 < 0xf) {
    puVar2 = (&PTR_DAT_113289a60)[uVar3];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2d) {
    puVar2 = (&PTR_DAT_113289ad8)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  FUN_108949f78(param_1,auStack_38,puVar2);
  func_0x00010897f874();
  return param_1;
}



/* Entry: 10897ee98; end: 10897eeeb;  */

undefined8 * FUN_10897ee98(undefined8 *param_1)

{
  code *extraout_x8;
  
  *param_1 = &PTR_FUN_110aa1858;
  func_0x00010897f8a0(param_1[2],param_1[1]);
  (*extraout_x8)();
  FUN_10897f60c(param_1 + 0x1e);
  func_0x00010894d60c(param_1 + 0xd);
  func_0x00010897f638(param_1 + 6);
  return param_1;
}



/* Entry: 10897eeec; end: 10897eeef;  */

undefined8 * FUN_10897eeec(undefined8 *param_1)

{
  code *extraout_x8;
  
  *param_1 = &PTR_FUN_110aa1858;
  func_0x00010897f8a0(param_1[2],param_1[1]);
  (*extraout_x8)();
  FUN_10897f60c(param_1 + 0x1e);
  func_0x00010894d60c(param_1 + 0xd);
  func_0x00010897f638(param_1 + 6);
  return param_1;
}



/* Entry: 10897eef0; end: 10897ef03;  */

void FUN_10897eef0(void)

{
  FUN_10897ee98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897ef04; end: 10897ef4f;  */

void FUN_10897ef04(long param_1)

{
  undefined8 uVar1;
  code *extraout_x8;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_10897f7e4();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010897f85c();
  (*extraout_x8)();
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  return;
}



/* Entry: 10897ef50; end: 10897effb;  */

void FUN_10897ef50(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  code *extraout_x8;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010897f8a0();
  (*extraout_x8)();
  if (*(long *)(param_1 + 0xe8) != 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    ppuStack_48 = &PTR_FUN_110aa18d0;
    pppuStack_30 = &ppuStack_48;
    lStack_40 = param_1;
    FUN_10897f8ac(param_1 + 0xf0,*(undefined8 *)(param_1 + 0xe8),uVar3,&ppuStack_48);
    FUN_10897f7a0();
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppuVar4 = &ppuStack_48;
  FUN_10897f7a0();
  func_0x00010897f81c();
  ppuVar5 = pppuVar4[1];
  (**(code **)(*ppuVar5 + 0x90))();
  iVar2 = (int)ppuVar5;
  FUN_108987f80();
  iVar1 = *(int *)(pppuVar4 + 0x18);
  if (iVar2 <= *(int *)(pppuVar4 + 0x18)) {
    iVar1 = iVar2;
  }
  if (iVar2 <= *(int *)((long)pppuVar4 + 0xc4)) {
    iVar2 = *(int *)((long)pppuVar4 + 0xc4);
  }
  *(int *)(pppuVar4 + 0x18) = iVar1;
  *(int *)((long)pppuVar4 + 0xc4) = iVar2;
  return;
}



/* Entry: 10897effc; end: 10897f043;  */

void FUN_10897effc(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  (**(code **)(*plVar3 + 0x90))();
  iVar2 = (int)plVar3;
  FUN_108987f80();
  iVar1 = *(int *)(param_1 + 0xc0);
  if (iVar2 <= *(int *)(param_1 + 0xc0)) {
    iVar1 = iVar2;
  }
  if (iVar2 <= *(int *)(param_1 + 0xc4)) {
    iVar2 = *(int *)(param_1 + 0xc4);
  }
  *(int *)(param_1 + 0xc0) = iVar1;
  *(int *)(param_1 + 0xc4) = iVar2;
  return;
}



/* Entry: 10897f044; end: 10897f47b;  */

void FUN_10897f044(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  long lVar12;
  code *extraout_x8;
  ulong uVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  double dVar23;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined1 auStack_258 [8];
  long lStack_250;
  long lStack_248;
  int iStack_240;
  int iStack_218;
  undefined8 uStack_210;
  int iStack_1d4;
  double dStack_1c8;
  ulong uStack_1c0;
  double dStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_108;
  uint uStack_f8;
  uint uStack_f4;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x60))(auStack_258,*(long **)(param_1 + 8),1);
  if (iStack_240 == 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (*(char *)(param_1 + 0x60) == '\x01') {
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    uVar9 = param_1 + 0x50;
    FUN_1089a00f0(uVar9,lStack_248 + lStack_250);
    puVar10 = (undefined8 *)(param_1 + 200);
    FUN_10897f47c(puVar10,(long)iStack_218,iStack_240);
    FUN_1089a3c0c();
    uStack_270 = 0;
    uStack_268 = 0;
    ppuStack_280 = &PTR_DAT_1107eac58;
    uStack_278 = 0;
    uStack_260 = 0x44;
    pppuVar11 = &ppuStack_280;
    FUN_10897ee04(pppuVar11,*(undefined4 *)(param_1 + 0x28));
    func_0x00010897f85c(*puVar10,pppuVar11,iStack_1d4);
    (*extraout_x8)();
    pppuVar11 = &ppuStack_280;
    func_0x000104c03ee4();
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar22 = *(long **)(param_1 + 0xf8);
    if (plVar22 < *(long **)(param_1 + 0x100)) {
      *plVar22 = (long)pppuVar11;
      plVar22[1] = lStack_108;
      plVar22 = plVar22 + 2;
    }
    else {
      lVar18 = *(long *)(param_1 + 0xf0);
      lVar19 = (long)plVar22 - lVar18;
      uVar16 = (lVar19 >> 4) + 1;
      if (uVar16 >> 0x3c != 0) {
        func_0x00010897f668();
        goto LAB_10897f44c;
      }
      uVar13 = (long)*(long **)(param_1 + 0x100) - lVar18;
      uVar14 = (long)uVar13 >> 3;
      if (uVar14 <= uVar16) {
        uVar14 = uVar16;
      }
      if (0x7fffffffffffffef < uVar13) {
        uVar14 = 0xfffffffffffffff;
      }
      if (uVar14 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto LAB_10897f44c;
      }
      lVar12 = uVar14 << 4;
      __Znwm();
      plVar1 = (long *)(lVar12 + lVar19);
      *plVar1 = (long)pppuVar11;
      plVar1[1] = lStack_108;
      plVar22 = plVar1 + 2;
      _memcpy(plVar1 + (lVar19 >> 4) * -2,lVar18,lVar19);
      *(long **)(param_1 + 0xf0) = plVar1 + (lVar19 >> 4) * -2;
      *(long **)(param_1 + 0xf8) = plVar22;
      *(ulong *)(param_1 + 0x100) = lVar12 + uVar14 * 0x10;
      if (lVar18 != 0) {
        __ZdlPv(lVar18);
      }
    }
    *(long **)(param_1 + 0xf8) = plVar22;
    iVar15 = (int)(dStack_1b8 * 1000.0);
    *(undefined8 *)(param_1 + 0xc0) = 0x100;
    iVar7 = iVar15 - *(int *)(param_1 + 0x80);
    if (iVar7 == 0 || iVar15 < *(int *)(param_1 + 0x80)) {
      iVar7 = 0;
    }
    iVar2 = 0;
    if (uVar9 >> 0x20 != 0) {
      iVar2 = (int)uVar9 << 3;
    }
    iVar3 = 0;
    if (*(uint *)(param_1 + 0x78) <= uStack_f4) {
      iVar3 = uStack_f4 - *(uint *)(param_1 + 0x78);
    }
    iVar4 = 0;
    if (*(uint *)(param_1 + 0x7c) <= uStack_f8) {
      iVar4 = uStack_f8 - *(uint *)(param_1 + 0x7c);
    }
    *(uint *)(param_1 + 0x78) = uStack_f4;
    *(uint *)(param_1 + 0x7c) = uStack_f8;
    *(int *)(param_1 + 0x80) = iVar15;
    uVar17 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x88) = uStack_198;
    *(undefined8 *)(param_1 + 0x90) = uStack_190;
    dVar23 = *(double *)(param_1 + 0x98);
    *(double *)(param_1 + 0x98) = dStack_1c8;
    *(undefined8 *)(param_1 + 0xa0) = uStack_210;
    *(int *)(param_1 + 0xa8) = iStack_218;
    *(int *)(param_1 + 0xac) = iStack_240;
    iVar15 = 0;
    if (*(ulong *)(param_1 + 0xb8) <= uStack_1c0) {
      iVar15 = (int)uStack_1c0 - (int)*(ulong *)(param_1 + 0xb8);
    }
    *(undefined8 *)(param_1 + 0xb0) = uStack_1b0;
    *(ulong *)(param_1 + 0xb8) = uStack_1c0;
    piVar5 = (int *)param_2[1];
    uVar6 = (undefined1)(uVar9 >> 0x20);
    if (piVar5 < (int *)param_2[2]) {
      *piVar5 = iVar7;
      piVar5[1] = iStack_1d4;
      piVar5[2] = iVar2;
      *(undefined1 *)(piVar5 + 3) = uVar6;
      piVar5[4] = iVar3;
      piVar5[5] = iVar4;
      *(undefined8 *)(piVar5 + 6) = uVar17;
      func_0x00010897f844();
      lVar21 = extraout_x8_00 + 0x50;
      *(int *)(extraout_x8_00 + 0x48) = iVar15;
    }
    else {
      lVar18 = *param_2;
      lVar19 = (long)piVar5 - lVar18;
      uVar9 = lVar19 / 0x50 + 1;
      if (0x333333333333333 < uVar9) {
        func_0x00010897f674(dStack_1c8,0,dVar23,dStack_1c8 - dVar23);
LAB_10897f44c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10897f450);
        (*pcVar8)();
      }
      uVar14 = (param_2[2] - lVar18) / 0x50;
      uVar16 = uVar14 * 2;
      if (uVar16 < uVar9 || uVar16 - uVar9 == 0) {
        uVar16 = uVar9;
      }
      if (0x199999999999998 < uVar14) {
        uVar16 = 0x333333333333333;
      }
      if (uVar16 == 0) {
        lVar12 = 0;
      }
      else {
        if (0x333333333333333 < uVar16) {
          func_0x000104bd35f4();
          goto LAB_10897f44c;
        }
        lVar12 = uVar16 * 0x50;
        __Znwm();
      }
      piVar5 = (int *)(lVar12 + lVar19);
      *piVar5 = iVar7;
      piVar5[1] = iStack_1d4;
      piVar5[2] = iVar2;
      *(undefined1 *)(piVar5 + 3) = uVar6;
      piVar5[4] = iVar3;
      piVar5[5] = iVar4;
      *(undefined8 *)(piVar5 + 6) = uVar17;
      func_0x00010897f844();
      *(int *)(extraout_x8_01 + 0x48) = iVar15;
      lVar21 = extraout_x8_01 + 0x50;
      lVar20 = extraout_x8_01 + (lVar19 / -0x50) * extraout_x9;
      _memcpy(lVar20,lVar18,lVar19);
      *param_2 = lVar20;
      param_2[1] = lVar21;
      param_2[2] = lVar12 + uVar16 * 0x50;
      if (lVar18 != 0) {
        __ZdlPv(lVar18);
      }
    }
    param_2[1] = lVar21;
  }
  func_0x00010897f888();
  return;
}



/* Entry: 10897f47c; end: 10897f4b3;  */

ulong FUN_10897f47c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = 0;
  if (*param_1 <= param_3) {
    lVar2 = param_3 - *param_1;
  }
  lVar3 = 0;
  if (param_1[1] <= param_2) {
    lVar3 = param_2 - param_1[1];
  }
  *param_1 = param_3;
  param_1[1] = param_2;
  uVar1 = lVar3 + lVar2;
  if (uVar1 != 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = (ulong)(lVar3 * 100) / uVar1;
    }
    return uVar4;
  }
  return 0;
}



/* Entry: 10897f4b4; end: 10897f583;  */

void FUN_10897f4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined1 auStack_b0 [144];
  
  FUN_108982878(auStack_b0,*(undefined4 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0xe0),
                param_3,param_1 + 0x30,*(undefined8 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x24));
  plVar1 = *(long **)(param_1 + 0x10);
  func_0x00010897f85c();
  (*extraout_x8)();
  func_0x00010897f85c();
  (*extraout_x8_00)();
  func_0x00010897f8a0(*(undefined8 *)(param_1 + 8));
  (*extraout_x8_01)();
  func_0x00010897f8a0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  (*extraout_x8_02)();
  *(long **)(param_1 + 8) = plVar1;
  if ((*(long *)(param_1 + 0x108) != 0) && (*(long *)(param_1 + 0x110) != 0)) {
    (**(code **)(*plVar1 + 0x98))(plVar1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  func_0x00010897f7e4();
  func_0x000108a166ec(auStack_b0);
  return;
}



/* Entry: 10897f584; end: 10897f60b;  */

void FUN_10897f584(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1[0x22] == 0) {
    puVar1 = param_1;
    FUN_1089a3c0c();
    puVar2 = puVar1;
    func_0x00010897f7fc();
    func_0x00010897f83c();
    func_0x00010897f894(*puVar1,puVar2);
    func_0x00010897f880();
    func_0x00010897f814();
  }
  param_1[0x21] = param_2;
  param_1[0x22] = param_3;
  (**(code **)(*(long *)param_1[1] + 0x98))((long *)param_1[1],param_2,param_3);
  return;
}



/* Entry: 10897f60c; end: 10897f667;  */

long * FUN_10897f60c(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10897f668; end: 10897f67f;  */

void FUN_10897f668(void)

{
  func_0x00010897f868();
  func_0x00010897f868();
  return;
}



/* Entry: 10897f680; end: 10897f687;  */

void FUN_10897f680(void)

{
  return;
}



/* Entry: 10897f688; end: 10897f6b7;  */

void FUN_10897f688(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110aa18d0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10897f6b8; end: 10897f6e7;  */

void FUN_10897f6b8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110aa18d0;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 10897f6e8; end: 10897f75b;  */

void FUN_10897f6e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  FUN_1089a3c0c();
  puVar1 = param_1;
  func_0x00010897f83c();
  func_0x00010897f894(*param_1,puVar1);
  (*extraout_x8)();
  func_0x00010897f814();
  return;
}



/* Entry: 10897f75c; end: 10897f793;  */

long FUN_10897f75c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110aa1940);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10897f794; end: 10897f79f;  */

undefined ** FUN_10897f794(void)

{
  return &PTR_DAT_110aa1940;
}


