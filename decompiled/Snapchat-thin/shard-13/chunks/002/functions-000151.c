/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a23ffa4; end: 10a23ffbf;  */

undefined8 * FUN_10a23ffa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb5958;
  param_1[1] = &PTR_DAT_110bb5998;
  param_1[0xf] = &PTR_DAT_110bb5a10;
  func_0x00010a2720d8(param_1 + 8);
  func_0x00010a272080(param_1 + 6);
  param_1[1] = &PTR_DAT_110bb6758;
  param_1[0xf] = &PTR_FUN_110bb67d0;
  func_0x00010a004e5c(param_1 + 4);
  func_0x00010a004e04(param_1 + 2);
  return param_1;
}



/* Entry: 10a23ffc0; end: 10a23ffeb;  */

void FUN_10a23ffc0(void)

{
  FUN_10a23ff38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a23ffec; end: 10a24001b;  */

void FUN_10a23ffec(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a23ff38((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a24001c; end: 10a240073;  */

void FUN_10a24001c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a240028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  return;
}



/* Entry: 10a240074; end: 10a240103;  */

undefined8 * FUN_10a240074(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bb5a80;
  __ZNSt3__15mutexD1Ev(param_1 + 2);
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10a240104; end: 10a240287;  */

void FUN_10a240104(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = *(long **)(param_2 + 8);
  uStack_48 = *(undefined8 *)(*param_4 + 0x18);
  (**(code **)(*plVar4 + 0x10))(plVar4,&uStack_48);
  FUN_10a240288(param_1,plVar4);
  if (*param_1 == 0) {
    FUN_10a27341c(&uStack_48,&uStack_31,param_3,param_4);
    FUN_10a1e6914(param_1,&uStack_48);
    if (plStack_40 != (long *)0x0) {
      plVar4 = plStack_40 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    uVar5 = *(undefined8 *)(param_2 + 8);
    uStack_48 = *(undefined8 *)(*param_4 + 0x18);
    plStack_58 = (long *)param_1[1];
    lStack_60 = *param_1;
    if (param_1[1] != 0) {
      plVar4 = (long *)(param_1[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a272b80(uVar5,&uStack_48,&lStack_60);
    plVar4 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 0x10);
  return;
}



/* Entry: 10a240288; end: 10a240367;  */

undefined8 * FUN_10a240288(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a240368; end: 10a24036b;  */

undefined8 * FUN_10a240368(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bb5aa0;
  plVar1 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10a24036c; end: 10a24037f;  */

void FUN_10a24036c(void)

{
  func_0x00010a240304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a240380; end: 10a24051f;  */

void FUN_10a240380(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_60;
  long *plStack_58;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10a08d2e0(auStack_48,param_3);
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  plVar6 = *(long **)(param_2 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6,auStack_48);
  lVar8 = *plVar6;
  lVar2 = plVar6[1];
  *param_1 = lVar8;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    plVar6 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar8 == 0) {
    func_0x00010a183e14(param_1);
    __ZNSt3__15mutex6unlockEv(param_2 + 8);
    FUN_10a240520(param_1);
    if (*param_1 == 0) {
      FUN_10a00946c(&UNK_10f646c12);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a2404c4);
      (*pcVar5)();
    }
    __ZNSt3__15mutex4lockEv(param_2 + 8);
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    plStack_58 = (long *)param_1[1];
    lStack_60 = *param_1;
    if (param_1[1] != 0) {
      plVar6 = (long *)(param_1[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a273860(uVar7,auStack_48,&lStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 8);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10a240520; end: 10a241a4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a241510) */
/* WARNING: Removing unreachable block (ram,0x00010a241458) */
/* WARNING: Removing unreachable block (ram,0x00010a2405b8) */
/* WARNING: Removing unreachable block (ram,0x00010a2405c4) */
/* WARNING: Removing unreachable block (ram,0x00010a240618) */
/* WARNING: Removing unreachable block (ram,0x00010a2410fc) */
/* WARNING: Removing unreachable block (ram,0x00010a241520) */
/* WARNING: Removing unreachable block (ram,0x00010a2405f0) */
/* WARNING: Removing unreachable block (ram,0x00010a2406f0) */
/* WARNING: Removing unreachable block (ram,0x00010a240628) */
/* WARNING: Removing unreachable block (ram,0x00010a240630) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff48 : 0x00010a2406f4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10a240520(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *******ppppppplVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *******ppppppplVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  char cVar20;
  undefined8 uVar21;
  undefined8 ******ppppppuStack_2c0;
  ulong uStack_2b8;
  byte bStack_2a9;
  long alStack_2a8 [2];
  char cStack_291;
  undefined8 ******ppppppuStack_290;
  undefined8 ******ppppppuStack_288;
  ulong uStack_280;
  byte bStack_260;
  undefined8 ******ppppppuStack_250;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  char cStack_239;
  byte bStack_220;
  undefined8 ******ppppppuStack_210;
  undefined8 ******ppppppuStack_208;
  ulong uStack_200;
  long alStack_1f8 [3];
  char cStack_1e0;
  undefined8 ******ppppppuStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  undefined8 uStack_1c8;
  byte bStack_1a8;
  undefined1 auStack_1a0 [48];
  byte bStack_170;
  undefined8 ******ppppppuStack_168;
  undefined8 ******ppppppuStack_160;
  undefined8 uStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_148;
  undefined8 uStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 uStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined1 auStack_110 [7];
  undefined1 uStack_109;
  long ******apppppplStack_108 [2];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [48];
  byte bStack_c0;
  undefined8 uStack_b8;
  char cStack_a1;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  byte bStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a08d2e0(&ppppppuStack_a0,param_3);
  pppppppuVar18 = (undefined8 *******)ppppppuStack_98;
  pppppppuVar19 = (undefined8 *******)ppppppuStack_a0;
  if (-1 < (char)bStack_89) {
    pppppppuVar18 = (undefined8 *******)(ulong)bStack_89;
    pppppppuVar19 = &ppppppuStack_a0;
  }
  FUN_10a1a5e64(&uStack_b8,pppppppuVar19,pppppppuVar18);
  FUN_10a0f1b8c(auStack_f0,&ppppppuStack_a0,0);
  if (cStack_a1 != '\x03') {
    if ((bStack_c0 & 1) == 0) goto LAB_10a241564;
    if (cStack_a1 == '\x04') {
      uVar11 = ((uint)uStack_b8 & 0xff00ff00) >> 8 | ((uint)uStack_b8 & 0xff00ff) << 8;
      uVar2 = uVar11 >> 0x10 | uVar11 << 0x10;
      uVar11 = (uint)(0x676c736c < uVar2);
      if (uVar2 < 0x676c736c) {
        uVar11 = 0xffffffff;
      }
      uVar12 = 1;
      if (uVar11 != 0) {
        uVar12 = 2;
      }
      goto LAB_10a24071c;
    }
    if ((cStack_a1 != '\b') || (uStack_b8 != 0x62696c6c6174656d)) goto LAB_10a240650;
    pppppppuVar18 = (undefined8 *******)ppppppuStack_98;
    pppppppuVar19 = (undefined8 *******)ppppppuStack_a0;
    if (-1 < (char)bStack_89) {
      pppppppuVar18 = (undefined8 *******)(ulong)bStack_89;
      pppppppuVar19 = &ppppppuStack_a0;
    }
    pppppppuVar16 = pppppppuVar19;
    FUN_10a186dec(pppppppuVar19,pppppppuVar18,&DAT_10f3f8885,8);
    if ((int)pppppppuVar16 == 0) {
      if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar18) {
        func_0x000109ffde50();
        goto LAB_10a241650;
      }
      if (pppppppuVar18 < (undefined8 *******)0x17) {
        uStack_1c8 = CONCAT17((char)pppppppuVar18,(undefined7)uStack_1c8);
        pppppppuVar13 = &ppppppuStack_1d8;
        if (pppppppuVar18 != (undefined8 *******)0x0) goto LAB_10a241154;
      }
      else {
        pppppppuVar16 = (undefined8 *******)0x19;
        if (((ulong)pppppppuVar18 | 7) != 0x17) {
          pppppppuVar16 = (undefined8 *******)(((ulong)pppppppuVar18 | 7) + 1);
        }
        pppppppuVar13 = pppppppuVar16;
        __Znwm();
        uStack_1c8 = (ulong)pppppppuVar16 | 0x8000000000000000;
        ppppppuStack_1d8 = pppppppuVar13;
        ppppppuStack_1d0 = pppppppuVar18;
LAB_10a241154:
        _memmove(pppppppuVar13,pppppppuVar19,pppppppuVar18);
      }
      *(undefined1 *)((long)pppppppuVar13 + (long)pppppppuVar18) = 0;
    }
    else {
      FUN_10a00280c(&ppppppuStack_1d8,pppppppuVar18 + 1,0);
      pppppppuVar16 = (undefined8 *******)ppppppuStack_1d8;
      if (-1 < (long)uStack_1c8) {
        pppppppuVar16 = &ppppppuStack_1d8;
      }
      _memcpy(pppppppuVar16,pppppppuVar19,pppppppuVar18 + -1);
      puVar10 = (undefined8 *)((long)pppppppuVar16 + (long)(pppppppuVar18 + -1));
      puVar10[1] = 0x6e6f697463656c66;
      *puVar10 = 0x65722e6c6174656d;
    }
    FUN_10a0f1b8c(auStack_1a0,&ppppppuStack_1d8,0);
    if ((bStack_170 & 1) == 0) {
      func_0x000107c2b054(apppppplStack_108,&UNK_10f646c97);
      FUN_10a012db0(&ppppppuStack_290);
      pppppppuVar18 = (undefined8 *******)ppppppuStack_1d0;
      pppppppuVar19 = (undefined8 *******)ppppppuStack_1d8;
      if (-1 < (long)uStack_1c8) {
        pppppppuVar18 = (undefined8 *******)(uStack_1c8 >> 0x38);
        pppppppuVar19 = &ppppppuStack_1d8;
      }
      pppppppuVar16 = &ppppppuStack_290;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar16,pppppppuVar19,pppppppuVar18);
      ppppppuStack_250 = *pppppppuVar16;
      uStack_240 = SUB87(pppppppuVar16[2],0);
      cStack_239 = (char)((ulong)pppppppuVar16[2] >> 0x38);
      uStack_248 = SUB87(pppppppuVar16[1],0);
      uStack_241 = (undefined1)((ulong)pppppppuVar16[1] >> 0x38);
      pppppppuVar16[1] = (undefined8 ******)0x0;
      pppppppuVar16[2] = (undefined8 ******)0x0;
      *pppppppuVar16 = (undefined8 ******)0x0;
      FUN_10a012db0(&ppppppuStack_210,&ppppppuStack_250,&DAT_10f3b3c06);
      FUN_10a0029c0(&ppppppuStack_210);
      goto LAB_10a241650;
    }
    FUN_10a0f20c0(&ppppppuStack_210,auStack_1a0);
    if ((bStack_c0 & 1) == 0) goto LAB_10a241650;
    FUN_10a0f1f4c(&ppppppuStack_250,auStack_f0);
    puVar10 = (undefined8 *)0xc0;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar8 = puVar10 + 3;
    *puVar10 = &PTR_DAT_110bb7098;
    FUN_10a275e88(puVar8,3,&ppppppuStack_250,&ppppppuStack_210,param_3);
    *param_1 = puVar8;
    param_1[1] = puVar10;
    if ((undefined8 *******)ppppppuStack_250 != (undefined8 *******)0x0) {
      uStack_248 = SUB87(ppppppuStack_250,0);
      uStack_241 = (undefined1)((ulong)ppppppuStack_250 >> 0x38);
      __ZdlPv();
    }
    if ((long)uStack_200 < 0) {
      __ZdlPv(ppppppuStack_210);
    }
    pppppppuVar18 = (undefined8 *******)ppppppuStack_1d8;
    uVar3 = uStack_1c8;
    if (bStack_170 == 1) {
      FUN_10a0f1ea0(auStack_1a0);
      pppppppuVar18 = (undefined8 *******)ppppppuStack_1d8;
      uVar3 = uStack_1c8;
    }
    goto joined_r0x00010a24120c;
  }
  if ((short)uStack_b8 == 0x7073 && uStack_b8._2_1_ == 'v') {
    pppppppuVar18 = (undefined8 *******)ppppppuStack_98;
    pppppppuVar19 = (undefined8 *******)ppppppuStack_a0;
    if (-1 < (char)bStack_89) {
      pppppppuVar18 = (undefined8 *******)(ulong)bStack_89;
      pppppppuVar19 = &ppppppuStack_a0;
    }
    pppppppuVar16 = pppppppuVar19;
    FUN_10a186dec(pppppppuVar19,pppppppuVar18,&DAT_10f5b012e,3);
    if ((int)pppppppuVar16 == 0) {
      if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar18) {
        func_0x000109ffde50();
        goto LAB_10a241650;
      }
      if (pppppppuVar18 < (undefined8 *******)0x17) {
        uStack_f8 = CONCAT17((char)pppppppuVar18,(undefined7)uStack_f8);
        ppppppplVar6 = apppppplStack_108;
        if (pppppppuVar18 != (undefined8 *******)0x0) goto LAB_10a240a24;
      }
      else {
        ppppppplVar9 = (long *******)0x19;
        if (((ulong)pppppppuVar18 | 7) != 0x17) {
          ppppppplVar9 = (long *******)(((ulong)pppppppuVar18 | 7) + 1);
        }
        ppppppplVar6 = ppppppplVar9;
        __Znwm();
        uStack_f8 = (ulong)ppppppplVar9 | 0x8000000000000000;
        apppppplStack_108[0] = (long ******)ppppppplVar6;
        apppppplStack_108[1] = (long ******)pppppppuVar18;
LAB_10a240a24:
        _memmove(ppppppplVar6,pppppppuVar19,pppppppuVar18);
      }
      *(undefined1 *)((long)ppppppplVar6 + (long)pppppppuVar18) = 0;
    }
    else {
      FUN_10a00280c(apppppplStack_108,(long)pppppppuVar18 + 5,0);
      _memcpy(apppppplStack_108,pppppppuVar19,(long)pppppppuVar18 - 3U);
      *(undefined8 *)((long)apppppplStack_108 + ((long)pppppppuVar18 - 3U)) = 0x7670732e74726576;
    }
    pppppppuVar18 = (undefined8 *******)ppppppuStack_98;
    pppppppuVar19 = (undefined8 *******)ppppppuStack_a0;
    if (-1 < (char)bStack_89) {
      pppppppuVar18 = (undefined8 *******)(ulong)bStack_89;
      pppppppuVar19 = &ppppppuStack_a0;
    }
    pppppppuVar16 = pppppppuVar19;
    FUN_10a186dec(pppppppuVar19,pppppppuVar18,&DAT_10f5b012e,3);
    if ((int)pppppppuVar16 == 0) {
      if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar18) {
        func_0x000109ffde50();
        goto LAB_10a241650;
      }
      if (pppppppuVar18 < (undefined8 *******)0x17) {
        _auStack_110 = CONCAT17((char)pppppppuVar18,auStack_110);
        pppppppuVar13 = &ppppppuStack_120;
        if (pppppppuVar18 != (undefined8 *******)0x0) goto LAB_10a240b08;
      }
      else {
        pppppppuVar16 = (undefined8 *******)0x19;
        if (((ulong)pppppppuVar18 | 7) != 0x17) {
          pppppppuVar16 = (undefined8 *******)(((ulong)pppppppuVar18 | 7) + 1);
        }
        pppppppuVar13 = pppppppuVar16;
        __Znwm();
        _auStack_110 = (ulong)pppppppuVar16 | 0x8000000000000000;
        ppppppuStack_120 = pppppppuVar13;
        ppppppuStack_118 = pppppppuVar18;
LAB_10a240b08:
        _memmove(pppppppuVar13,pppppppuVar19,pppppppuVar18);
      }
      *(undefined1 *)((long)pppppppuVar13 + (long)pppppppuVar18) = 0;
    }
    else {
      FUN_10a00280c(&ppppppuStack_120,(long)pppppppuVar18 + 5,0);
      pppppppuVar16 = (undefined8 *******)ppppppuStack_120;
      if (-1 < (long)_auStack_110) {
        pppppppuVar16 = &ppppppuStack_120;
      }
      _memcpy(pppppppuVar16,pppppppuVar19,(long)pppppppuVar18 - 3U);
      *(undefined8 *)((long)pppppppuVar16 + ((long)pppppppuVar18 - 3U)) = 0x7670732e67617266;
    }
    pppppppuVar18 = (undefined8 *******)ppppppuStack_98;
    pppppppuVar19 = (undefined8 *******)ppppppuStack_a0;
    if (-1 < (char)bStack_89) {
      pppppppuVar18 = (undefined8 *******)(ulong)bStack_89;
      pppppppuVar19 = &ppppppuStack_a0;
    }
    pppppppuVar16 = pppppppuVar19;
    FUN_10a186dec(pppppppuVar19,pppppppuVar18,&DAT_10f5b012e,3);
    if ((int)pppppppuVar16 == 0) {
      if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar18) {
        func_0x000109ffde50();
        goto LAB_10a241650;
      }
      if (pppppppuVar18 < (undefined8 *******)0x17) {
        uStack_128 = CONCAT17((char)pppppppuVar18,(undefined7)uStack_128);
        pppppppuVar13 = &ppppppuStack_138;
        if (pppppppuVar18 != (undefined8 *******)0x0) goto LAB_10a240bf4;
      }
      else {
        pppppppuVar16 = (undefined8 *******)0x19;
        if (((ulong)pppppppuVar18 | 7) != 0x17) {
          pppppppuVar16 = (undefined8 *******)(((ulong)pppppppuVar18 | 7) + 1);
        }
        pppppppuVar13 = pppppppuVar16;
        __Znwm();
        uStack_128 = (ulong)pppppppuVar16 | 0x8000000000000000;
        ppppppuStack_138 = pppppppuVar13;
        ppppppuStack_130 = pppppppuVar18;
LAB_10a240bf4:
        _memmove(pppppppuVar13,pppppppuVar19,pppppppuVar18);
      }
      *(undefined1 *)((long)pppppppuVar13 + (long)pppppppuVar18) = 0;
    }
    else {
      FUN_10a00280c(&ppppppuStack_138,(long)pppppppuVar18 + 0xc,0);
      pppppppuVar16 = (undefined8 *******)ppppppuStack_138;
      if (-1 < (long)uStack_128) {
        pppppppuVar16 = &ppppppuStack_138;
      }
      _memcpy(pppppppuVar16,pppppppuVar19,(long)pppppppuVar18 - 3U);
      puVar10 = (undefined8 *)((long)pppppppuVar16 + ((long)pppppppuVar18 - 3U));
      *puVar10 = 0x6665722e74726576;
      *(undefined8 *)((long)puVar10 + 7) = 0x6e6f697463656c66;
    }
    pppppppuVar18 = (undefined8 *******)ppppppuStack_98;
    pppppppuVar19 = (undefined8 *******)ppppppuStack_a0;
    if (-1 < (char)bStack_89) {
      pppppppuVar18 = (undefined8 *******)(ulong)bStack_89;
      pppppppuVar19 = &ppppppuStack_a0;
    }
    pppppppuVar16 = pppppppuVar19;
    FUN_10a186dec(pppppppuVar19,pppppppuVar18,&DAT_10f5b012e,3);
    if ((int)pppppppuVar16 == 0) {
      if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar18) {
        func_0x000109ffde50();
        goto LAB_10a241650;
      }
      if (pppppppuVar18 < (undefined8 *******)0x17) {
        uStack_140 = CONCAT17((char)pppppppuVar18,(undefined7)uStack_140);
        pppppppuVar13 = &ppppppuStack_150;
        if (pppppppuVar18 != (undefined8 *******)0x0) goto LAB_10a240ce0;
      }
      else {
        pppppppuVar16 = (undefined8 *******)0x19;
        if (((ulong)pppppppuVar18 | 7) != 0x17) {
          pppppppuVar16 = (undefined8 *******)(((ulong)pppppppuVar18 | 7) + 1);
        }
        pppppppuVar13 = pppppppuVar16;
        __Znwm();
        uStack_140 = (ulong)pppppppuVar16 | 0x8000000000000000;
        ppppppuStack_150 = pppppppuVar13;
        ppppppuStack_148 = pppppppuVar18;
LAB_10a240ce0:
        _memmove(pppppppuVar13,pppppppuVar19,pppppppuVar18);
      }
      *(undefined1 *)((long)pppppppuVar13 + (long)pppppppuVar18) = 0;
    }
    else {
      FUN_10a00280c(&ppppppuStack_150,(long)pppppppuVar18 + 0xc,0);
      pppppppuVar16 = (undefined8 *******)ppppppuStack_150;
      if (-1 < (long)uStack_140) {
        pppppppuVar16 = &ppppppuStack_150;
      }
      _memcpy(pppppppuVar16,pppppppuVar19,(long)pppppppuVar18 - 3U);
      puVar10 = (undefined8 *)((long)pppppppuVar16 + ((long)pppppppuVar18 - 3U));
      *puVar10 = 0x6665722e67617266;
      *(undefined8 *)((long)puVar10 + 7) = 0x6e6f697463656c66;
    }
    pppppppuVar18 = (undefined8 *******)ppppppuStack_98;
    pppppppuVar19 = (undefined8 *******)ppppppuStack_a0;
    if (-1 < (char)bStack_89) {
      pppppppuVar18 = (undefined8 *******)(ulong)bStack_89;
      pppppppuVar19 = &ppppppuStack_a0;
    }
    pppppppuVar16 = pppppppuVar19;
    FUN_10a186dec(pppppppuVar19,pppppppuVar18,&DAT_10f5b012e,3);
    if ((int)pppppppuVar16 == 0) {
      if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar18) {
        func_0x000109ffde50();
        goto LAB_10a241650;
      }
      if (pppppppuVar18 < (undefined8 *******)0x17) {
        uStack_158 = CONCAT17((char)pppppppuVar18,(undefined7)uStack_158);
        pppppppuVar13 = &ppppppuStack_168;
        if (pppppppuVar18 != (undefined8 *******)0x0) goto LAB_10a240dcc;
      }
      else {
        pppppppuVar16 = (undefined8 *******)0x19;
        if (((ulong)pppppppuVar18 | 7) != 0x17) {
          pppppppuVar16 = (undefined8 *******)(((ulong)pppppppuVar18 | 7) + 1);
        }
        pppppppuVar13 = pppppppuVar16;
        __Znwm();
        uStack_158 = (ulong)pppppppuVar16 | 0x8000000000000000;
        ppppppuStack_168 = pppppppuVar13;
        ppppppuStack_160 = pppppppuVar18;
LAB_10a240dcc:
        _memmove(pppppppuVar13,pppppppuVar19,pppppppuVar18);
      }
      *(undefined1 *)((long)pppppppuVar13 + (long)pppppppuVar18) = 0;
    }
    else {
      FUN_10a00280c(&ppppppuStack_168,(long)pppppppuVar18 + 0xb,0);
      pppppppuVar16 = (undefined8 *******)ppppppuStack_168;
      if (-1 < (long)uStack_158) {
        pppppppuVar16 = &ppppppuStack_168;
      }
      _memcpy(pppppppuVar16,pppppppuVar19,(long)pppppppuVar18 - 3U);
      puVar10 = (undefined8 *)((long)pppppppuVar16 + ((long)pppppppuVar18 - 3U));
      *puVar10 = 0x6c6665722e767073;
      *(undefined8 *)((long)puVar10 + 6) = 0x6e6f697463656c66;
    }
    FUN_10a2420a8(auStack_1a0,apppppplStack_108);
    FUN_10a2420a8(&ppppppuStack_1d8,&ppppppuStack_120);
    FUN_10a0f1b8c(&ppppppuStack_210,&ppppppuStack_168,0);
    if (cStack_1e0 == '\x01') {
      FUN_10a0f20c0(&ppppppuStack_250,&ppppppuStack_210);
      uStack_88 = uStack_248;
      uStack_81 = uStack_241;
      uStack_80 = uStack_240;
      pppppppuVar18 = (undefined8 *******)ppppppuStack_250;
      cVar20 = cStack_239;
    }
    else {
      FUN_10a2420a8(&ppppppuStack_250,&ppppppuStack_138);
      FUN_10a2420a8(&ppppppuStack_290,&ppppppuStack_150);
      if (((bStack_220 & 1) == 0) ||
         (FUN_10a0f20c0(alStack_2a8,&ppppppuStack_250), (bStack_260 & 1) == 0)) goto LAB_10a241650;
      FUN_10a0f20c0(&ppppppuStack_2c0,&ppppppuStack_290);
      pppppppuVar18 = (undefined8 *******)ppppppuStack_2c0;
      if (-1 < (char)bStack_2a9) {
        uStack_2b8 = (ulong)bStack_2a9;
        pppppppuVar18 = &ppppppuStack_2c0;
      }
      plVar7 = alStack_2a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar7,pppppppuVar18,uStack_2b8);
      pppppppuVar18 = (undefined8 *******)*plVar7;
      uStack_88 = (undefined7)plVar7[1];
      uStack_81 = (undefined1)*(undefined8 *)((long)plVar7 + 0xf);
      uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)plVar7 + 0xf) >> 8);
      cVar20 = *(char *)((long)plVar7 + 0x17);
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      if ((char)bStack_2a9 < '\0') {
        __ZdlPv(ppppppuStack_2c0);
      }
      if (cStack_291 < '\0') {
        __ZdlPv(alStack_2a8[0]);
      }
      if (bStack_260 == 1) {
        FUN_10a0f1ea0(&ppppppuStack_290);
      }
      if (bStack_220 == 1) {
        FUN_10a0f1ea0(&ppppppuStack_250);
      }
    }
    if (cStack_1e0 == '\x01') {
      FUN_10a0f1ea0(&ppppppuStack_210);
    }
    if (((bStack_170 & 1) == 0) ||
       (FUN_10a0f1f4c(&ppppppuStack_210,auStack_1a0), (bStack_1a8 & 1) == 0)) goto LAB_10a241650;
    FUN_10a0f1f4c(alStack_1f8,&ppppppuStack_1d8);
    puVar10 = (undefined8 *)0xc0;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar8 = puVar10 + 3;
    *(undefined4 *)puVar8 = 4;
    puVar10[4] = 0;
    *puVar10 = &PTR_DAT_110bb7098;
    puVar10[9] = uStack_200;
    puVar10[8] = ppppppuStack_208;
    puVar10[7] = ppppppuStack_210;
    puVar10[5] = 0;
    puVar10[6] = 0;
    ppppppuStack_210 = (undefined8 *******)0x0;
    ppppppuStack_208 = (undefined8 *******)0x0;
    puVar10[0xb] = alStack_1f8[1];
    puVar10[10] = alStack_1f8[0];
    puVar10[0xc] = alStack_1f8[2];
    alStack_1f8[1] = 0;
    alStack_1f8[2] = 0;
    uStack_200 = 0;
    alStack_1f8[0] = 0;
    *(undefined4 *)(puVar10 + 0xd) = 2;
    puVar10[0xe] = pppppppuVar18;
    puVar10[0xf] = CONCAT17(uStack_81,uStack_88);
    *(ulong *)((long)puVar10 + 0x7f) = CONCAT71(uStack_80,uStack_81);
    *(char *)((long)puVar10 + 0x87) = cVar20;
    uStack_88 = 0;
    uStack_81 = 0;
    uStack_80 = 0;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(puVar10 + 0x11,*param_3,param_3[1]);
    }
    else {
      uVar21 = *param_3;
      puVar10[0x12] = param_3[1];
      puVar10[0x11] = uVar21;
      puVar10[0x13] = param_3[2];
    }
    if (*(char *)((long)param_3 + 0x2f) < '\0') {
      func_0x000107c3192c(puVar10 + 0x14,param_3[3],param_3[4]);
    }
    else {
      uVar21 = param_3[3];
      puVar10[0x15] = param_3[4];
      puVar10[0x14] = uVar21;
      puVar10[0x16] = param_3[5];
    }
    *(undefined4 *)(puVar10 + 0x17) = *(undefined4 *)(param_3 + 6);
    func_0x00010a1e6cb8(puVar8);
    if (((*(int *)(puVar10 + 3) != 3) && (lVar15 = puVar10[5], lVar15 != 0)) &&
       (lVar17 = puVar10[4], *(char *)(lVar17 + lVar15 + -1) == '\0')) {
      puVar10[4] = lVar17;
      puVar10[5] = lVar15 + -1;
    }
    FUN_10a1e6d00(puVar8);
    lVar15 = 0;
    *param_1 = puVar8;
    param_1[1] = puVar10;
    do {
      if (*(long *)((long)alStack_1f8 + lVar15) != 0) {
        *(long *)((long)alStack_1f8 + lVar15 + 8) = *(long *)((long)alStack_1f8 + lVar15);
        __ZdlPv();
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
    if (bStack_1a8 == 1) {
      FUN_10a0f1ea0(&ppppppuStack_1d8);
    }
    if (bStack_170 == 1) {
      FUN_10a0f1ea0(auStack_1a0);
    }
    if ((long)uStack_158 < 0) {
      __ZdlPv(ppppppuStack_168);
    }
    if ((long)uStack_140 < 0) {
      __ZdlPv(ppppppuStack_150);
    }
    if ((long)uStack_128 < 0) {
      __ZdlPv(ppppppuStack_138);
    }
    if ((long)_auStack_110 < 0) {
      __ZdlPv(ppppppuStack_120);
    }
    goto LAB_10a2414f4;
  }
  if ((bStack_c0 & 1) != 0) {
LAB_10a240650:
    uVar12 = 2;
LAB_10a24071c:
    ppppppuStack_210 = (undefined8 *******)0x0;
    ppppppuStack_208 = (undefined8 *******)0x0;
    uStack_200 = 0;
    pppppppuVar18 = (undefined8 *******)ppppppuStack_98;
    if (-1 < (char)bStack_89) {
      pppppppuVar18 = (undefined8 *******)(ulong)bStack_89;
    }
    FUN_10a003c90(&ppppppuStack_250,(long)pppppppuVar18 + 0xb,auStack_1a0);
    pppppppuVar19 = (undefined8 *******)ppppppuStack_250;
    if (-1 < cStack_239) {
      pppppppuVar19 = &ppppppuStack_250;
    }
    if (pppppppuVar18 != (undefined8 *******)0x0) {
      _memmove(pppppppuVar19,&ppppppuStack_a0,pppppppuVar18);
    }
    puVar10 = (undefined8 *)((long)pppppppuVar19 + (long)pppppppuVar18);
    *puVar10 = 0x7463656c6665722e;
    *(undefined4 *)((long)puVar10 + 7) = 0x6e6f6974;
    *(undefined1 *)((long)puVar10 + 0xb) = 0;
    FUN_10a0f1b8c(auStack_1a0,&ppppppuStack_250,0);
    if (bStack_170 != 1) {
      if ((bStack_c0 & 1) == 0) goto LAB_10a241650;
      FUN_10a0f20c0(apppppplStack_108,auStack_f0);
      pppppppuVar18 = (undefined8 *******)apppppplStack_108[1];
      ppppppplVar6 = (long *******)apppppplStack_108[0];
      ppppppuStack_290 = (undefined8 *******)0x0;
      ppppppuStack_288 = (undefined8 *******)0x0;
      uStack_280 = 0;
      pppppppuVar19 = (undefined8 *******)(long)uStack_f8._7_1_;
      ppppppplVar9 = (long *******)apppppplStack_108[0];
      if (-1 < (long)pppppppuVar19) {
        ppppppplVar9 = apppppplStack_108;
      }
      pppppppuVar16 = (undefined8 *******)apppppplStack_108[1];
      if (-1 < (long)uStack_f8) {
        pppppppuVar16 = pppppppuVar19;
      }
      if (0x1b < (long)pppppppuVar16) {
        ppppppplVar1 = (long *******)((long)ppppppplVar9 + (long)pppppppuVar16);
        ppppppplVar5 = ppppppplVar9;
        pppppppuVar13 = pppppppuVar16;
        while (_memchr(ppppppplVar5,0x42,(long)pppppppuVar13 - 0x1b),
              ppppppplVar5 != (long *******)0x0) {
          if (((*ppppppplVar5 == (long ******)0x5f444e454b434142 &&
               ppppppplVar5[1] == (long ******)0x465f524544414853) &&
              ppppppplVar5[2] == (long ******)0x4745425f5347414c) &&
              *(int *)(ppppppplVar5 + 3) == 0x5f5f4e49) {
            if ((ppppppplVar5 != ppppppplVar1) &&
               (pppppppuVar13 = (undefined8 *******)((long)ppppppplVar5 - (long)ppppppplVar9),
               pppppppuVar13 != (undefined8 *******)0xffffffffffffffff)) {
              pppppppuVar14 = pppppppuVar16;
              if (pppppppuVar13 < pppppppuVar16) {
                pppppppuVar14 = (undefined8 *******)((long)pppppppuVar13 + 1);
              }
              goto LAB_10a240974;
            }
            break;
          }
          ppppppplVar5 = (long *******)((long)ppppppplVar5 + 1);
          pppppppuVar13 = (undefined8 *******)((long)ppppppplVar1 - (long)ppppppplVar5);
          if ((long)pppppppuVar13 < 0x1c) break;
        }
      }
      goto LAB_10a241294;
    }
    FUN_10a0f20c0(&ppppppuStack_1d8,auStack_1a0);
    ppppppuStack_208 = ppppppuStack_1d0;
    ppppppuStack_210 = ppppppuStack_1d8;
    uStack_200 = uStack_1c8;
    goto LAB_10a241468;
  }
  goto LAB_10a241564;
LAB_10a241360:
  _memchr(ppppppplVar9,0x2f,lVar15 + -0x12);
  if (ppppppplVar9 == (long *******)0x0) goto LAB_10a241438;
  if ((*ppppppplVar9 == (long ******)0x4645525f47532f2f &&
      ppppppplVar9[1] == (long ******)0x5f4e4f495443454c) &&
      *(long *)((long)ppppppplVar9 + 0xb) == 0x444e455f4e4f4954) {
    if ((ppppppplVar9 != ppppppplVar5) &&
       (pppppppuVar16 = (undefined8 *******)((long)ppppppplVar9 - (long)ppppppplVar6),
       pppppppuVar16 != (undefined8 *******)0xffffffffffffffff)) {
      if (-1 < (char)pppppppuVar19) {
        pppppppuVar18 = (undefined8 *******)((ulong)pppppppuVar19 & 0xff);
      }
      if (pppppppuVar18 < pppppppuVar16 || (long)pppppppuVar18 - (long)pppppppuVar16 == 0) {
LAB_10a2413ec:
        lVar15 = -1;
      }
      else {
        lVar15 = (long)ppppppplVar6 + (long)pppppppuVar16;
        _memchr(lVar15,10,(long)pppppppuVar18 - (long)pppppppuVar16);
        if ((lVar15 == 0) || (lVar15 - (long)ppppppplVar6 == -1)) goto LAB_10a2413ec;
        lVar15 = ((lVar15 - (long)ppppppplVar6) - (long)pppppppuVar13) + 1;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&ppppppuStack_1d8,apppppplStack_108,pppppppuVar13,lVar15,&ppppppuStack_120);
      pppppppuVar18 = (undefined8 *******)ppppppuStack_1d0;
      pppppppuVar19 = (undefined8 *******)ppppppuStack_1d8;
      if (-1 < (long)uStack_1c8) {
        pppppppuVar18 = (undefined8 *******)(uStack_1c8 >> 0x38);
        pppppppuVar19 = &ppppppuStack_1d8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppuStack_290,pppppppuVar19,pppppppuVar18);
      if ((long)uStack_1c8 < 0) {
        __ZdlPv(ppppppuStack_1d8);
      }
    }
    goto LAB_10a241438;
  }
  ppppppplVar9 = (long *******)((long)ppppppplVar9 + 1);
  lVar15 = (long)ppppppplVar5 - (long)ppppppplVar9;
  if (lVar15 < 0x13) goto LAB_10a241438;
  goto LAB_10a241360;
  while (pppppppuVar14 = (undefined8 *******)((long)pppppppuVar13 + -1),
        *(char *)(((long)ppppppplVar9 - 1U) + (long)pppppppuVar13) != '\n') {
LAB_10a240974:
    pppppppuVar13 = pppppppuVar14;
    if (pppppppuVar13 == (undefined8 *******)0x0) goto LAB_10a240994;
  }
  if (pppppppuVar13 <= pppppppuVar16) {
LAB_10a240994:
    lVar15 = (long)pppppppuVar16 - (long)pppppppuVar13;
    if (0x19 < lVar15) {
      ppppppplVar5 = (long *******)((long)ppppppplVar9 + (long)pppppppuVar13);
      while (_memchr(ppppppplVar5,0x42,lVar15 + -0x19), ppppppplVar5 != (long *******)0x0) {
        if (((*ppppppplVar5 == (long ******)0x5f444e454b434142 &&
             ppppppplVar5[1] == (long ******)0x465f524544414853) &&
            ppppppplVar5[2] == (long ******)0x444e455f5347414c) &&
            *(short *)(ppppppplVar5 + 3) == 0x5f5f) {
          if ((ppppppplVar5 != ppppppplVar1) &&
             (pppppppuVar14 = (undefined8 *******)((long)ppppppplVar5 - (long)ppppppplVar9),
             pppppppuVar14 != (undefined8 *******)0xffffffffffffffff)) {
            if (pppppppuVar16 < pppppppuVar14 || (long)pppppppuVar16 - (long)pppppppuVar14 == 0) {
LAB_10a241264:
              lVar15 = -1;
            }
            else {
              lVar15 = (long)ppppppplVar9 + (long)pppppppuVar14;
              _memchr(lVar15,10,(long)pppppppuVar16 - (long)pppppppuVar14);
              if ((lVar15 == 0) || (lVar15 - (long)ppppppplVar9 == -1)) goto LAB_10a241264;
              lVar15 = ((lVar15 - (long)ppppppplVar9) - (long)pppppppuVar13) + 1;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                      (&ppppppuStack_1d8,apppppplStack_108,pppppppuVar13,lVar15,&ppppppuStack_120);
            pppppppuVar19 = (undefined8 *******)(uStack_f8 >> 0x38);
            ppppppuStack_288 = ppppppuStack_1d0;
            ppppppuStack_290 = ppppppuStack_1d8;
            uStack_280 = uStack_1c8;
            pppppppuVar18 = (undefined8 *******)apppppplStack_108[1];
            ppppppplVar6 = (long *******)apppppplStack_108[0];
          }
          break;
        }
        ppppppplVar5 = (long *******)((long)ppppppplVar5 + 1);
        lVar15 = (long)ppppppplVar1 - (long)ppppppplVar5;
        if (lVar15 < 0x1a) break;
      }
    }
  }
LAB_10a241294:
  pppppppuVar16 = pppppppuVar18;
  if (-1 < (char)pppppppuVar19) {
    pppppppuVar16 = pppppppuVar19;
    ppppppplVar6 = apppppplStack_108;
  }
  if (0x14 < (long)pppppppuVar16) {
    ppppppplVar5 = (long *******)((long)ppppppplVar6 + (long)pppppppuVar16);
    ppppppplVar9 = ppppppplVar6;
    pppppppuVar13 = pppppppuVar16;
    while (_memchr(ppppppplVar9,0x2f,(long)pppppppuVar13 - 0x14), ppppppplVar9 != (long *******)0x0)
    {
      if ((*ppppppplVar9 == (long ******)0x4645525f47532f2f &&
          ppppppplVar9[1] == (long ******)0x5f4e4f495443454c) &&
          *(long *)((long)ppppppplVar9 + 0xd) == 0x4e494745425f4e4f) {
        if ((((ppppppplVar9 != ppppppplVar5) &&
             (pppppppuVar13 = (undefined8 *******)((long)ppppppplVar9 - (long)ppppppplVar6),
             pppppppuVar13 != (undefined8 *******)0xffffffffffffffff)) &&
            (lVar15 = (long)pppppppuVar16 - (long)pppppppuVar13, pppppppuVar13 <= pppppppuVar16)) &&
           (0x12 < lVar15)) {
          ppppppplVar9 = (long *******)((long)ppppppplVar6 + (long)pppppppuVar13);
          goto LAB_10a241360;
        }
        break;
      }
      ppppppplVar9 = (long *******)((long)ppppppplVar9 + 1);
      pppppppuVar13 = (undefined8 *******)((long)ppppppplVar5 - (long)ppppppplVar9);
      if ((long)pppppppuVar13 < 0x15) break;
    }
  }
LAB_10a241438:
  ppppppuStack_208 = ppppppuStack_288;
  ppppppuStack_210 = ppppppuStack_290;
  uStack_200 = uStack_280;
  uStack_280 = uStack_280 & 0xffffffffffffff;
  ppppppuStack_290 = (undefined8 ******)((ulong)ppppppuStack_290 & 0xffffffffffffff00);
LAB_10a241468:
  if ((bStack_c0 & 1) == 0) goto LAB_10a241650;
  FUN_10a0f1f4c(&ppppppuStack_1d8,auStack_f0);
  puVar10 = (undefined8 *)0xc0;
  __Znwm();
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar8 = puVar10 + 3;
  *puVar10 = &PTR_DAT_110bb7098;
  FUN_10a275e88(puVar8,uVar12,&ppppppuStack_1d8,&ppppppuStack_210,param_3);
  *param_1 = puVar8;
  param_1[1] = puVar10;
  if ((undefined8 *******)ppppppuStack_1d8 != (undefined8 *******)0x0) {
    ppppppuStack_1d0 = ppppppuStack_1d8;
    __ZdlPv();
  }
  if (bStack_170 == 1) {
    FUN_10a0f1ea0(auStack_1a0);
  }
  pppppppuVar18 = (undefined8 *******)ppppppuStack_210;
  uVar3 = uStack_200;
  if (cStack_239 < '\0') {
    __ZdlPv(ppppppuStack_250);
    pppppppuVar18 = (undefined8 *******)ppppppuStack_210;
    uVar3 = uStack_200;
  }
joined_r0x00010a24120c:
  if ((long)uVar3 < 0) {
    __ZdlPv(pppppppuVar18);
  }
LAB_10a2414f4:
  if (bStack_c0 == 1) {
    FUN_10a0f1ea0(auStack_f0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a241564:
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppppuStack_1d8,&UNK_10f646c7f,&ppppppuStack_a0);
  FUN_10a012db0(auStack_1a0,&ppppppuStack_1d8,&DAT_10f3b3c06);
  if ((long)uStack_1c8 < 0) {
    __ZdlPv(ppppppuStack_1d8);
  }
  FUN_10a1084cc(auStack_1a0);
LAB_10a241650:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a241654);
  (*pcVar4)();
}



/* Entry: 10a241a50; end: 10a241b67;  */

void FUN_10a241a50(undefined1 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  plVar4 = *(long **)(param_2 + 0x50);
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3);
  lVar5 = *plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar4 == (long *)0x0) {
    if (lVar5 != 0) goto LAB_10a241ae4;
  }
  else {
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 != 0) {
LAB_10a241ae4:
      FUN_10a269cfc(param_1);
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
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      goto LAB_10a241b2c;
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
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *param_1 = 0;
  param_1[0x78] = 0;
LAB_10a241b2c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 8);
  return;
}



/* Entry: 10a241b68; end: 10a241c2b;  */

void FUN_10a241b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  FUN_10a275b74(auStack_48,&uStack_31,param_3);
  FUN_10a2745d0(uVar5,param_2,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  return;
}



/* Entry: 10a241c2c; end: 10a242057;  */

void FUN_10a241c2c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [40];
  long lStack_a8;
  long *plStack_a0;
  undefined1 auStack_90 [8];
  long *plStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 uStack_51;
  
  __ZNSt3__15mutex4lockEv(param_2 + 8);
  plVar6 = *(long **)(param_2 + 0x50);
  (**(code **)(*plVar6 + 0x10))(plVar6,param_3);
  lVar8 = *plVar6;
  plVar6 = (long *)plVar6[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x68) == 0)) {
    bVar5 = true;
  }
  else {
    lVar7 = *(long *)(lVar8 + 0x70);
    *param_1 = *(long *)(lVar8 + 0x68);
    param_1[1] = lVar7;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    bVar5 = false;
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 8);
  if (bVar5) {
    FUN_10a1e6af0(&uStack_110,param_4,param_5);
    FUN_10a203dec(&lStack_70,&puStack_80,&uStack_110);
    func_0x00010787ad88(&uStack_f8);
    puStack_80 = &uStack_110;
    FUN_10a1f4560(&puStack_80);
    __ZNSt3__15mutex4lockEv(param_2 + 8);
    plVar6 = *(long **)(param_2 + 0x50);
    (**(code **)(*plVar6 + 0x10))(plVar6,param_3);
    puVar2 = (undefined8 *)*plVar6;
    plStack_78 = (long *)plVar6[1];
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puStack_80 = puVar2;
    plVar6 = plStack_78;
    if (puVar2 == (undefined8 *)0x0) {
      param_1[1] = (long)plStack_68;
      *param_1 = lStack_70;
      lStack_70 = 0;
      plStack_68 = (long *)0x0;
    }
    else if (puVar2[0xd] == 0) {
      uVar9 = *(undefined8 *)(param_2 + 0x50);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_110,*puVar2,puVar2[1]);
      }
      else {
        uStack_108 = puVar2[1];
        uStack_110 = *puVar2;
        lStack_100 = puVar2[2];
      }
      if (*(char *)((long)puVar2 + 0x2f) < '\0') {
        func_0x000107c3192c(&uStack_f8,puVar2[3],puVar2[4]);
      }
      else {
        uStack_f0 = puVar2[4];
        uStack_f8 = puVar2[3];
        lStack_e8 = puVar2[5];
      }
      uStack_e0 = *(undefined4 *)(puVar2 + 6);
      uStack_d8 = *(undefined4 *)(puVar2 + 7);
      FUN_10a274fd4(auStack_d0,puVar2 + 8);
      plStack_a0 = plStack_68;
      lStack_a8 = lStack_70;
      if (plStack_68 != (long *)0x0) {
        plVar6 = plStack_68 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = *plVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_10a275b74(auStack_90,&uStack_51,&uStack_110);
      FUN_10a2745d0(uVar9,param_3,auStack_90);
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88 + 1;
        do {
          lVar8 = *plVar6;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *plVar6 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
      plVar6 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        plVar1 = plStack_a0 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      FUN_10a1f7334(auStack_d0);
      if (lStack_e8 < 0) {
        __ZdlPv(uStack_f8);
      }
      if (lStack_100 < 0) {
        __ZdlPv(uStack_110);
      }
      param_1[1] = (long)plStack_68;
      *param_1 = lStack_70;
      lStack_70 = 0;
      plStack_68 = (long *)0x0;
      plVar6 = plStack_78;
    }
    else {
      lVar8 = puVar2[0xe];
      *param_1 = puVar2[0xd];
      param_1[1] = lVar8;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    plStack_78 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 8);
    plVar6 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  return;
}



/* Entry: 10a242058; end: 10a2420a7;  */

undefined8 * FUN_10a242058(undefined8 *param_1)

{
  func_0x00010a275b1c(param_1 + 0xd);
  FUN_10a1f7334(param_1 + 8);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a2420a8; end: 10a2421c7;  */

void FUN_10a2420a8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  FUN_10a0f1b8c(param_1,param_2,0);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x000107c2b054(auStack_80,&UNK_10f6483a0);
    FUN_10a012db0(auStack_68,auStack_80,&UNK_10f646c7f);
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    puVar4 = auStack_68;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,puVar2,uVar1);
    uStack_48 = puVar4[1];
    uStack_50 = *puVar4;
    uStack_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    FUN_10a012db0(auStack_38,&uStack_50,&DAT_10f3b3c06);
    FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a242164);
    (*pcVar3)();
  }
  return;
}



/* Entry: 10a2421c8; end: 10a24227b;  */

void FUN_10a2421c8(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (param_1 == 0) goto LAB_10a242204;
  lVar1 = *(long *)(*(long *)(param_1 + 0x100) + 0x260);
  puStack_40 = &UNK_10f653c20;
  uStack_38 = 0x21;
  while( true ) {
    if (lVar1 != 0) {
      return;
    }
    FUN_10a0edfc4(&puStack_40);
LAB_10a242204:
    ppuVar2 = &PTR___tlv_bootstrap_11340dee8;
    (*(code *)PTR___tlv_bootstrap_11340dee8)();
    puVar3 = *ppuVar2;
    if (puVar3 != (undefined *)0x0) break;
    FUN_10a3ca004();
    pbVar4 = (byte *)0x113836510;
    FUN_10ad0621c();
    uVar5 = (ulong)(*pbVar4 >> 4 & 4);
    if (*(long *)(puVar3 + uVar5 * 8 + 0x38) != 0) {
      return;
    }
    FUN_10a3ca05c(puVar3,uVar5);
    lVar1 = *(long *)(puVar3 + uVar5 * 8 + 0x38);
    puStack_40 = &UNK_10f646d35;
    uStack_38 = 0x26;
  }
  return;
}



/* Entry: 10a24227c; end: 10a243113;  */

undefined1 * FUN_10a24227c(undefined1 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined *puVar22;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long *plStack_108;
  undefined1 uStack_f9;
  long *plStack_f8;
  undefined *puStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *apuStack_b8 [2];
  undefined *puStack_a8;
  char cStack_a1;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined4 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  _bzero(param_1 + 8,0x220);
  *(long *)(param_1 + 0x228) = param_2;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined1 **)(param_1 + 0x298) = param_1 + 0x2a0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  param_1[0x2c8] = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  param_1[0x2e8] = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  param_1[0x308] = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  param_1[0x328] = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  puStack_f0 = &UNK_10f646d84;
  plStack_e8 = (long *)0x1a;
  if (param_2 == 0) {
    FUN_10a0edfc4(&puStack_f0);
    goto LAB_10a242e18;
  }
  ppuVar5 = &PTR___tlv_bootstrap_11340dee8;
  (*(code *)PTR___tlv_bootstrap_11340dee8)();
  puVar22 = *ppuVar5;
  *ppuVar5 = param_1;
  *param_1 = 1;
  lVar20 = 0x2b0;
  do {
    FUN_10a0cf2cc(param_1 + lVar20,0,0,0);
    (param_1 + lVar20)[0x18] = 0;
    lVar20 = lVar20 + 0x20;
  } while (lVar20 != 0x330);
  puVar6 = (undefined8 *)0x58;
  __Znwm();
  *puVar6 = &PTR_FUN_110bb5aa0;
  puVar6[1] = 0x32aaaba7;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[10] = 0;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  *puVar7 = &PTR_DAT_110bb6f88;
  puVar7[2] = puVar7 + 2;
  puVar7[3] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 9) = 0x3f800000;
  *(undefined4 *)(puVar7 + 1) = 0x100;
  *(undefined1 *)(puVar7 + 10) = 0;
  puVar6[9] = puVar7;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  *puVar7 = &PTR_FUN_110bb6fe8;
  puVar7[2] = puVar7 + 2;
  puVar7[3] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 9) = 0x3f800000;
  *(undefined4 *)(puVar7 + 1) = 0x100;
  *(undefined1 *)(puVar7 + 10) = 0;
  puVar6[10] = puVar7;
  plVar8 = *(long **)(param_1 + 0x218);
  *(undefined8 **)(param_1 + 0x218) = puVar6;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  puVar6 = (undefined8 *)0x50;
  __Znwm();
  puVar6[2] = 0x32aaaba7;
  *puVar6 = &PTR_FUN_110bb5a80;
  puVar6[1] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[9] = 0;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  *puVar7 = &PTR_FUN_110bb6ed8;
  puVar7[2] = puVar7 + 2;
  puVar7[3] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 9) = 0x3f800000;
  *(undefined4 *)(puVar7 + 1) = 0x200;
  *(undefined1 *)(puVar7 + 10) = 1;
  puVar6[1] = puVar7;
  plVar8 = *(long **)(param_1 + 0x220);
  *(undefined8 **)(param_1 + 0x220) = puVar6;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  (**(code **)(**(long **)(param_1 + 0x228) + 0x68))();
  uVar9 = 0x30;
  __Znwm();
  FUN_10a30cd1c();
  plVar8 = *(long **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x278) = uVar9;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  plVar8 = *(long **)(param_1 + 0x228);
  plStack_e8 = (long *)0x100000004;
  puStack_f0 = (undefined *)0x400000000;
  puStack_d8 = (undefined *)0x100000000;
  puStack_e0 = (undefined *)0x4;
  puStack_d0 = (undefined *)0x0;
  puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
  puStack_c0 = &UNK_10e4a28f4;
  (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_f0);
  FUN_10a099d88(param_1 + 0xb8,plVar8);
  plVar8 = *(long **)(param_1 + 0x228);
  (**(code **)(*plVar8 + 0x68))();
  if (*(char *)((long)plVar8 + 0x85) == '\x01') {
    plVar8 = *(long **)(param_1 + 0x228);
    plStack_e8 = (long *)0x100000004;
    puStack_f0 = (undefined *)0x400000001;
    puStack_d8 = (undefined *)0x100000000;
    puStack_e0 = (undefined *)0x4;
    puStack_d0 = (undefined *)0x0;
    puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
    puStack_c0 = &UNK_10e4a28f4;
    (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_f0);
    FUN_10a099d88(param_1 + 200,plVar8);
  }
  plVar8 = *(long **)(param_1 + 0x228);
  (**(code **)(*plVar8 + 0x68))();
  if (*(char *)((long)plVar8 + 0x84) == '\x01') {
    plVar8 = *(long **)(param_1 + 0x228);
    plStack_e8 = (long *)0x100000004;
    puStack_f0 = (undefined *)0x400000002;
    puStack_d8 = (undefined *)0x100000000;
    puStack_e0 = (undefined *)0x4;
    puStack_d0 = (undefined *)0x0;
    puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
    puStack_c0 = &UNK_10e4a28f4;
    (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_f0);
    FUN_10a099d88(param_1 + 0xd8,plVar8);
  }
  plVar8 = *(long **)(param_1 + 0x228);
  plStack_e8 = (long *)0x100000004;
  puStack_f0 = (undefined *)0x400000003;
  puStack_d8 = (undefined *)0x100000000;
  puStack_e0 = (undefined *)0x4;
  puStack_d0 = (undefined *)0x0;
  puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
  puStack_c0 = &UNK_10e4a28f4;
  (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_f0);
  FUN_10a099d88(param_1 + 0xe8,plVar8);
  plVar8 = *(long **)(param_1 + 0x228);
  plStack_e8 = (long *)0x100000001;
  puStack_f0 = (undefined *)0x100000000;
  puStack_d8 = (undefined *)0x100000000;
  puStack_e0 = (undefined *)0x4;
  puStack_d0 = (undefined *)0x0;
  puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
  puStack_c0 = &UNK_10e4a2200;
  (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_f0);
  FUN_10a099d88(param_1 + 0x108,plVar8);
  plVar8 = *(long **)(param_1 + 0x228);
  plStack_e8 = (long *)0x100000001;
  puStack_f0 = (undefined *)0x100000000;
  puStack_d8 = (undefined *)0x100000000;
  puStack_e0 = (undefined *)0x4;
  puStack_d0 = (undefined *)0x0;
  puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
  puStack_c0 = &UNK_10e4a2204;
  (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_f0);
  FUN_10a099d88(param_1 + 0xf8,plVar8);
  plVar8 = *(long **)(param_1 + 0x228);
  plStack_e8 = (long *)0x100000001;
  puStack_f0 = (undefined *)0x100000000;
  puStack_d8 = (undefined *)0x100000000;
  puStack_e0 = (undefined *)0x4;
  puStack_d0 = (undefined *)0x0;
  puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
  puStack_c0 = &UNK_10e4a2208;
  (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_f0);
  FUN_10a099d88(param_1 + 0x128,plVar8);
  plVar8 = *(long **)(param_1 + 0x228);
  plStack_e8 = (long *)((long)&MACH_HEADER.magic + 1);
  puStack_f0 = (undefined *)0x100000000;
  puStack_d8 = (undefined *)0x100000000;
  puStack_e0 = (undefined *)0x4;
  puStack_d0 = (undefined *)0x0;
  puStack_c8 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff00);
  puStack_c0 = &UNK_10e4a220c;
  (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_f0);
  FUN_10a099d88(param_1 + 0x118,plVar8);
  puVar6 = (undefined8 *)0xa8;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110bb7100;
  puVar6[3] = 0x32aaaba7;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xe] = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0x3f800000;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  *(undefined4 *)(puVar6 + 0x14) = 0x3f800000;
  plVar8 = *(long **)(param_1 + 0x1d8);
  *(undefined8 **)(param_1 + 0x1d0) = puVar6 + 3;
  *(undefined8 **)(param_1 + 0x1d8) = puVar6;
  if (plVar8 != (long *)0x0) {
    plVar21 = plVar8 + 1;
    do {
      lVar20 = *plVar21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar20 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar6 = (undefined8 *)0x40;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110bb7150;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[7] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  plVar8 = *(long **)(param_1 + 0x1f8);
  *(undefined8 **)(param_1 + 0x1f0) = puVar6 + 3;
  *(undefined8 **)(param_1 + 0x1f8) = puVar6;
  if (plVar8 != (long *)0x0) {
    plVar21 = plVar8 + 1;
    do {
      lVar20 = *plVar21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar20 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  piVar18 = *(int **)(param_1 + 0x1c0);
  if (piVar18 == (int *)0x0) {
    piVar18 = (int *)0x58;
    __Znwm();
    *piVar18 = 0;
    piVar18[4] = 0;
    piVar18[5] = 0;
    piVar18[2] = 0;
    piVar18[3] = 0;
    piVar18[8] = 0;
    piVar18[9] = 0;
    piVar18[6] = 0;
    piVar18[7] = 0;
    piVar18[10] = 0x3f800000;
    piVar18[0xe] = 0;
    piVar18[0xf] = 0;
    piVar18[0xc] = 0;
    piVar18[0xd] = 0;
    piVar18[0x12] = 0;
    piVar18[0x13] = 0;
    piVar18[0x10] = 0;
    piVar18[0x11] = 0;
    piVar18[0x14] = 0x3f800000;
    func_0x00010abdb494();
    iVar12 = iRam0000000113306bf0 + 1;
    *piVar18 = iRam0000000113306bf0;
    iRam0000000113306bf0 = iVar12;
    func_0x00010a2764dc(param_1 + 0x1c0,piVar18);
    piVar18 = *(int **)(param_1 + 0x1c0);
  }
  func_0x00010abdb494(piVar18 + 2);
  iVar12 = iRam0000000113306bf0 + 1;
  *piVar18 = iRam0000000113306bf0;
  iRam0000000113306bf0 = iVar12;
  uVar9 = *(undefined8 *)(param_1 + 0x228);
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  puVar6[2] = 0;
  puVar6[3] = &PTR_FUN_110bb6ac0;
  puVar6[4] = 0x32aaaba7;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[10] = 0;
  puVar6[9] = 0;
  puVar6[0xb] = 0;
  puVar6[0xd] = puVar6 + 0xd;
  puVar6[0xe] = puVar6 + 0xd;
  puVar6[0x10] = 0;
  puVar6[0xf] = 0;
  puVar6[0x12] = 0;
  puVar6[0x11] = 0;
  puVar6[0x13] = 0;
  *(undefined4 *)(puVar6 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar6 + 0xc) = 0x40;
  *puVar6 = &PTR_FUN_110bb6218;
  puVar6[1] = 0;
  puVar6[0x15] = uVar9;
  plVar8 = (long *)0x20;
  __Znwm();
  plVar21 = plVar8 + 1;
  *plVar21 = 0;
  *plVar8 = (long)&PTR_FUN_110bb7598;
  plVar8[2] = 0;
  plVar8[3] = (long)puVar6;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar3) {
      *plVar21 = *plVar21 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar8 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar6[1] = puVar6;
  puVar6[2] = plVar8;
  do {
    lVar20 = *plVar21;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar3) {
      *plVar21 = lVar20 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar20 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  plVar21 = *(long **)(param_1 + 0x1e8);
  *(undefined8 **)(param_1 + 0x1e0) = puVar6;
  *(long **)(param_1 + 0x1e8) = plVar8;
  if (plVar21 != (long *)0x0) {
    plVar8 = plVar21 + 1;
    do {
      lVar20 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar20 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
    }
  }
  ppuVar10 = &puStack_f0;
  FUN_10a0d0194(&lStack_110);
  FUN_10ab6e898();
  if (*(char *)((long)ppuVar10 + 0x17) < '\0') {
    ppuVar11 = &puStack_f0;
    func_0x000107c3192c(ppuVar11,*ppuVar10,ppuVar10[1]);
  }
  else {
    plStack_e8 = (long *)ppuVar10[1];
    puStack_f0 = *ppuVar10;
    puStack_e0 = ppuVar10[2];
    ppuVar11 = ppuVar10;
  }
  puStack_d8 = ppuVar10[3];
  puStack_c8 = ppuVar10[5];
  puStack_d0 = ppuVar10[4];
  puStack_c0 = (undefined *)CONCAT44(puStack_c0._4_4_,*(undefined4 *)(ppuVar10 + 6));
  FUN_10ab6f020();
  if (*(char *)((long)ppuVar11 + 0x17) < '\0') {
    func_0x000107c3192c(apuStack_b8,*ppuVar11,ppuVar11[1]);
  }
  else {
    puStack_a8 = ppuVar11[2];
    apuStack_b8[1] = ppuVar11[1];
    apuStack_b8[0] = *ppuVar11;
  }
  puStack_a0 = ppuVar11[3];
  puStack_90 = ppuVar11[5];
  puStack_98 = ppuVar11[4];
  uStack_88 = *(undefined4 *)(ppuVar11 + 6);
  FUN_10ab6f520(&uStack_158,&puStack_f0,2);
  lVar20 = lStack_110;
  *(undefined4 *)(lStack_110 + 0xf0) = (undefined4)uStack_158;
  if ((undefined8 *)(lStack_110 + 0xf0) != &uStack_158) {
    FUN_10a1903c4(lStack_110 + 0xf8,lStack_150,lStack_148,
                  (lStack_148 - lStack_150 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar20 + 0x118) = uStack_130;
  *(undefined8 *)(lVar20 + 0x110) = uStack_138;
  *(undefined8 *)(lVar20 + 0x128) = uStack_120;
  *(undefined8 *)(lVar20 + 0x120) = uStack_128;
  *(undefined8 *)(lVar20 + 0x130) = uStack_118;
  plStack_f8 = &lStack_150;
  func_0x00010a190844(&plStack_f8);
  lVar20 = 0;
  do {
    if ((&cStack_a1)[lVar20] < '\0') {
      __ZdlPv(*(undefined8 *)((long)apuStack_b8 + lVar20));
    }
    lVar20 = lVar20 + -0x38;
  } while (lVar20 != -0x70);
  uVar17 = *(uint *)(lStack_110 + 0x110);
  if (uVar17 == 0xffffffff) {
    lVar20 = 0;
LAB_10a242b58:
    uVar17 = *(uint *)(lStack_110 + 0x120);
    if (uVar17 == 0xffffffff) {
      lVar19 = 0;
    }
    else {
      uVar14 = (*(long *)(lStack_110 + 0x100) - *(long *)(lStack_110 + 0xf8) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar14 < uVar17 || uVar14 - uVar17 == 0) {
        FUN_10ab725fc();
        goto LAB_10a242e18;
      }
      lVar19 = *(long *)(lStack_110 + 0xf8) + (ulong)uVar17 * 0x38;
    }
    lVar13 = *(long *)(lStack_110 + 0x10);
    *(undefined8 *)(lStack_110 + 0xe8) = 0x100000000;
    uVar14 = (long)*(int *)(lStack_110 + 0xf0) * 4;
    uVar15 = *(long *)(lStack_110 + 0x18) - lVar13;
    if (uVar14 < uVar15 || uVar14 - uVar15 == 0) {
      if (uVar14 < uVar15) {
        *(ulong *)(lStack_110 + 0x18) = lVar13 + uVar14;
      }
    }
    else {
      func_0x000107c27d58((long *)(lStack_110 + 0x10),uVar14 - uVar15);
    }
    uVar17 = *(int *)(lVar20 + 0x24) - 1;
    if (uVar17 < 7) {
      iVar12 = *(int *)(&UNK_10e4a7f50 + (ulong)uVar17 * 4);
    }
    else {
      iVar12 = 0;
    }
    if (*(int *)(lVar20 + 0x28) * iVar12 == 8) {
      puVar6 = (undefined8 *)(*(long *)(lStack_110 + 0x10) + (ulong)*(uint *)(lVar20 + 0x30));
      uVar14 = (ulong)*(uint *)(lStack_110 + 0xf0);
    }
    else {
      puVar6 = (undefined8 *)0x0;
      uVar14 = 0;
    }
    uVar17 = *(int *)(lVar19 + 0x24) - 1;
    if (uVar17 < 7) {
      iVar12 = *(int *)(&UNK_10e4a7f50 + (ulong)uVar17 * 4);
    }
    else {
      iVar12 = 0;
    }
    if (*(int *)(lVar19 + 0x28) * iVar12 == 8) {
      puVar7 = (undefined8 *)(*(long *)(lStack_110 + 0x10) + (ulong)*(uint *)(lVar19 + 0x30));
      uVar15 = (ulong)*(uint *)(lStack_110 + 0xf0);
    }
    else {
      puVar7 = (undefined8 *)0x0;
      uVar15 = 0;
    }
    lVar20 = 0;
    uVar9 = NEON_fmov(0x3f800000,4);
    do {
      uVar16 = *(undefined8 *)(&UNK_10e4a2210 + lVar20);
      *puVar6 = uVar16;
      *puVar7 = CONCAT44(((float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar9 >> 0x20)) * 0.5,
                         ((float)uVar16 + (float)uVar9) * 0.5);
      lVar20 = lVar20 + 8;
      puVar7 = (undefined8 *)((long)puVar7 + uVar15);
      puVar6 = (undefined8 *)((long)puVar6 + uVar14);
    } while (lVar20 != 0x20);
    uStack_158 = 0;
    plStack_f8 = (long *)((ulong)plStack_f8 & 0xffffffff00000000);
    FUN_10a276954(&puStack_f0,&uStack_f9,&uStack_158,&plStack_f8,&lStack_110);
    func_0x00010a2432e4(param_1 + 0x208,&puStack_f0);
    plVar8 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar21 = plStack_e8 + 1;
      do {
        lVar20 = *plVar21;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar3) {
          *plVar21 = lVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = *(long **)(param_1 + 0x228);
    (**(code **)(*plVar8 + 0x50))();
    if (plVar8 != (long *)0x0) {
      if (*(int *)((long)plVar8 + 0x734) == 1) {
        uVar17 = 1;
        if ((1 < (int)plVar8[0xe7] - 0x407U) && ((int)plVar8[0xe7] != 0x2d)) goto LAB_10a242d50;
      }
      else {
LAB_10a242d50:
        uVar17 = (uint)(*(int *)((long)plVar8 + 0x734) == 2);
      }
      func_0x00010a0172c0();
      if ((uVar17 & (uint)plVar8) == 1) {
        uVar9 = 0x8c0;
        __Znwm(0x8c0);
        FUN_10a016cfc();
        FUN_10a275fe4(param_1 + 0x1c8,uVar9);
      }
    }
    if (plStack_108 != (long *)0x0) {
      plVar8 = plStack_108 + 1;
      do {
        lVar20 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
      }
    }
    *ppuVar5 = puVar22;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else {
    uVar14 = (*(long *)(lStack_110 + 0x100) - *(long *)(lStack_110 + 0xf8) >> 3) *
             0x6db6db6db6db6db7;
    if (uVar17 <= uVar14 && uVar14 - uVar17 != 0) {
      lVar20 = *(long *)(lStack_110 + 0xf8) + (ulong)uVar17 * 0x38;
      goto LAB_10a242b58;
    }
  }
  FUN_10ab725fc();
LAB_10a242e18:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a242e1c);
  (*pcVar4)();
}



/* Entry: 10a243114; end: 10a243347;  */

long FUN_10a243114(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    lVar1 = *(long *)(param_1 + lVar3 + 0x310);
    if (lVar1 != 0) {
      *(long *)(param_1 + lVar3 + 0x318) = lVar1;
      __ZdlPv();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != -0x80);
  func_0x000107c27bf0(param_1 + 0x298,*(undefined8 *)(param_1 + 0x2a0));
  plVar2 = *(long **)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x278) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(long *)(param_1 + 0x268) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a276630(param_1 + 0x238);
  plVar2 = *(long **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x220) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0cfa6c(param_1 + 0x208);
  plVar2 = *(long **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a2765d8(param_1 + 0x1f0);
  func_0x00010a276580(param_1 + 0x1e0);
  func_0x00010a276528(param_1 + 0x1d0);
  FUN_10a275fe4(param_1 + 0x1c8,0);
  func_0x00010a2764dc(param_1 + 0x1c0,0);
  func_0x00010a276494(param_1 + 0x1b8,0);
  func_0x00010a276454(param_1 + 0x1b0,0);
  func_0x00010a276414(param_1 + 0x1a8,0);
  func_0x00010a2763d4(param_1 + 0x1a0,0);
  FUN_10a2763ac(param_1 + 0x198,0);
  FUN_10a276138(param_1 + 400,0);
  FUN_10a2760bc(param_1 + 0x188,0);
  func_0x00010a276064(param_1 + 0x178);
  func_0x00010a276064(param_1 + 0x168);
  func_0x00010a27600c(param_1 + 0x158);
  FUN_10a0617bc(param_1 + 0x148);
  FUN_10a0617bc(param_1 + 0x138);
  lVar3 = 0x128;
  do {
    func_0x00010a0523dc(param_1 + lVar3);
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0xa8);
  do {
    func_0x00010a05248c(param_1 + lVar3);
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0x78);
  do {
    func_0x00010a05248c(param_1 + lVar3);
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -8);
  return param_1;
}



/* Entry: 10a243348; end: 10a24380b;  */

/* WARNING: Removing unreachable block (ram,0x00010a2435c8) */
/* WARNING: Removing unreachable block (ram,0x00010a2435cc) */
/* WARNING: Removing unreachable block (ram,0x00010a2435d4) */
/* WARNING: Removing unreachable block (ram,0x00010a2435dc) */
/* WARNING: Removing unreachable block (ram,0x00010a2435e0) */

long * FUN_10a243348(long param_1,uint param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long *plVar8;
  long *plVar9;
  undefined1 **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 **ppuVar16;
  undefined **ppuVar17;
  undefined1 *puStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined1 auStack_f8 [8];
  long *plStack_f0;
  undefined1 auStack_e8 [8];
  long *plStack_e0;
  code *pcStack_d8;
  undefined **appuStack_d0 [7];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  ppuVar10 = &puStack_130;
  ppuVar16 = &puStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 < 8) {
    plVar14 = (long *)(param_1 + (ulong)param_2 * 0x10 + 8);
    if (*plVar14 == 0) {
      ppuVar7 = (undefined **)0x2c8;
      __Znwm();
      ppuVar17 = ppuVar7 + 1;
      ppuVar7[2] = (undefined *)0x0;
      *ppuVar17 = (undefined *)0x0;
      *ppuVar7 = (undefined *)&PTR_FUN_110bb71a0;
      ppuVar1 = ppuVar7 + 3;
      ppuVar7[0x55] = (undefined *)&PTR_FUN_110c383b8;
      ppuVar7[0x57] = (undefined *)0x0;
      ppuVar7[0x56] = (undefined *)0x0;
      *(undefined2 *)(ppuVar7 + 0x58) = 0x100;
      FUN_10a1da04c(ppuVar1,&PTR_PTR_110c5ebe8,0);
      ppuVar7[3] = (undefined *)&PTR_DAT_110c5e9a0;
      ppuVar7[5] = (undefined *)&PTR_FUN_110c5ead0;
      ppuVar7[8] = (undefined *)&PTR_DAT_110c5eb00;
      ppuVar7[0x55] = (undefined *)&PTR_DAT_110c5eba8;
      ppuVar7[0x18] = (undefined *)&PTR_FUN_110c5eb58;
      *(char *)(ppuVar7 + 0x54) = (char)param_2;
      ppuVar11 = ppuVar7 + 0xb;
      ppuStack_118 = ppuVar1;
      ppuStack_110 = ppuVar7;
      FUN_10a276a5c(ppuVar7,ppuVar11,ppuVar1);
      plVar8 = (long *)0x2c0;
      __Znwm();
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_DAT_110b9fda0;
      plVar2 = plVar8 + 3;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar5) {
          *ppuVar17 = *ppuVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar9 = plVar8;
      ppuStack_98 = ppuVar1;
      ppuStack_90 = ppuVar7;
      func_0x00010a0fda30();
      FUN_10ab6a888(plVar2,0,&ppuStack_98,plVar9,ppuVar11);
      do {
        puVar12 = *ppuVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar5) {
          *ppuVar17 = puVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar12 == (undefined *)0x0) {
        (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
      }
      plStack_108 = plVar2;
      plStack_100 = plVar8;
      FUN_10a05b2a8(&plStack_108,plVar8 + 8,plVar2);
      FUN_10a05b04c(auStack_f8,&plStack_108);
      plVar2 = plStack_100;
      if (plStack_100 != (long *)0x0) {
        plVar8 = plStack_100 + 1;
        do {
          lVar13 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      if (plStack_f0 == (long *)0x0) {
        plStack_e0 = (long *)0x0;
      }
      else {
        plVar2 = plStack_f0 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plStack_e0 = plStack_f0;
        if (plStack_f0 != (long *)0x0) {
          plVar2 = plStack_f0 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      uStack_80 = 0;
      uStack_88 = 0;
      ppuStack_98 = (undefined **)&UNK_1053a6a3c;
      appuStack_d0[0] = &PTR_DAT_110bb71e0;
      pcStack_d8 = FUN_10a276b5c;
      ppuStack_90 = &PTR_DAT_110ae9180;
      FUN_10a044790(&ppuStack_98);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      if (plStack_f0 != (long *)0x0) {
        plVar2 = plStack_f0 + 1;
        do {
          lVar13 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
        }
      }
      FUN_10a015bec(plVar14,auStack_e8);
      uVar15 = *(ulong *)(&UNK_110bb5ab8 + (ulong)param_2 * 0x10);
      if (0x7ffffffffffffff7 < uVar15) goto LAB_10a2437a0;
      lVar13 = *plVar14;
      puVar12 = (&PTR_DAT_110bb5ab0)[(ulong)param_2 * 2];
      if (uVar15 < 0x17) {
        uStack_120 = CONCAT17((char)uVar15,(undefined7)uStack_120);
        if (uVar15 != 0) goto LAB_10a2436c4;
      }
      else {
        puVar3 = (undefined1 *)0x19;
        if ((uVar15 | 7) != 0x17) {
          puVar3 = (undefined1 *)((uVar15 | 7) + 1);
        }
        ppuVar10 = (undefined1 **)puVar3;
        __Znwm();
        uStack_120 = (ulong)puVar3 | 0x8000000000000000;
        puStack_130 = (undefined1 *)ppuVar10;
        uStack_128 = uVar15;
LAB_10a2436c4:
        _memmove(ppuVar10,puVar12,uVar15);
        ppuVar16 = ppuVar10;
      }
      *(undefined1 *)((long)ppuVar16 + uVar15) = 0;
      if (*(char *)(lVar13 + 0x6f) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar13 + 0x58));
      }
      *(ulong *)(lVar13 + 0x60) = uStack_128;
      *(undefined1 **)(lVar13 + 0x58) = puStack_130;
      *(ulong *)(lVar13 + 0x68) = uStack_120;
      uStack_120 = uStack_120 & 0xffffffffffffff;
      puStack_130 = (undefined1 *)((ulong)puStack_130 & 0xffffffffffffff00);
      FUN_10a044790(&pcStack_d8);
      (*(code *)*appuStack_d0[0])(appuStack_d0);
      plVar2 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plVar8 = plStack_e0 + 1;
        do {
          lVar13 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      ppuVar1 = ppuStack_110;
      if (ppuStack_110 != (undefined **)0x0) {
        ppuVar11 = ppuStack_110 + 1;
        do {
          puVar12 = *ppuVar11;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar5) {
            *ppuVar11 = puVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (puVar12 == (undefined *)0x0) {
          (**(code **)(*ppuStack_110 + 0x10))(ppuStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar1);
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return plVar14;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f646d9f);
  }
  ___stack_chk_fail();
LAB_10a2437a0:
  func_0x000109ffde50();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2437a8);
  (*pcVar6)();
}



/* Entry: 10a24380c; end: 10a243cdf;  */

/* WARNING: Removing unreachable block (ram,0x00010a243a50) */
/* WARNING: Removing unreachable block (ram,0x00010a243a54) */
/* WARNING: Removing unreachable block (ram,0x00010a243a5c) */
/* WARNING: Removing unreachable block (ram,0x00010a243a64) */
/* WARNING: Removing unreachable block (ram,0x00010a243a68) */

undefined *** FUN_10a24380c(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long *plVar7;
  undefined8 ****ppppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  int iVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined **ppuVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  long *plVar18;
  undefined *puVar19;
  undefined ***pppuVar20;
  undefined8 ***pppuStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  long *plStack_250;
  undefined8 ***pppuStack_248;
  ulong uStack_240;
  byte bStack_231;
  undefined8 uStack_230;
  char cStack_219;
  undefined8 **ppuStack_210;
  undefined8 **ppuStack_208;
  undefined8 **ppuStack_200;
  undefined8 ***pppuStack_1f8;
  long *plStack_1f0;
  undefined1 auStack_1e8 [7];
  char cStack_1e1;
  undefined8 *apuStack_1e0 [7];
  long lStack_1a8;
  undefined8 ***pppuStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  undefined ***pppuStack_108;
  long lStack_100;
  undefined ***pppuStack_f8;
  undefined8 uStack_f0;
  undefined **appuStack_e8 [8];
  undefined ***pppuStack_a8;
  undefined ***pppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (7 < param_4) {
    FUN_10a00946c(&UNK_10f646d9f);
LAB_10a243c70:
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a243c78);
    (*pcVar4)();
  }
  pppuVar5 = (undefined ***)0x2c8;
  __Znwm();
  pppuVar20 = pppuVar5 + 1;
  pppuVar5[2] = (undefined **)0x0;
  *pppuVar20 = (undefined **)0x0;
  *pppuVar5 = &PTR_FUN_110bb71a0;
  pppuVar9 = pppuVar5 + 3;
  pppuVar5[0x55] = &PTR_FUN_110c383b8;
  pppuVar5[0x57] = (undefined **)0x0;
  pppuVar5[0x56] = (undefined **)0x0;
  *(undefined2 *)(pppuVar5 + 0x58) = 0x100;
  FUN_10a1da04c(pppuVar9,&PTR_PTR_110c5ebe8,param_3);
  pppuVar5[3] = &PTR_DAT_110c5e9a0;
  pppuVar5[5] = &PTR_FUN_110c5ead0;
  pppuVar5[8] = &PTR_DAT_110c5eb00;
  pppuVar5[0x55] = &PTR_DAT_110c5eba8;
  pppuVar5[0x18] = &PTR_FUN_110c5eb58;
  *(char *)(pppuVar5 + 0x54) = (char)param_4;
  pppuVar10 = pppuVar5 + 0xb;
  pppuStack_130 = pppuVar9;
  pppuStack_128 = pppuVar5;
  FUN_10a276a5c(pppuVar5,pppuVar10,pppuVar9);
  plVar6 = (long *)0x2c0;
  __Znwm();
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110b9fda0;
  plVar18 = plVar6 + 3;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
    if (bVar3) {
      *pppuVar20 = (undefined **)((long)*pppuVar20 + 1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar7 = plVar6;
  pppuStack_a8 = pppuVar9;
  pppuStack_a0 = pppuVar5;
  func_0x00010a0fda30();
  FUN_10ab6a888(plVar18,param_3,&pppuStack_a8,plVar7,pppuVar10);
  do {
    ppuVar14 = *pppuVar20;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
    if (bVar3) {
      *pppuVar20 = (undefined **)((long)ppuVar14 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (ppuVar14 == (undefined **)0x0) {
    (*(code *)(*pppuVar5)[2])(pppuVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
  }
  plVar7 = plVar6 + 8;
  plStack_120 = plVar18;
  plStack_118 = plVar6;
  FUN_10a05b2a8(&plStack_120);
  iVar11 = (int)plVar18;
  FUN_10a05b04c(&lStack_110,&plStack_120);
  plVar18 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar6 = plStack_118 + 1;
    do {
      lVar15 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  if (pppuStack_108 == (undefined ***)0x0) {
    pppuStack_f8 = (undefined ***)0x0;
  }
  else {
    pppuVar9 = pppuStack_108 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar3) {
        *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pppuStack_f8 = pppuStack_108;
    if (pppuStack_108 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_108 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar3) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  uStack_90 = 0;
  uStack_98 = 0;
  pppuStack_a8 = (undefined ***)&UNK_1053a6a3c;
  appuStack_e8[0] = &PTR_DAT_110bb71f8;
  uStack_f0 = 0x10a276b94;
  lStack_100 = lStack_110;
  pppuStack_a0 = (undefined ***)&PTR_DAT_110ae9180;
  FUN_10a044790(&pppuStack_a8);
  (*(code *)*pppuStack_a0)(&pppuStack_a0);
  if (pppuStack_108 != (undefined ***)0x0) {
    pppuVar9 = pppuStack_108 + 1;
    do {
      ppuVar14 = *pppuVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar3) {
        *pppuVar9 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_108);
    }
  }
  lVar15 = lStack_100;
  uVar16 = *(ulong *)(&UNK_110bb5ab8 + (ulong)param_4 * 0x10);
  if (0x7ffffffffffffff7 < uVar16) goto LAB_10a243c70;
  plVar18 = (long *)(&PTR_DAT_110bb5ab0)[(ulong)param_4 * 2];
  if (uVar16 < 0x17) {
    uStack_138 = CONCAT17((char)uVar16,(undefined7)uStack_138);
    ppppuVar8 = &pppuStack_148;
    if (uVar16 != 0) goto LAB_10a243b40;
  }
  else {
    ppppuVar1 = (undefined8 ****)0x19;
    if ((uVar16 | 7) != 0x17) {
      ppppuVar1 = (undefined8 ****)((uVar16 | 7) + 1);
    }
    ppppuVar8 = ppppuVar1;
    __Znwm();
    uStack_138 = (ulong)ppppuVar1 | 0x8000000000000000;
    pppuStack_148 = ppppuVar8;
    uStack_140 = uVar16;
LAB_10a243b40:
    uVar12 = uVar16;
    _memmove(ppppuVar8);
    iVar11 = (int)uVar12;
    plVar7 = plVar18;
  }
  *(undefined1 *)((long)ppppuVar8 + uVar16) = 0;
  if (*(char *)(lVar15 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar15 + 0x58));
  }
  *(ulong *)(lVar15 + 0x60) = uStack_140;
  *(undefined8 ****)(lVar15 + 0x58) = pppuStack_148;
  *(ulong *)(lVar15 + 0x68) = uStack_138;
  uStack_138 = uStack_138 & 0xffffffffffffff;
  pppuStack_148 = (undefined8 ***)((ulong)pppuStack_148 & 0xffffffffffffff00);
  param_1[1] = (long)pppuStack_f8;
  *param_1 = lStack_100;
  if (pppuStack_f8 != (undefined ***)0x0) {
    pppuVar9 = pppuStack_f8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar3) {
        *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a044790(&uStack_f0);
  pppuVar9 = appuStack_e8;
  (*(code *)*appuStack_e8[0])();
  pppuVar10 = pppuStack_f8;
  if (pppuStack_f8 != (undefined ***)0x0) {
    pppuVar5 = pppuStack_f8 + 1;
    do {
      ppuVar14 = *pppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_f8)[2])(pppuStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar9 = pppuVar10;
    }
  }
  pppuVar10 = pppuStack_128;
  if (pppuStack_128 != (undefined ***)0x0) {
    pppuVar5 = pppuStack_128 + 1;
    do {
      ppuVar14 = *pppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)ppuVar14 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_128)[2])(pppuStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar9 = pppuVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&plStack_120);
  func_0x00010a276b04(&pppuStack_130);
  __Unwind_Resume();
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uint)plVar7 < 3) {
    pppuVar9 = pppuVar9 + ((ulong)plVar7 & 0xffffffff) * 2 + 0x11;
    if (*pppuVar9 == (undefined **)0x0) {
      func_0x000107c2b054(&pppuStack_1f8,&UNK_10f646dc9);
      uVar16 = (ulong)plVar7 & 0xffffffff;
      func_0x000107c2b054(&pppuStack_248,(&PTR_DAT_110bb5b30)[uVar16]);
      ppppuVar1 = (undefined8 ****)pppuStack_248;
      if (-1 < (char)bStack_231) {
        uStack_240 = (ulong)bStack_231;
        ppppuVar1 = &pppuStack_248;
      }
      ppppuVar8 = &pppuStack_1f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar8,ppppuVar1,uStack_240);
      ppuStack_208 = ppppuVar8[1];
      ppuStack_210 = *ppppuVar8;
      ppuStack_200 = ppppuVar8[2];
      ppppuVar8[1] = (undefined8 ***)0x0;
      ppppuVar8[2] = (undefined8 ***)0x0;
      *ppppuVar8 = (undefined8 ***)0x0;
      if ((char)bStack_231 < '\0') {
        ppppuVar8 = (undefined8 ****)pppuStack_248;
        __ZdlPv(pppuStack_248);
      }
      if (cStack_1e1 < '\0') {
        __ZdlPv(pppuStack_1f8);
        ppppuVar8 = (undefined8 ****)pppuStack_1f8;
      }
      func_0x00010ad03330();
      FUN_10a107e2c(&pppuStack_248,&ppuStack_210,ppppuVar8,1);
      uVar13 = 0;
      if (iVar11 == 0) {
        uVar13 = 2;
      }
      FUN_10ac5fb74(auStack_258,0,&pppuStack_248,uVar13);
      uStack_260 = 0;
      FUN_10a24402c(&pppuStack_1f8,&uStack_260,auStack_258);
      FUN_10a015bec(pppuVar9,&pppuStack_1f8);
      puVar17 = *(undefined **)(&UNK_110bb5b50 + uVar16 * 0x10);
      if ((undefined *)0x7ffffffffffffff7 < puVar17) goto LAB_10a243fa4;
      ppuVar14 = *pppuVar9;
      puVar19 = (&PTR_DAT_110bb5b48)[uVar16 * 2];
      if (puVar17 < (undefined *)0x17) {
        uStack_268 = (undefined *)CONCAT17((char)puVar17,(undefined7)uStack_268);
        ppppuVar8 = &pppuStack_278;
        if (puVar17 != (undefined *)0x0) goto LAB_10a243e64;
      }
      else {
        ppppuVar1 = (undefined8 ****)0x19;
        if (((ulong)puVar17 | 7) != 0x17) {
          ppppuVar1 = (undefined8 ****)(((ulong)puVar17 | 7) + 1);
        }
        ppppuVar8 = ppppuVar1;
        __Znwm();
        uStack_268 = (undefined *)((ulong)ppppuVar1 | 0x8000000000000000);
        pppuStack_278 = ppppuVar8;
        puStack_270 = puVar17;
LAB_10a243e64:
        _memmove(ppppuVar8,puVar19,puVar17);
      }
      *(undefined1 *)((long)ppppuVar8 + (long)puVar17) = 0;
      if (*(char *)((long)ppuVar14 + 0x6f) < '\0') {
        __ZdlPv(ppuVar14[0xb]);
      }
      ppuVar14[0xc] = puStack_270;
      ppuVar14[0xb] = (undefined *)pppuStack_278;
      ppuVar14[0xd] = uStack_268;
      uStack_268 = (undefined *)((ulong)uStack_268 & 0xffffffffffffff);
      pppuStack_278 = (undefined8 ***)((ulong)pppuStack_278 & 0xffffffffffffff00);
      FUN_10a044790(auStack_1e8);
      (*(code *)*apuStack_1e0[0])(apuStack_1e0);
      if (plStack_1f0 != (long *)0x0) {
        plVar18 = plStack_1f0 + 1;
        do {
          lVar15 = *plVar18;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *plVar18 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1f0);
        }
      }
      if (plStack_250 != (long *)0x0) {
        plVar18 = plStack_250 + 1;
        do {
          lVar15 = *plVar18;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *plVar18 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_250 + 0x10))(plStack_250);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_250);
        }
      }
      if (cStack_219 < '\0') {
        __ZdlPv(uStack_230);
      }
      if ((char)bStack_231 < '\0') {
        __ZdlPv(pppuStack_248);
      }
      if ((long)ppuStack_200 < 0) {
        __ZdlPv(ppuStack_210);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return pppuVar9;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f646d9f);
  }
  ___stack_chk_fail();
LAB_10a243fa4:
  func_0x000109ffde50();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a243fac);
  (*pcVar4)();
}



/* Entry: 10a243ce0; end: 10a24402b;  */

long * FUN_10a243ce0(long param_1,uint param_2,int param_3)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 ***pppuVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 **ppuStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  long *plStack_100;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined8 uStack_e0;
  char cStack_c9;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  long *plStack_a0;
  undefined1 auStack_98 [7];
  char cStack_91;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 < 3) {
    plVar8 = (long *)(param_1 + (ulong)param_2 * 0x10 + 0x88);
    if (*plVar8 == 0) {
      func_0x000107c2b054(&ppuStack_a8,&UNK_10f646dc9);
      uVar10 = (ulong)param_2;
      func_0x000107c2b054(&ppuStack_f8,(&PTR_DAT_110bb5b30)[uVar10]);
      pppuVar2 = (undefined8 ***)ppuStack_f8;
      if (-1 < (char)bStack_e1) {
        uStack_f0 = (ulong)bStack_e1;
        pppuVar2 = &ppuStack_f8;
      }
      pppuVar6 = &ppuStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar6,pppuVar2,uStack_f0);
      puStack_b8 = pppuVar6[1];
      puStack_c0 = *pppuVar6;
      puStack_b0 = pppuVar6[2];
      pppuVar6[1] = (undefined8 **)0x0;
      pppuVar6[2] = (undefined8 **)0x0;
      *pppuVar6 = (undefined8 **)0x0;
      if ((char)bStack_e1 < '\0') {
        pppuVar6 = (undefined8 ***)ppuStack_f8;
        __ZdlPv(ppuStack_f8);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(ppuStack_a8);
        pppuVar6 = (undefined8 ***)ppuStack_a8;
      }
      func_0x00010ad03330();
      FUN_10a107e2c(&ppuStack_f8,&puStack_c0,pppuVar6,1);
      uVar7 = 0;
      if (param_3 == 0) {
        uVar7 = 2;
      }
      FUN_10ac5fb74(auStack_108,0,&ppuStack_f8,uVar7);
      uStack_110 = 0;
      FUN_10a24402c(&ppuStack_a8,&uStack_110,auStack_108);
      FUN_10a015bec(plVar8,&ppuStack_a8);
      uVar9 = *(ulong *)(&UNK_110bb5b50 + uVar10 * 0x10);
      if (0x7ffffffffffffff7 < uVar9) goto LAB_10a243fa4;
      lVar12 = *plVar8;
      puVar11 = (&PTR_DAT_110bb5b48)[uVar10 * 2];
      if (uVar9 < 0x17) {
        uStack_118 = CONCAT17((char)uVar9,(undefined7)uStack_118);
        pppuVar6 = &ppuStack_128;
        if (uVar9 != 0) goto LAB_10a243e64;
      }
      else {
        pppuVar2 = (undefined8 ***)0x19;
        if ((uVar9 | 7) != 0x17) {
          pppuVar2 = (undefined8 ***)((uVar9 | 7) + 1);
        }
        pppuVar6 = pppuVar2;
        __Znwm();
        uStack_118 = (ulong)pppuVar2 | 0x8000000000000000;
        ppuStack_128 = pppuVar6;
        uStack_120 = uVar9;
LAB_10a243e64:
        _memmove(pppuVar6,puVar11,uVar9);
      }
      *(undefined1 *)((long)pppuVar6 + uVar9) = 0;
      if (*(char *)(lVar12 + 0x6f) < '\0') {
        __ZdlPv(*(undefined8 *)(lVar12 + 0x58));
      }
      *(ulong *)(lVar12 + 0x60) = uStack_120;
      *(undefined8 ***)(lVar12 + 0x58) = ppuStack_128;
      *(ulong *)(lVar12 + 0x68) = uStack_118;
      uStack_118 = uStack_118 & 0xffffffffffffff;
      ppuStack_128 = (undefined8 **)((ulong)ppuStack_128 & 0xffffffffffffff00);
      FUN_10a044790(auStack_98);
      (*(code *)*apuStack_90[0])(apuStack_90);
      if (plStack_a0 != (long *)0x0) {
        plVar1 = plStack_a0 + 1;
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
        }
      }
      if (plStack_100 != (long *)0x0) {
        plVar1 = plStack_100 + 1;
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_100);
        }
      }
      if (cStack_c9 < '\0') {
        __ZdlPv(uStack_e0);
      }
      if ((char)bStack_e1 < '\0') {
        __ZdlPv(ppuStack_f8);
      }
      if ((long)puStack_b0 < 0) {
        __ZdlPv(puStack_c0);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return plVar8;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f646d9f);
  }
  ___stack_chk_fail();
LAB_10a243fa4:
  func_0x000109ffde50();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a243fac);
  (*pcVar5)();
}



/* Entry: 10a24402c; end: 10a244213;  */

/* WARNING: Removing unreachable block (ram,0x00010a244140) */
/* WARNING: Removing unreachable block (ram,0x00010a244144) */
/* WARNING: Removing unreachable block (ram,0x00010a24414c) */
/* WARNING: Removing unreachable block (ram,0x00010a244154) */
/* WARNING: Removing unreachable block (ram,0x00010a244158) */

undefined *** FUN_10a24402c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long *plVar8;
  long *extraout_x8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  long lVar12;
  long lStack_2a0;
  undefined ***pppuStack_298;
  undefined1 auStack_290 [8];
  undefined **appuStack_288 [8];
  long lStack_248;
  undefined ***pppuStack_240;
  undefined ***pppuStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined1 uStack_219;
  undefined1 **ppuStack_218;
  undefined1 *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  undefined1 auStack_1a8 [8];
  undefined ***pppuStack_1a0;
  undefined1 auStack_198 [8];
  undefined **appuStack_190 [7];
  long lStack_158;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 auStack_108 [8];
  undefined ***pppuStack_100;
  undefined1 auStack_f8 [8];
  undefined **appuStack_f0 [7];
  long lStack_b8;
  undefined ***pppuStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = &uStack_81;
  FUN_10a276bcc(&puStack_68,&uStack_69,puVar7,param_2,param_3);
  FUN_10a05b04c(&uStack_80,&puStack_68);
  if (ppuStack_60 != (undefined **)0x0) {
    ppuVar10 = ppuStack_60 + 1;
    do {
      puVar9 = *ppuVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar3) {
        *ppuVar10 = puVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar9 == (undefined *)0x0) {
      (**(code **)(*ppuStack_60 + 0x10))(ppuStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_60);
    }
  }
  if (pppuStack_78 == (undefined ***)0x0) {
    *param_1 = uStack_80;
    param_1[1] = 0;
  }
  else {
    pppuVar4 = pppuStack_78 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar3) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = uStack_80;
    param_1[1] = pppuStack_78;
    if (pppuStack_78 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  param_1[2] = FUN_10a276d3c;
  param_1[3] = &PTR_DAT_110bbae10;
  param_1[4] = uStack_80;
  param_1[5] = pppuStack_78;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_68);
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (pppuStack_78 != (undefined ***)0x0) {
    pppuVar5 = pppuStack_78 + 1;
    do {
      ppuVar10 = *pppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)ppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuStack_78)[2])(pppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuStack_78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_68);
  pppuVar5 = pppuVar4;
  __Unwind_Resume();
  pppuStack_b0 = &ppuStack_60;
  pppuStack_a8 = pppuVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  pcStack_98 = FUN_10a244214;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = pppuVar5;
  pppuVar11 = &ppuStack_60;
  if (pppuVar5[0x27] == (undefined **)0x0) {
    FUN_10ab451f4(auStack_108,0,&UNK_10f646dd3,0x13,&UNK_10f646de7,0xf,&UNK_10f646df7,10,1);
    func_0x00010a015c50(pppuVar5 + 0x27,auStack_108);
    plVar8 = (long *)pppuVar5[0x27][0x45];
    if (plVar8 == (long *)pppuVar5[0x27][0x46]) {
      lVar12 = 0;
    }
    else {
      lVar12 = *plVar8;
    }
    func_0x00010a332748(lVar12 + 0x219,0);
    puVar7 = (undefined1 *)0x0;
    func_0x00010a332700(lVar12 + 0x21a,0);
    FUN_10a044790(auStack_f8);
    pppuVar4 = appuStack_f0;
    (*(code *)*appuStack_f0[0])();
    pppuVar11 = pppuStack_100;
    if (pppuStack_100 != (undefined ***)0x0) {
      pppuVar1 = pppuStack_100 + 1;
      do {
        ppuVar10 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar10 == (undefined **)0x0) {
        (*(code *)(*pppuStack_100)[2])(pppuStack_100);
        pppuVar4 = pppuStack_100;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pppuVar5 + 0x27;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_118 = FUN_10a24435c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1d8 = 0xb;
  puStack_1e0 = &DAT_10f646e02;
  uStack_1d0 = 0xa8d9be38f3072c89;
  uStack_1f8 = 6;
  puStack_200 = &DAT_10f646e0e;
  uStack_1f0 = 0x12ac9ea8ce24c7;
  pppuVar5 = pppuVar4;
  ppuStack_120 = &puStack_a0;
  if (pppuVar4[0x29] == (undefined **)0x0) {
    FUN_10ab451f4(auStack_1a8,0,&UNK_10f646e15,0xc,&DAT_10f48702d,4,&UNK_10f646e22,0xd,1);
    func_0x00010a015c50(pppuVar4 + 0x29,auStack_1a8);
    plVar8 = (long *)pppuVar4[0x29][0x45];
    if (plVar8 == (long *)pppuVar4[0x29][0x46]) {
      lVar12 = 0;
    }
    else {
      lVar12 = *plVar8;
    }
    func_0x000107c2b074(auStack_1c8,&puStack_1e0);
    FUN_10a3368d0(lVar12,auStack_1c8,pppuVar4 + 1,&UNK_10e4ac858,0xd);
    if (cStack_1b1 < '\0') {
      __ZdlPv(auStack_1c8[0]);
    }
    func_0x000107c2b074(auStack_1c8,&puStack_200);
    FUN_10a0d9f14(&ppuStack_218,auStack_1c8,1,&uStack_219);
    FUN_10a0da1b8((long *)(lVar12 + 0x200),*(undefined8 *)(lVar12 + 0x208));
    *(undefined1 ***)(lVar12 + 0x200) = ppuStack_218;
    *(undefined1 **)(lVar12 + 0x208) = puStack_210;
    *(long *)(lVar12 + 0x210) = lStack_208;
    if (lStack_208 == 0) {
      *(long *)(lVar12 + 0x200) = lVar12 + 0x208;
    }
    else {
      ppuStack_218 = &puStack_210;
      *(long *)(puStack_210 + 0x10) = lVar12 + 0x208;
      puStack_210 = (undefined1 *)0x0;
      lStack_208 = 0;
    }
    puVar7 = puStack_210;
    FUN_10a0da1b8(&ppuStack_218,puStack_210);
    if (cStack_1b1 < '\0') {
      __ZdlPv(auStack_1c8[0]);
    }
    FUN_10a044790(auStack_198);
    pppuVar5 = appuStack_190;
    (*(code *)*appuStack_190[0])();
    pppuVar11 = pppuStack_1a0;
    if (pppuStack_1a0 != (undefined ***)0x0) {
      pppuVar1 = pppuStack_1a0 + 1;
      do {
        ppuVar10 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar10 == (undefined **)0x0) {
        (*(code *)(*pppuStack_1a0)[2])(pppuStack_1a0);
        pppuVar5 = pppuStack_1a0;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return pppuVar4 + 0x29;
  }
  ___stack_chk_fail();
  if (cStack_1b1 < '\0') {
    __ZdlPv(auStack_1c8[0]);
  }
  func_0x00010a015cb4(auStack_1a8);
  __Unwind_Resume(pppuVar5);
  pcStack_228 = FUN_10a2445ac;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_240 = pppuVar11;
  pppuStack_238 = pppuVar5;
  pppuStack_230 = &ppuStack_120;
  FUN_10ab451f4(&lStack_2a0,puVar7,&UNK_10f648549,0xb,&UNK_10f648555,7,&UNK_10f64855d,0x16,1);
  *(undefined1 *)(lStack_2a0 + 8) = 1;
  if (*(long **)(lStack_2a0 + 0x228) == *(long **)(lStack_2a0 + 0x230)) {
    lVar12 = 0;
  }
  else {
    lVar12 = **(long **)(lStack_2a0 + 0x228);
  }
  func_0x00010a3326b8(lVar12 + 0x218,1);
  func_0x00010a332748(lVar12 + 0x219,1);
  func_0x00010a332700(lVar12 + 0x21a,0);
  *(undefined4 *)(lVar12 + 0x21e) = 0x1010101;
  lVar12 = *(long *)(lVar12 + 600);
  *(undefined8 *)(lVar12 + 0x30) = 0;
  *(undefined8 *)(lVar12 + 0x28) = 0x10;
  *(undefined8 *)(lVar12 + 0x40) = 7;
  *(undefined8 *)(lVar12 + 0x38) = 0x107010100000000;
  *(undefined8 *)(lVar12 + 0x50) = 0;
  *(undefined8 *)(lVar12 + 0x48) = 0;
  extraout_x8[1] = (long)pppuStack_298;
  *extraout_x8 = lStack_2a0;
  if (pppuStack_298 != (undefined ***)0x0) {
    pppuVar4 = pppuStack_298 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar3) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a044790(auStack_290);
  pppuVar4 = appuStack_288;
  (*(code *)*appuStack_288[0])();
  if (pppuStack_298 != (undefined ***)0x0) {
    pppuVar5 = pppuStack_298 + 1;
    do {
      ppuVar10 = *pppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)ppuVar10 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar10 == (undefined **)0x0) {
      (*(code *)(*pppuStack_298)[2])(pppuStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuStack_298;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pppuVar5 = (undefined ***)pppuVar4[0x31];
  if (pppuVar5 == (undefined ***)0x0) {
    uVar6 = 0x58;
    __Znwm(0x58);
    FUN_10ab0fda4();
    FUN_10a2760bc(pppuVar4 + 0x31,uVar6);
    pppuVar5 = (undefined ***)pppuVar4[0x31];
  }
  return pppuVar5;
}



/* Entry: 10a244214; end: 10a24435b;  */

undefined8 ** FUN_10a244214(undefined8 **param_1,long param_2)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  long *plVar7;
  long *extraout_x8;
  undefined8 *puVar8;
  long lVar9;
  long lStack_210;
  undefined8 **ppuStack_208;
  undefined1 auStack_200 [8];
  undefined8 *apuStack_1f8 [8];
  long lStack_1b8;
  undefined8 **ppuStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 uStack_189;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined1 auStack_118 [8];
  undefined8 **ppuStack_110;
  undefined1 auStack_108 [8];
  undefined8 *apuStack_100 [7];
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined8 **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_1;
  if (param_1[0x27] == (undefined8 *)0x0) {
    FUN_10ab451f4(auStack_78,0,&UNK_10f646dd3,0x13,&UNK_10f646de7,0xf,&UNK_10f646df7,10,1);
    func_0x00010a015c50(param_1 + 0x27,auStack_78);
    plVar7 = (long *)param_1[0x27][0x45];
    if (plVar7 == (long *)param_1[0x27][0x46]) {
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar7;
    }
    func_0x00010a332748(lVar9 + 0x219,0);
    param_2 = 0;
    func_0x00010a332700(lVar9 + 0x21a,0);
    FUN_10a044790(auStack_68);
    ppuVar4 = apuStack_60;
    (*(code *)*apuStack_60[0])();
    if (ppuStack_70 != (undefined8 **)0x0) {
      ppuVar5 = ppuStack_70 + 1;
      do {
        puVar8 = *ppuVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar3) {
          *ppuVar5 = (undefined8 *)((long)puVar8 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar8 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_70)[2])(ppuStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar4 = ppuStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1 + 0x27;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_88 = FUN_10a24435c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_148 = 0xb;
  puStack_150 = &DAT_10f646e02;
  uStack_140 = 0xa8d9be38f3072c89;
  uStack_168 = 6;
  puStack_170 = &DAT_10f646e0e;
  uStack_160 = 0x12ac9ea8ce24c7;
  ppuVar5 = ppuVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  if (ppuVar4[0x29] == (undefined8 *)0x0) {
    FUN_10ab451f4(auStack_118,0,&UNK_10f646e15,0xc,&DAT_10f48702d,4,&UNK_10f646e22,0xd,1);
    func_0x00010a015c50(ppuVar4 + 0x29,auStack_118);
    plVar7 = (long *)ppuVar4[0x29][0x45];
    if (plVar7 == (long *)ppuVar4[0x29][0x46]) {
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar7;
    }
    func_0x000107c2b074(auStack_138,&puStack_150);
    FUN_10a3368d0(lVar9,auStack_138,ppuVar4 + 1,&UNK_10e4ac858,0xd);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    func_0x000107c2b074(auStack_138,&puStack_170);
    FUN_10a0d9f14(&plStack_188,auStack_138,1,&uStack_189);
    FUN_10a0da1b8((long *)(lVar9 + 0x200),*(undefined8 *)(lVar9 + 0x208));
    *(long **)(lVar9 + 0x200) = plStack_188;
    *(long *)(lVar9 + 0x208) = lStack_180;
    *(long *)(lVar9 + 0x210) = lStack_178;
    if (lStack_178 == 0) {
      *(long *)(lVar9 + 0x200) = lVar9 + 0x208;
    }
    else {
      plStack_188 = &lStack_180;
      *(long *)(lStack_180 + 0x10) = lVar9 + 0x208;
      lStack_180 = 0;
      lStack_178 = 0;
    }
    param_2 = lStack_180;
    FUN_10a0da1b8(&plStack_188,lStack_180);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    FUN_10a044790(auStack_108);
    ppuVar5 = apuStack_100;
    (*(code *)*apuStack_100[0])();
    if (ppuStack_110 != (undefined8 **)0x0) {
      ppuVar1 = ppuStack_110 + 1;
      do {
        puVar8 = *ppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = (undefined8 *)((long)puVar8 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar8 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_110)[2])(ppuStack_110);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar5 = ppuStack_110;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppuVar4 + 0x29;
  }
  ___stack_chk_fail();
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  func_0x00010a015cb4(auStack_118);
  __Unwind_Resume(ppuVar5);
  pcStack_198 = FUN_10a2445ac;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a8 = ppuVar5;
  ppuStack_1a0 = &puStack_90;
  FUN_10ab451f4(&lStack_210,param_2,&UNK_10f648549,0xb,&UNK_10f648555,7,&UNK_10f64855d,0x16,1);
  *(undefined1 *)(lStack_210 + 8) = 1;
  if (*(long **)(lStack_210 + 0x228) == *(long **)(lStack_210 + 0x230)) {
    lVar9 = 0;
  }
  else {
    lVar9 = **(long **)(lStack_210 + 0x228);
  }
  func_0x00010a3326b8(lVar9 + 0x218,1);
  func_0x00010a332748(lVar9 + 0x219,1);
  func_0x00010a332700(lVar9 + 0x21a,0);
  *(undefined4 *)(lVar9 + 0x21e) = 0x1010101;
  lVar9 = *(long *)(lVar9 + 600);
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x28) = 0x10;
  *(undefined8 *)(lVar9 + 0x40) = 7;
  *(undefined8 *)(lVar9 + 0x38) = 0x107010100000000;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  extraout_x8[1] = (long)ppuStack_208;
  *extraout_x8 = lStack_210;
  if (ppuStack_208 != (undefined8 **)0x0) {
    ppuVar4 = ppuStack_208 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar3) {
        *ppuVar4 = (undefined8 *)((long)*ppuVar4 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a044790(auStack_200);
  ppuVar4 = apuStack_1f8;
  (*(code *)*apuStack_1f8[0])();
  if (ppuStack_208 != (undefined8 **)0x0) {
    ppuVar5 = ppuStack_208 + 1;
    do {
      puVar8 = *ppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar3) {
        *ppuVar5 = (undefined8 *)((long)puVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_208)[2])(ppuStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar4 = ppuStack_208;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar5 = (undefined8 **)ppuVar4[0x31];
  if (ppuVar5 == (undefined8 **)0x0) {
    uVar6 = 0x58;
    __Znwm(0x58);
    FUN_10ab0fda4();
    FUN_10a2760bc(ppuVar4 + 0x31,uVar6);
    ppuVar5 = (undefined8 **)ppuVar4[0x31];
  }
  return ppuVar5;
}



/* Entry: 10a24435c; end: 10a2445ab;  */

undefined8 ** FUN_10a24435c(undefined8 **param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  long *plVar6;
  long *extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  long lStack_190;
  undefined8 **ppuStack_188;
  undefined1 auStack_180 [8];
  undefined8 *apuStack_178 [8];
  long lStack_138;
  undefined8 **ppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 uStack_109;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined1 auStack_98 [8];
  undefined8 **ppuStack_90;
  undefined1 auStack_88 [8];
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = 0xb;
  puStack_d0 = &DAT_10f646e02;
  uStack_c0 = 0xa8d9be38f3072c89;
  uStack_e8 = 6;
  puStack_f0 = &DAT_10f646e0e;
  uStack_e0 = 0x12ac9ea8ce24c7;
  ppuVar3 = param_1;
  if (param_1[0x29] == (undefined8 *)0x0) {
    FUN_10ab451f4(auStack_98,0,&UNK_10f646e15,0xc,&DAT_10f48702d,4,&UNK_10f646e22,0xd,1);
    func_0x00010a015c50(param_1 + 0x29,auStack_98);
    plVar6 = (long *)param_1[0x29][0x45];
    if (plVar6 == (long *)param_1[0x29][0x46]) {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar6;
    }
    func_0x000107c2b074(auStack_b8,&puStack_d0);
    FUN_10a3368d0(lVar8,auStack_b8,param_1 + 1,&UNK_10e4ac858,0xd);
    if (cStack_a1 < '\0') {
      __ZdlPv(auStack_b8[0]);
    }
    func_0x000107c2b074(auStack_b8,&puStack_f0);
    FUN_10a0d9f14(&plStack_108,auStack_b8,1,&uStack_109);
    FUN_10a0da1b8((long *)(lVar8 + 0x200),*(undefined8 *)(lVar8 + 0x208));
    *(long **)(lVar8 + 0x200) = plStack_108;
    *(long *)(lVar8 + 0x208) = lStack_100;
    *(long *)(lVar8 + 0x210) = lStack_f8;
    if (lStack_f8 == 0) {
      *(long *)(lVar8 + 0x200) = lVar8 + 0x208;
    }
    else {
      plStack_108 = &lStack_100;
      *(long *)(lStack_100 + 0x10) = lVar8 + 0x208;
      lStack_100 = 0;
      lStack_f8 = 0;
    }
    param_2 = lStack_100;
    FUN_10a0da1b8(&plStack_108,lStack_100);
    if (cStack_a1 < '\0') {
      __ZdlPv(auStack_b8[0]);
    }
    FUN_10a044790(auStack_88);
    ppuVar3 = apuStack_80;
    (*(code *)*apuStack_80[0])();
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar4 = ppuStack_90 + 1;
      do {
        puVar7 = *ppuVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar2) {
          *ppuVar4 = (undefined8 *)((long)puVar7 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar7 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_90)[2])(ppuStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar3 = ppuStack_90;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1 + 0x29;
  }
  ___stack_chk_fail();
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  func_0x00010a015cb4(auStack_98);
  __Unwind_Resume(ppuVar3);
  pcStack_118 = FUN_10a2445ac;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_128 = ppuVar3;
  puStack_120 = &stack0xfffffffffffffff0;
  FUN_10ab451f4(&lStack_190,param_2,&UNK_10f648549,0xb,&UNK_10f648555,7,&UNK_10f64855d,0x16,1);
  *(undefined1 *)(lStack_190 + 8) = 1;
  if (*(long **)(lStack_190 + 0x228) == *(long **)(lStack_190 + 0x230)) {
    lVar8 = 0;
  }
  else {
    lVar8 = **(long **)(lStack_190 + 0x228);
  }
  func_0x00010a3326b8(lVar8 + 0x218,1);
  func_0x00010a332748(lVar8 + 0x219,1);
  func_0x00010a332700(lVar8 + 0x21a,0);
  *(undefined4 *)(lVar8 + 0x21e) = 0x1010101;
  lVar8 = *(long *)(lVar8 + 600);
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x28) = 0x10;
  *(undefined8 *)(lVar8 + 0x40) = 7;
  *(undefined8 *)(lVar8 + 0x38) = 0x107010100000000;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  extraout_x8[1] = (long)ppuStack_188;
  *extraout_x8 = lStack_190;
  if (ppuStack_188 != (undefined8 **)0x0) {
    ppuVar3 = ppuStack_188 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
      if (bVar2) {
        *ppuVar3 = (undefined8 *)((long)*ppuVar3 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a044790(auStack_180);
  ppuVar3 = apuStack_178;
  (*(code *)*apuStack_178[0])();
  if (ppuStack_188 != (undefined8 **)0x0) {
    ppuVar4 = ppuStack_188 + 1;
    do {
      puVar7 = *ppuVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar2) {
        *ppuVar4 = (undefined8 *)((long)puVar7 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_188)[2])(ppuStack_188);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar3 = ppuStack_188;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar4 = (undefined8 **)ppuVar3[0x31];
  if (ppuVar4 == (undefined8 **)0x0) {
    uVar5 = 0x58;
    __Znwm(0x58);
    FUN_10ab0fda4();
    FUN_10a2760bc(ppuVar3 + 0x31,uVar5);
    ppuVar4 = (undefined8 **)ppuVar3[0x31];
  }
  return ppuVar4;
}



/* Entry: 10a2445ac; end: 10a24473b;  */

undefined8 ** FUN_10a2445ac(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ab451f4(&lStack_80,param_3,&UNK_10f648549,0xb,&UNK_10f648555,7,&UNK_10f64855d,0x16,1);
  *(undefined1 *)(lStack_80 + 8) = 1;
  if (*(long **)(lStack_80 + 0x228) == *(long **)(lStack_80 + 0x230)) {
    lVar7 = 0;
  }
  else {
    lVar7 = **(long **)(lStack_80 + 0x228);
  }
  func_0x00010a3326b8(lVar7 + 0x218,1);
  func_0x00010a332748(lVar7 + 0x219,1);
  func_0x00010a332700(lVar7 + 0x21a,0);
  *(undefined4 *)(lVar7 + 0x21e) = 0x1010101;
  lVar7 = *(long *)(lVar7 + 600);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 0x10;
  *(undefined8 *)(lVar7 + 0x40) = 7;
  *(undefined8 *)(lVar7 + 0x38) = 0x107010100000000;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  param_1[1] = (long)ppuStack_78;
  *param_1 = lStack_80;
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar3 = ppuStack_78 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
      if (bVar2) {
        *ppuVar3 = (undefined8 *)((long)*ppuVar3 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a044790(auStack_70);
  ppuVar3 = apuStack_68;
  (*(code *)*apuStack_68[0])();
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar4 = ppuStack_78 + 1;
    do {
      puVar6 = *ppuVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar2) {
        *ppuVar4 = (undefined8 *)((long)puVar6 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar6 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_78)[2])(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar3 = ppuStack_78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar4 = (undefined8 **)ppuVar3[0x31];
  if (ppuVar4 == (undefined8 **)0x0) {
    uVar5 = 0x58;
    __Znwm(0x58);
    FUN_10ab0fda4();
    FUN_10a2760bc(ppuVar3 + 0x31,uVar5);
    ppuVar4 = (undefined8 **)ppuVar3[0x31];
  }
  return ppuVar4;
}



/* Entry: 10a24473c; end: 10a244793;  */

long FUN_10a24473c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x188);
  if (lVar1 == 0) {
    uVar2 = 0x58;
    __Znwm(0x58);
    FUN_10ab0fda4();
    FUN_10a2760bc(param_1 + 0x188,uVar2);
    lVar1 = *(long *)(param_1 + 0x188);
  }
  return lVar1;
}



/* Entry: 10a244794; end: 10a2447eb;  */

long FUN_10a244794(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1a8);
  if (lVar1 == 0) {
    uVar2 = 0x20;
    __Znwm(0x20);
    FUN_10a73eec0();
    func_0x00010a276414(param_1 + 0x1a8,uVar2);
    lVar1 = *(long *)(param_1 + 0x1a8);
  }
  return lVar1;
}



/* Entry: 10a2447ec; end: 10a244843;  */

long FUN_10a2447ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1b0);
  if (lVar1 == 0) {
    uVar2 = 0x20;
    __Znwm(0x20);
    FUN_10a73e93c();
    func_0x00010a276454(param_1 + 0x1b0,uVar2);
    lVar1 = *(long *)(param_1 + 0x1b0);
  }
  return lVar1;
}



/* Entry: 10a244844; end: 10a24489b;  */

long FUN_10a244844(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1b8);
  if (lVar1 == 0) {
    uVar2 = 0x30;
    __Znwm(0x30);
    FUN_10a73f38c();
    func_0x00010a276494(param_1 + 0x1b8,uVar2);
    lVar1 = *(long *)(param_1 + 0x1b8);
  }
  return lVar1;
}



/* Entry: 10a24489c; end: 10a2449af;  */

long FUN_10a24489c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long **pplStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar5 = *(long *)(param_1 + 0x168);
  if (lVar5 == 0) {
    lVar6 = 1;
    FUN_10a303694(1);
    lVar5 = lVar6;
    FUN_10a3048cc();
    plStack_58 = (long *)0x0;
    uStack_50 = 0;
    pplStack_60 = &plStack_58;
    FUN_10ab99300(auStack_48,&pplStack_60);
    FUN_10a0da1b8(&pplStack_60,plStack_58);
    FUN_10a2449b0(&pplStack_60,lVar5,auStack_48,lVar6 + 500,*(undefined8 *)(param_1 + 0x278),0);
    FUN_10a244a54(param_1 + 0x168,&pplStack_60);
    plVar4 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    lVar5 = *(long *)(param_1 + 0x168);
  }
  return lVar5;
}



/* Entry: 10a2449b0; end: 10a244a53;  */

void FUN_10a2449b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  
  func_0x000107c2b054(auStack_58,&UNK_10f64697a);
  FUN_10a276d74(param_1,param_2,param_3,auStack_58,param_4,param_5,param_6);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a244a54; end: 10a244ab7;  */

undefined8 * FUN_10a244a54(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a244ab8; end: 10a244c43;  */

long FUN_10a244ab8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_58 [8];
  long *plStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113835370 & 1) == 0) {
    iVar4 = 0x13835370;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x000107c2b07c(auStack_48,&UNK_10f646e30);
      FUN_10a0d9f14(0x113835358,auStack_48,1,auStack_58);
      if (cStack_31 < '\0') {
        __ZdlPv(auStack_48[0]);
      }
      ___cxa_guard_release(0x113835370);
    }
  }
  lVar5 = *(long *)(param_1 + 0x178);
  if (lVar5 == 0) {
    uVar6 = 1;
    FUN_10a303694(1);
    FUN_10a3048cc();
    FUN_10ab99300(auStack_48,0x113835358);
    FUN_10a2449b0(auStack_58,uVar6,auStack_48,0,0,0);
    FUN_10a244a54(param_1 + 0x178,auStack_58);
    if (plStack_50 != (long *)0x0) {
      plVar1 = plStack_50 + 1;
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
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    lVar5 = *(long *)(param_1 + 0x178);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar5;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x113835370);
  __Unwind_Resume();
  lVar7 = *(long *)(lVar5 + 400);
  if (lVar7 == 0) {
    uVar6 = 0x290;
    __Znwm(0x290);
    FUN_10ab11440();
    FUN_10a276138(lVar5 + 400,uVar6);
    lVar7 = *(long *)(lVar5 + 400);
  }
  return lVar7;
}



/* Entry: 10a244c44; end: 10a244c9b;  */

long FUN_10a244c44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 400);
  if (lVar1 == 0) {
    uVar2 = 0x290;
    __Znwm(0x290);
    FUN_10ab11440();
    FUN_10a276138(param_1 + 400,uVar2);
    lVar1 = *(long *)(param_1 + 400);
  }
  return lVar1;
}



/* Entry: 10a244c9c; end: 10a244cf3;  */

long FUN_10a244c9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x198);
  if (lVar1 == 0) {
    uVar2 = 0xe8;
    __Znwm(0xe8);
    FUN_10ab0cad8();
    FUN_10a2763ac(param_1 + 0x198,uVar2);
    lVar1 = *(long *)(param_1 + 0x198);
  }
  return lVar1;
}



/* Entry: 10a244cf4; end: 10a244d67;  */

long FUN_10a244cf4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x1a0);
  if (lVar1 == 0) {
    uVar2 = 0x20;
    __Znwm(0x20);
    FUN_10ab9f8f8();
    uStack_28 = 0;
    FUN_10a2763d4(param_1 + 0x1a0,uVar2);
    FUN_10a2763d4(&uStack_28,0);
    lVar1 = *(long *)(param_1 + 0x1a0);
  }
  return lVar1;
}



/* Entry: 10a244d68; end: 10a244e6f;  */

long * FUN_10a244d68(long param_1,uint param_2)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar2 = &plStack_30;
  plVar1 = *(long **)(param_1 + 0x230);
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x228) + 0x10))(&plStack_30);
    plVar1 = plStack_30;
    plStack_30 = (long *)0x0;
    plVar3 = *(long **)(param_1 + 0x230);
    *(long **)(param_1 + 0x230) = plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar1 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = *(long **)(param_1 + 0x230);
    }
    plStack_30 = (long *)&UNK_10f646e42;
    uStack_28 = 0x25;
    if (plVar1 == (long *)0x0) {
      FUN_10a0edfc4();
      if (param_2 < 0x401) {
        param_2 = 0x400;
      }
      plVar1 = (long *)((long)pplVar2 + 0x2b0);
      lVar4 = 0x80;
      do {
        if ((*(byte *)(plVar1 + 3) & 1) == 0) {
          *(undefined1 *)(plVar1 + 3) = 1;
          uVar5 = plVar1[1] - *plVar1;
          lVar4 = param_2 - uVar5;
          if (param_2 < uVar5 || lVar4 == 0) {
            return (long *)*plVar1;
          }
          func_0x000107c27d58(plVar1,lVar4);
          return (long *)*plVar1;
        }
        plVar1 = plVar1 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
      return (long *)0;
    }
  }
  return plVar1;
}



/* Entry: 10a244e70; end: 10a244f1f;  */

int FUN_10a244e70(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [79];
  undefined1 uStack_41;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  lVar2 = param_1 + 0x238;
  FUN_10a276f4c();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x250);
    FUN_10a269de4(auStack_98,param_2);
    param_1 = param_1 + 0x238;
    puStack_40 = auStack_98;
    FUN_10a277030(param_1,auStack_98,&UNK_10dd5b8f9,&puStack_40,&uStack_41);
    iVar1 = (int)uVar3 + 1;
    *(int *)(param_1 + 0x60) = iVar1;
    puStack_38 = auStack_90;
    func_0x00010a190844(&puStack_38);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x60);
  }
  return iVar1;
}



