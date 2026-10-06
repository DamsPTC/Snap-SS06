/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109a18d54; end: 109a18d87;  */

void FUN_109a18d54(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109a18d88; end: 109a18f4f;  */

long FUN_109a18d88(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109a18f50; end: 109a1912b;  */

/* WARNING: Removing unreachable block (ram,0x000109a19028) */

void FUN_109a18f50(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined1 auStack_178 [136];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_3[3] + 8) & 1) == 0) {
    func_0x000105688514(&UNK_10f594464);
  }
  else if (*param_3 != 0) {
    ppuStack_f0 = &PTR_DAT_110b3b608;
    uStack_e8 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    FUN_109a1912c(param_4,&ppuStack_f0);
    func_0x000109ccb2d4(&ppuStack_f0);
    plStack_b8 = (long *)param_3[1];
    lStack_c0 = *param_3;
    *param_3 = 0;
    param_3[1] = 0;
    lStack_b0 = param_3[2];
    (**(code **)(param_3[3] + 0x10))(apuStack_a8,param_3 + 3);
    lStack_68 = param_3[0xb];
    lStack_70 = param_3[10];
    lStack_60 = param_3[0xc];
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[10] = 0;
    FUN_109a195f4(param_4,&lStack_c0);
    (*(code *)*apuStack_a8[0])(apuStack_a8);
    plVar4 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    FUN_109a1da68(auStack_178,0,param_2);
    FUN_109a15f38(param_1,auStack_178,param_4);
    puVar5 = auStack_178;
    FUN_109a1dbe4();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    goto LAB_109a190ec;
  }
  param_4 = param_3;
  puVar5 = &UNK_10f59449b;
  func_0x000105688514();
LAB_109a190ec:
  ___stack_chk_fail();
  FUN_109a1dbe4(auStack_178);
  puVar6 = puVar5;
  __Unwind_Resume(puVar5);
  pcStack_188 = FUN_109a1912c;
  uStack_1a0 = param_1;
  puStack_198 = puVar5;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x00010b4d1294(auStack_1b8,param_4);
  FUN_109a18764(puVar6,auStack_1b8,&DAT_110b20ce8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  return;
}



/* Entry: 109a1912c; end: 109a1919b;  */

void FUN_109a1912c(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x00010b4d1294(auStack_38,param_2);
  FUN_109a18764(param_1,auStack_38,&DAT_110b20ce8);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 109a1919c; end: 109a19273;  */

long FUN_109a1919c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 109a19274; end: 109a1933b;  */

undefined8 * FUN_109a19274(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_110b21228;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = &DAT_11383d918;
  param_1[0xf] = &DAT_11383d918;
  param_1[0x10] = 0;
  if (param_1 != param_3) {
    if ((param_2 & 1) != 0) {
      param_2 = *(ulong *)(param_2 & 0xfffffffffffffffe);
    }
    uVar1 = param_3[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (param_2 == uVar1) {
      FUN_109a1e7c8(param_1,param_3);
    }
    else {
      FUN_109a1dc8c(param_1);
      FUN_109a1e628(param_1,param_3);
    }
  }
  return param_1;
}



/* Entry: 109a1933c; end: 109a19443;  */

long * FUN_109a1933c(long *param_1)

{
  long lVar1;
  
  func_0x000109a19374(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a19444; end: 109a1944f;  */

void FUN_109a19444(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a1944c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



/* Entry: 109a19450; end: 109a19537;  */

ulong * FUN_109a19450(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  uVar2 = *param_1;
  if ((ulong)(((long)(param_1[2] - uVar2) >> 3) * 0x2e8ba2e8ba2e8ba3) < param_2) {
    if (0x2e8ba2e8ba2e8ba < param_2) {
      FUN_109a19950();
      func_0x000109a19bac(&uStack_58);
      __Unwind_Resume();
      for (plVar4 = *(long **)(*param_1 + 0x50); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        uStack_b8 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        ppuStack_f0 = &PTR_DAT_1108a5c28;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0x100000001;
        uStack_c0 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        plVar4[7] = 0;
        plVar4[6] = 0;
        plVar4[8] = 0x100000001;
        func_0x0001093783c0(plVar4 + 9,&uStack_d0);
        func_0x00010937843c(plVar4 + 0xb,&uStack_c0);
        func_0x000105675c90(&ppuStack_f0);
      }
      return param_1;
    }
    uVar3 = param_1[1];
    uVar1 = param_2;
    puStack_38 = param_1;
    FUN_109a19964();
    uVar2 = param_2 + (uVar3 - uVar2);
    uVar3 = param_2 + uVar1 * 0x58;
    uVar1 = uVar2 + (*param_1 - param_1[1]);
    uStack_58 = param_2;
    uStack_50 = uVar2;
    uStack_48 = uVar2;
    uStack_40 = uVar3;
    FUN_109a199ac(param_1,*param_1,param_1[1],uVar1);
    uStack_58 = *param_1;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    uStack_40 = param_1[2];
    param_1[2] = uVar3;
    param_1 = &uStack_58;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x000109a19bac(param_1);
  }
  return param_1;
}



/* Entry: 109a19538; end: 109a195f3;  */

long * FUN_109a19538(long *param_1)

{
  long *plVar1;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  for (plVar1 = *(long **)(*param_1 + 0x50); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    ppuStack_90 = &PTR_DAT_1108a5c28;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0x100000001;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[8] = 0x100000001;
    func_0x0001093783c0(plVar1 + 9,&uStack_70);
    func_0x00010937843c(plVar1 + 0xb,&uStack_60);
    func_0x000105675c90(&ppuStack_90);
  }
  return param_1;
}



/* Entry: 109a195f4; end: 109a1990f;  */

undefined8 ** FUN_109a195f4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long lVar8;
  long *plVar9;
  undefined8 **ppuStack_1d0;
  undefined2 uStack_1c8;
  char cStack_1b9;
  undefined1 uStack_1b1;
  undefined1 *puStack_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *apuStack_198 [7];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 *apuStack_98 [7];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cStack_1b9 = '\t';
  ppuStack_1d0 = (undefined8 **)0x636e657265666e49;
  uStack_1c8 = 0x65;
  ppuStack_1a8 = (undefined8 **)param_2[1];
  puStack_1b0 = (undefined1 *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_1a0 = param_2[2];
  (**(code **)(param_2[3] + 0x10))(apuStack_198);
  uStack_158 = param_2[0xb];
  uStack_160 = param_2[10];
  lStack_150 = param_2[0xc];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[10] = 0;
  puStack_140 = &DAT_110b20d00;
  plStack_a8 = (long *)ppuStack_1a8;
  puStack_b0 = puStack_1b0;
  puStack_1b0 = (undefined1 *)0x0;
  ppuStack_1a8 = (undefined8 **)0x0;
  uStack_a0 = uStack_1a0;
  (*(code *)apuStack_198[0][2])(apuStack_98,apuStack_198);
  uStack_58 = uStack_158;
  uStack_60 = uStack_160;
  uStack_50 = lStack_150;
  uStack_158 = 0;
  lStack_150 = 0;
  uStack_160 = 0;
  pcStack_138 = FUN_109a19e08;
  ppuStack_130 = &PTR_DAT_110b20d18;
  puVar5 = (undefined8 *)0x68;
  __Znwm();
  puVar5[1] = plStack_a8;
  *puVar5 = puStack_b0;
  puStack_b0 = (undefined1 *)0x0;
  plStack_a8 = (long *)0x0;
  puVar5[2] = uStack_a0;
  (*(code *)apuStack_98[0][2])(puVar5 + 3,apuStack_98);
  puVar5[0xb] = uStack_58;
  puVar5[10] = uStack_60;
  ppuStack_f0 = &PTR_DAT_110b20d30;
  pcStack_f8 = FUN_109a1ad30;
  uStack_c0 = 0xffffffffffffffff;
  uStack_c8 = 2;
  puStack_d0 = &DAT_110b20d48;
  uStack_d8 = 1;
  puVar5[0xc] = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_b8 = 1;
  ppuStack_e0 = &PTR_DAT_110b20d40;
  uStack_e8 = 2;
  puStack_128 = puVar5;
  (*(code *)*apuStack_98[0])(apuStack_98);
  plVar9 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  puStack_b0 = (undefined1 *)&ppuStack_1d0;
  FUN_109a1b56c(param_1,&ppuStack_1d0,&UNK_10dd5b8f9,&puStack_b0,&uStack_1b1);
  puVar5 = (undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x28) = puStack_140;
  *(code **)(param_1 + 0x30) = pcStack_138;
  (**(code **)*puVar5)(puVar5);
  (*(code *)ppuStack_130[2])(puVar5,&ppuStack_130);
  *(undefined ***)(param_1 + 0x88) = ppuStack_e0;
  *(undefined8 *)(param_1 + 0x80) = uStack_e8;
  *(undefined **)(param_1 + 0x98) = puStack_d0;
  *(undefined8 *)(param_1 + 0x90) = uStack_d8;
  *(undefined8 *)(param_1 + 0xa8) = uStack_c0;
  *(undefined8 *)(param_1 + 0xa0) = uStack_c8;
  *(undefined1 *)(param_1 + 0xb0) = uStack_b8;
  *(undefined ***)(param_1 + 0x78) = ppuStack_f0;
  *(code **)(param_1 + 0x70) = pcStack_f8;
  (*(code *)*ppuStack_130)(&ppuStack_130);
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  ppuVar6 = apuStack_198;
  (*(code *)*apuStack_198[0])();
  ppuVar7 = ppuStack_1a8;
  if (ppuStack_1a8 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_1a8 + 1;
    do {
      puVar5 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar5 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar5 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_1a8)[2])(ppuStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar7;
    }
  }
  if (cStack_1b9 < '\0') {
    ppuVar6 = ppuStack_1d0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_130)(&ppuStack_130);
  FUN_109a19910(&puStack_1b0);
  if (cStack_1b9 < '\0') {
    __ZdlPv(ppuStack_1d0);
  }
  __Unwind_Resume();
  if (*(char *)((long)ppuVar6 + 0x67) < '\0') {
    __ZdlPv(ppuVar6[10]);
  }
  (*(code *)*ppuVar6[3])();
  plVar9 = ppuVar6[1];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return ppuVar6;
}



/* Entry: 109a19910; end: 109a1994f;  */

long FUN_109a19910(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 109a19950; end: 109a19963;  */

void FUN_109a19950(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined *)0x2e8ba2e8ba2e8ba < puVar1) {
    func_0x000104c4f740();
    plStack_88 = &lStack_70;
    plStack_80 = &lStack_68;
    uStack_78 = 0;
    lVar2 = param_2;
    puStack_90 = puVar1;
    lStack_70 = param_4;
    if (param_2 == param_3) {
      uStack_78 = 1;
      lStack_68 = param_4;
    }
    else {
      do {
        lStack_68 = param_4;
        FUN_109a19a7c(param_4,lVar2);
        lVar2 = lVar2 + 0x58;
        param_4 = lStack_68 + 0x58;
      } while (lVar2 != param_3);
      uStack_78 = 1;
      lStack_68 = param_4;
      do {
        if (*(int *)(param_2 + 0x50) != -1) {
          func_0x000105675c90(param_2);
        }
        *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
        param_2 = param_2 + 0x58;
      } while (param_2 != param_3);
    }
    FUN_109a19b40(&puStack_90);
    return;
  }
  __Znwm((long)puVar1 * 0x58);
  return;
}



/* Entry: 109a19964; end: 109a199ab;  */

void FUN_109a19964(ulong param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  if (0x2e8ba2e8ba2e8ba < param_1) {
    func_0x000104c4f740();
    plStack_78 = &lStack_60;
    plStack_70 = &lStack_58;
    uStack_68 = 0;
    lVar1 = param_2;
    uStack_80 = param_1;
    lStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
      lStack_58 = param_4;
    }
    else {
      do {
        lStack_58 = param_4;
        FUN_109a19a7c(param_4,lVar1);
        lVar1 = lVar1 + 0x58;
        param_4 = lStack_58 + 0x58;
      } while (lVar1 != param_3);
      uStack_68 = 1;
      lStack_58 = param_4;
      do {
        if (*(int *)(param_2 + 0x50) != -1) {
          func_0x000105675c90(param_2);
        }
        *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
        param_2 = param_2 + 0x58;
      } while (param_2 != param_3);
    }
    FUN_109a19b40(&uStack_80);
    return;
  }
  __Znwm(param_1 * 0x58);
  return;
}



/* Entry: 109a199ac; end: 109a19a7b;  */

void FUN_109a199ac(undefined8 param_1,long param_2,long param_3,long param_4)

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
  uStack_48 = 0;
  lVar1 = param_2;
  uStack_60 = param_1;
  lStack_40 = param_4;
  if (param_2 == param_3) {
    uStack_48 = 1;
    lStack_38 = param_4;
  }
  else {
    do {
      lStack_38 = param_4;
      FUN_109a19a7c(param_4,lVar1);
      lVar1 = lVar1 + 0x58;
      param_4 = lStack_38 + 0x58;
    } while (lVar1 != param_3);
    uStack_48 = 1;
    lStack_38 = param_4;
    do {
      if (*(int *)(param_2 + 0x50) != -1) {
        func_0x000105675c90(param_2);
      }
      *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
      param_2 = param_2 + 0x58;
    } while (param_2 != param_3);
  }
  FUN_109a19b40(&uStack_60);
  return;
}



/* Entry: 109a19a7c; end: 109a19b3f;  */

undefined8 * FUN_109a19a7c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  iVar2 = *(int *)(param_2 + 0x50);
  if (iVar2 != -1) {
    *param_1 = &PTR_DAT_1108a5c28;
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 8);
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
    param_1[2] = uVar7;
    param_1[1] = uVar6;
    lVar5 = *(long *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[4] = uVar6;
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
    FUN_109407928(param_1 + 6,param_2 + 0x30);
    *(int *)(param_1 + 10) = iVar2;
  }
  return param_1;
}



