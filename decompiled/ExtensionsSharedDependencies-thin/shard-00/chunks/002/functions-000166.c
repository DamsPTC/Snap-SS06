/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0040b16c; end: 0040b1df;  */

void FUN_0040b16c(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_00353254(auStack_38,"grpc.max_receive_message_length");
  FUN_0040ad88(param_1,auStack_38,param_2);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 0040b1e0; end: 0040b1fb;  */

void FUN_0040b1e0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1;
  *param_2 = lVar2 >> 5;
  if (lVar2 != 0) {
    param_2[1] = lVar1;
  }
  return;
}



/* Entry: 0040b1fc; end: 0040b25b;  */

void FUN_0040b1fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar3 = (long *)param_1[1];
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar3 = (long *)plVar3[1];
      FUN_0040b25c(param_1);
    }
  }
  return;
}



/* Entry: 0040b25c; end: 0040b28b;  */

void FUN_0040b25c(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 0040b28c; end: 0040b303;  */

char * FUN_0040b28c(undefined8 param_1,undefined8 param_2,undefined8 param_3,qword *param_4)

{
  char *pcVar1;
  qword qVar2;
  
  pcVar1 = segment_command_00000020.segname;
  __Znwm();
  *(undefined8 *)pcVar1 = param_2;
  *(undefined8 *)(pcVar1 + 8) = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    FUN_002971d4(pcVar1 + 0x10,*param_4,param_4[1]);
  }
  else {
    qVar2 = *param_4;
    *(qword *)(pcVar1 + 0x18) = param_4[1];
    *(qword *)(pcVar1 + 0x10) = qVar2;
    *(qword *)(pcVar1 + 0x20) = param_4[2];
  }
  return pcVar1;
}



/* Entry: 0040b304; end: 0040b37f;  */

undefined8 * FUN_0040b304(undefined8 *param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_009e2680;
  param_1[2] = param_2;
  (**(code **)(*plRam0000000000b65da0 + 0x70))(plRam0000000000b65da0,param_1 + 4);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  param_1[3] = 1;
  return param_1;
}



/* Entry: 0040b380; end: 0040b3bb;  */

void FUN_0040b380(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0040b3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plRam0000000000b65da0 + 0x38))
              (plRam0000000000b65da0,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 0040b3bc; end: 0040b45f;  */

void FUN_0040b3bc(long param_1,ulong *param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  while( true ) {
    while( true ) {
      uVar2 = *(ulong *)(param_1 + 0x10);
      plVar3 = param_4;
      FUN_003f6f24(uVar2,param_4,param_5,0);
      iVar1 = (int)uVar2;
      if (iVar1 != 2) break;
      *(bool *)param_3 = uVar2 >> 0x20 != 0;
      *param_2 = (ulong)plVar3;
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
      if (((ulong)plVar3 & 1) != 0) {
        return;
      }
    }
    if (iVar1 == 0) break;
    if (iVar1 == 1) {
      return;
    }
  }
  return;
}



/* Entry: 0040b460; end: 0040b6ff;  */

ulong FUN_0040b460(void)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  dword *pdVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined2 auStack_70 [4];
  undefined8 uStack_68;
  
  func_0x00339fa0(0xafb198,FUN_0040b810);
  uVar3 = uRam0000000000b5f538;
  func_0x00339d8c(uRam0000000000b5f538);
  iVar1 = iRam0000000000b5f520 + 1;
  bVar2 = iRam0000000000b5f520 == 0;
  iRam0000000000b5f520 = iVar1;
  if (bVar2) {
    uVar5 = 0x78;
    __Znwm();
    puStack_98 = (ulong *)((long)&MACH_HEADER.magic + 2);
    puStack_90 = (ulong *)((ulong)puStack_90 & 0xffffffff00000000);
    puStack_88 = (ulong *)0x0;
    uVar12 = uVar5;
    FUN_00408cac();
    uRam0000000000b5f528 = uVar5;
    FUN_00338d88();
    uVar8 = (uint)(uVar12 >> 1) & 0x7fffffff;
    if (0xf < uVar8) {
      uVar8 = 0x10;
    }
    uVar13 = 2;
    if (3 < (uint)uVar12) {
      uVar13 = uVar8;
    }
    pdVar6 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined8 *)pdVar6 = 0;
    *(undefined8 *)(pdVar6 + 2) = 0;
    *(undefined8 *)(pdVar6 + 4) = 0;
    pdRam0000000000b5f530 = pdVar6;
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      do {
        pdVar6 = pdRam0000000000b5f530;
        uVar12 = *(ulong *)(pdRam0000000000b5f530 + 2);
        puVar7 = (ulong *)(pdRam0000000000b5f530 + 4);
        if (uVar12 < *puVar7) {
          puStack_98 = (ulong *)CONCAT62(puStack_98._2_6_,0x101);
          puStack_90 = (ulong *)0x0;
          FUN_0033b6e0(uVar12,"nexting_thread",FUN_0040b854,uRam0000000000b5f528,0,&puStack_98);
          lVar11 = uVar12 + 0x20;
          *(long *)(pdVar6 + 2) = lVar11;
        }
        else {
          lVar11 = (long)(uVar12 - *(long *)pdRam0000000000b5f530) >> 5;
          uVar12 = lVar11 + 1;
          if (uVar12 >> 0x3b != 0) {
            FUN_003b6294(pdRam0000000000b5f530);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x40b6a0);
            (*pcVar4)();
          }
          uVar9 = *puVar7 - *(long *)pdRam0000000000b5f530;
          uVar5 = (long)uVar9 >> 4;
          if (uVar5 <= uVar12) {
            uVar5 = uVar12;
          }
          if (0x7fffffffffffffdf < uVar9) {
            uVar5 = 0x7ffffffffffffff;
          }
          puStack_78 = puVar7;
          if (uVar5 == 0) {
            puStack_98 = (ulong *)0x0;
          }
          else {
            FUN_003b62a8();
            puStack_98 = puVar7;
          }
          puStack_90 = puStack_98 + lVar11 * 4;
          puStack_80 = puStack_98 + uVar5 * 4;
          auStack_70[0] = 0x101;
          uStack_68 = 0;
          puStack_88 = puStack_90;
          FUN_0033b6e0(puStack_90,"nexting_thread",FUN_0040b854,uRam0000000000b5f528,0,auStack_70);
          puStack_88 = puStack_88 + 4;
          FUN_003b61f8(pdVar6,&puStack_98);
          lVar11 = *(long *)(pdVar6 + 2);
          func_0x003b62dc(&puStack_98);
        }
        *(long *)(pdVar6 + 2) = lVar11;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      lVar11 = *(long *)pdRam0000000000b5f530;
    }
    lVar10 = *(long *)(pdRam0000000000b5f530 + 2);
    for (; lVar11 != lVar10; lVar11 = lVar11 + 0x20) {
      FUN_003b3344(lVar11);
    }
  }
  uVar12 = uRam0000000000b5f528;
  func_0x00339da8(uVar3);
  return uVar12;
}



/* Entry: 0040b700; end: 0040b80f;  */

void FUN_0040b700(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_48;
  
  uVar6 = uRam0000000000b5f538;
  func_0x00339d8c(uRam0000000000b5f538);
  plVar5 = plRam0000000000b5f528;
  iRam0000000000b5f520 = iRam0000000000b5f520 + -1;
  if (iRam0000000000b5f520 != 0) goto LAB_0040b7d0;
  plVar1 = plRam0000000000b5f528 + 3;
  do {
    lVar7 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 + -1 == 0) {
    (**(code **)(*plRam0000000000b65da0 + 0x38))(plRam0000000000b65da0,plVar5[2]);
  }
  lVar7 = *plRam0000000000b5f530;
  lVar2 = plRam0000000000b5f530[1];
  if (lVar7 == lVar2) {
LAB_0040b7a8:
    plVar5 = plRam0000000000b5f530;
    plStack_48 = plRam0000000000b5f530;
    FUN_003b6084(&plStack_48);
    __ZdlPv(plVar5);
  }
  else {
    do {
      FUN_003b33cc(lVar7);
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar2);
    if (plRam0000000000b5f530 != (long *)0x0) goto LAB_0040b7a8;
  }
  if (plRam0000000000b5f528 != (long *)0x0) {
    (**(code **)(*plRam0000000000b5f528 + 8))();
  }
LAB_0040b7d0:
  func_0x00339da8(uVar6);
  return;
}



/* Entry: 0040b810; end: 0040b853;  */

void FUN_0040b810(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  FUN_00339d50();
  uRam0000000000b5f538 = uVar1;
  return;
}



/* Entry: 0040b854; end: 0040b91b;  */

void FUN_0040b854(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  while( true ) {
    while( true ) {
      puVar1 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      FUN_0033a598();
      uVar2 = 1000;
      uVar4 = 3;
      func_0x0033a104(1000,3);
      FUN_0033a118(puVar1,param_2,uVar2,uVar4);
      uVar3 = uVar5;
      FUN_003f6f24(uVar5,puVar1,param_2,0);
      if ((int)uVar3 != 1) break;
      FUN_0033a598();
      uVar2 = 100;
      uVar4 = 3;
      func_0x0033a104(100,3);
      FUN_0033a118(uVar3,puVar1,uVar2,uVar4);
      FUN_0033a5d4();
      param_2 = puVar1;
    }
    if ((int)uVar3 == 0) break;
    param_2 = (undefined8 *)(uVar3 >> 0x20);
    (*(code *)*puVar1)(puVar1);
  }
  return;
}



/* Entry: 0040b91c; end: 0040b93f;  */

void FUN_0040b91c(void)

{
  FUN_004086e0(0xb5f518);
  uRam0000000000b5f520 = 0;
  return;
}



/* Entry: 0040b940; end: 0040bad3;  */