/* Entry: 10a244f20; end: 10a245153;  */

void FUN_10a244f20(long param_1)

{
  long lVar1;
  
  FUN_10a269f14(*(long *)(param_1 + 0x1e0) + 0x18,3);
  func_0x00010abaa144(*(undefined8 *)(param_1 + 0x1f0));
  lVar1 = *(long *)(*(long *)(param_1 + 0x220) + 8);
  func_0x00010a272a44(lVar1 + 0x28);
  func_0x00010a272b24(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010a244f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x228) + 0x78))();
  return;
}



/* Entry: 10a245154; end: 10a2452cb;  */

void FUN_10a245154(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = 0x80;
  lVar5 = param_1;
  do {
    lVar5 = lVar5 + 0x10;
    FUN_10a02d8cc(lVar5);
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
  plVar4 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
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
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a2452cc; end: 10a2458eb;  */

void FUN_10a2452cc(long param_1,long *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lStack_110;
  long *plStack_108;
  char cStack_f9;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  byte bStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0x28;
  __Znwm();
  lStack_88 = -0x7fffffffffffffd8;
  plStack_90 = (long *)0x24;
  *(undefined4 *)(plVar5 + 4) = 0x32653539;
  plVar5[1] = 0x63342d343461352d;
  *plVar5 = 0x3033306161613536;
  plVar5[3] = 0x3764616430653536;
  plVar5[2] = 0x2d336639612d3163;
  *(undefined1 *)((long)plVar5 + 0x24) = 0;
  lStack_110 = CONCAT44(lStack_110._4_4_,1);
  plStack_98 = plVar5;
  FUN_10a03d494(&lStack_a8,param_1,&plStack_98,&lStack_110);
  if (lStack_88 < 0) {
    __ZdlPv(plStack_98);
  }
  plVar5 = (long *)0xb8;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b9f2c8;
  plVar7 = plVar5 + 0x10;
  plVar5[0x11] = 0;
  *plVar7 = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  plVar5[0xf] = 0;
  plVar5[0xe] = 0;
  plVar5[0x13] = 0;
  plVar5[0x12] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar10 = plVar5 + 6;
  plVar5[7] = 0;
  *plVar10 = 0;
  plStack_b8 = plVar5 + 3;
  *plStack_b8 = (long)&PTR_FUN_110c35450;
  plVar5[7] = 0;
  plVar5[8] = 0;
  *plVar10 = 0;
  *(undefined1 *)(plVar5 + 9) = 0;
  plVar5[0xe] = 0;
  *(undefined4 *)(plVar5 + 0xf) = 0x3f800000;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  *plVar7 = 0;
  *(undefined1 *)(plVar5 + 0x13) = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x16] = 0;
  auStack_c8[0] = 0;
  lStack_c0 = 0;
  plStack_b0 = plVar5;
  if (*param_2 == 0) {
    func_0x000107c2b054(&plStack_98,"remove_mention");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar10,&plStack_98);
    if (lStack_88 < 0) {
      __ZdlPv(plStack_98);
    }
    func_0x000107c2b054(&lStack_110,&UNK_10f646ec4);
    if (param_1 == 0) goto LAB_10a2455b8;
    uVar9 = *(undefined8 *)(param_1 + 0x8d8);
    func_0x000107c2b054(&plStack_98,"true");
    FUN_10a76bdb0(uVar9,&lStack_110,&plStack_98);
  }
  else {
    func_0x000107c2b054(&plStack_98,"mention_sticker");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar10,&plStack_98);
    if (lStack_88 < 0) {
      __ZdlPv(plStack_98);
    }
    lStack_d0 = 0;
    uStack_d8 = 3;
    lVar8 = *param_2 + 0x18;
    func_0x00010938229c();
    puVar6 = auStack_c8;
    lStack_d0 = lVar8;
    func_0x00010945a80c(puVar6,"userId");
    uVar1 = *puVar6;
    *puVar6 = uStack_d8;
    lVar8 = *(long *)(puVar6 + 8);
    uStack_d8 = uVar1;
    *(long *)(puVar6 + 8) = lStack_d0;
    lStack_d0 = lVar8;
    func_0x000109380ffc(&lStack_d0);
    uStack_e8 = 7;
    uStack_e0 = 0x3fe0000000000000;
    puVar6 = auStack_c8;
    func_0x00010945a80c(puVar6,"normalizedX");
    uVar1 = *puVar6;
    *puVar6 = uStack_e8;
    uVar9 = *(undefined8 *)(puVar6 + 8);
    uStack_e8 = uVar1;
    *(undefined8 *)(puVar6 + 8) = uStack_e0;
    uStack_e0 = uVar9;
    func_0x000109380ffc(&uStack_e0);
    uStack_f8 = 7;
    uStack_f0 = 0x3fe0000000000000;
    puVar6 = auStack_c8;
    func_0x00010945a80c(puVar6,"normalizedY");
    uVar1 = *puVar6;
    *puVar6 = uStack_f8;
    uVar9 = *(undefined8 *)(puVar6 + 8);
    uStack_f8 = uVar1;
    *(undefined8 *)(puVar6 + 8) = uStack_f0;
    uStack_f0 = uVar9;
    func_0x000109380ffc(&uStack_f0);
    func_0x000107c2b054(&lStack_110,&UNK_10f646ea6);
    if (param_1 == 0) goto LAB_10a2455b8;
    uVar9 = *(undefined8 *)(param_1 + 0x8d8);
    func_0x000107c2b054(&plStack_98,"true");
    FUN_10a76bdb0(uVar9,&lStack_110,&plStack_98);
  }
  if (lStack_88 < 0) {
    __ZdlPv(plStack_98);
  }