/* Entry: 109a19b40; end: 109a19c1b;  */

long FUN_109a19b40(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar3 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar3) {
      lVar2 = lVar1 + -0x58;
      if (*(int *)(lVar1 + -8) != -1) {
        func_0x000105675c90();
      }
      *(undefined4 *)(lVar1 + -8) = 0xffffffff;
      lVar1 = lVar2;
    }
  }
  return param_1;
}



/* Entry: 109a19c1c; end: 109a19c9f;  */

undefined8 * FUN_109a19c1c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_DAT_1108a5c28;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar6;
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
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
  FUN_109407928(param_1 + 6,param_2 + 0x30);
  return param_1;
}



/* Entry: 109a19ca0; end: 109a19d1b;  */

void FUN_109a19ca0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar1 = lVar3 + -0x58;
      if (*(int *)(lVar3 + -8) != -1) {
        func_0x000105675c90();
      }
      *(undefined4 *)(lVar3 + -8) = 0xffffffff;
      lVar3 = lVar1;
    } while (lVar1 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 109a19d1c; end: 109a19e07;  */

long FUN_109a19d1c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 109a19e08; end: 109a1a7c3;  */

void FUN_109a19e08(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 ****ppppuVar3;
  long *plVar4;
  undefined8 *******pppppppuVar5;
  char cVar6;
  bool bVar7;
  undefined8 ***pppuVar8;
  code *pcVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *****pppppuVar13;
  long lVar14;
  undefined8 ***pppuVar15;
  undefined8 ******ppppppuVar16;
  long lVar17;
  undefined8 ******ppppppuStack_3c8;
  undefined8 ******ppppppuStack_3c0;
  undefined8 ******ppppppuStack_3b8;
  undefined1 *puStack_3b0;
  code *pcStack_3a8;
  undefined8 ******ppppppuStack_398;
  long lStack_390;
  undefined8 ******ppppppuStack_388;
  undefined8 ****ppppuStack_380;
  undefined8 ****ppppuStack_378;
  long lStack_370;
  undefined8 *****pppppuStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  long lStack_320;
  long *plStack_318;
  undefined8 ****ppppuStack_310;
  undefined8 ****ppppuStack_308;
  long lStack_300;
  undefined8 *****pppppuStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 ****ppppuStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_270;
  long lStack_268;
  long lStack_258;
  long lStack_250;
  undefined8 ****ppppuStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined4 uStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 ****ppppuStack_1b0;
  undefined8 ****ppppuStack_1a8;
  long lStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  undefined8 ******ppppppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_128;
  undefined8 *apuStack_110 [8];
  undefined8 *apuStack_d0 [8];
  long *plStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(param_3 + 0x10);
  pppppppuVar11 = (undefined8 *******)*param_2;
  lVar14 = param_2[1];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  ppppppuStack_398 = pppppppuVar11;
  if (lVar14 - (long)pppppppuVar11 == 0x30) {
    ppppuStack_1f0 = (undefined8 ****)&PTR_FUN_110b20db0;
    uStack_1e8 = 0;
    puStack_1e0 = &DAT_11383d918;
    uStack_1d8 = 0;
    pppppuVar13 = (undefined8 *****)&PTR_PTR_1134051b0;
    if (pppppppuVar11[2][5] != (undefined8 *****)0x0) {
      pppppuVar13 = pppppppuVar11[2][5];
    }
    pppppuVar13 = pppppuVar13 + 5;
    func_0x00010b4bedfc(pppppuVar13,&UNK_10f5945b0,0x1e,&ppppuStack_1f0);
    if (((ulong)pppppuVar13 & 1) == 0) {
      FUN_1098998d4(&ppppuStack_1b0,pppppppuVar11);
      FUN_10928a5e0(&ppppuStack_2b8,&UNK_10f594545,&ppppuStack_1b0);
      FUN_109259240(&ppppppuStack_180,&ppppuStack_2b8,&DAT_10f638984);
      func_0x000105687ee0(&ppppppuStack_180);
    }
    else {
      ppppppuVar10 = pppppppuVar11[3];
      pppppuVar13 = (undefined8 *****)&PTR_PTR_1134051b0;
      if (pppppppuVar11[5][5] != (undefined8 *****)0x0) {
        pppppuVar13 = pppppppuVar11[5][5];
      }
      FUN_109a1a810(ppppppuVar10,pppppppuVar11[4],pppppuVar13);
      (**(code **)(lVar17 + 0x10))(&uStack_190,(ulong)puStack_1e0 & 0xfffffffffffffffc);
      func_0x000109d2e134(&ppppuStack_2b8,&uStack_190);
      func_0x000109d2beec(&ppppppuStack_180,&ppppuStack_2b8,(uint)ppppppuVar10 & 0xff,lVar17 + 0x50,
                          0,lVar17);
      func_0x000109d23f70(&lStack_2c8,&ppppppuStack_180);
      if (lStack_2c8 == 0) {
        func_0x000105688514(&UNK_10f5945e8);
      }
      else {
        func_0x000109d1a244(lStack_2c8 + 0x10);
        lVar14 = lStack_2c8;
        if (lStack_2c8 == 0) {
          func_0x000105688514(&UNK_10f5945e8);
        }
        else {
          FUN_1092af8bc(lStack_2c8 + 0x10);
          lVar17 = *(long *)(*(long *)(lVar14 + 0x10) + 0x98);
          lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + 0xa0);
          if (lVar14 != 0) {
            plVar1 = (long *)(lVar14 + 8);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = *plVar1 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          lStack_2d8 = lVar17;
          lStack_2d0 = lVar14;
          if (lVar17 != 0) {
            ppppuStack_1b0 = (undefined8 *****)0x0;
            ppppuStack_1a8 = (undefined8 *****)0x0;
            lStack_1a0 = 0;
            func_0x000107c31930(&ppppuStack_1b0,(lStack_268 - lStack_270 >> 3) * 0x2e8ba2e8ba2e8ba3)
            ;
            for (; lStack_270 != lStack_268; lStack_270 = lStack_270 + 0x58) {
              func_0x000107c2ac70(&ppppuStack_1b0,lStack_270);
            }
            ppppppuStack_1d0 = (undefined8 ******)0x0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            func_0x000107c31930(&ppppppuStack_1d0,
                                (lStack_250 - lStack_258 >> 3) * 0x2e8ba2e8ba2e8ba3);
            for (; lStack_300 = lStack_1a0, lStack_258 != lStack_250; lStack_258 = lStack_258 + 0x58
                ) {
              func_0x000107c2ac70(&ppppppuStack_1d0,lStack_258);
            }
            ppppuStack_308 = ppppuStack_1a8;
            ppppuStack_310 = ppppuStack_1b0;
            ppppuStack_1b0 = (undefined8 *****)0x0;
            ppppuStack_1a8 = (undefined8 ****)0x0;
            lStack_1a0 = 0;
            lStack_2f0 = uStack_1c8;
            pppppuStack_2f8 = ppppppuStack_1d0;
            lStack_2e8 = uStack_1c0;
            ppppppuStack_1d0 = (undefined8 ******)0x0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            ppppppuStack_198 = &ppppppuStack_1d0;
            lStack_320 = lVar17;
            plStack_318 = (long *)lVar14;
            func_0x000104c607c8(&ppppppuStack_198);
            ppppppuStack_1d0 = (undefined8 ******)&ppppuStack_1b0;
            func_0x000104c607c8(&ppppppuStack_1d0);
            if (lStack_2c8 != 0) {
              piVar2 = (int *)(lStack_2c8 + 0x18);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar7) {
                  *piVar2 = *piVar2 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if (plStack_2c0 != (long *)0x0) {
              plVar1 = plStack_2c0 + 1;
              do {
                lVar14 = *plVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar14 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c0);
              }
            }
            if (plStack_90 != (long *)0x0) {
              plVar1 = plStack_90 + 1;
              do {
                lVar14 = *plVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar14 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plStack_90 + 0x10))(plStack_90);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
              }
            }
            (*(code *)*apuStack_d0[0])(apuStack_d0);
            (*(code *)*apuStack_110[0])(apuStack_110);
            if (plStack_128 != (long *)0x0) {
              plVar1 = plStack_128 + 1;
              do {
                lVar14 = *plVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar14 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plStack_128 + 0x10))(plStack_128);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
              }
            }
            (*(code *)*puStack_168)(&puStack_168);
            pppuVar8 = pppuStack_178;
            if ((undefined8 ****)pppuStack_178 != (undefined8 ****)0x0) {
              ppppuVar3 = (undefined8 ****)(pppuStack_178 + 1);
              do {
                pppuVar15 = *ppppuVar3;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(ppppuVar3,0x10);
                if (bVar7) {
                  *ppppuVar3 = (undefined8 ***)((long)pppuVar15 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (pppuVar15 == (undefined8 ***)0x0) {
                (*(code *)(*pppuStack_178)[2])(pppuStack_178);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar8);
              }
            }
            func_0x000109a1ab0c(&ppppuStack_2b8);
            if (plStack_188 != (long *)0x0) {
              plVar1 = plStack_188 + 1;
              do {
                lVar14 = *plVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar14 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plStack_188 + 0x10))(plStack_188);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
              }
            }
            func_0x000109a1bb00(&ppppuStack_1f0);
            lStack_358 = lStack_2e8;
            lStack_360 = lStack_2f0;
            pppppuStack_368 = pppppuStack_2f8;
            lStack_370 = lStack_300;
            ppppuVar3 = ppppuStack_308;
            ppppuStack_380 = ppppuStack_310;
            ppppppuStack_388 = (undefined8 ******)plStack_318;
            lStack_390 = lStack_320;
            lStack_320 = 0;
            plStack_318 = (long *)0x0;
            ppppuStack_308 = (undefined8 ****)0x0;
            lStack_300 = 0;
            ppppuStack_310 = (undefined8 *****)0x0;
            pppppuStack_2f8 = (undefined8 *****)0x0;
            lStack_2f0 = 0;
            lStack_2e8 = 0;
            lStack_2c8 = 0;
            plStack_2c0 = (long *)0x0;
            ppppuStack_1b0 = (undefined8 *****)0x0;
            ppppuStack_1a8 = (undefined8 ****)0x0;
            lStack_1a0 = 0;
            ppppppuStack_1d0 = (undefined8 ******)0x0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            plStack_188 = (long *)0x0;
            uStack_190 = 0;
            uStack_2b0 = 0;
            lStack_2a8 = 0;
            ppppuStack_2b8 = (undefined8 *****)0x0;
            ppppuStack_1f0 = (undefined8 *****)0x0;
            uStack_1e8 = 0;
            puStack_1e0 = (undefined *)0x0;
            uStack_348 = 0;
            uStack_350 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_330 = 0x3f800000;
            ppppuStack_378 = ppppuVar3;
            for (pppppuVar13 = (undefined8 *****)ppppuStack_380;
                pppppuVar13 != (undefined8 *****)ppppuVar3; pppppuVar13 = pppppuVar13 + 3) {
              uStack_148 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              ppppppuStack_180 = (undefined8 ******)&PTR_DAT_1108a5c28;
              pppuStack_178 = (undefined8 ****)0x0;
              pppuStack_170 = (undefined8 ****)0x0;
              puStack_168 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
              uStack_160 = 0;
              uStack_158 = 0;
              uStack_150 = 0;
              FUN_10955c3e0(&uStack_350,pppppuVar13,pppppuVar13,&ppppppuStack_180);
              func_0x000105675c90(&ppppppuStack_180);
            }
            ppppppuStack_180 = (undefined8 ******)&ppppuStack_1f0;
            func_0x000104c607c8(&ppppppuStack_180);
            ppppppuStack_180 = (undefined8 ******)&ppppuStack_2b8;
            func_0x000104c607c8(&ppppppuStack_180);
            ppppppuStack_180 = &ppppppuStack_1d0;
            func_0x000104c607c8(&ppppppuStack_180);
            ppppppuStack_180 = (undefined8 ******)&ppppuStack_1b0;
            func_0x000104c607c8(&ppppppuStack_180);
            ppppppuStack_180 = &pppppuStack_2f8;
            func_0x000104c607c8(&ppppppuStack_180);
            ppppppuStack_180 = (undefined8 ******)&ppppuStack_310;
            func_0x000104c607c8(&ppppppuStack_180);
            plVar1 = plStack_318;
            ppppppuVar10 = ppppppuStack_398;
            if (plStack_318 != (long *)0x0) {
              plVar4 = plStack_318 + 1;
              do {
                lVar14 = *plVar4;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar7) {
                  *plVar4 = lVar14 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar14 == 0) {
                (**(code **)(*plStack_318 + 0x10))(plStack_318);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
              }
            }
            param_1[1] = (long)ppppppuStack_388;
            *param_1 = lStack_390;
            lStack_390 = 0;
            ppppppuStack_388 = (undefined8 *******)0x0;
            param_1[3] = (long)ppppuStack_378;
            param_1[2] = (long)ppppuStack_380;
            param_1[4] = lStack_370;
            ppppuStack_380 = (undefined8 *****)0x0;
            ppppuStack_378 = (undefined8 ****)0x0;
            lStack_370 = 0;
            param_1[6] = lStack_360;
            param_1[5] = (long)pppppuStack_368;
            param_1[7] = lStack_358;
            pppppuStack_368 = (undefined8 *****)0x0;
            lStack_360 = 0;
            lStack_358 = 0;
            FUN_109519ddc(param_1 + 8,&uStack_350);
            *(undefined1 *)(param_1 + 0xd) = 1;
            func_0x000109379fe8(&uStack_350);
            ppppppuStack_180 = &pppppuStack_368;
            func_0x000104c607c8(&ppppppuStack_180);
            pppppppuVar11 = &ppppppuStack_180;
            ppppppuStack_180 = (undefined8 ******)&ppppuStack_380;
            func_0x000104c607c8();
            pppppppuVar12 = (undefined8 *******)ppppppuStack_388;
            if ((undefined8 *******)ppppppuStack_388 != (undefined8 *******)0x0) {
              pppppppuVar5 = (undefined8 *******)(ppppppuStack_388 + 1);
              do {
                ppppppuVar16 = *pppppppuVar5;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar5,0x10);
                if (bVar7) {
                  *pppppppuVar5 = (undefined8 ******)((long)ppppppuVar16 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (ppppppuVar16 == (undefined8 ******)0x0) {
                (*(code *)(*ppppppuStack_388)[2])(ppppppuStack_388);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppppppuVar11 = pppppppuVar12;
              }
            }
            if ((undefined8 *******)ppppppuVar10 != (undefined8 *******)0x0) {
              pppppppuVar11 = (undefined8 *******)ppppppuVar10;
              __ZdlPv();
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
              ___stack_chk_fail();
              if ((long)pppuStack_170 < 0) {
                __ZdlPv(ppppppuStack_180);
              }
              if (uStack_1c0 < 0) {
                __ZdlPv(ppppppuStack_1d0);
              }
              if (lStack_2a8 < 0) {
                __ZdlPv(ppppuStack_2b8);
              }
              if ((long)puStack_1e0 < 0) {
                __ZdlPv(ppppuStack_1f0);
              }
              if (lStack_1a0 < 0) {
                __ZdlPv(ppppuStack_1b0);
              }
              if ((undefined8 *******)ppppppuStack_398 != (undefined8 *******)0x0) {
                __ZdlPv(ppppppuStack_398);
              }
              pppppppuVar12 = pppppppuVar11;
              __Unwind_Resume();
              ppppppuStack_3b8 = ppppppuVar10;
              pcStack_3a8 = FUN_109a1a7c4;
              ppppppuStack_3c8 = pppppppuVar12 + 5;
              ppppppuStack_3c0 = pppppppuVar11;
              puStack_3b0 = &stack0xfffffffffffffff0;
              func_0x000104c607c8(&ppppppuStack_3c8);
              ppppppuStack_3c8 = pppppppuVar12 + 2;
              func_0x000104c607c8(&ppppppuStack_3c8);
              FUN_109a19d1c(pppppppuVar12);
              return;
            }
            return;
          }
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&ppppppuStack_1d0,&UNK_10f594584,(ulong)puStack_1e0 & 0xfffffffffffffffc);
          FUN_109259240(&ppppuStack_1b0,&ppppppuStack_1d0,&DAT_10f638984);
          func_0x000105687ee0(&ppppuStack_1b0);
        }
      }
    }
  }
  else {
    __ZNSt3__19to_stringEm(&ppppuStack_1b0,2);
    FUN_10928a5e0(&ppppuStack_1f0,&UNK_10f5944c8,&ppppuStack_1b0);
    FUN_109259240(&ppppuStack_2b8,&ppppuStack_1f0,&UNK_10f594533);
    __ZNSt3__19to_stringEm
              (&ppppppuStack_1d0,(lVar14 - (long)pppppppuVar11 >> 3) * -0x5555555555555555);
    if (-1 < (char)uStack_1c0._7_1_) {
      uStack_1c8 = (ulong)uStack_1c0._7_1_;
      ppppppuStack_1d0 = &ppppppuStack_1d0;
    }
    pppppuVar13 = &ppppuStack_2b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar13,ppppppuStack_1d0,uStack_1c8);
    pppuStack_178 = pppppuVar13[1];
    ppppppuStack_180 = (undefined8 ******)*pppppuVar13;
    pppuStack_170 = pppppuVar13[2];
    pppppuVar13[1] = (undefined8 ****)0x0;
    pppppuVar13[2] = (undefined8 ****)0x0;
    *pppppuVar13 = (undefined8 ****)0x0;
    func_0x000105687ee0(&ppppppuStack_180);
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109a1a560);
  (*pcVar9)();
}