undefined ** FUN_0040b940(undefined8 param_1,undefined **param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_128 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (0xfffffffd < *(int *)param_2 - 3U) {
    return &PTR_s_Default_Factory_009e1cb8;
  }
  ppuVar5 = param_2;
  func_0x00775b64();
  uStack_18 = 0x3f8750;
  ppuStack_50 = &puStack_20;
  if (param_2 == (undefined **)0x0) {
    uStack_38 = 0;
    uStack_40 = 1;
    uStack_30 = 0;
    ppuVar5 = &PTR_s_Default_Factory_009e1cb8;
    puStack_20 = &stack0xfffffffffffffff0;
    (*(code *)PTR_FUN_00afb140)(&PTR_s_Default_Factory_009e1cb8,&uStack_40);
    return ppuVar5;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00775b98();
  uStack_48 = 0x3f87a0;
  if (param_2 == (undefined **)0x0) {
    uStack_68 = 0;
    uStack_70 = 0x100000001;
    uStack_60 = 0;
    ppuVar5 = &PTR_s_Default_Factory_009e1cb8;
    (*(code *)PTR_FUN_00afb140)(&PTR_s_Default_Factory_009e1cb8,&uStack_70);
    return ppuVar5;
  }
  func_0x00775bcc();
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003f8808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_2[2])();
    return param_2;
  }
  func_0x00775c00();
  uVar1 = *(uint *)((long)ppuVar5 + 4);
  uVar2 = (ulong)*(uint *)(ppuVar5 + 1);
  puVar6 = ppuVar5[2];
  lVar3 = (ulong)uVar1 * 0x48;
  puVar4 = auStack_128;
  FUN_003413d4();
  lVar7 = *(long *)(&UNK_009e1ac0 + lVar3);
  (*(code *)(&PTR_SUB_009e1b98)[uVar2 * 7])();
  ppuVar5 = (undefined **)(puVar4 + lVar7 + 0x48);
  func_0x00338c94();
  ppuVar5[2] = &UNK_009e1ab8 + lVar3;
  ppuVar5[3] = &UNK_009e1b90 + uVar2 * 0x38;
  *ppuVar5 = (undefined *)0x2;
  (*(code *)(&PTR_SUB_009e1ba0)[uVar2 * 7])((long)(ppuVar5 + 9) + lVar7,ppuVar5 + 1);
  (*(code *)(&PTR_DAT_009e1ac8)[(ulong)uVar1 * 9])(ppuVar5 + 9,puVar6);
  ppuVar5[5] = FUN_003f6ea0;
  ppuVar5[6] = (undefined *)ppuVar5;
  ppuVar5[7] = (undefined *)0x0;
  FUN_00341470(auStack_128);
  return ppuVar5;
}



/* Entry: 0040bad4; end: 0040bb7b;  */

/* WARNING: Removing unreachable block (ram,0x003ec620) */
/* WARNING: Removing unreachable block (ram,0x003ec62c) */
/* WARNING: Removing unreachable block (ram,0x003ec634) */
/* WARNING: Removing unreachable block (ram,0x003ec63c) */

void FUN_0040bad4(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  undefined8 *puVar11;
  undefined8 *extraout_x8_00;
  long lVar12;
  long *plVar13;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  code *pcVar14;
  ulong auStack_a0 [7];
  undefined8 uStack_68;
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  undefined1 *puVar8;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  FUN_003eca28(&uStack_40);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_48 = 0x40bb28;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_a0[5] = param_2[1];
  auStack_a0[4] = *param_2;
  uStack_68 = param_2[3];
  auStack_a0[6] = param_2[2];
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x003eca00(auStack_a0 + 4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  pcVar14 = FUN_0040bb7c;
  ___stack_chk_fail();
  puVar6 = auStack_a0 + 4;
  puVar11 = extraout_x8_00;
  puVar7 = &uStack_40;
  do {
    uVar10 = param_3;
    puVar9 = param_2;
    puVar8 = (undefined1 *)puVar6;
    *(undefined8 **)(puVar8 + -0x20) = unaff_x20;
    *(ulong *)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = (undefined1 *)((long)puVar7 + -0x10);
    *(code **)(puVar8 + -8) = pcVar14;
    plVar13 = (long *)*puVar9;
    if (plVar13 == (long *)((long)&MACH_HEADER.magic + 1)) {
      lVar12 = puVar9[1];
      puVar11[2] = puVar9[2] + uVar10;
      *puVar11 = 1;
      puVar11[1] = lVar12 - uVar10;
LAB_003ec668:
      puVar9[1] = uVar10;
      return;
    }
    param_2 = puVar9;
    param_3 = uVar10;
    if (plVar13 == (long *)0x0) {
      bVar1 = *(byte *)(puVar9 + 1);
      if (uVar10 <= bVar1) {
        *puVar11 = 0;
        uVar4 = (uint)bVar1 - (int)uVar10;
        *(char *)(puVar11 + 1) = (char)uVar4;
        _memcpy((long)puVar11 + 9,(long)puVar9 + uVar10 + 9,uVar4 & 0xff);
        *(char *)(puVar9 + 1) = (char)uVar10;
        return;
      }
      func_0x007752f4();
    }
    else {
      uVar5 = puVar9[1] - uVar10;
      if (uVar10 <= (ulong)puVar9[1]) {
        if (uVar5 < 0x17) {
          *puVar11 = 0;
          *(char *)(puVar11 + 1) = (char)uVar5;
          _memcpy((long)puVar11 + 9,puVar9[2] + uVar10);
        }
        else {
          *puVar11 = plVar13;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar12 = puVar9[2];
          puVar11[1] = uVar5;
          puVar11[2] = lVar12 + uVar10;
        }
        goto LAB_003ec668;
      }
    }
    pcVar14 = FUN_003ec680;
    func_0x007752c0();
    puVar6 = (ulong *)(puVar8 + -0x20);
    puVar11 = extraout_x8;
    unaff_x19 = uVar10;
    unaff_x20 = puVar9;
    puVar7 = (undefined8 *)puVar8;
  } while( true );
}



/* Entry: 0040bb7c; end: 0040bb93;  */

/* WARNING: Removing unreachable block (ram,0x003ec620) */
/* WARNING: Removing unreachable block (ram,0x003ec62c) */
/* WARNING: Removing unreachable block (ram,0x003ec634) */
/* WARNING: Removing unreachable block (ram,0x003ec63c) */

void FUN_0040bb7c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long *plVar10;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar6 = (undefined1 *)register0x00000008;
  do {
    uVar8 = param_4;
    puVar7 = param_3;
    *(undefined8 **)(puVar6 + -0x20) = unaff_x20;
    *(ulong *)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
    *(code **)(puVar6 + -8) = unaff_x30;
    unaff_x29 = puVar6 + -0x10;
    plVar10 = (long *)*puVar7;
    if (plVar10 == (long *)((long)&MACH_HEADER.magic + 1)) {
      lVar9 = puVar7[1];
      param_1[2] = puVar7[2] + uVar8;
      *param_1 = 1;
      param_1[1] = lVar9 - uVar8;
LAB_003ec668:
      puVar7[1] = uVar8;
      return;
    }
    param_3 = puVar7;
    param_4 = uVar8;
    if (plVar10 == (long *)0x0) {
      bVar1 = *(byte *)(puVar7 + 1);
      if (uVar8 <= bVar1) {
        *param_1 = 0;
        uVar4 = (uint)bVar1 - (int)uVar8;
        *(char *)(param_1 + 1) = (char)uVar4;
        _memcpy((long)param_1 + 9,(long)puVar7 + uVar8 + 9,uVar4 & 0xff);
        *(char *)(puVar7 + 1) = (char)uVar8;
        return;
      }
      func_0x007752f4();
    }
    else {
      uVar5 = puVar7[1] - uVar8;
      if (uVar8 <= (ulong)puVar7[1]) {
        if (uVar5 < 0x17) {
          *param_1 = 0;
          *(char *)(param_1 + 1) = (char)uVar5;
          _memcpy((long)param_1 + 9,puVar7[2] + uVar8);
        }
        else {
          *param_1 = plVar10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar3) {
              *plVar10 = *plVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar9 = puVar7[2];
          param_1[1] = uVar5;
          param_1[2] = lVar9 + uVar8;
        }
        goto LAB_003ec668;
      }
    }
    unaff_x30 = FUN_003ec680;
    func_0x007752c0();
    puVar6 = puVar6 + -0x20;
    param_1 = extraout_x8;
    unaff_x19 = uVar8;
    unaff_x20 = puVar7;
  } while( true );
}



/* Entry: 0040bb94; end: 0040bbef;  */

void FUN_0040bb94(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *extraout_x8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  FUN_003ec47c(&uStack_40);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = 1;
  extraout_x8[1] = param_4;
  extraout_x8[2] = param_3;
  extraout_x8[3] = 0;
  return;
}



/* Entry: 0040bbf0; end: 0040bc07;  */

void FUN_0040bbf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 1;
  param_1[1] = param_4;
  param_1[2] = param_3;
  param_1[3] = 0;
  return;
}



/* Entry: 0040bc08; end: 0040bcb7;  */

void FUN_0040bc08(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  FUN_003ecb34(param_2,&uStack_40);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_80;
  uStack_48 = 0x40bc60;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_68 = param_3[3];
  uStack_70 = param_3[2];
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_003ecd90(puVar2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)((long)puVar3 + 0x10) != 0) {
    lVar4 = *(long *)((long)puVar3 + 0x10) + -1;
    *(long *)((long)puVar3 + 0x10) = lVar4;
    plVar1 = (long *)(*(long *)((long)puVar3 + 8) + lVar4 * 0x20);
    puVar5 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar6 = (ulong)(byte)*puVar5;
    }
    else {
      uVar6 = *puVar5;
    }
    *(ulong *)((long)puVar3 + 0x20) = *(long *)((long)puVar3 + 0x20) - uVar6;
  }
  return;
}



/* Entry: 0040bcb8; end: 0040bcff;  */

void FUN_0040bcb8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar2 = *(long *)(param_2 + 0x10) + -1;
    *(long *)(param_2 + 0x10) = lVar2;
    plVar1 = (long *)(*(long *)(param_2 + 8) + lVar2 * 0x20);
    puVar3 = (ulong *)(plVar1 + 1);
    if (*plVar1 == 0) {
      uVar4 = (ulong)(byte)*puVar3;
    }
    else {
      uVar4 = *puVar3;
    }
    *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) - uVar4;
  }
  return;
}



/* Entry: 0040bd00; end: 0040bd2f;  */

void FUN_0040bd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00339074(param_3,param_4,2,"assertion failed: %s");
  _abort();
  return;
}



/* Entry: 0040bd30; end: 0040bd37;  */

void FUN_0040bd30(void)

{
  return;
}



/* Entry: 0040bd38; end: 0040be73;  */