LAB_10a2455b8:
  if (cStack_f9 < '\0') {
    __ZdlPv(lStack_110);
  }
  FUN_10a0c32e4(&plStack_98,auStack_c8,0xffffffff,0x20,0,0);
  uStack_78 = plStack_90;
  plStack_80 = plStack_98;
  lStack_70 = lStack_88;
  plStack_90 = (long *)0x0;
  lStack_88 = 0;
  plStack_98 = (long *)0x0;
  bStack_68 = 0;
  FUN_10a269f70(plVar7,&plStack_80);
  if (3 < (ulong)bStack_68) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a2457f0);
    (*pcVar4)();
  }
  (*(code *)(&PTR_FUN_110bbab80)[bStack_68])(&plStack_80);
  if (lStack_88 < 0) {
    __ZdlPv(plStack_98);
  }
  plVar5 = plStack_a0;
  lVar8 = lStack_a8;
  lStack_110 = lStack_a8;
  plStack_108 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar7 = plStack_a0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7 = (long *)0x60;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  plStack_98 = plVar7 + 3;
  *plStack_98 = (long)FUN_10a2777b4;
  *plVar7 = (long)&PTR_FUN_110b9f318;
  plVar7[4] = (long)&PTR_FUN_110bb7278;
  plVar7[5] = lVar8;
  plVar7[6] = (long)plVar5;
  plStack_90 = plVar7;
  if (plVar5 == (long *)0x0) {
    *(undefined1 *)(plVar7 + 0xb) = 1;
  }
  else {
    plVar10 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 *)(plVar7 + 0xb) = 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  FUN_10a342ec0(lStack_a8,&plStack_b8,&plStack_98);
  plVar5 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar7 = plStack_90 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = &lStack_c0;
  func_0x000109380ffc(plVar5,auStack_c8[0]);
  plVar7 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar10 = plStack_b0 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      plVar5 = plVar7;
    }
  }
  if (plStack_a0 != (long *)0x0) {
    plVar7 = plStack_a0 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
      plVar5 = plStack_a0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_88 < 0) {
    __ZdlPv(plStack_98);
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(lStack_110);
  }
  func_0x000109380ffc(&lStack_c0,auStack_c8[0]);
  FUN_10a080f9c(&plStack_b8);
  do {
    func_0x00010a081120(&lStack_a8);
    __Unwind_Resume(plVar5);
  } while( true );
}



