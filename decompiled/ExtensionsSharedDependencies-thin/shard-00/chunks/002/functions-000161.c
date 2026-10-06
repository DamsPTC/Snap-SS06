/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003f1e00; end: 003f1e0b;  */

void FUN_003f1e00(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003f1e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 003f1e0c; end: 003f1e63;  */

void FUN_003f1e0c(long *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 003f1e64; end: 003f1f07;  */

undefined8 FUN_003f1e64(long param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + (ulong)param_2 * 0x10 + 0xa38);
}



/* Entry: 003f1f08; end: 003f2167;  */

undefined8 * FUN_003f1f08(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined4 uStack_54;
  
  lVar4 = param_3[6];
  lVar6 = param_3[0x11];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = lVar6;
  *(bool *)(param_1 + 5) = lVar4 == 0;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  *param_1 = &PTR_FUN_009e1820;
  param_1[1] = param_2;
  param_1[6] = 1;
  FUN_003bb7c0(param_1 + 7);
  param_1[0x13] = param_3[4];
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  lVar4 = *param_3;
  plVar1 = (long *)(lVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x16] = lVar4;
  FUN_0033a6ec();
  param_1[0x17] =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((long)param_1 + 0x134) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = param_1 + 0x147;
  uVar5 = param_1[1];
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x73] = uVar5;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0xb4] = uVar5;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xf5] = uVar5;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0x136] = uVar5;
  *(undefined4 *)(param_1 + 0x144) = 0;
  param_1[0x145] = 0;
  *(undefined4 *)(param_1 + 0x146) = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  uStack_54 = 0;
  FUN_003b08cc((long)param_1 + 0xa34,&uStack_54,1);
  param_1[0x14e] = 0;
  param_1[0x14d] = 0;
  param_1[0x150] = 0;
  param_1[0x14f] = 0;
  param_1[0x14a] = 0;
  param_1[0x149] = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  FUN_003ecf38(param_1 + 0x151);
  *(undefined1 *)(param_1 + 0x176) = 0;
  *(undefined1 *)(param_1 + 0x19b) = 0;
  *(undefined1 *)((long)param_1 + 0xce4) = 0;
  param_1[0x19d] = 0;
  FUN_003ec024(param_1 + 0x19e);
  *(undefined4 *)(param_1 + 0x1ae) = 0;
  *(undefined1 *)((long)param_1 + 0xd74) = 0;
  param_1[0x1af] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1b8] = 0;
  return param_1;
}



/* Entry: 003f2168; end: 003f223f;  */

long FUN_003f2168(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    pcVar5 = *(code **)(param_1 + lVar6 + 0xa40);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(param_1 + lVar6 + 0xa38));
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x50);
  FUN_00338cb8(*(undefined8 *)(param_1 + 0xa28));
  FUN_003f2240(param_1 + 0xdb8);
  FUN_0036d804(param_1 + 0xbb0);
  FUN_003ede40(param_1 + 0xa88);
  FUN_0036d7cc(param_1 + 0x7c0);
  FUN_0036d7cc(param_1 + 0x5b8);
  FUN_0036d7cc(param_1 + 0x3b0);
  FUN_0036d7cc(param_1 + 0x1a8);
  if ((*(ulong *)(param_1 + 0x198) & 1) != 0) {
    FUN_0055293c();
  }
  plVar4 = *(long **)(param_1 + 0xb0);
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_003bb818(param_1 + 0x38);
  return param_1;
}



/* Entry: 003f2240; end: 003f226f;  */

ulong * FUN_003f2240(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003f2270; end: 003f22a7;  */

void FUN_003f2270(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0xdd0);
  func_0x003a6564(puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x003f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}



/* Entry: 003f22a8; end: 003f22c7;  */

void FUN_003f22a8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x003f22c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,"completion");
  return;
}



/* Entry: 003f22c8; end: 003f233b;  */

void FUN_003f22c8(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003f0a4c(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003f233c; end: 003f2343;  */

void FUN_003f233c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_2);
  return;
}



/* Entry: 003f2344; end: 003f23b7;  */