void FUN_0040bd38(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  if (param_2[1] != *param_2) {
    uVar4 = 1;
    uVar11 = 0;
    do {
      uVar10 = uVar4;
      FUN_00353254(&uStack_68,"grpc.ssl_target_name_override");
      lVar9 = *param_2;
      uVar8 = *(ulong *)(lVar9 + uVar11 * 0x20 + 8);
      uVar4 = uVar8;
      _strlen();
      uVar1 = uStack_68;
      if ((char)bStack_51 < '\0') {
        if (uVar4 == uStack_60) {
          if (uVar4 == 0xffffffffffffffff) goto LAB_0040be64;
          uVar6 = uStack_68;
          _memcmp(uStack_68,uVar8);
          __ZdlPv(uVar1);
          lVar9 = *param_2;
          iVar3 = (int)uVar6;
          goto joined_r0x0040be00;
        }
        __ZdlPv(uStack_68);
        lVar9 = *param_2;
      }
      else if (uVar4 == bStack_51) {
        if (uVar4 == 0xffffffffffffffff) {
LAB_0040be64:
          FUN_003c4cd0(&uStack_68);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x40be70);
          (*pcVar2)();
        }
        puVar5 = &uStack_68;
        _memcmp(puVar5,uVar8);
        iVar3 = (int)puVar5;
joined_r0x0040be00:
        if (iVar3 == 0) {
          pcVar7 = *(char **)(lVar9 + uVar11 * 0x20 + 0x10);
          goto LAB_0040be40;
        }
      }
      uVar4 = (ulong)((int)uVar10 + 1);
      uVar11 = uVar10;
    } while (uVar10 < (ulong)(param_2[1] - lVar9 >> 5));
  }
  pcVar7 = "";
LAB_0040be40:
  FUN_00353254(param_1,pcVar7);
  return;
}



/* Entry: 0040be74; end: 0040be83;  */

ulong * FUN_0040be74(ulong *param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong *puVar3;
  
  pcVar2 = "1.48.0";
  _strlen();
  if ((char *)0x7ffffffffffffff7 < pcVar2) {
    func_0x0033b318();
    if (*param_1 != 0) {
      func_0x003711f8();
    }
    return param_1;
  }
  if (pcVar2 < "") {
    *(char *)((long)param_1 + 0x17) = (char)pcVar2;
    puVar3 = param_1;
    if (pcVar2 == (char *)0x0) goto LAB_003532e0;
  }
  else {
    uVar1 = ((ulong)pcVar2 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar2 | 7) != 0x17) {
      uVar1 = (ulong)pcVar2 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    __Znwm();
    param_1[1] = (ulong)pcVar2;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  _memmove(puVar3,"1.48.0",pcVar2);
LAB_003532e0:
  *(char *)((long)puVar3 + (long)pcVar2) = '\0';
  return param_1;
}



/* Entry: 0040be84; end: 0040bf07;  */

/* WARNING: Removing unreachable block (ram,0x0040c0d8) */
/* WARNING: Removing unreachable block (ram,0x0040c0c0) */
/* WARNING: Removing unreachable block (ram,0x0040c038) */
/* WARNING: Removing unreachable block (ram,0x0040c0c8) */
/* WARNING: Removing unreachable block (ram,0x0040c120) */

long * FUN_0040be84(long *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  char *pcVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 in_x7;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong unaff_x22;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  ulong uStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined1 ****ppppuStack_1e0;
  code *pcStack_1d8;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_148;
  ulong uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 auStack_108 [24];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_28;
  
  plVar5 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_48 = param_1[1];
  lStack_50 = *param_1;
  lStack_38 = param_1[3];
  lStack_40 = param_1[2];
  plVar3 = plRam0000000000b65da0;
  (**(code **)(*plRam0000000000b65da0 + 0x150))();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)plVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  puStack_60 = &stack0xfffffffffffffff0;
  pcStack_58 = FUN_0040bf08;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0040c16c(plVar5,*plVar5);
  if (*plVar3 == 0) {
    pcVar8 = "Buffer not initialized";
    FUN_00353254(&lStack_b0);
    *extraout_x8 = 9;
  }
  else {
    iVar2 = (int)auStack_108;
    FUN_003ee4b0();
    if (iVar2 != 0) {
      iVar2 = (int)auStack_108;
      pcVar8 = (char *)&lStack_d0;
      func_0x003ee51c();
      while (iVar2 != 0) {
        uStack_e8 = uStack_c8;
        lStack_f0 = lStack_d0;
        uStack_d8 = uStack_b8;
        uStack_e0 = uStack_c0;
        unaff_x22 = plVar5[1];
        if (unaff_x22 < (ulong)plVar5[2]) {
          FUN_0040c214(plVar5,&lStack_f0);
          puVar4 = (undefined8 *)(unaff_x22 + 0x20);
        }
        else {
          puVar4 = plVar5;
          FUN_0040c2b8(plVar5,&lStack_f0);
        }
        plVar5[1] = (long)puVar4;
        uStack_a8 = uStack_e8;
        lStack_b0 = lStack_f0;
        uStack_98 = uStack_d8;
        uStack_a0 = uStack_e0;
        (**(code **)(*plRam0000000000b65da0 + 0x150))(plRam0000000000b65da0,&lStack_b0);
        iVar2 = (int)auStack_108;
        pcVar8 = (char *)&lStack_d0;
        func_0x003ee51c();
      }
      func_0x003ee4cc(auStack_108);
      puVar1 = puRam0000000000b65db0;
      plVar3 = (long *)(extraout_x8 + 2);
      *extraout_x8 = *puRam0000000000b65db0;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        pcVar8 = *(char **)(puVar1 + 2);
        FUN_002971d4(plVar3,pcVar8,*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar18 = *(undefined8 *)(puVar1 + 4);
        lVar16 = *(long *)(puVar1 + 2);
        *(undefined8 *)(extraout_x8 + 6) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(extraout_x8 + 4) = uVar18;
        *plVar3 = lVar16;
      }
      plVar5 = (long *)(extraout_x8 + 8);
      if (*(char *)((long)puVar1 + 0x37) < '\0') {
        pcVar8 = *(char **)(puVar1 + 8);
        FUN_002971d4(plVar5,pcVar8,*(undefined8 *)(puVar1 + 10));
      }
      else {
        uVar18 = *(undefined8 *)(puVar1 + 10);
        lVar16 = *(long *)(puVar1 + 8);
        *(undefined8 *)(extraout_x8 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
        *(undefined8 *)(extraout_x8 + 10) = uVar18;
        *plVar5 = lVar16;
      }
      goto LAB_0040c0e0;
    }
    pcVar8 = "Couldn\'t initialize byte buffer reader";
    FUN_00353254(&lStack_b0);
    *extraout_x8 = 0xd;
  }
  plVar5 = (long *)(extraout_x8 + 2);
  *(undefined8 *)(extraout_x8 + 4) = uStack_a8;
  *plVar5 = lStack_b0;
  *(undefined8 *)(extraout_x8 + 6) = uStack_a0;
  *(undefined8 *)(extraout_x8 + 10) = 0;
  *(undefined8 *)(extraout_x8 + 0xc) = 0;
  *(undefined8 *)(extraout_x8 + 8) = 0;
LAB_0040c0e0:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar15 = plVar5;
  __Unwind_Resume();
  pcStack_118 = FUN_0040c16c;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar14 = (long *)plVar15[1];
  plVar6 = plVar15;
  plVar9 = (long *)pcVar8;
  uVar17 = unaff_x22;
  uStack_140 = unaff_x22;
  plStack_138 = plVar3;
  plStack_130 = plVar5;
  ppuStack_120 = &puStack_60;
  if (plVar14 != (long *)pcVar8) {
    uVar17 = 0xb65da0;
    do {
      lStack_168 = plVar14[-3];
      lStack_170 = plVar14[-4];
      lStack_158 = plVar14[-1];
      lStack_160 = plVar14[-2];
      plVar6 = plRam0000000000b65da0;
      plVar9 = &lStack_170;
      (**(code **)(*plRam0000000000b65da0 + 0x150))();
      plVar14 = plVar14 + -4;
    } while (plVar14 != (long *)pcVar8);
  }
  plVar15[1] = (long)pcVar8;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_148) {
    ___stack_chk_fail();
    if ((int)plVar9 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10();
    uStack_1a0 = uVar17;
    plStack_198 = plVar14;
    plStack_190 = plVar15;
    plStack_188 = (long *)pcVar8;
    pppuStack_180 = &ppuStack_120;
    pcStack_178 = FUN_0040c214;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_00999f88;
    plVar15 = (long *)plVar6[1];
    lVar16 = *plVar9;
    lVar19 = plVar9[3];
    lVar12 = plVar9[2];
    plVar15[1] = plVar9[1];
    *plVar15 = lVar16;
    plVar15[3] = lVar19;
    plVar15[2] = lVar12;
    plVar3 = plRam0000000000b65da0;
    plVar5 = plVar9;
    (**(code **)(*plRam0000000000b65da0 + 0x140))(&lStack_1c8);
    plVar9[1] = lStack_1c0;
    *plVar9 = lStack_1c8;
    plVar9[3] = lStack_1b0;
    plVar9[2] = lStack_1b8;
    plVar6[1] = (long)(plVar15 + 4);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1a8) {
      return plVar3;
    }
    ___stack_chk_fail();
    if ((int)plVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10();
    pplVar10 = &plStack_250;
    pplVar7 = &plStack_250;
    uStack_200 = uVar17;
    plStack_1f8 = plVar15;
    plStack_1f0 = plVar9;
    plStack_1e8 = plVar6;
    ppppuStack_1e0 = &pppuStack_180;
    pcStack_1d8 = FUN_0040c2b8;
    lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
    lVar16 = plVar3[1] - *plVar3 >> 5;
    uVar17 = lVar16 + 1;
    if (uVar17 >> 0x3b == 0) {
      plVar15 = plVar3 + 2;
      uVar11 = *plVar15 - *plVar3;
      uVar13 = (long)uVar11 >> 4;
      if (uVar13 <= uVar17) {
        uVar13 = uVar17;
      }
      if (0x7fffffffffffffdf < uVar11) {
        uVar13 = 0x7ffffffffffffff;
      }
      plStack_230 = plVar15;
      if (uVar13 == 0) {
        plVar15 = (long *)0x0;
      }
      else {
        FUN_0040c484();
      }
      plVar6 = plVar15 + lVar16 * 4;
      plStack_250 = plVar15;
      plStack_248 = plVar6;
      plStack_240 = plVar6;
      plStack_238 = plVar15 + uVar13 * 4;
      lVar16 = *plVar5;
      lVar19 = plVar5[3];
      lVar12 = plVar5[2];
      plVar6[1] = plVar5[1];
      *plVar6 = lVar16;
      plVar6[3] = lVar19;
      plVar6[2] = lVar12;
      (**(code **)(*plRam0000000000b65da0 + 0x140))(&lStack_228);
      plVar5[1] = lStack_220;
      *plVar5 = lStack_228;
      plVar5[3] = lStack_210;
      plVar5[2] = lStack_218;
      plStack_240 = plVar6 + 4;
      FUN_0040c3fc(plVar3);
      plVar15 = (long *)plVar3[1];
      FUN_0040c710();
      plVar3 = (long *)pplVar7;
      plVar9 = plVar5;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
        return plVar15;
      }
    }
    else {
      FUN_0040c470();
      pplVar10 = (long **)plVar5;
    }
    ___stack_chk_fail();
    FUN_0040c710(&plStack_250);
    __Unwind_Resume(plVar3);
    plVar15 = plVar3;
    func_0x0040cf10();
    plVar5 = plVar15 + 2;
    lVar16 = plVar15[1];
    FUN_0040c4b8(plVar5,lVar16,lVar16,*plVar15,*plVar15,pplVar10[1],pplVar10[1],in_x7,plVar9,plVar3,
                 &ppppuStack_1e0,FUN_0040c3fc);
    pplVar10[1] = (long *)lVar16;
    lVar12 = *plVar15;
    *plVar15 = lVar16;
    pplVar10[1] = (long *)lVar12;
    lVar16 = plVar15[1];
    plVar15[1] = (long)pplVar10[2];
    pplVar10[2] = (long *)lVar16;
    lVar16 = plVar15[2];
    plVar15[2] = (long)pplVar10[3];
    pplVar10[3] = (long *)lVar16;
    *pplVar10 = pplVar10[1];
    return plVar5;
  }
  return plVar6;
}