/* Entry: 10a2458ec; end: 10a245983;  */

undefined1  [16] FUN_10a2458ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f648574;
  return auVar1;
}



/* Entry: 10a245984; end: 10a245a9f;  */

void FUN_10a245984(undefined8 param_1)

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
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0xffffffff;
  FUN_10a245aa0(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f646ee9;
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
  FUN_10a2779ec();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f646efc;
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
  func_0x00010a277b6c(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f646f0e;
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
  FUN_10a277c84(param_1,&puStack_88,0);
  FUN_10a277d9c(param_1);
  return;
}



/* Entry: 10a245aa0; end: 10a245b77;  */

/* WARNING: Removing unreachable block (ram,0x00010a245b38) */

undefined1  [16] FUN_10a245aa0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f648574,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a2778f0(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a245b78; end: 10a245c0b;  */

void FUN_10a245b78(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a245c0c(&plStack_30);
  if (plStack_30 != (long *)0x0) {
    (**(code **)(*plStack_30 + 0x10))();
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a245c0c; end: 10a245c63;  */

void FUN_10a245c0c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*(long *)(*(long *)(param_2 + 0x18) + 0x100) + 0x1c8);
  (**(code **)(*plVar1 + 0xb8))();
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = plVar1[1];
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      *param_1 = *plVar1;
    }
  }
  return;
}



/* Entry: 10a245c64; end: 10a245cf7;  */

void FUN_10a245c64(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a245c0c(&plStack_30);
  if (plStack_30 != (long *)0x0) {
    (**(code **)(*plStack_30 + 0x18))();
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a245cf8; end: 10a245d8b;  */

void FUN_10a245cf8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a245c0c(&plStack_30);
  if (plStack_30 != (long *)0x0) {
    (**(code **)(*plStack_30 + 0x20))();
  }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a245d8c; end: 10a245e0f;  */

undefined1  [16] FUN_10a245d8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f648588;
  return auVar1;
}



/* Entry: 10a245e10; end: 10a246107;  */

void FUN_10a245e10(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f648588,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb6870;
  pppuVar2 = (undefined8 ***)&UNK_10f64697a;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb6870;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2e8aae,FUN_10a277eb0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2dae0c,FUN_10a277ff8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3b5d61,FUN_10a2780d8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f62e14a,FUN_10a278190,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f646f1f,FUN_10a278400,0);
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f648588,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2460ec);
  (*pcVar6)();
}



/* Entry: 10a246108; end: 10a246233;  */

undefined8 *
FUN_10a246108(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bb5c10;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[5] = param_2[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 6,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[8] = param_3[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
  }
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 9) = param_4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_10a26a074();
  param_1[0xd] = param_6;
  param_1[0xe] = param_7;
  return param_1;
}



/* Entry: 10a246234; end: 10a246373;  */

undefined1  [16] FUN_10a246234(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 8;
  auVar1._0_8_ = &UNK_10f648596;
  return auVar1;
}



/* Entry: 10a246374; end: 10a246747;  */

void FUN_10a246374(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = &UNK_10f6485b6;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  puStack_70 = &UNK_10f64697a;
  uStack_68 = 0;
  uStack_60 = 0x15b;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a2784e0(param_1,&puStack_98,100);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f646f33;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f64697a;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a2785d0();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f646f3a;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f64697a;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a278764(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f646f1f;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f64697a;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a278884(param_1,&puStack_98);
  FUN_10a2789a4(param_1);
  return;
}



/* Entry: 10a246748; end: 10a2469ff;  */

void FUN_10a246748(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f648596,8);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bbaec8;
  pppuVar2 = (undefined8 ***)&UNK_10f64697a;
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
    ppuStack_b0 = &PTR_DAT_110bbaec8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"userId",FUN_10a278dd8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f68f148,FUN_10a278f20,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f367ea0,FUN_10a279014,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2fc643,FUN_10a2790d0,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f648596,8);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2469e4);
  (*pcVar6)();
}



/* Entry: 10a246a00; end: 10a246cfb;  */

void FUN_10a246a00(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&DAT_10f2ea6ee,4);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bbacc0;
  pppuVar2 = (undefined8 ***)&UNK_10f64697a;
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
  uStack_58 = 0x17a;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bbacc0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bbaec8;
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
    FUN_10a0605c4(param_1,&DAT_10f2e4713,FUN_10a27918c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"displayName",FUN_10a2792d4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"birthday",FUN_10a2793c8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f513fbc,FUN_10a279584,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3e13f8,FUN_10a279654,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f2ea6ee,4);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a246ce0);
  (*pcVar6)();
}



/* Entry: 10a246cfc; end: 10a246d53;  */

void FUN_10a246cfc(undefined8 param_1)

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
  puStack_40 = &UNK_10f64697a;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a246d54(param_1,&uStack_58);
  FUN_10a279928();
  return;
}



/* Entry: 10a246d54; end: 10a246e2b;  */

/* WARNING: Removing unreachable block (ram,0x00010a246dec) */

undefined1  [16] FUN_10a246d54(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f64859f,0xc);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a27982c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a246e2c; end: 10a246e8b;  */

void FUN_10a246e2c(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 4;
  puStack_40 = &UNK_10f64697a;
  uStack_38 = 0;
  puStack_30 = &UNK_10f64697a;
  uStack_28 = 0;
  uStack_20 = 0x17a;
  uStack_18 = 0xffffffff;
  FUN_10a246e8c(param_1,&uStack_58);
  FUN_10a279ae0();
  return;
}



/* Entry: 10a246e8c; end: 10a246f63;  */

/* WARNING: Removing unreachable block (ram,0x00010a246f24) */

undefined1  [16] FUN_10a246e8c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6485ac,9);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a2799e4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a246f64; end: 10a24707f;  */

void FUN_10a246f64(undefined8 param_1)