/* Entry: 109a1a7c4; end: 109a1a80f;  */

void FUN_109a1a7c4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x28;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  FUN_109a19d1c(param_1);
  return;
}



/* Entry: 109a1a810; end: 109a1a9a3;  */

ulong FUN_109a1a810(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  ppuStack_48 = &PTR_DAT_110d9b550;
  uVar3 = param_3 + 0x28;
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x00010bcec338(uVar3,&ppuStack_48);
  if ((uVar3 & 1) == 0) {
    FUN_1098998d4(auStack_a8,&uStack_30);
    FUN_10928a5e0(auStack_90,&UNK_10f5945cf,auStack_a8);
    FUN_109259240(auStack_78,auStack_90,&UNK_10f5945db);
    func_0x00010b4d1294(&puStack_c0,&ppuStack_48);
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      puStack_c0 = (undefined1 *)&puStack_c0;
    }
    puVar2 = auStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar2,puStack_c0,uStack_b8);
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    uStack_50 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    func_0x000105687ee0(&uStack_60);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109a1a904);
    (*pcVar1)();
  }
  uVar3 = uStack_38 & 0xffffffff;
  if ((uStack_40 & 1) != 0) {
    func_0x00010bd2b234(&uStack_40);
  }
  return uVar3;
}



/* Entry: 109a1a9a4; end: 109a1aba7;  */