/* Entry: 0040bf08; end: 0040c16b;  */

/* WARNING: Removing unreachable block (ram,0x0040c0d8) */
/* WARNING: Removing unreachable block (ram,0x0040c0c0) */
/* WARNING: Removing unreachable block (ram,0x0040c038) */
/* WARNING: Removing unreachable block (ram,0x0040c0c8) */
/* WARNING: Removing unreachable block (ram,0x0040c120) */

long * FUN_0040bf08(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  char *pcVar7;
  long *plVar8;
  long **pplVar9;
  undefined8 in_x7;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  ulong uStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined4 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0040c16c(param_3,*param_3);
  if (*param_2 == 0) {
    pcVar7 = "Buffer not initialized";
    FUN_00353254(&lStack_60);
    *param_1 = 9;
  }
  else {
    iVar2 = (int)auStack_b8;
    FUN_003ee4b0();
    if (iVar2 != 0) {
      iVar2 = (int)auStack_b8;
      pcVar7 = (char *)&lStack_80;
      func_0x003ee51c();
      lStack_a0 = lStack_80;
      uStack_98 = uStack_78;
      uStack_90 = uStack_70;
      uStack_88 = uStack_68;
      while (iVar2 != 0) {
        unaff_x22 = param_3[1];
        lStack_80 = lStack_a0;
        uStack_78 = uStack_98;
        uStack_70 = uStack_90;
        uStack_68 = uStack_88;
        if (unaff_x22 < (ulong)param_3[2]) {
          FUN_0040c214(param_3,&lStack_a0);
          puVar3 = (undefined8 *)(unaff_x22 + 0x20);
        }
        else {
          puVar3 = param_3;
          FUN_0040c2b8(param_3,&lStack_a0);
        }
        param_3[1] = puVar3;
        uStack_58 = uStack_98;
        lStack_60 = lStack_a0;
        uStack_48 = uStack_88;
        uStack_50 = uStack_90;
        (**(code **)(*plRam0000000000b65da0 + 0x150))(plRam0000000000b65da0,&lStack_60);
        iVar2 = (int)auStack_b8;
        pcVar7 = (char *)&lStack_80;
        func_0x003ee51c();
        lStack_a0 = lStack_80;
        uStack_98 = uStack_78;
        uStack_90 = uStack_70;
        uStack_88 = uStack_68;
      }
      func_0x003ee4cc(auStack_b8);
      puVar1 = puRam0000000000b65db0;
      param_2 = (long *)(param_1 + 2);
      *param_1 = *puRam0000000000b65db0;
      if (*(char *)((long)puVar1 + 0x1f) < '\0') {
        pcVar7 = *(char **)(puVar1 + 2);
        FUN_002971d4(param_2,pcVar7,*(undefined8 *)(puVar1 + 4));
      }
      else {
        uVar17 = *(undefined8 *)(puVar1 + 4);
        lVar15 = *(long *)(puVar1 + 2);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(param_1 + 4) = uVar17;
        *param_2 = lVar15;
      }
      plVar4 = (long *)(param_1 + 8);
      if (*(char *)((long)puVar1 + 0x37) < '\0') {
        pcVar7 = *(char **)(puVar1 + 8);
        FUN_002971d4(plVar4,pcVar7,*(undefined8 *)(puVar1 + 10));
      }
      else {
        uVar17 = *(undefined8 *)(puVar1 + 10);
        lVar15 = *(long *)(puVar1 + 8);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
        *(undefined8 *)(param_1 + 10) = uVar17;
        *plVar4 = lVar15;
      }
      goto LAB_0040c0e0;
    }
    pcVar7 = "Couldn\'t initialize byte buffer reader";
    FUN_00353254(&lStack_60);
    *param_1 = 0xd;
  }
  plVar4 = (long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = uStack_58;
  *plVar4 = lStack_60;
  *(undefined8 *)(param_1 + 6) = uStack_50;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
LAB_0040c0e0:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_c8 = FUN_0040c16c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar14 = (long *)plVar5[1];
  plVar13 = plVar5;
  plVar8 = (long *)pcVar7;
  uVar16 = unaff_x22;
  uStack_f0 = unaff_x22;
  plStack_e8 = param_2;
  plStack_e0 = plVar4;
  puStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (plVar14 != (long *)pcVar7) {
    uVar16 = 0xb65da0;
    do {
      lStack_118 = plVar14[-3];
      lStack_120 = plVar14[-4];
      lStack_108 = plVar14[-1];
      lStack_110 = plVar14[-2];
      plVar13 = plRam0000000000b65da0;
      plVar8 = &lStack_120;
      (**(code **)(*plRam0000000000b65da0 + 0x150))();
      plVar14 = plVar14 + -4;
    } while (plVar14 != (long *)pcVar7);
  }
  plVar5[1] = (long)pcVar7;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_f8) {
    ___stack_chk_fail();
    if ((int)plVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10();
    uStack_150 = uVar16;
    plStack_148 = plVar14;
    plStack_140 = plVar5;
    plStack_138 = (long *)pcVar7;
    ppuStack_130 = &puStack_d0;
    pcStack_128 = FUN_0040c214;
    lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
    plVar14 = (long *)plVar13[1];
    lVar15 = *plVar8;
    lVar18 = plVar8[3];
    lVar11 = plVar8[2];
    plVar14[1] = plVar8[1];
    *plVar14 = lVar15;
    plVar14[3] = lVar18;
    plVar14[2] = lVar11;
    plVar4 = plRam0000000000b65da0;
    plVar5 = plVar8;
    (**(code **)(*plRam0000000000b65da0 + 0x140))(&lStack_178);
    plVar8[1] = lStack_170;
    *plVar8 = lStack_178;
    plVar8[3] = lStack_160;
    plVar8[2] = lStack_168;
    plVar13[1] = (long)(plVar14 + 4);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
      return plVar4;
    }
    ___stack_chk_fail();
    if ((int)plVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10();
    pplVar9 = &plStack_200;
    pplVar6 = &plStack_200;
    uStack_1b0 = uVar16;
    plStack_1a8 = plVar14;
    plStack_1a0 = plVar8;
    plStack_198 = plVar13;
    pppuStack_190 = &ppuStack_130;
    pcStack_188 = FUN_0040c2b8;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
    lVar15 = plVar4[1] - *plVar4 >> 5;
    uVar16 = lVar15 + 1;
    if (uVar16 >> 0x3b == 0) {
      plVar13 = plVar4 + 2;
      uVar10 = *plVar13 - *plVar4;
      uVar12 = (long)uVar10 >> 4;
      if (uVar12 <= uVar16) {
        uVar12 = uVar16;
      }
      if (0x7fffffffffffffdf < uVar10) {
        uVar12 = 0x7ffffffffffffff;
      }
      plStack_1e0 = plVar13;
      if (uVar12 == 0) {
        plVar13 = (long *)0x0;
      }
      else {
        FUN_0040c484();
      }
      plVar8 = plVar13 + lVar15 * 4;
      plStack_200 = plVar13;
      plStack_1f8 = plVar8;
      plStack_1f0 = plVar8;
      plStack_1e8 = plVar13 + uVar12 * 4;
      lVar15 = *plVar5;
      lVar18 = plVar5[3];
      lVar11 = plVar5[2];
      plVar8[1] = plVar5[1];
      *plVar8 = lVar15;
      plVar8[3] = lVar18;
      plVar8[2] = lVar11;
      (**(code **)(*plRam0000000000b65da0 + 0x140))(&lStack_1d8);
      plVar5[1] = lStack_1d0;
      *plVar5 = lStack_1d8;
      plVar5[3] = lStack_1c0;
      plVar5[2] = lStack_1c8;
      plStack_1f0 = plVar8 + 4;
      FUN_0040c3fc(plVar4);
      plVar13 = (long *)plVar4[1];
      FUN_0040c710();
      plVar4 = (long *)pplVar6;
      plVar8 = plVar5;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
        return plVar13;
      }
    }
    else {
      FUN_0040c470();
      pplVar9 = (long **)plVar5;
    }
    ___stack_chk_fail();
    FUN_0040c710(&plStack_200);
    __Unwind_Resume(plVar4);
    plVar13 = plVar4;
    func_0x0040cf10();
    plVar5 = plVar13 + 2;
    lVar15 = plVar13[1];
    FUN_0040c4b8(plVar5,lVar15,lVar15,*plVar13,*plVar13,pplVar9[1],pplVar9[1],in_x7,plVar8,plVar4,
                 &pppuStack_190,FUN_0040c3fc);
    pplVar9[1] = (long *)lVar15;
    lVar11 = *plVar13;
    *plVar13 = lVar15;
    pplVar9[1] = (long *)lVar11;
    lVar15 = plVar13[1];
    plVar13[1] = (long)pplVar9[2];
    pplVar9[2] = (long *)lVar15;
    lVar15 = plVar13[2];
    plVar13[2] = (long)pplVar9[3];
    pplVar9[3] = (long *)lVar15;
    *pplVar9 = pplVar9[1];
    return plVar5;
  }
  return plVar13;
}



/* Entry: 0040c16c; end: 0040c213;  */

long * FUN_0040c16c(long *param_1,long *param_2)