{
  undefined1 uStack_a9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f646f54;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  puStack_70 = &UNK_10f64697a;
  uStack_68 = 0;
  uStack_60 = 0x17a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a247080(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f646f60;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 0;
  FUN_10a2470d8(param_1,&puStack_a8,&uStack_a9);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f646f69;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x17a;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_a9 = 1;
  FUN_10a2470d8(param_1,&puStack_a8,&uStack_a9);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a247080; end: 10a2470d7;  */

ulong FUN_10a247080(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a2470d8; end: 10a24712f;  */

ulong FUN_10a2470d8(ulong param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a279b9c(param_1,*param_2,(long)*param_3);
  }
  return param_1;
}



/* Entry: 10a247130; end: 10a247213;  */

undefined8 *
FUN_10a247130(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bb5c68;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[5] = param_2[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  FUN_10a26a258(param_1 + 6,param_3);
  FUN_10a1ccb30(param_1 + 0xf,param_4);
  *(undefined1 *)(param_1 + 0x13) = param_5;
  return param_1;
}



/* Entry: 10a247214; end: 10a247267;  */

bool FUN_10a247214(long param_1)

{
  long lVar1;
  
  if (((*(char *)(param_1 + 0x70) == '\x01') && (*(char *)(param_1 + 0x48) == '\x01')) &&
     (*(char *)(param_1 + 0x68) == '\x01')) {
    lVar1 = (long)*(char *)(param_1 + 0x47);
    if (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x38);
    }
    if (lVar1 != 0) {
      lVar1 = (long)*(char *)(param_1 + 0x67);
      if (lVar1 < 0) {
        lVar1 = *(long *)(param_1 + 0x58);
      }
      return lVar1 != 0;
    }
  }
  return false;
}



/* Entry: 10a247268; end: 10a2473ff;  */

undefined8 *
FUN_10a247268(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined2 *param_7,undefined8 param_8,
             undefined8 *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  char cStack_58;
  
  FUN_10a00cde4(auStack_88,param_4,&UNK_10f64697a);
  FUN_10a247400(auStack_70,auStack_88);
  FUN_10a247130(param_1,param_2,param_5,auStack_70,param_8);
  if ((cStack_58 == '\x01') && (cStack_59 < '\0')) {
    __ZdlPv(auStack_70[0]);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  *param_1 = &PTR_DAT_110bb5cc0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x14,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[0x16] = param_3[2];
    param_1[0x15] = uVar2;
    param_1[0x14] = uVar1;
  }
  FUN_10a1ccb30(param_1 + 0x17,param_4);
  uVar2 = param_6[1];
  uVar1 = *param_6;
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_6 + 2);
  param_1[0x1c] = uVar2;
  param_1[0x1b] = uVar1;
  *(undefined2 *)((long)param_1 + 0xec) = *param_7;
  uVar2 = param_9[1];
  uVar1 = *param_9;
  uVar3 = param_9[2];
  uVar5 = param_9[5];
  uVar4 = param_9[4];
  param_1[0x21] = param_9[3];
  param_1[0x20] = uVar3;
  param_1[0x23] = uVar5;
  param_1[0x22] = uVar4;
  param_1[0x1f] = uVar2;
  param_1[0x1e] = uVar1;
  return param_1;
}



/* Entry: 10a247400; end: 10a24751f;  */

void FUN_10a247400(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined7 uStack_30;
  byte bStack_29;
  undefined1 uStack_21;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar1 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  puVar2 = param_2;
  __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_2,0x20,0);
  if (puVar2 != (undefined8 *)0xffffffffffffffff) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&uStack_40,param_2,0,puVar2,&uStack_21);
    uVar3 = (uint)(char)bStack_29;
    if ((char)bStack_29 < '\0') {
      if (lStack_38 != 0) {
        func_0x000107c3192c(param_1,uStack_40);
        uVar5 = 1;
        uVar3 = (uint)bStack_29;
        goto LAB_10a2474cc;
      }
    }
    else if (bStack_29 != 0) {
      param_1[1] = lStack_38;
      *param_1 = uStack_40;
      uVar4 = CONCAT17(bStack_29,uStack_30);
      goto LAB_10a24749c;
    }
    uVar5 = 0;
    *(undefined1 *)param_1 = 0;
LAB_10a2474cc:
    *(undefined1 *)(param_1 + 3) = uVar5;
    if ((uVar3 >> 7 & 1) != 0) {
      __ZdlPv(uStack_40);
    }
    return;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
    goto LAB_10a2474ec;
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar4 = param_2[2];
LAB_10a24749c:
  param_1[2] = uVar4;
LAB_10a2474ec:
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10a247520; end: 10a247593;  */

undefined8 * FUN_10a247520(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb5c68;
  if ((*(char *)(param_1 + 0x12) == '\x01') && (*(char *)((long)param_1 + 0x8f) < '\0')) {
    __ZdlPv(param_1[0xf]);
  }
  FUN_10a26a30c(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a247594; end: 10a24762f;  */

bool FUN_10a247594(long param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong *puVar10;
  
  if (((param_2 != 0) && (*(long *)(param_2 + 0x100) != 0)) &&
     (lVar8 = *(long *)(*(long *)(param_2 + 0x100) + 0x268), lVar8 != 0)) {
    ppuVar9 = *(undefined ***)(lVar8 + 0x70);
    ppuVar1 = &PTR_PTR_1132e53d0;
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar1 = ppuVar9;
    }
    puVar10 = (ulong *)((ulong)ppuVar1[3] & 0xfffffffffffffffc);
    bVar5 = *(byte *)(param_1 + 0x2f);
    uVar2 = *(ulong *)(param_1 + 0x20);
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    bVar6 = *(byte *)((long)puVar10 + 0x17);
    uVar3 = puVar10[1];
    if (-1 < (char)bVar6) {
      uVar3 = (ulong)bVar6;
    }
    if (uVar2 == uVar3) {
      plVar7 = (long *)*(long *)(param_1 + 0x18);
      if (-1 < (char)bVar5) {
        plVar7 = (long *)(param_1 + 0x18);
      }
      puVar4 = (ulong *)*puVar10;
      if (-1 < (char)bVar6) {
        puVar4 = puVar10;
      }
      _memcmp(plVar7,puVar4);
      return (int)plVar7 == 0;
    }
  }
  return false;
}



/* Entry: 10a247630; end: 10a2476af;  */

undefined1  [16] FUN_10a247630(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f6485da;
  return auVar1;
}



/* Entry: 10a2476b0; end: 10a24774f;  */

void FUN_10a2476b0(undefined8 param_1)

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
  FUN_10a247750(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f646f6f;
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
  FUN_10a279d0c();
  FUN_10a279ef8(param_1);
  return;
}



/* Entry: 10a247750; end: 10a247827;  */

/* WARNING: Removing unreachable block (ram,0x00010a2477e8) */

undefined1  [16] FUN_10a247750(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6485da,0x10);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a279c10(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a247828; end: 10a2478ab;  */

undefined1  [16] FUN_10a247828(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f63f2c0;
  return auVar1;
}



/* Entry: 10a2478ac; end: 10a2485c3;  */

void FUN_10a2478ac(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
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
  
  FUN_10a003e74(param_1,&UNK_10f63f2c0,0xf);
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb7358;
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 10;
    puVar6 = *(undefined8 **)(param_1 + 0x1b8);
  }
  else {
    *(undefined1 *)(param_1 + 0x1cf) = 10;
    puVar6 = (undefined8 *)(param_1 + 0x1b8);
  }
  *(undefined2 *)(puVar6 + 1) = 0x6574;
  *puVar6 = 0x6164705574786554;
  *(undefined1 *)((long)puVar6 + 10) = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_a0 = &UNK_10f6485eb;
  uStack_80 = 0x4ffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x16d;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a052690(param_1 + 0x168,&puStack_a0);
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar5 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bb7358;
    uStack_a8 = 0;
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    func_0x0001098949cc(param_1,&UNK_10f6485eb,&ppuStack_b0,&puStack_a0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    func_0x00010a06ba0c(param_1,FUN_10a27a07c,0,0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,"text",FUN_10a27a1d4,FUN_10a27a2b0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f4792c4,FUN_10a27a434,FUN_10a27a4f0);
  }
  uVar5 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar5 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f4792d3,FUN_10a27a5b0,FUN_10a27a66c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    puStack_a0 = *(undefined **)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uVar7 = *(ulong *)(lVar1 + -0x48);
    uVar8 = *(ulong *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar2 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar3 = uStack_80._4_4_;
    uVar5 = param_1;
    uStack_88 = uVar8;
    uStack_80 = uVar7;
    FUN_10a0051e8(param_1,uVar8 & 0xffffffff,uVar2,uStack_50 & 0xffffffff,uVar7 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&puStack_a0,(undefined8 *)(param_1 + 0x1b8),&UNK_10f6485eb,10);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a247b5c);
  (*pcVar4)();
}



/* Entry: 10a2485c4; end: 10a24893b;  */

void FUN_10a2485c4(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f63f2c0,0xf);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb9c60;
  pppuVar2 = (undefined8 ***)&UNK_10f64697a;
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
    ppuStack_b0 = &PTR_DAT_110bb9c60;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a24891c;
    FUN_10a054dac(param_1,&UNK_10f6470ec,FUN_10a27f2dc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a24891c;
    FUN_10a054dac(param_1,&DAT_10f6470fc,FUN_10a27f430,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a24891c;
    FUN_10a054dac(param_1,&UNK_10f64710c,FUN_10a27f7dc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a24891c;
    FUN_10a054dac(param_1,&UNK_10f647121,FUN_10a27f8a4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a24891c;
    FUN_10a054dac(param_1,&UNK_10f64712c,FUN_10a27f990,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a24891c;
    FUN_10a054dac(param_1,&UNK_10f64713f,FUN_10a27fa5c,2,*(undefined8 *)(param_1 + 0x40));
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63f2c0,0xf);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a24891c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a248920);
  (*pcVar6)();
}



/* Entry: 10a24893c; end: 10a248b7b;  */

void FUN_10a24893c(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "TextFieldAction";
  uStack_78 = 0x4ffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f64697a;
  uStack_68 = 0;
  puStack_60 = &UNK_10f64697a;
  uStack_58 = 0;
  uStack_50 = 0x1640000016d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Unset";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0x1640000016d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a248b7c(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Search";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0x1640000016d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a248b7c();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Go";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0x1640000016d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a248b7c();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Next";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0x1640000016d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a248b7c();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Send";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0x1640000016d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a248b7c();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "NewLine";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0x1640000016d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a248b7c();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Done";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0x1640000016d;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a248b7c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a248b7c; end: 10a248c23;  */

undefined8 * FUN_10a248b7c(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a248c24);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a248c24; end: 10a248e0b;  */

void FUN_10a248c24(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x100000064;
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "KeyboardKind";
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "None";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a248e0c(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Unknown";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a248e0c();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "AR";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a248e0c();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Physical";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a248e0c();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Mobile";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x174;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a248e0c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a248e0c; end: 10a248eb3;  */

undefined8 * FUN_10a248e0c(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a248eb4);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a248eb4; end: 10a24910f;  */

void FUN_10a248eb4(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "KeyboardType";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  puStack_70 = &UNK_10f64697a;
  uStack_68 = 0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Text";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a249110(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Num";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a249110();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Phone";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a249110();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Url";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a249110();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Password";
  uStack_88 = 0xffffffff00000002;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a249110();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Pin";
  uStack_88 = 0xffffffff00000002;
  uStack_90 = 0x100000064;
  uStack_78 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a249110();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Email";
  uStack_88 = 0xffffffff00000002;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a249110();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a249110; end: 10a2491b7;  */

undefined8 * FUN_10a249110(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2491b8);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a2491b8; end: 10a2493cf;  */

void FUN_10a2491b8(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "ReturnKeyType";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  puStack_70 = &UNK_10f64697a;
  uStack_68 = 0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Done";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2493d0(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Go";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2493d0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Next";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2493d0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Return";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2493d0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Search";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2493d0();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Send";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64697a;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xa5;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a2493d0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a2493d0; end: 10a249477;  */

undefined8 * FUN_10a2493d0(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a249478);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a249478; end: 10a249daf;  */

/* WARNING: Possible PIC construction at 0x00010a2494d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a249654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a2494dc) */
/* WARNING: Removing unreachable block (ram,0x00010a249524) */
/* WARNING: Removing unreachable block (ram,0x00010a2494e8) */
/* WARNING: Removing unreachable block (ram,0x00010a249528) */
/* WARNING: Removing unreachable block (ram,0x00010a249514) */
/* WARNING: Removing unreachable block (ram,0x00010a249658) */
/* WARNING: Removing unreachable block (ram,0x00010a2496a0) */
/* WARNING: Removing unreachable block (ram,0x00010a249664) */
/* WARNING: Removing unreachable block (ram,0x00010a2496a4) */
/* WARNING: Removing unreachable block (ram,0x00010a249690) */

undefined8 * FUN_10a249478(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined1 *puVar8;
  undefined8 *puStack_5f8;
  undefined8 auStack_5f0 [8];
  byte bStack_5b0;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 **ppuStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_578;
  undefined8 auStack_570 [8];
  byte bStack_530;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 **ppuStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_4f8;
  undefined8 auStack_4f0 [8];
  byte bStack_4b0;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 **ppuStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_478;
  undefined8 auStack_470 [8];
  byte bStack_430;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 **ppuStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_3f8;
  undefined8 auStack_3f0 [8];
  byte bStack_3b0;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 **ppuStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_378;
  undefined8 auStack_370 [8];
  byte bStack_330;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 **ppuStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_2f8;
  undefined8 auStack_2f0 [8];
  byte bStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 **ppuStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_278;
  undefined8 auStack_270 [8];
  byte bStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  undefined8 *puStack_218;
  undefined8 **ppuStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_1f8;
  undefined8 auStack_1f0 [8];
  byte bStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_178;
  undefined1 auStack_170 [64];
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined8 *puStack_118;
  undefined1 **ppuStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [64];
  byte bStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_78;
  undefined1 auStack_70 [64];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 3;
  puStack_78 = auStack_70;
  if (*(char *)(param_2 + 0x40) == '\0') {
    uStack_30 = 0;
  }
  else {
    FUN_10a005398(&puStack_78);
    uStack_30 = *(undefined1 *)(param_2 + 0x40);
    unaff_x20 = param_2;
  }
  puVar4 = (undefined8 *)(param_1 + 0x28);
  puVar8 = auStack_70;
  uStack_88 = 0x10a2494dc;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_b0 = 3;
  puStack_f8 = auStack_f0;
  lStack_a0 = unaff_x20;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x68) == '\0') {
    bStack_b0 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_f8,puVar4);
    bStack_b0 = *(byte *)(param_1 + 0x68);
  }
  FUN_10a279ff4(puVar4,puVar8);
  puVar6 = auStack_f0;
  FUN_10a279ff4(puVar8);
  if (3 < (ulong)bStack_b0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2495f0);
    (*pcVar1)();
  }
  puVar2 = auStack_f0;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_b0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return puVar4;
  }
  ___stack_chk_fail();
  uStack_108 = 0x10a2495f4;
  ppuStack_190 = &ppuStack_110;
  uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_130 = 3;
  puStack_178 = auStack_170;
  puStack_120 = puVar8;
  puStack_118 = puVar4;
  ppuStack_110 = &puStack_90;
  if (puVar6[0x40] == '\0') {
    uStack_130 = 0;
  }
  else {
    FUN_10a005398(&puStack_178);
    uStack_130 = puVar6[0x40];
    puVar8 = puVar6;
  }
  puVar4 = (undefined8 *)(puVar2 + 0x70);
  uStack_188 = 0x10a249658;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_1b0 = 3;
  puStack_1f8 = auStack_1f0;
  puStack_1a0 = puVar8;
  puStack_198 = puVar2;
  if (puVar2[0xb0] == '\0') {
    bStack_1b0 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_1f8,puVar4);
    bStack_1b0 = puVar2[0xb0];
  }
  FUN_10a279ff4(puVar4,auStack_170);
  puVar7 = auStack_1f0;
  FUN_10a279ff4(auStack_170);
  if (3 < (ulong)bStack_1b0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a24976c);
    (*pcVar1)();
  }
  puVar5 = auStack_1f0;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_1b0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar4;
  }
  ___stack_chk_fail();
  uStack_208 = 0x10a249770;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_230 = 3;
  puStack_278 = auStack_270;
  puStack_220 = auStack_170;
  puStack_218 = puVar4;
  ppuStack_210 = &ppuStack_190;
  if (*(char *)(puVar5 + 8) == '\0') {
    bStack_230 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_278,puVar5);
    bStack_230 = *(byte *)(puVar5 + 8);
  }
  FUN_10a279ff4(puVar5,puVar7);
  puVar4 = auStack_270;
  FUN_10a279ff4(puVar7);
  if (3 < (ulong)bStack_230) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a249834);
    (*pcVar1)();
  }
  puVar3 = auStack_270;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_230])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return puVar5;
  }
  ___stack_chk_fail();
  uStack_288 = 0x10a249838;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_2b0 = 3;
  puStack_2f8 = auStack_2f0;
  puStack_2a0 = puVar7;
  puStack_298 = puVar5;
  ppuStack_290 = &ppuStack_210;
  if (*(char *)(puVar3 + 8) == '\0') {
    bStack_2b0 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_2f8,puVar3);
    bStack_2b0 = *(byte *)(puVar3 + 8);
  }
  FUN_10a279ff4(puVar3,puVar4);
  puVar7 = auStack_2f0;
  FUN_10a279ff4(puVar4);
  if (3 < (ulong)bStack_2b0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2498fc);
    (*pcVar1)();
  }
  puVar5 = auStack_2f0;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_2b0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return puVar3;
  }
  ___stack_chk_fail();
  uStack_308 = 0x10a249900;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_330 = 3;
  puStack_378 = auStack_370;
  puStack_320 = puVar4;
  puStack_318 = puVar3;
  ppuStack_310 = &ppuStack_290;
  if (*(char *)(puVar5 + 8) == '\0') {
    bStack_330 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_378,puVar5);
    bStack_330 = *(byte *)(puVar5 + 8);
  }
  FUN_10a279ff4(puVar5,puVar7);
  puVar4 = auStack_370;
  FUN_10a279ff4(puVar7);
  if (3 < (ulong)bStack_330) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a2499c4);
    (*pcVar1)();
  }
  puVar3 = auStack_370;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_330])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return puVar5;
  }
  ___stack_chk_fail();
  uStack_388 = 0x10a2499c8;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_3b0 = 3;
  puStack_3f8 = auStack_3f0;
  puStack_3a0 = puVar7;
  puStack_398 = puVar5;
  ppuStack_390 = &ppuStack_310;
  if (*(char *)(puVar3 + 8) == '\0') {
    bStack_3b0 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_3f8,puVar3);
    bStack_3b0 = *(byte *)(puVar3 + 8);
  }
  FUN_10a279ff4(puVar3,puVar4);
  puVar7 = auStack_3f0;
  FUN_10a279ff4(puVar4);
  if (3 < (ulong)bStack_3b0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a249a8c);
    (*pcVar1)();
  }
  puVar5 = auStack_3f0;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_3b0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return puVar3;
  }
  ___stack_chk_fail();
  uStack_408 = 0x10a249a90;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_430 = 3;
  puStack_478 = auStack_470;
  puStack_420 = puVar4;
  puStack_418 = puVar3;
  ppuStack_410 = &ppuStack_390;
  if (*(char *)(puVar5 + 8) == '\0') {
    bStack_430 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_478,puVar5);
    bStack_430 = *(byte *)(puVar5 + 8);
  }
  FUN_10a279ff4(puVar5,puVar7);
  puVar4 = auStack_470;
  FUN_10a279ff4(puVar7);
  if (3 < (ulong)bStack_430) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a249b54);
    (*pcVar1)();
  }
  puVar3 = auStack_470;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_430])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return puVar5;
  }
  ___stack_chk_fail();
  uStack_488 = 0x10a249b58;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_4b0 = 3;
  puStack_4f8 = auStack_4f0;
  puStack_4a0 = puVar7;
  puStack_498 = puVar5;
  ppuStack_490 = &ppuStack_410;
  if (*(char *)(puVar3 + 8) == '\0') {
    bStack_4b0 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_4f8,puVar3);
    bStack_4b0 = *(byte *)(puVar3 + 8);
  }
  FUN_10a279ff4(puVar3,puVar4);
  puVar7 = auStack_4f0;
  FUN_10a279ff4(puVar4);
  if ((ulong)bStack_4b0 < 4) {
    puVar5 = auStack_4f0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_4b0])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
      return puVar3;
    }
    ___stack_chk_fail();
    uStack_508 = 0x10a249c20;
    lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
    bStack_530 = 3;
    puStack_578 = auStack_570;
    puStack_520 = puVar4;
    puStack_518 = puVar3;
    ppuStack_510 = &ppuStack_490;
    if (*(char *)(puVar5 + 8) == '\0') {
      bStack_530 = 0;
    }
    else {
      FUN_10a05fae4(&puStack_578,puVar5);
      bStack_530 = *(byte *)(puVar5 + 8);
    }
    FUN_10a279ff4(puVar5,puVar7);
    puVar4 = auStack_570;
    FUN_10a279ff4(puVar7);
    if (3 < (ulong)bStack_530) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a249ce4);
      (*pcVar1)();
    }
    puVar3 = auStack_570;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_530])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
      return puVar5;
    }
    ___stack_chk_fail();
    uStack_588 = 0x10a249ce8;
    lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    bStack_5b0 = 3;
    puStack_5f8 = auStack_5f0;
    puStack_5a0 = puVar7;
    puStack_598 = puVar5;
    ppuStack_590 = &ppuStack_510;
    if (*(char *)(puVar3 + 8) == '\0') {
      bStack_5b0 = 0;
    }
    else {
      FUN_10a05fae4(&puStack_5f8,puVar3);
      bStack_5b0 = *(byte *)(puVar3 + 8);
    }
    FUN_10a279ff4(puVar3,puVar4);
    puVar7 = auStack_5f0;
    FUN_10a279ff4(puVar4);
    if ((ulong)bStack_5b0 < 4) {
      puVar4 = auStack_5f0;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_5b0])();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
        return puVar3;
      }
      ___stack_chk_fail();
      *puVar4 = &PTR_DAT_110b17898;
      puVar4[1] = 0;
      puVar4[2] = 0;
      FUN_10a03e114(puVar4 + 3);
      *puVar4 = &PTR_DAT_110bb5e20;
      puVar4[3] = &PTR_DAT_110bb5e80;
      puVar4[7] = puVar7;
      puVar5 = (undefined8 *)0x68;
      __Znwm();
      *puVar5 = 0;
      puVar5[1] = 0;
      __ZNSt3__115recursive_mutexC1Ev(puVar5 + 2);
      puVar5[10] = puVar5 + 10;
      puVar5[0xb] = puVar5 + 10;
      puVar5[0xc] = 0;
      FUN_10a27fba8(puVar4 + 8,puVar5);
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xc] = 0;
      FUN_10a26a3c8(puVar4 + 0xd);
      puVar4[0xb8] = 0;
      puVar4[0xb7] = 0;
      FUN_10a5ae998(puVar4[4],&PTR_DAT_110b9fab0,puVar7,puVar4 + 3);
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a249dac);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a249c1c);
  (*pcVar1)();
}



/* Entry: 10a249db0; end: 10a249f07;  */

undefined8 * FUN_10a249db0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a03e114(param_1 + 3);
  *param_1 = &PTR_DAT_110bb5e20;
  param_1[3] = &PTR_DAT_110bb5e80;
  param_1[7] = param_2;
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = 0;
  puVar1[1] = 0;
  __ZNSt3__115recursive_mutexC1Ev(puVar1 + 2);
  puVar1[10] = puVar1 + 10;
  puVar1[0xb] = puVar1 + 10;
  puVar1[0xc] = 0;
  FUN_10a27fba8(param_1 + 8,puVar1);
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  FUN_10a26a3c8(param_1 + 0xd);
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  FUN_10a5ae998(param_1[4],&PTR_DAT_110b9fab0,param_2,param_1 + 3);
  return param_1;
}



/* Entry: 10a249f08; end: 10a249f73;  */

bool FUN_10a249f08(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_10a249f38;
  }
  else if (*(char *)(param_1 + 0x67) == '\0') {
LAB_10a249f38:
    FUN_10a249f74(param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1 + 0x50)
    ;
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_3 + 0x17);
    }
    return uVar1 != 0;
  }
  return false;
}



/* Entry: 10a249f74; end: 10a24b477;  */

/* WARNING: Removing unreachable block (ram,0x00010a24ab24) */
/* WARNING: Removing unreachable block (ram,0x00010a24aa04) */
/* WARNING: Removing unreachable block (ram,0x00010a24a7a8) */
/* WARNING: Removing unreachable block (ram,0x00010a24a6b8) */
/* WARNING: Removing unreachable block (ram,0x00010a24a734) */
/* WARNING: Removing unreachable block (ram,0x00010a24a8e8) */
/* WARNING: Removing unreachable block (ram,0x00010a24aa80) */
/* WARNING: Removing unreachable block (ram,0x00010a24ab80) */

void FUN_10a249f74(long param_1,uint ****param_2)