void FUN_003f2344(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003f0d08(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003f23b8; end: 003f244b;  */

void FUN_003f23b8(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  FUN_003bb974(*param_1 + 0x38,"recv_message_ready");
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003f0a4c(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003f244c; end: 003f24bf;  */

void FUN_003f244c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003f0f1c(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003f24c0; end: 003f2533;  */

void FUN_003f24c0(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003f0f1c(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003f2534; end: 003f25a7;  */

void FUN_003f2534(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  ulong uStack_28;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_28 = uVar4;
  FUN_003f0fd8(param_1,&uStack_28);
  if ((uVar4 & 1) != 0) {
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 003f25a8; end: 003f26df;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

char * FUN_003f25a8(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  byte ******ppppppbVar3;
  undefined8 uVar4;
  byte *****pppppbVar5;
  undefined8 *puVar6;
  undefined7 *puVar7;
  ulong uVar8;
  byte ******ppppppbVar9;
  char *pcVar10;
  byte ***pppbVar11;
  byte ***pppbVar12;
  uint uVar13;
  ulong *puVar14;
  byte ***pppbVar15;
  byte *****pppppbVar16;
  byte ****ppppbVar17;
  uint uVar18;
  ulong uVar19;
  char *pcVar20;
  byte ******unaff_x23;
  byte *****unaff_x24;
  byte *****apppppbStack_308 [2];
  char cStack_2f1;
  undefined1 auStack_2f0 [56];
  undefined8 uStack_2b8;
  undefined7 uStack_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  ulong auStack_268 [2];
  undefined7 *puStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  code *pcStack_230;
  byte ****ppppbStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  byte ****ppppbStack_200;
  byte *****pppppbStack_1f8;
  byte *****pppppbStack_1f0;
  byte **ppbStack_1e0;
  undefined8 uStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  byte *****pppppbStack_1c0;
  byte ****appppbStack_1b8 [8];
  long lStack_178;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  byte *****pppppbStack_130;
  byte **ppbStack_128;
  byte **ppbStack_120;
  byte **ppbStack_118;
  byte *****pppppbStack_110;
  byte **ppbStack_108;
  byte **ppbStack_100;
  byte **ppbStack_f8;
  long lStack_e8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  byte *****pppppbStack_b0;
  byte *****apppppbStack_a0 [2];
  char cStack_89;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  param_1 = (long *)*param_1;
  lStack_78 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lStack_78 = param_1[2];
  }
  uStack_70 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uStack_70 = param_1[1];
  }
  uStack_30 = param_4[1] & 0xff;
  lStack_38 = (long)param_4 + 9;
  if (*param_4 != 0) {
    uStack_30 = param_4[1];
    lStack_38 = param_4[2];
  }
  pcStack_88 = "key=";
  uStack_80 = 4;
  pcStack_68 = " error=";
  uStack_60 = 7;
  pcStack_48 = " value=";
  uStack_40 = 7;
  uStack_58 = param_2;
  uStack_50 = param_3;
  FUN_00575fc4(apppppbStack_a0,&pcStack_88,6);
  pppppbStack_b0 = apppppbStack_a0[0];
  if (-1 < cStack_89) {
    pppppbStack_b0 = (byte *****)apppppbStack_a0;
  }
  pcVar10 = "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
  ;
  pcVar20 = "Append error: %s";
  pppbVar11 = (byte ***)0x35c;
  pppbVar15 = (byte ***)0x0;
  FUN_00339074();
  if (cStack_89 < '\0') {
    pcVar10 = (char *)apppppbStack_a0[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return pcVar10;
  }
  ___stack_chk_fail();
  if (cStack_89 < '\0') {
    __ZdlPv(apppppbStack_a0[0]);
  }
  __Unwind_Resume();
  pcStack_b8 = FUN_003f26e0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pppbVar12 = pppbVar11;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_0034eb70(&pppppbStack_130,pcVar20);
  ppbStack_108 = ppbStack_128;
  pppppbStack_110 = pppppbStack_130;
  ppbStack_f8 = ppbStack_118;
  ppbStack_100 = ppbStack_120;
  pppppbVar16 = *(byte ******)pcVar10;
  ppppbVar17 = *pppppbVar16;
  *pppppbVar16 = (byte ****)((long)ppppbVar17 + 1);
  ppppbVar17 = pppppbVar16[2] + (long)ppppbVar17 * 0xc;
  *ppppbVar17 = (byte ***)0x1;
  ppppbVar17[1] = pppbVar15;
  ppppbVar17[2] = pppbVar11;
  ppppbVar17[5] = (byte ***)ppbStack_128;
  ppppbVar17[4] = (byte ***)pppppbStack_130;
  ppppbVar17[7] = (byte ***)ppbStack_118;
  ppppbVar17[6] = (byte ***)ppbStack_120;
  ppppppbVar9 = (byte ******)pppppbStack_130;
  if ((byte ******)((long)&MACH_HEADER.magic + 1) < pppppbStack_130) {
    do {
      pppppbVar16 = (byte *****)*pppppbStack_130;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppppbStack_130,0x10);
      if (bVar2) {
        *pppppbStack_130 = (byte ****)((long)pppppbVar16 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((byte *****)((long)pppppbVar16 + -1) == (byte *****)0x0) {
      (*(code *)pppppbStack_130[1])();
      ppppppbVar9 = (byte ******)pppppbStack_130;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return (char *)ppppppbVar9;
  }
  ___stack_chk_fail();
  if ((int)pppbVar12 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  pcStack_138 = FUN_003f27b4;
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppppbVar3 = (byte ******)((long)&MACH_HEADER.magic + 2);
  pppbVar11 = pppbVar12;
  ppuStack_140 = &puStack_c0;
  FUN_00338e58();
  if ((int)ppppppbVar3 != 0) {
    pppppbStack_1c0 = (byte *****)&pppppbStack_130;
    pppppbVar16 = appppbStack_1b8;
    _vsnprintf(pppppbVar16,0x40,pcVar20,&pppppbStack_130);
    if ((int)(uint)pppppbVar16 < 0) {
      unaff_x23 = (byte ******)0x0;
      pcVar20 = (char *)0x0;
    }
    else {
      unaff_x24 = pppppbVar16;
      if ((uint)pppppbVar16 < 0x40) {
        pcVar20 = (char *)0x0;
        unaff_x23 = (byte ******)appppbStack_1b8;
      }
      else {
        pcVar20 = (char *)(((ulong)pppppbVar16 & 0xffffffff) + 1);
        FUN_00338c74();
        pppppbStack_1c0 = (byte *****)&pppppbStack_130;
        _vsnprintf();
        unaff_x23 = (byte ******)pcVar20;
      }
    }
    pppbVar11 = pppbVar12;
    FUN_00338e80(ppppppbVar9,pppbVar12,2,unaff_x23);
    ppppppbVar3 = (byte ******)pcVar20;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return (char *)ppppppbVar3;
  }
  ___stack_chk_fail();
  uStack_1d8 = 2;
  pcStack_1c8 = FUN_00339178;
  lStack_208 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = 1;
  ppppbStack_200 = (byte ****)unaff_x24;
  pppppbStack_1f8 = (byte *****)unaff_x23;
  pppppbStack_1f0 = (byte *****)pcVar20;
  ppbStack_1e0 = (byte **)pppbVar12;
  pppuStack_1d0 = &ppuStack_140;
  FUN_0033a598();
  pppppbVar16 = *ppppppbVar3;
  pppppbVar5 = pppppbVar16;
  uStack_2b8 = uVar4;
  _strrchr(pppppbVar16,0x2f);
  if (pppppbVar5 != (byte *****)0x0) {
    pppppbVar16 = (byte *****)((long)pppppbVar5 + 1);
  }
  puVar6 = &uStack_2b8;
  _localtime_r(puVar6,auStack_2f0);
  if (puVar6 == (undefined8 *)0x0) {
    uStack_2a8 = 0x656d69746c6163;
    uStack_2a1 = 0;
    uStack_2b0 = 0x6c3a726f727265;
    uStack_2a9 = 0x6f;
  }
  else {
    puVar7 = &uStack_2b0;
    _strftime(puVar7,0x40,"%m%d %H:%M:%S",auStack_2f0);
    if (puVar7 == (undefined7 *)0x0) {
      uStack_2b0 = 0x733a726f727265;
      uStack_2a9 = 0x74;
      uStack_2a8 = 0x656d69746672;
    }
  }
  uVar8 = (ulong)*(uint *)((long)ppppppbVar3 + 0xc);
  func_0x00338e1c();
  uVar19 = uVar8;
  _pthread_self();
  auStack_268[1] = 0x560e98;
  puStack_258 = &uStack_2b0;
  uStack_250 = 0x560e98;
  uStack_248 = (ulong)pppbVar11 & 0xffffffff;
  uStack_240 = 0x5606ac;
  pcStack_230 = FUN_00560738;
  uStack_220 = 0x560e98;
  uStack_218 = (ulong)*(uint *)(ppppppbVar3 + 1);
  uStack_210 = 0x5606ac;
  puVar14 = auStack_268;
  auStack_268[0] = uVar8;
  uStack_238 = uVar19;
  ppppbStack_228 = (byte ****)pppppbVar16;
  FUN_0056189c(apppppbStack_308,"%s%s.%09d %7ld %s:%d]",0x15,puVar14,6);
  uVar13 = *(uint *)((long)ppppppbVar3 + 0xc);
  func_0x00338e6c();
  if (uVar13 == 0) {
    auStack_268[0] = auStack_268[0] & 0xffffffffffffff00;
    uStack_250 = uStack_250 & 0xffffffffffffff00;
LAB_00339300:
    ppppppbVar9 = *(byte *******)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_268);
    if ((char)uStack_250 == '\0') goto LAB_00339300;
    ppppppbVar9 = *(byte *******)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2f1 < '\0') {
    ppppppbVar9 = (byte ******)apppppbStack_308[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_208) {
    return (char *)ppppppbVar9;
  }
  ___stack_chk_fail();
  if (cStack_2f1 < '\0') {
    __ZdlPv(apppppbStack_308[0]);
  }
  __Unwind_Resume();
  uVar13 = (uint)puVar14;
  if ((char *)0x3 < pcVar10) {
    uVar19 = (ulong)pcVar10 >> 2;
    ppppppbVar3 = ppppppbVar9;
    do {
      uVar13 = (*(int *)ppppppbVar3 * 0x16a88000 | (uint)(*(int *)ppppppbVar3 * -0x3361d2af) >> 0x11
               ) * 0x1b873593 ^ (uint)puVar14;
      uVar13 = (uVar13 >> 0x13 | uVar13 << 0xd) * 5 + 0xe6546b64;
      puVar14 = (ulong *)(ulong)uVar13;
      uVar19 = uVar19 - 1;
      ppppppbVar3 = (byte ******)((long)ppppppbVar3 + 4);
    } while (uVar19 != 0);
    ppppppbVar9 = (byte ******)((long)ppppppbVar9 + ((ulong)pcVar10 & 0xfffffffffffffffc));
  }
  uVar18 = 0;
  uVar19 = (ulong)pcVar10 & 3;
  if (uVar19 != 1) {
    if (uVar19 != 2) {
      if (uVar19 != 3) goto LAB_00339464;
      uVar18 = (uint)*(byte *)((long)ppppppbVar9 + 2) << 0x10;
    }
    uVar18 = uVar18 | (uint)*(byte *)((long)ppppppbVar9 + 1) << 8;
  }
  uVar13 = ((uVar18 ^ *(byte *)ppppppbVar9) * 0x16a88000 |
           (uVar18 ^ *(byte *)ppppppbVar9) * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar13;
LAB_00339464:
  uVar13 = uVar13 ^ (uint)pcVar10;
  uVar13 = (uVar13 ^ uVar13 >> 0x10) * -0x7a143595;
  uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
  return (char *)(ulong)(uVar13 ^ uVar13 >> 0x10);
}



/* Entry: 003f26e0; end: 003f27b3;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003f26e0(undefined8 *param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  undefined7 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_258 [2];
  char cStack_241;
  undefined1 auStack_240 [56];
  undefined8 uStack_208;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  ulong auStack_1b8 [2];
  undefined7 *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  code *pcStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  byte **ppbStack_110;
  byte abStack_108 [64];
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar17 = param_2;
  FUN_0034eb70(&pbStack_80,param_4);
  uStack_58 = uStack_78;
  pbStack_60 = pbStack_80;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  plVar13 = (long *)*param_1;
  lVar15 = *plVar13;
  *plVar13 = lVar15 + 1;
  puVar14 = (undefined8 *)(plVar13[2] + lVar15 * 0x60);
  *puVar14 = 1;
  puVar14[1] = param_3;
  puVar14[2] = param_2;
  puVar14[5] = uStack_78;
  puVar14[4] = pbStack_80;
  puVar14[7] = uStack_68;
  puVar14[6] = uStack_70;
  pbVar8 = pbStack_80;
  if ((byte *)((long)&MACH_HEADER.magic + 1) < pbStack_80) {
    do {
      lVar15 = *(long *)pbStack_80;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pbStack_80,0x10);
      if (bVar2) {
        *(long *)pbStack_80 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(pbStack_80 + 8))();
      pbVar8 = pbStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pbVar8;
  }
  ___stack_chk_fail();
  if ((int)uVar17 != 0) {
    func_0x0040cf10();
  }
  __Unwind_Resume();
  pcStack_88 = FUN_003f27b4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar3 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar9 = uVar17;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pbVar3 != 0) {
    ppbStack_110 = &pbStack_80;
    pbVar3 = abStack_108;
    _vsnprintf(pbVar3,0x40,param_4,&pbStack_80);
    if ((int)(uint)pbVar3 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar3;
      if ((uint)pbVar3 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_108;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar3 & 0xffffffff) + 1);
        FUN_00338c74();
        ppbStack_110 = &pbStack_80;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar9 = uVar17;
    FUN_00338e80(pbVar8,uVar17,2,unaff_x23);
    pbVar3 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return pbVar3;
  }
  ___stack_chk_fail();
  uStack_128 = 2;
  pcStack_118 = FUN_00339178;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = 1;
  pbStack_150 = unaff_x24;
  pbStack_148 = unaff_x23;
  pbStack_140 = param_4;
  uStack_130 = uVar17;
  ppuStack_120 = &puStack_90;
  FUN_0033a598();
  lVar15 = *(long *)pbVar3;
  lVar5 = lVar15;
  uStack_208 = uVar4;
  _strrchr(lVar15,0x2f);
  if (lVar5 != 0) {
    lVar15 = lVar5 + 1;
  }
  puVar14 = &uStack_208;
  _localtime_r(puVar14,auStack_240);
  if (puVar14 == (undefined8 *)0x0) {
    uStack_1f8 = 0x656d69746c6163;
    uStack_1f1 = 0;
    uStack_200 = 0x6c3a726f727265;
    uStack_1f9 = 0x6f;
  }
  else {
    puVar6 = &uStack_200;
    _strftime(puVar6,0x40,"%m%d %H:%M:%S",auStack_240);
    if (puVar6 == (undefined7 *)0x0) {
      uStack_200 = 0x733a726f727265;
      uStack_1f9 = 0x74;
      uStack_1f8 = 0x656d69746672;
    }
  }
  uVar7 = (ulong)*(uint *)(pbVar3 + 0xc);
  func_0x00338e1c();
  uVar17 = uVar7;
  _pthread_self();
  auStack_1b8[1] = 0x560e98;
  puStack_1a8 = &uStack_200;
  uStack_1a0 = 0x560e98;
  uStack_198 = uVar9 & 0xffffffff;
  uStack_190 = 0x5606ac;
  pcStack_180 = FUN_00560738;
  uStack_170 = 0x560e98;
  uStack_168 = (ulong)*(uint *)(pbVar3 + 8);
  uStack_160 = 0x5606ac;
  puVar12 = auStack_1b8;
  auStack_1b8[0] = uVar7;
  uStack_188 = uVar17;
  lStack_178 = lVar15;
  FUN_0056189c(apbStack_258,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar3 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_1b8[0] = auStack_1b8[0] & 0xffffffffffffff00;
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
LAB_00339300:
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_1b8);
    if ((char)uStack_1a0 == '\0') goto LAB_00339300;
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_241 < '\0') {
    pbVar8 = apbStack_258[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return pbVar8;
  }
  ___stack_chk_fail();
  if (cStack_241 < '\0') {
    __ZdlPv(apbStack_258[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar10) {
    uVar17 = (ulong)pcVar10 >> 2;
    pbVar3 = pbVar8;
    do {
      uVar11 = (*(int *)pbVar3 * 0x16a88000 | (uint)(*(int *)pbVar3 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar17 = uVar17 - 1;
      pbVar3 = pbVar3 + 4;
    } while (uVar17 != 0);
    pbVar8 = pbVar8 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar16 = 0;
  uVar17 = (ulong)pcVar10 & 3;
  if (uVar17 != 1) {
    if (uVar17 != 2) {
      if (uVar17 != 3) goto LAB_00339464;
      uVar16 = (uint)pbVar8[2] << 0x10;
    }
    uVar16 = uVar16 | (uint)pbVar8[1] << 8;
  }
  uVar11 = ((uVar16 ^ *pbVar8) * 0x16a88000 | (uVar16 ^ *pbVar8) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003f27b4; end: 003f27bb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003f27b4(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003f27bc; end: 003f2b2f;  */

dword * FUN_003f27bc(dword *param_1,undefined1 param_2,undefined8 *param_3,long param_4,
                    undefined8 *param_5,long *param_6)

{
  long *plVar1;
  dword *pdVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  dword *pdVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  dword *pdVar11;
  long *plVar12;
  undefined8 uVar13;
  long lStack_80;
  undefined8 uStack_78;
  dword *pdStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  *(undefined ***)param_1 = &PTR_FUN_009e1988;
  *(undefined8 *)(param_1 + 2) = 1;
  *(undefined1 *)(param_1 + 4) = param_2;
  uVar13 = param_5[1];
  uVar6 = *param_5;
  param_1[9] = *(undefined4 *)(param_5 + 2);
  *(undefined8 *)(param_1 + 7) = uVar13;
  *(undefined8 *)(param_1 + 5) = uVar6;
  lVar10 = *(long *)(*param_6 + 0x38);
  pdVar11 = param_1;
  FUN_003f1bb8();
  *(long *)(param_1 + 10) = (long)pdVar11 + lVar10;
  FUN_00339d50(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(dword **)(param_1 + 0x1c) = param_1 + 0x1e;
  param_1[0x22] = 0;
  lVar10 = param_4;
  FUN_003a2164(param_4,"grpc.internal.channelz_channel_node",0x23);
  if (lVar10 != 0) {
    plVar12 = (long *)(lVar10 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(long *)(param_1 + 0x24) = lVar10;
  FUN_003a2164(param_4,"grpc.resource_quota",0x13);
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  plVar12 = *(long **)(param_4 + 0x18);
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((char)*(byte *)((long)param_3 + 0x17) < '\0') {
    puVar8 = (undefined8 *)*param_3;
    uVar9 = param_3[1];
  }
  else {
    uVar9 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar8 = param_3;
  }
  FUN_003d77d0(&lStack_80,uVar6,puVar8,uVar9);
  *(undefined8 *)(param_1 + 0x28) = uStack_78;
  *(long *)(param_1 + 0x26) = lStack_80;
  lStack_80 = 0;
  uStack_78 = 0;
  FUN_00377730(&lStack_80);
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  uVar13 = param_3[1];
  uVar6 = *param_3;
  *(undefined8 *)(param_1 + 0x2e) = param_3[2];
  *(undefined8 *)(param_1 + 0x2c) = uVar13;
  *(undefined8 *)(param_1 + 0x2a) = uVar6;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  plVar12 = (long *)(param_1 + 0x30);
  *plVar12 = 0;
  *plVar12 = *param_6;
  *param_6 = 0;
  FUN_003f8b94();
  if (*(long *)(param_1 + 0x24) == 0) {
    pdVar11 = (dword *)0x0;
LAB_003f2998:
    bVar5 = true;
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x24) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pdVar11 = *(dword **)(param_1 + 0x24);
    if (pdVar11 == (dword *)0x0) goto LAB_003f2998;
    pdVar7 = pdVar11 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pdVar7,0x10);
      if (bVar5) {
        *(long *)pdVar7 = *(long *)pdVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = false;
  }
  lVar10 = *plVar12;
  pdStack_68 = (dword *)0x0;
  pdVar7 = &MACH_HEADER.ncmds;
  __Znwm();
  *(undefined ***)pdVar7 = &PTR_FUN_009e1a20;
  *(dword **)(pdVar7 + 2) = pdVar11;
  pdStack_68 = pdVar7;
  FUN_003ba228(&lStack_80,lVar10 + 0x40);
  if (pdStack_68 == (dword *)&lStack_80) {
    lVar10 = 4;
    pdVar7 = (dword *)&lStack_80;
  }
  else {
    pdVar7 = pdStack_68;
    if (pdStack_68 == (dword *)0x0) goto LAB_003f29f8;
    lVar10 = 5;
  }
  (**(code **)(*(long *)pdVar7 + lVar10 * 8))();
LAB_003f29f8:
  if (!bVar5) {
    pdVar2 = pdVar11 + 2;
    do {
      lVar10 = *(long *)pdVar2;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pdVar2,0x10);
      if (bVar3) {
        *(long *)pdVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      pdVar7 = pdVar11;
      (**(code **)(*(long *)pdVar11 + 8))();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (pdVar11 != (dword *)0x0) {
    func_0x00775888(pdVar11);
  }
  if (!bVar5) {
    pdVar2 = pdVar11 + 2;
    do {
      lVar10 = *(long *)pdVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pdVar2,0x10);
      if (bVar5) {
        *(long *)pdVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*(long *)pdVar11 + 8))(pdVar11);
    }
  }
  FUN_0033d4a8(plVar12);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x2a));
  }
  FUN_00377730(param_1 + 0x26);
  plVar12 = *(long **)(param_1 + 0x24);
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar12 + 8))();
    }
  }
  FUN_003f2b30(&lStack_80);
  __Unwind_Resume();
  FUN_003f47d8(pdVar7 + 0x10,*(undefined8 *)(pdVar7 + 0x12));
  func_0x00339d70(pdVar7);
  return pdVar7;
}



/* Entry: 003f2b30; end: 003f2b67;  */

long FUN_003f2b30(long param_1)

{
  FUN_003f47d8(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
  func_0x00339d70(param_1);
  return param_1;
}



/* Entry: 003f2b68; end: 003f2f5b;  */

void FUN_003f2b68(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 ****ppppuVar9;
  int *piVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  char cStack_79;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  uStack_60 = param_2[7];
  plStack_58 = (long *)param_2[8];
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)*param_2)(&uStack_70,param_2);
  if (uStack_70 == 0) {
    FUN_003b061c(&uStack_90);
    puVar12 = &uStack_60;
    FUN_003a2028(puVar12,"grpc.default_compression_level",0x1e);
    if (((ulong)puVar12 & 0xff00000000) != 0) {
      uStack_88 = (uint)puVar12;
      if (2 < (int)uStack_88) {
        uStack_88 = 3;
      }
      uStack_88 = uStack_88 & ((int)uStack_88 >> 0x1f ^ 0xffffffffU);
      uStack_8c = 1;
    }
    puVar12 = &uStack_60;
    FUN_003a2028(puVar12,"grpc.default_compression_algorithm",0x22);
    if (((ulong)puVar12 & 0xff00000000) != 0) {
      uStack_80 = (uint)puVar12;
      if (1 < (int)uStack_80) {
        uStack_80 = 2;
      }
      uStack_80 = uStack_80 & ((int)uStack_80 >> 0x1f ^ 0xffffffffU);
      uStack_84 = 1;
    }
    puVar12 = &uStack_60;
    FUN_003a2028(puVar12,"grpc.compression_enabled_algorithms_bitset",0x2a);
    if (((ulong)puVar12 & 0xff00000000) != 0) {
      uStack_90 = (uint)puVar12 | 1;
    }
    uVar7 = 200;
    __Znwm();
    uVar8 = (ulong)*(uint *)(param_2 + 2);
    FUN_003f6c60(uVar8);
    if ((char)*(byte *)((long)param_2 + 0x2f) < '\0') {
      uVar13 = param_2[4];
      if (0x7ffffffffffffff7 < uVar13) {
        func_0x0033b318(&pppuStack_a8);
        goto LAB_003f2eb0;
      }
      puVar12 = (undefined8 *)param_2[3];
    }
    else {
      puVar12 = param_2 + 3;
      uVar13 = (ulong)*(byte *)((long)param_2 + 0x2f);
    }
    if (uVar13 < 0x17) {
      uStack_98 = CONCAT17((char)uVar13,(undefined7)uStack_98);
      ppppuVar9 = &pppuStack_a8;
      if (uVar13 != 0) goto LAB_003f2d78;
    }
    else {
      uVar3 = (uVar13 & 0x7ffffffffffffff8) + 8;
      if ((uVar13 | 7) != 0x17) {
        uVar3 = uVar13 | 7;
      }
      ppppuVar9 = (undefined8 ****)(uVar3 + 1);
      __Znwm();
      uStack_98 = uVar3 + 1 | 0x8000000000000000;
      pppuStack_a8 = ppppuVar9;
      uStack_a0 = uVar13;
LAB_003f2d78:
      _memmove(ppppuVar9,puVar12,uVar13);
    }
    *(undefined1 *)((long)ppppuVar9 + uVar13) = 0;
    plStack_b8 = plStack_58;
    uStack_c0 = uStack_60;
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
    uStack_d8 = CONCAT44(uStack_84,uStack_88);
    uStack_e0 = CONCAT44(uStack_8c,uStack_90);
    uStack_d0 = uStack_80;
    if (uStack_70 != 0) {
      FUN_0055169c(&uStack_70);
LAB_003f2eb0:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x3f2eb4);
      (*pcVar6)();
    }
    uStack_e8 = uStack_68;
    uStack_68 = 0;
    FUN_003f27bc(uVar7,uVar8,&pppuStack_a8,&uStack_c0,&uStack_e0,&uStack_e8);
    *param_1 = 0;
    param_1[1] = uVar7;
    FUN_0033d4a8(&uStack_e8);
    plVar1 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar11 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if ((long)uStack_98 < 0) {
      __ZdlPv(pppuStack_a8);
    }
    goto LAB_003f2e2c;
  }
  uStack_78 = uStack_70;
  if ((uStack_70 & 1) == 0) {
LAB_003f2bec:
    FUN_00552ec8(&uStack_90,&uStack_78,1);
  }
  else {
    piVar10 = (int *)(uStack_70 - 1);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = *piVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (uStack_70 != 0) goto LAB_003f2bec;
    FUN_00353254(&uStack_90,"OK");
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
               ,0x75,2,"channel stack builder failed: %s");
  if (cStack_79 < '\0') {
    __ZdlPv(CONCAT44(uStack_8c,uStack_90));
  }
  FUN_0038227c(param_1,&uStack_78);
  if ((uStack_78 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003f2e2c:
  FUN_003742a4(&uStack_70);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 003f2f5c; end: 003f366f;  */

/* WARNING: Removing unreachable block (ram,0x003f33b4) */
/* WARNING: Removing unreachable block (ram,0x003f34b0) */

void FUN_003f2f5c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,code *param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 ***pppuStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined **appuStack_130 [3];
  undefined8 ***pppuStack_118;
  long *plStack_110;
  byte bStack_101;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined1 auStack_d0 [8];
  long *plStack_c8;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined8 ***pppuStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  char cStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar8 = param_4;
  func_0x003f6c98(param_4);
  FUN_00374228(appuStack_130,pcVar8,param_4);
  appuStack_130[0] = &PTR_FUN_009df510;
  FUN_003a20f4(&lStack_88,param_3,"grpc.default_authority",0x16);
  if ((cStack_78 == '\0') &&
     (FUN_003a20f4(&lStack_88,param_3,"grpc.ssl_target_name_override",0x1d), ppuVar7 = ppuStack_80,
     lVar14 = lStack_88, cStack_78 != '\0')) {
    if (ppuStack_80 < (undefined **)0x7ffffffffffffff8) {
      if ((undefined **)((long)&MACH_HEADER.sizeofcmds + 2) < ppuStack_80) {
        uVar9 = ((ulong)ppuStack_80 & 0xfffffffffffffff8) + 8;
        if (((ulong)ppuStack_80 | 7) != 0x17) {
          uVar9 = (ulong)ppuStack_80 | 7;
        }
        ppppuVar11 = (undefined8 ****)(uVar9 + 1);
        __Znwm();
        uStack_138 = uVar9 + 1 | 0x8000000000000000;
        ppuStack_140 = ppuVar7;
        pppuStack_148 = ppppuVar11;
LAB_003f3270:
        _memmove(ppppuVar11,lVar14,ppuVar7);
      }
      else {
        uStack_138 = CONCAT17((char)ppuStack_80,(undefined7)uStack_138);
        ppppuVar11 = &pppuStack_148;
        if (ppuStack_80 != (undefined **)0x0) goto LAB_003f3270;
      }
      *(undefined1 *)((long)ppppuVar11 + (long)ppuVar7) = 0;
      FUN_003a1f88(&pppuStack_b0,param_3,"grpc.default_authority",0x16,&pppuStack_148);
      FUN_003a347c(param_3,&pppuStack_b0);
      plVar15 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar2 = plStack_a8 + 1;
        do {
          lVar14 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      if ((long)uStack_138 < 0) {
        __ZdlPv(pppuStack_148);
      }
      goto LAB_003f2fe8;
    }
  }
  else {
LAB_003f2fe8:
    pcVar8 = param_4;
    func_0x003f6c60();
    if (((int)pcVar8 != 0) && (FUN_003a3454(), pcVar8 != (code *)0x0)) {
      uStack_158 = *param_3;
      plStack_150 = (long *)param_3[1];
      if (plStack_150 != (long *)0x0) {
        plVar15 = plStack_150 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = *plVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      (*pcVar8)(&lStack_88,param_2,&uStack_158,param_4);
      FUN_003a347c(param_3,&lStack_88);
      ppuVar7 = ppuStack_80;
      if (ppuStack_80 != (undefined **)0x0) {
        ppuVar1 = ppuStack_80 + 1;
        do {
          puVar13 = *ppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar6) {
            *ppuVar1 = puVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_80 + 0x10))(ppuStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
        }
      }
      plVar15 = plStack_150;
      if (plStack_150 != (long *)0x0) {
        plVar2 = plStack_150 + 1;
        do {
          lVar14 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
    }
    plStack_168 = (long *)param_3[1];
    uStack_170 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    func_0x003a6b84(appuStack_130,&uStack_170);
    func_0x003a6b18();
    FUN_00373d78();
    plVar15 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar2 = plStack_168 + 1;
      do {
        lVar14 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    lVar14 = lRam0000000000b65d18;
    if (lRam0000000000b65d18 == 0) {
      FUN_003b171c();
    }
    uVar9 = lVar14 + 0x18;
    FUN_003f5500(uVar9,appuStack_130);
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      func_0x003f6c60();
      if ((int)param_4 != 0) {
        uStack_98 = uStack_f8;
        plStack_90 = plStack_f0;
        if (plStack_f0 != (long *)0x0) {
          plStack_f0 = plStack_f0 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plStack_f0,0x10);
            if (bVar6) {
              *plStack_f0 = *plStack_f0 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar10 = &uStack_98;
        FUN_003a21a4(puVar10,"grpc.enable_channelz",0x14);
        if (((uint)puVar10 & 0xffff) < 0x100 || ((ulong)puVar10 & 0xff) != 0) {
          puVar10 = &uStack_98;
          FUN_003a2028(puVar10,"grpc.max_channel_trace_event_memory_per_node",0x2c);
          uVar4 = 0x1000;
          if (((ulong)puVar10 & 0xff00000000) != 0) {
            uVar4 = (uint)puVar10 & ((int)(uint)puVar10 >> 0x1f ^ 0xffffffffU);
          }
          puVar10 = &uStack_98;
          FUN_003a21a4(puVar10,"grpc.channelz_is_internal_channel",0x21);
          uVar3 = (uint)puVar10 & 0xffff;
          if (uVar3 < 0x101) {
            uVar3 = 0;
          }
          if ((char)bStack_101 < '\0') {
            plVar15 = plStack_110;
            ppppuVar11 = (undefined8 ****)pppuStack_118;
            if ((long *)0x7ffffffffffffff7 < plStack_110) {
              func_0x0033b318(&pppuStack_b0);
              goto LAB_003f3554;
            }
          }
          else {
            plVar15 = (long *)(ulong)bStack_101;
            ppppuVar11 = &pppuStack_118;
          }
          if ((long *)((long)&MACH_HEADER.sizeofcmds + 2) < plVar15) {
            uVar9 = ((ulong)plVar15 & 0x7ffffffffffffff8) + 8;
            if (((ulong)plVar15 | 7) != 0x17) {
              uVar9 = (ulong)plVar15 | 7;
            }
            ppppuVar12 = (undefined8 ****)(uVar9 + 1);
            __Znwm();
            uStack_a0 = uVar9 + 1 | 0x8000000000000000;
            pppuStack_b0 = ppppuVar12;
            plStack_a8 = plVar15;
LAB_003f3358:
            _memmove(ppppuVar12,ppppuVar11,plVar15);
          }
          else {
            uStack_a0 = CONCAT17((char)plVar15,(undefined7)uStack_a0);
            ppppuVar12 = &pppuStack_b0;
            if (plVar15 != (long *)0x0) goto LAB_003f3358;
          }
          *(undefined1 *)((long)ppppuVar12 + (long)plVar15) = 0;
          lVar14 = 0x160;
          __Znwm();
          FUN_00353254(&lStack_88,&pppuStack_b0);
          FUN_003a8bd0(lVar14,&lStack_88,uVar4,(uVar3 & 0xff) != 0);
          FUN_003ec14c(&lStack_88,"Channel created");
          FUN_003a75b4(lVar14 + 0x70,1,&lStack_88);
          FUN_003a1fec(auStack_d0,&uStack_98,"grpc.channelz_is_internal_channel",0x21);
          ppuStack_80 = &PTR_FUN_009e19f8;
          uStack_70 = 2;
          lStack_88 = lVar14;
          FUN_003a1bc4(auStack_c0,auStack_d0,"grpc.internal.channelz_channel_node",0x23,&lStack_88);
          func_0x003a6b84(appuStack_130,auStack_c0);
          if (plStack_b8 != (long *)0x0) {
            plVar15 = plStack_b8 + 1;
            do {
              lVar14 = *plVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
            }
          }
          FUN_00382478(&lStack_88);
          if (plStack_c8 != (long *)0x0) {
            plVar15 = plStack_c8 + 1;
            do {
              lVar14 = *plVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar14 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
            }
          }
        }
        plVar15 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          plVar2 = plStack_90 + 1;
          do {
            lVar14 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
          }
        }
      }
      FUN_003f2b68(param_1,appuStack_130);
    }
    func_0x003a6ac4(appuStack_130);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0033b318(&pppuStack_148);
LAB_003f3554:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x3f3558);
  (*pcVar8)();
}



/* Entry: 003f36bc; end: 003f36fb;  */

void FUN_003f36bc(long param_1)

{
  ulong uVar1;
  
  if ((char)*(byte *)(param_1 + 0xbf) < '\0') {
    uVar1 = *(ulong *)(param_1 + 0xb0);
  }
  else {
    uVar1 = (ulong)*(byte *)(param_1 + 0xbf);
  }
  func_0x00338c94(uVar1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_0099a3f8)();
  return;
}



/* Entry: 003f36fc; end: 003f3943;  */

long **** FUN_003f36fc(long ****param_1,undefined8 param_2,long ****param_3,long param_4,
                      undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                      long param_9)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  char *pcVar8;
  long ****pppplVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long ***ppplVar18;
  long ***ppplVar19;
  long ****pppplVar20;
  long ***ppplVar21;
  long **pplStack_340;
  long **pplStack_338;
  long **pplStack_330;
  long **pplStack_2a0;
  long **pplStack_298;
  long **pplStack_290;
  long **pplStack_288;
  long lStack_248;
  undefined8 uStack_240;
  long ***ppplStack_238;
  long ***ppplStack_230;
  long ***ppplStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  char *pcStack_210;
  long **pplStack_200;
  long ***ppplStack_1f8;
  long **pplStack_1f0;
  long ***ppplStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  char cStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  char cStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long ***ppplStack_148;
  long ***ppplStack_140;
  long ***ppplStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [72];
  long **pplStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_a0;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_9 != 0) {
    func_0x007758c0();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x3f38e4);
    (*pcVar3)();
  }
  pplStack_d8 = (long **)0x0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  FUN_00341380(&pplStack_d8,0);
  FUN_003413d4(auStack_120);
  plVar15 = (long *)*param_5;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar15) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = *plVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_88 = param_5[1];
  plStack_90 = (long *)*param_5;
  uStack_78 = param_5[3];
  uStack_80 = param_5[2];
  if (param_6 == (undefined8 *)0x0) {
    cStack_a0 = '\0';
    plStack_c0 = (long *)((ulong)plStack_c0 & 0xffffffffffffff00);
  }
  else {
    plVar15 = (long *)*param_6;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar15) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar2) {
          *plVar15 = *plVar15 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_b8 = param_6[1];
    plStack_c0 = (long *)*param_6;
    uStack_a8 = param_6[3];
    uStack_b0 = param_6[2];
    cStack_a0 = '\x01';
  }
  FUN_003b8b9c(param_7,param_8);
  pplVar13 = &plStack_90;
  pplVar14 = &plStack_c0;
  lVar12 = 0;
  uVar11 = param_2;
  pcVar8 = (char *)param_3;
  FUN_003f3944();
  if (param_6 == (undefined8 *)0x0) {
    if ((cStack_a0 != '\0') && ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c0)) {
      do {
        lVar16 = *plStack_c0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar2) {
          *plStack_c0 = lVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar16 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
  }
  else if ((cStack_a0 != '\0') && ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c0)) {
    do {
      lVar16 = *plStack_c0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
      if (bVar2) {
        *plStack_c0 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plStack_c0[1])();
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar16 = *plStack_90;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar2) {
        *plStack_90 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  FUN_00341470(auStack_120);
  pppplVar7 = (long ****)&pplStack_d8;
  FUN_003414dc();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)uVar11 != 0) {
    func_0x0040cf10();
    FUN_003414dc(&pplStack_d8);
  }
  pppplVar9 = pppplVar7;
  __Unwind_Resume();
  uStack_150 = param_2;
  ppplStack_148 = (long ***)param_3;
  ppplStack_140 = (long ***)param_1;
  ppplStack_138 = (long ***)pppplVar7;
  puStack_130 = &stack0xfffffffffffffff0;
  pcStack_128 = FUN_003f3944;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  pppplVar7 = pppplVar9 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppplVar7,0x10);
    if (bVar2) {
      *pppplVar7 = (long ***)((long)*pppplVar7 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (*(char *)(pppplVar9 + 2) == '\0') {
    pcStack_210 = "channel->is_client()";
    uVar11 = 0x123;
LAB_003f3b18:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                 ,uVar11,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x3f3b3c);
    (*pcVar3)();
  }
  if ((param_4 != 0) && (lVar12 != 0)) {
    pcStack_210 = "!(cq != nullptr && pollset_set_alternative != nullptr)";
    uVar11 = 0x124;
    goto LAB_003f3b18;
  }
  plStack_1a8 = pplVar13[1];
  plStack_1b0 = *pplVar13;
  plStack_198 = pplVar13[3];
  plStack_1a0 = pplVar13[2];
  uStack_188 = 0;
  cStack_168 = '\0';
  uStack_160 = 0;
  uStack_1e0 = 0;
  uStack_1d0 = SUB84(pcVar8,0);
  uStack_1b8 = 0;
  pplVar13[1] = (long *)0x0;
  *pplVar13 = (long *)0x0;
  pplVar13[3] = (long *)0x0;
  pplVar13[2] = (long *)0x0;
  cStack_190 = '\x01';
  ppplStack_1e8 = (long ***)pppplVar9;
  uStack_1d8 = uVar11;
  lStack_1c8 = param_4;
  lStack_1c0 = lVar12;
  FUN_003f4934(&uStack_188,pplVar14);
  pppplVar9 = &ppplStack_1f8;
  uStack_160 = param_7;
  func_0x003f1bc0(&pplStack_200,&ppplStack_1e8);
  if ((long ***)pplStack_200 != (long ***)0x0) {
    pplStack_1f0 = pplStack_200;
    if (((ulong)pplStack_200 & 1) != 0) {
      piVar17 = (int *)((long)pplStack_200 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar2) {
          *piVar17 = *piVar17 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcVar8 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc";
    pppplVar9 = (long ****)&pplStack_1f0;
    FUN_003be608("call_create",pppplVar9,
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                 ,0x133);
    if (((ulong)pplStack_1f0 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (((ulong)pplStack_200 & 1) != 0) {
    FUN_0055293c();
  }
  if ((cStack_168 != '\0') &&
     (plVar15 = (long *)CONCAT71(uStack_187,uStack_188),
     (long *)((long)&MACH_HEADER.magic + 1) < plVar15)) {
    do {
      lVar12 = *plVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar15[1])();
    }
  }
  if ((cStack_190 != '\0') && ((long *)((long)&MACH_HEADER.magic + 1) < plStack_1b0)) {
    do {
      lVar12 = *plStack_1b0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_1b0,0x10);
      if (bVar2) {
        *plStack_1b0 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_1b0[1])();
    }
  }
  pppplVar4 = (long ****)ppplStack_1e8;
  if ((long ****)ppplStack_1e8 != (long ****)0x0) {
    pppplVar5 = (long ****)(ppplStack_1e8 + 1);
    do {
      ppplVar18 = *pppplVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar5,0x10);
      if (bVar2) {
        *pppplVar5 = (long ***)((long)ppplVar18 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long ***)((long)ppplVar18 + -1) == (long ***)0x0) {
      (*(code *)(*ppplStack_1e8)[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return (long ****)ppplStack_1f8;
  }
  ___stack_chk_fail();
  if ((int)pppplVar9 == 0) {
LAB_003f3bb8:
    __Unwind_Resume();
  }
  else {
    func_0x0040cf10();
    do {
      ppplVar18 = *pppplVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar7,0x10);
      if (bVar2) {
        *pppplVar7 = (long ***)((long)ppplVar18 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long ***)((long)ppplVar18 + -1) != (long ***)0x0) goto LAB_003f3bb8;
  }
  (*(code *)(*ppplStack_1f8)[1])(ppplStack_1f8);
  pppplVar5 = pppplVar4;
  __Unwind_Resume();
  ppplStack_228 = ppplStack_1f8;
  pcStack_218 = FUN_003f3bd8;
  lStack_248 = *(long *)PTR____stack_chk_guard_00999f88;
  pppplVar20 = pppplVar5 + 4;
  *(undefined1 *)pppplVar20 = 0;
  *(undefined1 *)(pppplVar5 + 8) = 0;
  pppplVar5[1] = (long ***)0x0;
  *pppplVar5 = (long ***)0x0;
  pppplVar5[3] = (long ***)0x0;
  pppplVar5[2] = (long ***)0x0;
  pppplVar6 = pppplVar9;
  uStack_240 = param_2;
  ppplStack_238 = (long ***)pppplVar7;
  ppplStack_230 = (long ***)pppplVar4;
  ppuStack_220 = &puStack_130;
  _strlen();
  func_0x003ec288(&pplStack_2a0,pppplVar9);
  pppplVar7 = (long ****)*pppplVar5;
  *pppplVar5 = (long ***)pplStack_2a0;
  pppplVar5[2] = (long ***)pplStack_290;
  pppplVar5[1] = (long ***)pplStack_298;
  pppplVar5[3] = (long ***)pplStack_288;
  if ((long ****)((long)&MACH_HEADER.magic + 1) < pppplVar7) {
    do {
      ppplVar18 = *pppplVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar7,0x10);
      if (bVar2) {
        *pppplVar7 = (long ***)((long)ppplVar18 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long ***)((long)ppplVar18 + -1) == (long ***)0x0) {
      (*(code *)pppplVar7[1])();
    }
  }
  if (((long ****)pcVar8 != (long ****)0x0) && (*pcVar8 != '\0')) {
    pppplVar6 = (long ****)pcVar8;
    _strlen();
    func_0x003ec288(&pplStack_2a0);
    if (*(char *)(pppplVar5 + 8) == '\0') {
      pppplVar5[6] = (long ***)pplStack_290;
      pppplVar5[5] = (long ***)pplStack_298;
      pppplVar5[7] = (long ***)pplStack_288;
      *(undefined1 *)(pppplVar5 + 8) = 1;
      pppplVar5[4] = (long ***)pplStack_2a0;
      pppplVar7 = (long ****)pcVar8;
    }
    else {
      pppplVar7 = (long ****)*pppplVar20;
      pppplVar5[6] = (long ***)pplStack_290;
      pppplVar5[5] = (long ***)pplStack_298;
      pppplVar5[7] = (long ***)pplStack_288;
      *pppplVar20 = (long ***)pplStack_2a0;
      if ((long ****)((long)&MACH_HEADER.magic + 1) < pppplVar7) {
        do {
          ppplVar18 = *pppplVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppplVar7,0x10);
          if (bVar2) {
            *pppplVar7 = (long ***)((long)ppplVar18 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ***)((long)ppplVar18 + -1) == (long ***)0x0) {
          (*(code *)pppplVar7[1])();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_248) {
    return pppplVar5;
  }
  ___stack_chk_fail();
  if ((int)pppplVar6 != 0) {
    func_0x0040cf10();
    if (*(char *)(pppplVar5 + 8) != '\0') {
      FUN_0034b418(pppplVar20);
    }
    FUN_0034b418(pppplVar5);
  }
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_00999f88;
  ppplVar18 = *pppplVar6;
  if ((long ***)((long)&MACH_HEADER.magic + 1) < ppplVar18) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppplVar18,0x10);
      if (bVar2) {
        *ppplVar18 = (long **)((long)*ppplVar18 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppplVar18 = *pppplVar6;
  ppplVar21 = pppplVar6[3];
  ppplVar19 = pppplVar6[2];
  pppplVar7[1] = pppplVar6[1];
  *pppplVar7 = ppplVar18;
  pppplVar7[3] = ppplVar21;
  pppplVar7[2] = ppplVar19;
  *(char *)(pppplVar7 + 4) = '\0';
  *(char *)(pppplVar7 + 8) = '\0';
  pppplVar9 = pppplVar7;
  if (*(char *)(pppplVar6 + 8) != '\0') {
    ppplVar18 = pppplVar6[4];
    if (ppplVar18 < (long ***)((long)&MACH_HEADER.magic + 2)) {
      pplStack_338 = (long **)pppplVar6[6];
      pplStack_340 = (long **)pppplVar6[5];
      pplStack_330 = (long **)pppplVar6[7];
    }
    else {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppplVar18,0x10);
        if (bVar2) {
          *ppplVar18 = (long **)((long)*ppplVar18 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      ppplVar18 = pppplVar6[4];
      pplStack_338 = (long **)pppplVar6[6];
      pplStack_340 = (long **)pppplVar6[5];
      pplStack_330 = (long **)pppplVar6[7];
      if (*(char *)(pppplVar7 + 8) != '\0') {
        pppplVar9 = (long ****)pppplVar7[4];
        ppplVar19 = pppplVar6[7];
        ppplVar21 = pppplVar6[5];
        pppplVar7[6] = pppplVar6[6];
        pppplVar7[5] = ppplVar21;
        pppplVar7[7] = ppplVar19;
        pppplVar7[4] = ppplVar18;
        if ((long ****)((long)&MACH_HEADER.magic + 1) < pppplVar9) {
          do {
            ppplVar18 = *pppplVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
            if (bVar2) {
              *pppplVar9 = (long ***)((long)ppplVar18 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((long ***)((long)ppplVar18 + -1) == (long ***)0x0) {
            (*(code *)pppplVar9[1])();
          }
        }
        goto LAB_003f3ebc;
      }
    }
    pppplVar7[6] = (long ***)pplStack_338;
    pppplVar7[5] = (long ***)pplStack_340;
    pppplVar7[7] = (long ***)pplStack_330;
    *(char *)(pppplVar7 + 8) = '\x01';
    pppplVar7[4] = ppplVar18;
  }
LAB_003f3ebc:
  iVar10 = (int)pppplVar6;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar12) {
    ___stack_chk_fail();
    if (iVar10 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10();
    if (*(char *)(pppplVar9 + 8) != '\0') {
      FUN_0034b418(pppplVar9 + 4);
    }
    ppplVar18 = *pppplVar9;
    if ((long ***)((long)&MACH_HEADER.magic + 1) < ppplVar18) {
      do {
        pplVar14 = *ppplVar18;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppplVar18,0x10);
        if (bVar2) {
          *ppplVar18 = (long **)((long)pplVar14 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((long **)((long)pplVar14 + -1) == (long **)0x0) {
        (*(code *)ppplVar18[1])();
      }
    }
    return pppplVar9;
  }
  return pppplVar7;
}



/* Entry: 003f3944; end: 003f3bd7;  */

long **** FUN_003f3944(long ****param_1,undefined8 param_2,char *param_3,long param_4,long param_5,
                      undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  int iVar8;
  undefined8 uVar9;
  long **pplVar10;
  int *piVar11;
  long lVar12;
  long ***ppplVar13;
  long ***ppplVar14;
  long ****pppplVar15;
  long ***ppplVar16;
  long **pplStack_220;
  long **pplStack_218;
  long **pplStack_210;
  long **pplStack_180;
  long **pplStack_178;
  long **pplStack_170;
  long **pplStack_168;
  long lStack_128;
  long **pplStack_e0;
  long ***ppplStack_d8;
  long **pplStack_d0;
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  char cStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  pppplVar5 = param_1 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppplVar5,0x10);
    if (bVar2) {
      *pppplVar5 = (long ***)((long)*pppplVar5 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (*(char *)(param_1 + 2) == '\0') {
    uVar9 = 0x123;
LAB_003f3b18:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                 ,uVar9,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3f3b3c);
    (*pcVar4)();
  }
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar9 = 0x124;
    goto LAB_003f3b18;
  }
  uStack_88 = param_6[1];
  plStack_90 = (long *)*param_6;
  uStack_78 = param_6[3];
  uStack_80 = param_6[2];
  uStack_68 = 0;
  cStack_48 = '\0';
  uStack_40 = 0;
  uStack_c0 = 0;
  uStack_b0 = SUB84(param_3,0);
  uStack_98 = 0;
  param_6[1] = 0;
  *param_6 = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  cStack_70 = '\x01';
  ppplStack_c8 = (long ***)param_1;
  uStack_b8 = param_2;
  lStack_a8 = param_4;
  lStack_a0 = param_5;
  FUN_003f4934(&uStack_68,param_7);
  pppplVar6 = &ppplStack_d8;
  uStack_40 = param_8;
  func_0x003f1bc0(&pplStack_e0,&ppplStack_c8);
  if ((long ***)pplStack_e0 != (long ***)0x0) {
    pplStack_d0 = pplStack_e0;
    if (((ulong)pplStack_e0 & 1) != 0) {
      piVar11 = (int *)((long)pplStack_e0 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_3 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc";
    pppplVar6 = (long ****)&pplStack_d0;
    FUN_003be608("call_create",pppplVar6,
                 "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel.cc"
                 ,0x133);
    if (((ulong)pplStack_d0 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (((ulong)pplStack_e0 & 1) != 0) {
    FUN_0055293c();
  }
  if ((cStack_48 != '\0') &&
     (plVar3 = (long *)CONCAT71(uStack_67,uStack_68),
     (long *)((long)&MACH_HEADER.magic + 1) < plVar3)) {
    do {
      lVar12 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  if ((cStack_70 != '\0') && ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90)) {
    do {
      lVar12 = *plStack_90;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar2) {
        *plStack_90 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  pppplVar7 = (long ****)ppplStack_c8;
  if ((long ****)ppplStack_c8 != (long ****)0x0) {
    pppplVar15 = (long ****)(ppplStack_c8 + 1);
    do {
      ppplVar13 = *pppplVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar15,0x10);
      if (bVar2) {
        *pppplVar15 = (long ***)((long)ppplVar13 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
      (*(code *)(*ppplStack_c8)[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return (long ****)ppplStack_d8;
  }
  ___stack_chk_fail();
  if ((int)pppplVar6 == 0) {
LAB_003f3bb8:
    __Unwind_Resume();
  }
  else {
    func_0x0040cf10();
    do {
      ppplVar13 = *pppplVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar5,0x10);
      if (bVar2) {
        *pppplVar5 = (long ***)((long)ppplVar13 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long ***)((long)ppplVar13 + -1) != (long ***)0x0) goto LAB_003f3bb8;
  }
  (*(code *)(*ppplStack_d8)[1])(ppplStack_d8);
  __Unwind_Resume();
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pppplVar15 = pppplVar7 + 4;
  *(undefined1 *)pppplVar15 = 0;
  *(undefined1 *)(pppplVar7 + 8) = 0;
  pppplVar7[1] = (long ***)0x0;
  *pppplVar7 = (long ***)0x0;
  pppplVar7[3] = (long ***)0x0;
  pppplVar7[2] = (long ***)0x0;
  pppplVar5 = pppplVar6;
  _strlen();
  func_0x003ec288(&pplStack_180,pppplVar6);
  pppplVar6 = (long ****)*pppplVar7;
  *pppplVar7 = (long ***)pplStack_180;
  pppplVar7[2] = (long ***)pplStack_170;
  pppplVar7[1] = (long ***)pplStack_178;
  pppplVar7[3] = (long ***)pplStack_168;
  if ((long ****)((long)&MACH_HEADER.magic + 1) < pppplVar6) {
    do {
      ppplVar13 = *pppplVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
      if (bVar2) {
        *pppplVar6 = (long ***)((long)ppplVar13 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
      (*(code *)pppplVar6[1])();
    }
  }
  if (((long ****)param_3 != (long ****)0x0) && (*param_3 != '\0')) {
    pppplVar5 = (long ****)param_3;
    _strlen();
    func_0x003ec288(&pplStack_180);
    if (*(char *)(pppplVar7 + 8) == '\0') {
      pppplVar7[6] = (long ***)pplStack_170;
      pppplVar7[5] = (long ***)pplStack_178;
      pppplVar7[7] = (long ***)pplStack_168;
      *(undefined1 *)(pppplVar7 + 8) = 1;
      pppplVar7[4] = (long ***)pplStack_180;
      pppplVar6 = (long ****)param_3;
    }
    else {
      pppplVar6 = (long ****)*pppplVar15;
      pppplVar7[6] = (long ***)pplStack_170;
      pppplVar7[5] = (long ***)pplStack_178;
      pppplVar7[7] = (long ***)pplStack_168;
      *pppplVar15 = (long ***)pplStack_180;
      if ((long ****)((long)&MACH_HEADER.magic + 1) < pppplVar6) {
        do {
          ppplVar13 = *pppplVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
          if (bVar2) {
            *pppplVar6 = (long ***)((long)ppplVar13 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
          (*(code *)pppplVar6[1])();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return pppplVar7;
  }
  ___stack_chk_fail();
  if ((int)pppplVar5 != 0) {
    func_0x0040cf10();
    if (*(char *)(pppplVar7 + 8) != '\0') {
      FUN_0034b418(pppplVar15);
    }
    FUN_0034b418(pppplVar7);
  }
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_00999f88;
  ppplVar13 = *pppplVar5;
  if ((long ***)((long)&MACH_HEADER.magic + 1) < ppplVar13) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppplVar13,0x10);
      if (bVar2) {
        *ppplVar13 = (long **)((long)*ppplVar13 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppplVar13 = *pppplVar5;
  ppplVar16 = pppplVar5[3];
  ppplVar14 = pppplVar5[2];
  pppplVar6[1] = pppplVar5[1];
  *pppplVar6 = ppplVar13;
  pppplVar6[3] = ppplVar16;
  pppplVar6[2] = ppplVar14;
  *(char *)(pppplVar6 + 4) = '\0';
  *(char *)(pppplVar6 + 8) = '\0';
  pppplVar7 = pppplVar6;
  if (*(char *)(pppplVar5 + 8) != '\0') {
    ppplVar13 = pppplVar5[4];
    if (ppplVar13 < (long ***)((long)&MACH_HEADER.magic + 2)) {
      pplStack_218 = (long **)pppplVar5[6];
      pplStack_220 = (long **)pppplVar5[5];
      pplStack_210 = (long **)pppplVar5[7];
    }
    else {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppplVar13,0x10);
        if (bVar2) {
          *ppplVar13 = (long **)((long)*ppplVar13 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      ppplVar13 = pppplVar5[4];
      pplStack_218 = (long **)pppplVar5[6];
      pplStack_220 = (long **)pppplVar5[5];
      pplStack_210 = (long **)pppplVar5[7];
      if (*(char *)(pppplVar6 + 8) != '\0') {
        pppplVar7 = (long ****)pppplVar6[4];
        ppplVar14 = pppplVar5[7];
        ppplVar16 = pppplVar5[5];
        pppplVar6[6] = pppplVar5[6];
        pppplVar6[5] = ppplVar16;
        pppplVar6[7] = ppplVar14;
        pppplVar6[4] = ppplVar13;
        if ((long ****)((long)&MACH_HEADER.magic + 1) < pppplVar7) {
          do {
            ppplVar13 = *pppplVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppplVar7,0x10);
            if (bVar2) {
              *pppplVar7 = (long ***)((long)ppplVar13 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((long ***)((long)ppplVar13 + -1) == (long ***)0x0) {
            (*(code *)pppplVar7[1])();
          }
        }
        goto LAB_003f3ebc;
      }
    }
    pppplVar6[6] = (long ***)pplStack_218;
    pppplVar6[5] = (long ***)pplStack_220;
    pppplVar6[7] = (long ***)pplStack_210;
    *(char *)(pppplVar6 + 8) = '\x01';
    pppplVar6[4] = ppplVar13;
  }
LAB_003f3ebc:
  iVar8 = (int)pppplVar5;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar12) {
    ___stack_chk_fail();
    if (iVar8 == 0) {
      __Unwind_Resume();
    }
    func_0x0040cf10();
    if (*(char *)(pppplVar7 + 8) != '\0') {
      FUN_0034b418(pppplVar7 + 4);
    }
    ppplVar13 = *pppplVar7;
    if ((long ***)((long)&MACH_HEADER.magic + 1) < ppplVar13) {
      do {
        pplVar10 = *ppplVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppplVar13,0x10);
        if (bVar2) {
          *ppplVar13 = (long **)((long)pplVar10 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((long **)((long)pplVar10 + -1) == (long **)0x0) {
        (*(code *)ppplVar13[1])();
      }
    }
    return pppplVar7;
  }
  return pppplVar6;
}



/* Entry: 003f3bd8; end: 003f3dab;  */

long * FUN_003f3bd8(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = param_1 + 4;
  *(undefined1 *)plVar7 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  plVar3 = param_2;
  _strlen();
  func_0x003ec288(&lStack_90,param_2);
  plVar4 = (long *)*param_1;
  *param_1 = lStack_90;
  param_1[2] = lStack_80;
  param_1[1] = lStack_88;
  param_1[3] = lStack_78;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plVar4[1])();
    }
  }
  if ((param_3 != (long *)0x0) && ((char)*param_3 != '\0')) {
    plVar3 = param_3;
    _strlen();
    func_0x003ec288(&lStack_90);
    if ((char)param_1[8] == '\0') {
      param_1[6] = lStack_80;
      param_1[5] = lStack_88;
      param_1[7] = lStack_78;
      *(undefined1 *)(param_1 + 8) = 1;
      param_1[4] = lStack_90;
      plVar4 = param_3;
    }
    else {
      plVar4 = (long *)*plVar7;
      param_1[6] = lStack_80;
      param_1[5] = lStack_88;
      param_1[7] = lStack_78;
      *plVar7 = lStack_90;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 + -1 == 0) {
          (*(code *)plVar4[1])();
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)plVar3 != 0) {
    func_0x0040cf10();
    if ((char)param_1[8] != '\0') {
      FUN_0034b418(plVar7);
    }
    FUN_0034b418(param_1);
  }
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = (long *)*plVar3;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar9 = *plVar3;
  lVar11 = plVar3[3];
  lVar10 = plVar3[2];
  plVar4[1] = plVar3[1];
  *plVar4 = lVar9;
  plVar4[3] = lVar11;
  plVar4[2] = lVar10;
  *(char *)(plVar4 + 4) = '\0';
  *(char *)(plVar4 + 8) = '\0';
  plVar7 = plVar4;
  if ((char)plVar3[8] != '\0') {
    plVar8 = (long *)plVar3[4];
    if (plVar8 < (long *)((long)&MACH_HEADER.magic + 2)) {
      lStack_128 = plVar3[6];
      lStack_130 = plVar3[5];
      lStack_120 = plVar3[7];
    }
    else {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar8 = (long *)plVar3[4];
      lStack_128 = plVar3[6];
      lStack_130 = plVar3[5];
      lStack_120 = plVar3[7];
      if ((char)plVar4[8] != '\0') {
        plVar7 = (long *)plVar4[4];
        lVar9 = plVar3[7];
        lVar10 = plVar3[5];
        plVar4[6] = plVar3[6];
        plVar4[5] = lVar10;
        plVar4[7] = lVar9;
        plVar4[4] = (long)plVar8;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar7) {
          do {
            lVar9 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 + -1 == 0) {
            (*(code *)plVar7[1])();
          }
        }
        goto LAB_003f3ebc;
      }
    }
    plVar4[6] = lStack_128;
    plVar4[5] = lStack_130;
    plVar4[7] = lStack_120;
    *(char *)(plVar4 + 8) = '\x01';
    plVar4[4] = (long)plVar8;
  }
LAB_003f3ebc:
  iVar5 = (int)plVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar6) {
    return plVar4;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  if ((char)plVar7[8] != '\0') {
    FUN_0034b418(plVar7 + 4);
  }
  plVar3 = (long *)*plVar7;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  return plVar7;
}



/* Entry: 003f3dac; end: 003f3ef7;  */

long * FUN_003f3dac(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  iVar3 = (int)param_2;
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar5 = (long *)*param_2;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar7 = *param_2;
  lVar9 = param_2[3];
  lVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar7;
  param_1[3] = lVar9;
  param_1[2] = lVar8;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  plVar5 = param_1;
  if ((char)param_2[8] != '\0') {
    plVar6 = (long *)param_2[4];
    if (plVar6 < (long *)((long)&MACH_HEADER.magic + 2)) {
      lStack_58 = param_2[6];
      lStack_60 = param_2[5];
      lStack_50 = param_2[7];
    }
    else {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar6 = (long *)param_2[4];
      lStack_58 = param_2[6];
      lStack_60 = param_2[5];
      lStack_50 = param_2[7];
      if ((char)param_1[8] != '\0') {
        plVar5 = (long *)param_1[4];
        lVar7 = param_2[7];
        lVar8 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = lVar8;
        param_1[7] = lVar7;
        param_1[4] = (long)plVar6;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
          do {
            lVar7 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 + -1 == 0) {
            (*(code *)plVar5[1])();
          }
        }
        goto LAB_003f3ebc;
      }
    }
    param_1[6] = lStack_58;
    param_1[5] = lStack_60;
    param_1[7] = lStack_50;
    *(undefined1 *)(param_1 + 8) = 1;
    param_1[4] = (long)plVar6;
  }
LAB_003f3ebc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  if ((char)plVar5[8] != '\0') {
    FUN_0034b418(plVar5 + 4);
  }
  plVar6 = (long *)*plVar5;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar6) {
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (*(code *)plVar6[1])();
    }
  }
  return plVar5;
}



/* Entry: 003f3ef8; end: 003f3f27;  */

undefined8 * FUN_003f3ef8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0034b418(param_1 + 4);
  }
  plVar3 = (long *)*param_1;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  return param_1;
}



/* Entry: 003f3f28; end: 003f3fcb;  */

undefined8 * FUN_003f3f28(undefined8 *param_1,char *param_2,char *param_3,long param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  char cStack_1c9;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char cStack_149;
  undefined8 uStack_148;
  char cStack_131;
  undefined1 auStack_130 [72];
  long lStack_e8;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_00341380(&uStack_48,0);
    FUN_003413d4(auStack_90);
    FUN_003f3fcc(param_1,param_2,param_3);
    FUN_00341470(auStack_90);
    FUN_003414dc(&uStack_48);
    return param_1;
  }
  func_0x007758f4();
  FUN_00341470(auStack_90);
  FUN_003414dc(&uStack_48);
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = param_1 + 6;
  func_0x00339d8c(puVar1);
  *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + 1;
  pcVar2 = "";
  if (param_3 != (char *)0x0) {
    pcVar2 = param_3;
  }
  FUN_00353254(&uStack_160,pcVar2);
  pcVar2 = "";
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  FUN_00353254(&uStack_1a8,pcVar2);
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  cStack_1c9 = cStack_149;
  uStack_1c0 = uStack_1a0;
  uStack_1c8 = uStack_1a8;
  lStack_1b8 = lStack_198;
  puVar4 = param_1 + 0xe;
  puVar3 = puVar4;
  FUN_003f4cb8(puVar4,&uStack_1e0);
  if (param_1 + 0xf == puVar3) {
    FUN_003f3bd8(&uStack_1a8,param_2,param_3);
    FUN_003f49c8(&uStack_160,&uStack_1e0,&uStack_1a8);
    FUN_003f4e6c(puVar4,&uStack_160,&uStack_160);
    FUN_003f3ef8(auStack_130);
    if (cStack_131 < '\0') {
      __ZdlPv(uStack_148);
    }
    if (cStack_149 < '\0') {
      __ZdlPv(uStack_160);
    }
    FUN_003f3ef8(&uStack_1a8);
    puVar3 = puVar4;
  }
  if (lStack_1b8 < 0) {
    __ZdlPv(uStack_1c8);
  }
  if (cStack_1c9 < '\0') {
    __ZdlPv(uStack_1e0);
  }
  puVar4 = puVar1;
  func_0x00339da8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return puVar3 + 10;
  }
  ___stack_chk_fail();
  FUN_003f41c8(&uStack_160);
  FUN_003f3ef8(&uStack_1a8);
  func_0x003f4210(&uStack_1e0);
  func_0x00339da8(puVar1);
  __Unwind_Resume(puVar4);
  func_0x0040cf10();
  FUN_003f3ef8(puVar4 + 6);
  if (*(char *)((long)puVar4 + 0x2f) < '\0') {
    __ZdlPv(puVar4[3]);
  }
  if (*(char *)((long)puVar4 + 0x17) < '\0') {
    __ZdlPv(*puVar4);
  }
  return puVar4;
}



/* Entry: 003f3fcc; end: 003f41c7;  */

undefined8 * FUN_003f3fcc(long param_1,char *param_2,char *param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_150;
  undefined8 uStack_148;
  char cStack_139;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_b9;
  undefined8 uStack_b8;
  char cStack_a1;
  undefined1 auStack_a0 [72];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  func_0x00339d8c(puVar1);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  pcVar2 = "";
  if (param_3 != (char *)0x0) {
    pcVar2 = param_3;
  }
  FUN_00353254(&uStack_d0,pcVar2);
  pcVar2 = "";
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  FUN_00353254(&uStack_118,pcVar2);
  uStack_148 = uStack_c8;
  uStack_150 = uStack_d0;
  cStack_139 = cStack_b9;
  uStack_130 = uStack_110;
  uStack_138 = uStack_118;
  lStack_128 = lStack_108;
  lVar4 = param_1 + 0x70;
  lVar3 = lVar4;
  FUN_003f4cb8(lVar4,&uStack_150);
  if (param_1 + 0x78 == lVar3) {
    FUN_003f3bd8(&uStack_118,param_2,param_3);
    FUN_003f49c8(&uStack_d0,&uStack_150,&uStack_118);
    FUN_003f4e6c(lVar4,&uStack_d0,&uStack_d0);
    FUN_003f3ef8(auStack_a0);
    if (cStack_a1 < '\0') {
      __ZdlPv(uStack_b8);
    }
    if (cStack_b9 < '\0') {
      __ZdlPv(uStack_d0);
    }
    FUN_003f3ef8(&uStack_118);
    lVar3 = lVar4;
  }
  if (lStack_128 < 0) {
    __ZdlPv(uStack_138);
  }
  if (cStack_139 < '\0') {
    __ZdlPv(uStack_150);
  }
  puVar5 = puVar1;
  func_0x00339da8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return (undefined8 *)(lVar3 + 0x50);
  }
  ___stack_chk_fail();
  FUN_003f41c8(&uStack_d0);
  FUN_003f3ef8(&uStack_118);
  func_0x003f4210(&uStack_150);
  func_0x00339da8(puVar1);
  __Unwind_Resume(puVar5);
  func_0x0040cf10();
  FUN_003f3ef8(puVar5 + 6);
  if (*(char *)((long)puVar5 + 0x2f) < '\0') {
    __ZdlPv(puVar5[3]);
  }
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    __ZdlPv(*puVar5);
  }
  return puVar5;
}



/* Entry: 003f41c8; end: 003f424f;  */

undefined8 * FUN_003f41c8(undefined8 *param_1)

{
  FUN_003f3ef8(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 003f4250; end: 003f44e3;  */

long * FUN_003f4250(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_171;
  ulong uStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [72];
  long alStack_f8 [3];
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_a0;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_8 != 0) {
    func_0x00775928();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x3f4468);
    (*pcVar4)();
  }
  alStack_f8[0] = 0;
  alStack_f8[1] = 0;
  alStack_f8[2] = 0;
  FUN_00341380(alStack_f8,0);
  FUN_003413d4(auStack_140);
  plVar9 = (long *)*param_5;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_88 = param_5[1];
  plStack_90 = (long *)*param_5;
  uStack_78 = param_5[3];
  uStack_80 = param_5[2];
  cVar1 = *(char *)(param_5 + 8);
  if (cVar1 == '\0') {
    cStack_a0 = '\0';
    plStack_c0 = (long *)((ulong)plStack_c0 & 0xffffffffffffff00);
  }
  else {
    plVar9 = (long *)param_5[4];
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_b8 = param_5[5];
    plStack_c0 = (long *)param_5[4];
    uStack_a8 = param_5[7];
    uStack_b0 = param_5[6];
    uStack_d8 = 0;
    plStack_e0 = (long *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    cStack_a0 = '\x01';
  }
  FUN_003b8b9c(param_6,param_7);
  FUN_003f3944(param_1,param_2,param_3,param_4,0,&plStack_90,&plStack_c0,param_6);
  iVar8 = (int)param_2;
  if (cVar1 == '\0') {
    if ((cStack_a0 != '\0') && ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c0)) {
      do {
        lVar10 = *plStack_c0;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar3) {
          *plStack_c0 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
  }
  else {
    if ((cStack_a0 != '\0') && ((long *)((long)&MACH_HEADER.magic + 1) < plStack_c0)) {
      do {
        lVar10 = *plStack_c0;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_c0,0x10);
        if (bVar3) {
          *plStack_c0 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_c0[1])();
      }
    }
    if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_e0) {
      do {
        lVar10 = *plStack_e0;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plStack_e0,0x10);
        if (bVar3) {
          *plStack_e0 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        (*(code *)plStack_e0[1])();
      }
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
    do {
      lVar10 = *plStack_90;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
      if (bVar3) {
        *plStack_90 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)plStack_90[1])();
    }
  }
  FUN_00341470(auStack_140);
  plVar9 = alStack_f8;
  FUN_003414dc();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x0040cf10();
    FUN_003414dc(alStack_f8);
  }
  plVar5 = plVar9;
  __Unwind_Resume();
  pcStack_148 = FUN_003f44e4;
  lVar10 = 0;
  uStack_160 = param_3;
  plStack_158 = plVar9;
  puStack_150 = &stack0xfffffffffffffff0;
  FUN_00400ab8();
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_190 = 0;
  FUN_003b646c(&uStack_170,2,"Channel Destroyed",0x11,&uStack_171,&uStack_190);
  uVar6 = *(ulong *)(lVar10 + 0x20);
  if (uStack_170 != uVar6) {
    *(ulong *)(lVar10 + 0x20) = uStack_170;
    uStack_170 = 0x36;
    if ((uVar6 & 1) == 0) goto LAB_003f455c;
    FUN_0055293c();
    uVar6 = uStack_170;
  }
  if ((uVar6 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003f455c:
  puStack_168 = (undefined1 *)&uStack_190;
  FUN_0033d548(&puStack_168);
  plVar7 = (long *)plVar5[0x18];
  func_0x003a6548(plVar7,0);
  (**(code **)(*plVar7 + 0x10))();
  plVar9 = plVar5 + 1;
  do {
    lVar10 = *plVar9;
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar10 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar10 + -1 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    plVar7 = plVar5;
  }
  return plVar7;
}



/* Entry: 003f44e4; end: 003f4633;  */

void FUN_003f44e4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  lVar3 = 0;
  FUN_00400ab8();
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_003b646c(&uStack_30,2,"Channel Destroyed",0x11,&uStack_31,&uStack_50);
  uVar4 = *(ulong *)(lVar3 + 0x20);
  if (uStack_30 != uVar4) {
    *(ulong *)(lVar3 + 0x20) = uStack_30;
    uStack_30 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_003f455c;
    FUN_0055293c();
    uVar4 = uStack_30;
  }
  if ((uVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003f455c:
  puStack_28 = (undefined1 *)&uStack_50;
  FUN_0033d548(&puStack_28);
  plVar5 = (long *)param_1[0x18];
  func_0x003a6548(plVar5,0);
  (**(code **)(*plVar5 + 0x10))();
  plVar5 = param_1 + 1;
  do {
    lVar3 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



/* Entry: 003f4634; end: 003f46af;  */

void FUN_003f4634(undefined8 param_1)

{
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00341380(&uStack_38,0);
  FUN_003413d4(auStack_80);
  FUN_003f44e4(param_1);
  FUN_00341470(auStack_80);
  FUN_003414dc(&uStack_38);
  return;
}



/* Entry: 003f46b0; end: 003f4743;  */

undefined8 * FUN_003f46b0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009e1988;
  FUN_0033d4a8(param_1 + 0x18);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  FUN_00377730(param_1 + 0x13);
  plVar4 = (long *)param_1[0x12];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_003f47d8(param_1 + 0xe,param_1[0xf]);
  func_0x00339d70(param_1 + 6);
  return param_1;
}



/* Entry: 003f4744; end: 003f47d7;  */

void FUN_003f4744(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009e1988;
  FUN_0033d4a8(param_1 + 0x18);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  FUN_00377730(param_1 + 0x13);
  plVar4 = (long *)param_1[0x12];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_003f47d8(param_1 + 0xe,param_1[0xf]);
  func_0x00339d70(param_1 + 6);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003f47d8; end: 003f486b;  */

void FUN_003f47d8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_003f47d8(param_1,*param_2);
    FUN_003f47d8(param_1,param_2[1]);
    func_0x003f4820(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 003f486c; end: 003f48c3;  */

void FUN_003f486c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 003f48c4; end: 003f4933;  */

long * FUN_003f48c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if ((char)param_1[0x10] != '\0') {
    FUN_0034b418(param_1 + 0xc);
  }
  if ((char)param_1[0xb] != '\0') {
    FUN_0034b418(param_1 + 7);
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 003f4934; end: 003f49c7;  */

undefined8 * FUN_003f4934(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == *(char *)(param_2 + 4)) {
    if (cVar1 != '\0') {
      uVar6 = param_1[1];
      uVar5 = *param_1;
      uVar4 = param_1[3];
      uVar3 = param_1[2];
      uVar9 = *param_2;
      uVar8 = param_2[3];
      uVar7 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar9;
      param_1[3] = uVar8;
      param_1[2] = uVar7;
      param_2[1] = uVar6;
      *param_2 = uVar5;
      param_2[3] = uVar4;
      param_2[2] = uVar3;
    }
  }
  else if (cVar1 == '\0') {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_1[1] = uVar6;
    *param_1 = uVar5;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    FUN_0034b418();
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  FUN_003f3dac(param_1 + 6,param_3);
  return param_1;
}



/* Entry: 003f49c8; end: 003f4a37;  */

undefined8 * FUN_003f49c8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  FUN_003f3dac(param_1 + 6,param_3);
  return param_1;
}



/* Entry: 003f4a38; end: 003f4b43;  */

undefined8 * FUN_003f4a38(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009e1a20;
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 003f4b44; end: 003f4ba7;  */

void FUN_003f4b44(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_009e1a20;
  param_2[1] = 0;
  uVar4 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
  param_2[1] = uVar4;
  return;
}



/* Entry: 003f4ba8; end: 003f4cab;  */

void FUN_003f4ba8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 003f4cac; end: 003f4cb7;  */

undefined ** FUN_003f4cac(void)

{
  return &PTR_DAT_009e1a80;
}



/* Entry: 003f4cb8; end: 003f4d43;  */

long * FUN_003f4cb8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      FUN_003f4d44(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (FUN_003f4d44(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 003f4d44; end: 003f4e6b;  */

bool FUN_003f4d44(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar7 = param_2;
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar6 = (undefined8 *)*param_3;
  uVar3 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar6 = param_3;
    uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  uVar1 = uVar3;
  if (uVar2 <= uVar3) {
    uVar1 = uVar2;
  }
  puVar5 = puVar7;
  _memcmp(puVar7,puVar6,uVar1);
  bVar4 = uVar2 < uVar3;
  if ((int)puVar5 != 0) {
    bVar4 = (int)puVar5 < 0;
  }
  if (bVar4) {
    bVar4 = true;
  }
  else {
    _memcmp(puVar6,puVar7,uVar1);
    bVar4 = uVar3 < uVar2;
    if ((int)puVar6 != 0) {
      bVar4 = (int)puVar6 < 0;
    }
    if (bVar4) {
      bVar4 = false;
    }
    else {
      puVar7 = (undefined8 *)param_2[3];
      uVar2 = param_2[4];
      if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
        puVar7 = param_2 + 3;
        uVar2 = (ulong)*(byte *)((long)param_2 + 0x2f);
      }
      puVar6 = (undefined8 *)param_3[3];
      uVar3 = param_3[4];
      if (-1 < (char)*(byte *)((long)param_3 + 0x2f)) {
        puVar6 = param_3 + 3;
        uVar3 = (ulong)*(byte *)((long)param_3 + 0x2f);
      }
      uVar1 = uVar3;
      if (uVar2 <= uVar3) {
        uVar1 = uVar2;
      }
      _memcmp(puVar7,puVar6,uVar1);
      bVar4 = uVar2 < uVar3;
      if ((int)puVar7 != 0) {
        bVar4 = (int)puVar7 < 0;
      }
    }
  }
  return bVar4;
}



/* Entry: 003f4e6c; end: 003f4efb;  */

undefined1  [16] FUN_003f4e6c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  FUN_003f4efc(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_003f4f98(alStack_50,param_1,param_3);
    FUN_003f5000(param_1,uStack_38,plVar2,alStack_50[0]);
    lVar3 = alStack_50[0];
    alStack_50[0] = 0;
    FUN_003f5130(alStack_50,0);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 003f4efc; end: 003f4f97;  */

long * FUN_003f4efc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        FUN_003f4d44(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_003f4f7c;
      }
      lVar2 = param_1;
      FUN_003f4d44(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_003f4f7c:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 003f4f98; end: 003f4fff;  */

void FUN_003f4f98(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x98;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_003f5054(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 003f5000; end: 003f5053;  */

void FUN_003f5000(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003f5054; end: 003f509b;  */

long FUN_003f5054(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_003f509c();
  FUN_003f3dac(lVar1 + 0x30,param_2 + 0x30);
  return param_1;
}



/* Entry: 003f509c; end: 003f512f;  */

undefined8 * FUN_003f509c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_002971d4(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    FUN_002971d4(param_1 + 3,param_2[3],param_2[4]);
  }
  else {
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 003f5130; end: 003f5173;  */

void FUN_003f5130(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] != '\0') {
      func_0x003f4820(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 003f5174; end: 003f517b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003f5174(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003f517c; end: 003f5203;  */

void FUN_003f517c(long param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  undefined4 uStack_24;
  
  lVar3 = param_1 + (ulong)param_2 * 0x18;
  puVar4 = (ulong *)(lVar3 + 8);
  uVar2 = *puVar4;
  puVar1 = (ulong *)(lVar3 + 0x10);
  uStack_24 = param_3;
  if (uVar2 < *puVar1) {
    FUN_003f569c(puVar1,uVar2,param_4,&uStack_24);
    uVar2 = uVar2 + 0x28;
    *puVar4 = uVar2;
  }
  else {
    uVar2 = param_1 + (ulong)param_2 * 0x18;
    FUN_003f5580(uVar2,param_4,&uStack_24);
  }
  *puVar4 = uVar2;
  return;
}



/* Entry: 003f5204; end: 003f536b;  */

void FUN_003f5204(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  do {
    plVar2 = (long *)(param_2 + lVar6 * 0x18);
    lVar3 = *plVar2;
    plVar7 = plVar2 + 1;
    lVar4 = *plVar7;
    lVar1 = lVar4 - lVar3;
    lVar5 = (lVar1 >> 3) * -0x3333333333333333;
    if (lVar1 < 1) {
      lVar1 = 0;
      param_3 = 0;
    }
    else {
      lVar1 = lVar5;
      func_0x003f5a58();
    }
    FUN_003f5ac0(lVar3,lVar4,lVar5,lVar1,param_3);
    if (lVar1 != 0) {
      __ZdlPv(lVar1);
    }
    param_3 = (*plVar7 - *plVar2 >> 3) * -0x3333333333333333;
    FUN_003f536c(param_1 + lVar6 * 3);
    lVar3 = *plVar7;
    for (lVar1 = *plVar2; lVar1 != lVar3; lVar1 = lVar1 + 0x28) {
      param_3 = lVar1;
      FUN_003f53fc(param_1 + lVar6 * 3);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 5);
  return;
}



/* Entry: 003f536c; end: 003f53fb;  */

/* WARNING: Type propagation algorithm not settling */

long *******
FUN_003f536c(long *param_1,undefined8 *******param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong *puVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  undefined8 *******pppppppuVar5;
  long ******pppppplVar6;
  long lVar7;
  ulong uVar8;
  long *******ppppppplVar9;
  long lVar10;
  ulong uVar11;
  long ******pppppplVar12;
  ulong uVar13;
  long lVar14;
  long ******apppppplStack_1b8 [3];
  long *******ppppppplStack_1a0;
  long lStack_198;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  undefined8 *******pppppppuStack_e8;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  long *******ppppppplStack_48;
  long lStack_40;
  long lStack_38;
  long *******ppppppplStack_30;
  long *******ppppppplStack_28;
  
  ppppppplVar3 = (long *******)(param_1 + 2);
  lVar7 = *param_1;
  if ((undefined8 *******)((long)*ppppppplVar3 - lVar7 >> 5) < param_2) {
    if ((ulong)param_2 >> 0x3b != 0) {
      FUN_003f69d0();
      func_0x003f6bc4(&ppppppplStack_48);
      __Unwind_Resume();
      puVar2 = (ulong *)(param_1 + 2);
      uVar13 = param_1[1];
      if (uVar13 < *puVar2) {
        FUN_003f5748(uVar13,param_2);
        lVar7 = uVar13 + 0x20;
        param_1[1] = lVar7;
      }
      else {
        lVar7 = (long)(uVar13 - *param_1) >> 5;
        uVar13 = lVar7 + 1;
        if (uVar13 >> 0x3b != 0) {
          FUN_003f69d0();
          func_0x003f6bc4(&puStack_a8);
          __Unwind_Resume();
          lVar7 = param_1[(ulong)*(uint *)(param_2 + 2) * 3];
          lVar10 = (param_1 + (ulong)*(uint *)(param_2 + 2) * 3)[1];
          pppppppuVar5 = param_2;
          if (lVar7 == lVar10) {
            ppppppplVar3 = (long *******)((long)&MACH_HEADER.magic + 1);
          }
          else {
            do {
              lVar14 = lVar7 + 0x20;
              ppppppplVar3 = *(long ********)(lVar7 + 0x18);
              pppppppuStack_e8 = param_2;
              if (ppppppplVar3 == (long *******)0x0) {
                FUN_0033e390();
                lVar7 = (long)ppppppplVar3[1] - (long)*ppppppplVar3 >> 3;
                uVar13 = lVar7 * -0x3333333333333333 + 1;
                if (uVar13 < 0x666666666666667) {
                  ppppppplVar9 = ppppppplVar3 + 2;
                  lVar10 = (long)*ppppppplVar9 - (long)*ppppppplVar3 >> 3;
                  uVar11 = lVar10 * -0x6666666666666666;
                  if (uVar11 < uVar13 || uVar11 - uVar13 == 0) {
                    uVar11 = uVar13;
                  }
                  if (0x333333333333332 < (ulong)(lVar10 * -0x3333333333333333)) {
                    uVar11 = 0x666666666666666;
                  }
                  ppppppplStack_138 = ppppppplVar9;
                  if (uVar11 == 0) {
                    ppppppplVar4 = (long *******)0x0;
                  }
                  else {
                    ppppppplVar4 = ppppppplVar9;
                    FUN_003f5834();
                  }
                  ppppppplStack_150 = ppppppplVar4 + lVar7;
                  ppppppplStack_140 = ppppppplVar4 + uVar11 * 5;
                  ppppppplStack_158 = ppppppplVar4;
                  ppppppplStack_148 = ppppppplStack_150;
                  FUN_003f569c(ppppppplVar9,ppppppplStack_150,pppppppuVar5,param_3);
                  ppppppplStack_148 = ppppppplStack_148 + 5;
                  FUN_003f57ac(ppppppplVar3,&ppppppplStack_158);
                  ppppppplVar3 = (long *******)ppppppplVar3[1];
                  func_0x003f59bc(&ppppppplStack_158);
                  return ppppppplVar3;
                }
                FUN_003f5820();
                func_0x003f59bc(&ppppppplStack_158);
                __Unwind_Resume(ppppppplVar3);
                lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
                FUN_003f5748(apppppplStack_1b8,param_3);
                uVar1 = *param_4;
                pppppplVar6 = (long ******)apppppplStack_1b8;
                FUN_003f5748(pppppppuVar5);
                *(undefined4 *)(pppppppuVar5 + 4) = uVar1;
                if (ppppppplStack_1a0 == apppppplStack_1b8) {
                  lVar7 = 4;
                  ppppppplVar3 = apppppplStack_1b8;
                }
                else {
                  ppppppplVar3 = ppppppplStack_1a0;
                  if (ppppppplStack_1a0 == (long *******)0x0) goto LAB_003f5718;
                  lVar7 = 5;
                }
                (*(code *)(*ppppppplVar3)[lVar7])();
LAB_003f5718:
                if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
                  return ppppppplVar3;
                }
                ___stack_chk_fail();
                ppppppplVar9 = (long *******)(pppppplVar6 + 3);
                pppppplVar12 = *ppppppplVar9;
                if (pppppplVar12 == (long ******)0x0) {
                  ppppppplVar9 = ppppppplVar3 + 3;
                }
                else {
                  if (pppppplVar12 == pppppplVar6) {
                    ppppppplVar3[3] = (long ******)ppppppplVar3;
                    (*(code *)(**ppppppplVar9)[3])(*ppppppplVar9,ppppppplVar3);
                    return ppppppplVar3;
                  }
                  ppppppplVar3[3] = pppppplVar12;
                }
                *ppppppplVar9 = (long ******)0x0;
                return ppppppplVar3;
              }
              pppppppuVar5 = &pppppppuStack_e8;
              (*(code *)(*ppppppplVar3)[6])();
              lVar7 = lVar14;
            } while ((int)ppppppplVar3 != 0 && lVar14 != lVar10);
          }
          return ppppppplVar3;
        }
        uVar8 = *puVar2 - *param_1;
        uVar11 = (long)uVar8 >> 4;
        if (uVar11 <= uVar13) {
          uVar11 = uVar13;
        }
        if (0x7fffffffffffffdf < uVar8) {
          uVar11 = 0x7ffffffffffffff;
        }
        puStack_88 = puVar2;
        if (uVar11 == 0) {
          puStack_a8 = (ulong *)0x0;
        }
        else {
          func_0x003f6a58();
          puStack_a8 = puVar2;
        }
        puVar2 = puStack_a8 + lVar7 * 4;
        puStack_90 = puStack_a8 + uVar11 * 4;
        puStack_a0 = puVar2;
        FUN_003f5748(puVar2,param_2);
        puStack_98 = puVar2 + 4;
        func_0x003f69e4(param_1,&puStack_a8);
        lVar7 = param_1[1];
        func_0x003f6bc4(&puStack_a8);
      }
      param_1[1] = lVar7;
      return (long *******)(lVar7 + -0x20);
    }
    lVar10 = param_1[1];
    ppppppplStack_28 = ppppppplVar3;
    func_0x003f6a58();
    lStack_40 = (long)ppppppplVar3 + (lVar10 - lVar7);
    ppppppplStack_30 = ppppppplVar3 + (long)param_2 * 4;
    ppppppplStack_48 = ppppppplVar3;
    lStack_38 = lStack_40;
    func_0x003f69e4(param_1,&ppppppplStack_48);
    ppppppplVar3 = (long *******)&ppppppplStack_48;
    func_0x003f6bc4(ppppppplVar3);
  }
  return ppppppplVar3;
}



/* Entry: 003f53fc; end: 003f54ff;  */

long * FUN_003f53fc(long *param_1,undefined8 *******param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *******pppppppuVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long alStack_168 [3];
  long *plStack_150;
  long lStack_148;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 ******ppppppuStack_98;
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar2 = (ulong *)(param_1 + 2);
  uVar11 = param_1[1];
  if (uVar11 < *puVar2) {
    FUN_003f5748(uVar11,param_2);
    lVar12 = uVar11 + 0x20;
    param_1[1] = lVar12;
  }
  else {
    lVar12 = (long)(uVar11 - *param_1) >> 5;
    uVar11 = lVar12 + 1;
    if (uVar11 >> 0x3b != 0) {
      FUN_003f69d0();
      func_0x003f6bc4(&puStack_58);
      __Unwind_Resume();
      lVar12 = param_1[(ulong)*(uint *)(param_2 + 2) * 3];
      lVar9 = (param_1 + (ulong)*(uint *)(param_2 + 2) * 3)[1];
      pppppppuVar6 = param_2;
      if (lVar12 == lVar9) {
        plVar3 = (long *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        do {
          lVar13 = lVar12 + 0x20;
          plVar3 = *(long **)(lVar12 + 0x18);
          ppppppuStack_98 = param_2;
          if (plVar3 == (long *)0x0) {
            FUN_0033e390();
            lVar12 = plVar3[1] - *plVar3 >> 3;
            uVar11 = lVar12 * -0x3333333333333333 + 1;
            if (uVar11 < 0x666666666666667) {
              plVar5 = plVar3 + 2;
              lVar9 = *plVar5 - *plVar3 >> 3;
              uVar8 = lVar9 * -0x6666666666666666;
              if (uVar8 < uVar11 || uVar8 - uVar11 == 0) {
                uVar8 = uVar11;
              }
              if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
                uVar8 = 0x666666666666666;
              }
              plStack_e8 = plVar5;
              if (uVar8 == 0) {
                plVar4 = (long *)0x0;
              }
              else {
                plVar4 = plVar5;
                FUN_003f5834();
              }
              plStack_100 = plVar4 + lVar12;
              plStack_f0 = plVar4 + uVar8 * 5;
              plStack_108 = plVar4;
              plStack_f8 = plStack_100;
              FUN_003f569c(plVar5,plStack_100,pppppppuVar6,param_3);
              plStack_f8 = plStack_f8 + 5;
              FUN_003f57ac(plVar3,&plStack_108);
              plVar3 = (long *)plVar3[1];
              func_0x003f59bc(&plStack_108);
              return plVar3;
            }
            FUN_003f5820();
            func_0x003f59bc(&plStack_108);
            __Unwind_Resume(plVar3);
            lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
            FUN_003f5748(alStack_168,param_3);
            uVar1 = *param_4;
            plVar3 = alStack_168;
            FUN_003f5748(pppppppuVar6);
            *(undefined4 *)(pppppppuVar6 + 4) = uVar1;
            if (plStack_150 == alStack_168) {
              lVar12 = 4;
              plVar5 = alStack_168;
            }
            else {
              plVar5 = plStack_150;
              if (plStack_150 == (long *)0x0) goto LAB_003f5718;
              lVar12 = 5;
            }
            (**(code **)(*plVar5 + lVar12 * 8))();
LAB_003f5718:
            if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
              return plVar5;
            }
            ___stack_chk_fail();
            plVar4 = plVar3 + 3;
            plVar10 = (long *)*plVar4;
            if (plVar10 == (long *)0x0) {
              plVar4 = plVar5 + 3;
            }
            else {
              if (plVar10 == plVar3) {
                plVar5[3] = (long)plVar5;
                (**(code **)(*(long *)*plVar4 + 0x18))((long *)*plVar4,plVar5);
                return plVar5;
              }
              plVar5[3] = (long)plVar10;
            }
            *plVar4 = 0;
            return plVar5;
          }
          pppppppuVar6 = &ppppppuStack_98;
          (**(code **)(*plVar3 + 0x30))();
          lVar12 = lVar13;
        } while ((int)plVar3 != 0 && lVar13 != lVar9);
      }
      return plVar3;
    }
    uVar7 = *puVar2 - *param_1;
    uVar8 = (long)uVar7 >> 4;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar8 = 0x7ffffffffffffff;
    }
    puStack_38 = puVar2;
    if (uVar8 == 0) {
      puStack_58 = (ulong *)0x0;
    }
    else {
      func_0x003f6a58();
      puStack_58 = puVar2;
    }
    puVar2 = puStack_58 + lVar12 * 4;
    puStack_40 = puStack_58 + uVar8 * 4;
    puStack_50 = puVar2;
    FUN_003f5748(puVar2,param_2);
    puStack_48 = puVar2 + 4;
    func_0x003f69e4(param_1,&puStack_58);
    lVar12 = param_1[1];
    func_0x003f6bc4(&puStack_58);
  }
  param_1[1] = lVar12;
  return (long *)(lVar12 + -0x20);
}



/* Entry: 003f5500; end: 003f557f;  */

long * FUN_003f5500(long param_1,undefined8 *******param_2,undefined8 param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *******pppppppuVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long alStack_108 [3];
  long *plStack_f0;
  long lStack_e8;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 ******ppppppuStack_38;
  
  plVar6 = (long *)(param_1 + (ulong)*(uint *)(param_2 + 2) * 0x18);
  lVar9 = *plVar6;
  lVar7 = plVar6[1];
  pppppppuVar5 = param_2;
  if (lVar9 == lVar7) {
    plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    do {
      lVar11 = lVar9 + 0x20;
      plVar6 = *(long **)(lVar9 + 0x18);
      ppppppuStack_38 = param_2;
      if (plVar6 == (long *)0x0) {
        FUN_0033e390();
        lVar9 = plVar6[1] - *plVar6 >> 3;
        uVar1 = lVar9 * -0x3333333333333333 + 1;
        if (uVar1 < 0x666666666666667) {
          plVar4 = plVar6 + 2;
          lVar7 = *plVar4 - *plVar6 >> 3;
          uVar10 = lVar7 * -0x6666666666666666;
          if (uVar10 < uVar1 || uVar10 - uVar1 == 0) {
            uVar10 = uVar1;
          }
          if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
            uVar10 = 0x666666666666666;
          }
          plStack_88 = plVar4;
          if (uVar10 == 0) {
            plVar3 = (long *)0x0;
          }
          else {
            plVar3 = plVar4;
            FUN_003f5834();
          }
          plStack_a0 = plVar3 + lVar9;
          plStack_90 = plVar3 + uVar10 * 5;
          plStack_a8 = plVar3;
          plStack_98 = plStack_a0;
          FUN_003f569c(plVar4,plStack_a0,pppppppuVar5,param_3);
          plStack_98 = plStack_98 + 5;
          FUN_003f57ac(plVar6,&plStack_a8);
          plVar6 = (long *)plVar6[1];
          func_0x003f59bc(&plStack_a8);
          return plVar6;
        }
        FUN_003f5820();
        func_0x003f59bc(&plStack_a8);
        __Unwind_Resume(plVar6);
        lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
        FUN_003f5748(alStack_108,param_3);
        uVar2 = *param_4;
        plVar6 = alStack_108;
        FUN_003f5748(pppppppuVar5);
        *(undefined4 *)(pppppppuVar5 + 4) = uVar2;
        if (plStack_f0 == alStack_108) {
          lVar9 = 4;
          plVar4 = alStack_108;
        }
        else {
          plVar4 = plStack_f0;
          if (plStack_f0 == (long *)0x0) goto LAB_003f5718;
          lVar9 = 5;
        }
        (**(code **)(*plVar4 + lVar9 * 8))();
LAB_003f5718:
        if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
          return plVar4;
        }
        ___stack_chk_fail();
        plVar3 = plVar6 + 3;
        plVar8 = (long *)*plVar3;
        if (plVar8 == (long *)0x0) {
          plVar3 = plVar4 + 3;
        }
        else {
          if (plVar8 == plVar6) {
            plVar4[3] = (long)plVar4;
            (**(code **)(*(long *)*plVar3 + 0x18))((long *)*plVar3,plVar4);
            return plVar4;
          }
          plVar4[3] = (long)plVar8;
        }
        *plVar3 = 0;
        return plVar4;
      }
      pppppppuVar5 = &ppppppuStack_38;
      (**(code **)(*plVar6 + 0x30))();
      lVar9 = lVar11;
    } while ((int)plVar6 != 0 && lVar11 != lVar7);
  }
  return plVar6;
}



/* Entry: 003f5580; end: 003f569b;  */

long * FUN_003f5580(long *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long alStack_c8 [3];
  long *plStack_b0;
  long lStack_a8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar7 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar7 * -0x3333333333333333 + 1;
  if (uVar1 < 0x666666666666667) {
    plVar9 = param_1 + 2;
    lVar5 = *plVar9 - *param_1 >> 3;
    uVar8 = lVar5 * -0x6666666666666666;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar8 = 0x666666666666666;
    }
    plStack_48 = plVar9;
    if (uVar8 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar9;
      FUN_003f5834();
    }
    plStack_60 = plVar3 + lVar7;
    plStack_50 = plVar3 + uVar8 * 5;
    plStack_68 = plVar3;
    plStack_58 = plStack_60;
    FUN_003f569c(plVar9,plStack_60,param_2,param_3);
    plStack_58 = plStack_58 + 5;
    FUN_003f57ac(param_1,&plStack_68);
    plVar9 = (long *)param_1[1];
    func_0x003f59bc(&plStack_68);
    return plVar9;
  }
  FUN_003f5820();
  func_0x003f59bc(&plStack_68);
  __Unwind_Resume(param_1);
  lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003f5748(alStack_c8,param_3);
  uVar2 = *param_4;
  plVar9 = alStack_c8;
  FUN_003f5748(param_2);
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  if (plStack_b0 == alStack_c8) {
    lVar7 = 4;
    plVar3 = alStack_c8;
  }
  else {
    plVar3 = plStack_b0;
    if (plStack_b0 == (long *)0x0) goto LAB_003f5718;
    lVar7 = 5;
  }
  (**(code **)(*plVar3 + lVar7 * 8))();
LAB_003f5718:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a8) {
    return plVar3;
  }
  ___stack_chk_fail();
  plVar4 = plVar9 + 3;
  plVar6 = (long *)*plVar4;
  if (plVar6 == (long *)0x0) {
    plVar4 = plVar3 + 3;
  }
  else {
    if (plVar6 == plVar9) {
      plVar3[3] = (long)plVar3;
      (**(code **)(*(long *)*plVar4 + 0x18))((long *)*plVar4,plVar3);
      return plVar3;
    }
    plVar3[3] = (long)plVar6;
  }
  *plVar4 = 0;
  return plVar3;
}



/* Entry: 003f569c; end: 003f5747;  */

long * FUN_003f569c(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003f5748(alStack_58,param_3);
  uVar1 = *param_4;
  plVar3 = alStack_58;
  FUN_003f5748(param_2);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  if (plStack_40 == alStack_58) {
    lVar4 = 4;
    plVar2 = alStack_58;
  }
  else {
    plVar2 = plStack_40;
    if (plStack_40 == (long *)0x0) goto LAB_003f5718;
    lVar4 = 5;
  }
  (**(code **)(*plVar2 + lVar4 * 8))();
LAB_003f5718:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return plVar2;
  }
  ___stack_chk_fail();
  plVar5 = plVar3 + 3;
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    plVar5 = plVar2 + 3;
  }
  else {
    if (plVar6 == plVar3) {
      plVar2[3] = (long)plVar2;
      (**(code **)(*(long *)*plVar5 + 0x18))((long *)*plVar5,plVar2);
      return plVar2;
    }
    plVar2[3] = (long)plVar6;
  }
  *plVar5 = 0;
  return plVar2;
}



/* Entry: 003f5748; end: 003f57ab;  */

long FUN_003f5748(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 003f57ac; end: 003f581f;  */

void FUN_003f57ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_003f5878(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
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



/* Entry: 003f5820; end: 003f5833;  */

undefined1  [16]
FUN_003f5820(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  char *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 < 0x666666666666667) {
    lVar2 = param_2 * 0x28;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  FUN_00349558();
  puStack_98 = &uStack_80;
  puStack_90 = &uStack_70;
  uStack_88 = 0;
  pcStack_a0 = pcVar1;
  uStack_80 = param_6;
  lStack_78 = param_7;
  while (uStack_70 = param_6, lStack_68 = param_7, param_3 != param_5) {
    FUN_003f5748(param_7 + -0x28,param_3 + -0x28);
    *(undefined4 *)(param_7 + -8) = *(undefined4 *)(param_3 + -8);
    param_7 = lStack_68 + -0x28;
    param_3 = param_3 + -0x28;
    param_6 = uStack_70;
  }
  uStack_88 = 1;
  FUN_003f5928(&pcStack_a0);
  auVar4._8_8_ = param_7;
  auVar4._0_8_ = param_6;
  return auVar4;
}



/* Entry: 003f5834; end: 003f5877;  */

undefined1  [16]
FUN_003f5834(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_00349558();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  uStack_78 = 0;
  uStack_90 = param_1;
  uStack_70 = param_6;
  lStack_68 = param_7;
  while (uStack_60 = param_6, lStack_58 = param_7, param_3 != param_5) {
    FUN_003f5748(param_7 + -0x28,param_3 + -0x28);
    *(undefined4 *)(param_7 + -8) = *(undefined4 *)(param_3 + -8);
    param_7 = lStack_58 + -0x28;
    param_3 = param_3 + -0x28;
    param_6 = uStack_60;
  }
  uStack_78 = 1;
  FUN_003f5928(&uStack_90);
  auVar3._8_8_ = param_7;
  auVar3._0_8_ = param_6;
  return auVar3;
}



/* Entry: 003f5878; end: 003f5927;  */

undefined1  [16]
FUN_003f5878(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_68 = &uStack_50;
  puStack_60 = &uStack_40;
  uStack_58 = 0;
  lStack_48 = param_7;
  uStack_50 = param_6;
  uStack_70 = param_1;
  while (uStack_40 = param_6, lStack_38 = param_7, param_3 != param_5) {
    FUN_003f5748(param_7 + -0x28,param_3 + -0x28);
    *(undefined4 *)(param_7 + -8) = *(undefined4 *)(param_3 + -8);
    param_7 = lStack_38 + -0x28;
    param_6 = uStack_40;
    param_3 = param_3 + -0x28;
  }
  uStack_58 = 1;
  FUN_003f5928(&uStack_70);
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = param_6;
  return auVar1;
}



/* Entry: 003f5928; end: 003f595b;  */

long FUN_003f5928(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_003f595c(param_1);
  }
  return param_1;
}



/* Entry: 003f595c; end: 003f5abf;  */

void FUN_003f595c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 8);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    plVar1 = (long *)plVar3[3];
    if (plVar3 == plVar1) {
      lVar2 = 4;
      plVar1 = plVar3;
LAB_003f599c:
      (**(code **)(*plVar1 + lVar2 * 8))();
    }
    else if (plVar1 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_003f599c;
    }
    plVar3 = plVar3 + 5;
  } while( true );
}



/* Entry: 003f5ac0; end: 003f5e5f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003f5ac0(long *******param_1,long *******param_2,long ******param_3,long *******param_4,
                 long param_5)

{
  bool bVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *******unaff_x20;
  long ******pppppplVar17;
  long *plVar18;
  long ******pppppplVar19;
  long lVar20;
  long *******ppppppplVar21;
  long *plVar22;
  long *plVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  long *******ppppppplStack_158;
  long *plStack_150;
  long lStack_148;
  long alStack_f0 [3];
  long *plStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  undefined8 uStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_68;
  
  lVar12 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppppplVar2 = param_1;
  ppppppplStack_90 = param_2;
  uStack_88 = param_1;
  if (param_3 < (long ******)0x2) {
LAB_003f5de8:
    ppppppplVar10 = param_4;
    param_2 = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar12) {
      return;
    }
  }
  else {
    unaff_x20 = param_2;
    if (param_3 == (long ******)0x2) {
      ppppppplStack_90 = param_2 + -5;
      if (*(int *)(param_2 + -1) < *(int *)(param_1 + 4)) {
        ppppppplVar2 = (long *******)&uStack_88;
        FUN_003f5e60(ppppppplVar2,&ppppppplStack_90);
      }
      goto LAB_003f5de8;
    }
    if ((long)param_3 < 1) {
      if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
        lVar9 = 0;
        ppppppplVar3 = param_1 + 5;
        ppppppplVar10 = param_1;
        do {
          ppppppplVar21 = ppppppplVar3;
          if (*(int *)(ppppppplVar10 + 9) < *(int *)(ppppppplVar10 + 4)) {
            FUN_003f5748(&ppppppplStack_80,ppppppplVar21);
            iVar5 = *(int *)(ppppppplVar10 + 9);
            lVar13 = lVar9;
            do {
              lVar20 = lVar13;
              lVar13 = (long)param_1 + lVar20;
              FUN_003f6718(lVar13 + 0x28,lVar13);
              *(undefined4 *)(lVar13 + 0x48) = *(undefined4 *)(lVar13 + 0x20);
              ppppppplVar2 = param_1;
              if (lVar20 == 0) goto LAB_003f5c64;
              lVar13 = lVar20 + -0x28;
            } while (iVar5 < *(int *)((long)param_1 + lVar20 + -8));
            ppppppplVar2 = (long *******)((long)param_1 + lVar20);
LAB_003f5c64:
            FUN_003f6718(ppppppplVar2,&ppppppplStack_80);
            *(int *)(ppppppplVar2 + 4) = iVar5;
            if ((long ********)ppppppplStack_68 == &ppppppplStack_80) {
              ppppppplVar2 = (long *******)&ppppppplStack_80;
              lVar13 = 4;
            }
            else {
              ppppppplVar2 = ppppppplStack_68;
              if (ppppppplStack_68 == (long *******)0x0) goto LAB_003f5ca8;
              lVar13 = 5;
            }
            (*(code *)(*ppppppplVar2)[lVar13])();
          }
LAB_003f5ca8:
          lVar9 = lVar9 + 0x28;
          ppppppplVar3 = ppppppplVar21 + 5;
          ppppppplVar10 = ppppppplVar21;
        } while (ppppppplVar21 + 5 != param_2);
      }
      goto LAB_003f5de8;
    }
    pppppplVar17 = (long ******)((ulong)param_3 >> 1);
    ppppppplVar3 = param_1 + (long)pppppplVar17 * 5;
    if ((long)param_3 <= param_5) {
      ppppppplStack_98 = (long *******)0x0;
      ppppppplStack_78 = (long *******)&ppppppplStack_98;
      ppppppplStack_80 = param_4;
      FUN_003f5f30(param_1,ppppppplVar3,pppppplVar17,param_4);
      pppppplVar19 = (long ******)((long)param_3 - (long)pppppplVar17);
      ppppppplVar21 = param_4 + (long)pppppplVar17 * 5;
      ppppppplVar10 = ppppppplVar21;
      ppppppplStack_98 = (long *******)pppppplVar17;
      FUN_003f5f30(ppppppplVar3,param_2);
      ppppppplVar3 = param_4 + (long)param_3 * 5;
      unaff_x20 = ppppppplVar21;
      ppppppplVar2 = param_4;
      ppppppplStack_98 = (long *******)param_3;
      do {
        param_4 = ppppppplVar10;
        param_3 = pppppplVar19;
        if (unaff_x20 == ppppppplVar3) {
          if (ppppppplVar2 != ppppppplVar21) {
            lVar9 = 0;
            do {
              unaff_x20 = (long *******)((long)ppppppplVar2 + lVar9);
              FUN_003f6718((long)param_1 + lVar9,unaff_x20);
              *(undefined4 *)((long)param_1 + lVar9 + 0x20) = *(undefined4 *)(unaff_x20 + 4);
              lVar9 = lVar9 + 0x28;
            } while (unaff_x20 + 5 != ppppppplVar21);
          }
          goto LAB_003f5ddc;
        }
        if (*(int *)(unaff_x20 + 4) < *(int *)(ppppppplVar2 + 4)) {
          FUN_003f6718(param_1,unaff_x20);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_x20 + 4);
          unaff_x20 = unaff_x20 + 5;
        }
        else {
          FUN_003f6718(param_1,ppppppplVar2);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(ppppppplVar2 + 4);
          ppppppplVar2 = ppppppplVar2 + 5;
        }
        param_1 = param_1 + 5;
        pppppplVar19 = param_3;
        ppppppplVar10 = param_4;
      } while (ppppppplVar2 != ppppppplVar21);
      if (unaff_x20 != ppppppplVar3) {
        lVar9 = 0;
        do {
          lVar13 = (long)unaff_x20 + lVar9;
          FUN_003f6718((long)param_1 + lVar9,lVar13);
          *(undefined4 *)((long)param_1 + lVar9 + 0x20) = *(undefined4 *)(lVar13 + 0x20);
          lVar9 = lVar9 + 0x28;
        } while ((long *******)(lVar13 + 0x28) != ppppppplVar3);
      }
LAB_003f5ddc:
      ppppppplVar2 = (long *******)&ppppppplStack_80;
      FUN_003f67a8(ppppppplVar2,0);
      goto LAB_003f5de8;
    }
    FUN_003f5ac0(param_1,ppppppplVar3,pppppplVar17,param_4,param_5);
    pppppplVar19 = (long ******)((long)param_3 - (long)pppppplVar17);
    ppppppplVar2 = ppppppplVar3;
    param_3 = pppppplVar19;
    ppppppplVar10 = param_4;
    FUN_003f5ac0(ppppppplVar3,param_2,pppppplVar19,param_4,param_5);
    ppppppplStack_b0 = ppppppplVar3;
    ppppppplStack_a8 = param_1;
    ppppppplStack_c0 = param_4;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lVar12) {
      while( true ) {
        if (pppppplVar19 == (long ******)0x0) {
          return;
        }
        ppppppplStack_b8 = param_2;
        if (((long)pppppplVar19 <= param_5) || ((long)pppppplVar17 <= param_5)) break;
        if (pppppplVar17 == (long ******)0x0) {
          return;
        }
        lVar12 = 0;
        lVar9 = -(long)pppppplVar17;
        while (ppppppplVar2 = (long *******)((long)param_1 + lVar12),
              *(int *)(ppppppplVar2 + 4) <= *(int *)(ppppppplVar3 + 4)) {
          lVar12 = lVar12 + 0x28;
          bVar1 = lVar9 == -1;
          lVar9 = lVar9 + 1;
          if (bVar1) {
            return;
          }
        }
        lVar13 = -lVar9;
        ppppppplStack_a8 = ppppppplVar2;
        if (lVar13 < (long)pppppplVar19) {
          pppppplVar11 = pppppplVar19;
          if ((long)pppppplVar19 < 0) {
            pppppplVar11 = (long ******)((long)pppppplVar19 + 1);
          }
          pppppplVar11 = (long ******)((long)pppppplVar11 >> 1);
          lVar13 = (long)ppppppplVar3 + (-lVar12 - (long)param_1);
          ppppppplVar10 = ppppppplVar3;
          if (lVar13 != 0) {
            uVar8 = (lVar13 >> 3) * -0x3333333333333333;
            ppppppplVar10 = ppppppplVar2;
            do {
              uVar15 = uVar8 >> 1;
              uVar16 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
              uVar8 = uVar15;
              if (*(int *)(ppppppplVar10 + uVar15 * 5 + 4) <=
                  *(int *)(ppppppplVar3 + (long)pppppplVar11 * 5 + 4)) {
                uVar8 = uVar16;
                ppppppplVar10 = ppppppplVar10 + uVar15 * 5 + 5;
              }
            } while (uVar8 != 0);
          }
          param_2 = ppppppplVar3 + (long)pppppplVar11 * 5;
          pppppplVar17 = (long ******)
                         (((long)ppppppplVar10 + (-lVar12 - (long)param_1) >> 3) *
                         -0x3333333333333333);
        }
        else {
          if (lVar9 == -1) {
            ppppppplStack_b0 = ppppppplVar3;
            FUN_003f5e60(&ppppppplStack_a8,&ppppppplStack_b0);
            return;
          }
          if (lVar13 < 0) {
            lVar13 = lVar13 + 1;
          }
          pppppplVar17 = (long ******)(lVar13 >> 1);
          if ((long)param_2 - (long)ppppppplVar3 != 0) {
            uVar8 = ((long)param_2 - (long)ppppppplVar3 >> 3) * -0x3333333333333333;
            ppppppplVar10 = ppppppplVar3;
            do {
              uVar16 = uVar8 >> 1;
              param_2 = ppppppplVar10 + uVar16 * 5 + 5;
              uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
              if (*(int *)((long)param_1 + lVar12 + (long)pppppplVar17 * 0x28 + 0x20) <=
                  *(int *)(ppppppplVar10 + uVar16 * 5 + 4)) {
                param_2 = ppppppplVar10;
                uVar8 = uVar16;
              }
              ppppppplVar10 = param_2;
            } while (uVar8 != 0);
          }
          ppppppplVar10 = (long *******)((long)param_1 + lVar12 + (long)pppppplVar17 * 0x28);
          pppppplVar11 = (long ******)
                         (((long)param_2 - (long)ppppppplVar3 >> 3) * -0x3333333333333333);
        }
        param_1 = param_2;
        if ((ppppppplVar10 != ppppppplVar3) && (param_1 = ppppppplVar10, ppppppplVar3 != param_2)) {
          FUN_003f6920(ppppppplVar10,ppppppplVar3,param_2);
        }
        param_4 = ppppppplStack_c0;
        if ((long)pppppplVar17 + (long)pppppplVar11 <
            (long)pppppplVar19 + (-lVar9 - ((long)pppppplVar17 + (long)pppppplVar11))) {
          FUN_003f6274(ppppppplVar2,ppppppplVar10,param_1,pppppplVar17);
          pppppplVar17 = (long ******)-((long)pppppplVar17 + lVar9);
          ppppppplVar3 = param_2;
          pppppplVar19 = (long ******)((long)pppppplVar19 - (long)pppppplVar11);
          param_2 = ppppppplStack_b8;
          ppppppplStack_a8 = param_1;
        }
        else {
          FUN_003f6274(param_1,param_2,ppppppplStack_b8,(long ******)-((long)pppppplVar17 + lVar9),
                       (long ******)((long)pppppplVar19 - (long)pppppplVar11));
          ppppppplVar3 = ppppppplVar10;
          pppppplVar19 = pppppplVar11;
          param_2 = param_1;
          param_1 = ppppppplVar2;
        }
      }
      ppppppplStack_98 = (long *******)&ppppppplStack_90;
      ppppppplStack_90 = (long *******)0x0;
      ppppppplStack_a0 = param_4;
      if ((long)pppppplVar19 < (long)pppppplVar17) {
        ppppppplStack_b0 = ppppppplVar3;
        if (ppppppplVar3 != param_2) {
          lVar12 = 0;
          do {
            lVar9 = (long)param_4 + lVar12;
            FUN_003f5748(lVar9,(long)ppppppplVar3 + lVar12);
            *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)((long)ppppppplVar3 + lVar12 + 0x20);
            ppppppplStack_90 = (long *******)((long)ppppppplStack_90 + 1);
            lVar12 = lVar12 + 0x28;
          } while ((long *******)((long)ppppppplVar3 + lVar12) != param_2);
          if (lVar12 != 0) {
            ppppppplVar10 = (long *******)((long)param_4 + lVar12);
            ppppppplVar21 = param_2;
            ppppppplVar2 = param_2;
            do {
              ppppppplVar24 = ppppppplVar2 + -5;
              if (ppppppplVar3 == param_1) {
                FUN_003f6890(&ppppppplStack_80,(long)&uStack_88 + 7,
                             (long *******)((long)param_4 + lVar12),ppppppplVar10,param_4,param_4,
                             ppppppplVar21,param_2);
                break;
              }
              ppppppplVar21 = ppppppplVar10 + -1;
              ppppppplVar25 = ppppppplVar3 + -1;
              if (*(int *)ppppppplVar21 < *(int *)ppppppplVar25) {
                ppppppplVar3 = ppppppplVar3 + -5;
                FUN_003f6718(ppppppplVar24,ppppppplVar3);
                ppppppplVar21 = ppppppplVar25;
              }
              else {
                ppppppplVar10 = ppppppplVar10 + -5;
                FUN_003f6718(ppppppplVar24,ppppppplVar10);
              }
              *(int *)(ppppppplVar2 + -1) = *(int *)ppppppplVar21;
              param_2 = param_2 + -5;
              ppppppplVar21 = ppppppplStack_b8;
              ppppppplVar2 = ppppppplVar24;
            } while (ppppppplVar10 != param_4);
          }
        }
      }
      else {
        ppppppplStack_b0 = ppppppplVar3;
        if (param_1 != ppppppplVar3) {
          lVar12 = 0;
          do {
            lVar9 = (long)param_4 + lVar12;
            FUN_003f5748(lVar9,(long)param_1 + lVar12);
            *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)((long)param_1 + lVar12 + 0x20);
            ppppppplStack_90 = (long *******)((long)ppppppplStack_90 + 1);
            lVar12 = lVar12 + 0x28;
          } while ((long *******)((long)param_1 + lVar12) != ppppppplVar3);
          if (lVar12 != 0) {
            ppppppplVar2 = (long *******)((long)param_4 + lVar12);
            do {
              if (ppppppplVar3 == param_2) {
                FUN_003f6824(&ppppppplStack_80,param_4,ppppppplVar2,param_1);
                break;
              }
              if (*(int *)(ppppppplVar3 + 4) < *(int *)(param_4 + 4)) {
                FUN_003f6718(param_1,ppppppplVar3);
                *(undefined4 *)(param_1 + 4) = *(undefined4 *)(ppppppplVar3 + 4);
                ppppppplVar3 = ppppppplVar3 + 5;
              }
              else {
                FUN_003f6718(param_1,param_4);
                *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
                param_4 = param_4 + 5;
              }
              param_1 = param_1 + 5;
            } while (ppppppplVar2 != param_4);
          }
        }
      }
      FUN_003f67a8(&ppppppplStack_a0,0);
      return;
    }
  }
  ___stack_chk_fail();
  plVar6 = (long *)0x0;
  FUN_003f67a8(&ppppppplStack_80);
  __Unwind_Resume(ppppppplVar2);
  ppppppplVar3 = ppppppplVar2;
  func_0x0040cf10();
  plVar7 = alStack_f0;
  plVar4 = alStack_f0;
  ppppppplStack_c0 = param_2;
  ppppppplStack_b8 = ppppppplVar2;
  ppppppplStack_b0 = (long *******)&stack0xfffffffffffffff0;
  ppppppplStack_a8 = (long *******)FUN_003f5e60;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppplVar17 = *ppppppplVar3;
  lVar12 = *plVar6;
  FUN_003f5748(alStack_f0,pppppplVar17);
  uStack_d0 = *(undefined4 *)(pppppplVar17 + 4);
  FUN_003f6718(pppppplVar17,lVar12);
  *(undefined4 *)(pppppplVar17 + 4) = *(undefined4 *)(lVar12 + 0x20);
  FUN_003f6718(lVar12);
  *(undefined4 *)(lVar12 + 0x20) = uStack_d0;
  if (plStack_d8 == alStack_f0) {
    lVar12 = 4;
  }
  else {
    plVar4 = plStack_d8;
    if (plStack_d8 == (long *)0x0) goto LAB_003f5ef4;
    lVar12 = 5;
  }
  (**(code **)(*plVar4 + lVar12 * 8))();
LAB_003f5ef4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  iVar5 = (int)plVar7;
  while (iVar5 != 0) {
    func_0x0040cf10();
    iVar5 = (int)plVar7;
  }
  __Unwind_Resume();
  if (param_3 != (long ******)0x0) {
    if (param_3 == (long ******)0x2) {
      plStack_150 = &lStack_148;
      lStack_148 = 0;
      plVar18 = plVar7 + -1;
      plVar14 = plVar4 + 4;
      plVar6 = plVar14;
      plVar23 = plVar4;
      plVar22 = plVar7 + -5;
      if ((int)*plVar14 <= (int)*plVar18) {
        plVar6 = plVar18;
        plVar18 = plVar14;
        plVar23 = plVar7 + -5;
        plVar22 = plVar4;
      }
      FUN_003f5748(ppppppplVar10,plVar22);
      *(int *)(ppppppplVar10 + 4) = (int)*plVar18;
      lStack_148 = lStack_148 + 1;
      FUN_003f5748(ppppppplVar10 + 5,plVar23);
      *(int *)(ppppppplVar10 + 9) = (int)*plVar6;
    }
    else {
      if (param_3 == (long ******)0x1) {
        FUN_003f5748(ppppppplVar10,plVar4);
        *(int *)(ppppppplVar10 + 4) = (int)plVar4[4];
        return;
      }
      ppppppplStack_158 = ppppppplVar10;
      if ((long)param_3 < 9) {
        if (plVar4 == plVar7) {
          return;
        }
        plStack_150 = &lStack_148;
        lStack_148 = 0;
        FUN_003f5748(ppppppplVar10,plVar4);
        *(int *)(ppppppplVar10 + 4) = (int)plVar4[4];
        lStack_148 = lStack_148 + 1;
        if (plVar4 + 5 != plVar7) {
          lVar12 = 0;
          plVar6 = plVar4 + 5;
          ppppppplVar2 = ppppppplVar10;
          do {
            plVar18 = plVar6;
            ppppppplVar3 = ppppppplVar2 + 5;
            if ((int)plVar4[9] < *(int *)(ppppppplVar2 + 4)) {
              FUN_003f5748(ppppppplVar3,ppppppplVar2);
              *(undefined4 *)(ppppppplVar2 + 9) = *(undefined4 *)(ppppppplVar2 + 4);
              lStack_148 = lStack_148 + 1;
              ppppppplVar21 = ppppppplVar10;
              lVar9 = lVar12;
              if (ppppppplVar2 != ppppppplVar10) {
                do {
                  ppppppplVar21 = (long *******)((long)ppppppplVar10 + lVar9);
                  if (*(int *)(ppppppplVar21 + -1) <= (int)plVar4[9]) break;
                  FUN_003f6718(ppppppplVar21,ppppppplVar21 + -5);
                  *(undefined4 *)((long)ppppppplVar10 + lVar9 + 0x20) =
                       *(undefined4 *)(ppppppplVar21 + -1);
                  lVar9 = lVar9 + -0x28;
                  ppppppplVar21 = ppppppplVar10;
                } while (lVar9 != 0);
              }
              FUN_003f6718(ppppppplVar21,plVar18);
              *(int *)(ppppppplVar21 + 4) = (int)plVar4[9];
            }
            else {
              FUN_003f5748(ppppppplVar3,plVar18);
              *(int *)(ppppppplVar2 + 9) = (int)plVar4[9];
              lStack_148 = lStack_148 + 1;
            }
            lVar12 = lVar12 + 0x28;
            plVar6 = plVar18 + 5;
            plVar4 = plVar18;
            ppppppplVar2 = ppppppplVar3;
          } while (plVar18 + 5 != plVar7);
        }
      }
      else {
        uVar8 = (ulong)param_3 >> 1;
        lVar12 = uVar8 * 4 + ((ulong)param_3 >> 1);
        plVar18 = plVar4 + lVar12;
        FUN_003f5ac0(plVar4,plVar18,uVar8,ppppppplVar10,uVar8);
        lVar9 = (long)param_3 - ((ulong)param_3 >> 1);
        FUN_003f5ac0(plVar18,plVar7,lVar9,ppppppplVar10 + lVar12,lVar9);
        plStack_150 = &lStack_148;
        lStack_148 = 0;
        plVar6 = plVar18;
        do {
          if (plVar6 == plVar7) {
            if (plVar4 != plVar18) {
              lVar12 = 0;
              do {
                lVar9 = (long)ppppppplVar10 + lVar12;
                FUN_003f5748(lVar9,(undefined1 *)((long)plVar4 + lVar12));
                *(undefined4 *)(lVar9 + 0x20) =
                     *(undefined4 *)((undefined1 *)((long)plVar4 + lVar12) + 0x20);
                lStack_148 = lStack_148 + 1;
                lVar12 = lVar12 + 0x28;
              } while ((long *)((long)plVar4 + lVar12) != plVar18);
            }
            goto LAB_003f5fe8;
          }
          plVar22 = plVar6 + 4;
          plVar23 = plVar4 + 4;
          if ((int)*plVar22 < (int)*plVar23) {
            FUN_003f5748(ppppppplVar10,plVar6);
            plVar6 = plVar6 + 5;
            plVar23 = plVar22;
          }
          else {
            FUN_003f5748(ppppppplVar10,plVar4);
            plVar4 = plVar4 + 5;
          }
          lStack_148 = lStack_148 + 1;
          *(int *)(ppppppplVar10 + 4) = (int)*plVar23;
          ppppppplVar10 = ppppppplVar10 + 5;
        } while (plVar4 != plVar18);
        if (plVar6 != plVar7) {
          lVar12 = 0;
          do {
            lVar9 = (long)ppppppplVar10 + lVar12;
            FUN_003f5748(lVar9,(undefined1 *)((long)plVar6 + lVar12));
            *(undefined4 *)(lVar9 + 0x20) =
                 *(undefined4 *)((undefined1 *)((long)plVar6 + lVar12) + 0x20);
            lStack_148 = lStack_148 + 1;
            lVar12 = lVar12 + 0x28;
          } while ((long *)((long)plVar6 + lVar12) != plVar7);
        }
      }
    }
LAB_003f5fe8:
    ppppppplStack_158 = (long *******)0x0;
    FUN_003f67a8(&ppppppplStack_158,0);
  }
  return;
}



/* Entry: 003f5e60; end: 003f5f2f;  */

void FUN_003f5e60(long *param_1,long *param_2,ulong param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long alStack_50 [3];
  long *plStack_38;
  undefined4 uStack_30;
  long lStack_28;
  
  plVar4 = alStack_50;
  plVar2 = alStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar8 = *param_1;
  lVar7 = *param_2;
  FUN_003f5748(alStack_50,lVar8);
  uStack_30 = *(undefined4 *)(lVar8 + 0x20);
  FUN_003f6718(lVar8,lVar7);
  *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
  FUN_003f6718(lVar7);
  *(undefined4 *)(lVar7 + 0x20) = uStack_30;
  if (plStack_38 == alStack_50) {
    lVar7 = 4;
  }
  else {
    plVar2 = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_003f5ef4;
    lVar7 = 5;
  }
  (**(code **)(*plVar2 + lVar7 * 8))();
LAB_003f5ef4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  iVar3 = (int)plVar4;
  while (iVar3 != 0) {
    func_0x0040cf10();
    iVar3 = (int)plVar4;
  }
  __Unwind_Resume();
  if (param_3 != 0) {
    if (param_3 == 2) {
      plStack_b0 = &lStack_a8;
      lStack_a8 = 0;
      plVar9 = plVar4 + -1;
      plVar6 = plVar2 + 4;
      plVar10 = plVar6;
      plVar13 = plVar2;
      plVar12 = plVar4 + -5;
      if ((int)*plVar6 <= (int)*plVar9) {
        plVar10 = plVar9;
        plVar9 = plVar6;
        plVar13 = plVar4 + -5;
        plVar12 = plVar2;
      }
      FUN_003f5748(param_4,plVar12);
      *(int *)(param_4 + 0x20) = (int)*plVar9;
      lStack_a8 = lStack_a8 + 1;
      FUN_003f5748(param_4 + 0x28,plVar13);
      *(int *)(param_4 + 0x48) = (int)*plVar10;
    }
    else {
      if (param_3 == 1) {
        FUN_003f5748(param_4,plVar2);
        *(int *)(param_4 + 0x20) = (int)plVar2[4];
        return;
      }
      lStack_b8 = param_4;
      if ((long)param_3 < 9) {
        if (plVar2 == plVar4) {
          return;
        }
        plStack_b0 = &lStack_a8;
        lStack_a8 = 0;
        FUN_003f5748(param_4,plVar2);
        *(int *)(param_4 + 0x20) = (int)plVar2[4];
        lStack_a8 = lStack_a8 + 1;
        if (plVar2 + 5 != plVar4) {
          lVar7 = 0;
          plVar10 = plVar2 + 5;
          lVar8 = param_4;
          do {
            plVar9 = plVar10;
            lVar1 = lVar8 + 0x28;
            if ((int)plVar2[9] < *(int *)(lVar8 + 0x20)) {
              FUN_003f5748(lVar1,lVar8);
              *(undefined4 *)(lVar8 + 0x48) = *(undefined4 *)(lVar8 + 0x20);
              lStack_a8 = lStack_a8 + 1;
              lVar11 = param_4;
              lVar14 = lVar7;
              if (lVar8 != param_4) {
                do {
                  lVar11 = param_4 + lVar14;
                  if (*(int *)(lVar11 + -8) <= (int)plVar2[9]) break;
                  FUN_003f6718(lVar11,lVar11 + -0x28);
                  *(undefined4 *)(param_4 + lVar14 + 0x20) = *(undefined4 *)(lVar11 + -8);
                  lVar14 = lVar14 + -0x28;
                  lVar11 = param_4;
                } while (lVar14 != 0);
              }
              FUN_003f6718(lVar11,plVar9);
              *(int *)(lVar11 + 0x20) = (int)plVar2[9];
            }
            else {
              FUN_003f5748(lVar1,plVar9);
              *(int *)(lVar8 + 0x48) = (int)plVar2[9];
              lStack_a8 = lStack_a8 + 1;
            }
            lVar7 = lVar7 + 0x28;
            plVar10 = plVar9 + 5;
            plVar2 = plVar9;
            lVar8 = lVar1;
          } while (plVar9 + 5 != plVar4);
        }
      }
      else {
        uVar5 = param_3 >> 1;
        lVar7 = uVar5 * 4 + (param_3 >> 1);
        plVar9 = plVar2 + lVar7;
        FUN_003f5ac0(plVar2,plVar9,uVar5,param_4,uVar5);
        lVar8 = param_3 - (param_3 >> 1);
        FUN_003f5ac0(plVar9,plVar4,lVar8,param_4 + lVar7 * 8,lVar8);
        plStack_b0 = &lStack_a8;
        lStack_a8 = 0;
        plVar10 = plVar9;
        do {
          if (plVar10 == plVar4) {
            if (plVar2 != plVar9) {
              lVar7 = 0;
              do {
                lVar8 = param_4 + lVar7;
                FUN_003f5748(lVar8,(undefined1 *)((long)plVar2 + lVar7));
                *(undefined4 *)(lVar8 + 0x20) =
                     *(undefined4 *)((undefined1 *)((long)plVar2 + lVar7) + 0x20);
                lStack_a8 = lStack_a8 + 1;
                lVar7 = lVar7 + 0x28;
              } while ((long *)((long)plVar2 + lVar7) != plVar9);
            }
            goto LAB_003f5fe8;
          }
          plVar12 = plVar10 + 4;
          plVar13 = plVar2 + 4;
          if ((int)*plVar12 < (int)*plVar13) {
            FUN_003f5748(param_4,plVar10);
            plVar10 = plVar10 + 5;
            plVar13 = plVar12;
          }
          else {
            FUN_003f5748(param_4,plVar2);
            plVar2 = plVar2 + 5;
          }
          lStack_a8 = lStack_a8 + 1;
          *(int *)(param_4 + 0x20) = (int)*plVar13;
          param_4 = param_4 + 0x28;
        } while (plVar2 != plVar9);
        if (plVar10 != plVar4) {
          lVar7 = 0;
          do {
            lVar8 = param_4 + lVar7;
            FUN_003f5748(lVar8,(undefined1 *)((long)plVar10 + lVar7));
            *(undefined4 *)(lVar8 + 0x20) =
                 *(undefined4 *)((undefined1 *)((long)plVar10 + lVar7) + 0x20);
            lStack_a8 = lStack_a8 + 1;
            lVar7 = lVar7 + 0x28;
          } while ((long *)((long)plVar10 + lVar7) != plVar4);
        }
      }
    }
LAB_003f5fe8:
    lStack_b8 = 0;
    FUN_003f67a8(&lStack_b8,0);
  }
  return;
}



/* Entry: 003f5f30; end: 003f6273;  */

void FUN_003f5f30(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      plStack_60 = &lStack_58;
      lStack_58 = 0;
      piVar7 = (int *)(param_2 + -8);
      piVar5 = (int *)(param_1 + 0x20);
      piVar9 = piVar5;
      lVar10 = param_1;
      lVar6 = param_2 + -0x28;
      if (*piVar5 <= *piVar7) {
        piVar9 = piVar7;
        piVar7 = piVar5;
        lVar10 = param_2 + -0x28;
        lVar6 = param_1;
      }
      FUN_003f5748(param_4,lVar6);
      *(int *)(param_4 + 0x20) = *piVar7;
      lStack_58 = lStack_58 + 1;
      FUN_003f5748(param_4 + 0x28,lVar10);
      *(int *)(param_4 + 0x48) = *piVar9;
    }
    else {
      if (param_3 == 1) {
        FUN_003f5748(param_4,param_1);
        *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        return;
      }
      lStack_68 = param_4;
      if ((long)param_3 < 9) {
        if (param_1 == param_2) {
          return;
        }
        plStack_60 = &lStack_58;
        lStack_58 = 0;
        FUN_003f5748(param_4,param_1);
        *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_1 + 0x20);
        lStack_58 = lStack_58 + 1;
        if (param_1 + 0x28 != param_2) {
          lVar10 = 0;
          lVar6 = param_1 + 0x28;
          lVar3 = param_4;
          do {
            lVar4 = lVar6;
            lVar1 = lVar3 + 0x28;
            if (*(int *)(param_1 + 0x48) < *(int *)(lVar3 + 0x20)) {
              FUN_003f5748(lVar1,lVar3);
              *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(lVar3 + 0x20);
              lStack_58 = lStack_58 + 1;
              lVar6 = param_4;
              lVar8 = lVar10;
              if (lVar3 != param_4) {
                do {
                  lVar6 = param_4 + lVar8;
                  if (*(int *)(lVar6 + -8) <= *(int *)(param_1 + 0x48)) break;
                  FUN_003f6718(lVar6,lVar6 + -0x28);
                  *(undefined4 *)(param_4 + lVar8 + 0x20) = *(undefined4 *)(lVar6 + -8);
                  lVar8 = lVar8 + -0x28;
                  lVar6 = param_4;
                } while (lVar8 != 0);
              }
              FUN_003f6718(lVar6,lVar4);
              *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(param_1 + 0x48);
            }
            else {
              FUN_003f5748(lVar1,lVar4);
              *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(param_1 + 0x48);
              lStack_58 = lStack_58 + 1;
            }
            lVar10 = lVar10 + 0x28;
            lVar6 = lVar4 + 0x28;
            param_1 = lVar4;
            lVar3 = lVar1;
          } while (lVar4 + 0x28 != param_2);
        }
      }
      else {
        uVar2 = param_3 >> 1;
        lVar10 = uVar2 * 4 + (param_3 >> 1);
        lVar6 = param_1 + lVar10 * 8;
        FUN_003f5ac0(param_1,lVar6,uVar2,param_4,uVar2);
        lVar3 = param_3 - (param_3 >> 1);
        FUN_003f5ac0(lVar6,param_2,lVar3,param_4 + lVar10 * 8,lVar3);
        plStack_60 = &lStack_58;
        lStack_58 = 0;
        lVar10 = lVar6;
        do {
          if (lVar10 == param_2) {
            if (param_1 != lVar6) {
              lVar10 = 0;
              do {
                lVar3 = param_4 + lVar10;
                FUN_003f5748(lVar3,param_1 + lVar10);
                *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + lVar10 + 0x20);
                lStack_58 = lStack_58 + 1;
                lVar10 = lVar10 + 0x28;
              } while (param_1 + lVar10 != lVar6);
            }
            goto LAB_003f5fe8;
          }
          piVar7 = (int *)(lVar10 + 0x20);
          piVar9 = (int *)(param_1 + 0x20);
          if (*piVar7 < *piVar9) {
            FUN_003f5748(param_4,lVar10);
            lVar10 = lVar10 + 0x28;
            piVar9 = piVar7;
          }
          else {
            FUN_003f5748(param_4,param_1);
            param_1 = param_1 + 0x28;
          }
          lStack_58 = lStack_58 + 1;
          *(int *)(param_4 + 0x20) = *piVar9;
          param_4 = param_4 + 0x28;
        } while (param_1 != lVar6);
        if (lVar10 != param_2) {
          lVar6 = 0;
          do {
            lVar3 = param_4 + lVar6;
            FUN_003f5748(lVar3,lVar10 + lVar6);
            *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar10 + lVar6 + 0x20);
            lStack_58 = lStack_58 + 1;
            lVar6 = lVar6 + 0x28;
          } while (lVar10 + lVar6 != param_2);
        }
      }
    }
LAB_003f5fe8:
    lStack_68 = 0;
    FUN_003f67a8(&lStack_68,0);
  }
  return;
}



/* Entry: 003f6274; end: 003f6717;  */

void FUN_003f6274(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined1 uStack_81;
  undefined1 auStack_80 [32];
  
  lStack_b0 = param_2;
  lStack_a8 = param_1;
  while( true ) {
    if (param_5 == 0) {
      return;
    }
    if ((param_5 <= param_7) || (param_4 <= param_7)) break;
    if (param_4 == 0) {
      return;
    }
    lVar3 = 0;
    lVar11 = -param_4;
    while (lVar7 = param_1 + lVar3, *(int *)(lVar7 + 0x20) <= *(int *)(param_2 + 0x20)) {
      lVar3 = lVar3 + 0x28;
      bVar1 = lVar11 == -1;
      lVar11 = lVar11 + 1;
      if (bVar1) {
        return;
      }
    }
    param_4 = -lVar11;
    lStack_a8 = lVar7;
    if (param_4 < param_5) {
      lVar2 = param_5;
      if (param_5 < 0) {
        lVar2 = param_5 + 1;
      }
      lVar2 = lVar2 >> 1;
      lVar6 = (param_2 - param_1) - lVar3;
      lVar8 = param_2;
      if (lVar6 != 0) {
        uVar4 = (lVar6 >> 3) * -0x3333333333333333;
        lVar8 = lVar7;
        do {
          lVar6 = lVar8 + (uVar4 >> 1) * 0x28;
          uVar5 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
          uVar4 = uVar4 >> 1;
          if (*(int *)(lVar6 + 0x20) <= *(int *)(param_2 + lVar2 * 0x28 + 0x20)) {
            uVar4 = uVar5;
            lVar8 = lVar6 + 0x28;
          }
        } while (uVar4 != 0);
      }
      lVar6 = param_2 + lVar2 * 0x28;
      param_4 = ((lVar8 - param_1) - lVar3 >> 3) * -0x3333333333333333;
    }
    else {
      if (lVar11 == -1) {
        lStack_b0 = param_2;
        FUN_003f5e60(&lStack_a8,&lStack_b0);
        return;
      }
      if (param_4 < 0) {
        param_4 = param_4 + 1;
      }
      param_4 = param_4 >> 1;
      lVar6 = param_3;
      if (param_3 - param_2 != 0) {
        uVar4 = (param_3 - param_2 >> 3) * -0x3333333333333333;
        lVar8 = param_2;
        do {
          uVar5 = uVar4 >> 1;
          lVar2 = lVar8 + uVar5 * 0x28;
          lVar6 = lVar2 + 0x28;
          uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
          if (*(int *)(param_1 + param_4 * 0x28 + lVar3 + 0x20) <= *(int *)(lVar2 + 0x20)) {
            lVar6 = lVar8;
            uVar4 = uVar5;
          }
          lVar8 = lVar6;
        } while (uVar4 != 0);
      }
      lVar8 = param_1 + param_4 * 0x28 + lVar3;
      lVar2 = (lVar6 - param_2 >> 3) * -0x3333333333333333;
    }
    lVar3 = lVar6;
    if ((lVar8 != param_2) && (lVar3 = lVar8, param_2 != lVar6)) {
      FUN_003f6920(lVar8,param_2,lVar6);
    }
    if (param_4 + lVar2 < (param_5 - (param_4 + lVar2)) - lVar11) {
      FUN_003f6274(lVar7,lVar8,lVar3,param_4);
      param_2 = lVar6;
      param_1 = lVar3;
      lStack_a8 = lVar3;
      param_5 = param_5 - lVar2;
      param_4 = -(param_4 + lVar11);
    }
    else {
      FUN_003f6274(lVar3,lVar6,param_3,-(param_4 + lVar11),param_5 - lVar2);
      param_2 = lVar8;
      param_1 = lVar7;
      param_5 = lVar2;
      param_3 = lVar3;
    }
  }
  plStack_98 = &lStack_90;
  lStack_90 = 0;
  lStack_a0 = param_6;
  if (param_5 < param_4) {
    lStack_b0 = param_2;
    if (param_2 != param_3) {
      lVar3 = 0;
      do {
        lVar11 = param_6 + lVar3;
        FUN_003f5748(lVar11,param_2 + lVar3);
        *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_2 + lVar3 + 0x20);
        lStack_90 = lStack_90 + 1;
        lVar3 = lVar3 + 0x28;
      } while (param_2 + lVar3 != param_3);
      if (lVar3 != 0) {
        lVar7 = param_3;
        lVar6 = param_6 + lVar3;
        lVar11 = param_3;
        do {
          lVar8 = lVar11 + -0x28;
          if (param_2 == param_1) {
            FUN_003f6890(auStack_80,&uStack_81,param_6 + lVar3,lVar6,param_6,param_6,param_3,lVar7);
            break;
          }
          piVar10 = (int *)(lVar6 + -8);
          piVar9 = (int *)(param_2 + -8);
          if (*piVar10 < *piVar9) {
            param_2 = param_2 + -0x28;
            FUN_003f6718(lVar8,param_2);
            piVar10 = piVar9;
          }
          else {
            lVar6 = lVar6 + -0x28;
            FUN_003f6718(lVar8,lVar6);
          }
          *(int *)(lVar11 + -8) = *piVar10;
          lVar7 = lVar7 + -0x28;
          lVar11 = lVar8;
        } while (lVar6 != param_6);
      }
    }
  }
  else {
    lStack_b0 = param_2;
    if (param_1 != param_2) {
      lVar3 = 0;
      do {
        lVar11 = param_6 + lVar3;
        FUN_003f5748(lVar11,param_1 + lVar3);
        *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(param_1 + lVar3 + 0x20);
        lStack_90 = lStack_90 + 1;
        lVar3 = lVar3 + 0x28;
      } while (param_1 + lVar3 != param_2);
      if (lVar3 != 0) {
        lVar3 = param_6 + lVar3;
        do {
          if (param_2 == param_3) {
            FUN_003f6824(auStack_80,param_6,lVar3,param_1);
            break;
          }
          if (*(int *)(param_2 + 0x20) < *(int *)(param_6 + 0x20)) {
            FUN_003f6718(param_1,param_2);
            *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
            param_2 = param_2 + 0x28;
          }
          else {
            FUN_003f6718(param_1,param_6);
            *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_6 + 0x20);
            param_6 = param_6 + 0x28;
          }
          param_1 = param_1 + 0x28;
        } while (lVar3 != param_6);
      }
    }
  }
  FUN_003f67a8(&lStack_a0,0);
  return;
}



/* Entry: 003f6718; end: 003f67a7;  */

long * FUN_003f6718(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 4;
    plVar1 = param_1;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_003f675c;
    lVar2 = 5;
  }
  (**(code **)(*plVar1 + lVar2 * 8))();
LAB_003f675c:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 003f67a8; end: 003f6823;  */

void FUN_003f67a8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  
  plVar4 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar4 != (long *)0x0) {
    puVar5 = (ulong *)param_1[1];
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        plVar1 = (long *)plVar4[3];
        if (plVar4 == plVar1) {
          lVar3 = 4;
          plVar1 = plVar4;
LAB_003f67f4:
          (**(code **)(*plVar1 + lVar3 * 8))();
          uVar2 = *puVar5;
        }
        else if (plVar1 != (long *)0x0) {
          lVar3 = 5;
          goto LAB_003f67f4;
        }
        uVar6 = uVar6 + 1;
        plVar4 = plVar4 + 5;
      } while (uVar6 < uVar2);
    }
  }
  return;
}



/* Entry: 003f6824; end: 003f688f;  */

undefined1  [16] FUN_003f6824(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_003f6718(param_4,param_2);
    *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    param_4 = param_4 + 0x28;
    lVar1 = param_3;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 003f6890; end: 003f691f;  */

void FUN_003f6890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  
  lVar1 = param_4;
  while (param_4 != param_6) {
    FUN_003f6718(param_8 + -0x28,param_4 + -0x28);
    *(undefined4 *)(param_8 + -8) = *(undefined4 *)(param_4 + -8);
    param_8 = param_8 + -0x28;
    param_4 = param_4 + -0x28;
    lVar1 = param_6;
  }
  *param_1 = param_3;
  param_1[1] = lVar1;
  param_1[2] = param_7;
  param_1[3] = param_8;
  return;
}



/* Entry: 003f6920; end: 003f69cf;  */

long FUN_003f6920(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lStack_40 = param_2;
  lStack_38 = param_1;
  while( true ) {
    lVar2 = param_2;
    FUN_003f5e60(&lStack_38,&lStack_40);
    lVar1 = lStack_38 + 0x28;
    lStack_40 = lStack_40 + 0x28;
    lStack_38 = lVar1;
    if (lStack_40 == param_3) break;
    param_2 = lStack_40;
    if (lVar1 != lVar2) {
      param_2 = lVar2;
    }
  }
  lStack_40 = lVar2;
  if (lVar1 != lVar2) {
    do {
      while( true ) {
        lVar3 = lVar2;
        FUN_003f5e60(&lStack_38,&lStack_40);
        lStack_38 = lStack_38 + 0x28;
        lStack_40 = lStack_40 + 0x28;
        if (lStack_40 == param_3) break;
        lVar2 = lStack_40;
        if (lStack_38 != lVar3) {
          lVar2 = lVar3;
        }
      }
      lVar2 = lVar3;
      lStack_40 = lVar3;
    } while (lStack_38 != lVar3);
  }
  return lVar1;
}



/* Entry: 003f69d0; end: 003f69e3;  */

void FUN_003f69d0(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  uVar3 = *(undefined8 *)(pcVar1 + 8);
  FUN_003f6a8c(pcVar1 + 0x10,uVar3,uVar3,*(undefined8 *)pcVar1,*(undefined8 *)pcVar1,param_2[1],
               param_2[1]);
  param_2[1] = uVar3;
  uVar2 = *(undefined8 *)pcVar1;
  *(undefined8 *)pcVar1 = uVar3;
  param_2[1] = uVar2;
  uVar3 = *(undefined8 *)(pcVar1 + 8);
  *(undefined8 *)(pcVar1 + 8) = param_2[2];
  param_2[2] = uVar3;
  uVar3 = *(undefined8 *)(pcVar1 + 0x10);
  *(undefined8 *)(pcVar1 + 0x10) = param_2[3];
  param_2[3] = uVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 003f69e4; end: 003f6a8b;  */

void FUN_003f69e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_003f6a8c(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
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



/* Entry: 003f6a8c; end: 003f6b2f;  */

undefined1  [16]
FUN_003f6a8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puStack_68 = &uStack_50;
  puStack_60 = &uStack_40;
  uStack_58 = 0;
  lStack_48 = param_7;
  uStack_50 = param_6;
  uStack_70 = param_1;
  while (uStack_40 = param_6, lStack_38 = param_7, param_3 != param_5) {
    param_3 = param_3 + -0x20;
    FUN_003f5748(param_7 + -0x20,param_3);
    param_7 = lStack_38 + -0x20;
    param_6 = uStack_40;
  }
  uStack_58 = 1;
  FUN_003f6b30(&uStack_70);
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = param_6;
  return auVar1;
}



/* Entry: 003f6b30; end: 003f6b63;  */

long FUN_003f6b30(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_003f6b64(param_1);
  }
  return param_1;
}



/* Entry: 003f6b64; end: 003f6c5f;  */

void FUN_003f6b64(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 8);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 8);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    plVar1 = (long *)plVar3[3];
    if (plVar3 == plVar1) {
      lVar2 = 4;
      plVar1 = plVar3;
LAB_003f6ba4:
      (**(code **)(*plVar1 + lVar2 * 8))();
    }
    else if (plVar1 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_003f6ba4;
    }
    plVar3 = plVar3 + 4;
  } while( true );
}



/* Entry: 003f6c60; end: 003f6cd3;  */

char * FUN_003f6c60(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_1 < 5) {
    return (char *)(ulong)(0xfU >> (ulong)(param_1 & 0x1f) & 1);
  }
  uVar1 = 0x8ccc7a;
  func_0x00338df0("return true;",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel_stack_type.cc"
                  ,0x26);
  if (uVar1 < 5) {
    return (&PTR_s_CLIENT_CHANNEL_009e1a90)[(int)uVar1];
  }
  pcVar2 = "return \"UNKNOWN\"";
  func_0x00338df0("return \"UNKNOWN\"",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/channel_stack_type.cc"
                  ,0x38);
  return pcVar2;
}



/* Entry: 003f6cd4; end: 003f6ceb;  */

void FUN_003f6cd4(void)

{
  return;
}



/* Entry: 003f6cec; end: 003f6d2f;  */

void FUN_003f6cec(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if ((char)param_1[0x17] == '\0') {
    func_0x0077595c();
  }
  else if (param_1[0x16] == 0) {
                    /* WARNING: Could not recover jumptable at 0x003f6d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[3] + 0x28))((long)param_1 + *(long *)(param_1[2] + 8) + 0x48,param_1 + 4);
    return;
  }
  func_0x00775990();
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003f6d30; end: 003f6d97;  */

void FUN_003f6d30(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003f6d98; end: 003f6e9f;  */

undefined8 * FUN_003f6d98(uint param_1,ulong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_a8 [72];
  
  puVar1 = auStack_a8;
  FUN_003413d4();
  lVar3 = *(long *)(&UNK_009e1ac0 + (ulong)param_1 * 0x48);
  (*(code *)(&PTR_SUB_009e1b98)[(param_2 & 0xffffffff) * 7])();
  puVar2 = (undefined8 *)(puVar1 + lVar3 + 0x48);
  func_0x00338c94();
  puVar2[2] = &UNK_009e1ab8 + (ulong)param_1 * 0x48;
  puVar2[3] = &UNK_009e1b90 + (param_2 & 0xffffffff) * 0x38;
  *puVar2 = 2;
  (*(code *)(&PTR_SUB_009e1ba0)[(param_2 & 0xffffffff) * 7])((long)(puVar2 + 9) + lVar3,puVar2 + 1);
  (*(code *)(&PTR_DAT_009e1ac8)[(ulong)param_1 * 9])(puVar2 + 9,param_3);
  puVar2[5] = FUN_003f6ea0;
  puVar2[6] = puVar2;
  puVar2[7] = 0;
  FUN_00341470(auStack_a8);
  return puVar2;
}



/* Entry: 003f6ea0; end: 003f6eaf;  */

void FUN_003f6ea0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  do {
    lVar3 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003f6eb0; end: 003f6f23;  */

void FUN_003f6eb0(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  ulong uStack_28;
  
  pcVar3 = *(code **)(*(long *)(param_1 + 0x10) + 0x30);
  uStack_28 = *param_3;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (*pcVar3)(param_1,param_2,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003f6f24; end: 003f6f3b;  */

void FUN_003f6f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003f6f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x38))();
  return;
}



/* Entry: 003f6f3c; end: 003f6fbf;  */

void FUN_003f6f3c(long param_1)

{
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00341380(&uStack_38,0);
  FUN_003413d4(auStack_80);
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(param_1);
  FUN_00341470(auStack_80);
  FUN_003414dc(&uStack_38);
  return;
}



/* Entry: 003f6fc0; end: 003f7013;  */

void FUN_003f6fc0(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  FUN_003f6f3c();
  FUN_003413d4(auStack_68);
  FUN_003f6d30(param_1);
  FUN_00341470(auStack_68);
  return;
}



/* Entry: 003f7014; end: 003f7077;  */

long FUN_003f7014(long param_1)

{
  if (**(char **)(param_1 + 0x18) != '\0') {
    return param_1 + *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x48;
  }
  return 0;
}



/* Entry: 003f7078; end: 003f70e7;  */

void FUN_003f7078(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x00339d8c(param_1[1]);
  if ((char)param_1[0x17] == '\0') {
    *(undefined1 *)(param_1 + 0x17) = 1;
    plVar1 = param_1 + 0x16;
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
      FUN_003f6cec(param_1);
    }
  }
  func_0x00339da8(param_1[1]);
  do {
    lVar4 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
  (**(code **)(param_1[2] + 0x20))(param_1 + 9);
  (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 003f70e8; end: 003f713f;  */

void FUN_003f70e8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                 ,0xff,2,"assertion failed: %s");
    _abort();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3f713c);
    (*pcVar1)();
  }
  if (param_1 + 0x50 == *(long *)(param_1 + 8)) {
    if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 8)) {
      return;
    }
    uVar2 = 0x2d;
  }
  else {
    uVar2 = 0x2c;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/mpscq.h"
               ,uVar2,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3bbd48);
  (*pcVar1)();
}



/* Entry: 003f7140; end: 003f718f;  */

undefined8 FUN_003f7140(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 0xb0);
  lVar5 = *plVar1;
  if (*plVar1 == 0) {
    return 0;
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 == lVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    lVar5 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 003f7190; end: 003f73e3;  */

void FUN_003f7190(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  int *piVar6;
  ulong uStack_58;
  undefined8 auStack_50 [2];
  char cStack_39;
  ulong uStack_38;
  
  lVar5 = *param_3;
  *(undefined8 *)(param_6 + 8) = param_2;
  *(undefined8 *)(param_6 + 0x10) = param_4;
  *(undefined8 *)(param_6 + 0x18) = param_5;
  *(ulong *)(param_6 + 0x20) = (ulong)(lVar5 == 0);
  ppuVar4 = &PTR___tlv_bootstrap_00b2c498;
  (*(code *)PTR___tlv_bootstrap_00b2c498)();
  if ((long *)*ppuVar4 == param_1) {
    ppuVar4 = &PTR___tlv_bootstrap_00b2c4b0;
    (*(code *)PTR___tlv_bootstrap_00b2c4b0)();
    if (*ppuVar4 == (undefined *)0x0) {
      *ppuVar4 = param_6;
      return;
    }
  }
  FUN_0033b3a0(param_1 + 10,param_6);
  plVar1 = param_1 + 0x14;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = param_1 + 0x15;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = param_1 + 0x16;
  if (*plVar1 != 1) {
    if (lVar5 == 0) {
      func_0x00339d8c(param_1[1]);
      (**(code **)(param_1[3] + 0x18))
                (&uStack_38,(undefined *)((long)param_1 + *(long *)(param_1[2] + 8) + 0x48),0);
      func_0x00339da8(param_1[1]);
      if (uStack_38 != 0) {
        uStack_58 = uStack_38;
        if ((uStack_38 & 1) != 0) {
          piVar6 = (int *)(uStack_38 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
              *piVar6 = *piVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_003be004(auStack_50,&uStack_58);
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                     ,0x2e5,2,"Kick failed: %s");
        if (cStack_39 < '\0') {
          __ZdlPv(auStack_50[0]);
        }
        if ((uStack_58 & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_38 & 1) != 0) {
          FUN_0055293c();
        }
      }
    }
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
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = *param_1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      func_0x00339d8c(param_1[1]);
      FUN_003f6cec(param_1);
      func_0x00339da8(param_1[1]);
      FUN_003f6d30(param_1);
    }
    return;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x16] = 0;
  func_0x00339d8c(param_1[1]);
  FUN_003f6cec(param_1);
  func_0x00339da8(param_1[1]);
  do {
    lVar5 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(param_1[2] + 0x20))(param_1 + 9);
    (**(code **)(param_1[3] + 0x30))((undefined *)((long)(param_1 + 9) + *(long *)(param_1[2] + 8)))
    ;
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 003f73e4; end: 003f77af;  */

undefined1  [16] FUN_003f73e4(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined ****ppppuVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  ulong unaff_x28;
  undefined1 auVar15 [16];
  ulong uStack_118;
  undefined ***pppuStack_110;
  ulong auStack_108 [2];
  char cStack_f1;
  undefined ***pppuStack_f0;
  undefined **appuStack_e8 [9];
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  char cStack_70;
  
  if (param_4 != 0) {
    func_0x007759c4();
    goto LAB_003f7704;
  }
  plVar1 = param_1 + 9;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = *param_1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_003b8b9c(param_2,param_3);
  lStack_98 = param_1[0x15];
  lStack_80 = 0;
  uStack_78 = 0;
  cStack_70 = '\x01';
  pppuVar9 = appuStack_e8;
  plStack_90 = param_1;
  lStack_88 = param_2;
  FUN_003c2a78(pppuVar9,0);
  plStack_a0 = &lStack_98;
  appuStack_e8[0] = &PTR_FUN_009e1c48;
  plVar2 = param_1 + 0x14;
  do {
    lVar3 = lStack_80;
    if (lStack_80 != 0) {
      lStack_80 = 0;
      param_2 = *(long *)(lVar3 + 8);
      uVar13 = *(ulong *)(lVar3 + 0x20);
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18));
      goto LAB_003f7648;
    }
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        goto LAB_003f74b8;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    auStack_108[0] = auStack_108[0] & 0xffffffffffffff00;
    plVar7 = param_1 + 10;
    FUN_0033b3e4(param_1 + 10,auStack_108);
    *plVar1 = 0;
    pppuVar9 = (undefined ***)0x0;
    if (plVar7 != (long *)0x0) goto LAB_003f7618;
LAB_003f74b8:
    lVar3 = 0;
    if (param_1[0x14] < 1) {
      lVar3 = param_2;
    }
    if (param_1[0x16] == 0) {
      if (*plVar2 < 1) {
        uVar13 = 0;
        unaff_x28 = 0;
        goto LAB_003f7668;
      }
      iVar11 = 7;
    }
    else {
      if (cStack_70 == '\0') {
        func_0x003c1f6c();
        ppuVar8 = *pppuVar9;
        FUN_003c1e28();
        if (param_2 <= (long)ppuVar8) {
          uVar13 = 0;
          unaff_x28 = 1;
          goto LAB_003f7668;
        }
      }
      func_0x00339d8c(param_1[1]);
      *(int *)(param_1 + 8) = (int)param_1[8] + 1;
      (**(code **)(param_1[3] + 0x20))
                (&pppuStack_f0,(long)plVar1 + *(long *)(param_1[2] + 8),0,lVar3);
      pppuVar9 = (undefined ***)param_1[1];
      func_0x00339da8();
      if (pppuStack_f0 == (undefined ***)0x0) {
        cStack_70 = '\0';
        iVar11 = 0;
      }
      else {
        pppuStack_110 = pppuStack_f0;
        if (((ulong)pppuStack_f0 & 1) != 0) {
          piVar12 = (int *)((long)pppuStack_f0 + -1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_003be004(auStack_108,&pppuStack_110);
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                     ,0x425,2,"Completion queue next failed: %s");
        if (cStack_f1 < '\0') {
          __ZdlPv(auStack_108[0]);
        }
        if (((ulong)pppuStack_110 & 1) != 0) {
          FUN_0055293c();
        }
        auStack_108[0] = 4;
        if (pppuStack_f0 == (undefined ***)&MACH_HEADER.cputype) {
          uVar14 = 1;
        }
        else {
          ppppuVar10 = &pppuStack_f0;
          FUN_00552b00(ppppuVar10,auStack_108);
          uVar14 = (uint)ppppuVar10;
          if ((auStack_108[0] & 1) != 0) {
            FUN_0055293c();
          }
        }
        unaff_x28 = (ulong)(uVar14 ^ 1);
        pppuVar9 = pppuStack_f0;
        if (((ulong)pppuStack_f0 & 1) != 0) {
          FUN_0055293c();
        }
        iVar11 = 6;
      }
    }
  } while (iVar11 != 6);
  uVar13 = 0;
  goto LAB_003f7668;
LAB_003f7618:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = *plVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  param_2 = plVar7[1];
  uVar13 = plVar7[4];
  (*(code *)plVar7[2])(plVar7[3]);
LAB_003f7648:
  uVar13 = uVar13 & 1;
  unaff_x28 = 2;
LAB_003f7668:
  if ((0 < *plVar2) && (0 < param_1[0x16])) {
    func_0x00339d8c(param_1[1]);
    (**(code **)(param_1[3] + 0x18))(&uStack_118,(long)plVar1 + *(long *)(param_1[2] + 8),0);
    if ((uStack_118 & 1) != 0) {
      FUN_0055293c();
    }
    func_0x00339da8(param_1[1]);
  }
  FUN_003f6d30(param_1);
  if (lStack_80 == 0) {
    FUN_00341470(appuStack_e8);
    auVar15._0_8_ = unaff_x28 & 0xffffffff | uVar13 << 0x20;
    auVar15._8_8_ = param_2;
    return auVar15;
  }
LAB_003f7704:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
               ,0x43e,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x3f7734);
  (*pcVar6)();
}



/* Entry: 003f77b0; end: 003f77cb;  */

void FUN_003f77b0(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 1;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(long *)(param_1 + 0x20) = param_1;
  *(long *)(param_1 + 0x28) = param_1;
  return;
}