{
  ulong uVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  long **pplVar5;
  undefined8 in_x7;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 unaff_x22;
  long lVar13;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar10 = (long *)param_1[1];
  plVar9 = param_1;
  plVar4 = param_2;
  if (plVar10 != param_2) {
    unaff_x22 = 0xb65da0;
    do {
      lStack_58 = plVar10[-3];
      lStack_60 = plVar10[-4];
      lStack_48 = plVar10[-1];
      lStack_50 = plVar10[-2];
      plVar9 = plRam0000000000b65da0;
      plVar4 = &lStack_60;
      (**(code **)(*plRam0000000000b65da0 + 0x150))();
      plVar10 = plVar10 + -4;
    } while (plVar10 != param_2);
  }
  param_1[1] = (long)param_2;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return plVar9;
  }
  ___stack_chk_fail();
  if ((int)plVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  uStack_90 = unaff_x22;
  plStack_88 = plVar10;
  plStack_80 = param_1;
  plStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = FUN_0040c214;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar11 = (long *)plVar9[1];
  lVar12 = *plVar4;
  lVar13 = plVar4[3];
  lVar7 = plVar4[2];
  plVar11[1] = plVar4[1];
  *plVar11 = lVar12;
  plVar11[3] = lVar13;
  plVar11[2] = lVar7;
  plVar10 = plRam0000000000b65da0;
  plVar3 = plVar4;
  (**(code **)(*plRam0000000000b65da0 + 0x140))(&lStack_b8);
  plVar4[1] = lStack_b0;
  *plVar4 = lStack_b8;
  plVar4[3] = lStack_a0;
  plVar4[2] = lStack_a8;
  plVar9[1] = (long)(plVar11 + 4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
    return plVar10;
  }
  ___stack_chk_fail();
  if ((int)plVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pplVar5 = &plStack_140;
  pplVar2 = &plStack_140;
  uStack_f0 = unaff_x22;
  plStack_e8 = plVar11;
  plStack_e0 = plVar4;
  plStack_d8 = plVar9;
  ppuStack_d0 = &puStack_70;
  pcStack_c8 = FUN_0040c2b8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar12 = plVar10[1] - *plVar10 >> 5;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3b == 0) {
    plVar9 = plVar10 + 2;
    uVar6 = *plVar9 - *plVar10;
    uVar8 = (long)uVar6 >> 4;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar8 = 0x7ffffffffffffff;
    }
    plStack_120 = plVar9;
    if (uVar8 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      FUN_0040c484();
    }
    plVar4 = plVar9 + lVar12 * 4;
    plStack_140 = plVar9;
    plStack_138 = plVar4;
    plStack_130 = plVar4;
    plStack_128 = plVar9 + uVar8 * 4;
    lVar12 = *plVar3;
    lVar13 = plVar3[3];
    lVar7 = plVar3[2];
    plVar4[1] = plVar3[1];
    *plVar4 = lVar12;
    plVar4[3] = lVar13;
    plVar4[2] = lVar7;
    (**(code **)(*plRam0000000000b65da0 + 0x140))(&lStack_118);
    plVar3[1] = lStack_110;
    *plVar3 = lStack_118;
    plVar3[3] = lStack_100;
    plVar3[2] = lStack_108;
    plStack_130 = plVar4 + 4;
    FUN_0040c3fc(plVar10);
    plVar9 = (long *)plVar10[1];
    FUN_0040c710();
    plVar10 = (long *)pplVar2;
    plVar4 = plVar3;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_f8) {
      return plVar9;
    }
  }
  else {
    FUN_0040c470();
    pplVar5 = (long **)plVar3;
  }
  ___stack_chk_fail();
  FUN_0040c710(&plStack_140);
  __Unwind_Resume(plVar10);
  plVar3 = plVar10;
  func_0x0040cf10();
  plVar9 = plVar3 + 2;
  lVar12 = plVar3[1];
  FUN_0040c4b8(plVar9,lVar12,lVar12,*plVar3,*plVar3,pplVar5[1],pplVar5[1],in_x7,plVar4,plVar10,
               &ppuStack_d0,FUN_0040c3fc);
  pplVar5[1] = (long *)lVar12;
  lVar7 = *plVar3;
  *plVar3 = lVar12;
  pplVar5[1] = (long *)lVar7;
  lVar12 = plVar3[1];
  plVar3[1] = (long)pplVar5[2];
  pplVar5[2] = (long *)lVar12;
  lVar12 = plVar3[2];
  plVar3[2] = (long)pplVar5[3];
  pplVar5[3] = (long *)lVar12;
  *pplVar5 = pplVar5[1];
  return plVar9;
}



/* Entry: 0040c214; end: 0040c2b7;  */

long * FUN_0040c214(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long **pplVar3;
  long *plVar4;
  long **pplVar5;
  undefined8 in_x7;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar9 = *(long **)(param_1 + 8);
  lVar10 = *param_2;
  lVar11 = param_2[3];
  lVar7 = param_2[2];
  plVar9[1] = param_2[1];
  *plVar9 = lVar10;
  plVar9[3] = lVar11;
  plVar9[2] = lVar7;
  plVar2 = plRam0000000000b65da0;
  plVar4 = param_2;
  (**(code **)(*plRam0000000000b65da0 + 0x140))(&lStack_58);
  param_2[1] = lStack_50;
  *param_2 = lStack_58;
  param_2[3] = lStack_40;
  param_2[2] = lStack_48;
  *(long **)(param_1 + 8) = plVar9 + 4;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return plVar2;
  }
  ___stack_chk_fail();
  if ((int)plVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  pplVar5 = &plStack_e0;
  pplVar3 = &plStack_e0;
  pcStack_68 = FUN_0040c2b8;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar10 = plVar2[1] - *plVar2 >> 5;
  uVar1 = lVar10 + 1;
  puStack_70 = &stack0xfffffffffffffff0;
  if (uVar1 >> 0x3b == 0) {
    plVar9 = plVar2 + 2;
    uVar6 = *plVar9 - *plVar2;
    uVar8 = (long)uVar6 >> 4;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar8 = 0x7ffffffffffffff;
    }
    plStack_c0 = plVar9;
    if (uVar8 == 0) {
      plStack_e0 = (long *)0x0;
    }
    else {
      FUN_0040c484();
      plStack_e0 = plVar9;
    }
    plVar9 = plStack_e0 + lVar10 * 4;
    plStack_c8 = plStack_e0 + uVar8 * 4;
    lVar10 = *plVar4;
    lVar11 = plVar4[3];
    lVar7 = plVar4[2];
    plVar9[1] = plVar4[1];
    *plVar9 = lVar10;
    plVar9[3] = lVar11;
    plVar9[2] = lVar7;
    plStack_d8 = plVar9;
    plStack_d0 = plVar9;
    (**(code **)(*plRam0000000000b65da0 + 0x140))(&lStack_b8);
    plVar4[1] = lStack_b0;
    *plVar4 = lStack_b8;
    plVar4[3] = lStack_a0;
    plVar4[2] = lStack_a8;
    plStack_d0 = plVar9 + 4;
    FUN_0040c3fc(plVar2);
    plVar9 = (long *)plVar2[1];
    FUN_0040c710();
    plVar2 = (long *)pplVar3;
    param_2 = plVar4;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) {
      return plVar9;
    }
  }
  else {
    FUN_0040c470();
    pplVar5 = (long **)plVar4;
  }
  ___stack_chk_fail();
  FUN_0040c710(&plStack_e0);
  __Unwind_Resume(plVar2);
  plVar9 = plVar2;
  func_0x0040cf10();
  plVar4 = plVar9 + 2;
  lVar10 = plVar9[1];
  FUN_0040c4b8(plVar4,lVar10,lVar10,*plVar9,*plVar9,pplVar5[1],pplVar5[1],in_x7,param_2,plVar2,
               &puStack_70,FUN_0040c3fc);
  pplVar5[1] = (long *)lVar10;
  lVar7 = *plVar9;
  *plVar9 = lVar10;
  pplVar5[1] = (long *)lVar7;
  lVar10 = plVar9[1];
  plVar9[1] = (long)pplVar5[2];
  pplVar5[2] = (long *)lVar10;
  lVar10 = plVar9[2];
  plVar9[2] = (long)pplVar5[3];
  pplVar5[3] = (long *)lVar10;
  *pplVar5 = pplVar5[1];
  return plVar4;
}



/* Entry: 0040c2b8; end: 0040c3fb;  */

long * FUN_0040c2b8(long *param_1,long *param_2)

{
  ulong uVar1;
  long **pplVar2;
  long *plVar3;
  long **pplVar4;
  undefined8 in_x7;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  pplVar4 = &plStack_80;
  pplVar2 = &plStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar9 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3b == 0) {
    plVar8 = param_1 + 2;
    uVar5 = *plVar8 - *param_1;
    uVar7 = (long)uVar5 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar7 = 0x7ffffffffffffff;
    }
    plStack_60 = plVar8;
    if (uVar7 == 0) {
      plStack_80 = (long *)0x0;
    }
    else {
      FUN_0040c484();
      plStack_80 = plVar8;
    }
    plVar8 = plStack_80 + lVar9 * 4;
    plStack_68 = plStack_80 + uVar7 * 4;
    lVar9 = *param_2;
    lVar10 = param_2[3];
    lVar6 = param_2[2];
    plVar8[1] = param_2[1];
    *plVar8 = lVar9;
    plVar8[3] = lVar10;
    plVar8[2] = lVar6;
    plStack_78 = plVar8;
    plStack_70 = plVar8;
    (**(code **)(*plRam0000000000b65da0 + 0x140))(&lStack_58);
    param_2[1] = lStack_50;
    *param_2 = lStack_58;
    param_2[3] = lStack_40;
    param_2[2] = lStack_48;
    plStack_70 = plVar8 + 4;
    FUN_0040c3fc(param_1);
    plVar8 = (long *)param_1[1];
    FUN_0040c710();
    param_1 = (long *)pplVar2;
    unaff_x20 = param_2;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return plVar8;
    }
  }
  else {
    FUN_0040c470();
    pplVar4 = (long **)param_2;
  }
  ___stack_chk_fail();
  FUN_0040c710(&plStack_80);
  __Unwind_Resume(param_1);
  plVar3 = param_1;
  func_0x0040cf10();
  plVar8 = plVar3 + 2;
  lVar9 = plVar3[1];
  FUN_0040c4b8(plVar8,lVar9,lVar9,*plVar3,*plVar3,pplVar4[1],pplVar4[1],in_x7,unaff_x20,param_1,
               &stack0xfffffffffffffff0,FUN_0040c3fc);
  pplVar4[1] = (long *)lVar9;
  lVar6 = *plVar3;
  *plVar3 = lVar9;
  pplVar4[1] = (long *)lVar6;
  lVar9 = plVar3[1];
  plVar3[1] = (long)pplVar4[2];
  pplVar4[2] = (long *)lVar9;
  lVar9 = plVar3[2];
  plVar3[2] = (long)pplVar4[3];
  pplVar4[3] = (long *)lVar9;
  *pplVar4 = pplVar4[1];
  return plVar8;
}