{
  undefined8 *****pppppuVar1;
  long *plVar2;
  uint ****ppppuVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  uint *puVar9;
  undefined4 ****ppppuVar10;
  code *pcVar11;
  bool bVar12;
  uint *****pppppuVar13;
  long ******pppppplVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 in_x7;
  uint ****ppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  long lVar20;
  uint ***pppuVar21;
  long lVar22;
  float fVar23;
  undefined4 *****pppppuStack_700;
  undefined4 ****ppppuStack_6f8;
  undefined1 auStack_6e8 [8];
  long *plStack_6e0;
  undefined8 *****pppppuStack_6d8;
  undefined4 ***apppuStack_6d0 [8];
  byte bStack_690;
  undefined4 ***apppuStack_688 [8];
  byte bStack_648;
  undefined4 ***apppuStack_640 [8];
  byte bStack_600;
  uint ***apppuStack_5f8 [8];
  byte bStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  ulong uStack_570;
  uint *apuStack_568 [2];
  long alStack_558 [6];
  byte bStack_528;
  undefined8 uStack_520;
  undefined8 *****apppppuStack_518 [8];
  byte bStack_4d8;
  undefined8 *****apppppuStack_4d0 [8];
  byte bStack_490;
  undefined8 *****apppppuStack_488 [8];
  byte bStack_448;
  undefined8 *****apppppuStack_440 [8];
  byte bStack_400;
  undefined8 *****apppppuStack_3f8 [8];
  byte bStack_3b8;
  undefined8 *****apppppuStack_3b0 [8];
  byte bStack_370;
  undefined8 *****pppppuStack_368;
  undefined4 ****appppuStack_360 [7];
  byte bStack_328;
  long *****ppppplStack_320;
  undefined4 ****appppuStack_318 [7];
  byte bStack_2e0;
  undefined8 *****pppppuStack_2d8;
  undefined8 *****apppppuStack_2d0 [7];
  byte bStack_298;
  code *****pppppcStack_290;
  undefined4 ****appppuStack_288 [7];
  byte bStack_250;
  long *****ppppplStack_248;
  undefined4 ****appppuStack_240 [7];
  byte bStack_208;
  undefined4 *****pppppuStack_200;
  undefined4 ****appppuStack_1f8 [7];
  byte bStack_1c0;
  uint ****ppppuStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  byte bStack_170;
  uint ***pppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  byte bStack_128;
  uint **ppuStack_120;
  undefined8 *****pppppuStack_118;
  uint ****ppppuStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  byte bStack_e0;
  uint uStack_d8;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined2 uStack_ca;
  undefined8 uStack_c8;
  byte bStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x67) < '\0') {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_10a249fc8;
LAB_10a24b16c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (*(char *)(param_1 + 0x67) != '\0') goto LAB_10a24b16c;
LAB_10a249fc8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x68,param_2)
    ;
    uVar5 = *(undefined4 *)((long)param_2 + 0x1f);
    *(uint ****)(param_1 + 0x80) = param_2[3];
    *(undefined4 *)(param_1 + 0x87) = uVar5;
    bStack_98 = 3;
    apuStack_568[0] = &uStack_d8;
    if (*(char *)(param_2 + 0xd) == '\0') {
      bStack_98 = 0;
    }
    else {
      FUN_10a005398(apuStack_568,param_2 + 5);
      bStack_98 = *(byte *)(param_2 + 0xd);
    }
    func_0x00010a24952c(param_1 + 0x90,&uStack_d8);
    if (3 < (ulong)bStack_98) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_98])(&uStack_d8);
    bStack_528 = 3;
    ppuStack_120 = apuStack_568;
    if (*(char *)(param_2 + 0x16) == '\0') {
      bStack_528 = 0;
    }
    else {
      FUN_10a005398(&ppuStack_120,param_2 + 0xe);
      bStack_528 = *(byte *)(param_2 + 0x16);
    }
    func_0x00010a2496a8(param_1 + 0xd8,apuStack_568);
    if (3 < (ulong)bStack_528) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_528])(apuStack_568);
    bStack_e0 = 3;
    pppuStack_168 = &ppuStack_120;
    if (*(char *)(param_2 + 0x1f) == '\0') {
      bStack_e0 = 0;
    }
    else {
      FUN_10a005398(&pppuStack_168,param_2 + 0x17);
      bStack_e0 = *(byte *)(param_2 + 0x1f);
    }
    func_0x00010a249770(param_1 + 0x120,&ppuStack_120);
    if (3 < (ulong)bStack_e0) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_e0])(&ppuStack_120);
    bStack_128 = 3;
    ppppuStack_1b0 = &pppuStack_168;
    if (*(char *)(param_2 + 0x28) == '\0') {
      bStack_128 = 0;
    }
    else {
      FUN_10a005398(&ppppuStack_1b0,param_2 + 0x20);
      bStack_128 = *(byte *)(param_2 + 0x28);
    }
    func_0x00010a249838(param_1 + 0x168,&pppuStack_168);
    if (3 < (ulong)bStack_128) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_128])(&pppuStack_168);
    bStack_170 = 3;
    pppppuStack_200 = &ppppuStack_1b0;
    if (*(char *)(param_2 + 0x31) == '\0') {
      bStack_170 = 0;
    }
    else {
      FUN_10a005398(&pppppuStack_200,param_2 + 0x29);
      bStack_170 = *(byte *)(param_2 + 0x31);
    }
    func_0x00010a249900(param_1 + 0x1b0,&ppppuStack_1b0);
    if (3 < (ulong)bStack_170) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_170])(&ppppuStack_1b0);
    *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)(param_2 + 0x32);
    bStack_1c0 = 3;
    ppppplStack_248 = (long *****)&pppppuStack_200;
    if (*(char *)(param_2 + 0x3b) == '\0') {
      bStack_1c0 = 0;
    }
    else {
      FUN_10a005398(&ppppplStack_248,param_2 + 0x33);
      bStack_1c0 = *(byte *)(param_2 + 0x3b);
    }
    func_0x00010a249900(param_1 + 0x200,&pppppuStack_200);
    if (3 < (ulong)bStack_1c0) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_1c0])(&pppppuStack_200);
    *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x3c);
    bStack_208 = 3;
    pppppcStack_290 = (code *****)&ppppplStack_248;
    if (*(char *)(param_2 + 0x45) == '\0') {
      bStack_208 = 0;
    }
    else {
      FUN_10a005398(&pppppcStack_290,param_2 + 0x3d);
      bStack_208 = *(byte *)(param_2 + 0x45);
    }
    func_0x00010a2499c8(param_1 + 0x250,&ppppplStack_248);
    if (3 < (ulong)bStack_208) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_208])(&ppppplStack_248);
    *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_2 + 0x46);
    bStack_250 = 3;
    pppppuStack_2d8 = &pppppcStack_290;
    if (*(char *)(param_2 + 0x4f) == '\0') {
      bStack_250 = 0;
    }
    else {
      FUN_10a005398(&pppppuStack_2d8,param_2 + 0x47);
      bStack_250 = *(byte *)(param_2 + 0x4f);
    }
    func_0x00010a2496a8(param_1 + 0x2a0,&pppppcStack_290);
    if (3 < (ulong)bStack_250) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_250])(&pppppcStack_290);
    *(undefined1 *)(param_1 + 0x2e8) = *(undefined1 *)(param_2 + 0x50);
    bStack_298 = 3;
    ppppplStack_320 = (long *****)&pppppuStack_2d8;
    if (*(char *)(param_2 + 0x59) == '\0') {
      bStack_298 = 0;
    }
    else {
      FUN_10a005398(&ppppplStack_320,param_2 + 0x51);
      bStack_298 = *(byte *)(param_2 + 0x59);
    }
    func_0x00010a2496a8(param_1 + 0x2f0,&pppppuStack_2d8);
    if (3 < (ulong)bStack_298) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_298])(&pppppuStack_2d8);
    *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_2 + 0x5a);
    bStack_2e0 = 3;
    pppppuStack_368 = &ppppplStack_320;
    if (*(char *)(param_2 + 99) == '\0') {
      bStack_2e0 = 0;
    }
    else {
      FUN_10a005398(&pppppuStack_368,param_2 + 0x5b);
      bStack_2e0 = *(byte *)(param_2 + 99);
    }
    func_0x00010a2499c8(param_1 + 0x340,&ppppplStack_320);
    if (3 < (ulong)bStack_2e0) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_2e0])(&ppppplStack_320);
    *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 100);
    bStack_328 = 3;
    apppppuStack_3b0[0] = &pppppuStack_368;
    if (*(char *)(param_2 + 0x6d) == '\0') {
      bStack_328 = 0;
    }
    else {
      FUN_10a005398(apppppuStack_3b0,param_2 + 0x65);
      bStack_328 = *(byte *)(param_2 + 0x6d);
    }
    func_0x00010a249a90(param_1 + 0x390,&pppppuStack_368);
    if (3 < (ulong)bStack_328) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_328])(&pppppuStack_368);
    *(undefined1 *)(param_1 + 0x3d8) = *(undefined1 *)(param_2 + 0x6e);
    bStack_370 = 3;
    apppppuStack_3f8[0] = apppppuStack_3b0;
    if (*(char *)(param_2 + 0x77) == '\0') {
      bStack_370 = 0;
    }
    else {
      FUN_10a005398(apppppuStack_3f8,param_2 + 0x6f);
      bStack_370 = *(byte *)(param_2 + 0x77);
    }
    func_0x00010a249b58(param_1 + 0x3e0,apppppuStack_3b0);
    if (3 < (ulong)bStack_370) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_370])(apppppuStack_3b0);
    *(undefined1 *)(param_1 + 0x428) = *(undefined1 *)(param_2 + 0x78);
    bStack_3b8 = 3;
    apppppuStack_440[0] = apppppuStack_3f8;
    if (*(char *)(param_2 + 0x81) == '\0') {
      bStack_3b8 = 0;
    }
    else {
      FUN_10a005398(apppppuStack_440,param_2 + 0x79);
      bStack_3b8 = *(byte *)(param_2 + 0x81);
    }
    func_0x00010a249c20(param_1 + 0x430,apppppuStack_3f8);
    if (3 < (ulong)bStack_3b8) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_3b8])(apppppuStack_3f8);
    *(undefined1 *)(param_1 + 0x478) = *(undefined1 *)(param_2 + 0x82);
    bStack_400 = 3;
    apppppuStack_488[0] = apppppuStack_440;
    if (*(char *)(param_2 + 0x8b) == '\0') {
      bStack_400 = 0;
    }
    else {
      FUN_10a005398(apppppuStack_488,param_2 + 0x83);
      bStack_400 = *(byte *)(param_2 + 0x8b);
    }
    func_0x00010a249ce8(param_1 + 0x480,apppppuStack_440);
    if (3 < (ulong)bStack_400) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_400])(apppppuStack_440);
    *(undefined1 *)(param_1 + 0x4c8) = *(undefined1 *)(param_2 + 0x8c);
    bStack_448 = 3;
    apppppuStack_4d0[0] = apppppuStack_488;
    if (*(char *)(param_2 + 0x95) == '\0') {
      bStack_448 = 0;
    }
    else {
      FUN_10a005398(apppppuStack_4d0,param_2 + 0x8d);
      bStack_448 = *(byte *)(param_2 + 0x95);
    }
    func_0x00010a2496a8(param_1 + 0x4d0,apppppuStack_488);
    if (3 < (ulong)bStack_448) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_448])(apppppuStack_488);
    *(undefined1 *)(param_1 + 0x518) = *(undefined1 *)(param_2 + 0x96);
    bStack_490 = 3;
    apppppuStack_518[0] = apppppuStack_4d0;
    if (*(char *)(param_2 + 0x9f) == '\0') {
      bStack_490 = 0;
    }
    else {
      FUN_10a005398(apppppuStack_518,param_2 + 0x97);
      bStack_490 = *(byte *)(param_2 + 0x9f);
    }
    func_0x00010a2496a8(param_1 + 0x520,apppppuStack_4d0);
    if (3 < (ulong)bStack_490) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_490])(apppppuStack_4d0);
    *(undefined1 *)(param_1 + 0x568) = *(undefined1 *)(param_2 + 0xa0);
    bStack_4d8 = 3;
    pppppuStack_6d8 = apppppuStack_518;
    if (*(char *)(param_2 + 0xa9) == '\0') {
      bStack_4d8 = 0;
    }
    else {
      FUN_10a005398(&pppppuStack_6d8,param_2 + 0xa1);
      bStack_4d8 = *(byte *)(param_2 + 0xa9);
    }
    func_0x00010a2496a8(param_1 + 0x570,apppppuStack_518);
    if (3 < (ulong)bStack_4d8) goto LAB_10a24b260;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_4d8])(apppppuStack_518);
    pppuStack_168 = (uint ***)FUN_10a280278;
    ppuStack_160 = &PTR_DAT_110bb74c0;
    ppppuStack_1b0 = (uint ****)((ulong)ppppuStack_1b0 & 0xffffffffffffff00);
    plStack_1a8 = (long *)0x0;
    appppuStack_1f8[0] = (undefined4 ****)0x0;
    pppppuStack_200._0_1_ = 3;
    ppppuVar17 = param_2;
    lStack_158 = param_1;
    func_0x00010938229c();
    uStack_c8 = CONCAT17(4,(undefined7)uStack_c8);
    uStack_d8 = 0x74786574;
    uStack_d4 = 0;
    pppppuVar13 = &ppppuStack_1b0;
    appppuStack_1f8[0] = ppppuVar17;
    func_0x0001095b7584(pppppuVar13,&uStack_d8);
    uVar6 = *(undefined1 *)pppppuVar13;
    *(undefined1 *)pppppuVar13 = pppppuStack_200._0_1_;
    pppppuStack_200 = (undefined4 *****)CONCAT71(pppppuStack_200._1_7_,uVar6);
    ppppuVar17 = pppppuVar13[1];
    pppppuVar13[1] = appppuStack_1f8[0];
    appppuStack_1f8[0] = ppppuVar17;
    func_0x000109380ffc(appppuStack_1f8,uVar6);
    fVar23 = *(float *)((long)param_2 + 0x1c);
    appppuStack_240[0] = (undefined4 ****)(long)(int)*(float *)(param_2 + 3);
    ppppplStack_248._0_1_ = 5;
    uStack_c8 = CONCAT17(5,(undefined7)uStack_c8);
    uStack_d8 = 0x72617473;
    uStack_d4 = 0x74;
    uStack_d3 = 0;
    pppppuVar13 = &ppppuStack_1b0;
    func_0x0001095b7584(pppppuVar13,&uStack_d8);
    uVar6 = *(undefined1 *)pppppuVar13;
    *(undefined1 *)pppppuVar13 = ppppplStack_248._0_1_;
    ppppplStack_248 = (long *****)CONCAT71(ppppplStack_248._1_7_,uVar6);
    ppppuVar17 = pppppuVar13[1];
    pppppuVar13[1] = appppuStack_240[0];
    appppuStack_240[0] = ppppuVar17;
    func_0x000109380ffc(appppuStack_240,uVar6);
    appppuStack_288[0] = (undefined4 ****)(long)(int)fVar23;
    pppppcStack_290._0_1_ = 5;
    uStack_c8 = CONCAT17(3,(undefined7)uStack_c8);
    uStack_d8 = 0x646e65;
    pppppuVar13 = &ppppuStack_1b0;
    func_0x0001095b7584(pppppuVar13,&uStack_d8);
    uVar6 = *(undefined1 *)pppppuVar13;
    *(undefined1 *)pppppuVar13 = pppppcStack_290._0_1_;
    pppppcStack_290 = (code *****)CONCAT71(pppppcStack_290._1_7_,uVar6);
    ppppuVar17 = pppppuVar13[1];
    pppppuVar13[1] = appppuStack_288[0];
    appppuStack_288[0] = ppppuVar17;
    func_0x000109380ffc(appppuStack_288,uVar6);
    bVar7 = *(byte *)(param_2 + 4);
    if (bVar7 < 3) {
      if (bVar7 == 0) {
        ppppplStack_320 = (long *****)0x10f2680ba;
        appppuStack_318[0] = (uint ****)0x4;
      }
      else {
        if (bVar7 != 1) {
          if (bVar7 == 2) {
            ppppplStack_320 = (long *****)&DAT_10f535a85;
            goto LAB_10a24a828;
          }
          goto LAB_10a24b1d4;
        }
        ppppplStack_320 = (long *****)&UNK_10f582653;
        appppuStack_318[0] = (uint ****)0x6;
      }
    }
    else if (bVar7 < 5) {
      if (bVar7 == 3) {
        ppppplStack_320 = (long *****)&UNK_10f647196;
LAB_10a24a864:
        appppuStack_318[0] = (uint ****)0x3;
      }
      else {
        if (bVar7 != 4) {
LAB_10a24b1d4:
          __ZNSt3__19to_stringEi(&ppuStack_120);
          FUN_109feb280(&uStack_d8,&UNK_10f64861e,&ppuStack_120);
          FUN_10a0029c0(&uStack_d8);
          goto LAB_10a24b260;
        }
        ppppplStack_320 = (long *****)0x10f2a65bb;
        appppuStack_318[0] = (uint ****)0x8;
      }
    }
    else {
      if (bVar7 == 5) {
        ppppplStack_320 = (long *****)&DAT_10f2fffce;
        goto LAB_10a24a864;
      }
      if (bVar7 != 6) goto LAB_10a24b1d4;
      ppppplStack_320 = (long *****)&UNK_10f64719a;
LAB_10a24a828:
      appppuStack_318[0] = (uint ****)0x5;
    }
    apppppuStack_2d0[0] = (undefined8 *****)0x0;
    pppppuStack_2d8._0_1_ = 3;
    pppppplVar14 = &ppppplStack_320;
    FUN_10a26a62c();
    uStack_c8 = CONCAT17(0xc,(undefined7)uStack_c8);
    uStack_d0 = 0x65707954;
    uStack_d8 = 0x6279656b;
    uStack_d4 = 0x6f;
    uStack_d3 = 0x61;
    uStack_d2 = 0x6472;
    uStack_cc = 0;
    pppppuVar13 = &ppppuStack_1b0;
    apppppuStack_2d0[0] = pppppplVar14;
    func_0x0001095b7584(pppppuVar13,&uStack_d8);
    uVar6 = *(undefined1 *)pppppuVar13;
    *(undefined1 *)pppppuVar13 = pppppuStack_2d8._0_1_;
    pppppuStack_2d8 = (undefined8 *****)CONCAT71(pppppuStack_2d8._1_7_,uVar6);
    pppppuVar18 = (undefined8 *****)pppppuVar13[1];
    pppppuVar13[1] = (uint ****)apppppuStack_2d0[0];
    apppppuStack_2d0[0] = pppppuVar18;
    func_0x000109380ffc(apppppuStack_2d0,uVar6);
    bVar7 = *(byte *)((long)param_2 + 0x21);
    if (2 < bVar7) {
      if (bVar7 == 3) {
        ppppplStack_320 = (long *****)&DAT_10f517bf9;
      }
      else {
        if (bVar7 != 4) {
          if (bVar7 != 5) goto LAB_10a24b1ac;
          ppppplStack_320 = (long *****)&DAT_10f4bb138;
          goto LAB_10a24a970;
        }
        ppppplStack_320 = (long *****)&DAT_10f399f19;
      }
      appppuStack_318[0] = (undefined4 ****)0x6;
LAB_10a24a984:
      pppppuStack_118 = (undefined8 *****)0x0;
      ppuStack_120._0_1_ = 3;
      pppppplVar14 = &ppppplStack_320;
      FUN_10a26a62c();
      uStack_c8 = CONCAT17(0xd,(undefined7)uStack_c8);
      uStack_d8 = 0x75746572;
      uStack_d4 = 0x72;
      uStack_d3 = 0x6e;
      uStack_d2 = 0x654b;
      uStack_d0 = 0x70795479;
      uStack_cc = 0x65;
      uStack_cb = 0;
      pppppuVar13 = &ppppuStack_1b0;
      pppppuStack_118 = pppppplVar14;
      func_0x0001095b7584(pppppuVar13,&uStack_d8);
      uVar6 = *(undefined1 *)pppppuVar13;
      *(undefined1 *)pppppuVar13 = ppuStack_120._0_1_;
      ppuStack_120 = (uint **)CONCAT71(ppuStack_120._1_7_,uVar6);
      pppppuVar18 = (undefined8 *****)pppppuVar13[1];
      pppppuVar13[1] = (uint ****)pppppuStack_118;
      pppppuStack_118 = pppppuVar18;
      func_0x000109380ffc(&pppppuStack_118,uVar6);
      appppuStack_318[0] = (undefined4 ****)(ulong)*(byte *)((long)param_2 + 0x22);
      ppppplStack_320._0_1_ = 4;
      uStack_c8 = CONCAT17(0xd,(undefined7)uStack_c8);
      uStack_d8 = 0x62616e65;
      uStack_d4 = 0x6c;
      uStack_d3 = 0x65;
      uStack_d2 = 0x7250;
      uStack_d0 = 0x65697665;
      uStack_cc = 0x77;
      uStack_cb = 0;
      pppppuVar13 = &ppppuStack_1b0;
      func_0x0001095b7584(pppppuVar13,&uStack_d8);
      uVar6 = *(undefined1 *)pppppuVar13;
      *(undefined1 *)pppppuVar13 = 4;
      ppppplStack_320 = (long *****)CONCAT71(ppppplStack_320._1_7_,uVar6);
      ppppuVar17 = pppppuVar13[1];
      pppppuVar13[1] = appppuStack_318[0];
      appppuStack_318[0] = ppppuVar17;
      func_0x000109380ffc(appppuStack_318,uVar6);
      appppuStack_360[0] = (undefined4 ****)(ulong)*(byte *)(param_2 + 100);
      if ((*(byte *)(param_2 + 0x3c) & *(byte *)(param_2 + 0x46) & 1) == 0) {
        appppuStack_360[0] = (uint ****)0x0;
      }
      pppppuStack_368._0_1_ = 4;
      puVar15 = (undefined8 *)0x19;
      __Znwm();
      uStack_d8 = (uint)puVar15;
      uStack_d4 = (undefined1)((ulong)puVar15 >> 0x20);
      uStack_d3 = (undefined1)((ulong)puVar15 >> 0x28);
      uStack_d2 = (undefined2)((ulong)puVar15 >> 0x30);
      uStack_c8 = 0x8000000000000019;
      uStack_d0 = 0x17;
      uStack_cc = 0;
      uStack_cb = 0;
      uStack_ca = 0;
      puVar15[1] = 0x706d6f4374786554;
      *puVar15 = 0x7374726f70707573;
      *(undefined8 *)((long)puVar15 + 0xf) = 0x6e6f697469736f70;
      *(undefined1 *)((long)puVar15 + 0x17) = 0;
      pppppuVar13 = &ppppuStack_1b0;
      func_0x0001095b7584(pppppuVar13,&uStack_d8);
      uVar6 = *(undefined1 *)pppppuVar13;
      *(undefined1 *)pppppuVar13 = pppppuStack_368._0_1_;
      pppppuStack_368 = (undefined8 *****)CONCAT71(pppppuStack_368._1_7_,uVar6);
      ppppuVar17 = pppppuVar13[1];
      pppppuVar13[1] = appppuStack_360[0];
      appppuStack_360[0] = ppppuVar17;
      func_0x000109380ffc(appppuStack_360,uVar6);
      FUN_10a0c32e4(&uStack_d8,&ppppuStack_1b0,0xffffffff,0x20,0,0);
      uVar4 = CONCAT26(uStack_ca,CONCAT15(uStack_cb,CONCAT14(uStack_cc,uStack_d0)));
      puVar9 = (uint *)CONCAT26(uStack_d2,CONCAT15(uStack_d3,CONCAT14(uStack_d4,uStack_d8)));
      if (-1 < (long)uStack_c8) {
        uVar4 = uStack_c8 >> 0x38;
        puVar9 = &uStack_d8;
      }
      FUN_10a3bf330(apuStack_568,puVar9,uVar4);
      func_0x000109380ffc(&plStack_1a8,(ulong)ppppuStack_1b0 & 0xff);
      lVar22 = *(long *)(*(long *)(param_1 + 0x38) + 0x100);
      FUN_10a00ce20(&ppppuStack_1b0,*(undefined8 *)(param_1 + 0x40),&pppuStack_168);
      ppppuVar17 = (uint ****)0x138;
      __Znwm();
      puVar9 = apuStack_568[0];
      ppppuVar17[1] = (uint ***)0x0;
      ppppuVar17[2] = (uint ***)0x0;
      *ppppuVar17 = (uint ***)&PTR_FUN_110b9f3b0;
      pppppuVar13 = (uint *****)(ppppuVar17 + 3);
      apuStack_568[0] = (uint *)0x0;
      uStack_d8 = (uint)puVar9;
      uStack_d4 = (undefined1)((ulong)puVar9 >> 0x20);
      uStack_d3 = (undefined1)((ulong)puVar9 >> 0x28);
      uStack_d2 = (undefined2)((ulong)puVar9 >> 0x30);
      uStack_d0 = SUB84(apuStack_568[1],0);
      uStack_cc = (undefined1)((ulong)apuStack_568[1] >> 0x20);
      uStack_cb = (undefined1)((ulong)apuStack_568[1] >> 0x28);
      uStack_ca = (undefined2)((ulong)apuStack_568[1] >> 0x30);
      (**(code **)(alStack_558[0] + 0x10))(&uStack_c8,alStack_558);
      uStack_90 = uStack_520;
      uVar4 = *(ulong *)(lVar22 + 0x210);
      lVar20 = *(long *)(lVar22 + 0x208);
      if (-1 < (char)*(byte *)(lVar22 + 0x21f)) {
        uVar4 = (ulong)*(byte *)(lVar22 + 0x21f);
        lVar20 = lVar22 + 0x208;
      }
      ppuStack_120 = (uint **)0x10a05c39c;
      pppppuStack_118 = (undefined8 *****)&PTR_FUN_110b9f370;
      ppppuStack_110 = ppppuStack_1b0;
      uStack_100 = uStack_1a0;
      plStack_108 = plStack_1a8;
      plStack_1a8 = (long *)0x0;
      uStack_1a0 = 0;
      FUN_10a23708c(pppppuVar13,&UNK_10e4a2255,0x1f,&UNK_10f647b49,4,&uStack_d8,1,in_x7,lVar20,uVar4
                    ,&ppuStack_120);
      (*(code *)*pppppuStack_118)(&pppppuStack_118);
      FUN_10a042634(&uStack_d8);
      pppppuStack_200 = pppppuVar13;
      appppuStack_1f8[0] = ppppuVar17;
      func_0x00010a05c07c(&ppppuStack_1b0);
      plVar16 = *(long **)(*(long *)(*(long *)(param_1 + 0x38) + 0x100) + 0x1c8);
      (**(code **)(*plVar16 + 0x60))();
      pppppuStack_118 = (undefined8 *****)0x0;
      ppuStack_120 = (uint **)0x0;
      pppppuVar18 = (undefined8 *****)plVar16[1];
      if (((pppppuVar18 == (undefined8 *****)0x0) ||
          (__ZNSt3__119__shared_weak_count4lockEv(), pppppuStack_118 = pppppuVar18,
          pppppuVar18 == (undefined8 *****)0x0)) ||
         (ppuStack_120 = (uint **)*plVar16, ppuStack_120 == (uint **)0x0)) {
        pppppuVar18 = pppppuStack_118;
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f6471ae,&UNK_10f6471ed,0x10c,&UNK_10f64724b);
        }
        FUN_10a24b478(param_1);
      }
      else {
        if (((((ulong)param_2[0x82] & 1) == 0) && (((ulong)param_2[0x8c] & 1) == 0)) &&
           ((((ulong)param_2[0x96] & 1) == 0 && (((ulong)param_2[0xa0] & 1) == 0)))) {
LAB_10a24b08c:
          pppppuStack_700 = pppppuVar13;
          ppppuVar3 = ppppuVar17 + 1;
          do {
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppuVar3,0x10);
            if (bVar12) {
              *ppppuVar3 = (uint ***)((long)*ppppuVar3 + 1);
              cVar8 = ExclusiveMonitorsStatus();
            }
            ppppuStack_6f8 = ppppuVar17;
          } while (cVar8 != '\0');
        }
        else {
          (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x38) + 0x100) + 0x1c8) + 0x118))
                    (&ppppuStack_1b0);
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d3 = 0;
          uStack_d2 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_cb = 0;
          uStack_ca = 0;
          if (plStack_1a8 == (long *)0x0) {
            plVar16 = (long *)0x0;
LAB_10a24adf4:
            if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
              func_0x00010ae06f08(1,2,&UNK_10f6471ae,&UNK_10f6471ed,0x121,&UNK_10f647287);
            }
          }
          else {
            plVar16 = plStack_1a8;
            __ZNSt3__119__shared_weak_count4lockEv();
            uStack_d0 = SUB84(plVar16,0);
            uStack_cc = (undefined1)((ulong)plVar16 >> 0x20);
            uStack_cb = (undefined1)((ulong)plVar16 >> 0x28);
            uStack_ca = (undefined2)((ulong)plVar16 >> 0x30);
            if (plVar16 != (long *)0x0) {
              uStack_d8 = (uint)ppppuStack_1b0;
              uStack_d4 = (undefined1)((ulong)ppppuStack_1b0 >> 0x20);
              uStack_d3 = (undefined1)((ulong)ppppuStack_1b0 >> 0x28);
              uStack_d2 = (undefined2)((ulong)ppppuStack_1b0 >> 0x30);
            }
            bVar12 = ppppuStack_1b0 == (uint ****)0x0;
            if (plStack_1a8 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (plVar16 == (long *)0x0 || bVar12) goto LAB_10a24adf4;
            lVar20 = *(long *)(param_1 + 0x5b8);
            if (lVar20 == 0) {
              FUN_10a282a84(&ppppuStack_1b0,*(undefined8 *)(param_1 + 0x38));
              FUN_10a24bcd4((long *)(param_1 + 0x5b8),&ppppuStack_1b0);
              plVar16 = plStack_1a8;
              if (plStack_1a8 != (long *)0x0) {
                plVar2 = plStack_1a8 + 1;
                do {
                  lVar20 = *plVar2;
                  cVar8 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar12) {
                    *plVar2 = lVar20 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar20 == 0) {
                  (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
                }
              }
              lVar20 = *(long *)(param_1 + 0x5b8);
            }
            bStack_690 = 3;
            ppppuStack_1b0 = apppuStack_6d0;
            if (*(char *)(param_2 + 0x81) == '\0') {
              bStack_690 = 0;
            }
            else {
              FUN_10a005398(&ppppuStack_1b0,param_2 + 0x79);
              bStack_690 = *(byte *)(param_2 + 0x81);
            }
            bStack_648 = 3;
            if (*(char *)(param_2 + 0x8b) == '\0') {
              bStack_648 = 0;
            }
            else {
              ppppuStack_1b0 = apppuStack_688;
              FUN_10a005398(&ppppuStack_1b0,param_2 + 0x83);
              bStack_648 = *(byte *)(param_2 + 0x8b);
            }
            bStack_600 = 3;
            if (*(char *)(param_2 + 0x95) == '\0') {
              bStack_600 = 0;
            }
            else {
              ppppuStack_1b0 = apppuStack_640;
              FUN_10a005398(&ppppuStack_1b0,param_2 + 0x8d);
              bStack_600 = *(byte *)(param_2 + 0x95);
            }
            bStack_5b8 = 3;
            ppppuStack_1b0 = apppuStack_5f8;
            if (*(char *)(param_2 + 0x9f) == '\0') {
              bStack_5b8 = 0;
            }
            else {
              FUN_10a005398(&ppppuStack_1b0,param_2 + 0x97);
              bStack_5b8 = *(byte *)(param_2 + 0x9f);
            }
            uStack_5a8 = 0;
            uStack_5b0 = 0;
            uStack_598 = 0;
            uStack_5a0 = 0;
            uStack_588 = 0;
            uStack_590 = 0;
            uStack_578 = 0;
            uStack_580 = 0;
            uStack_570 = 0;
            (**(code **)(*(long *)CONCAT26(uStack_d2,
                                           CONCAT15(uStack_d3,CONCAT14(uStack_d4,uStack_d8))) + 0x10
                        ))(auStack_6e8);
            FUN_10a593a30(lVar20,apppuStack_6d0,auStack_6e8);
            if (plStack_6e0 != (long *)0x0) {
              plVar16 = plStack_6e0 + 1;
              do {
                lVar20 = *plVar16;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar12) {
                  *plVar16 = lVar20 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plStack_6e0 + 0x10))(plStack_6e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_6e0);
              }
            }
            if (3 < (uStack_570 & 0xff)) goto LAB_10a24b260;
            (*(code *)(&PTR_FUN_110b9a040)[uStack_570 & 0xff])(&uStack_5b0);
            if (3 < (ulong)bStack_5b8) goto LAB_10a24b260;
            (*(code *)(&PTR_FUN_110b9a040)[bStack_5b8])(apppuStack_5f8);
            if (3 < (ulong)bStack_600) goto LAB_10a24b260;
            (*(code *)(&PTR_FUN_110b9a040)[bStack_600])(apppuStack_640);
            if (3 < (ulong)bStack_648) goto LAB_10a24b260;
            (*(code *)(&PTR_FUN_110b9a040)[bStack_648])(apppuStack_688);
            if (3 < (ulong)bStack_690) goto LAB_10a24b260;
            (*(code *)(&PTR_FUN_110b9a040)[bStack_690])(apppuStack_6d0);
            plVar16 = (long *)CONCAT26(uStack_ca,CONCAT15(uStack_cb,CONCAT14(uStack_cc,uStack_d0)));
          }
          if (plVar16 != (long *)0x0) {
            plVar2 = plVar16 + 1;
            do {
              lVar20 = *plVar2;
              cVar8 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar12) {
                *plVar2 = lVar20 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
            }
          }
          ppppuStack_6f8 = appppuStack_1f8[0];
          pppppuStack_700 = pppppuStack_200;
          ppppuVar17 = appppuStack_1f8[0];
          pppppuVar13 = pppppuStack_700;
          if (appppuStack_1f8[0] != (uint ****)0x0) goto LAB_10a24b08c;
        }
        (**(code **)(*ppuStack_120 + 4))(&uStack_d8,ppuStack_120,&pppppuStack_700);
        if (*(char *)(param_1 + 0x67) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 0x50));
        }
        ppppuVar10 = ppppuStack_6f8;
        *(ulong *)(param_1 + 0x58) =
             CONCAT26(uStack_ca,CONCAT15(uStack_cb,CONCAT14(uStack_cc,uStack_d0)));
        *(ulong *)(param_1 + 0x50) =
             CONCAT26(uStack_d2,CONCAT15(uStack_d3,CONCAT14(uStack_d4,uStack_d8)));
        *(ulong *)(param_1 + 0x60) = uStack_c8;
        uStack_c8 = uStack_c8 & 0xffffffffffffff;
        uStack_d8 = uStack_d8 & 0xffffff00;
        pppppuVar18 = pppppuStack_118;
        if (ppppuStack_6f8 != (uint ****)0x0) {
          ppppuVar17 = ppppuStack_6f8 + 1;
          do {
            pppuVar21 = *ppppuVar17;
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppppuVar17,0x10);
            if (bVar12) {
              *ppppuVar17 = (uint ***)((long)pppuVar21 + -1);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (pppuVar21 == (uint ***)0x0) {
            (*(code *)(*ppppuStack_6f8)[2])(ppppuStack_6f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar10);
            pppppuVar18 = pppppuStack_118;
          }
        }
      }
      if (pppppuVar18 != (undefined8 *****)0x0) {
        pppppuVar1 = pppppuVar18 + 1;
        do {
          ppppuVar19 = *pppppuVar1;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
          if (bVar12) {
            *pppppuVar1 = (undefined8 ****)((long)ppppuVar19 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (ppppuVar19 == (undefined8 ****)0x0) {
          (*(code *)(*pppppuVar18)[2])(pppppuVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar18);
        }
      }
      ppppuVar10 = appppuStack_1f8[0];
      if (appppuStack_1f8[0] != (uint ****)0x0) {
        ppppuVar17 = appppuStack_1f8[0] + 1;
        do {
          pppuVar21 = *ppppuVar17;
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(ppppuVar17,0x10);
          if (bVar12) {
            *ppppuVar17 = (uint ***)((long)pppuVar21 + -1);
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (pppuVar21 == (uint ***)0x0) {
          (*(code *)(*appppuStack_1f8[0])[2])(appppuStack_1f8[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar10);
        }
      }
      FUN_10a042634(apuStack_568);
      (*(code *)*ppuStack_160)(&ppuStack_160);
      goto LAB_10a24b16c;
    }
    if (bVar7 == 0) {
      ppppplStack_320 = (long *****)0x10f271d74;
LAB_10a24a970:
      appppuStack_318[0] = (undefined4 ****)0x4;
      goto LAB_10a24a984;
    }
    if (bVar7 == 1) {
      ppppplStack_320 = (long *****)&UNK_10f64715d;
      appppuStack_318[0] = (undefined4 ****)0x2;
      goto LAB_10a24a984;
    }
    if (bVar7 == 2) {
      ppppplStack_320 = (long *****)&DAT_10f377952;
      goto LAB_10a24a970;
    }
  }
LAB_10a24b1ac:
  __ZNSt3__19to_stringEi(&ppuStack_120);
  FUN_109feb280(&uStack_d8,&UNK_10f648635,&ppuStack_120);
  FUN_10a0029c0(&uStack_d8);
LAB_10a24b260:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a24b264);
  (*pcVar11)();
}



/* Entry: 10a24b478; end: 10a24bcd3;  */

undefined8 * FUN_10a24b478(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuStack_a58;
  long *plStack_a50;
  long *plStack_a48;
  ulong uStack_a40;
  undefined8 uStack_a38;
  undefined2 uStack_a30;
  undefined1 uStack_a2e;
  undefined1 uStack_9e8;
  undefined1 auStack_9e0 [64];
  byte bStack_9a0;
  undefined1 auStack_998 [64];
  byte bStack_958;
  undefined1 auStack_950 [64];
  byte bStack_910;
  undefined1 auStack_908 [64];
  byte bStack_8c8;
  undefined1 uStack_8c0;
  undefined1 auStack_8b8 [64];
  byte bStack_878;
  undefined1 uStack_870;
  undefined1 auStack_868 [64];
  byte bStack_828;
  undefined1 uStack_820;
  undefined1 auStack_818 [64];
  byte bStack_7d8;
  undefined1 uStack_7d0;
  undefined1 auStack_7c8 [64];
  byte bStack_788;
  undefined1 uStack_780;
  undefined1 auStack_778 [64];
  byte bStack_738;
  undefined1 uStack_730;
  undefined1 auStack_728 [64];
  byte bStack_6e8;
  undefined1 uStack_6e0;
  undefined1 auStack_6d8 [64];
  byte bStack_698;
  undefined1 uStack_690;
  undefined1 auStack_688 [64];
  byte bStack_648;
  undefined1 uStack_640;
  undefined1 auStack_638 [64];
  byte bStack_5f8;
  undefined1 uStack_5f0;
  undefined1 auStack_5e8 [64];
  byte bStack_5a8;
  undefined1 uStack_5a0;
  undefined1 auStack_598 [64];
  byte bStack_558;
  undefined1 uStack_550;
  undefined1 auStack_548 [64];
  byte bStack_508;
  undefined8 **appuStack_500 [8];
  byte bStack_4c0;
  undefined8 **appuStack_4b8 [8];
  byte bStack_478;
  undefined8 **appuStack_470 [8];
  byte bStack_430;
  undefined8 **appuStack_428 [8];
  byte bStack_3e8;
  undefined8 **appuStack_3e0 [8];
  byte bStack_3a0;
  undefined8 **appuStack_398 [8];
  byte bStack_358;
  undefined8 **appuStack_350 [8];
  byte bStack_310;
  undefined8 **appuStack_308 [8];
  byte bStack_2c8;
  undefined8 **appuStack_2c0 [8];
  byte bStack_280;
  undefined8 **appuStack_278 [8];
  byte bStack_238;
  undefined8 **appuStack_230 [8];
  byte bStack_1f0;
  undefined8 **appuStack_1e8 [8];
  byte bStack_1a8;
  undefined8 **appuStack_1a0 [8];
  byte bStack_160;
  undefined1 **appuStack_158 [8];
  byte bStack_118;
  undefined1 *apuStack_110 [8];
  byte bStack_d0;
  undefined1 auStack_c8 [64];
  byte bStack_88;
  undefined1 auStack_80 [64];
  byte bStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = *(char *)(param_1 + 0x67);
  if (cVar1 < '\0') {
    if (*(long *)(param_1 + 0x58) != 0) goto LAB_10a24b4c4;
LAB_10a24b4ac:
    if (((uint)(int)cVar1 >> 7 & 1) != 0) {
LAB_10a24b54c:
      **(undefined1 **)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      goto LAB_10a24b558;
    }
  }
  else {
    if (cVar1 == '\0') goto LAB_10a24b4ac;
LAB_10a24b4c4:
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x38) + 0x100) + 0x1c8);
    (**(code **)(*plVar8 + 0x60))();
    plVar4 = (long *)plVar8[1];
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 != (long *)0x0) {
        plStack_a50 = (long *)*plVar8;
        plStack_a48 = plVar4;
        if (plStack_a50 != (long *)0x0) {
          (**(code **)(*plStack_a50 + 8))(plStack_a50,param_1 + 0x50);
        }
        plVar8 = plVar4 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    if (*(char *)(param_1 + 0x67) < '\0') goto LAB_10a24b54c;
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
LAB_10a24b558:
  uStack_9e8 = 0;
  bStack_9a0 = 0;
  bStack_958 = 0;
  bStack_910 = 0;
  bStack_8c8 = 0;
  uStack_8c0 = 0;
  bStack_878 = 0;
  uStack_870 = 0;
  bStack_828 = 0;
  uStack_820 = 0;
  bStack_7d8 = 0;
  uStack_7d0 = 0;
  bStack_788 = 0;
  uStack_780 = 0;
  bStack_738 = 0;
  uStack_730 = 0;
  bStack_6e8 = 0;
  uStack_6e0 = 0;
  bStack_698 = 0;
  uStack_690 = 0;
  bStack_648 = 0;
  uStack_640 = 0;
  bStack_5f8 = 0;
  uStack_5f0 = 0;
  bStack_5a8 = 0;
  uStack_5a0 = 0;
  bStack_558 = 0;
  uStack_550 = 0;
  bStack_508 = 0;
  plStack_a50 = (long *)0x0;
  plStack_a48 = (long *)0x0;
  uStack_a40 = 0;
  uStack_a38 = NEON_fmov(0xbf800000,4);
  uStack_a30 = 0;
  uStack_a2e = 0;
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  uStack_a40 = uStack_a40 & 0xffffffffffffff;
  plStack_a50 = (long *)((ulong)plStack_a50 & 0xffffffffffffff00);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = uStack_a38;
  *(undefined2 *)(param_1 + 0x88) = uStack_a30;
  *(undefined1 *)(param_1 + 0x8a) = uStack_a2e;
  bStack_40 = 0;
  func_0x00010a24952c(param_1 + 0x90,auStack_80);
  if ((ulong)bStack_40 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(auStack_80);
    bStack_88 = 3;
    apuStack_110[0] = auStack_c8;
    if (bStack_9a0 == 0) {
      bStack_88 = 0;
    }
    else {
      FUN_10a05fae4(apuStack_110,auStack_9e0);
      bStack_88 = bStack_9a0;
    }
    func_0x00010a2496a8(param_1 + 0xd8,auStack_c8);
    if ((ulong)bStack_88 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_88])(auStack_c8);
      bStack_d0 = 3;
      appuStack_158[0] = apuStack_110;
      if (bStack_958 == 0) {
        bStack_d0 = 0;
      }
      else {
        FUN_10a05fae4(appuStack_158,auStack_998);
        bStack_d0 = bStack_958;
      }
      func_0x00010a249770(param_1 + 0x120,apuStack_110);
      if ((ulong)bStack_d0 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_d0])(apuStack_110);
        bStack_118 = 3;
        appuStack_1a0[0] = appuStack_158;
        if (bStack_910 == 0) {
          bStack_118 = 0;
        }
        else {
          FUN_10a05fae4(appuStack_1a0,auStack_950);
          bStack_118 = bStack_910;
        }
        func_0x00010a249838(param_1 + 0x168,appuStack_158);
        if ((ulong)bStack_118 < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[bStack_118])(appuStack_158);
          bStack_160 = 3;
          appuStack_1e8[0] = appuStack_1a0;
          if (bStack_8c8 == 0) {
            bStack_160 = 0;
          }
          else {
            FUN_10a05fae4(appuStack_1e8,auStack_908);
            bStack_160 = bStack_8c8;
          }
          func_0x00010a249900(param_1 + 0x1b0,appuStack_1a0);
          if ((ulong)bStack_160 < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[bStack_160])(appuStack_1a0);
            *(undefined1 *)(param_1 + 0x1f8) = uStack_8c0;
            bStack_1a8 = 3;
            appuStack_230[0] = appuStack_1e8;
            if (bStack_878 == 0) {
              bStack_1a8 = 0;
            }
            else {
              FUN_10a05fae4(appuStack_230,auStack_8b8);
              bStack_1a8 = bStack_878;
            }
            func_0x00010a249900(param_1 + 0x200,appuStack_1e8);
            if ((ulong)bStack_1a8 < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[bStack_1a8])(appuStack_1e8);
              *(undefined1 *)(param_1 + 0x248) = uStack_870;
              bStack_1f0 = 3;
              appuStack_278[0] = appuStack_230;
              if (bStack_828 == 0) {
                bStack_1f0 = 0;
              }
              else {
                FUN_10a05fae4(appuStack_278,auStack_868);
                bStack_1f0 = bStack_828;
              }
              func_0x00010a2499c8(param_1 + 0x250,appuStack_230);
              if ((ulong)bStack_1f0 < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[bStack_1f0])(appuStack_230);
                *(undefined1 *)(param_1 + 0x298) = uStack_820;
                bStack_238 = 3;
                appuStack_2c0[0] = appuStack_278;
                if (bStack_7d8 == 0) {
                  bStack_238 = 0;
                }
                else {
                  FUN_10a05fae4(appuStack_2c0,auStack_818);
                  bStack_238 = bStack_7d8;
                }
                func_0x00010a2496a8(param_1 + 0x2a0,appuStack_278);
                if ((ulong)bStack_238 < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[bStack_238])(appuStack_278);
                  *(undefined1 *)(param_1 + 0x2e8) = uStack_7d0;
                  bStack_280 = 3;
                  appuStack_308[0] = appuStack_2c0;
                  if (bStack_788 == 0) {
                    bStack_280 = 0;
                  }
                  else {
                    FUN_10a05fae4(appuStack_308,auStack_7c8);
                    bStack_280 = bStack_788;
                  }
                  func_0x00010a2496a8(param_1 + 0x2f0,appuStack_2c0);
                  if ((ulong)bStack_280 < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[bStack_280])(appuStack_2c0);
                    *(undefined1 *)(param_1 + 0x338) = uStack_780;
                    bStack_2c8 = 3;
                    appuStack_350[0] = appuStack_308;
                    if (bStack_738 == 0) {
                      bStack_2c8 = 0;
                    }
                    else {
                      FUN_10a05fae4(appuStack_350,auStack_778);
                      bStack_2c8 = bStack_738;
                    }
                    func_0x00010a2499c8(param_1 + 0x340,appuStack_308);
                    if ((ulong)bStack_2c8 < 4) {
                      (*(code *)(&PTR_FUN_110b9a040)[bStack_2c8])(appuStack_308);
                      *(undefined1 *)(param_1 + 0x388) = uStack_730;
                      bStack_310 = 3;
                      appuStack_398[0] = appuStack_350;
                      if (bStack_6e8 == 0) {
                        bStack_310 = 0;
                      }
                      else {
                        FUN_10a05fae4(appuStack_398,auStack_728);
                        bStack_310 = bStack_6e8;
                      }
                      func_0x00010a249a90(param_1 + 0x390,appuStack_350);
                      if ((ulong)bStack_310 < 4) {
                        (*(code *)(&PTR_FUN_110b9a040)[bStack_310])(appuStack_350);
                        *(undefined1 *)(param_1 + 0x3d8) = uStack_6e0;
                        bStack_358 = 3;
                        appuStack_3e0[0] = appuStack_398;
                        if (bStack_698 == 0) {
                          bStack_358 = 0;
                        }
                        else {
                          FUN_10a05fae4(appuStack_3e0,auStack_6d8);
                          bStack_358 = bStack_698;
                        }
                        func_0x00010a249b58(param_1 + 0x3e0,appuStack_398);
                        if ((ulong)bStack_358 < 4) {
                          (*(code *)(&PTR_FUN_110b9a040)[bStack_358])(appuStack_398);
                          *(undefined1 *)(param_1 + 0x428) = uStack_690;
                          bStack_3a0 = 3;
                          appuStack_428[0] = appuStack_3e0;
                          if (bStack_648 == 0) {
                            bStack_3a0 = 0;
                          }
                          else {
                            FUN_10a05fae4(appuStack_428,auStack_688);
                            bStack_3a0 = bStack_648;
                          }
                          func_0x00010a249c20(param_1 + 0x430,appuStack_3e0);
                          if ((ulong)bStack_3a0 < 4) {
                            (*(code *)(&PTR_FUN_110b9a040)[bStack_3a0])(appuStack_3e0);
                            *(undefined1 *)(param_1 + 0x478) = uStack_640;
                            bStack_3e8 = 3;
                            appuStack_470[0] = appuStack_428;
                            if (bStack_5f8 == 0) {
                              bStack_3e8 = 0;
                            }
                            else {
                              FUN_10a05fae4(appuStack_470,auStack_638);
                              bStack_3e8 = bStack_5f8;
                            }
                            func_0x00010a249ce8(param_1 + 0x480,appuStack_428);
                            if ((ulong)bStack_3e8 < 4) {
                              (*(code *)(&PTR_FUN_110b9a040)[bStack_3e8])(appuStack_428);
                              *(undefined1 *)(param_1 + 0x4c8) = uStack_5f0;
                              bStack_430 = 3;
                              appuStack_4b8[0] = appuStack_470;
                              if (bStack_5a8 == 0) {
                                bStack_430 = 0;
                              }
                              else {
                                FUN_10a05fae4(appuStack_4b8,auStack_5e8);
                                bStack_430 = bStack_5a8;
                              }
                              func_0x00010a2496a8(param_1 + 0x4d0,appuStack_470);
                              if ((ulong)bStack_430 < 4) {
                                (*(code *)(&PTR_FUN_110b9a040)[bStack_430])(appuStack_470);
                                *(undefined1 *)(param_1 + 0x518) = uStack_5a0;
                                bStack_478 = 3;
                                appuStack_500[0] = appuStack_4b8;
                                if (bStack_558 == 0) {
                                  bStack_478 = 0;
                                }
                                else {
                                  FUN_10a05fae4(appuStack_500,auStack_598);
                                  bStack_478 = bStack_558;
                                }
                                func_0x00010a2496a8(param_1 + 0x520,appuStack_4b8);
                                if ((ulong)bStack_478 < 4) {
                                  (*(code *)(&PTR_FUN_110b9a040)[bStack_478])(appuStack_4b8);
                                  *(undefined1 *)(param_1 + 0x568) = uStack_550;
                                  bStack_4c0 = 3;
                                  ppuStack_a58 = appuStack_500;
                                  if (bStack_508 == 0) {
                                    bStack_4c0 = 0;
                                  }
                                  else {
                                    FUN_10a05fae4(&ppuStack_a58,auStack_548);
                                    bStack_4c0 = bStack_508;
                                  }
                                  pppuVar6 = appuStack_500;
                                  func_0x00010a2496a8(param_1 + 0x570);
                                  if ((ulong)bStack_4c0 < 4) {
                                    (*(code *)(&PTR_FUN_110b9a040)[bStack_4c0])(appuStack_500);
                                    FUN_10a26a458(&plStack_a50);
                                    puVar5 = *(undefined8 **)(param_1 + 0x5b8);
                                    if (puVar5 != (undefined8 *)0x0) {
                                      pppuVar6 = (undefined8 ***)0x0;
                                      FUN_10a5944cc();
                                    }
                                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                                      return puVar5;
                                    }
                                    ___stack_chk_fail();
                                    func_0x00010a05a8c4(&plStack_a50);
                                    __Unwind_Resume();
                                    ppuVar10 = pppuVar6[1];
                                    ppuVar9 = *pppuVar6;
                                    *pppuVar6 = (undefined8 **)0x0;
                                    pppuVar6[1] = (undefined8 **)0x0;
                                    plVar8 = (long *)puVar5[1];
                                    puVar5[1] = ppuVar10;
                                    *puVar5 = ppuVar9;
                                    if (plVar8 != (long *)0x0) {
                                      plVar4 = plVar8 + 1;
                                      do {
                                        lVar7 = *plVar4;
                                        cVar1 = '\x01';
                                        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                                        if (bVar2) {
                                          *plVar4 = lVar7 + -1;
                                          cVar1 = ExclusiveMonitorsStatus();
                                        }
                                      } while (cVar1 != '\0');
                                      if (lVar7 == 0) {
                                        (**(code **)(*plVar8 + 0x10))(plVar8);
                                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                                      }
                                    }
                                    return puVar5;
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
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a24bcb4);
  (*pcVar3)();
}



/* Entry: 10a24bcd4; end: 10a24bddb;  */

undefined8 * FUN_10a24bcd4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a24bddc; end: 10a24c377;  */

void FUN_10a24bddc(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  long lVar11;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long alStack_1c0 [8];
  byte bStack_180;
  long alStack_178 [8];
  byte bStack_138;
  long alStack_130 [8];
  byte bStack_f0;
  long alStack_e8 [8];
  byte bStack_a8;
  long alStack_a0 [8];
  byte bStack_60;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (uVar10 == 0) {
    plVar8 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      plVar8 = (long *)&UNK_10f64730e;
      goto code_r0x00010a24c378;
    }
  }
  else {
    (**(code **)(**(long **)(*(long *)(param_2[7] + 0x100) + 0x1c8) + 0x118))(&plStack_1e0);
    plStack_1d0 = (long *)0x0;
    plStack_1c8 = (long *)0x0;
    if (plStack_1d8 == (long *)0x0) {
LAB_10a24bec8:
      plVar8 = (long *)&UNK_10f647349;
      unaff_x21 = param_2;
LAB_10a24bf44:
      FUN_10a24c378(param_1,plVar8);
    }
    else {
      plVar8 = plStack_1d8;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar8 == (long *)0x0) {
        unaff_x22 = (long *)0x1;
      }
      else {
        plStack_1d0 = plStack_1e0;
        unaff_x22 = (long *)(ulong)(plStack_1e0 == (long *)0x0);
      }
      plStack_1c8 = plVar8;
      if (plStack_1d8 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if ((int)unaff_x22 != 0) goto LAB_10a24bec8;
      unaff_x22 = param_2 + 0xb7;
      lVar9 = param_2[0xb7];
      if (lVar9 == 0) {
        FUN_10a282a84(&plStack_1e0,param_2[7]);
        FUN_10a24bcd4(unaff_x22,&plStack_1e0);
        if (plStack_1d8 != (long *)0x0) {
          plVar8 = plStack_1d8 + 1;
          do {
            lVar9 = *plVar8;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
          }
        }
        lVar9 = *unaff_x22;
        param_2 = plStack_1d8;
      }
      if (*(int *)(lVar9 + 0x288) != 0) {
        plVar8 = (long *)&UNK_10f64739c;
        unaff_x21 = param_2;
        goto LAB_10a24bf44;
      }
      (**(code **)(*plStack_1d0 + 0x18))(&plStack_1e8,plStack_1d0,param_3);
      lVar9 = *unaff_x22;
      bStack_180 = 3;
      plStack_1e0 = alStack_1c0;
      if ((char)param_3[0xb] == '\0') {
        bStack_180 = 0;
      }
      else {
        FUN_10a005398(&plStack_1e0,param_3 + 3);
        bStack_180 = *(byte *)(param_3 + 0xb);
      }
      unaff_x21 = alStack_178;
      bStack_138 = 3;
      if ((char)param_3[0x14] == '\0') {
        bStack_138 = 0;
      }
      else {
        plStack_1e0 = unaff_x21;
        FUN_10a005398(&plStack_1e0,param_3 + 0xc);
        bStack_138 = *(byte *)(param_3 + 0x14);
      }
      unaff_x22 = alStack_130;
      bStack_f0 = 3;
      if ((char)param_3[0x1d] == '\0') {
        bStack_f0 = 0;
      }
      else {
        plStack_1e0 = unaff_x22;
        FUN_10a005398(&plStack_1e0,param_3 + 0x15);
        bStack_f0 = *(byte *)(param_3 + 0x1d);
      }
      unaff_x24 = alStack_e8;
      bStack_a8 = 3;
      if ((char)param_3[0x26] == '\0') {
        bStack_a8 = 0;
      }
      else {
        plStack_1e0 = unaff_x24;
        FUN_10a005398(&plStack_1e0,param_3 + 0x1e);
        bStack_a8 = *(byte *)(param_3 + 0x26);
      }
      bStack_60 = 3;
      plStack_1e0 = alStack_a0;
      if ((char)param_3[0x2f] == '\0') {
        bStack_60 = 0;
      }
      else {
        FUN_10a005398(&plStack_1e0,param_3 + 0x27);
        bStack_60 = *(byte *)(param_3 + 0x2f);
      }
      plStack_1f0 = plStack_1e8;
      plStack_1e8 = (long *)0x0;
      plVar8 = alStack_1c0;
      FUN_10a594000(param_1,lVar9,plVar8,&plStack_1f0);
      if (plStack_1f0 != (long *)0x0) {
        puVar3 = (ulong *)(plStack_1f0 + 1);
        do {
          uVar10 = *puVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *puVar3 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plStack_1f0 + 8))();
          }
        }
      }
      if (3 < (ulong)bStack_60) goto LAB_10a24c2ac;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_60])(alStack_a0);
      if (3 < (ulong)bStack_a8) goto LAB_10a24c2ac;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_a8])(unaff_x24);
      if (3 < (ulong)bStack_f0) goto LAB_10a24c2ac;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_f0])(unaff_x22);
      if (3 < (ulong)bStack_138) goto LAB_10a24c2ac;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_138])(unaff_x21);
      if (3 < (ulong)bStack_180) goto LAB_10a24c2ac;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_180])(alStack_1c0);
      param_1 = plStack_1e8;
      if (plStack_1e8 != (long *)0x0) {
        puVar3 = (ulong *)(plStack_1e8 + 1);
        do {
          uVar10 = *puVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *puVar3 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plStack_1e8 + 8))();
          }
        }
      }
    }
    plVar7 = plStack_1c8;
    param_2 = param_1;
    if (plStack_1c8 != (long *)0x0) {
      plVar2 = plStack_1c8 + 1;
      do {
        lVar9 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar7;
      }
    }
    unaff_x20 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  if ((ulong)bStack_a8 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_a8])(unaff_x24);
    if ((ulong)bStack_f0 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_f0])(unaff_x22);
      if ((ulong)bStack_138 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_138])(unaff_x21);
        if ((ulong)bStack_180 < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[bStack_180])(alStack_1c0);
          if (plStack_1e8 != (long *)0x0) {
            puVar3 = (ulong *)(plStack_1e8 + 1);
            do {
              uVar10 = *puVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar5) {
                *puVar3 = uVar10 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar10 & 0x1fffffffc) == 4) {
              do {
                uVar10 = *puVar3;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar5) {
                  *puVar3 = uVar10 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar10 - 1 == 0) {
                (**(code **)(*plStack_1e8 + 8))();
              }
            }
          }
          FUN_10a282a2c(&plStack_1d0);
          unaff_x30 = FUN_10a24c378;
          param_1 = param_2;
          __Unwind_Resume();
          register0x00000008 = (BADSPACEBASE *)&plStack_1f0;
          unaff_x19 = param_2;
          unaff_x29 = puVar1;