long FUN_109a1a9a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x000109a1aa5c(param_1 + 0xe8);
  (*(code *)**(undefined8 **)(param_1 + 0xb0))();
  (*(code *)**(undefined8 **)(param_1 + 0x70))();
  func_0x000109a1921c(param_1 + 0x50);
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 109a1aba8; end: 109a1ac17;  */

void FUN_109a1aba8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x50;
        FUN_109a1ac18(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109a1ac18; end: 109a1ad17;  */

void FUN_109a1ac18(long param_1)

{
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 109a1ad18; end: 109a1ad2f;  */

void FUN_109a1ad18(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 109a1ad30; end: 109a1b44f;  */

void FUN_109a1ad30(long *param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined ***pppuStack_140;
  int iStack_110;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 ****ppppuStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 *apuStack_98 [3];
  undefined1 auStack_80 [32];
  
  lVar7 = *param_1;
  puVar14 = (undefined8 *)param_1[1];
  lVar13 = lVar7 + -1;
  ppuStack_188 = (undefined **)0x0;
  ppuStack_180 = (undefined **)0x0;
  ppuStack_190 = (undefined **)0x0;
  FUN_109a19450(&ppuStack_190,lVar13);
  if (lVar13 != 0) {
    lVar16 = 0;
    do {
      lVar8 = param_1[lVar16 + 2];
      ppuStack_100 = &PTR_DAT_1108a5c28;
      ppuStack_e8 = *(undefined ***)(lVar8 + 0x18);
      ppuStack_f0 = *(undefined ***)(lVar8 + 0x10);
      ppuStack_f8 = *(undefined ***)(lVar8 + 8);
      uStack_d8 = *(undefined8 *)(lVar8 + 0x28);
      pppuStack_e0 = *(undefined ****)(lVar8 + 0x20);
      if (*(long *)(lVar8 + 0x28) != 0) {
        plVar12 = (long *)(*(long *)(lVar8 + 0x28) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_109407928(auStack_d0,lVar8 + 0x30);
      pppuVar6 = &ppuStack_100;
      FUN_109a19c1c(&ppuStack_160);
      iStack_110 = 0;
      func_0x000105675c90(&ppuStack_100);
      ppuVar10 = ppuStack_188;
      if (ppuStack_188 < ppuStack_180) {
        FUN_109a1b450(ppuStack_188,&ppuStack_160);
        ppuVar10 = ppuVar10 + 0xb;
      }
      else {
        lVar8 = (long)ppuStack_188 - (long)ppuStack_190;
        ppuVar10 = (undefined **)((lVar8 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1);
        if ((undefined **)0x2e8ba2e8ba2e8ba < ppuVar10) {
          FUN_109a19950();
          goto LAB_109a1b2d0;
        }
        lVar15 = (long)ppuStack_180 - (long)ppuStack_190 >> 3;
        ppuVar11 = (undefined **)(lVar15 * 0x5d1745d1745d1746);
        if (ppuVar11 < ppuVar10 || (long)ppuVar11 - (long)ppuVar10 == 0) {
          ppuVar11 = ppuVar10;
        }
        if (0x1745d1745d1745c < (ulong)(lVar15 * 0x2e8ba2e8ba2e8ba3)) {
          ppuVar11 = (undefined **)0x2e8ba2e8ba2e8ba;
        }
        pppuStack_e0 = &ppuStack_190;
        if (ppuVar11 == (undefined **)0x0) {
          ppuVar11 = (undefined **)0x0;
          pppuVar6 = (undefined ***)0x0;
        }
        else {
          FUN_109a19964();
        }
        lVar8 = (long)ppuVar11 + lVar8;
        ppuStack_100 = ppuVar11;
        ppuStack_f8 = (undefined **)lVar8;
        ppuStack_f0 = (undefined **)lVar8;
        ppuStack_e8 = ppuVar11 + (long)pppuVar6 * 0xb;
        FUN_109a1b450(lVar8,&ppuStack_160);
        ppuVar10 = (undefined **)(lVar8 + 0x58);
        ppuVar1 = (undefined **)((long)ppuStack_190 + (lVar8 - (long)ppuStack_188));
        ppuStack_f0 = ppuVar10;
        FUN_109a199ac(&ppuStack_190,ppuStack_190,ppuStack_188,ppuVar1);
        ppuStack_f0 = ppuStack_190;
        ppuStack_e8 = ppuStack_180;
        ppuStack_100 = ppuStack_190;
        ppuStack_f8 = ppuStack_190;
        ppuStack_190 = ppuVar1;
        ppuStack_188 = ppuVar10;
        ppuStack_180 = ppuVar11 + (long)pppuVar6 * 0xb;
        func_0x000109a19bac(&ppuStack_100);
      }
      ppuStack_188 = ppuVar10;
      if (iStack_110 != -1) {
        func_0x000105675c90(&ppuStack_160);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar13);
  }
  lVar13 = puVar14[2];
  if (((long)ppuStack_188 - (long)ppuStack_190 >> 3) * 0x2e8ba2e8ba2e8ba3 +
      (puVar14[3] - lVar13 >> 3) * 0x5555555555555555 != 0) {
    __ZNSt3__19to_stringEm(apuStack_98);
    FUN_10928a5e0(auStack_80,&UNK_10f5944c8,apuStack_98);
    FUN_109259240(&ppuStack_100,auStack_80,&UNK_10f5944e7);
    __ZNSt3__19to_stringEm
              (&ppppuStack_b0,((long)ppuStack_188 - (long)ppuStack_190 >> 3) * 0x2e8ba2e8ba2e8ba3);
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppppuStack_b0 = &ppppuStack_b0;
    }
    pppuVar6 = &ppuStack_100;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar6,ppppuStack_b0,uStack_a8);
    ppuStack_158 = pppuVar6[1];
    ppuStack_160 = *pppuVar6;
    ppuStack_150 = pppuVar6[2];
    pppuVar6[1] = (undefined **)0x0;
    pppuVar6[2] = (undefined **)0x0;
    *pppuVar6 = (undefined **)0x0;
    func_0x000105687ee0(&ppuStack_160);
LAB_109a1b2d0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109a1b2d4);
    (*pcVar4)();
  }
  if (puVar14[3] != lVar13) {
    lVar8 = 0;
    lVar16 = 0;
    uVar17 = 0;
    do {
      ppuVar10 = ppuStack_190;
      if (*(int *)((long)ppuStack_190 + lVar8 + 0x50) != 0) {
        FUN_1092612e0();
        goto LAB_109a1b2d0;
      }
      ppuStack_160 = (undefined **)(lVar13 + lVar16);
      puVar5 = puVar14 + 8;
      FUN_10937a098(puVar5,ppuStack_160,&UNK_10dd5b8f9,&ppuStack_160,&ppuStack_100);
      uVar19 = *(undefined8 *)((long)ppuVar10 + lVar8 + 0x10);
      uVar18 = *(undefined8 *)((long)ppuVar10 + lVar8 + 8);
      puVar5[8] = *(undefined8 *)((long)ppuVar10 + lVar8 + 0x18);
      puVar5[7] = uVar19;
      puVar5[6] = uVar18;
      func_0x0001093783c0(puVar5 + 9,(long)ppuVar10 + lVar8 + 0x20);
      func_0x00010937843c(puVar5 + 0xb,(long)ppuVar10 + lVar8 + 0x30);
      uVar17 = uVar17 + 1;
      lVar13 = puVar14[2];
      lVar16 = lVar16 + 0x18;
      lVar8 = lVar8 + 0x58;
    } while (uVar17 < (ulong)((puVar14[3] - lVar13 >> 3) * -0x5555555555555555));
  }
  apuStack_98[0] = puVar14;
  func_0x000109d22eac(&ppuStack_100,*puVar14,puVar14 + 8);
  ppuStack_178 = (undefined **)0x0;
  ppuStack_170 = (undefined **)0x0;
  ppuStack_168 = (undefined **)0x0;
  FUN_109a19450(&ppuStack_178,((long)(puVar14[6] - puVar14[5]) >> 3) * -0x5555555555555555);
  lVar13 = puVar14[5];
  lVar16 = puVar14[6];
  if (lVar13 != lVar16) {
    do {
      pppuVar6 = &ppuStack_100;
      lVar8 = lVar13;
      FUN_10938e710();
      ppuVar10 = ppuStack_170;
      if (pppuVar6 == (undefined ***)0x0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_80,&UNK_10f5944f5,lVar13);
        FUN_109259240(&ppuStack_160,auStack_80,&DAT_10f638984);
        func_0x000105687ee0(&ppuStack_160);
        goto LAB_109a1b2d0;
      }
      if (ppuStack_170 < ppuStack_168) {
        FUN_109a19c1c(ppuStack_170,pppuVar6 + 5);
        *(undefined4 *)(ppuVar10 + 10) = 0;
        ppuVar10 = ppuVar10 + 0xb;
      }
      else {
        lVar15 = (long)ppuStack_170 - (long)ppuStack_178;
        ppuVar10 = (undefined **)((lVar15 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1);
        if ((undefined **)0x2e8ba2e8ba2e8ba < ppuVar10) {
          FUN_109a19950();
          goto LAB_109a1b2d0;
        }
        lVar9 = (long)ppuStack_168 - (long)ppuStack_178 >> 3;
        ppuVar11 = (undefined **)(lVar9 * 0x5d1745d1745d1746);
        if (ppuVar11 < ppuVar10 || (long)ppuVar11 - (long)ppuVar10 == 0) {
          ppuVar11 = ppuVar10;
        }
        if (0x1745d1745d1745c < (ulong)(lVar9 * 0x2e8ba2e8ba2e8ba3)) {
          ppuVar11 = (undefined **)0x2e8ba2e8ba2e8ba;
        }
        pppuStack_140 = &ppuStack_178;
        if (ppuVar11 == (undefined **)0x0) {
          ppuVar11 = (undefined **)0x0;
          lVar8 = 0;
        }
        else {
          FUN_109a19964();
        }
        lVar15 = (long)ppuVar11 + lVar15;
        ppuStack_160 = ppuVar11;
        ppuStack_158 = (undefined **)lVar15;
        ppuStack_150 = (undefined **)lVar15;
        ppuStack_148 = ppuVar11 + lVar8 * 0xb;
        FUN_109a19c1c(lVar15,pppuVar6 + 5);
        *(undefined4 *)(lVar15 + 0x50) = 0;
        ppuVar10 = (undefined **)(lVar15 + 0x58);
        ppuVar1 = (undefined **)((long)ppuStack_178 + (lVar15 - (long)ppuStack_170));
        ppuStack_150 = ppuVar10;
        FUN_109a199ac(&ppuStack_178,ppuStack_178,ppuStack_170,ppuVar1);
        ppuStack_160 = ppuStack_178;
        ppuStack_150 = ppuStack_178;
        ppuStack_148 = ppuStack_168;
        ppuStack_158 = ppuStack_178;
        ppuStack_178 = ppuVar1;
        ppuStack_170 = ppuVar10;
        ppuStack_168 = ppuVar11 + lVar8 * 0xb;
        func_0x000109a19bac(&ppuStack_160);
      }
      lVar13 = lVar13 + 0x18;
      ppuStack_170 = ppuVar10;
    } while (lVar13 != lVar16);
  }
  func_0x000109379fe8(&ppuStack_100);
  FUN_109a19538(apuStack_98);
  FUN_109a19ca0(&ppuStack_190);
  if (ppuStack_170 != ppuStack_178) {
    lVar13 = 0;
    uVar17 = 0;
    plVar12 = param_1 + 1 + lVar7;
    do {
      plVar12 = plVar12 + 1;
      FUN_109a1b4bc((long)ppuStack_178 + lVar13,plVar12);
      uVar17 = uVar17 + 1;
      lVar13 = lVar13 + 0x58;
    } while (uVar17 < (ulong)(((long)ppuStack_170 - (long)ppuStack_178 >> 3) * 0x2e8ba2e8ba2e8ba3));
  }
  FUN_109a19ca0(&ppuStack_178);
  return;
}



/* Entry: 109a1b450; end: 109a1b4bb;  */

undefined1 * FUN_109a1b450(undefined1 *param_1,long param_2)

{
  int iVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 != -1) {
    FUN_109a19c1c(param_1);
    *(int *)(param_1 + 0x50) = iVar1;
  }
  return param_1;
}



/* Entry: 109a1b4bc; end: 109a1b4fb;  */

void FUN_109a1b4bc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_98 [80];
  int iStack_48;
  
  if (*(int *)(param_1 + 10) == 0) {
    lVar1 = *param_2;
    FUN_1099ae038(lVar1,param_1);
    *(undefined1 *)(lVar1 + 0x50) = 1;
    return;
  }
  FUN_1092612e0();
  FUN_109a19a7c(auStack_98,*param_1);
  FUN_109a1b4bc(auStack_98,param_1 + 1);
  if (iStack_48 != -1) {
    func_0x000105675c90(auStack_98);
  }
  return;
}



/* Entry: 109a1b4fc; end: 109a1b56b;  */

void FUN_109a1b4fc(undefined8 *param_1)

{
  undefined1 auStack_78 [80];
  int iStack_28;
  
  FUN_109a19a7c(auStack_78,*param_1);
  FUN_109a1b4bc(auStack_78,param_1 + 1);
  if (iStack_28 != -1) {
    func_0x000105675c90(auStack_78);
  }
  return;
}



/* Entry: 109a1b56c; end: 109a1b7bf;  */

undefined1  [16]
FUN_109a1b56c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_109a1b774;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_109a1b7c0(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_109a1b8ac(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_109a1b774:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 109a1b7c0; end: 109a1b89b;  */

void FUN_109a1b7c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[6] = FUN_109a1b89c;
  puVar1[7] = &PTR_FUN_110ae9180;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109a1b89c; end: 109a1b8ab;  */

/* WARNING: Removing unreachable block (ram,0x000109a1bae8) */

void FUN_109a1b89c(undefined8 param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000105277f8c();
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_3[1];
  if (param_2 <= uVar9) {
    if (param_2 < uVar9) {
      uVar4 = (ulong)((float)(ulong)param_3[3] / *(float *)(param_3 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar9) goto LAB_109a1b8f4;
    }
    return;
  }
LAB_109a1b8f4:
  if (param_2 == 0) {
    lVar2 = *param_3;
    *param_3 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_3[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if (((ulong)param_3 & 1) != 0) {
        (*(code *)**(undefined8 **)(param_2 + 0x38))((undefined8 *)(param_2 + 0x38));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_3;
    *param_3 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar9 = 0;
    param_3[1] = param_2;
    do {
      *(undefined8 *)(*param_3 + uVar9 * 8) = 0;
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
    plVar5 = (long *)param_3[2];
    if (plVar5 != (long *)0x0) {
      uVar9 = plVar5[1];
      uVar4 = param_2 - 1;
      if ((param_2 & uVar4) == 0) {
        uVar9 = uVar9 & uVar4;
      }
      else if (param_2 <= uVar9) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar9 / param_2;
        }
        uVar9 = uVar9 - uVar8 * param_2;
      }
      *(long **)(*param_3 + uVar9 * 8) = param_3 + 2;
      plVar6 = (long *)*plVar5;
      while (plVar6 != (long *)0x0) {
        uVar8 = plVar6[1];
        if ((param_2 & uVar4) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        plVar7 = plVar6;
        if (uVar8 != uVar9) {
          lVar2 = *param_3;
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar5;
            uVar9 = uVar8;
          }
          else {
            *plVar5 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
            plVar7 = plVar5;
          }
        }
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
  }
  return;
}



/* Entry: 109a1b8ac; end: 109a1b97b;  */

/* WARNING: Removing unreachable block (ram,0x000109a1bae8) */

void FUN_109a1b8ac(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar9 = param_1[1];
  if (param_2 <= uVar9) {
    if (param_2 < uVar9) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar9) goto LAB_109a1b8f4;
    }
    return;
  }
LAB_109a1b8f4:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if (((ulong)param_1 & 1) != 0) {
        (*(code *)**(undefined8 **)(param_2 + 0x38))((undefined8 *)(param_2 + 0x38));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar9 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar9 = plVar5[1];
      uVar4 = param_2 - 1;
      if ((param_2 & uVar4) == 0) {
        uVar9 = uVar9 & uVar4;
      }
      else if (param_2 <= uVar9) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar9 / param_2;
        }
        uVar9 = uVar9 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar5;
      while (plVar6 != (long *)0x0) {
        uVar8 = plVar6[1];
        if ((param_2 & uVar4) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        plVar7 = plVar6;
        if (uVar8 != uVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar5;
            uVar9 = uVar8;
          }
          else {
            *plVar5 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar6;
            plVar7 = plVar5;
          }
        }
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
  }
  return;
}



/* Entry: 109a1b97c; end: 109a1bb33;  */

/* WARNING: Removing unreachable block (ram,0x000109a1bae8) */

void FUN_109a1b97c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      if (((ulong)param_1 & 1) != 0) {
        (*(code *)**(undefined8 **)(param_2 + 0x38))((undefined8 *)(param_2 + 0x38));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = plVar6[1];
      uVar5 = param_2 - 1;
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar9 = 0;
        if (param_2 != 0) {
          uVar9 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar9 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar6;
      while (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar9 = uVar9 & uVar5;
        }
        else if (param_2 <= uVar9) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar1 * param_2;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar4) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar9 * 8) == 0) {
            *(long **)(lVar2 + uVar9 * 8) = plVar6;
            uVar4 = uVar9;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
            **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar6;
          }
        }
        plVar6 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
  }
  return;
}



/* Entry: 109a1bb34; end: 109a1bb37;  */

long FUN_109a1bb34(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109a1bb38; end: 109a1bb4b;  */

void FUN_109a1bb38(void)

{
  func_0x000109a1bb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a1bb4c; end: 109a1bb97;  */

undefined ** FUN_109a1bb4c(void)

{
  return &PTR_DAT_110b20df0;
}



/* Entry: 109a1bb98; end: 109a1bd07;  */

long * FUN_109a1bb98(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lStack_48;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_109a1bc0c;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109a1bc0c;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f5945fc);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109a1bc0c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lStack_48 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_48 = uVar5 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      lVar4 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar4 < (int)uVar7) {
        do {
          iVar10 = (int)lVar4;
          _memcpy(param_2,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar6 = (long *)*param_3;
          plVar2 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar6));
            plVar6 = (long *)*param_3;
            param_2 = plVar2;
          } while (plVar6 <= plVar2);
          lVar4 = (long)plVar6 + (0x10 - (long)param_2);
        } while ((int)lVar4 < (int)uVar7);
      }
      _memcpy(param_2,lStack_48,(long)(int)uVar7);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lStack_48,uVar9 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 109a1bd08; end: 109a1bd7f;  */

long FUN_109a1bd08(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 109a1bd80; end: 109a1bdf3;  */

void FUN_109a1bd80(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1bdf4; end: 109a1bdfb;  */

void FUN_109a1bdf4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110b20db0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 109a1bdfc; end: 109a1be4f;  */

void FUN_109a1bdfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110b20db0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 109a1be50; end: 109a1bef7;  */

undefined8 * FUN_109a1be50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b20e58;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (*(int *)(param_3 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 2,param_3 + 0x10);
  }
  puVar2 = (ulong *)(param_3 + 0x28);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[5] = puVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 109a1bef8; end: 109a1bf33;  */

long FUN_109a1bef8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  FUN_109a1c304(param_1 + 0x10);
  return param_1;
}



/* Entry: 109a1bf34; end: 109a1bf37;  */

long FUN_109a1bf34(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  FUN_109a1c304(param_1 + 0x10);
  return param_1;
}



/* Entry: 109a1bf38; end: 109a1bf4b;  */

void FUN_109a1bf38(void)

{
  FUN_109a1bef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a1bf4c; end: 109a1bf57;  */

undefined ** FUN_109a1bf4c(void)

{
  return &PTR_DAT_110b20e98;
}



/* Entry: 109a1bf58; end: 109a1bfcf;  */

void FUN_109a1bf58(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if ((*(ulong *)(param_1 + 0x28) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 109a1bfd0; end: 109a1c26f;  */

long * FUN_109a1bfd0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_109a1c040;
    puVar2 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_109a1c040;
  }
  func_0x000107c303d4(puVar2,lVar5,1,&UNK_10f594626);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,1,puVar9,param_2);
  param_2 = plVar3;
LAB_109a1c040:
  iVar12 = *(int *)(param_1 + 0x18);
  if (iVar12 != 0) {
    iVar11 = 0;
    plVar3 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar11 * 8 + 7);
      }
      param_2 = (long *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),plVar3,param_3);
      iVar11 = iVar11 + 1;
      plVar3 = param_2;
    } while (iVar12 != iVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar5 = *(long *)(uVar6 + 8);
      uVar10 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar5 = uVar6 + 8;
    }
    uVar8 = (uint)uVar10;
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      lVar13 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar13 < (int)uVar8) {
        do {
          iVar12 = (int)lVar13;
          _memcpy(param_2,lVar5,(long)iVar12);
          uVar8 = (int)uVar10 - iVar12;
          uVar10 = (ulong)uVar8;
          lVar5 = lVar5 + iVar12;
          plVar7 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar12);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar4 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar4 + (long)((int)plVar3 - (int)plVar7));
            plVar7 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar7 <= plVar3);
          lVar13 = (long)plVar7 + (0x10 - (long)param_2);
        } while ((int)lVar13 < (int)uVar8);
      }
      _memcpy(param_2,lVar5,(long)(int)uVar8);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar5,uVar10 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 109a1c270; end: 109a1c273;  */