/* Entry: 0040c3fc; end: 0040c46f;  */

void FUN_0040c3fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_0040c4b8(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 0040c470; end: 0040c483;  */

undefined1  [16]
FUN_0040c470(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,long param_7)

{
  char *pcVar1;
  long lVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char *pcStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3b == 0) {
    lVar2 = param_2 << 5;
    __Znwm(lVar2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_00349558();
  ppcVar3 = &pcStack_d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_c8 = &uStack_b0;
  puStack_c0 = &uStack_98;
  uStack_b8 = 0;
  pcStack_d0 = pcVar1;
  uStack_b0 = param_6;
  lStack_a8 = param_7;
  while (uStack_98 = param_6, lStack_90 = param_7, param_3 != param_5) {
    uVar4 = param_3[-4];
    uVar6 = param_3[-1];
    uVar5 = param_3[-2];
    *(undefined8 *)(param_7 + -0x18) = param_3[-3];
    *(undefined8 *)(param_7 + -0x20) = uVar4;
    *(undefined8 *)(param_7 + -8) = uVar6;
    *(undefined8 *)(param_7 + -0x10) = uVar5;
    (**(code **)(*plRam0000000000b65da0 + 0x140))(&uStack_88);
    param_3[-3] = uStack_80;
    param_3[-4] = uStack_88;
    param_3[-1] = uStack_70;
    param_3[-2] = uStack_78;
    param_7 = lStack_90 + -0x20;
    param_3 = param_3 + -4;
    param_6 = uStack_98;
  }
  uStack_b8 = 1;
  FUN_0040c5b4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    auVar8._8_8_ = param_7;
    auVar8._0_8_ = param_6;
    return auVar8;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  if (*(char *)((long)ppcVar3 + 0x18) == '\0') {
    FUN_0040c5e8(ppcVar3);
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = ppcVar3;
  return auVar9;
}



/* Entry: 0040c484; end: 0040c4b7;  */

undefined1  [16]
FUN_0040c484(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    __Znwm(lVar1);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  FUN_00349558();
  puVar2 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_b8 = &uStack_a0;
  puStack_b0 = &uStack_88;
  uStack_a8 = 0;
  uStack_c0 = param_1;
  uStack_a0 = param_6;
  lStack_98 = param_7;
  while (uStack_88 = param_6, lStack_80 = param_7, param_3 != param_5) {
    uVar3 = param_3[-4];
    uVar5 = param_3[-1];
    uVar4 = param_3[-2];
    *(undefined8 *)(param_7 + -0x18) = param_3[-3];
    *(undefined8 *)(param_7 + -0x20) = uVar3;
    *(undefined8 *)(param_7 + -8) = uVar5;
    *(undefined8 *)(param_7 + -0x10) = uVar4;
    (**(code **)(*plRam0000000000b65da0 + 0x140))(&uStack_78);
    param_3[-3] = uStack_70;
    param_3[-4] = uStack_78;
    param_3[-1] = uStack_60;
    param_3[-2] = uStack_68;
    param_7 = lStack_80 + -0x20;
    param_3 = param_3 + -4;
    param_6 = uStack_88;
  }
  uStack_a8 = 1;
  FUN_0040c5b4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    auVar7._8_8_ = param_7;
    auVar7._0_8_ = param_6;
    return auVar7;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  if (*(char *)((long)puVar2 + 0x18) == '\0') {
    FUN_0040c5e8(puVar2);
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar2;
  return auVar8;
}



/* Entry: 0040c4b8; end: 0040c5b3;  */

undefined1  [16]
FUN_0040c4b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = &uStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_98 = &uStack_80;
  puStack_90 = &uStack_68;
  uStack_88 = 0;
  lStack_78 = param_7;
  uStack_80 = param_6;
  uStack_a0 = param_1;
  while (uStack_68 = param_6, lStack_60 = param_7, param_3 != param_5) {
    uVar2 = param_3[-4];
    uVar4 = param_3[-1];
    uVar3 = param_3[-2];
    *(undefined8 *)(param_7 + -0x18) = param_3[-3];
    *(undefined8 *)(param_7 + -0x20) = uVar2;
    *(undefined8 *)(param_7 + -8) = uVar4;
    *(undefined8 *)(param_7 + -0x10) = uVar3;
    (**(code **)(*plRam0000000000b65da0 + 0x140))(&uStack_58);
    param_3[-3] = uStack_50;
    param_3[-4] = uStack_58;
    param_3[-1] = uStack_40;
    param_3[-2] = uStack_48;
    param_7 = lStack_60 + -0x20;
    param_6 = uStack_68;
    param_3 = param_3 + -4;
  }
  uStack_88 = 1;
  FUN_0040c5b4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    auVar5._8_8_ = param_7;
    auVar5._0_8_ = param_6;
    return auVar5;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  if (*(char *)((long)puVar1 + 0x18) == '\0') {
    FUN_0040c5e8(puVar1);
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 0040c5b4; end: 0040c5e7;  */

long FUN_0040c5b4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_0040c5e8(param_1);
  }
  return param_1;
}



/* Entry: 0040c5e8; end: 0040c65b;  */

long * FUN_0040c5e8(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_38 = *(undefined8 *)param_1[2];
  uStack_30 = ((undefined8 *)param_1[2])[1];
  plVar1 = (long *)*param_1;
  uStack_60 = *(undefined8 *)param_1[1];
  uStack_58 = ((undefined8 *)param_1[1])[1];
  puVar3 = auStack_40;
  puVar5 = auStack_68;
  uStack_50 = uStack_60;
  uStack_48 = uStack_58;
  uStack_28 = uStack_38;
  uStack_20 = uStack_30;
  FUN_0040c65c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return plVar1;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = *(undefined8 **)(puVar3 + 0x20);
  puVar4 = (undefined8 *)puVar3;
  if (puVar6 != *(undefined8 **)(puVar5 + 0x20)) {
    do {
      uStack_c8 = puVar6[1];
      uStack_d0 = *puVar6;
      uStack_b8 = puVar6[3];
      uStack_c0 = puVar6[2];
      plVar1 = plRam0000000000b65da0;
      puVar4 = &uStack_d0;
      (**(code **)(*plRam0000000000b65da0 + 0x150))();
      puVar6 = (undefined8 *)(*(long *)(puVar3 + 0x20) + 0x20);
      *(undefined8 **)(puVar3 + 0x20) = puVar6;
    } while (puVar6 != *(undefined8 **)(puVar5 + 0x20));
  }
  iVar2 = (int)puVar4;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_a8) {
    ___stack_chk_fail();
    if (iVar2 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10();
    FUN_0040c744();
    if (*plVar1 != 0) {
      __ZdlPv();
    }
    return plVar1;
  }
  return plVar1;
}



/* Entry: 0040c65c; end: 0040c70f;  */

long * FUN_0040c65c(long *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  puVar2 = (undefined8 *)param_2;
  if (puVar3 != *(undefined8 **)(param_3 + 0x20)) {
    do {
      uStack_58 = puVar3[1];
      uStack_60 = *puVar3;
      uStack_48 = puVar3[3];
      uStack_50 = puVar3[2];
      param_1 = plRam0000000000b65da0;
      puVar2 = &uStack_60;
      (**(code **)(*plRam0000000000b65da0 + 0x150))();
      puVar3 = (undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
      *(undefined8 **)(param_2 + 0x20) = puVar3;
    } while (puVar3 != *(undefined8 **)(param_3 + 0x20));
  }
  iVar1 = (int)puVar2;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    if (iVar1 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10();
    FUN_0040c744();
    if (*param_1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 0040c710; end: 0040c743;  */

long * FUN_0040c710(long *param_1)

{
  FUN_0040c744(param_1,param_1[1]);
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0040c744; end: 0040c7ef;  */

dword * FUN_0040c744(dword *param_1,undefined1 *param_2)

{
  dword *pdVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar4 = *(undefined1 **)(param_1 + 4);
  pdVar1 = param_1;
  puVar3 = (undefined8 *)param_2;
  while (puVar4 != param_2) {
    *(undefined1 **)(param_1 + 4) = puVar4 + -0x20;
    uStack_58 = *(undefined8 *)(puVar4 + -0x18);
    uStack_60 = *(undefined8 *)(puVar4 + -0x20);
    uStack_48 = *(undefined8 *)(puVar4 + -8);
    uStack_50 = *(undefined8 *)(puVar4 + -0x10);
    pdVar1 = pdRam0000000000b65da0;
    puVar3 = &uStack_60;
    (**(code **)(*(long *)pdRam0000000000b65da0 + 0x150))();
    puVar4 = *(undefined1 **)(param_1 + 4);
  }
  iVar2 = (int)puVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pdVar1;
  }
  ___stack_chk_fail();
  if (iVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  if (pdRam0000000000b65da8 == (dword *)0x0) {
    if ((bRam0000000000afb180 & 1) == 0) {
      iVar2 = 0xafb180;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        pdVar1 = &MACH_HEADER.cpusubtype;
        __Znwm();
        *(undefined ***)pdVar1 = &PTR_FUN_009e2540;
        pdRam0000000000afb178 = pdVar1;
        ___cxa_guard_release(0xafb180);
      }
    }
    pdRam0000000000b65da8 = pdRam0000000000afb178;
  }
  if (pdRam0000000000b65da0 == (dword *)0x0) {
    if ((bRam0000000000afb190 & 1) == 0) {
      iVar2 = 0xafb190;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        pdVar1 = &MACH_HEADER.cpusubtype;
        __Znwm();
        *(undefined ***)pdVar1 = &PTR_FUN_009e2a40;
        pdRam0000000000afb188 = pdVar1;
        ___cxa_guard_release(0xafb190);
      }
    }
    pdRam0000000000b65da0 = pdRam0000000000afb188;
  }
  return (dword *)0xb5f540;
}



/* Entry: 0040c7f0; end: 0040c7fb;  */

undefined8 FUN_0040c7f0(void)

{
  int iVar1;
  dword *pdVar2;
  
  if (pdRam0000000000b65da8 == (dword *)0x0) {
    if ((bRam0000000000afb180 & 1) == 0) {
      iVar1 = 0xafb180;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        pdVar2 = &MACH_HEADER.cpusubtype;
        __Znwm();
        *(undefined ***)pdVar2 = &PTR_FUN_009e2540;
        pdRam0000000000afb178 = pdVar2;
        ___cxa_guard_release(0xafb180);
      }
    }
    pdRam0000000000b65da8 = pdRam0000000000afb178;
  }
  if (pdRam0000000000b65da0 == (dword *)0x0) {
    if ((bRam0000000000afb190 & 1) == 0) {
      iVar1 = 0xafb190;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        pdVar2 = &MACH_HEADER.cpusubtype;
        __Znwm();
        *(undefined ***)pdVar2 = &PTR_FUN_009e2a40;
        pdRam0000000000afb188 = pdVar2;
        ___cxa_guard_release(0xafb190);
      }
    }
    pdRam0000000000b65da0 = pdRam0000000000afb188;
  }
  return 0xb5f540;
}



/* Entry: 0040c7fc; end: 0040c903;  */

void FUN_0040c7fc(void)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  char cStack_21;
  
  uRam0000000000b5f548 = 0;
  uRam0000000000b5f558 = 0;
  uRam0000000000b5f550 = 0;
  uRam0000000000b5f568 = 0;
  uRam0000000000b5f560 = 0;
  uRam0000000000b5f578 = 0;
  uRam0000000000b5f570 = 0;
  ___cxa_atexit(FUN_0040a8a4,0xb5f548,0);
  uRam0000000000b65db0 = 0xb5f548;
  FUN_00353254(&uStack_38,"");
  uRam0000000000b5f580 = 1;
  if (cStack_21 < '\0') {
    FUN_002971d4(0xb5f588,uStack_38,uStack_30);
  }
  else {
    uRam0000000000b5f590 = uStack_30;
    uRam0000000000b5f588 = uStack_38;
    uRam0000000000b5f598 = CONCAT17(cStack_21,uStack_28);
  }
  uRam0000000000b5f5a0 = 0;
  uRam0000000000b5f5a8 = 0;
  uRam0000000000b5f5b0 = 0;
  ___cxa_atexit(FUN_0040a8a4,0xb5f580,0);
  if (cStack_21 < '\0') {
    __ZdlPv(uStack_38);
  }
  uRam0000000000b65db8 = 0xb5f580;
  return;
}



/* Entry: 0040c904; end: 0040c99f;  */

void FUN_0040c904(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_1;
  plVar3 = param_2;
  if (lVar4 != 0x7fffffffffffffff) {
    lVar1 = lVar4 / 1000000;
    lVar2 = 1;
    func_0x0033a068();
    if (-1000000 < lVar4 && lVar1 < lVar2) {
      *param_2 = lVar1;
      *(int *)(param_2 + 1) = ((int)lVar4 + (int)lVar1 * -1000000) * 1000;
      *(undefined4 *)((long)param_2 + 0xc) = 1;
      return;
    }
  }
  lVar4 = 1;
  func_0x0033a068();
  *param_2 = lVar4;
  param_2[1] = (long)plVar3;
  return;
}



/* Entry: 0040c9a0; end: 0040c9a7;  */

/* WARNING: Removing unreachable block (ram,0x0040cb70) */
/* WARNING: Removing unreachable block (ram,0x0040cb8c) */

void FUN_0040c9a0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (PTR___availability_version_check_00999fb8 != (undefined *)0x0) {
    puRam0000000000b5f5d8 = PTR___availability_version_check_00999fb8;
  }
  puVar1 = (undefined8 *)0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
  if (puVar1 != (undefined8 *)0x0) {
    uVar20 = *puVar1;
    pcVar2 = (code *)0xfffffffffffffffe;
    _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
    if (pcVar2 != (code *)0x0) {
      pcVar3 = (code *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
      pcVar4 = (code *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
      if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
        pcVar5 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
        if (pcVar5 != (code *)0x0) {
          pcVar6 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
          if (pcVar6 != (code *)0x0) {
            pcVar7 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFGetTypeID");
            if (pcVar7 != (code *)0x0) {
              pcVar8 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
              if (pcVar8 != (code *)0x0) {
                pcVar9 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                if (pcVar9 != (code *)0x0) {
                  pcVar10 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFRelease");
                  if (pcVar10 != (code *)0x0) {
                    pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                    _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                    if (pcVar11 != (char *)0x0) {
                      _fseek();
                      pcVar12 = pcVar11;
                      _ftell();
                      if (-1 < (long)pcVar12) {
                        _rewind(pcVar11);
                        pcVar13 = pcVar12;
                        _malloc();
                        if ((pcVar13 != (char *)0x0) &&
                           (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                          lVar15 = 0;
                          (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                          if (lVar15 != 0) {
                            lVar16 = 0;
                            if (pcVar3 == (code *)0x0) {
                              (*pcVar4)(0,lVar15,0,0);
                            }
                            else {
                              (*pcVar3)();
                            }
                            if (lVar16 != 0) {
                              lVar17 = 0;
                              (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                              if (lVar17 != 0) {
                                lVar18 = lVar16;
                                (*pcVar6)(lVar16,lVar17);
                                (*pcVar10)(lVar17);
                                if (lVar18 != 0) {
                                  lVar17 = lVar18;
                                  (*pcVar7)();
                                  lVar19 = lVar17;
                                  (*pcVar8)();
                                  if ((lVar17 == lVar19) &&
                                     ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100), (int)lVar18 != 0)
                                     ) {
                                    _sscanf(auStack_88,"%d.%d.%d");
                                  }
                                }
                              }
                              (*pcVar10)(lVar16);
                            }
                            (*pcVar10)(lVar15);
                          }
                        }
                      }
                      _free();
                      _fclose(pcVar11);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0099a148)(0xb5f5c8,0,FUN_0040c9a0);
  return;
}



/* Entry: 0040c9a8; end: 0040cb2f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0040c9a8(undefined4 param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  puVar5 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar4 = (int)param_2;
  if (lRam0000000000b5f5d0 != -1) {
    func_0x00776310();
  }
  if (lRam0000000000b5f5d8 == 0) {
    if (lRam0000000000b5f5c8 != -1) goto LAB_0040cb00;
    bVar2 = SBORROW4(iVar4,iRam0000000000b5f5b8);
    iVar1 = iVar4 - iRam0000000000b5f5b8;
    bVar3 = iVar4 == iRam0000000000b5f5b8;
    if (iVar4 < iRam0000000000b5f5b8) goto LAB_0040caa0;
    goto LAB_0040ca6c;
  }
  uStack_3c = iVar4 << 0x10 | ((uint)param_3 & 0xff) << 8 | param_4 & 0xff;
  uStack_40 = param_1;
  __availability_version_check(1);
  param_2 = (undefined1 *)puVar5;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
LAB_0040cafc:
  do {
    while( true ) {
      ___stack_chk_fail();
LAB_0040cb00:
      func_0x00776328();
      iVar4 = (int)param_2;
      bVar2 = SBORROW4(iVar4,iRam0000000000b5f5b8);
      iVar1 = iVar4 - iRam0000000000b5f5b8;
      bVar3 = iVar4 == iRam0000000000b5f5b8;
      if (iRam0000000000b5f5b8 <= iVar4) break;
LAB_0040caa0:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
        return;
      }
    }
LAB_0040ca6c:
    if (bVar3 || iVar1 < 0 != bVar2) {
      if ((int)param_3 < iRam0000000000b5f5bc) goto LAB_0040caa0;
      if ((int)param_3 <= iRam0000000000b5f5bc) {
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
          return;
        }
        goto LAB_0040cafc;
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 0040cb30; end: 0040cb37;  */

void FUN_0040cb30(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (puRam0000000000b5f5d8 == (undefined *)0x0) {
    if (PTR___availability_version_check_00999fb8 != (undefined *)0x0) {
      puRam0000000000b5f5d8 = PTR___availability_version_check_00999fb8;
    }
    if (puRam0000000000b5f5d8 == (undefined *)0x0) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0099a148)(0xb5f5c8,0,FUN_0040c9a0);
  return;
}



/* Entry: 0040cb38; end: 0040ce4f;  */

void FUN_0040cb38(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (((param_1 & 1) != 0) || (puRam0000000000b5f5d8 == (undefined *)0x0)) {
    if (PTR___availability_version_check_00999fb8 != (undefined *)0x0) {
      puRam0000000000b5f5d8 = PTR___availability_version_check_00999fb8;
    }
    if (((param_1 & 1) != 0) || (puRam0000000000b5f5d8 == (undefined *)0x0)) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_once_f_0099a148)(0xb5f5c8,0,FUN_0040c9a0);
    return;
  }
  return;
}



/* Entry: 0040ce50; end: 0040ce67;  */

void FUN_0040ce50(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0099a148)(0xb5f5c8,0,FUN_0040c9a0);
  return;
}



/* Entry: 0040ce68; end: 0040cee7;  */

long FUN_0040ce68(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0040cee8; end: 0040cf1f;  */

void FUN_0040cee8(void)

{
  ___cxa_allocate_exception(8);
  __ZNSt20bad_array_new_lengthC1Ev();
  ___cxa_throw();
  ___cxa_begin_catch();
  __ZSt9terminatev();
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)();
  return;
}



/* Entry: 0040cf20; end: 0040cf23;  */

void FUN_0040cf20(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)();
  return;
}



/* Entry: 0040cf24; end: 0040cf7b;  */

void FUN_0040cf24(void)

{
  code *pcVar1;
  dword *pdVar2;
  undefined8 extraout_x8;
  
  pdVar2 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  func_0x0040d6d0();
  *(undefined8 *)pdVar2 = extraout_x8;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x40cf5c);
  (*pcVar1)();
}



/* Entry: 0040cf7c; end: 0040cf8f;  */

void FUN_0040cf7c(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040cf90; end: 0040cf9b;  */

char * FUN_0040cf90(void)

{
  return "djinni::Promise was destructed before setting a result";
}



/* Entry: 0040cf9c; end: 0040cfeb;  */

void FUN_0040cf9c(undefined8 *param_1)

{
  char *pcVar1;
  
  pcVar1 = segment_command_00000020.segname;
  __Znwm();
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  func_0x0040d038();
  *param_1 = pcVar1;
  return;
}



/* Entry: 0040cfec; end: 0040d05b;  */

void FUN_0040cfec(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar2;
  param_1[1] = lVar3;
  func_0x0040d694();
  return;
}



/* Entry: 0040d05c; end: 0040d0a3;  */

void FUN_0040d05c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long unaff_x19;
  
  func_0x0040d6e0();
  func_0x0040d0bc(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(unaff_x19 + 0x10) + 8);
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



/* Entry: 0040d0a4; end: 0040d0a7;  */

void FUN_0040d0a4(long param_1)

{
  long unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x0040d6e0();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040d6d0();
    FUN_0040d340();
    __ZNSt9exceptionD2Ev(auStack_28);
  }
  func_0x0040d2ac(unaff_x19 + 0x18);
  func_0x0040d2ac((long *)(param_1 + 8));
  return;
}



/* Entry: 0040d0a8; end: 0040d0d7;  */

void FUN_0040d0a8(void)

{
  FUN_0040d2e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040d0d8; end: 0040d0db;  */

void FUN_0040d0d8(long param_1)

{
  long unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x0040d6e0();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040d6d0();
    FUN_0040d340();
    __ZNSt9exceptionD2Ev(auStack_28);
  }
  func_0x0040d2ac(unaff_x19 + 0x18);
  func_0x0040d2ac((long *)(param_1 + 8));
  return;
}



/* Entry: 0040d0dc; end: 0040d0ef;  */

void FUN_0040d0dc(void)

{
  FUN_0040d2e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040d0f0; end: 0040d1b7;  */

undefined1 * FUN_0040d0f0(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = 1;
  FUN_0040d1b8(auStack_40);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_009e2d00;
  puStack_30[1] = 0;
  puStack_30[4] = 0x3cb0b1bb;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[9] = 0;
  puStack_30[10] = 0x32aaaba7;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x13] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_0040d2d4();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_0040d1e0();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 0040d1b8; end: 0040d1df;  */

long FUN_0040d1b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0040d1e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0040d1e0; end: 0040d20b;  */

void FUN_0040d1e0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x19999999999999a) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0xa0);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_009e2d00;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0040d20c; end: 0040d20f;  */

void FUN_0040d20c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e2d00;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0040d210; end: 0040d223;  */

void FUN_0040d210(void)

{
  func_0x0040d230();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0040d224; end: 0040d243;  */

long FUN_0040d224(long param_1)

{
  func_0x0040d280(param_1 + 0x98);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 0040d244; end: 0040d2d3;  */

long FUN_0040d244(long param_1)

{
  func_0x0040d280(param_1 + 0x80);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x78);
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  __ZNSt3__118condition_variableD1Ev(param_1 + 8);
  return param_1;
}



/* Entry: 0040d2d4; end: 0040d2e3;  */

void FUN_0040d2d4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0040d2e4; end: 0040d33f;  */

void FUN_0040d2e4(long param_1)

{
  long unaff_x19;
  undefined1 auStack_28 [8];
  
  func_0x0040d6e0();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040d6d0();
    FUN_0040d340();
    __ZNSt9exceptionD2Ev(auStack_28);
  }
  func_0x0040d2ac(unaff_x19 + 0x18);
  func_0x0040d2ac((long *)(param_1 + 8));
  return;
}



/* Entry: 0040d340; end: 0040d3af;  */

void FUN_0040d340(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x0040d6d0();
  FUN_0040cf24(auStack_28,auStack_30);
  FUN_0040d3b0(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt9exceptionD2Ev(auStack_30);
  return;
}



/* Entry: 0040d3b0; end: 0040d3cf;  */

void FUN_0040d3b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_0040d3d0(param_1,&uStack_18);
  return;
}



/* Entry: 0040d3d0; end: 0040d46b;  */

void FUN_0040d3d0(undefined8 param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  func_0x0040d6c0();
  func_0x0040d6f8();
  func_0x0040d2ac(auStack_40);
  func_0x0040d694();
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x38);
  FUN_0040d500(param_2,alStack_30);
  func_0x0040d6a4();
  if (param_2 == (long *)0x0) {
    func_0x0040d728();
  }
  else {
    func_0x0040d734(*(undefined8 *)(*param_2 + 0x10));
    func_0x0040d67c();
  }
  func_0x0040d6b8();
  return;
}



/* Entry: 0040d46c; end: 0040d4c7;  */

void FUN_0040d46c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 0040d4c8; end: 0040d4ff;  */

undefined8 * FUN_0040d4c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0040d694();
  return param_1;
}



/* Entry: 0040d500; end: 0040d513;  */

void FUN_0040d500(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00779a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__00998900)(*param_2 + 0x78,*param_1);
  return;
}



/* Entry: 0040d514; end: 0040d543;  */

undefined8 * FUN_0040d514(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*param_1);
  }
  return param_1;
}



/* Entry: 0040d544; end: 0040d5ab;  */

void FUN_0040d544(undefined8 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = 1;
  func_0x0040d568(param_1,&uStack_11);
  return;
}



/* Entry: 0040d5ac; end: 0040d64f;  */

void FUN_0040d5ac(undefined8 param_1,long *param_2)

{
  undefined1 auStack_40 [16];
  ushort *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = (ushort *)0x0;
  uStack_28 = 0;
  func_0x0040d6c0();
  func_0x0040d6f8();
  func_0x0040d2ac(auStack_40);
  func_0x0040d694();
  __ZNSt3__15mutex4lockEv(puStack_30 + 0x1c);
  *puStack_30 = *(byte *)*param_2 | 0x100;
  func_0x0040d6a4();
  if (param_2 == (long *)0x0) {
    func_0x0040d728();
  }
  else {
    func_0x0040d734(*(undefined8 *)(*param_2 + 0x10));
    func_0x0040d67c();
  }
  func_0x0040d6b8();
  return;
}



/* Entry: 0040d650; end: 0040d67b;  */

long * FUN_0040d650(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0040d704();
  }
  return param_1;
}



/* Entry: 0040d67c; end: 0040d73f;  */

void FUN_0040d67c(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0040d688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 8))();
  return;
}