code_r0x00010a24c378:
          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
          *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
          *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(code **)((long)register0x00000008 + -8) = unaff_x30;
          FUN_109d1a6fc((undefined1 *)((long)register0x00000008 + -0x298));
          FUN_10a009538((undefined1 *)((long)register0x00000008 + -0x288),plVar8);
          __ZNSt13runtime_errorC2ERKS_
                    ((undefined1 *)((long)register0x00000008 + -0x160),
                     (undefined1 *)((long)register0x00000008 + -0x288));
          _memcpy((undefined1 *)((long)register0x00000008 + -0x150),
                  (undefined1 *)((long)register0x00000008 + -0x278),0x110);
          *(undefined ***)((long)register0x00000008 + -0x160) = &PTR_FUN_110b99e70;
          FUN_10a05bde0((undefined1 *)((long)register0x00000008 + -0x168),
                        (undefined1 *)((long)register0x00000008 + -0x160));
          __ZNSt13runtime_errorD2Ev((undefined1 *)((long)register0x00000008 + -0x160));
          lVar11 = *(long *)((long)register0x00000008 + -0x290);
          func_0x000109d1b350(lVar11,(undefined1 *)((long)register0x00000008 + -0x168));
          __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x168));
          __ZNSt13runtime_errorD2Ev((undefined1 *)((long)register0x00000008 + -0x288));
          lVar9 = *(long *)((long)register0x00000008 + -0x298);
          *param_1 = lVar9;
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = *plVar8 + 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            lVar11 = *(long *)((long)register0x00000008 + -0x290);
          }
          if (lVar11 != 0) {
            func_0x0001092b4274((undefined1 *)((long)register0x00000008 + -0x290),lVar11);
          }
          plVar8 = *(long **)((long)register0x00000008 + -0x298);
          if (plVar8 != (long *)0x0) {
            puVar3 = (ulong *)(plVar8 + 1);
            do {
              uVar10 = *puVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar5) {
                *puVar3 = uVar10 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar10 & 0x1fffffffc) == 4) {
              do {
                uVar10 = *puVar3;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar5) {
                  *puVar3 = uVar10 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar10 - 1 == 0) {
                (**(code **)(*plVar8 + 8))();
              }
            }
          }
          return;
        }
      }
    }
  }
LAB_10a24c2ac:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a24c2b0);
  (*pcVar6)();
}



/* Entry: 10a24c378; end: 10a24c4ab;  */