void FUN_109a1c270(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1c274; end: 109a1c2fb;  */

void FUN_109a1c274(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1c2fc; end: 109a1c303;  */

void FUN_109a1c2fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110b20e58;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 109a1c304; end: 109a1c337;  */

long * FUN_109a1c304(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109a1c338; end: 109a1c3e7;  */

void FUN_109a1c338(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110b20e58;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 109a1c3e8; end: 109a1c407;  */

undefined ** FUN_109a1c3e8(void)

{
  return &PTR_DAT_110b21080;
}



/* Entry: 109a1c408; end: 109a1c5b7;  */

byte * FUN_109a1c408(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar3) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(param_2,lVar2,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar9;
          pbVar4 = (byte *)*param_3;
          pbVar8 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar4 <= pbVar8);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar2,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar2,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}



/* Entry: 109a1c5b8; end: 109a1c62b;  */

long FUN_109a1c5b8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 109a1c62c; end: 109a1c667;  */

long FUN_109a1c62c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109a1cb94();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a1c668; end: 109a1c66b;  */

long FUN_109a1c668(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109a1cb94();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a1c66c; end: 109a1c67f;  */

void FUN_109a1c66c(void)

{
  FUN_109a1c62c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a1c680; end: 109a1c68b;  */

undefined ** FUN_109a1c680(void)

{
  return &PTR_DAT_110b210c0;
}



/* Entry: 109a1c68c; end: 109a1c70b;  */

void FUN_109a1c68c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109a1c6d4(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109a1c70c; end: 109a1c857;  */

long * FUN_109a1c70c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109a1c858; end: 109a1c8cb;  */

void FUN_109a1c858(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_109a1cda0();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 109a1c8cc; end: 109a1c8cf;  */

void FUN_109a1c8cc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_109a1d864(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109a1c968(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1c8d0; end: 109a1c967;  */

void FUN_109a1c8d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_109a1d864(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109a1c968(*(long *)(param_1 + 0x18));
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1c968; end: 109a1cae3;  */

/* WARNING: Possible PIC construction at 0x000109a1ca10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109a1ca14) */

void FUN_109a1c968(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  ulong *unaff_x19;
  ulong *puVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar8 = (ulong *)(param_1 + 8);
  uVar9 = *puVar8;
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  iVar4 = *(int *)(param_2 + 0x1c);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        FUN_109a1cae4(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar4;
    }
    if (iVar4 == 100) {
      if (iVar5 != 100) {
        *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
      }
      puVar3 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x1c) != 100) {
        puVar3 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x10,puVar3,uVar9);
    }
    else if (iVar4 == 2) {
      if (iVar5 == 2) {
        ppuVar2 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 2) {
          ppuVar2 = &PTR_PTR_1132e8730;
        }
        FUN_109a1c8d0(*(undefined8 *)(param_1 + 0x10),ppuVar2);
      }
      else {
        FUN_109a1d9d4(uVar9,*(undefined8 *)(param_2 + 0x10));
LAB_109a1ca98:
        *(ulong *)(param_1 + 0x10) = uVar9;
      }
    }
    else if (iVar4 == 1) {
      if (iVar5 != 1) {
        FUN_109a1d934(uVar9,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109a1ca98;
      }
      lVar7 = *(long *)(param_1 + 0x10);
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar2 = &PTR_PTR_1132e8718;
      }
      if (*(int *)(ppuVar2 + 2) != 0) {
        *(int *)(lVar7 + 0x10) = *(int *)(ppuVar2 + 2);
      }
      if (((ulong)ppuVar2[1] & 1) != 0) {
        unaff_x30 = 0x109a1ca14;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar6 = (ulong *)(lVar7 + 8);
        unaff_x19 = puVar8;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar6 = puVar8;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar6 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109a1cae4; end: 109a1cbcf;  */

void FUN_109a1cae4(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 100) {
    func_0x000107c30258(param_1 + 0x10);
    goto LAB_109a1cb64;
  }
  if (iVar1 == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_109a1cb64;
    FUN_109a1c62c();
  }
  else {
    if (iVar1 != 1) goto LAB_109a1cb64;
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 != 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_109a1cb64;
    if ((*(byte *)(*(long *)(param_1 + 0x10) + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
  }
  __ZdlPv();
LAB_109a1cb64:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109a1cbd0; end: 109a1cbd3;  */

long FUN_109a1cbd0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109a1cae4(param_1);
  }
  return param_1;
}



/* Entry: 109a1cbd4; end: 109a1cbe7;  */

void FUN_109a1cbd4(void)

{
  func_0x000109a1cb94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a1cbe8; end: 109a1cbf3;  */

undefined ** FUN_109a1cbe8(void)

{
  return &PTR_DAT_110b210f8;
}



/* Entry: 109a1cbf4; end: 109a1cd9f;  */

long * FUN_109a1cbf4(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  long lStack_48;
  
  iVar11 = *(int *)(param_1 + 0x1c);
  if (iVar11 == 100) {
    puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    lVar4 = (long)*(char *)((long)puVar9 + 0x17);
    puVar3 = puVar9;
    if (lVar4 < 0) {
      lVar4 = puVar9[1];
      puVar3 = (undefined8 *)*puVar9;
    }
    func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f594644);
    plVar2 = param_3;
    func_0x000107c280a0(param_3,100,puVar9,param_2);
  }
  else {
    if (iVar11 == 2) {
      lVar4 = *(long *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(lVar4 + 0x14);
      plVar2 = (long *)0x2;
    }
    else {
      plVar2 = param_2;
      if (iVar11 != 1) goto LAB_109a1cca4;
      lVar4 = *(long *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(lVar4 + 0x14);
      plVar2 = (long *)0x1;
    }
    func_0x000107c303cc(plVar2,lVar4,uVar1,param_2,param_3);
  }
LAB_109a1cca4:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar10 < 0) {
      lStack_48 = *(long *)(uVar5 + 8);
      uVar10 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_48 = uVar5 + 8;
    }
    uVar8 = (uint)uVar10;
    if (*param_3 - (long)plVar2 < (long)(int)uVar8) {
      lVar4 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar4 < (int)uVar8) {
        do {
          iVar11 = (int)lVar4;
          _memcpy(plVar2,lStack_48,(long)iVar11);
          uVar8 = (int)uVar10 - iVar11;
          uVar10 = (ulong)uVar8;
          lStack_48 = lStack_48 + iVar11;
          plVar6 = (long *)*param_3;
          plVar7 = (long *)((long)plVar2 + (long)iVar11);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar2 + (long)((int)plVar7 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar2 = plVar7;
          } while (plVar6 <= plVar7);
          lVar4 = (long)plVar6 + (0x10 - (long)plVar2);
        } while ((int)lVar4 < (int)uVar8);
      }
      _memcpy(plVar2,lStack_48,(long)(int)uVar8);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar8);
    }
    else {
      _memcpy(plVar2,lStack_48,uVar10 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar8);
    }
  }
  return plVar2;
}



/* Entry: 109a1cda0; end: 109a1ce6f;  */

void FUN_109a1cda0(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 100) {
    uVar5 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar5 + 0x17);
    uVar1 = (uint)*(undefined8 *)(uVar5 + 8);
    if (-1 < (char)bVar2) {
      uVar1 = (uint)bVar2;
    }
    iVar3 = uVar1 + ((int)LZCOUNT(uVar1) * -9 + 0x160U >> 6) + 2;
  }
  else {
    if (iVar3 == 2) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_109a1c858();
    }
    else {
      if (iVar3 != 1) {
        iVar3 = 0;
        goto LAB_109a1ce40;
      }
      iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_109a1c5b8();
    }
    iVar3 = iVar3 + ((int)LZCOUNT(iVar3) * -9 + 0x160U >> 6) + 1;
  }
LAB_109a1ce40:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x18) = iVar3;
  return;
}



/* Entry: 109a1ce70; end: 109a1ce73;  */

/* WARNING: Possible PIC construction at 0x000109a1ca10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109a1ca14) */

void FUN_109a1ce70(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *unaff_x19;
  long unaff_x20;
  ulong uVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar8 = (ulong *)(param_1 + 8);
  uVar9 = *puVar8;
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  iVar4 = *(int *)(param_2 + 0x1c);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        FUN_109a1cae4(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar4;
    }
    if (iVar4 == 100) {
      if (iVar5 != 100) {
        *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
      }
      puVar3 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x1c) != 100) {
        puVar3 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x10,puVar3,uVar9);
    }
    else if (iVar4 == 2) {
      if (iVar5 == 2) {
        ppuVar2 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 2) {
          ppuVar2 = &PTR_PTR_1132e8730;
        }
        FUN_109a1c8d0(*(undefined8 *)(param_1 + 0x10),ppuVar2);
      }
      else {
        FUN_109a1d9d4(uVar9,*(undefined8 *)(param_2 + 0x10));
LAB_109a1ca98:
        *(ulong *)(param_1 + 0x10) = uVar9;
      }
    }
    else if (iVar4 == 1) {
      if (iVar5 != 1) {
        FUN_109a1d934(uVar9,*(undefined8 *)(param_2 + 0x10));
        goto LAB_109a1ca98;
      }
      lVar7 = *(long *)(param_1 + 0x10);
      ppuVar2 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 1) {
        ppuVar2 = &PTR_PTR_1132e8718;
      }
      if (*(int *)(ppuVar2 + 2) != 0) {
        *(int *)(lVar7 + 0x10) = *(int *)(ppuVar2 + 2);
      }
      if (((ulong)ppuVar2[1] & 1) != 0) {
        unaff_x30 = 0x109a1ca14;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar6 = (ulong *)(lVar7 + 8);
        unaff_x19 = puVar8;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
  }
  puVar6 = puVar8;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar6 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109a1ce74; end: 109a1cec7;  */

long FUN_109a1ce74(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109a1cb94();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c3155c();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a1cec8; end: 109a1cecb;  */

long FUN_109a1cec8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000109a1cb94();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c3155c();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a1cecc; end: 109a1cedf;  */

void FUN_109a1cecc(void)

{
  FUN_109a1ce74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a1cee0; end: 109a1ceeb;  */

undefined ** FUN_109a1cee0(void)

{
  return &PTR_DAT_110b21130;
}



/* Entry: 109a1ceec; end: 109a1cf77;  */

void FUN_109a1ceec(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  
  if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
    puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      *(undefined1 *)*puVar2 = 0;
      puVar2[1] = 0;
    }
    else {
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109a1c6d4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceaf4c(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) == 0) {
    return;
  }
  if ((*puVar3 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    *(byte *)puVar3 = 0;
    *(byte *)((long)puVar3 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar3 = 0;
  puVar3[1] = 0;
  return;
}



/* Entry: 109a1cf78; end: 109a1d11b;  */

long * FUN_109a1cf78(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_109a1cfe8;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109a1cfe8;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f59466c);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109a1cfe8:
  uVar7 = *(uint *)(param_1 + 0x10);
  plVar2 = param_2;
  if ((uVar7 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,param_3);
  }
  plVar3 = plVar2;
  if ((uVar7 >> 1 & 1) != 0) {
    plVar3 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20),plVar2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      uVar9 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar3 < (long)(int)uVar7) {
      lVar11 = (*param_3 - (long)plVar3) + 0x10;
      if ((int)lVar11 < (int)uVar7) {
        do {
          iVar10 = (int)lVar11;
          _memcpy(plVar3,lVar4,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lVar4 = lVar4 + iVar10;
          plVar6 = (long *)*param_3;
          plVar2 = (long *)((long)plVar3 + (long)iVar10);
          do {
            plVar3 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            plVar2 = (long *)((long)plVar3 + (long)((int)plVar2 - (int)plVar6));
            plVar6 = (long *)*param_3;
            plVar3 = plVar2;
          } while (plVar6 <= plVar2);
          lVar11 = (long)plVar6 + (0x10 - (long)plVar3);
        } while ((int)lVar11 < (int)uVar7);
      }
      _memcpy(plVar3,lVar4,(long)(int)uVar7);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar3,lVar4,uVar9 & 0xffffffff);
      plVar3 = (long *)((long)plVar3 + (long)(int)uVar7);
    }
  }
  return plVar3;
}



/* Entry: 109a1d11c; end: 109a1d217;  */

long FUN_109a1d11c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  lVar4 = lVar3;
  if (lVar3 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar4 = lVar3;
    }
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      FUN_109a1cda0();
      lVar4 = lVar4 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010bceb05c();
      lVar4 = lVar4 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109a1d218; end: 109a1d21b;  */

void FUN_109a1d218(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        FUN_109a1d864(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_109a1c968();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000107c2ac78(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        func_0x00010bceaeac();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109a1d21c; end: 109a1d323;  */

void FUN_109a1d21c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        FUN_109a1d864(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_109a1c968();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000107c2ac78(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        func_0x00010bceaeac();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109a1d324; end: 109a1d37f;  */

void FUN_109a1d324(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  do {
    uVar2 = *(undefined1 *)(param_1 + 0x20 + lVar3);
    *(undefined1 *)(param_1 + 0x20 + lVar3) = *(undefined1 *)(param_2 + 0x20 + lVar3);
    *(undefined1 *)(param_2 + 0x20 + lVar3) = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  return;
}



/* Entry: 109a1d380; end: 109a1d3b3;  */

long FUN_109a1d380(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109a1d3b4; end: 109a1d3b7;  */

long FUN_109a1d3b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 109a1d3b8; end: 109a1d3cb;  */

void FUN_109a1d3b8(void)

{
  FUN_109a1d380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a1d3cc; end: 109a1d41b;  */

undefined ** FUN_109a1d3cc(void)

{
  return &PTR_DAT_110b21168;
}



/* Entry: 109a1d41c; end: 109a1d5a3;  */

long * FUN_109a1d41c(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lStack_48;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_109a1d490;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109a1d490;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f594685);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109a1d490:
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lStack_48 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_48 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar2 < (long)(int)uVar7) {
      lVar3 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar3 < (int)uVar7) {
        do {
          iVar10 = (int)lVar3;
          _memcpy(plVar2,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar2 + (long)iVar10);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar3 = (long)plVar5 + (0x10 - (long)plVar2);
        } while ((int)lVar3 < (int)uVar7);
      }
      _memcpy(plVar2,lStack_48,(long)(int)uVar7);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar2,lStack_48,uVar9 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
  }
  return plVar2;
}



/* Entry: 109a1d5a4; end: 109a1d63b;  */

long FUN_109a1d5a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar2;
  return lVar2;
}



/* Entry: 109a1d63c; end: 109a1d6bb;  */

void FUN_109a1d63c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109a1d6bc; end: 109a1d6e3;  */

void FUN_109a1d6bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_DAT_110b20f00;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 109a1d6e4; end: 109a1d863;  */

void FUN_109a1d6e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_DAT_110b20f00;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 109a1d864; end: 109a1d933;  */

undefined8 * FUN_109a1d864(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110b20ff0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)puVar2 + 0x1c) = iVar1;
  if (iVar1 == 100) {
    puVar3 = *(undefined8 **)(param_2 + 0x10);
    if (((ulong)puVar3 & 3) != 0) {
      puVar3 = (undefined8 *)(param_2 + 0x10);
      func_0x000107c30244(puVar3,param_1);
    }
  }
  else if (iVar1 == 2) {
    FUN_109a1d9d4(param_1,*(undefined8 *)(param_2 + 0x10));
    puVar3 = param_1;
  }
  else {
    if (iVar1 != 1) {
      return puVar2;
    }
    FUN_109a1d934(param_1,*(undefined8 *)(param_2 + 0x10));
    puVar3 = param_1;
  }
  puVar2[2] = puVar3;
  return puVar2;
}



/* Entry: 109a1d934; end: 109a1d9d3;  */

undefined8 * FUN_109a1d934(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110b20f00;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109a1d9d4; end: 109a1da67;  */

undefined8 * FUN_109a1d9d4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110b20fa0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar2 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_109a1d864(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  puVar2[3] = param_1;
  return puVar2;
}



/* Entry: 109a1da68; end: 109a1dbe3;  */

undefined8 * FUN_109a1da68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b21228;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (*(int *)(param_3 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 2,param_3 + 0x10);
  }
  FUN_109311ab0(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_109311ab0(param_1 + 8,param_2,param_3 + 0x40);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_2;
  if (*(int *)(param_3 + 0x60) != 0) {
    func_0x000107c303c4(param_1 + 0xb,param_3 + 0x58);
  }
  puVar2 = (ulong *)(param_3 + 0x70);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[0xe] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x78);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[0xf] = puVar1;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x80);
  return param_1;
}



/* Entry: 109a1dbe4; end: 109a1dc67;  */

long FUN_109a1dbe4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  FUN_109a1e8b4(param_1 + 0x58);
  if (0 < *(int *)(param_1 + 0x44)) {
    if (*(long *)(*(long *)(param_1 + 0x48) + -8) == 0) {
      __ZdlPv();
    }
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109a1e8e8(param_1 + 0x10);
  return param_1;
}