/* Entry: 0040d740; end: 0040d753;  */

void FUN_0040d740(void)

{
  FUN_0040d774("basic_string");
  FUN_0040d9a8();
  return;
}



/* Entry: 0040d754; end: 0040d773;  */

void FUN_0040d754(void)

{
  FUN_0040d9a8();
  return;
}



/* Entry: 0040d774; end: 0040d7c3;  */

void FUN_0040d774(void)

{
  dword *pdVar1;
  dword *pdVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  ___cxa_allocate_exception();
  FUN_0040d7c4();
  pdVar2 = pdVar1;
  ___cxa_throw(pdVar1,PTR___ZTISt12length_error_0099c600,PTR___ZNSt12length_errorD1Ev_009988e0);
  ___cxa_free_exception(pdVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *(undefined **)pdVar2 = PTR___ZTVSt12length_error_00998df8 + 0x10;
  return;
}



/* Entry: 0040d7c4; end: 0040d7c7;  */

void FUN_0040d7c4(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12length_error_00998df8 + 0x10);
  return;
}



/* Entry: 0040d7c8; end: 0040d7eb;  */

void FUN_0040d7c8(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12length_error_00998df8 + 0x10);
  return;
}



/* Entry: 0040d7ec; end: 0040d81b;  */

undefined8 * FUN_0040d7ec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0040d81c();
  return param_1;
}