void FUN_10a24c378(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_298;
  long lStack_290;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [272];
  undefined1 auStack_168 [8];
  undefined **appuStack_160 [2];
  undefined1 auStack_150 [272];
  
  FUN_109d1a6fc(&plStack_298);
  FUN_10a009538(auStack_288,param_2);
  __ZNSt13runtime_errorC2ERKS_(appuStack_160,auStack_288);
  _memcpy(auStack_150,auStack_278,0x110);
  appuStack_160[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_168,appuStack_160);
  __ZNSt13runtime_errorD2Ev(appuStack_160);
  lVar6 = lStack_290;
  func_0x000109d1b350(lStack_290,auStack_168);
  __ZNSt13exception_ptrD1Ev(auStack_168);
  __ZNSt13runtime_errorD2Ev(auStack_288);
  *param_1 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    plVar1 = plStack_298 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
      lVar6 = lStack_290;
    } while (cVar3 != '\0');
  }
  if (lVar6 != 0) {
    func_0x0001092b4274(&lStack_290,lVar6);
  }
  if (plStack_298 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_298 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_298 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a24c4ac; end: 10a24c4e3;  */

void FUN_10a24c4ac(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  FUN_10a24b478();
  lVar5 = *(long *)(param_1 + 0x5b8);
  if (lVar5 == 0) {
    return;
  }
  uVar11 = *(undefined8 *)(lVar5 + 0x4b8);
  lVar7 = *(long *)(*(long *)(lVar5 + 0x58) + 0x870);
  puVar9 = *(undefined8 **)(lVar7 + 0x38);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(lVar7 + 0x28);
    plVar8 = *(long **)(lVar7 + 0x30);
  }
  else {
    plVar8 = *(long **)(lVar7 + 0x40);
  }
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar1 = *(undefined8 *)(lVar5 + 0x48);
  lVar5 = *(long *)(lVar5 + 0x50);
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)puVar9[2];
  puStack_48 = puVar9;
  if (plVar10 == (long *)0x0) {
    puVar6 = (undefined8 *)0x30;
    __Znwm();
    *puVar6 = uVar1;
    puVar6[1] = lVar5;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = uVar11;
    puVar6[5] = 0x10a5c2320;
    pcStack_58 = FUN_10a5c2220;
    puStack_50 = puVar6;
    (**(code **)*puVar9)(puVar9,&pcStack_58);
  }
  else {
    lStack_60 = 0;
    (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_60);
    if (lStack_60 != 0) {
      func_0x0001092af97c(&lStack_60);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a594678);
      (*pcVar4)();
    }
    puVar6 = (undefined8 *)0x38;
    __Znwm();
    *puVar6 = uVar1;
    puVar6[1] = lVar5;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = uVar11;
    puVar6[5] = FUN_10a5c22ec;
    puVar6[6] = plVar10;
    pcStack_58 = FUN_10a5c21f0;
    puStack_50 = puVar6;
    (**(code **)*puVar9)(puVar9,&pcStack_58);
    __ZNSt13exception_ptrD1Ev(&lStack_60);
  }
  lStack_60 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_60);
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 1;
    do {
      lVar5 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10a24c4e4; end: 10a24c4eb;  */

void FUN_10a24c4e4(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  FUN_10a24b478();
  lVar5 = *(long *)(param_1 + 0x5a0);
  if (lVar5 == 0) {
    return;
  }
  uVar11 = *(undefined8 *)(lVar5 + 0x4b8);
  lVar7 = *(long *)(*(long *)(lVar5 + 0x58) + 0x870);
  puVar9 = *(undefined8 **)(lVar7 + 0x38);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(lVar7 + 0x28);
    plVar8 = *(long **)(lVar7 + 0x30);
  }
  else {
    plVar8 = *(long **)(lVar7 + 0x40);
  }
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar1 = *(undefined8 *)(lVar5 + 0x48);
  lVar5 = *(long *)(lVar5 + 0x50);
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = (long *)puVar9[2];
  puStack_48 = puVar9;
  if (plVar10 == (long *)0x0) {
    puVar6 = (undefined8 *)0x30;
    __Znwm();
    *puVar6 = uVar1;
    puVar6[1] = lVar5;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = uVar11;
    puVar6[5] = 0x10a5c2320;
    pcStack_58 = FUN_10a5c2220;
    puStack_50 = puVar6;
    (**(code **)*puVar9)(puVar9,&pcStack_58);
  }
  else {
    lStack_60 = 0;
    (**(code **)(*plVar10 + 0x28))(plVar10,0,&lStack_60);
    if (lStack_60 != 0) {
      func_0x0001092af97c(&lStack_60);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a594678);
      (*pcVar4)();
    }
    puVar6 = (undefined8 *)0x38;
    __Znwm();
    *puVar6 = uVar1;
    puVar6[1] = lVar5;
    *(undefined4 *)(puVar6 + 2) = 1;
    puVar6[3] = uVar11;
    puVar6[5] = FUN_10a5c22ec;
    puVar6[6] = plVar10;
    pcStack_58 = FUN_10a5c21f0;
    puStack_50 = puVar6;
    (**(code **)*puVar9)(puVar9,&pcStack_58);
    __ZNSt13exception_ptrD1Ev(&lStack_60);
  }
  lStack_60 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_60);
  if (plVar8 != (long *)0x0) {
    plVar10 = plVar8 + 1;
    do {
      lVar5 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10a24c4ec; end: 10a24c56b;  */

undefined8 * FUN_10a24c4ec(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  long *plVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuStack_a58;
  long *plStack_a50;
  long *plStack_a48;
  ulong uStack_a40;
  undefined8 uStack_a38;
  undefined2 uStack_a30;
  undefined1 uStack_a2e;
  undefined1 uStack_9e8;
  undefined1 auStack_9e0 [64];
  byte bStack_9a0;
  undefined1 auStack_998 [64];
  byte bStack_958;
  undefined1 auStack_950 [64];
  byte bStack_910;
  undefined1 auStack_908 [64];
  byte bStack_8c8;
  undefined1 uStack_8c0;
  undefined1 auStack_8b8 [64];
  byte bStack_878;
  undefined1 uStack_870;
  undefined1 auStack_868 [64];
  byte bStack_828;
  undefined1 uStack_820;
  undefined1 auStack_818 [64];
  byte bStack_7d8;
  undefined1 uStack_7d0;
  undefined1 auStack_7c8 [64];
  byte bStack_788;
  undefined1 uStack_780;
  undefined1 auStack_778 [64];
  byte bStack_738;
  undefined1 uStack_730;
  undefined1 auStack_728 [64];
  byte bStack_6e8;
  undefined1 uStack_6e0;
  undefined1 auStack_6d8 [64];
  byte bStack_698;
  undefined1 uStack_690;
  undefined1 auStack_688 [64];
  byte bStack_648;
  undefined1 uStack_640;
  undefined1 auStack_638 [64];
  byte bStack_5f8;
  undefined1 uStack_5f0;
  undefined1 auStack_5e8 [64];
  byte bStack_5a8;
  undefined1 uStack_5a0;
  undefined1 auStack_598 [64];
  byte bStack_558;
  undefined1 uStack_550;
  undefined1 auStack_548 [64];
  byte bStack_508;
  undefined8 ***apppuStack_500 [8];
  byte bStack_4c0;
  undefined8 ***apppuStack_4b8 [8];
  byte bStack_478;
  undefined8 ***apppuStack_470 [8];
  byte bStack_430;
  undefined8 ***apppuStack_428 [8];
  byte bStack_3e8;
  undefined8 ***apppuStack_3e0 [8];
  byte bStack_3a0;
  undefined8 ***apppuStack_398 [8];
  byte bStack_358;
  undefined8 ***apppuStack_350 [8];
  byte bStack_310;
  undefined8 ***apppuStack_308 [8];
  byte bStack_2c8;
  undefined8 ***apppuStack_2c0 [8];
  byte bStack_280;
  undefined8 ***apppuStack_278 [8];
  byte bStack_238;
  undefined8 ***apppuStack_230 [8];
  byte bStack_1f0;
  undefined8 ***apppuStack_1e8 [8];
  byte bStack_1a8;
  undefined1 ***apppuStack_1a0 [8];
  byte bStack_160;
  undefined1 **appuStack_158 [8];
  byte bStack_118;
  undefined1 *apuStack_110 [8];
  byte bStack_d0;
  undefined1 auStack_c8 [64];
  byte bStack_88;
  undefined1 auStack_80 [64];
  byte bStack_40;
  long lStack_38;
  
  bVar3 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  bVar4 = *(byte *)((long)param_1 + 0x67);
  uVar2 = param_1[0xb];
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
  }
  if (uVar1 != uVar2) {
    return param_1;
  }
  plVar12 = (undefined8 *)*param_2;
  if (-1 < (char)bVar3) {
    plVar12 = param_2;
  }
  plVar8 = (long *)param_1[10];
  if (-1 < (char)bVar4) {
    plVar8 = param_1 + 10;
  }
  _memcmp(plVar12,plVar8);
  if ((int)plVar12 != 0) {
    return plVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar5 = *(char *)((long)param_1 + 0x67);
  if (cVar5 < '\0') {
    if (param_1[0xb] == 0) goto LAB_10a24b4ac;
LAB_10a24b4c4:
    plVar12 = *(long **)(*(long *)(param_1[7] + 0x100) + 0x1c8);
    (**(code **)(*plVar12 + 0x60))();
    plVar8 = (long *)plVar12[1];
    if ((plVar8 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 != (long *)0x0)
       ) {
      plStack_a50 = (long *)*plVar12;
      plStack_a48 = plVar8;
      if (plStack_a50 != (long *)0x0) {
        (**(code **)(*plStack_a50 + 8))(plStack_a50,param_1 + 10);
      }
      plVar12 = plVar8 + 1;
      do {
        lVar11 = *plVar12;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (*(char *)((long)param_1 + 0x67) < '\0') {
LAB_10a24b54c:
      *(undefined1 *)param_1[10] = 0;
      param_1[0xb] = 0;
      goto LAB_10a24b558;
    }
  }
  else {
    if (cVar5 != '\0') goto LAB_10a24b4c4;
LAB_10a24b4ac:
    if (((uint)(int)cVar5 >> 7 & 1) != 0) goto LAB_10a24b54c;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x67) = 0;
LAB_10a24b558:
  uStack_9e8 = 0;
  bStack_9a0 = 0;
  bStack_958 = 0;
  bStack_910 = 0;
  bStack_8c8 = 0;
  uStack_8c0 = 0;
  bStack_878 = 0;
  uStack_870 = 0;
  bStack_828 = 0;
  uStack_820 = 0;
  bStack_7d8 = 0;
  uStack_7d0 = 0;
  bStack_788 = 0;
  uStack_780 = 0;
  bStack_738 = 0;
  uStack_730 = 0;
  bStack_6e8 = 0;
  uStack_6e0 = 0;
  bStack_698 = 0;
  uStack_690 = 0;
  bStack_648 = 0;
  uStack_640 = 0;
  bStack_5f8 = 0;
  uStack_5f0 = 0;
  bStack_5a8 = 0;
  uStack_5a0 = 0;
  bStack_558 = 0;
  uStack_550 = 0;
  bStack_508 = 0;
  plStack_a50 = (long *)0x0;
  plStack_a48 = (long *)0x0;
  uStack_a40 = 0;
  uStack_a38 = NEON_fmov(0xbf800000,4);
  uStack_a30 = 0;
  uStack_a2e = 0;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uStack_a40 = uStack_a40 & 0xffffffffffffff;
  plStack_a50 = (long *)((ulong)plStack_a50 & 0xffffffffffffff00);
  param_1[0xf] = 0;
  param_1[0x10] = uStack_a38;
  *(undefined2 *)(param_1 + 0x11) = uStack_a30;
  *(undefined1 *)((long)param_1 + 0x8a) = uStack_a2e;
  bStack_40 = 0;
  func_0x00010a24952c(param_1 + 0x12,auStack_80);
  if ((ulong)bStack_40 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(auStack_80);
    bStack_88 = 3;
    apuStack_110[0] = auStack_c8;
    if (bStack_9a0 == 0) {
      bStack_88 = 0;
    }
    else {
      FUN_10a05fae4(apuStack_110,auStack_9e0);
      bStack_88 = bStack_9a0;
    }
    func_0x00010a2496a8(param_1 + 0x1b,auStack_c8);
    if ((ulong)bStack_88 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_88])(auStack_c8);
      bStack_d0 = 3;
      appuStack_158[0] = apuStack_110;
      if (bStack_958 == 0) {
        bStack_d0 = 0;
      }
      else {
        FUN_10a05fae4(appuStack_158,auStack_998);
        bStack_d0 = bStack_958;
      }
      func_0x00010a249770(param_1 + 0x24,apuStack_110);
      if ((ulong)bStack_d0 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_d0])(apuStack_110);
        bStack_118 = 3;
        apppuStack_1a0[0] = appuStack_158;
        if (bStack_910 == 0) {
          bStack_118 = 0;
        }
        else {
          FUN_10a05fae4(apppuStack_1a0,auStack_950);
          bStack_118 = bStack_910;
        }
        func_0x00010a249838(param_1 + 0x2d,appuStack_158);
        if ((ulong)bStack_118 < 4) {
          (*(code *)(&PTR_FUN_110b9a040)[bStack_118])(appuStack_158);
          bStack_160 = 3;
          apppuStack_1e8[0] = apppuStack_1a0;
          if (bStack_8c8 == 0) {
            bStack_160 = 0;
          }
          else {
            FUN_10a05fae4(apppuStack_1e8,auStack_908);
            bStack_160 = bStack_8c8;
          }
          func_0x00010a249900(param_1 + 0x36,apppuStack_1a0);
          if ((ulong)bStack_160 < 4) {
            (*(code *)(&PTR_FUN_110b9a040)[bStack_160])(apppuStack_1a0);
            *(undefined1 *)(param_1 + 0x3f) = uStack_8c0;
            bStack_1a8 = 3;
            apppuStack_230[0] = apppuStack_1e8;
            if (bStack_878 == 0) {
              bStack_1a8 = 0;
            }
            else {
              FUN_10a05fae4(apppuStack_230,auStack_8b8);
              bStack_1a8 = bStack_878;
            }
            func_0x00010a249900(param_1 + 0x40,apppuStack_1e8);
            if ((ulong)bStack_1a8 < 4) {
              (*(code *)(&PTR_FUN_110b9a040)[bStack_1a8])(apppuStack_1e8);
              *(undefined1 *)(param_1 + 0x49) = uStack_870;
              bStack_1f0 = 3;
              apppuStack_278[0] = apppuStack_230;
              if (bStack_828 == 0) {
                bStack_1f0 = 0;
              }
              else {
                FUN_10a05fae4(apppuStack_278,auStack_868);
                bStack_1f0 = bStack_828;
              }
              func_0x00010a2499c8(param_1 + 0x4a,apppuStack_230);
              if ((ulong)bStack_1f0 < 4) {
                (*(code *)(&PTR_FUN_110b9a040)[bStack_1f0])(apppuStack_230);
                *(undefined1 *)(param_1 + 0x53) = uStack_820;
                bStack_238 = 3;
                apppuStack_2c0[0] = apppuStack_278;
                if (bStack_7d8 == 0) {
                  bStack_238 = 0;
                }
                else {
                  FUN_10a05fae4(apppuStack_2c0,auStack_818);
                  bStack_238 = bStack_7d8;
                }
                func_0x00010a2496a8(param_1 + 0x54,apppuStack_278);
                if ((ulong)bStack_238 < 4) {
                  (*(code *)(&PTR_FUN_110b9a040)[bStack_238])(apppuStack_278);
                  *(undefined1 *)(param_1 + 0x5d) = uStack_7d0;
                  bStack_280 = 3;
                  apppuStack_308[0] = apppuStack_2c0;
                  if (bStack_788 == 0) {
                    bStack_280 = 0;
                  }
                  else {
                    FUN_10a05fae4(apppuStack_308,auStack_7c8);
                    bStack_280 = bStack_788;
                  }
                  func_0x00010a2496a8(param_1 + 0x5e,apppuStack_2c0);
                  if ((ulong)bStack_280 < 4) {
                    (*(code *)(&PTR_FUN_110b9a040)[bStack_280])(apppuStack_2c0);
                    *(undefined1 *)(param_1 + 0x67) = uStack_780;
                    bStack_2c8 = 3;
                    apppuStack_350[0] = apppuStack_308;
                    if (bStack_738 == 0) {
                      bStack_2c8 = 0;
                    }
                    else {
                      FUN_10a05fae4(apppuStack_350,auStack_778);
                      bStack_2c8 = bStack_738;
                    }
                    func_0x00010a2499c8(param_1 + 0x68,apppuStack_308);
                    if ((ulong)bStack_2c8 < 4) {
                      (*(code *)(&PTR_FUN_110b9a040)[bStack_2c8])(apppuStack_308);
                      *(undefined1 *)(param_1 + 0x71) = uStack_730;
                      bStack_310 = 3;
                      apppuStack_398[0] = apppuStack_350;
                      if (bStack_6e8 == 0) {
                        bStack_310 = 0;
                      }
                      else {
                        FUN_10a05fae4(apppuStack_398,auStack_728);
                        bStack_310 = bStack_6e8;
                      }
                      func_0x00010a249a90(param_1 + 0x72,apppuStack_350);
                      if ((ulong)bStack_310 < 4) {
                        (*(code *)(&PTR_FUN_110b9a040)[bStack_310])(apppuStack_350);
                        *(undefined1 *)(param_1 + 0x7b) = uStack_6e0;
                        bStack_358 = 3;
                        apppuStack_3e0[0] = apppuStack_398;
                        if (bStack_698 == 0) {
                          bStack_358 = 0;
                        }
                        else {
                          FUN_10a05fae4(apppuStack_3e0,auStack_6d8);
                          bStack_358 = bStack_698;
                        }
                        func_0x00010a249b58(param_1 + 0x7c,apppuStack_398);
                        if ((ulong)bStack_358 < 4) {
                          (*(code *)(&PTR_FUN_110b9a040)[bStack_358])(apppuStack_398);
                          *(undefined1 *)(param_1 + 0x85) = uStack_690;
                          bStack_3a0 = 3;
                          apppuStack_428[0] = apppuStack_3e0;
                          if (bStack_648 == 0) {
                            bStack_3a0 = 0;
                          }
                          else {
                            FUN_10a05fae4(apppuStack_428,auStack_688);
                            bStack_3a0 = bStack_648;
                          }
                          func_0x00010a249c20(param_1 + 0x86,apppuStack_3e0);
                          if ((ulong)bStack_3a0 < 4) {
                            (*(code *)(&PTR_FUN_110b9a040)[bStack_3a0])(apppuStack_3e0);
                            *(undefined1 *)(param_1 + 0x8f) = uStack_640;
                            bStack_3e8 = 3;
                            apppuStack_470[0] = apppuStack_428;
                            if (bStack_5f8 == 0) {
                              bStack_3e8 = 0;
                            }
                            else {
                              FUN_10a05fae4(apppuStack_470,auStack_638);
                              bStack_3e8 = bStack_5f8;
                            }
                            func_0x00010a249ce8(param_1 + 0x90,apppuStack_428);
                            if ((ulong)bStack_3e8 < 4) {
                              (*(code *)(&PTR_FUN_110b9a040)[bStack_3e8])(apppuStack_428);
                              *(undefined1 *)(param_1 + 0x99) = uStack_5f0;
                              bStack_430 = 3;
                              apppuStack_4b8[0] = apppuStack_470;
                              if (bStack_5a8 == 0) {
                                bStack_430 = 0;
                              }
                              else {
                                FUN_10a05fae4(apppuStack_4b8,auStack_5e8);
                                bStack_430 = bStack_5a8;
                              }
                              func_0x00010a2496a8(param_1 + 0x9a,apppuStack_470);
                              if ((ulong)bStack_430 < 4) {
                                (*(code *)(&PTR_FUN_110b9a040)[bStack_430])(apppuStack_470);
                                *(undefined1 *)(param_1 + 0xa3) = uStack_5a0;
                                bStack_478 = 3;
                                apppuStack_500[0] = apppuStack_4b8;
                                if (bStack_558 == 0) {
                                  bStack_478 = 0;
                                }
                                else {
                                  FUN_10a05fae4(apppuStack_500,auStack_598);
                                  bStack_478 = bStack_558;
                                }
                                func_0x00010a2496a8(param_1 + 0xa4,apppuStack_4b8);
                                if ((ulong)bStack_478 < 4) {
                                  (*(code *)(&PTR_FUN_110b9a040)[bStack_478])(apppuStack_4b8);
                                  *(undefined1 *)(param_1 + 0xad) = uStack_550;
                                  bStack_4c0 = 3;
                                  pppuStack_a58 = apppuStack_500;
                                  if (bStack_508 == 0) {
                                    bStack_4c0 = 0;
                                  }
                                  else {
                                    FUN_10a05fae4(&pppuStack_a58,auStack_548);
                                    bStack_4c0 = bStack_508;
                                  }
                                  ppppuVar10 = apppuStack_500;
                                  func_0x00010a2496a8(param_1 + 0xae);
                                  if ((ulong)bStack_4c0 < 4) {
                                    (*(code *)(&PTR_FUN_110b9a040)[bStack_4c0])(apppuStack_500);
                                    FUN_10a26a458(&plStack_a50);
                                    puVar9 = (undefined8 *)param_1[0xb7];
                                    if (puVar9 != (undefined8 *)0x0) {
                                      ppppuVar10 = (undefined8 ****)0x0;
                                      FUN_10a5944cc();
                                    }
                                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
                                      ___stack_chk_fail();
                                      func_0x00010a05a8c4(&plStack_a50);
                                      __Unwind_Resume();
                                      pppuVar14 = ppppuVar10[1];
                                      pppuVar13 = *ppppuVar10;
                                      *ppppuVar10 = (undefined8 ***)0x0;
                                      ppppuVar10[1] = (undefined8 ***)0x0;
                                      plVar12 = (long *)puVar9[1];
                                      puVar9[1] = pppuVar14;
                                      *puVar9 = pppuVar13;
                                      if (plVar12 != (long *)0x0) {
                                        plVar8 = plVar12 + 1;
                                        do {
                                          lVar11 = *plVar8;
                                          cVar5 = '\x01';
                                          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                                          if (bVar6) {
                                            *plVar8 = lVar11 + -1;
                                            cVar5 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar5 != '\0');
                                        if (lVar11 == 0) {
                                          (**(code **)(*plVar12 + 0x10))(plVar12);
                                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12)
                                          ;
                                        }
                                      }
                                      return puVar9;
                                    }
                                    return puVar9;
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
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a24bcb4);
  (*pcVar7)();
}



/* Entry: 10a24c56c; end: 10a24ca6b;  */

/* WARNING: Removing unreachable block (ram,0x00010a24cc08) */
/* WARNING: Removing unreachable block (ram,0x00010a24cb2c) */
/* WARNING: Removing unreachable block (ram,0x00010a24c694) */
/* WARNING: Removing unreachable block (ram,0x00010a24c628) */
/* WARNING: Removing unreachable block (ram,0x00010a24c6f0) */
/* WARNING: Removing unreachable block (ram,0x00010a24cb9c) */
/* WARNING: Removing unreachable block (ram,0x00010a24cc64) */
/* WARNING: Type propagation algorithm not settling */

undefined8 ****** FUN_10a24c56c(float param_1,undefined8 ******param_2,code **param_3)

{
  undefined8 **ppuVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ****ppppuVar6;
  code **ppcVar7;
  code *pcVar8;
  undefined8 ***pppuVar9;
  undefined8 **ppuVar10;
  undefined8 in_x7;
  code **ppcVar11;
  code *pcVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  code *pcVar17;
  code **ppcVar18;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  code **ppcStack_308;
  code **ppcStack_300;
  undefined1 uStack_2f8;
  code *pcStack_2f0;
  undefined1 uStack_2e8;
  code *pcStack_2e0;
  code **ppcStack_2d8;
  code **ppcStack_2d0;
  undefined8 ******ppppppuStack_2c8;
  undefined8 uStack_2c0;
  long alStack_2b8 [7];
  undefined8 uStack_280;
  code *pcStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *******pppppppuStack_238;
  undefined8 **ppuStack_230;
  undefined1 auStack_228 [7];
  byte bStack_221;
  undefined8 uStack_1f0;
  long lStack_1e8;
  code *pcStack_178;
  code *pcStack_170;
  undefined1 uStack_168;
  code *pcStack_160;
  code *pcStack_158;
  code *pcStack_150;
  undefined8 ******ppppppuStack_148;
  undefined8 uStack_140;
  long alStack_138 [7];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined1 auStack_a8 [7];
  byte bStack_a1;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    if (param_2[0xb] != (undefined8 *****)0x0) goto LAB_10a24c5bc;
  }
  else if (*(char *)((long)param_2 + 0x67) != '\0') {
LAB_10a24c5bc:
    pcStack_f8 = (code *)((ulong)pcStack_f8 & 0xffffffffffffff00);
    ppuStack_f0 = (undefined **)0x0;
    pcStack_150 = (code *)(long)(int)(float)CONCAT13(in_register_00005003,
                                                     CONCAT12(in_register_00005002,
                                                              CONCAT11(in_register_00005001,in_b0)))
    ;
    pcStack_158._0_1_ = 5;
    bStack_a1 = 5;
    pppppppuStack_b8 = (undefined8 *******)CONCAT26(pppppppuStack_b8._6_2_,0x7472617473);
    ppcVar7 = &pcStack_f8;
    func_0x0001095b7584(ppcVar7,&pppppppuStack_b8);
    uVar2 = *(undefined1 *)ppcVar7;
    *(undefined1 *)ppcVar7 = 5;
    pcStack_158 = (code *)CONCAT71(pcStack_158._1_7_,uVar2);
    pcVar12 = ppcVar7[1];
    ppcVar7[1] = pcStack_150;
    pcStack_150 = pcVar12;
    func_0x000109380ffc(&pcStack_150,uVar2);
    pcStack_160 = (code *)(long)(int)param_1;
    uStack_168 = 5;
    bStack_a1 = 3;
    pppppppuStack_b8 = (undefined8 *******)CONCAT44(pppppppuStack_b8._4_4_,0x646e65);
    ppcVar7 = &pcStack_f8;
    func_0x0001095b7584(ppcVar7,&pppppppuStack_b8);
    uVar2 = *(undefined1 *)ppcVar7;
    *(undefined1 *)ppcVar7 = 5;
    pcVar12 = ppcVar7[1];
    uStack_168 = uVar2;
    ppcVar7[1] = pcStack_160;
    pcStack_160 = pcVar12;
    func_0x000109380ffc(&pcStack_160,uVar2);
    FUN_10a0c32e4(&pppppppuStack_b8,&pcStack_f8,0xffffffff,0x20,0,0);
    pppppppuVar5 = pppppppuStack_b8;
    if (-1 < (char)bStack_a1) {
      ppuStack_b0 = (undefined8 **)(ulong)bStack_a1;
      pppppppuVar5 = &pppppppuStack_b8;
    }
    FUN_10a3bf330(&ppppppuStack_148,pppppppuVar5,ppuStack_b0);
    func_0x000109380ffc(&ppuStack_f0,(ulong)pcStack_f8 & 0xff);
    pcVar8 = (code *)0x138;
    __Znwm();
    pppppppuStack_b8 = (undefined8 *******)ppppppuStack_148;
    pcVar17 = pcVar8 + 8;
    *(long *)pcVar17 = 0;
    *(long *)(pcVar8 + 0x10) = 0;
    *(undefined ***)pcVar8 = &PTR_FUN_110b9f3b0;
    pcVar12 = pcVar8 + 0x18;
    ppppppuStack_148 = (undefined8 ******)0x0;
    ppuStack_b0 = (undefined8 **)uStack_140;
    (**(code **)(alStack_138[0] + 0x10))(auStack_a8,alStack_138);
    uStack_70 = uStack_100;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    pcStack_f8 = FUN_10a282dc4;
    ppuStack_f0 = &PTR_DAT_110ae9180;
    param_3 = (code **)&UNK_10e4a2295;
    FUN_10a23708c(pcVar12,&UNK_10e4a2295,0x21,&UNK_10f647b49,4,&pppppppuStack_b8,1);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    FUN_10a042634(&pppppppuStack_b8);
    pppuVar9 = param_2[7][0x20][0x39];
    pcStack_158 = pcVar12;
    pcStack_150 = pcVar8;
    (*(code *)(*pppuVar9)[0xc])();
    pppppppuStack_b8 = (undefined8 *******)0x0;
    ppuStack_b0 = (undefined8 **)0x0;
    ppuVar10 = pppuVar9[1];
    if (((ppuVar10 == (undefined8 **)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_b0 = ppuVar10,
        ppuVar10 == (undefined8 **)0x0)) ||
       (pppppppuStack_b8 = (undefined8 *******)*pppuVar9,
       pppppppuStack_b8 == (undefined8 *******)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        param_3 = (code **)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f6471ae,&UNK_10f647434,0x16f,&UNK_10f64724b);
      }
      FUN_10a24b478(param_2);
    }
    else {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar17,0x10);
        if (bVar4) {
          *(long *)pcVar17 = *(long *)pcVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      param_3 = &pcStack_178;
      pcStack_178 = pcVar12;
      pcStack_170 = pcVar8;
      (*(code *)**pppppppuStack_b8)();
      pcVar12 = pcStack_170;
      if (pcStack_170 != (code *)0x0) {
        pcVar8 = pcStack_170 + 8;
        do {
          lVar15 = *(long *)pcVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
          if (bVar4) {
            *(long *)pcVar8 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*(long *)pcStack_170 + 0x10))(pcStack_170);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar12);
        }
      }
    }
    ppuVar10 = ppuStack_b0;
    if (ppuStack_b0 != (undefined8 **)0x0) {
      ppuVar1 = ppuStack_b0 + 1;
      do {
        puVar14 = *ppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar4) {
          *ppuVar1 = (undefined8 *)((long)puVar14 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar14 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_b0)[2])(ppuStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
      }
    }
    pcVar12 = pcStack_150;
    if (pcStack_150 != (code *)0x0) {
      pcVar8 = pcStack_150 + 8;
      do {
        lVar15 = *(long *)pcVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar4) {
          *(long *)pcVar8 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*(long *)pcStack_150 + 0x10))(pcStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar12);
      }
    }
    param_2 = &ppppppuStack_148;
    FUN_10a042634();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&pcStack_178);
  func_0x00010a05a8c4(&pppppppuStack_b8);
  FUN_10a05bd88(&pcStack_158);
  FUN_10a042634(&ppppppuStack_148);
  __Unwind_Resume();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    if (param_2[0xb] == (undefined8 *****)0x0) goto LAB_10a24cec0;
  }
  else if (*(char *)((long)param_2 + 0x67) == '\0') goto LAB_10a24cec0;
  pcStack_278 = (code *)((ulong)pcStack_278 & 0xffffffffffffff00);
  ppuStack_270 = (undefined **)0x0;
  ppcStack_2d0 = (code **)0x0;
  ppcStack_2d8._0_1_ = 3;
  ppcVar11 = param_3;
  func_0x00010938229c();
  bStack_221 = 4;
  pppppppuStack_238 = (undefined8 *******)CONCAT35(pppppppuStack_238._5_3_,0x74786574);
  ppcVar7 = &pcStack_278;
  ppcStack_2d0 = ppcVar11;
  func_0x0001095b7584(ppcVar7,&pppppppuStack_238);
  uVar2 = *(undefined1 *)ppcVar7;
  *(undefined1 *)ppcVar7 = 3;
  ppcStack_2d8 = (code **)CONCAT71(ppcStack_2d8._1_7_,uVar2);
  ppcVar11 = (code **)ppcVar7[1];
  ppcVar7[1] = (code *)ppcStack_2d0;
  ppcStack_2d0 = ppcVar11;
  func_0x000109380ffc(&ppcStack_2d0,uVar2);
  pcStack_2e0 = (code *)(long)*(int *)(param_3 + 3);
  uStack_2e8 = 5;
  bStack_221 = 5;
  pppppppuStack_238 = (undefined8 *******)CONCAT26(pppppppuStack_238._6_2_,0x7472617473);
  ppcVar7 = &pcStack_278;
  func_0x0001095b7584(ppcVar7,&pppppppuStack_238);
  uVar2 = *(undefined1 *)ppcVar7;
  *(undefined1 *)ppcVar7 = 5;
  pcVar12 = ppcVar7[1];
  uStack_2e8 = uVar2;
  ppcVar7[1] = pcStack_2e0;
  pcStack_2e0 = pcVar12;
  func_0x000109380ffc(&pcStack_2e0,uVar2);
  pcStack_2f0 = (code *)(long)*(int *)((long)param_3 + 0x1c);
  uStack_2f8 = 5;
  bStack_221 = 3;
  pppppppuStack_238 = (undefined8 *******)CONCAT44(pppppppuStack_238._4_4_,0x646e65);
  ppcVar7 = &pcStack_278;
  func_0x0001095b7584(ppcVar7,&pppppppuStack_238);
  uVar2 = *(undefined1 *)ppcVar7;
  *(undefined1 *)ppcVar7 = 5;
  pcVar12 = ppcVar7[1];
  uStack_2f8 = uVar2;
  ppcVar7[1] = pcStack_2f0;
  pcStack_2f0 = pcVar12;
  func_0x000109380ffc(&pcStack_2f0,uVar2);
  FUN_10a0c32e4(&pppppppuStack_238,&pcStack_278,0xffffffff,0x20,0,0);
  pppppppuVar5 = pppppppuStack_238;
  if (-1 < (char)bStack_221) {
    ppuStack_230 = (undefined8 **)(ulong)bStack_221;
    pppppppuVar5 = &pppppppuStack_238;
  }
  FUN_10a3bf330(&ppppppuStack_2c8,pppppppuVar5,ppuStack_230);
  func_0x000109380ffc(&ppuStack_270,(ulong)pcStack_278 & 0xff);
  ppppuVar16 = param_2[7][0x20];
  ppcVar11 = (code **)0x138;
  __Znwm();
  pppppppuStack_238 = (undefined8 *******)ppppppuStack_2c8;
  ppcVar18 = ppcVar11 + 1;
  *ppcVar18 = (code *)0x0;
  ppcVar11[2] = (code *)0x0;
  *ppcVar11 = (code *)&PTR_FUN_110b9f3b0;
  ppcVar7 = ppcVar11 + 3;
  ppppppuStack_2c8 = (undefined8 ******)0x0;
  ppuStack_230 = (undefined8 **)uStack_2c0;
  (**(code **)(alStack_2b8[0] + 0x10))(auStack_228,alStack_2b8);
  uStack_1f0 = uStack_280;
  pppuVar9 = ppppuVar16[0x42];
  ppppuVar6 = (undefined8 ****)ppppuVar16[0x41];
  if (-1 < (char)*(byte *)((long)ppppuVar16 + 0x21f)) {
    pppuVar9 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar16 + 0x21f);
    ppppuVar6 = ppppuVar16 + 0x41;
  }
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_268 = 0;
  pcStack_278 = FUN_10a282dc4;
  ppuStack_270 = &PTR_DAT_110ae9180;
  FUN_10a23708c(ppcVar7,&UNK_10e4a22b7,0x1a,&UNK_10f647b49,4,&pppppppuStack_238,1,in_x7,ppppuVar6,
                pppuVar9,&pcStack_278);
  (*(code *)*ppuStack_270)(&ppuStack_270);
  FUN_10a042634(&pppppppuStack_238);
  pppuVar9 = param_2[7][0x20][0x39];
  ppcStack_2d8 = ppcVar7;
  ppcStack_2d0 = ppcVar11;
  (*(code *)(*pppuVar9)[0xc])();
  pppppppuStack_238 = (undefined8 *******)0x0;
  ppuStack_230 = (undefined8 **)0x0;
  ppuVar10 = pppuVar9[1];
  if (((ppuVar10 == (undefined8 **)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_230 = ppuVar10,
      ppuVar10 == (undefined8 **)0x0)) ||
     (pppppppuStack_238 = (undefined8 *******)*pppuVar9,
     pppppppuStack_238 == (undefined8 *******)0x0)) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6471ae,&UNK_10f647489,0x185,&UNK_10f64724b);
    }
    FUN_10a24b478(param_2);
  }
  else {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppcVar18,0x10);
      if (bVar4) {
        *ppcVar18 = *ppcVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    ppcStack_308 = ppcVar7;
    ppcStack_300 = ppcVar11;
    (*(code *)**pppppppuStack_238)(pppppppuStack_238,&ppcStack_308);
    ppcVar7 = ppcStack_300;
    if (ppcStack_300 != (code **)0x0) {
      ppcVar11 = ppcStack_300 + 1;
      do {
        pcVar12 = *ppcVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppcVar11,0x10);
        if (bVar4) {
          *ppcVar11 = pcVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pcVar12 == (code *)0x0) {
        (**(code **)(*ppcStack_300 + 0x10))(ppcStack_300);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar7);
      }
    }
  }
  ppuVar10 = ppuStack_230;
  if (ppuStack_230 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_230 + 1;
    do {
      puVar14 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar14 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_230)[2])(ppuStack_230);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  ppcVar7 = ppcStack_2d0;
  if (ppcStack_2d0 != (code **)0x0) {
    ppcVar11 = ppcStack_2d0 + 1;
    do {
      pcVar12 = *ppcVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppcVar11,0x10);
      if (bVar4) {
        *ppcVar11 = pcVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pcVar12 == (code *)0x0) {
      (**(code **)(*ppcStack_2d0 + 0x10))(ppcStack_2d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar7);
    }
  }
  param_2 = &ppppppuStack_2c8;
  FUN_10a042634();
LAB_10a24cec0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
    ___stack_chk_fail();
    FUN_10a05bd88(&ppcStack_308);
    func_0x00010a05a8c4(&pppppppuStack_238);
    FUN_10a05bd88(&ppcStack_2d8);
    FUN_10a042634(&ppppppuStack_2c8);
    __Unwind_Resume();
    if (param_2[6] == param_2[7]) {
      ppppppuVar13 = (undefined8 ******)param_2[1];
      if (ppppppuVar13 == param_2) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        do {
          lVar15 = lVar15 + ((long)ppppppuVar13[9] - (long)ppppppuVar13[8] >> 2);
          ppppppuVar13 = (undefined8 ******)ppppppuVar13[1];
        } while (ppppppuVar13 != param_2);
      }
    }
    else {
      lVar15 = (long)param_2[0xd] - (long)param_2[0xc] >> 3;
    }
    return (undefined8 ******)(lVar15 + 1);
  }
  return param_2;
}



/* Entry: 10a24ca6c; end: 10a24d003;  */

/* WARNING: Removing unreachable block (ram,0x00010a24cc08) */
/* WARNING: Removing unreachable block (ram,0x00010a24cb2c) */
/* WARNING: Removing unreachable block (ram,0x00010a24cb9c) */
/* WARNING: Removing unreachable block (ram,0x00010a24cc64) */
/* WARNING: Type propagation algorithm not settling */

undefined8 ****** FUN_10a24ca6c(undefined8 ******param_1,code *param_2)

{
  undefined8 **ppuVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  undefined8 ****ppppuVar6;
  code **ppcVar7;
  code *pcVar8;
  undefined8 ***pppuVar9;
  undefined8 **ppuVar10;
  undefined8 in_x7;
  code *pcVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  code *pcVar16;
  code *pcStack_178;
  code *pcStack_170;
  undefined1 uStack_168;
  code *pcStack_160;
  undefined1 uStack_158;
  code *pcStack_150;
  code *pcStack_148;
  code *pcStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 uStack_130;
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 auStack_98 [7];
  byte bStack_91;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    if (param_1[0xb] == (undefined8 *****)0x0) goto LAB_10a24cec0;
  }
  else if (*(char *)((long)param_1 + 0x67) == '\0') goto LAB_10a24cec0;
  pcStack_e8 = (code *)((ulong)pcStack_e8 & 0xffffffffffffff00);
  ppuStack_e0 = (undefined **)0x0;
  pcStack_140 = (code *)0x0;
  pcStack_148._0_1_ = 3;
  pcVar11 = param_2;
  func_0x00010938229c();
  bStack_91 = 4;
  pppppppuStack_a8 = (undefined8 *******)CONCAT35(pppppppuStack_a8._5_3_,0x74786574);
  ppcVar7 = &pcStack_e8;
  pcStack_140 = pcVar11;
  func_0x0001095b7584(ppcVar7,&pppppppuStack_a8);
  uVar2 = *(undefined1 *)ppcVar7;
  *(undefined1 *)ppcVar7 = 3;
  pcStack_148 = (code *)CONCAT71(pcStack_148._1_7_,uVar2);
  pcVar11 = ppcVar7[1];
  ppcVar7[1] = pcStack_140;
  pcStack_140 = pcVar11;
  func_0x000109380ffc(&pcStack_140,uVar2);
  pcStack_150 = (code *)(long)*(int *)(param_2 + 0x18);
  uStack_158 = 5;
  bStack_91 = 5;
  pppppppuStack_a8 = (undefined8 *******)CONCAT26(pppppppuStack_a8._6_2_,0x7472617473);
  ppcVar7 = &pcStack_e8;
  func_0x0001095b7584(ppcVar7,&pppppppuStack_a8);
  uVar2 = *(undefined1 *)ppcVar7;
  *(undefined1 *)ppcVar7 = 5;
  pcVar11 = ppcVar7[1];
  uStack_158 = uVar2;
  ppcVar7[1] = pcStack_150;
  pcStack_150 = pcVar11;
  func_0x000109380ffc(&pcStack_150,uVar2);
  pcStack_160 = (code *)(long)*(int *)(param_2 + 0x1c);
  uStack_168 = 5;
  bStack_91 = 3;
  pppppppuStack_a8 = (undefined8 *******)CONCAT44(pppppppuStack_a8._4_4_,0x646e65);
  ppcVar7 = &pcStack_e8;
  func_0x0001095b7584(ppcVar7,&pppppppuStack_a8);
  uVar2 = *(undefined1 *)ppcVar7;
  *(undefined1 *)ppcVar7 = 5;
  pcVar11 = ppcVar7[1];
  uStack_168 = uVar2;
  ppcVar7[1] = pcStack_160;
  pcStack_160 = pcVar11;
  func_0x000109380ffc(&pcStack_160,uVar2);
  FUN_10a0c32e4(&pppppppuStack_a8,&pcStack_e8,0xffffffff,0x20,0,0);
  pppppppuVar5 = pppppppuStack_a8;
  if (-1 < (char)bStack_91) {
    ppuStack_a0 = (undefined8 **)(ulong)bStack_91;
    pppppppuVar5 = &pppppppuStack_a8;
  }
  FUN_10a3bf330(&ppppppuStack_138,pppppppuVar5,ppuStack_a0);
  func_0x000109380ffc(&ppuStack_e0,(ulong)pcStack_e8 & 0xff);
  ppppuVar15 = param_1[7][0x20];
  pcVar8 = (code *)0x138;
  __Znwm();
  pppppppuStack_a8 = (undefined8 *******)ppppppuStack_138;
  pcVar16 = pcVar8 + 8;
  *(long *)pcVar16 = 0;
  *(long *)(pcVar8 + 0x10) = 0;
  *(undefined ***)pcVar8 = &PTR_FUN_110b9f3b0;
  pcVar11 = pcVar8 + 0x18;
  ppppppuStack_138 = (undefined8 ******)0x0;
  ppuStack_a0 = (undefined8 **)uStack_130;
  (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
  uStack_60 = uStack_f0;
  pppuVar9 = ppppuVar15[0x42];
  ppppuVar6 = (undefined8 ****)ppppuVar15[0x41];
  if (-1 < (char)*(byte *)((long)ppppuVar15 + 0x21f)) {
    pppuVar9 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar15 + 0x21f);
    ppppuVar6 = ppppuVar15 + 0x41;
  }
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  pcStack_e8 = FUN_10a282dc4;
  ppuStack_e0 = &PTR_DAT_110ae9180;
  FUN_10a23708c(pcVar11,&UNK_10e4a22b7,0x1a,&UNK_10f647b49,4,&pppppppuStack_a8,1,in_x7,ppppuVar6,
                pppuVar9,&pcStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  FUN_10a042634(&pppppppuStack_a8);
  pppuVar9 = param_1[7][0x20][0x39];
  pcStack_148 = pcVar11;
  pcStack_140 = pcVar8;
  (*(code *)(*pppuVar9)[0xc])();
  pppppppuStack_a8 = (undefined8 *******)0x0;
  ppuStack_a0 = (undefined8 **)0x0;
  ppuVar10 = pppuVar9[1];
  if (((ppuVar10 == (undefined8 **)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_a0 = ppuVar10,
      ppuVar10 == (undefined8 **)0x0)) ||
     (pppppppuStack_a8 = (undefined8 *******)*pppuVar9, pppppppuStack_a8 == (undefined8 *******)0x0)
     ) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6471ae,&UNK_10f647489,0x185,&UNK_10f64724b);
    }
    FUN_10a24b478(param_1);
  }
  else {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
      if (bVar4) {
        *(long *)pcVar16 = *(long *)pcVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pcStack_178 = pcVar11;
    pcStack_170 = pcVar8;
    (*(code *)**pppppppuStack_a8)(pppppppuStack_a8,&pcStack_178);
    pcVar11 = pcStack_170;
    if (pcStack_170 != (code *)0x0) {
      pcVar8 = pcStack_170 + 8;
      do {
        lVar14 = *(long *)pcVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar4) {
          *(long *)pcVar8 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_170 + 0x10))(pcStack_170);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar11);
      }
    }
  }
  ppuVar10 = ppuStack_a0;
  if (ppuStack_a0 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_a0 + 1;
    do {
      puVar13 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar13 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar13 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_a0)[2])(ppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  pcVar11 = pcStack_140;
  if (pcStack_140 != (code *)0x0) {
    pcVar8 = pcStack_140 + 8;
    do {
      lVar14 = *(long *)pcVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
      if (bVar4) {
        *(long *)pcVar8 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*(long *)pcStack_140 + 0x10))(pcStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar11);
    }
  }
  param_1 = &ppppppuStack_138;
  FUN_10a042634();
LAB_10a24cec0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&pcStack_178);
  func_0x00010a05a8c4(&pppppppuStack_a8);
  FUN_10a05bd88(&pcStack_148);
  FUN_10a042634(&ppppppuStack_138);
  __Unwind_Resume();
  if (param_1[6] == param_1[7]) {
    ppppppuVar12 = (undefined8 ******)param_1[1];
    if (ppppppuVar12 == param_1) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      do {
        lVar14 = lVar14 + ((long)ppppppuVar12[9] - (long)ppppppuVar12[8] >> 2);
        ppppppuVar12 = (undefined8 ******)ppppppuVar12[1];
      } while (ppppppuVar12 != param_1);
    }
  }
  else {
    lVar14 = (long)param_1[0xd] - (long)param_1[0xc] >> 3;
  }
  return (undefined8 ******)(lVar14 + 1);
}



/* Entry: 10a24d004; end: 10a24d057;  */

long FUN_10a24d004(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x30) == *(long *)(param_1 + 0x38)) {
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 == param_1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + (*(long *)(lVar1 + 0x48) - *(long *)(lVar1 + 0x40) >> 2);
        lVar1 = *(long *)(lVar1 + 8);
      } while (lVar1 != param_1);
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 3;
  }
  return lVar2 + 1;
}



/* Entry: 10a24d058; end: 10a24d2d3;  */

void FUN_10a24d058(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 **ppuStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined8 uStack_a7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 - lVar1 != 0) {
    if (param_1[2] == 0) {
      ppuStack_1b0 = &ppuStack_1b0;
      ppuStack_198 = &ppuStack_198;
      uStack_1a0 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_108 = 0;
      uStack_a7 = 0;
      uStack_a8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_af = 0;
      uStack_b8 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_f0 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      ppuStack_1a8 = ppuStack_1b0;
      ppuStack_190 = ppuStack_198;
      if ((uint *)param_2[4] == (uint *)param_2[3]) goto LAB_10a24d2b8;
      uStack_f8 = (ulong)*(uint *)param_2[3] << 0x20;
      if ((undefined4 *)param_2[7] == (undefined4 *)param_2[6]) goto LAB_10a24d2b8;
      uStack_f0 = *(undefined4 *)param_2[6];
      FUN_10a24d2d4(param_1,&ppuStack_1b0);
      func_0x00010a208aac(&ppuStack_1b0);
    }
    else {
      if ((undefined4 *)param_2[4] == (undefined4 *)param_2[3]) {
LAB_10a24d2b8:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a24d2bc);
        (*pcVar4)();
      }
      lVar5 = *param_1;
      *(undefined4 *)(lVar5 + 0xcc) = *(undefined4 *)param_2[3];
      if ((undefined4 *)param_2[7] == (undefined4 *)param_2[6]) goto LAB_10a24d2b8;
      *(undefined4 *)(lVar5 + 0xd0) = *(undefined4 *)param_2[6];
    }
    lVar10 = 0;
    lVar5 = 0;
    uVar11 = lVar2 - lVar1 >> 2;
    uVar9 = 1;
    do {
      uVar6 = uVar9 - 1;
      uStack_1a0 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      uStack_a7 = 0;
      uStack_af = 0;
      uStack_a8 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      ppuStack_1b0 = &ppuStack_1b0;
      ppuStack_1a8 = &ppuStack_1b0;
      ppuStack_198 = &ppuStack_198;
      ppuStack_190 = &ppuStack_198;
      if ((ulong)(param_2[1] - *param_2 >> 2) <= uVar6) goto LAB_10a24d2b8;
      uVar3 = *(uint *)(*param_2 + lVar10);
      uStack_f8 = (ulong)uVar3;
      lVar5 = lVar5 + 1;
      lVar1 = param_2[3];
      uVar8 = param_2[4] - lVar1 >> 2;
      if (uVar9 < uVar11) {
        if (uVar8 <= uVar9) goto LAB_10a24d2b8;
        uStack_f8 = CONCAT44(*(undefined4 *)(lVar1 + uVar9 * 4),uVar3);
        if ((ulong)(param_2[7] - param_2[6] >> 2) <= uVar9) goto LAB_10a24d2b8;
        puVar7 = (undefined4 *)(param_2[6] + lVar5 * 4);
      }
      else {
        if (uVar8 <= uVar6) goto LAB_10a24d2b8;
        uStack_f8 = CONCAT44(*(undefined4 *)(lVar1 + lVar10),uVar3);
        if ((ulong)(param_2[7] - param_2[6] >> 2) <= uVar6) goto LAB_10a24d2b8;
        puVar7 = (undefined4 *)(param_2[6] + lVar10);
      }
      uStack_f0 = *puVar7;
      FUN_10a24d2d4(param_1,&ppuStack_1b0);
      func_0x00010a208aac(&ppuStack_1b0);
      lVar10 = lVar10 + 4;
      uVar9 = uVar9 + 1;
    } while (uVar9 - uVar11 != 1);
  }
  return;
}



/* Entry: 10a24d2d4; end: 10a24d32f;  */

void FUN_10a24d2d4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)0x158;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x00010a282f28(plVar1 + 2,param_2);
  lVar2 = *param_1;
  *plVar1 = lVar2;
  plVar1[1] = (long)param_1;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a24d330; end: 10a24d407;  */

void FUN_10a24d330(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1[2] == 0) {
    ppuStack_178 = &ppuStack_178;
    ppuStack_160 = &ppuStack_160;
    uStack_168 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_6f = 0;
    uStack_70 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_80 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    ppuStack_170 = ppuStack_178;
    ppuStack_158 = ppuStack_160;
    FUN_10a24d2d4(param_1,&ppuStack_178);
    func_0x00010a208aac(&ppuStack_178);
    if (param_1[2] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a24d3f4);
      (*pcVar1)();
    }
  }
  FUN_10a24d408(*param_1 + 0x10,param_2);
  return;
}