/* Entry: 0040d81c; end: 0040d89f;  */

void FUN_0040d81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_0040d8a0(param_1,param_4);
    FUN_0040d8d8(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0040d92c(&uStack_40);
  return;
}



/* Entry: 0040d8a0; end: 0040d8d7;  */

void FUN_0040d8a0(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  
  if (-1 < (long)param_2) {
    plVar1 = param_1 + 2;
    FUN_0040d90c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)((long)plVar1 + (long)param_2);
    return;
  }
  FUN_0040d8f8();
  puVar2 = (undefined1 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 0040d8d8; end: 0040d8f7;  */

void FUN_0040d8d8(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 0040d8f8; end: 0040d90b;  */

void FUN_0040d8f8(void)

{
  FUN_0040d774("vector");
  FUN_0040d9a8();
  return;
}



/* Entry: 0040d90c; end: 0040d95b;  */

void FUN_0040d90c(void)

{
  FUN_0040d9a8();
  return;
}



/* Entry: 0040d95c; end: 0040d973;  */

void FUN_0040d95c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0040d974; end: 0040d9a7;  */

undefined8 FUN_0040d974(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_0040d95c(&uStack_28);
  return param_1;
}



/* Entry: 0040d9a8; end: 0040d9b3;  */

void FUN_0040d9a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_0099c630)(param_2);
  return;
}



/* Entry: 0040d9b4; end: 0040da27; -[UNISCVSValis initWithUnifiedGrpcService:] */

undefined1 * FUN_0040d9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3978;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0040da28; end: 0040db0b; -[UNISCVSValis sendClientUpdateWithRequest:callOptionsBuilder:handler:] */

void FUN_0040da28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCNGrpcUnaryEventHandlerImpl_00ac2928;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_00ac2930;
  _objc_opt_class(PTR_PTR_00ac2930);
  func_0x00785800(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x007814c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00792fa0(uVar4,param_2,&PTR____CFConstantStringClassReference_00a20f60,uVar3,param_4,puVar1
                 );
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 0040db0c; end: 0040dbdb; -[UNISCVSValis streamClientUpdateWithOptionsBuilder:eventHandler:] */

void FUN_0040db0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_00ac2938;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_00ac2930;
  _objc_opt_class(PTR_PTR_00ac2930);
  func_0x00785800(puVar1,param_2,param_4,puVar2);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x0077f9e0(uVar3,param_2,&PTR____CFConstantStringClassReference_00a20f80,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_00ac2940;
  _objc_alloc(PTR_PTR_00ac2940);
  func_0x007857e0();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0040dbdc; end: 0040dbe7; -[UNISCVSValis .cxx_destruct] */

void FUN_0040dbdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0040dbe8; end: 0040dc63;  */

undefined * FUN_0040dbe8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f5e0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a20fa0,&UNK_007fc19c,&UNK_007fc1dc,6,
                    FUN_0040dc64,0);
    do {
      if (puRam0000000000b5f5e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f5e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f5e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f5e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f5e0;
}



/* Entry: 0040dc64; end: 0040dc6f;  */

bool FUN_0040dc64(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 0040dc70; end: 0040dceb;  */

undefined * FUN_0040dc70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b5f5e8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a20fc0,&UNK_007fc1f4,&UNK_007fc268,8,
                    FUN_0040dcec,0);
    do {
      if (puRam0000000000b5f5e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b5f5e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb5f5e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b5f5e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b5f5e8;
}


