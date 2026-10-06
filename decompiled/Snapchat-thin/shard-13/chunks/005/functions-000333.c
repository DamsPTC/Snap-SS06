/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6d6d40; end: 10a6d6df3;  */

void FUN_10a6d6d40(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1[10] != 0) {
    piVar1 = (int *)(param_1[10] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 3);
    }
  }
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c)) {
    lVar5 = 0;
    lVar7 = param_1[0xb];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c));
  }
  puVar6 = (undefined8 *)param_1[0xc];
  if (puVar6 != param_1 + 0xd && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a6d6df4; end: 10a6d6eb7;  */

undefined8 * FUN_10a6d6df4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  *(undefined4 *)(param_1 + 3) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = param_1 + 4;
  param_1[0xc] = param_1 + 0xd;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 10a6d6eb8; end: 10a6d6eef;  */

void FUN_10a6d6eb8(long param_1)

{
  ushort uVar1;
  long lVar2;
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a6d6ef0; end: 10a6d6f73;  */

void FUN_10a6d6ef0(undefined8 *param_1)

{
  func_0x00010a05248c(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a6d6f74; end: 10a6d6fd7;  */

long * FUN_10a6d6f74(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a6d6fd8; end: 10a6d700b;  */

void FUN_10a6d6fd8(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a6d700c; end: 10a6d701b;  */

void FUN_10a6d700c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c112e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6d701c; end: 10a6d703b;  */

void FUN_10a6d701c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c112e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d703c; end: 10a6d7047;  */

undefined8 * FUN_10a6d703c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  func_0x00010a061678(param_1 + 0x310);
  func_0x00010a0523dc(param_1 + 0x300);
  func_0x00010a0523dc(param_1 + 0x2f0);
  func_0x00010a05248c(param_1 + 0x2e0);
  FUN_10a6c966c(param_1 + 0x2c8);
  FUN_10a00dc2c(param_1 + 0x2a0);
  *puVar1 = &PTR_FUN_110c109f8;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_110bb3968;
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110bb3998;
  *(undefined ***)(param_1 + 800) = &PTR_DAT_110c10b58;
  *(undefined8 *)(param_1 + 0xc0) = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x280);
  func_0x00010a042c64(param_1 + 600);
  func_0x00010a0523dc(param_1 + 0x240);
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    func_0x00010a042d30(param_1 + 0x1e8);
  }
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_110b9f768;
  FUN_10a1c00f4((undefined8 *)(param_1 + 0xc0));
  *puVar1 = &PTR_DAT_110c10ba8;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_110b9f848;
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110b9f878;
  *(undefined ***)(param_1 + 800) = &PTR_DAT_110c10c78;
  FUN_10a042dcc(param_1 + 0xb0);
  *puVar1 = &PTR_DAT_110c60a00;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c60a88;
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 0x70);
  puVar6 = *(undefined8 **)(param_1 + 0x78);
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = (long *)(param_1 + 0x68);
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 0x30);
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)(param_1 + 0xa7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x90));
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x40) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x28) = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 0x30);
  return puVar1;
}



/* Entry: 10a6d7048; end: 10a6d709f;  */

long FUN_10a6d7048(long param_1)

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



/* Entry: 10a6d70a0; end: 10a6d70d7;  */

void FUN_10a6d70a0(long param_1)

{
  ushort uVar1;
  long lVar2;
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a6d70d8; end: 10a6d71d3;  */

undefined1  [16] FUN_10a6d70d8(ulong param_1,undefined8 *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c10988;
  pcVar1 = "";
  if ((char *)*param_2 != (char *)0x0) {
    pcVar1 = (char *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pcVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c10988;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bb3788;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a6d71d4; end: 10a6d7237;  */

ulong FUN_10a6d71d4(ulong param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6d7238);
      (*pcVar1)();
    }
    FUN_10a054dac(param_1,*param_2,FUN_10a6d7238,1,*(undefined8 *)(param_1 + 0x40));
  }
  return param_1;
}



/* Entry: 10a6d7238; end: 10a6d72df;  */

void FUN_10a6d7238(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6d72e0(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6d72e0; end: 10a6d73ab;  */

undefined ** FUN_10a6d72e0(undefined **param_1,undefined **param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a053854();
    param_2 = ppuVar2;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar2 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar3 = ppuVar2;
  FUN_10a0051e8();
  if (((ulong)ppuVar3 & 1) == 0) {
    if (((ulong)ppuVar2[0xf] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6d73ac);
      (*pcVar1)();
    }
    FUN_10a054dac(ppuVar2,*param_2,FUN_10a6d73ac,2,ppuVar2[8]);
  }
  return ppuVar2;
}



/* Entry: 10a6d73ac; end: 10a6d747b;  */

void FUN_10a6d73ac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a6d72e0(param_2,param_3);
  FUN_10a6d747c(param_5);
  FUN_10a6d0f6c(&stack0xffffffffffffffa8,param_2,*param_4,*(undefined8 *)(param_4 + 2));
  func_0x00010a6d1378(&stack0xffffffffffffffa8);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a6d747c; end: 10a6d749f;  */

ulong FUN_10a6d747c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  uVar1 = 1;
  puVar3 = (undefined8 *)0x0;
  FUN_10a052ee0(1,0,param_1);
  uVar2 = uVar1;
  FUN_10a0051e8();
  if ((uVar2 & 1) == 0) {
    FUN_10a052828(uVar1,*puVar3,FUN_10a6d74f8,FUN_10a6d7664);
  }
  return uVar1;
}



/* Entry: 10a6d74a0; end: 10a6d74f7;  */

ulong FUN_10a6d74a0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a6d74f8,FUN_10a6d7664);
  }
  return param_1;
}



/* Entry: 10a6d74f8; end: 10a6d7663;  */

void FUN_10a6d74f8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar17 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar17 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a052c2c(param_2,plVar17);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar9 = *(long *)(plVar6[100] + 8);
      plVar17 = *(long **)(plVar6[100] + 8);
      if (lVar9 != 0) {
        plVar6 = (long *)(lVar9 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a052f68(param_1,param_2,&stack0xffffffffffffffb0);
      if (plVar17 != (long *)0x0) {
        plVar6 = plVar17 + 1;
        do {
          lVar9 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar17 = plVar5 + 0x4b;
      lVar9 = plVar5[0x59];
      uVar8 = lVar9 - 1;
      plVar5[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar17[lVar9 + 2];
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      lVar9 = *plVar17;
      lVar13 = plVar5[0x4c];
      lVar11 = lVar13 - lVar9;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar8) {
        uVar16 = uVar8 - uVar15;
        lVar14 = plVar5[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar8 >> 0x3c == 0) {
            uVar10 = lVar14 - lVar9 >> 3;
            if (uVar10 <= uVar8) {
              uVar10 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar9)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar17;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar13 = lVar4 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar9,lVar11);
              *plVar17 = lVar12;
              plVar5[0x4c] = lVar13 + uVar16 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar9;
              lStack_80 = lVar9;
              lStack_78 = lVar9;
              lStack_70 = lVar14;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar13,uVar16 * 0x10);
        plVar5[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar8 < uVar15) {
        lVar9 = lVar9 + uVar8 * 0x10;
        while (lVar13 != lVar9) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar5[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar8;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a6d7650);
  (*pcVar3)();
}



/* Entry: 10a6d7664; end: 10a6d7d0f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a6d7664(undefined4 *param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 **ppuVar1;
  long *plVar2;
  long lVar3;
  undefined8 ******ppppppuVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *****pppppuVar12;
  undefined **ppuVar13;
  undefined8 ***pppuVar14;
  undefined *extraout_x8;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 **ppuVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 ****ppppuVar20;
  long lVar21;
  undefined8 ******ppppppuVar22;
  undefined8 ***pppuVar23;
  ulong uVar24;
  undefined8 *******pppppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 uStack_70;
  undefined8 ****ppppuStack_68;
  long in_stack_ffffffffffffffa0;
  undefined8 ****in_stack_ffffffffffffffa8;
  
  ppppuVar9 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (ppppuVar9[0x59] < (undefined8 ***)0x8) {
    ppppuVar9[(long)ppppuVar9[0x59] + 0x4e] = ppppuVar9[0x5a];
    ppppuVar9[0x59] = (undefined8 ***)((long)ppppuVar9[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(ppppuVar9 + 0x4b);
  }
  ppppuVar10 = param_2;
  FUN_10a6d72e0(param_2,param_3);
  FUN_10a6d7d10(param_5);
  func_0x000109898610(&pppppppuStack_a0,param_2,param_4);
  if (pppppppuStack_a0 == (undefined8 *******)0x0) {
    pppppppuStack_c0 = (undefined8 *******)0x0;
    ppppuStack_b8 = (undefined8 ****)0x0;
  }
  else {
    ___dynamic_cast(pppppppuStack_a0,&PTR_DAT_110b178e0,&PTR_DAT_110c10688,0x10);
    if (pppppppuStack_a0 == (undefined8 *******)0x0) {
      pppppppuVar11 = &pppppppuStack_b0;
    }
    else {
      pppuStack_a8 = pppuStack_98;
      pppppppuVar11 = &pppppppuStack_a0;
      pppppppuStack_b0 = pppppppuStack_a0;
    }
    *pppppppuVar11 = (undefined8 ******)0x0;
    pppppppuVar11[1] = (undefined8 ******)0x0;
    pppuVar16 = pppuStack_a8;
    if (pppppppuStack_b0 == (undefined8 *******)0x0) {
      func_0x00010988bd28(&UNK_10f685500);
      goto LAB_10a6d7c40;
    }
    FUN_10a0533bc(&stack0xffffffffffffffa0,pppppppuStack_b0);
    if (in_stack_ffffffffffffffa0 == 0) {
      func_0x0001098849a4(&pppppppuStack_80,param_2,param_4);
      pppppuVar12 = (undefined8 *****)0x30;
      __Znwm();
      pppppuVar12[1] = (undefined8 ****)0x0;
      pppppuVar12[2] = (undefined8 ****)0x0;
      *pppppuVar12 = (undefined8 ****)&PTR_DAT_110b174d8;
      pppppuStack_90 = pppppuVar12 + 3;
      if ((int)pppppppuStack_80 == 3) {
        pppppuVar12[3] = param_2;
        *(undefined4 *)(pppppuVar12 + 4) = 3;
        pppppuVar12[5] = ppppppuStack_78;
      }
      else if ((int)pppppppuStack_80 == 2) {
        pppppuVar12[3] = param_2;
        *(undefined4 *)(pppppuVar12 + 4) = 2;
        *(undefined1 *)(pppppuVar12 + 5) = ppppppuStack_78._0_1_;
      }
      else if ((int)pppppppuStack_80 < 4) {
        pppppuVar12[3] = param_2;
        *(int *)(pppppuVar12 + 4) = (int)pppppppuStack_80;
      }
      else {
        pppppuVar12[3] = param_2;
        *(int *)(pppppuVar12 + 4) = (int)pppppppuStack_80;
        pppppuVar12[5] = ppppppuStack_78;
      }
      pppppppuStack_80 = pppppppuStack_b0;
      ppppppuStack_78 = (undefined8 ******)pppuVar16;
      if (pppuVar16 != (undefined8 ***)0x0) {
        pppuVar14 = pppuVar16 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
          if (bVar6) {
            *pppuVar14 = (undefined8 **)((long)*pppuVar14 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      ppppuStack_b8 = (undefined8 ****)0x90;
      ppppppuStack_88 = (undefined8 ******)pppppuVar12;
      __Znwm();
      ppppuStack_b8[1] = (undefined8 ***)0x0;
      ppppuStack_b8[2] = (undefined8 ***)0x0;
      *ppppuStack_b8 = (undefined8 ***)&PTR_FUN_110b9fe30;
      ppppuStack_b8[3] = pppppppuStack_b0;
      pppppppuStack_80 = (undefined8 *******)0x0;
      ppppppuStack_78 = (undefined8 ******)0x0;
      ppppuStack_b8[4] = pppuVar16;
      ppppuStack_b8[5] = (undefined8 ***)0x0;
      ppppuStack_b8[6] = (undefined8 ***)0x0;
      ppppuStack_b8[7] = (undefined8 ***)0x32aaaba7;
      ppppuStack_b8[9] = (undefined8 ***)0x0;
      ppppuStack_b8[8] = (undefined8 ***)0x0;
      ppppuStack_b8[0xb] = (undefined8 ***)0x0;
      ppppuStack_b8[10] = (undefined8 ***)0x0;
      ppppuStack_b8[0xd] = (undefined8 ***)0x0;
      ppppuStack_b8[0xc] = (undefined8 ***)0x0;
      ppppuStack_b8[0xf] = (undefined8 ***)0x0;
      ppppuStack_b8[0xe] = (undefined8 ***)0x0;
      ppppuStack_b8[0x11] = (undefined8 ***)0x0;
      ppppuStack_b8[0x10] = (undefined8 ***)0x0;
      if (in_stack_ffffffffffffffa8 != (undefined8 ****)0x0) {
        ppppuVar20 = in_stack_ffffffffffffffa8 + 1;
        do {
          pppuVar16 = *ppppuVar20;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
          if (bVar6) {
            *ppppuVar20 = (undefined8 ***)((long)pppuVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppuVar16 == (undefined8 ***)0x0) {
          (*(code *)(*in_stack_ffffffffffffffa8)[2])(in_stack_ffffffffffffffa8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
        }
      }
      ppppppuVar4 = ppppppuStack_78;
      if (ppppppuStack_78 != (undefined8 ******)0x0) {
        plVar2 = (long *)(ppppppuStack_78 + 1);
        do {
          lVar21 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)((long)*ppppppuStack_78 + 0x10))(ppppppuStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar4);
        }
      }
      func_0x00010a04a7fc(ppppuStack_b8 + 5,&pppppuStack_90);
      pppppppuStack_c0 = pppppppuStack_b0;
      if (ppppuStack_b8 == (undefined8 ****)0x0) {
        ppppppuStack_78 = (undefined8 ******)0x0;
      }
      else {
        ppppuVar20 = ppppuStack_b8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
          if (bVar6) {
            *ppppuVar20 = (undefined8 ***)((long)*ppppuVar20 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
          if (bVar6) {
            *ppppuVar20 = (undefined8 ***)((long)*ppppuVar20 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
          ppppppuStack_78 = (undefined8 ******)ppppuStack_b8;
        } while (cVar5 != '\0');
      }
      pppppppuStack_80 = pppppppuStack_b0;
      func_0x00010a053e8c(ppppuStack_b8 + 3,&pppppppuStack_80);
      ppppppuVar4 = ppppppuStack_78;
      if (ppppppuStack_78 != (undefined8 ******)0x0) {
        ppppuVar20 = ppppppuStack_78 + 1;
        do {
          pppuVar16 = *ppppuVar20;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
          if (bVar6) {
            *ppppuVar20 = (undefined8 ***)((long)pppuVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppuVar16 == (undefined8 ***)0x0) {
          (*(code *)(*ppppppuStack_78)[2])(ppppppuStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar4);
        }
      }
      func_0x00010a053ee8(pppppppuStack_b0,&stack0xffffffffffffffa0);
      ppuVar13 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)(pppppppuStack_b0[10]);
      puVar19 = *ppuVar13;
      if (extraout_x8 != (undefined *)0x0) {
        puVar19 = extraout_x8;
      }
      FUN_10aa89b3c(*(undefined8 *)(puVar19 + 0x870),&stack0xffffffffffffffa0);
      ppppppuVar4 = ppppppuStack_88;
      in_stack_ffffffffffffffa8 = ppppuStack_b8;
      if (ppppppuStack_88 != (undefined8 ******)0x0) {
        pppppuVar12 = ppppppuStack_88 + 1;
        do {
          ppppuVar20 = *pppppuVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
          if (bVar6) {
            *pppppuVar12 = (undefined8 ****)((long)ppppuVar20 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppuVar20 == (undefined8 ****)0x0) {
          (*(code *)(*ppppppuStack_88)[2])(ppppppuStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar4);
        }
      }
    }
    else {
      FUN_10a053e40(&pppppppuStack_80);
      ppppuStack_b8 = ppppppuStack_78;
      pppppppuStack_c0 = pppppppuStack_80;
    }
    if (in_stack_ffffffffffffffa8 != (undefined8 ****)0x0) {
      ppppuVar20 = in_stack_ffffffffffffffa8 + 1;
      do {
        pppuVar16 = *ppppuVar20;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
        if (bVar6) {
          *ppppuVar20 = (undefined8 ***)((long)pppuVar16 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppuVar16 == (undefined8 ***)0x0) {
        (*(code *)(*in_stack_ffffffffffffffa8)[2])(in_stack_ffffffffffffffa8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
      }
    }
    pppuVar16 = pppuStack_a8;
    if (pppuStack_a8 != (undefined8 ***)0x0) {
      pppuVar14 = pppuStack_a8 + 1;
      do {
        ppuVar17 = *pppuVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
        if (bVar6) {
          *pppuVar14 = (undefined8 **)((long)ppuVar17 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppuVar17 == (undefined8 **)0x0) {
        (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar16);
      }
    }
  }
  if (pppuStack_98 != (undefined8 ***)0x0) {
    pppuVar16 = pppuStack_98 + 1;
    do {
      ppuVar17 = *pppuVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar16,0x10);
      if (bVar6) {
        *pppuVar16 = (undefined8 **)((long)ppuVar17 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar17 == (undefined8 **)0x0) {
      (*(code *)(*pppuStack_98)[2])(pppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_98);
    }
  }
  pppppppuStack_80 = (undefined8 *******)&UNK_10f66d8a6;
  ppppppuStack_78 = (undefined8 ******)0x34;
  if (pppppppuStack_c0 == (undefined8 *******)0x0) {
    FUN_10a0edfc4(&pppppppuStack_80);
  }
  else {
    pppuVar16 = ppppuVar10[100];
    if (ppppuStack_b8 != (undefined8 ****)0x0) {
      ppppuVar20 = ppppuStack_b8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppuVar20,0x10);
        if (bVar6) {
          *ppppuVar20 = (undefined8 ***)((long)*ppppuVar20 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppuVar17 = pppuVar16[1];
    *pppuVar16 = pppppppuStack_c0;
    pppuVar16[1] = ppppuStack_b8;
    if (ppuVar17 != (undefined8 **)0x0) {
      ppuVar1 = ppuVar17 + 1;
      do {
        puVar18 = *ppuVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar6) {
          *ppuVar1 = (undefined8 *)((long)puVar18 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar18 == (undefined8 *)0x0) {
        (*(code *)(*ppuVar17)[2])(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
    ppuVar17 = *ppppuVar10[100];
    func_0x00010aae9fd8(ppuVar17);
    FUN_10a08d2e0(&pppppppuStack_80,ppuVar17 + 2);
    pppppppuVar11 = &pppppppuStack_80;
    FUN_10ad015f0(pppppppuVar11,0x4000);
    if (((ulong)pppppppuVar11 & 1) != 0) {
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppppuStack_80);
      }
      FUN_10a1e4260(ppppuVar10 + 0x51,ppuVar17 + 2);
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        FUN_10a08d2e0(&pppppppuStack_80,ppppuVar10 + 0x52);
        pppppppuVar11 = pppppppuStack_80;
        if (-1 < (long)uStack_70) {
          pppppppuVar11 = &pppppppuStack_80;
        }
        func_0x00010ae06f08(1,8,&UNK_10f66d901,&UNK_10f66d950,0x90,&UNK_10f66d9d1,param_8,param_9,
                            pppppppuVar11);
        if (uStack_70._7_1_ < '\0') {
          __ZdlPv(pppppppuStack_80);
        }
      }
      if (ppppuStack_b8 != (undefined8 ****)0x0) {
        ppppuVar10 = ppppuStack_b8 + 1;
        do {
          pppuVar16 = *ppppuVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppuVar10,0x10);
          if (bVar6) {
            *ppppuVar10 = (undefined8 ***)((long)pppuVar16 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppuVar16 == (undefined8 ***)0x0) {
          (*(code *)(*ppppuStack_b8)[2])(ppppuStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuStack_b8);
        }
      }
      *param_1 = 0;
      ppppuVar10 = ppppuVar9 + 0x4b;
      pppuVar16 = ppppuVar9[0x59];
      pppuVar14 = (undefined8 ***)((long)pppuVar16 - 1);
      ppppuVar9[0x59] = pppuVar14;
      if (pppuVar14 < (undefined8 ***)0x8) {
        pppuVar16 = ppppuVar10[(long)pppuVar16 + 2];
        if (ppppuVar9[0x5a] == pppuVar16) {
          return;
        }
      }
      else {
        pppuVar16 = (undefined8 ***)ppppuVar9[0x57][-1];
        ppppuVar9[0x57] = ppppuVar9[0x57] + -1;
        if (ppppuVar9[0x5a] == pppuVar16) {
          return;
        }
      }
      ppppppuVar4 = (undefined8 ******)*ppppuVar10;
      ppppppuVar22 = (undefined8 ******)ppppuVar9[0x4c];
      lVar21 = (long)ppppppuVar22 - (long)ppppppuVar4;
      pppuVar14 = (undefined8 ***)(lVar21 >> 4);
      if (pppuVar14 < pppuVar16) {
        uVar24 = (long)pppuVar16 - (long)pppuVar14;
        pppuVar23 = ppppuVar9[0x4d];
        if ((ulong)((long)pppuVar23 - (long)ppppppuVar22 >> 4) < uVar24) {
          if ((ulong)pppuVar16 >> 0x3c == 0) {
            pppuVar15 = (undefined8 ***)((long)pppuVar23 - (long)ppppppuVar4 >> 3);
            if (pppuVar15 <= pppuVar16) {
              pppuVar15 = pppuVar16;
            }
            if (0x7fffffffffffffef < (ulong)((long)pppuVar23 - (long)ppppppuVar4)) {
              pppuVar15 = (undefined8 ***)0xfffffffffffffff;
            }
            ppppuStack_68 = ppppuVar10;
            if ((ulong)pppuVar15 >> 0x3c == 0) {
              lVar8 = (long)pppuVar15 << 4;
              __Znwm();
              lVar3 = lVar8 + lVar21;
              _bzero(lVar3,uVar24 * 0x10);
              pppuVar14 = (undefined8 ***)(lVar3 + (long)pppuVar14 * -0x10);
              _memcpy(pppuVar14,ppppppuVar4,lVar21);
              *ppppuVar10 = pppuVar14;
              ppppuVar9[0x4c] = (undefined8 ***)(lVar3 + uVar24 * 0x10);
              ppppuVar9[0x4d] = (undefined8 ***)(lVar8 + (long)pppuVar15 * 0x10);
              ppppppuStack_88 = ppppppuVar4;
              pppppppuStack_80 = (undefined8 *******)ppppppuVar4;
              ppppppuStack_78 = ppppppuVar4;
              uStack_70 = pppuVar23;
              func_0x00010988c1b8(&ppppppuStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar7)();
        }
        _bzero(ppppppuVar22,uVar24 * 0x10);
        ppppuVar9[0x4c] = ppppppuVar22 + uVar24 * 2;
      }
      else if (pppuVar16 < pppuVar14) {
        while (ppppppuVar22 != ppppppuVar4 + (long)pppuVar16 * 2) {
          ppppppuVar22 = ppppppuVar22 + -2;
          func_0x00010988c204(ppppppuVar22);
        }
        ppppuVar9[0x4c] = ppppppuVar4 + (long)pppuVar16 * 2;
      }
code_r0x00010988c138:
      ppppuVar9[0x5a] = pppuVar16;
      return;
    }
    FUN_10a0edfc4(&stack0xffffffffffffffa0);
  }
LAB_10a6d7c40:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6d7c44);
  (*pcVar7)();
}



/* Entry: 10a6d7d10; end: 10a6d7d33;  */

long FUN_10a6d7d10(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 1) {
    return param_1;
  }
  lVar4 = 1;
  FUN_10a052ee0(1,0,param_1);
  plVar6 = *(long **)(lVar4 + 8);
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
  return lVar4;
}



/* Entry: 10a6d7d34; end: 10a6d7e47;  */

long FUN_10a6d7d34(long param_1)

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



/* Entry: 10a6d7e48; end: 10a6d7e6f;  */

void FUN_10a6d7e48(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10a6d7d34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a6d7e70; end: 10a6d7ed7;  */

void FUN_10a6d7e70(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2d0;
  __Znwm();
  FUN_10a6d7ed8();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
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
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a6d7ed8; end: 10a6d7f23;  */

undefined8 * FUN_10a6d7ed8(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9fcf0;
  FUN_10a1db5e8(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a6d7f24; end: 10a6d7f27;  */

void FUN_10a6d7f24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6d7f28; end: 10a6d7f3b;  */

void FUN_10a6d7f28(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d7f3c; end: 10a6d7f53;  */

void FUN_10a6d7f3c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a6d7f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a6d7f54; end: 10a6d7f8b;  */

undefined8 FUN_10a6d7f54(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c11390);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a6d7f8c; end: 10a6d7f8f;  */

void FUN_10a6d7f8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6d7f90; end: 10a6d86cb;  */

void FUN_10a6d7f90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar6 = (undefined8 *)0xf8;
  __Znwm();
  *puVar6 = FUN_10a729634;
  puVar6[1] = FUN_10a729be0;
  uVar11 = *param_3;
  puVar6[0x11] = param_3[1];
  puVar6[0x10] = uVar11;
  puVar6[0x1c] = param_2;
  *param_3 = 0;
  param_3[1] = 0;
  puVar7 = (undefined8 *)0xc0;
  __Znwm();
  plVar13 = puVar7 + 1;
  puVar7[2] = 0;
  *plVar13 = 0x200000006;
  *(undefined2 *)(puVar7 + 3) = 4;
  uVar11 = 0;
  uVar14 = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = puVar7 + 3;
  puVar7[0x12] = 0;
  *puVar7 = &PTR_DAT_110c14d98;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  *(undefined1 *)(puVar7 + 0x17) = 0;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  puVar6[3] = uVar14;
  puVar6[2] = uVar11;
  puVar6[5] = uVar14;
  puVar6[4] = uVar11;
  puVar6[6] = 0;
  FUN_109d18960(puVar6 + 2,*ppuVar8,0);
  puVar6[7] = puVar7;
  puVar6[8] = puVar7;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar9 = puVar6[0x10];
  puVar6[0x1d] = lVar9;
  *param_1 = puVar7;
  if (lVar9 != 0) {
    puVar6[9] = 0;
    *(undefined1 *)(puVar6 + 0x1e) = 0;
    lVar9 = puVar6[6];
    if (lVar9 != 0) {
      plVar13 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar13 = (long *)puVar6[9];
      if (plVar13 != (long *)0x0) {
        puVar1 = (ulong *)(plVar13 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
      }
    }
    puVar6[9] = lVar9;
    puVar6[0x18] = lVar9;
    FUN_10a6d937c(puVar6 + 0xd,puVar6[0x1c]);
    puVar6[0x14] = puVar6[0x1d];
    puVar6[0x15] = puVar6[0x11];
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    FUN_10a6d878c(puVar6 + 0x12,puVar6[0x1c],puVar6 + 0x14);
    plVar13 = (long *)puVar6[0x15];
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    puVar6[0x17] = puVar6[0x13];
    puVar6[0x16] = puVar6[0x12];
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    FUN_10a6d8be4(puVar6 + 0x1b,puVar6 + 0xd,puVar6 + 0x16);
    FUN_10a6d8b00(puVar6 + 0x1a,puVar6 + 0x18,puVar6 + 0x1b);
    puVar6[0x19] = puVar6[0x1a];
    plVar13 = (long *)(puVar6[0x1a] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x19] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x1e) = 1;
      lVar9 = puVar6[0x19];
      plVar13 = (long *)(lVar9 + 0x10);
      uVar11 = puVar6[3];
      do {
        lVar12 = *plVar13;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lStack_68 = 0;
            puStack_60 = puVar6;
            uStack_58 = uVar11;
            func_0x000109d1b588(lVar9 + 0x18,&lStack_68);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    lVar9 = puVar6[0x19];
    if (((uint)*(undefined8 *)(puVar6[0x19] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar9 + 0xb8) & 1) != 0) {
        FUN_10a6fbf78(puVar6 + 9,lVar9 + 0x98);
        plVar13 = (long *)puVar6[0x19];
        if (plVar13 != (long *)0x0) {
          puVar1 = (ulong *)(plVar13 + 1);
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar13 + 8))();
            }
          }
        }
        plVar13 = (long *)puVar6[0x1a];
        if (plVar13 != (long *)0x0) {
          puVar1 = (ulong *)(plVar13 + 1);
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar13 + 8))();
            }
          }
        }
        plVar13 = (long *)puVar6[0x1b];
        if (plVar13 != (long *)0x0) {
          puVar1 = (ulong *)(plVar13 + 1);
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar13 + 8))();
            }
          }
        }
        plVar13 = (long *)puVar6[0x17];
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 1;
          do {
            lVar9 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        if (*(int *)(puVar6 + 0xc) == 2) {
          puStack_60 = (undefined8 *)0x0;
          uStack_58 = 0;
          lStack_68 = 0;
          func_0x000107c2b048(&lStack_68,puVar6[9],puVar6[10],puVar6[10] - puVar6[9]);
          FUN_10a6d9290(puVar6 + 2,&lStack_68);
          if (lStack_68 != 0) {
            puStack_60 = (undefined8 *)lStack_68;
            __ZdlPv();
          }
        }
        else {
          FUN_10a6d86cc(puVar6 + 2);
        }
        FUN_10a6fc01c(puVar6 + 9);
        plVar13 = (long *)puVar6[0x13];
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 1;
          do {
            lVar9 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = (long *)puVar6[0xf];
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 1;
          do {
            lVar9 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        plVar13 = (long *)puVar6[0x18];
        if (plVar13 != (long *)0x0) {
          puVar1 = (ulong *)(plVar13 + 1);
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            do {
              uVar10 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar13 + 8))(plVar13);
            }
          }
        }
        goto LAB_10a6d8478;
      }
    }
    else {
      func_0x0001092af97c(lVar9 + 0x90);
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6d8508);
    (*pcVar5)();
  }
  FUN_10a6d86cc(puVar6 + 2);
LAB_10a6d8478:
  func_0x000109d1a1d0(puVar6 + 2);
  plVar13 = (long *)puVar6[0x11];
  if (plVar13 != (long *)0x0) {
    plVar2 = plVar13 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  __ZdlPv(puVar6);
  return;
}



/* Entry: 10a6d86cc; end: 10a6d878b;  */

void FUN_10a6d86cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((*(char *)(lVar8 + 0xb8) == '\x01') && (*(char *)(lVar8 + 0xb0) == '\x01')) &&
           (*(long *)(lVar8 + 0x98) != 0)) {
          *(long *)(lVar8 + 0xa0) = *(long *)(lVar8 + 0x98);
          __ZdlPv();
        }
        *(undefined1 *)(lVar8 + 0x98) = 0;
        *(undefined1 *)(lVar8 + 0xb0) = 0;
        *(undefined1 *)(lVar8 + 0xb8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a6d8764;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a6d8764:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar4 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 >> 0x21 == 1) {
        FUN_109d1b3c4(plVar4,1,plVar7);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 10a6d878c; end: 10a6d8aff;  */

void FUN_10a6d878c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (param_2 == 0) {
    lVar8 = param_3[1];
    lVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    lVar5 = *(long *)(param_2 + 0x870);
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x38);
      if (lVar8 == 0) {
        lVar8 = *(long *)(lVar5 + 0x28);
        plVar6 = *(long **)(lVar5 + 0x30);
      }
      else {
        plVar6 = *(long **)(lVar5 + 0x40);
      }
      if (plVar6 != (long *)0x0) {
        plVar9 = plVar6 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = (long *)param_3[1];
      lVar5 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      if (plVar6 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar1 = plVar6 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          plVar7 = plVar6;
        } while (cVar2 != '\0');
      }
      if (lVar5 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else if (lVar8 == 0) {
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *param_1 = lVar5;
        param_1[1] = (long)plVar9;
      }
      else {
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (plVar9 != (long *)0x0) {
          plVar1 = plVar9 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar4 = (undefined8 *)0x40;
        lStack_80 = lVar5;
        lStack_70 = lVar8;
        plStack_68 = plVar7;
        lStack_60 = lVar5;
        plStack_58 = plVar9;
        __Znwm();
        *puVar4 = &PTR_FUN_110c138f8;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = lVar5;
        puVar4[4] = lVar8;
        puVar4[5] = plVar7;
        puVar4[6] = lVar5;
        puVar4[7] = plVar9;
        puStack_78 = puVar4;
        FUN_10a10c228(&lStack_80,lVar5 + 0x28,lVar5);
        param_1[1] = (long)puStack_78;
        *param_1 = lStack_80;
        lStack_80 = 0;
        puStack_78 = (undefined8 *)0x0;
        if (plVar9 != (long *)0x0) {
          plVar7 = plVar9 + 1;
          do {
            lVar5 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar1 = plStack_68;
        plVar7 = plVar6;
        if (plStack_68 != (long *)0x0) {
          plVar7 = plStack_68 + 1;
          do {
            lVar5 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          plVar7 = plVar6;
          if (lVar5 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9 + 1;
        do {
          lVar5 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (plVar6 == (long *)0x0) {
        return;
      }
      plVar9 = plVar6 + 1;
      do {
        lVar5 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 != 0) {
        return;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      return;
    }
    lVar8 = param_3[1];
    lVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar6 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  param_1[1] = lVar8;
  *param_1 = lVar5;
  return;
}



/* Entry: 10a6d8b00; end: 10a6d8be3;  */

void FUN_10a6d8b00(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a7080c8(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_28 + 1);
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a6d8be4; end: 10a6d928f;  */

void FUN_10a6d8be4(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  puVar6 = (undefined8 *)0xc8;
  __Znwm();
  *puVar6 = FUN_10a728e2c;
  puVar6[1] = FUN_10a72940c;
  lVar10 = *param_3;
  puVar6[0xd] = param_3[1];
  puVar6[0xc] = lVar10;
  puVar6[0x16] = param_2;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10a709344(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = puVar6[0xc];
  }
  puVar6[0x17] = lVar10;
  *param_1 = lVar9;
  if (lVar10 == 0) {
    FUN_10a00946c(&UNK_10f66dd34);
  }
  else {
    puVar6[0xe] = 0;
    *(undefined1 *)(puVar6 + 0x18) = 0;
    puVar7 = puVar6 + 0xe;
    FUN_10a6d9fd8(puVar7,puVar6);
    if (((ulong)puVar7 & 1) != 0) {
      return;
    }
    puVar6[0x10] = puVar6[0x17];
    lVar9 = puVar6[0xd];
    puVar6[0x12] = puVar6[0xe];
    puVar6[0x11] = lVar9;
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a6d9404(puVar6 + 0x15,puVar6[0x16],puVar6 + 0x10);
    FUN_10a6da07c(puVar6 + 0x14,puVar6 + 0x12,puVar6[0x15]);
    puVar6[0x13] = puVar6[0x14];
    plVar8 = (long *)(puVar6[0x14] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x13] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x18) = 1;
      lVar9 = puVar6[0x13];
      plVar8 = (long *)(lVar9 + 0x10);
      uStack_70 = puVar6[3];
      do {
        lVar10 = *plVar8;
        if (lVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_80 = 0;
            puStack_78 = puVar6;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_80);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar10 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x13];
    if (((uint)*(undefined8 *)(puVar6[0x13] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(plVar8 + 0x15) & 1) != 0) {
        lVar9 = plVar8[0x14];
        lVar10 = plVar8[0x13];
        puVar6[0xf] = plVar8[0x14];
        puVar6[0xe] = lVar10;
        if (lVar9 != 0) {
          plVar1 = (long *)(lVar9 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar2 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        plVar8 = (long *)puVar6[0x14];
        if (plVar8 != (long *)0x0) {
          puVar2 = (ulong *)(plVar8 + 1);
          do {
            uVar11 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar11 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        plVar8 = (long *)puVar6[0x15];
        if (plVar8 != (long *)0x0) {
          puVar2 = (ulong *)(plVar8 + 1);
          do {
            uVar11 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar11 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        plVar8 = (long *)puVar6[0x11];
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            lVar9 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        FUN_10a6da600(&lStack_60,puVar6[0xe]);
        uStack_68 = 0;
        puVar6[10] = lStack_58;
        puVar6[9] = lStack_60;
        puVar6[0xb] = uStack_50;
        lStack_60 = 0;
        lStack_58 = 0;
        uStack_50 = 0;
        FUN_10a6fc658(&uStack_80,&uStack_80,puVar6 + 9);
        if (puVar6[9] != 0) {
          puVar6[10] = puVar6[9];
          __ZdlPv();
        }
        FUN_10a6db2e4(puVar6 + 2,&uStack_80);
        FUN_10a6fc01c(&uStack_80);
        if (lStack_60 != 0) {
          lStack_58 = lStack_60;
          __ZdlPv();
        }
        plVar8 = (long *)puVar6[0xf];
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            lVar9 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = (long *)puVar6[0x12];
        if (plVar8 != (long *)0x0) {
          puVar2 = (ulong *)(plVar8 + 1);
          do {
            uVar11 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar11 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            do {
              uVar11 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar11 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
          }
        }
        func_0x000109d1a1d0(puVar6 + 2);
        plVar8 = (long *)puVar6[0xd];
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 1;
          do {
            lVar9 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        __ZdlPv(puVar6);
        return;
      }
    }
    else {
      func_0x0001092af97c(plVar8 + 0x12);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6d90bc);
  (*pcVar5)();
}



/* Entry: 10a6d9290; end: 10a6d937b;  */

void FUN_10a6d9290(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (((*(char *)(lVar8 + 0xb8) == '\x01') && (*(char *)(lVar8 + 0xb0) == '\x01')) &&
           (*(long *)(lVar8 + 0x98) != 0)) {
          *(long *)(lVar8 + 0xa0) = *(long *)(lVar8 + 0x98);
          __ZdlPv();
        }
        *(undefined8 *)(lVar8 + 0x98) = 0;
        *(undefined8 *)(lVar8 + 0xa0) = 0;
        *(undefined8 *)(lVar8 + 0xa8) = 0;
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *(undefined8 *)(lVar8 + 0xa8) = param_2[2];
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        *(undefined1 *)(lVar8 + 0xb0) = 1;
        *(undefined1 *)(lVar8 + 0xb8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a6d934c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a6d934c:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar4 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 >> 0x21 == 1) {
        FUN_109d1b3c4(plVar4,1,plVar7);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 10a6d937c; end: 10a6d9403;  */

void FUN_10a6d937c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = param_2;
  lVar5 = *(long *)(param_2 + 0x870);
  if (*(long *)(lVar5 + 0x38) == 0) {
    lVar7 = *(long *)(lVar5 + 0x28);
    lVar6 = *(long *)(lVar5 + 0x30);
    param_1[1] = lVar7;
    param_1[2] = lVar6;
    if (lVar6 == 0) goto LAB_10a6d93d0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x40);
    param_1[1] = *(long *)(lVar5 + 0x38);
    param_1[2] = lVar6;
    if (lVar6 == 0) {
      return;
    }
  }
  plVar1 = (long *)(lVar6 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar7 = param_1[1];
LAB_10a6d93d0:
  if (lVar7 != 0) {
    return;
  }
  FUN_10a00946c(&UNK_10f66dd01);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6d93f0);
  (*pcVar4)();
}



/* Entry: 10a6d9404; end: 10a6d9c97;  */

/* WARNING: Removing unreachable block (ram,0x00010a6d9760) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9764) */
/* WARNING: Removing unreachable block (ram,0x00010a6d976c) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9774) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9778) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a6d9404(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long alStack_60 [2];
  long *plStack_50;
  undefined8 *puStack_48;
  
  puVar6 = (undefined8 *)0xa8;
  __Znwm();
  *puVar6 = FUN_10a7289e4;
  puVar6[1] = FUN_10a728d3c;
  lVar15 = *param_3;
  plVar9 = puVar6 + 9;
  puVar6[10] = param_3[1];
  *plVar9 = lVar15;
  puVar6[0x13] = param_2;
  *param_3 = 0;
  param_3[1] = 0;
  puVar7 = (undefined8 *)0xb0;
  __Znwm();
  plVar10 = puVar7 + 1;
  puVar7[2] = 0;
  *plVar10 = 0x200000006;
  *(undefined2 *)(puVar7 + 3) = 4;
  uVar12 = 0;
  uVar17 = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = puVar7 + 3;
  puVar7[0x12] = 0;
  *puVar7 = &PTR_DAT_110c13810;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  *(undefined1 *)(puVar7 + 0x15) = 0;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  puVar6[3] = uVar17;
  puVar6[2] = uVar12;
  puVar6[5] = uVar17;
  puVar6[4] = uVar12;
  puVar6[6] = 0;
  FUN_109d18960(puVar6 + 2,*ppuVar8,0);
  puVar6[7] = puVar7;
  puVar6[8] = puVar7;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = *plVar10 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar18 = puVar6[10];
  lVar16 = *plVar9;
  *param_1 = puVar7;
  *plVar9 = 0;
  puVar6[10] = 0;
  lVar15 = *param_2;
  lVar14 = param_2[1];
  plVar9 = (long *)0x80;
  __Znwm();
  *plVar9 = (long)FUN_10a728278;
  plVar9[1] = (long)FUN_10a728514;
  FUN_10a6fc2f0(plVar9 + 2);
  lVar11 = plVar9[7];
  if (lVar11 != 0) {
    plVar10 = (long *)(lVar11 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6[0x11] = lVar11;
  plVar9[10] = lVar18;
  plVar9[9] = lVar16;
  plVar9[0xb] = lVar15;
  plVar9[0xc] = lVar14;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  *(undefined1 *)(plVar9 + 0xf) = 0;
  alStack_60[0] = 0;
  FUN_109d18960(plVar9 + 2,lVar14,alStack_60);
  if (alStack_60[0] != 0) {
    func_0x0001092af97c(alStack_60);
    goto LAB_10a6d9aac;
  }
  if ((*(byte *)(plVar9 + 0xd) & 1) == 0) {
    puStack_48 = (undefined8 *)plVar9[0xc];
    alStack_60[1] = 0;
    plStack_50 = plVar9;
    (**(code **)*puStack_48)(puStack_48,alStack_60 + 1);
    __ZNSt13exception_ptrD1Ev(alStack_60);
  }
  else {
    __ZNSt13exception_ptrD1Ev(alStack_60);
    FUN_10a6fc1a8(plVar9 + 0xe,plVar9 + 9);
    plVar9[0xc] = plVar9[0xe];
    plVar10 = (long *)(plVar9[0xe] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(plVar9[0xc] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(plVar9 + 0xf) = 1;
      lVar15 = plVar9[0xc];
      plVar10 = (long *)(lVar15 + 0x10);
      puVar7 = (undefined8 *)plVar9[3];
      do {
        lVar14 = *plVar10;
        if (lVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            alStack_60[1] = 0;
            plStack_50 = plVar9;
            puStack_48 = puVar7;
            func_0x000109d1b588(lVar15 + 0x18,alStack_60 + 1);
            *(undefined8 *)(lVar15 + 0x10) = 0;
            goto LAB_10a6d9758;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    lVar15 = plVar9[0xc];
    if (((uint)*(undefined8 *)(plVar9[0xc] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar15 + 0x90);
      goto LAB_10a6d9aac;
    }
    if ((*(byte *)(lVar15 + 0xa8) & 1) == 0) goto LAB_10a6d9aac;
    FUN_10a6fc0e8(plVar9 + 2,lVar15 + 0x98);
    plVar10 = (long *)plVar9[0xc];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar13 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)plVar9[0xe];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar13 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)plVar9[10];
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 1;
      do {
        lVar15 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    func_0x000109d1a1d0(plVar9 + 2);
    __ZdlPv(plVar9);
  }
LAB_10a6d9758:
  puVar6[0x12] = puVar6[0x11];
  plVar9 = (long *)(puVar6[0x11] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = *plVar9 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x14) = 0;
    lVar15 = puVar6[0x12];
    plVar9 = (long *)(lVar15 + 0x10);
    uVar12 = puVar6[3];
    do {
      lVar14 = *plVar9;
      if (lVar14 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          alStack_60[1] = 0;
          plStack_50 = puVar6;
          puStack_48 = (undefined8 *)uVar12;
          func_0x000109d1b588(lVar15 + 0x18,alStack_60 + 1);
          *(undefined8 *)(lVar15 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar14 >> 1 & 1) == 0);
  }
  plVar9 = (long *)puVar6[0x12];
  if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar9 + 0x15) & 1) != 0) {
      lVar15 = plVar9[0x14];
      lVar14 = plVar9[0x13];
      puVar6[0xc] = plVar9[0x14];
      puVar6[0xb] = lVar14;
      if (lVar15 != 0) {
        plVar10 = (long *)(lVar15 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar13 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      puVar6[0xe] = puVar6[0xc];
      puVar6[0xd] = puVar6[0xb];
      if (puVar6[0xc] != 0) {
        plVar9 = (long *)(puVar6[0xc] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar14 = puVar6[0x13];
      lVar15 = *(long *)(lVar14 + 0x10);
      uVar12 = *(undefined8 *)(lVar14 + 8);
      puVar6[0x10] = *(undefined8 *)(lVar14 + 0x10);
      puVar6[0xf] = uVar12;
      if (lVar15 != 0) {
        plVar9 = (long *)(lVar15 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10a6d9d58(alStack_60 + 1,puVar6 + 0xd,puVar6 + 0xf);
      FUN_10a6d9c98(puVar6 + 2,alStack_60 + 1);
      plVar9 = plStack_50;
      if (plStack_50 != (long *)0x0) {
        plVar10 = plStack_50 + 1;
        do {
          lVar15 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = (long *)puVar6[0x10];
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar15 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = (long *)puVar6[0xe];
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar15 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = (long *)puVar6[0xc];
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar15 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = (long *)puVar6[0x11];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar13 & 0x1fffffffc) == 4) {
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar13 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
      plVar9 = (long *)puVar6[10];
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar15 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      __ZdlPv(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(plVar9 + 0x12);
  }
LAB_10a6d9aac:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6d9ab0);
  (*pcVar5)();
}



/* Entry: 10a6d9c98; end: 10a6d9d57;  */

void FUN_10a6d9c98(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar8 = *plVar7;
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    lVar6 = *plVar4;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar8 + 0xa8) == '\x01') {
          FUN_10a37985c(lVar8 + 0x98);
        }
        uVar9 = *param_2;
        *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
        *(undefined8 *)(lVar8 + 0x98) = uVar9;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(lVar8 + 0xa8) = 1;
        *(undefined8 *)(lVar8 + 0x10) = 2;
        FUN_109d1b4dc(lVar8 + 0x18);
        goto LAB_10a6d9d28;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a6d9d28:
      plVar4 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar4 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 0x200000000;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 >> 0x21 == 1) {
        FUN_109d1b3c4(plVar4,1,plVar7);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
      }
      return;
    }
  } while( true );
}



/* Entry: 10a6d9d58; end: 10a6d9fd7;  */

/* WARNING: Removing unreachable block (ram,0x00010a6d9e70) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9e74) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9e7c) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9e84) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9e88) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9ea8) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9eac) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9eb4) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a6d9ec0) */

void FUN_10a6d9d58(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar7 = *param_3;
    if (lVar7 == 0) {
      lVar7 = param_2[1];
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *param_1 = lVar6;
      param_1[1] = lVar7;
    }
    else {
      plVar8 = (long *)param_3[1];
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar6 = *param_2;
      }
      plVar9 = (long *)param_2[1];
      lVar5 = lVar6;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar5 = *param_2;
      }
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar4 = (undefined8 *)0x40;
      lStack_80 = lVar5;
      lStack_70 = lVar7;
      plStack_68 = plVar8;
      lStack_60 = lVar6;
      plStack_58 = plVar9;
      __Znwm();
      *puVar4 = &PTR_FUN_110c13848;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = lVar5;
      puVar4[4] = lVar7;
      puVar4[5] = plVar8;
      puVar4[6] = lVar6;
      puVar4[7] = plVar9;
      lVar6 = 0;
      if (lVar5 != 0) {
        lVar6 = lVar5 + 0x28;
      }
      puStack_78 = puVar4;
      FUN_10a388568(&lStack_80,lVar6,lVar5);
      plVar8 = plStack_58;
      param_1[1] = (long)puStack_78;
      *param_1 = lStack_80;
      puStack_78 = (undefined8 *)0x0;
      lStack_80 = 0;
      if (plStack_58 != (long *)0x0) {
        plVar9 = plStack_58 + 1;
        do {
          lVar6 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar9 = plStack_68 + 1;
        do {
          lVar6 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
  }
  return;
}



/* Entry: 10a6d9fd8; end: 10a6da07b;  */

undefined8 FUN_10a6d9fd8(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x30);
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = lVar6;
  return 0;
}



/* Entry: 10a6da07c; end: 10a6da5ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a6da1d4) */
/* WARNING: Removing unreachable block (ram,0x00010a6da3e4) */
/* WARNING: Removing unreachable block (ram,0x00010a6da194) */
/* WARNING: Removing unreachable block (ram,0x00010a6da328) */

void FUN_10a6da07c(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110c138a8;
  plVar10 = plVar4 + 0x16;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x17] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a7093e4;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x17];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a6da314;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x18];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a6da554:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar8 = plVar4[0x18];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a6da314:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a709580;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a6da550;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a6da3f8:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a6da548;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a6da3f8;
  pcStack_68 = FUN_10a7093e4;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a6da548:
  *param_1 = (long)plVar4;
LAB_10a6da550:
  plStack_80 = (long *)0x0;
  goto LAB_10a6da554;
}



/* Entry: 10a6da600; end: 10a6db2e3;  */

void FUN_10a6da600(undefined8 *param_1,long param_2)

{
  undefined *****pppppuVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined ******ppppppuVar8;
  long *plVar9;
  undefined ******ppppppuVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar16;
  undefined ****ppppuVar17;
  ulong uVar18;
  undefined *****pppppuVar19;
  undefined1 auStack_400 [8];
  undefined *****pppppuStack_3f8;
  undefined *****pppppuStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  undefined1 auStack_3d0 [8];
  undefined *****pppppuStack_3c8;
  undefined *****pppppuStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined *****pppppuStack_3a0;
  ulong uStack_398;
  byte bStack_389;
  undefined8 auStack_388 [2];
  char cStack_371;
  undefined8 auStack_370 [2];
  char cStack_359;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined *****pppppuStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined *****pppppuStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_2a0;
  undefined *****pppppuStack_290;
  undefined8 uStack_288;
  long alStack_280 [2];
  uint auStack_270 [26];
  long lStack_208;
  undefined ****appppuStack_e8 [20];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    FUN_10a00946c(&UNK_10f67046b);
  }
  else {
    FUN_10a349b54(&pppppuStack_3a0);
    uVar16 = uStack_398;
    if (-1 < (char)bStack_389) {
      uVar16 = (ulong)bStack_389;
    }
    if (uVar16 != 0) {
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        ppppppuVar8 = (undefined ******)pppppuStack_3a0;
        if (-1 < (char)bStack_389) {
          ppppppuVar8 = &pppppuStack_3a0;
        }
        param_2 = 1;
        func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f6704b2,0x73,&UNK_10f670556,in_x6,in_x7,
                            ppppppuVar8);
      }
      func_0x00010ad0321c();
      FUN_10a09d9a0(&pppppuStack_290,param_2,0);
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        if (alStack_280[0] < 0) {
          func_0x000107c3192c(&pppppuStack_320,pppppuStack_290,uStack_288);
        }
        else {
          uStack_318 = uStack_288;
          pppppuStack_320 = pppppuStack_290;
          lStack_310 = alStack_280[0];
        }
        ppppppuVar8 = (undefined ******)pppppuStack_320;
        if (-1 < lStack_310) {
          ppppppuVar8 = &pppppuStack_320;
        }
        param_2 = 4;
        func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f6706e6,0x52,&UNK_10f670753,in_x6,in_x7,
                            ppppppuVar8);
        if (lStack_310 < 0) {
          __ZdlPv(pppppuStack_320);
        }
      }
      __ZNKSt3__14__fs10filesystem4path10__filenameEv(&pppppuStack_290);
      if (param_2 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&pppppuStack_290,0x2f);
      }
      FUN_10a09cc04(&pppppuStack_290,&UNK_10f670787,&UNK_10f670799);
      if (alStack_280[0] < 0) {
        func_0x000107c3192c(&pppppuStack_320,pppppuStack_290,uStack_288);
      }
      else {
        uStack_318 = uStack_288;
        pppppuStack_320 = pppppuStack_290;
        lStack_310 = alStack_280[0];
      }
      uVar16 = 0;
      FUN_10ad01a04();
      if ((uVar16 & 1) == 0) {
        if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
          ppppppuVar8 = (undefined ******)pppppuStack_320;
          if (-1 < lStack_310) {
            ppppppuVar8 = &pppppuStack_320;
          }
          func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f6706e6,0x59,&UNK_10f67079a,in_x6,in_x7,
                              ppppppuVar8);
        }
        uVar16 = 0;
        FUN_10ad00cf8();
        if ((uVar16 & 1) == 0) {
          if ((uRam000000011330a9e8 & 1) != 0) {
            uVar7 = 0;
            uVar14 = 0x5b;
            uVar11 = 1;
            puVar15 = &UNK_10f6707c6;
            goto LAB_10a6da81c;
          }
        }
        else if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
          uVar14 = 0x5d;
          uVar11 = 4;
          uVar7 = 1;
          puVar15 = &UNK_10f6707fa;
LAB_10a6da81c:
          ppppppuVar8 = (undefined ******)pppppuStack_320;
          if (-1 < lStack_310) {
            ppppppuVar8 = &pppppuStack_320;
          }
          func_0x00010ae06f08(uVar7,uVar11,&UNK_10f66dd79,&UNK_10f6706e6,uVar14,puVar15,in_x6,in_x7,
                              ppppppuVar8);
        }
      }
      func_0x000107c2b054(auStack_358,&UNK_10f66de00);
      FUN_10ad016b8(&pppppuStack_340,&pppppuStack_320,auStack_358);
      uStack_3b8 = uStack_338;
      pppppuStack_3c0 = pppppuStack_340;
      lStack_3b0 = lStack_330;
      uStack_338 = 0;
      lStack_330 = 0;
      pppppuStack_340 = (undefined *****)0x0;
      if (cStack_341 < '\0') {
        __ZdlPv(auStack_358[0]);
      }
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        if (lStack_3b0 < 0) {
          func_0x000107c3192c(&pppppuStack_340,pppppuStack_3c0,uStack_3b8);
        }
        else {
          uStack_338 = uStack_3b8;
          pppppuStack_340 = pppppuStack_3c0;
          lStack_330 = lStack_3b0;
        }
        ppppppuVar8 = (undefined ******)pppppuStack_340;
        if (-1 < lStack_330) {
          ppppppuVar8 = &pppppuStack_340;
        }
        func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f6706e6,0x62,&UNK_10f670832,in_x6,in_x7,
                            ppppppuVar8);
        if (lStack_330 < 0) {
          __ZdlPv(pppppuStack_340);
        }
      }
      if (lStack_310 < 0) {
        __ZdlPv(pppppuStack_320);
      }
      if (alStack_280[0] < 0) {
        __ZdlPv(pppppuStack_290);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppppuStack_3c0,&UNK_10f67058e,4);
      FUN_10a6fc444(auStack_3d0,&pppppuStack_3c0);
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        if (lStack_3b0 < 0) {
          func_0x000107c3192c(&pppppuStack_290,pppppuStack_3c0,uStack_3b8);
        }
        else {
          uStack_288 = uStack_3b8;
          pppppuStack_290 = pppppuStack_3c0;
          alStack_280[0] = lStack_3b0;
        }
        ppppppuVar8 = (undefined ******)pppppuStack_290;
        if (-1 < alStack_280[0]) {
          ppppppuVar8 = &pppppuStack_290;
        }
        func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f6704b2,0x79,&UNK_10f670593,in_x6,in_x7,
                            ppppppuVar8);
        if (alStack_280[0] < 0) {
          __ZdlPv(pppppuStack_290);
        }
      }
      FUN_10a09d9a0(&pppppuStack_3f0,&pppppuStack_3a0,0);
      uVar16 = (ulong)(char)bStack_389;
      if ((long)uVar16 < 0) {
        uVar18 = uStack_398;
        ppppppuVar8 = (undefined ******)pppppuStack_3a0;
        if (8 < uStack_398) goto LAB_10a6daa10;
      }
      else if (8 < bStack_389) {
        uVar18 = uVar16;
        ppppppuVar8 = &pppppuStack_3a0;
LAB_10a6daa10:
        if (*(long *)((long)ppppppuVar8 + (uVar18 - 8)) == 0x746e65746e6f432f) {
          if (-1 < (char)bStack_389) {
            uStack_398 = uVar16;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                    (&pppppuStack_290,&pppppuStack_3a0,0,uStack_398 - 8,&pppppuStack_340);
          if (lStack_3e0 < 0) {
            __ZdlPv(pppppuStack_3f0);
          }
          uStack_3e8 = uStack_288;
          pppppuStack_3f0 = pppppuStack_290;
          lStack_3e0 = alStack_280[0];
        }
      }
      FUN_10a6fc444(auStack_400,&pppppuStack_3f0);
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        if (lStack_3e0 < 0) {
          func_0x000107c3192c(&pppppuStack_290,pppppuStack_3f0,uStack_3e8);
        }
        else {
          uStack_288 = uStack_3e8;
          pppppuStack_290 = pppppuStack_3f0;
          alStack_280[0] = lStack_3e0;
        }
        ppppppuVar8 = (undefined ******)pppppuStack_290;
        if (-1 < alStack_280[0]) {
          ppppppuVar8 = &pppppuStack_290;
        }
        if (lStack_3b0 < 0) {
          func_0x000107c3192c(&pppppuStack_320,pppppuStack_3c0,uStack_3b8);
        }
        else {
          uStack_318 = uStack_3b8;
          pppppuStack_320 = pppppuStack_3c0;
          lStack_310 = lStack_3b0;
        }
        ppppppuVar10 = (undefined ******)pppppuStack_320;
        if (-1 < lStack_310) {
          ppppppuVar10 = &pppppuStack_320;
        }
        func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f6704b2,0x8c,&UNK_10f6705c0,in_x6,in_x7,
                            ppppppuVar8,ppppppuVar10);
        if (lStack_310 < 0) {
          __ZdlPv(pppppuStack_320);
        }
        if (alStack_280[0] < 0) {
          __ZdlPv(pppppuStack_290);
        }
      }
      if (lStack_3e0 < 0) {
        func_0x000107c3192c(&pppppuStack_290,pppppuStack_3f0,uStack_3e8);
      }
      else {
        uStack_288 = uStack_3e8;
        pppppuStack_290 = pppppuStack_3f0;
        alStack_280[0] = lStack_3e0;
      }
      if (lStack_3b0 < 0) {
        func_0x000107c3192c(&pppppuStack_320,pppppuStack_3c0,uStack_3b8);
      }
      else {
        uStack_318 = uStack_3b8;
        pppppuStack_320 = pppppuStack_3c0;
        lStack_310 = lStack_3b0;
      }
      ppppppuVar8 = &pppppuStack_290;
      FUN_10ad0220c(ppppppuVar8,&pppppuStack_320,1);
      if (lStack_310 < 0) {
        __ZdlPv(pppppuStack_320);
      }
      if (alStack_280[0] < 0) {
        __ZdlPv(pppppuStack_290);
      }
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        pcVar2 = "success";
        if ((int)ppppppuVar8 == 0) {
          pcVar2 = "failed";
        }
        func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f6704b2,0x8f,&UNK_10f6705f0,in_x6,in_x7,pcVar2
                           );
      }
      if (((ulong)ppppppuVar8 & 1) == 0) {
        if ((uRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f66dd79,&UNK_10f6704b2,0x92,&UNK_10f67061c);
        }
        FUN_10a00946c(&UNK_10f670652);
      }
      else {
        if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f6704b2,0x96,&UNK_10f67066b);
        }
        if (lStack_3b0 < 0) {
          func_0x000107c3192c(&pppppuStack_340,pppppuStack_3c0,uStack_3b8);
        }
        else {
          uStack_338 = uStack_3b8;
          pppppuStack_340 = pppppuStack_3c0;
          lStack_330 = lStack_3b0;
        }
        func_0x000107c28038(&pppppuStack_290,&pppppuStack_340,4);
        if (lStack_208 == 0) {
          iVar6 = (int)&pppppuStack_340;
          FUN_10ad01a04();
          if ((uRam000000011330a9e8 & 1) != 0) {
            ppppppuVar8 = (undefined ******)pppppuStack_340;
            if (-1 < lStack_330) {
              ppppppuVar8 = &pppppuStack_340;
            }
            func_0x00010ae06f08(0,1,&UNK_10f66dd79,&UNK_10f670952,0xab,&UNK_10f6709dc,in_x6,in_x7,
                                ppppppuVar8);
          }
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_388,&UNK_10f6372d3,&pppppuStack_340);
          FUN_10a012db0(auStack_370,auStack_388,&UNK_10f670a09);
          pcVar2 = "yes";
          if (iVar6 == 0) {
            pcVar2 = "no";
          }
          FUN_10a012db0(auStack_358,auStack_370,pcVar2);
          FUN_10a012db0(&pppppuStack_320,auStack_358,&DAT_10f684600);
          FUN_10a0029c0(&pppppuStack_320);
        }
        else {
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE
                    (&pppppuStack_290,0,2);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv
                    (&pppppuStack_320,&pppppuStack_290);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE
                    (&pppppuStack_290,0,0);
          if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
            func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f670952,0xb3,&UNK_10f670a14,in_x6,in_x7,
                                uStack_2a0);
          }
          FUN_10a188694(param_1,uStack_2a0);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl
                    (&pppppuStack_290,*param_1,uStack_2a0);
          plVar9 = alStack_280;
          func_0x000107c27ffc();
          if (plVar9 == (long *)0x0) {
            __ZNSt3__18ios_base5clearEj
                      ((long)&pppppuStack_290 + (long)pppppuStack_290[-3],
                       *(uint *)((long)auStack_270 + (long)pppppuStack_290[-3]) | 4);
          }
          if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
            func_0x00010ae06f08(1,4,&UNK_10f66dd79,&UNK_10f670952,0xb9,&UNK_10f670a3e);
          }
          pppppuStack_290 = (undefined *****)&PTR_DAT_11087cf48;
          appppuStack_e8[0] = (undefined ****)&PTR_DAT_11087cf70;
          func_0x000107c28018(alStack_280);
          ppuVar12 = &PTR_PTR_11087cf88;
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&pppppuStack_290);
          ppppppuVar8 = (undefined ******)appppuStack_e8;
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
          if (lStack_330 < 0) {
            ppppppuVar8 = (undefined ******)pppppuStack_340;
            __ZdlPv();
          }
          if ((undefined ******)pppppuStack_3f8 != (undefined ******)0x0) {
            ppppppuVar10 = (undefined ******)(pppppuStack_3f8 + 1);
            do {
              pppppuVar19 = *ppppppuVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
              if (bVar4) {
                *ppppppuVar10 = (undefined *****)((long)pppppuVar19 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppuVar19 == (undefined *****)0x0) {
              (*(code *)(*pppppuStack_3f8)[2])(pppppuStack_3f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppuVar8 = (undefined ******)pppppuStack_3f8;
            }
          }
          if (lStack_3e0 < 0) {
            ppppppuVar8 = (undefined ******)pppppuStack_3f0;
            __ZdlPv();
          }
          if ((undefined ******)pppppuStack_3c8 != (undefined ******)0x0) {
            ppppppuVar10 = (undefined ******)(pppppuStack_3c8 + 1);
            do {
              pppppuVar19 = *ppppppuVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
              if (bVar4) {
                *ppppppuVar10 = (undefined *****)((long)pppppuVar19 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppuVar19 == (undefined *****)0x0) {
              (*(code *)(*pppppuStack_3c8)[2])(pppppuStack_3c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppuVar8 = (undefined ******)pppppuStack_3c8;
            }
          }
          if (lStack_3b0 < 0) {
            ppppppuVar8 = (undefined ******)pppppuStack_3c0;
            __ZdlPv();
          }
          if ((char)bStack_389 < '\0') {
            ppppppuVar8 = (undefined ******)pppppuStack_3a0;
            __ZdlPv();
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return;
          }
          ___stack_chk_fail();
          ppuVar13 = ppuVar12;
          if (lStack_310 < 0) {
            __ZdlPv(pppppuStack_320);
          }
          if (cStack_341 < '\0') {
            __ZdlPv(auStack_358[0]);
          }
          if (cStack_359 < '\0') {
            __ZdlPv(auStack_370[0]);
          }
          if (cStack_371 < '\0') {
            __ZdlPv(auStack_388[0]);
          }
          func_0x000107c2803c(&pppppuStack_290);
          if (lStack_330 < 0) {
            __ZdlPv(pppppuStack_340);
          }
          func_0x00010a707f94(auStack_400);
          if (lStack_3e0 < 0) {
            __ZdlPv(pppppuStack_3f0);
          }
          if ((int)ppuVar12 != 1) {
            func_0x00010a707f94(auStack_3d0);
            if (lStack_3b0 < 0) {
              __ZdlPv(pppppuStack_3c0);
            }
            if ((char)bStack_389 < '\0') {
              __ZdlPv(pppppuStack_3a0);
            }
            do {
              __Unwind_Resume();
            } while ((int)ppuVar13 == 0);
            func_0x000104bd46a0();
            ppppppuVar8 = ppppppuVar8 + 6;
            FUN_10a709990(*ppppppuVar8);
            pppppuVar19 = *ppppppuVar8;
            *ppppppuVar8 = (undefined *****)0x0;
            if (pppppuVar19 == (undefined *****)0x0) {
              return;
            }
            pppppuVar1 = pppppuVar19 + 1;
            do {
              ppppuVar17 = *pppppuVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
              if (bVar4) {
                *pppppuVar1 = ppppuVar17 + -0x40000000;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((ulong)ppppuVar17 >> 0x21 == 1) {
              FUN_109d1b3c4(pppppuVar19,1,ppppppuVar8);
              do {
                ppppuVar17 = *pppppuVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
                if (bVar4) {
                  *pppppuVar1 = (undefined ****)((long)ppppuVar17 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((pppppuVar19 != (undefined *****)0x0) && (ppppuVar17 == (undefined ****)0x1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(*pppppuVar19)[1])(pppppuVar19);
                return;
              }
            }
            return;
          }
          ___cxa_begin_catch();
          if ((uRam000000011330a9e8 & 1) != 0) {
            ppppppuVar10 = ppppppuVar8;
            (*(code *)(*ppppppuVar8)[2])();
            func_0x00010ae06f08(0,1,&UNK_10f66dd79,&UNK_10f6704b2,0x9d,&UNK_10f6706b0,in_x6,in_x7,
                                ppppppuVar10);
          }
          ppppppuVar10 = (undefined ******)0x28;
          __Znwm();
          pppppuStack_320 = (undefined *****)ppppppuVar10;
          lStack_310 = -0x7fffffffffffffd8;
          uStack_318 = 0x22;
          *(undefined2 *)(ppppppuVar10 + 4) = 0x203a;
          ppppppuVar10[1] = (undefined *****)0x6572706d6f63206f;
          *ppppppuVar10 = (undefined *****)0x742064656c696146;
          ppppppuVar10[3] = (undefined *****)0x656c646e7542656d;
          ppppppuVar10[2] = (undefined *****)0x69746e7552207373;
          *(undefined1 *)((long)ppppppuVar10 + 0x22) = 0;
          (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
          FUN_10a012db0(&pppppuStack_290,&pppppuStack_320,ppppppuVar8);
          FUN_10a0029c0(&pppppuStack_290);
        }
      }
      goto LAB_10a6db264;
    }
  }
  FUN_10a00946c(&UNK_10f67048e);
LAB_10a6db264:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6db268);
  (*pcVar5)();
}



/* Entry: 10a6db2e4; end: 10a6db323;  */

void FUN_10a6db2e4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a709990(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a6db324; end: 10a6db407;  */

void FUN_10a6db324(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a709b34(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_28 + 1);
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a6db408; end: 10a6db49f;  */

undefined1  [16] FUN_10a6db408(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x15;
  auVar1._0_8_ = &UNK_10f63f181;
  return auVar1;
}



/* Entry: 10a6db4a0; end: 10a6db51f;  */

void FUN_10a6db4a0(undefined8 param_1)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  FUN_10a003e74(param_1,&UNK_10f66ddbd,0x11);
  puStack_68 = &UNK_10f670a6f;
  uStack_60 = 0xffffffff00000001;
  uStack_58 = 0xffffffff;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0xffffffff;
  FUN_10a70ac5c(param_1,&puStack_68,0x19);
  FUN_10a70ad4c();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a6db520; end: 10a6dbb8f;  */

void FUN_10a6db520(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f66ddbd,0x11);
  func_0x000109887da8(appuStack_c8,&UNK_10f63f181,0x15);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c127e0;
  pppuVar2 = (undefined8 ***)&UNK_10f66de00;
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
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c127e0;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6dbb70;
    FUN_10a054dac(param_1,&UNK_10f66ddcf,FUN_10a70ae08,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6dbb70;
    FUN_10a054dac(param_1,&DAT_10f647b18,FUN_10a70b260,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6dbb70;
    FUN_10a054dac(param_1,&DAT_10f633e91,FUN_10a70b318,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6dbb70;
    FUN_10a054dac(param_1,&UNK_10f66dddf,FUN_10a70b42c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6dbb70;
    FUN_10a054dac(param_1,&UNK_10f66ddec,FUN_10a70da40,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f148,FUN_10a70fc10,FUN_10a70fcf0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66de01,FUN_10a70fe54,FUN_10a70ff44);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66de0b,FUN_10a710aec,FUN_10a710c28);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66de16,FUN_10a710e2c,FUN_10a710ee4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66de28,FUN_10a711014,FUN_10a7110cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"appId",FUN_10a7111d8,FUN_10a7112cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66de2d,FUN_10a7114f4,FUN_10a7115e8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66de38,FUN_10a7116a0,FUN_10a71175c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66de47,FUN_10a711840,FUN_10a711974);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f63f181,0x15);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f63f181;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50._0_4_ = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&DAT_10f68efec;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50._0_4_ = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_10a6dbb90(param_1,&ppuStack_a0,FUN_10a6dbc60);
    func_0x00010a004064();
    func_0x00010a004064(param_1);
    FUN_10a003e74(param_1,&UNK_10f66ddbd,0x11);
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f66de57;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x200000019;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_10a6dbb90(param_1,&ppuStack_a0,0x10a6dbc6c);
    func_0x00010a004064();
    return;
  }
LAB_10a6dbb70:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6dbb74);
  (*pcVar6)();
}



/* Entry: 10a6dbb90; end: 10a6dbc5f;  */

undefined *** FUN_10a6dbb90(undefined ***param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  undefined1 auStack_f8 [8];
  long *plStack_f0;
  undefined1 uStack_e1;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)pppuVar7 & 1) == 0) {
    pcStack_78 = FUN_10a711b78;
    ppuStack_70 = &PTR_FUN_110c13a38;
    uStack_68 = param_3;
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6dbc5c);
      (*pcVar5)();
    }
    FUN_10a0544d8(param_1,*param_2,&pcStack_78,0,param_1[3] + -1);
    pppuVar7 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  pppuVar6 = (undefined ***)0x110;
  __Znwm();
  pppuVar11 = pppuVar6 + 1;
  *pppuVar11 = (undefined **)0x0;
  pppuVar6[2] = (undefined **)0x0;
  pppuVar9 = pppuVar6 + 3;
  *pppuVar9 = &PTR_FUN_110c11648;
  pppuVar6[5] = (undefined **)0x0;
  pppuVar6[4] = (undefined **)0x0;
  *pppuVar6 = &PTR_FUN_110c13b28;
  pppuVar6[7] = (undefined **)0x0;
  pppuVar6[6] = (undefined **)0x0;
  pppuVar6[8] = (undefined **)pppuVar7;
  pppuVar6[10] = (undefined **)0x0;
  pppuVar6[9] = (undefined **)0x0;
  pppuVar6[0x10] = (undefined **)0x0;
  pppuVar6[0xf] = (undefined **)0x0;
  pppuVar6[0x12] = (undefined **)0x0;
  pppuVar6[0x11] = (undefined **)0x0;
  pppuVar6[0x14] = (undefined **)0x0;
  pppuVar6[0x13] = (undefined **)0x0;
  *(undefined1 *)(pppuVar6 + 0x18) = 0;
  *(undefined1 *)(pppuVar6 + 0x19) = 0;
  *(undefined1 *)(pppuVar6 + 0x1c) = 0;
  pppuVar6[0xc] = (undefined **)0x0;
  pppuVar6[0xb] = (undefined **)0x0;
  *(undefined8 *)((long)pppuVar6 + 0x6c) = 0;
  *(undefined8 *)((long)pppuVar6 + 100) = 0;
  *(undefined1 *)(pppuVar6 + 0x15) = 0;
  *(undefined4 *)(pppuVar6 + 0x1d) = 1;
  pppuVar6[0x1e] = (undefined **)0x0;
  pppuVar6[0x1f] = (undefined **)0x0;
  ppuVar10 = pppuVar7[300];
  uStack_e1 = 6;
  FUN_10a6f3364(auStack_f8,pppuVar7,&uStack_e1,&DAT_10f66f8a2);
  FUN_10a6dfd14(pppuVar6 + 0x20,ppuVar10,auStack_f8);
  if (plStack_f0 != (long *)0x0) {
    plVar1 = plStack_f0 + 1;
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
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
    }
  }
  *extraout_x8 = pppuVar9;
  extraout_x8[1] = pppuVar6;
  pppuVar7 = (undefined ***)pppuVar6[7];
  if (pppuVar7 == (undefined ***)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar4) {
        *pppuVar11 = (undefined **)((long)*pppuVar11 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppuVar2 = pppuVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar4) {
        *pppuVar2 = (undefined **)((long)*pppuVar2 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppuVar6[6] = (undefined **)pppuVar9;
    pppuVar6[7] = (undefined **)pppuVar6;
  }
  else {
    if (pppuVar7[1] != (undefined **)0xffffffffffffffff) {
      return pppuVar7;
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar4) {
        *pppuVar11 = (undefined **)((long)*pppuVar11 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppuVar2 = pppuVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar4) {
        *pppuVar2 = (undefined **)((long)*pppuVar2 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pppuVar6[6] = (undefined **)pppuVar9;
    pppuVar6[7] = (undefined **)pppuVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    ppuVar10 = *pppuVar11;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
    if (bVar4) {
      *pppuVar11 = (undefined **)((long)ppuVar10 + -1);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (ppuVar10 != (undefined **)0x0) {
    return pppuVar7;
  }
  (*(code *)(*pppuVar6)[2])(pppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppuVar6);
  return pppuVar6;
}



/* Entry: 10a6dbc60; end: 10a6dbc77;  */

void FUN_10a6dbc60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 uStack_61;
  
  plVar4 = (long *)0x110;
  __Znwm();
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar4[2] = 0;
  plVar6 = plVar4 + 3;
  *plVar6 = (long)&PTR_FUN_110c11648;
  plVar4[5] = 0;
  plVar4[4] = 0;
  *plVar4 = (long)&PTR_FUN_110c13b28;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[8] = param_2;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[0x12] = 0;
  plVar4[0x11] = 0;
  plVar4[0x14] = 0;
  plVar4[0x13] = 0;
  *(undefined1 *)(plVar4 + 0x18) = 0;
  *(undefined1 *)(plVar4 + 0x19) = 0;
  *(undefined1 *)(plVar4 + 0x1c) = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0;
  *(undefined8 *)((long)plVar4 + 100) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *(undefined4 *)(plVar4 + 0x1d) = 1;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  uVar7 = *(undefined8 *)(param_2 + 0x960);
  uStack_61 = 6;
  FUN_10a6f3364(auStack_78,param_2,&uStack_61,&DAT_10f66f8a2);
  FUN_10a6dfd14(plVar4 + 0x20,uVar7,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  if (plVar4[7] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[6] = (long)plVar6;
    plVar4[7] = (long)plVar4;
  }
  else {
    if (*(long *)(plVar4[7] + 8) != -1) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[6] = (long)plVar6;
    plVar4[7] = (long)plVar4;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar5 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 10a6dbc78; end: 10a6dbd83;  */

long FUN_10a6dbc78(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  FUN_10a711cf8(param_1 + 0x88);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x00010a052168(param_1 + 0x10);
  }
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



/* Entry: 10a6dbd84; end: 10a6dbd87;  */

undefined8 * FUN_10a6dbd84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c11648;
  func_0x00010a711e00(param_1 + 0x1d);
  func_0x00010a711da8(param_1 + 0x1b);
  if ((*(char *)(param_1 + 0x19) == '\x01') && (*(char *)((long)param_1 + 199) < '\0')) {
    __ZdlPv(param_1[0x16]);
  }
  if ((*(char *)(param_1 + 0x15) == '\x01') && (*(char *)((long)param_1 + 0xa7) < '\0')) {
    __ZdlPv(param_1[0x12]);
  }
  FUN_10a0e3194(param_1 + 0x10);
  func_0x00010a711cf8(param_1 + 0xe);
  func_0x00010a711d50(param_1 + 0xc);
  FUN_10a6fc9e4(param_1 + 9);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6dbd88; end: 10a6dbd9b;  */

void FUN_10a6dbd88(void)

{
  func_0x00010a6dbcc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6dbd9c; end: 10a6dbe8b;  */

void FUN_10a6dbd9c(long param_1,undefined8 *param_2)

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
  plVar5 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
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



/* Entry: 10a6dbe8c; end: 10a6dbe9b;  */

void FUN_10a6dbe8c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x90);
  cVar2 = *(char *)(param_1 + 0xa8);
  if (cVar2 == *(char *)(param_2 + 3)) {
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
                (puVar1);
      return;
    }
  }
  else if (cVar2 == '\0') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(puVar1,*param_2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      *(undefined8 *)(param_1 + 0xa0) = param_2[2];
      *(undefined8 *)(param_1 + 0x98) = uVar4;
      *puVar1 = uVar3;
    }
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  else {
    if (*(char *)(param_1 + 0xa7) < '\0') {
      __ZdlPv(*puVar1);
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



/* Entry: 10a6dbe9c; end: 10a6dbf17;  */

void FUN_10a6dbe9c(long param_1,undefined8 *param_2)

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
  plVar5 = *(long **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = uVar7;
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
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



/* Entry: 10a6dbf18; end: 10a6dbf9f;  */

/* WARNING: Removing unreachable block (ram,0x00010a6dd28c) */
/* WARNING: Removing unreachable block (ram,0x00010a6dc348) */

void FUN_10a6dbf18(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long *param_4,
                  undefined8 param_5,undefined8 *param_6,long *param_7,long *param_8,
                  undefined8 *param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  undefined8 uVar32;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  char cStack_1c9;
  char cStack_1c8;
  ulong uStack_1c0;
  long *plStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined4 uStack_30;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  if ((int)param_4[2] != 2) {
    *param_3 = 0;
    param_3[0x70] = 0;
    return;
  }
  if (*param_4 != 0) {
    FUN_10a038be8(&puStack_40,*param_4 + 0x110);
    FUN_10a038dcc(param_3,&puStack_40,0);
    puStack_28 = (undefined1 *)&puStack_40;
    FUN_10a050344(&puStack_28);
    return;
  }
  plVar29 = (long *)&UNK_10f66de73;
  FUN_10a00946c();
  if (*(uint *)(param_4 + 2) != 0xffffffff) {
    puStack_28 = &uStack_29;
    (*(code *)(&PTR_FUN_110c132f8)[*(uint *)(param_4 + 2)])(plVar29,&puStack_28);
    return;
  }
  FUN_10a0d459c();
  pcStack_38 = FUN_10a6dbfa0;
  puVar13 = (undefined8 *)0x708;
  puStack_40 = &stack0xffffffffffffffe0;
  __Znwm();
  *puVar13 = FUN_10a72b114;
  puVar13[1] = FUN_10a72d460;
  puVar22 = puVar13 + 0xa0;
  *(undefined4 *)(puVar13 + 0xe0) = uStack_30;
  puVar13[0xdb] = param_4;
  FUN_10a1ccb30(puVar22,param_5);
  puVar1 = puVar13 + 0xc2;
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_6,param_6[1]);
  }
  else {
    uVar23 = *param_6;
    puVar13[0xc3] = param_6[1];
    *puVar1 = uVar23;
    puVar13[0xc4] = param_6[2];
  }
  plVar17 = puVar13 + 199;
  lVar24 = *param_7;
  puVar13[0xd8] = param_7[1];
  puVar13[0xd7] = lVar24;
  *param_7 = 0;
  param_7[1] = 0;
  lVar24 = *param_8;
  puVar13[200] = param_8[1];
  *plVar17 = lVar24;
  *param_8 = 0;
  param_8[1] = 0;
  uVar23 = *param_9;
  puVar13[0xd4] = param_9[1];
  puVar13[0xd3] = uVar23;
  *param_9 = 0;
  param_9[1] = 0;
  FUN_10a6fcf4c(puVar13 + 0x65,param_10);
  plVar2 = puVar13 + 0xac;
  FUN_10a1ccb30(plVar2,puStack_28);
  plVar31 = puVar13 + 0x2d;
  FUN_10a711e58(puVar13 + 2);
  lVar24 = puVar13[7];
  if (lVar24 != 0) {
    plVar30 = (long *)(lVar24 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar11) {
        *plVar30 = *plVar30 + 4;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  *plVar29 = lVar24;
  puVar13[9] = 0;
  *(undefined1 *)((long)puVar13 + 0x704) = 0;
  puVar14 = puVar13 + 9;
  FUN_10a6de354(puVar14,puVar13);
  if (((ulong)puVar14 & 1) != 0) {
    return;
  }
  puVar14 = puVar13 + 0x74;
  plVar29 = puVar13 + 0xc5;
  plVar30 = puVar13 + 0xde;
  *plVar30 = puVar13[9];
  lVar24 = puVar13[0xd7];
  if (lVar24 == 0) {
    *plVar29 = 0;
    puVar13[0xc6] = 0;
  }
  else {
    puVar13[0xc5] = *(undefined8 *)(lVar24 + 0xe0);
    lVar24 = *(long *)(lVar24 + 0xe8);
    puVar13[0xc6] = lVar24;
    if (lVar24 != 0) {
      plVar27 = (long *)(lVar24 + 8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *plVar27 = *plVar27 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  FUN_10a7d2014(puVar14,plVar29);
  puVar13[0xcb] = 0;
  puVar13[0xcc] = 0;
  if (*plVar29 != 0) {
    FUN_10a7cfeec(&uStack_1c0,puVar13[0xdb],plVar29);
    plVar29 = plStack_1b8;
    uVar25 = uStack_1c0;
    uStack_1c0 = 0;
    plStack_1b8 = (long *)0x0;
    plVar27 = (long *)puVar13[0xcc];
    puVar13[0xcc] = plVar29;
    puVar13[0xcb] = uVar25;
    if (plVar27 != (long *)0x0) {
      plVar29 = plVar27 + 1;
      do {
        lVar24 = *plVar29;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar11) {
          *plVar29 = lVar24 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
    plVar29 = plStack_1b8;
    if (plStack_1b8 != (long *)0x0) {
      plVar27 = plStack_1b8 + 1;
      do {
        lVar24 = *plVar27;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *plVar27 = lVar24 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
      }
    }
  }
  puVar15 = (ulong *)puVar13[0xdb];
  FUN_10a6de3f8(puVar13 + 0xcd);
  puVar3 = puVar13 + 0xbc;
  if (*(char *)(puVar13 + 0xa3) == '\x01') {
    if (*(char *)((long)puVar13 + 0x517) < '\0') {
      puVar15 = puVar3;
      func_0x000107c3192c(puVar3,puVar13[0xa0],puVar13[0xa1]);
    }
    else {
      puVar13[0xbd] = puVar13[0xa1];
      *puVar3 = *puVar22;
      puVar13[0xbe] = puVar13[0xa2];
    }
  }
  else {
    *puVar3 = 0;
    puVar13[0xbd] = 0;
    puVar13[0xbe] = 0;
  }
  uVar25 = puVar13[0xbd];
  if (-1 < (char)*(byte *)((long)puVar13 + 0x5f7)) {
    uVar25 = (ulong)*(byte *)((long)puVar13 + 0x5f7);
  }
  if (uVar25 == 0) {
    uVar23 = 0xc;
    if (*(int *)(puVar13 + 0xe0) != 0) {
      uVar23 = 0x1a;
    }
    puVar15 = (ulong *)puVar13[0xcd];
    FUN_10a6de474(&uStack_1c0,puVar15,uVar23);
    if (*(char *)((long)puVar13 + 0x5f7) < '\0') {
      puVar15 = (ulong *)*puVar3;
      __ZdlPv();
    }
    puVar13[0xbd] = plStack_1b8;
    *puVar3 = uStack_1c0;
    puVar13[0xbe] = lStack_1b0;
  }
  plVar29 = puVar13 + 0x49;
  if (((double)puVar13[0x77] == 0.0) && ((double)puVar13[0x78] == 0.0)) {
    puVar15 = (ulong *)puVar13[0xd3];
    if ((puVar15 != (ulong *)0x0) && ((*(byte *)(puVar13 + 0x73) & 1) == 0)) {
      FUN_10a03867c(puVar13 + 9);
      FUN_10a078cd0(plVar31,plVar30,puVar13 + 9);
      puVar13[0x49] = *plVar31;
      plVar27 = (long *)(*plVar31 + 8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar11) {
          *plVar27 = *plVar27 + 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (((uint)*(undefined8 *)(*plVar29 + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)((long)puVar13 + 0x704) = 1;
        lVar28 = puVar13[0x49];
        plVar27 = (long *)(lVar28 + 0x10);
        lVar24 = puVar13[3];
        do {
          lVar26 = *plVar27;
          if (lVar26 == 0) {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar11) {
              *plVar27 = 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
            if (cVar10 == '\0') goto LAB_10a6dd39c;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar26 >> 1 & 1) == 0);
      }
      lVar24 = *plVar29;
      if (((uint)*(undefined8 *)(*plVar29 + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(lVar24 + 0x90);
        goto LAB_10a6dda58;
      }
      if ((*(byte *)(lVar24 + 0xa8) & 1) == 0) goto LAB_10a6dda58;
      FUN_10a6de5fc(puVar13 + 0x65,*(undefined8 *)(lVar24 + 0x98));
      plVar27 = (long *)*plVar29;
      if (plVar27 != (long *)0x0) {
        puVar15 = (ulong *)(plVar27 + 1);
        do {
          uVar25 = *puVar15;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
          if (bVar11) {
            *puVar15 = uVar25 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar25 & 0x1fffffffc) == 4) {
          do {
            uVar25 = *puVar15;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
            if (bVar11) {
              *puVar15 = uVar25 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar25 - 1 == 0) {
            (**(code **)(*plVar27 + 8))();
          }
        }
      }
      plVar27 = (long *)*plVar31;
      if (plVar27 != (long *)0x0) {
        puVar15 = (ulong *)(plVar27 + 1);
        do {
          uVar25 = *puVar15;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
          if (bVar11) {
            *puVar15 = uVar25 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar25 & 0x1fffffffc) == 4) {
          do {
            uVar25 = *puVar15;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
            if (bVar11) {
              *puVar15 = uVar25 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar25 - 1 == 0) {
            (**(code **)(*plVar27 + 8))();
          }
        }
      }
      puVar15 = (ulong *)puVar13[9];
      if (puVar15 != (ulong *)0x0) {
        puVar21 = puVar15 + 1;
        do {
          uVar25 = *puVar21;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
          if (bVar11) {
            *puVar21 = uVar25 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar25 & 0x1fffffffc) == 4) {
          do {
            uVar25 = *puVar21;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
            if (bVar11) {
              *puVar21 = uVar25 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar25 - 1 == 0) {
            (**(code **)(*puVar15 + 8))();
          }
        }
      }
    }
    if (*(char *)(puVar13 + 0x73) == '\x01') {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        puVar15 = (ulong *)0x1;
        func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xb1,&UNK_10f66e087);
        if ((*(byte *)(puVar13 + 0x73) & 1) == 0) goto LAB_10a6dda58;
      }
      puVar13[0x78] = puVar13[0x6b];
      puVar13[0x77] = puVar13[0x6a];
      puVar13[0x79] = puVar13[0x6d];
    }
    else if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar15 = (ulong *)0x1;
      func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xb7,&UNK_10f66e0d0);
    }
  }
  puVar4 = puVar13 + 0xb3;
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar13[0xdf] = puVar15;
  (**(code **)(*(long *)puVar13[0xcd] + 0x10))(puVar4,(long *)puVar13[0xcd],0x10);
  lVar28 = *(long *)(puVar13[0xdb] + 0x960);
  lVar24 = *(long *)(lVar28 + 0xa0);
  puVar13[0xc9] = lVar24;
  lVar28 = *(long *)(lVar28 + 0xa8);
  puVar13[0xca] = lVar28;
  if (lVar28 != 0) {
    plVar27 = (long *)(lVar28 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar11) {
        *plVar27 = *plVar27 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  plVar27 = puVar13 + 0x7e;
  plVar19 = puVar13 + 0x86;
  if (lVar24 == 0) {
    if (*(char *)((long)puVar13 + 0x5af) < '\0') {
      func_0x000107c3192c(&uStack_210,puVar13[0xb3],puVar13[0xb4]);
    }
    else {
      uStack_208 = puVar13[0xb4];
      uStack_210 = *puVar4;
      lStack_200 = puVar13[0xb5];
    }
    puVar5 = puVar13 + 0x98;
    uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
    plStack_1b8 = (long *)0x0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    lStack_1b0 = 0;
    uStack_1a0 = 0x3f800000;
    if (*(char *)((long)puVar13 + 0x627) < '\0') {
      func_0x000107c3192c(puVar5,puVar13[0xc2],puVar13[0xc3]);
    }
    else {
      puVar13[0x99] = puVar13[0xc3];
      *puVar5 = *puVar1;
      puVar13[0x9a] = puVar13[0xc4];
    }
    uVar9 = *(undefined4 *)(puVar13 + 0xe0);
    *(undefined1 *)(puVar13 + 0x9b) = 1;
    __ZNSt3__16chrono12system_clock3nowEv();
    FUN_10a6e53f0(puVar13 + 9,puVar14,&uStack_210,&uStack_1c0,puVar5,uVar9,1);
    if ((*(char *)(puVar13 + 0x9b) == '\x01') && (*(char *)((long)puVar13 + 0x4d7) < '\0')) {
      __ZdlPv(*puVar5);
    }
    func_0x00010a71245c(&uStack_1c0);
    if (((char)uStack_1f8 == '\x01') && (lStack_200 < 0)) {
      __ZdlPv(uStack_210);
    }
    FUN_10a6dee68(plVar29,puVar3,puVar13 + 9);
    puVar5 = puVar13 + 0x8e;
    plVar16 = puVar13 + 0xb9;
    puVar13[0x8f] = 0;
    *puVar5 = 0;
    puVar13[0x91] = 0;
    puVar13[0x90] = 0;
    *(undefined4 *)(puVar13 + 0x92) = 0x3f800000;
    if (puVar13[0xcb] != 0) {
      uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
      *plVar16 = (long)&uStack_1c0;
      puVar18 = puVar5;
      FUN_10a7126b0(puVar5,0,&uStack_1c0);
      FUN_10a6df2bc(puVar18 + 3,puVar13[0xcb],puVar13[0xcc]);
    }
    plVar6 = puVar13 + 0xcf;
    if (*plVar17 != 0) {
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,1);
      *plVar6 = (long)&uStack_1c0;
      puVar18 = puVar5;
      FUN_10a7126b0(puVar5,1,&uStack_1c0);
      func_0x00010a6df330(puVar18 + 3,puVar13[199],puVar13[200]);
    }
    plVar17 = puVar13 + 0xdd;
    FUN_109d1a6fc();
    lVar24 = puVar13[0xd6];
    puVar13[0xdc] = lVar24;
    if (lVar24 == 0) {
      *plVar17 = 0;
    }
    else {
      plVar7 = (long *)(lVar24 + 8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *plVar7 = *plVar7 + 0x200000000;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      lVar24 = puVar13[0xd6];
      *plVar17 = lVar24;
      if (lVar24 != 0) {
        plVar7 = (long *)(lVar24 + 8);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar11) {
            *plVar7 = *plVar7 + 0x200000000;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
    }
    if (*(char *)(puVar13 + 0xaf) == '\x01') {
      if (*(char *)((long)puVar13 + 0x577) < '\0') {
        func_0x000107c3192c(plVar16,puVar13[0xac],puVar13[0xad]);
      }
      else {
        puVar13[0xba] = puVar13[0xad];
        *plVar16 = *plVar2;
        puVar13[0xbb] = puVar13[0xae];
      }
    }
    else {
      *plVar16 = 0;
      puVar13[0xba] = 0;
      puVar13[0xbb] = 0;
    }
    puVar20 = (undefined8 *)0x210;
    __Znwm();
    plVar7 = puVar13 + 0xb0;
    puVar20[1] = 0;
    puVar20[2] = 0;
    *puVar20 = &PTR_FUN_110c13a98;
    uVar23 = puVar13[0xdb];
    puVar13[0xb1] = puVar13[0xba];
    *plVar7 = *plVar16;
    puVar13[0xb2] = puVar13[0xbb];
    *plVar16 = 0;
    puVar13[0xba] = 0;
    puVar13[0xbb] = 0;
    FUN_10ae0e0f0(plVar31,0,plVar29);
    puVar18 = puVar20 + 3;
    puVar13[0x7e] = 0x10a712b54;
    puVar13[0x7f] = &PTR_DAT_110c13ad8;
    lVar24 = puVar13[0xdc];
    puVar13[0x80] = lVar24;
    if (lVar24 != 0) {
      plVar8 = (long *)(lVar24 + 8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = *plVar8 + 0x200000000;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    puVar13[0x86] = FUN_10a712bf0;
    puVar13[0x87] = &PTR_FUN_110c13af8;
    lVar24 = puVar13[0xdd];
    puVar13[0x88] = lVar24;
    if (lVar24 != 0) {
      plVar8 = (long *)(lVar24 + 8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = *plVar8 + 0x200000000;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    FUN_10a6e5dd0(puVar18,uVar23,plVar7,plVar31,plVar27,plVar19);
    (**(code **)puVar13[0x87])(puVar13 + 0x87);
    (**(code **)puVar13[0x7f])(puVar13 + 0x7f);
    FUN_10ae0e238(plVar31);
    if (*(char *)((long)puVar13 + 0x597) < '\0') {
      __ZdlPv(*plVar7);
    }
    puVar13[0xcf] = puVar18;
    puVar13[0xd0] = puVar20;
    func_0x00010a712e08(plVar6,puVar18,puVar18);
    if (*(char *)((long)puVar13 + 0x5df) < '\0') {
      __ZdlPv(*plVar16);
    }
    FUN_10a6df3a4(*plVar6,puVar5);
    func_0x0001098ad440(plVar27,plVar30,puVar13 + 0xd5);
    puVar15 = puVar13 + 0xb6;
    *plVar31 = *plVar27;
    plVar19 = (long *)(*plVar27 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar11) {
        *plVar19 = *plVar19 + 4;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar13 + 0x704) = 5;
      lVar28 = puVar13[0x2d];
      plVar19 = (long *)(lVar28 + 0x10);
      lVar24 = puVar13[3];
      do {
        lVar26 = *plVar19;
        if (lVar26 == 0) {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar11) {
            *plVar19 = 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_10a6dd39c;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar26 >> 1 & 1) == 0);
    }
    uVar23 = *(undefined8 *)(*plVar31 + 0x10);
    plVar19 = (long *)*plVar31;
    if (plVar19 != (long *)0x0) {
      puVar21 = (ulong *)(plVar19 + 1);
      do {
        uVar25 = *puVar21;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
        if (bVar11) {
          *puVar21 = uVar25 - 4;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar25 & 0x1fffffffc) == 4) {
        do {
          uVar25 = *puVar21;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
          if (bVar11) {
            *puVar21 = uVar25 - 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (uVar25 - 1 == 0) {
          (**(code **)(*plVar19 + 8))();
        }
      }
    }
    if (((uint)uVar23 >> 5 & 1) == 0) {
      FUN_10a6dec9c(plVar31,puVar13[0xdb],1,puVar3);
      lVar24 = puVar13[0xdb];
      puVar21 = &uStack_1c0;
      func_0x000107c2b054(puVar21,&UNK_10f66e1e2);
      lVar28 = puVar13[0xdf];
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (lVar24 != 0) {
        FUN_10a76bf18((double)((float)((long)puVar21 - lVar28) / 1e+09),
                      *(undefined8 *)(lVar24 + 0x8d8),&uStack_1c0);
      }
      if (lStack_1b0 < 0) {
        __ZdlPv(uStack_1c0);
      }
      lVar24 = puVar13[0xdb];
      func_0x000107c2b054(&uStack_1c0,&UNK_10f66e1fe);
      if (*(char *)((long)puVar13 + 0x5f7) < '\0') {
        func_0x000107c3192c(puVar15,puVar13[0xbc],puVar13[0xbd]);
      }
      else {
        puVar13[0xb7] = puVar13[0xbd];
        *puVar15 = *puVar3;
        puVar13[0xb8] = puVar13[0xbe];
      }
      if (lVar24 != 0) {
        FUN_10a76bdb0(*(undefined8 *)(lVar24 + 0x8d8),&uStack_1c0,puVar15);
      }
      if (*(char *)((long)puVar13 + 0x5c7) < '\0') {
        __ZdlPv(*puVar15);
      }
      if (lStack_1b0 < 0) {
        __ZdlPv(uStack_1c0);
      }
      lVar24 = puVar13[0xcf];
      uVar23 = *(undefined8 *)(puVar13[0xdb] + 0x960);
      FUN_10a712eb8(puVar13 + 0x93,puVar5);
      FUN_10a6e5564(&uStack_1c0,lVar24 + 0x78,puVar13 + 0x93);
      FUN_10a6ded90(uVar23,plVar31,&uStack_1c0);
      FUN_10a6fd048(&uStack_1c0);
      func_0x00010a71259c(puVar13 + 0x93);
      FUN_10a6dee28(puVar13 + 2,plVar31);
      plVar31 = (long *)puVar13[0x2e];
      if (plVar31 != (long *)0x0) {
        plVar19 = plVar31 + 1;
        do {
          lVar24 = *plVar19;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar11) {
            *plVar19 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
        }
      }
      plVar27 = (long *)*plVar27;
      if (plVar27 != (long *)0x0) {
        puVar15 = (ulong *)(plVar27 + 1);
        do {
          uVar25 = *puVar15;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
          if (bVar11) {
            *puVar15 = uVar25 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar25 & 0x1fffffffc) == 4) {
          do {
            uVar25 = *puVar15;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
            if (bVar11) {
              *puVar15 = uVar25 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar25 - 1 == 0) {
            (**(code **)(*plVar27 + 8))();
          }
        }
      }
      plVar31 = (long *)puVar13[0xd0];
      if (plVar31 != (long *)0x0) {
        plVar27 = plVar31 + 1;
        do {
          lVar24 = *plVar27;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar11) {
            *plVar27 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
        }
      }
      if (*plVar17 != 0) {
        func_0x0001092b4274();
      }
      if (puVar13[0xdc] != 0) {
        func_0x0001092b4274();
      }
      if (puVar13[0xd6] != 0) {
        func_0x0001092b4274();
      }
      plVar17 = (long *)puVar13[0xd5];
      if (plVar17 != (long *)0x0) {
        puVar15 = (ulong *)(plVar17 + 1);
        do {
          uVar25 = *puVar15;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
          if (bVar11) {
            *puVar15 = uVar25 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar25 & 0x1fffffffc) == 4) {
          do {
            uVar25 = *puVar15;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
            if (bVar11) {
              *puVar15 = uVar25 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar25 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      func_0x00010a71259c(puVar5);
      FUN_10ae0e238(plVar29);
      FUN_10a6fd048(puVar13 + 9);
LAB_10a6dd59c:
      plVar29 = (long *)puVar13[0xca];
      if (plVar29 != (long *)0x0) {
        plVar17 = plVar29 + 1;
        do {
          lVar24 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
        }
      }
      if (*(char *)((long)puVar13 + 0x5af) < '\0') {
        __ZdlPv(*puVar4);
      }
      if (*(char *)((long)puVar13 + 0x5f7) < '\0') {
        __ZdlPv(*puVar3);
      }
      plVar29 = (long *)puVar13[0xce];
      if (plVar29 != (long *)0x0) {
        plVar17 = plVar29 + 1;
        do {
          lVar24 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
        }
      }
      plVar29 = (long *)puVar13[0xcc];
      if (plVar29 != (long *)0x0) {
        plVar17 = plVar29 + 1;
        do {
          lVar24 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
        }
      }
      if (*(char *)((long)puVar13 + 0x3ef) < '\0') {
        __ZdlPv(puVar13[0x7b]);
      }
      if (*(char *)((long)puVar13 + 0x3b7) < '\0') {
        __ZdlPv(*puVar14);
      }
      plVar29 = (long *)puVar13[0xc6];
      if (plVar29 != (long *)0x0) {
        plVar17 = plVar29 + 1;
        do {
          lVar24 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
        }
      }
      plVar30 = (long *)*plVar30;
      if (plVar30 != (long *)0x0) {
        puVar3 = (ulong *)(plVar30 + 1);
        do {
          uVar25 = *puVar3;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar11) {
            *puVar3 = uVar25 - 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if ((uVar25 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
          do {
            uVar25 = *puVar3;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar11) {
              *puVar3 = uVar25 - 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (uVar25 - 1 == 0) {
            (**(code **)(*plVar30 + 8))(plVar30);
          }
        }
      }
      func_0x000109d1a1d0(puVar13 + 2);
      if ((*(char *)(puVar13 + 0xaf) == '\x01') && (*(char *)((long)puVar13 + 0x577) < '\0')) {
        __ZdlPv(*plVar2);
      }
      if (*(char *)(puVar13 + 0x73) == '\x01') {
        func_0x00010a052168(puVar13 + 0x65);
      }
      plVar29 = (long *)puVar13[0xd4];
      if (plVar29 != (long *)0x0) {
        plVar17 = plVar29 + 1;
        do {
          lVar24 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
        }
      }
      plVar29 = (long *)puVar13[200];
      if (plVar29 != (long *)0x0) {
        plVar17 = plVar29 + 1;
        do {
          lVar24 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
        }
      }
      plVar29 = (long *)puVar13[0xd8];
      if (plVar29 != (long *)0x0) {
        plVar17 = plVar29 + 1;
        do {
          lVar24 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar24 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
        }
      }
      if (*(char *)((long)puVar13 + 0x627) < '\0') {
        __ZdlPv(*puVar1);
      }
      if ((*(char *)(puVar13 + 0xa3) == '\x01') && (*(char *)((long)puVar13 + 0x517) < '\0')) {
        __ZdlPv(*puVar22);
      }
      __ZdlPv(puVar13);
      return;
    }
    if (((uint)*(undefined8 *)(*plVar30 + 0x10) >> 1 & 1) == 0) {
      lVar24 = puVar13[0xdb];
      puVar22 = &uStack_1c0;
      func_0x000107c2b054(puVar22,&UNK_10f66e1a2);
      lVar28 = puVar13[0xdf];
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (lVar24 != 0) {
        FUN_10a76bf18((double)((float)((long)puVar22 - lVar28) / 1e+09),
                      *(undefined8 *)(lVar24 + 0x8d8),&uStack_1c0);
      }
      if (lStack_1b0 < 0) {
        __ZdlPv(uStack_1c0);
      }
    }
    __ZNSt13exception_ptrC1ERKS_(&uStack_210,*plVar27 + 0x90);
    func_0x0001098bc760(&uStack_1c0,&uStack_210);
    __ZNSt13exception_ptrD1Ev(&uStack_210);
    if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0x11d,&UNK_10f66e218);
    }
    FUN_10a1084cc(&uStack_1c0);
  }
  else {
    if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xc2,&UNK_10f66e132);
    }
    uVar23 = puVar13[0xdb];
    puVar13[0xd1] = puVar13[0xcb];
    lVar24 = puVar13[0xcc];
    puVar13[0xd2] = lVar24;
    if (lVar24 != 0) {
      plVar16 = (long *)(lVar24 + 8);
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar11) {
          *plVar16 = *plVar16 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    FUN_10a6d7f90(puVar13 + 9,uVar23,puVar13 + 0xd1);
    FUN_10a6de718(plVar27,plVar30,puVar13[9]);
    puVar5 = puVar13 + 0x9c;
    puVar15 = puVar13 + 0xbf;
    *plVar31 = *plVar27;
    plVar16 = (long *)(*plVar27 + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar11) {
        *plVar16 = *plVar16 + 4;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar13 + 0x704) = 2;
      lVar28 = puVar13[0x2d];
      plVar16 = (long *)(lVar28 + 0x10);
      lVar24 = puVar13[3];
      do {
        lVar26 = *plVar16;
        if (lVar26 == 0) {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar11) {
            *plVar16 = 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_10a6dd39c;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar26 >> 1 & 1) == 0);
    }
    lVar24 = *plVar31;
    if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar24 + 0xb8) & 1) != 0) {
        FUN_10a1cffac(plVar29,lVar24 + 0x98);
        plVar16 = (long *)*plVar31;
        if (plVar16 != (long *)0x0) {
          puVar21 = (ulong *)(plVar16 + 1);
          do {
            uVar25 = *puVar21;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
            if (bVar11) {
              *puVar21 = uVar25 - 4;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((uVar25 & 0x1fffffffc) == 4) {
            do {
              uVar25 = *puVar21;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
              if (bVar11) {
                *puVar21 = uVar25 - 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (uVar25 - 1 == 0) {
              (**(code **)(*plVar16 + 8))();
            }
          }
        }
        plVar16 = (long *)*plVar27;
        if (plVar16 != (long *)0x0) {
          puVar21 = (ulong *)(plVar16 + 1);
          do {
            uVar25 = *puVar21;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
            if (bVar11) {
              *puVar21 = uVar25 - 4;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((uVar25 & 0x1fffffffc) == 4) {
            do {
              uVar25 = *puVar21;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
              if (bVar11) {
                *puVar21 = uVar25 - 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (uVar25 - 1 == 0) {
              (**(code **)(*plVar16 + 8))();
            }
          }
        }
        plVar16 = (long *)puVar13[9];
        if (plVar16 != (long *)0x0) {
          puVar21 = (ulong *)(plVar16 + 1);
          do {
            uVar25 = *puVar21;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
            if (bVar11) {
              *puVar21 = uVar25 - 4;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((uVar25 & 0x1fffffffc) == 4) {
            do {
              uVar25 = *puVar21;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
              if (bVar11) {
                *puVar21 = uVar25 - 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (uVar25 - 1 == 0) {
              (**(code **)(*plVar16 + 8))();
            }
          }
        }
        plVar16 = (long *)puVar13[0xd2];
        if (plVar16 != (long *)0x0) {
          plVar6 = plVar16 + 1;
          do {
            lVar24 = *plVar6;
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar11) {
              *plVar6 = lVar24 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        if ((*(byte *)(puVar13 + 0x4c) & 1) == 0) {
          FUN_10a00946c(&UNK_10f66e17f);
        }
        else {
          uVar23 = puVar13[0xdb];
          puVar13[0xda] = puVar13[200];
          puVar13[0xd9] = *plVar17;
          if (puVar13[200] != 0) {
            plVar17 = (long *)(puVar13[200] + 8);
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar11) {
                *plVar17 = *plVar17 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          FUN_10a6d7f90(puVar13 + 9,uVar23,puVar13 + 0xd9);
          FUN_10a6de718(plVar27,plVar30,puVar13[9]);
          *plVar19 = *plVar27;
          plVar17 = (long *)(*plVar27 + 8);
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar11) {
              *plVar17 = *plVar17 + 4;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (((uint)*(undefined8 *)(*plVar19 + 0x10) >> 1 & 1) == 0) {
            *(undefined1 *)((long)puVar13 + 0x704) = 3;
            lVar28 = puVar13[0x86];
            plVar17 = (long *)(lVar28 + 0x10);
            lVar24 = puVar13[3];
            do {
              lVar26 = *plVar17;
              if (lVar26 == 0) {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar11) {
                  *plVar17 = 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_10a6dd39c;
              }
              else {
                ClearExclusiveLocal();
              }
            } while (((uint)lVar26 >> 1 & 1) == 0);
          }
          lVar24 = *plVar19;
          if (((uint)*(undefined8 *)(*plVar19 + 0x10) >> 5 & 1) == 0) {
            if ((*(byte *)(lVar24 + 0xb8) & 1) != 0) {
              FUN_10a1cffac(plVar31,lVar24 + 0x98);
              plVar17 = (long *)*plVar19;
              if (plVar17 != (long *)0x0) {
                puVar21 = (ulong *)(plVar17 + 1);
                do {
                  uVar25 = *puVar21;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
                  if (bVar11) {
                    *puVar21 = uVar25 - 4;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((uVar25 & 0x1fffffffc) == 4) {
                  do {
                    uVar25 = *puVar21;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
                    if (bVar11) {
                      *puVar21 = uVar25 - 1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (uVar25 - 1 == 0) {
                    (**(code **)(*plVar17 + 8))();
                  }
                }
              }
              plVar17 = (long *)*plVar27;
              if (plVar17 != (long *)0x0) {
                puVar21 = (ulong *)(plVar17 + 1);
                do {
                  uVar25 = *puVar21;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
                  if (bVar11) {
                    *puVar21 = uVar25 - 4;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((uVar25 & 0x1fffffffc) == 4) {
                  do {
                    uVar25 = *puVar21;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
                    if (bVar11) {
                      *puVar21 = uVar25 - 1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (uVar25 - 1 == 0) {
                    (**(code **)(*plVar17 + 8))();
                  }
                }
              }
              plVar17 = (long *)puVar13[9];
              if (plVar17 != (long *)0x0) {
                puVar21 = (ulong *)(plVar17 + 1);
                do {
                  uVar25 = *puVar21;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
                  if (bVar11) {
                    *puVar21 = uVar25 - 4;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((uVar25 & 0x1fffffffc) == 4) {
                  do {
                    uVar25 = *puVar21;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
                    if (bVar11) {
                      *puVar21 = uVar25 - 1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (uVar25 - 1 == 0) {
                    (**(code **)(*plVar17 + 8))();
                  }
                }
              }
              plVar17 = (long *)puVar13[0xda];
              if (plVar17 != (long *)0x0) {
                plVar16 = plVar17 + 1;
                do {
                  lVar24 = *plVar16;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar11) {
                    *plVar16 = lVar24 + -1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (lVar24 == 0) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                }
              }
              if (*(char *)(puVar13 + 0x73) != '\x01') {
                uVar23 = 0;
                uVar32 = 0;
              }
              else {
                uVar32 = puVar13[0x6b];
                uVar23 = puVar13[0x6a];
                param_2 = puVar13[0x6d];
              }
              *(undefined1 *)(puVar13 + 0xa8) = 0;
              *(undefined1 *)(puVar13 + 0xab) = 0;
              if (*(char *)(puVar13 + 0x4c) == '\x01') {
                puVar13[0xa9] = puVar13[0x4a];
                puVar13[0xa8] = *plVar29;
                puVar13[0xaa] = puVar13[0x4b];
                puVar13[0x4a] = 0;
                puVar13[0x4b] = 0;
                *plVar29 = 0;
                *(undefined1 *)(puVar13 + 0xab) = 1;
              }
              *(undefined1 *)(puVar13 + 0xa4) = 0;
              *(undefined1 *)(puVar13 + 0xa7) = 0;
              if (*(char *)(puVar13 + 0x30) == '\x01') {
                puVar13[0xa5] = puVar13[0x2e];
                puVar13[0xa4] = *plVar31;
                puVar13[0xa6] = puVar13[0x2f];
                puVar13[0x2e] = 0;
                puVar13[0x2f] = 0;
                *plVar31 = 0;
                *(undefined1 *)(puVar13 + 0xa7) = 1;
              }
              puVar13[10] = uVar32;
              puVar13[9] = uVar23;
              puVar13[0xb] = param_2;
              *(bool *)(puVar13 + 0xc) = *(char *)(puVar13 + 0x73) == '\x01';
              (**(code **)(*(long *)puVar13[0xc9] + 0x10))
                        (plVar27,(long *)puVar13[0xc9],puVar3,puVar13 + 0xa8,puVar13 + 0xa4,
                         puVar13 + 9,*(int *)(puVar13 + 0xe0) == 0);
              if ((*(char *)(puVar13 + 0xa7) == '\x01') && (lVar24 = puVar13[0xa4], lVar24 != 0)) {
                puVar13[0xa5] = lVar24;
                __ZdlPv();
              }
              if ((*(char *)(puVar13 + 0xab) == '\x01') && (lVar24 = puVar13[0xa8], lVar24 != 0)) {
                puVar13[0xa9] = lVar24;
                __ZdlPv();
              }
              func_0x0001098ad440(plVar19,plVar30,plVar27);
              puVar13[9] = *plVar19;
              plVar17 = (long *)(*plVar19 + 8);
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar11) {
                  *plVar17 = *plVar17 + 4;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (((uint)*(undefined8 *)(puVar13[9] + 0x10) >> 1 & 1) == 0) {
                *(undefined1 *)((long)puVar13 + 0x704) = 4;
                lVar28 = puVar13[9];
                plVar17 = (long *)(lVar28 + 0x10);
                lVar24 = puVar13[3];
                do {
                  lVar26 = *plVar17;
                  if (lVar26 == 0) {
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar11) {
                      *plVar17 = 1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                    if (cVar10 == '\0') {
LAB_10a6dd39c:
                      lStack_1b0 = lVar24;
                      uStack_1c0 = 0;
                      plStack_1b8 = puVar13;
                      func_0x000109d1b588(lVar28 + 0x18,&uStack_1c0);
                      *(undefined8 *)(lVar28 + 0x10) = 0;
                      return;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                } while (((uint)lVar26 >> 1 & 1) == 0);
              }
              uVar23 = *(undefined8 *)(puVar13[9] + 0x10);
              plVar17 = (long *)puVar13[9];
              if (plVar17 != (long *)0x0) {
                puVar21 = (ulong *)(plVar17 + 1);
                do {
                  uVar25 = *puVar21;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
                  if (bVar11) {
                    *puVar21 = uVar25 - 4;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if ((uVar25 & 0x1fffffffc) == 4) {
                  do {
                    uVar25 = *puVar21;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar21,0x10);
                    if (bVar11) {
                      *puVar21 = uVar25 - 1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (uVar25 - 1 == 0) {
                    (**(code **)(*plVar17 + 8))();
                  }
                }
              }
              if (((uint)uVar23 >> 5 & 1) == 0) {
                FUN_10a6dec9c(puVar13 + 9,puVar13[0xdb],1,puVar3);
                lVar24 = puVar13[0xdb];
                puVar21 = &uStack_1c0;
                func_0x000107c2b054(puVar21,&UNK_10f66e1e2);
                lVar28 = puVar13[0xdf];
                __ZNSt3__16chrono12steady_clock3nowEv();
                if (lVar24 != 0) {
                  FUN_10a76bf18((double)((float)((long)puVar21 - lVar28) / 1e+09),
                                *(undefined8 *)(lVar24 + 0x8d8),&uStack_1c0);
                }
                if (lStack_1b0 < 0) {
                  __ZdlPv(uStack_1c0);
                }
                lVar24 = puVar13[0xdb];
                func_0x000107c2b054(&uStack_1c0,&UNK_10f66e1fe);
                if (*(char *)((long)puVar13 + 0x5f7) < '\0') {
                  func_0x000107c3192c(puVar15,puVar13[0xbc],puVar13[0xbd]);
                }
                else {
                  puVar13[0xc0] = puVar13[0xbd];
                  *puVar15 = *puVar3;
                  puVar13[0xc1] = puVar13[0xbe];
                }
                if (lVar24 != 0) {
                  FUN_10a76bdb0(*(undefined8 *)(lVar24 + 0x8d8),&uStack_1c0,puVar15);
                }
                if (*(char *)((long)puVar13 + 0x60f) < '\0') {
                  __ZdlPv();
                }
                if (lStack_1b0 < 0) {
                  __ZdlPv();
                }
                uStack_1e0 = 0;
                cStack_1c8 = '\0';
                uStack_208 = 0;
                uStack_210 = 0;
                uStack_1f8 = 0;
                lStack_200 = 0;
                uStack_1f0 = 0x3f800000;
                if (*(char *)((long)puVar13 + 0x627) < '\0') {
                  func_0x000107c3192c(puVar5,puVar13[0xc2],puVar13[0xc3]);
                }
                else {
                  puVar13[0x9d] = puVar13[0xc3];
                  *puVar5 = *puVar1;
                  puVar13[0x9e] = puVar13[0xc4];
                }
                uVar9 = *(undefined4 *)(puVar13 + 0xe0);
                *(undefined1 *)(puVar13 + 0x9f) = 1;
                __ZNSt3__16chrono12system_clock3nowEv();
                FUN_10a6e53f0(&uStack_1c0,puVar14,&uStack_1e0,&uStack_210,puVar5,uVar9,1);
                if ((*(char *)(puVar13 + 0x9f) == '\x01') &&
                   (*(char *)((long)puVar13 + 0x4f7) < '\0')) {
                  __ZdlPv(*puVar5);
                }
                func_0x00010a71245c(&uStack_210);
                if ((cStack_1c8 == '\x01') && (cStack_1c9 < '\0')) {
                  __ZdlPv(CONCAT71(uStack_1df,uStack_1e0));
                }
                FUN_10a6ded90(*(undefined8 *)(puVar13[0xdb] + 0x960),puVar13 + 9,&uStack_1c0);
                FUN_10a6dee28(puVar13 + 2,puVar13 + 9);
                FUN_10a6fd048(&uStack_1c0);
                plVar17 = (long *)puVar13[10];
                if (plVar17 != (long *)0x0) {
                  plVar16 = plVar17 + 1;
                  do {
                    lVar24 = *plVar16;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar11) {
                      *plVar16 = lVar24 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (lVar24 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                  }
                }
                plVar19 = (long *)*plVar19;
                if (plVar19 != (long *)0x0) {
                  puVar15 = (ulong *)(plVar19 + 1);
                  do {
                    uVar25 = *puVar15;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
                    if (bVar11) {
                      *puVar15 = uVar25 - 4;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if ((uVar25 & 0x1fffffffc) == 4) {
                    do {
                      uVar25 = *puVar15;
                      cVar10 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
                      if (bVar11) {
                        *puVar15 = uVar25 - 1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (uVar25 - 1 == 0) {
                      (**(code **)(*plVar19 + 8))();
                    }
                  }
                }
                plVar27 = (long *)*plVar27;
                if (plVar27 != (long *)0x0) {
                  puVar15 = (ulong *)(plVar27 + 1);
                  do {
                    uVar25 = *puVar15;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
                    if (bVar11) {
                      *puVar15 = uVar25 - 4;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if ((uVar25 & 0x1fffffffc) == 4) {
                    do {
                      uVar25 = *puVar15;
                      cVar10 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(puVar15,0x10);
                      if (bVar11) {
                        *puVar15 = uVar25 - 1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (uVar25 - 1 == 0) {
                      (**(code **)(*plVar27 + 8))();
                    }
                  }
                }
                if ((*(char *)(puVar13 + 0x30) == '\x01') && (*plVar31 != 0)) {
                  puVar13[0x2e] = *plVar31;
                  __ZdlPv();
                }
                if ((*(char *)(puVar13 + 0x4c) == '\x01') && (*plVar29 != 0)) {
                  puVar13[0x4a] = *plVar29;
                  __ZdlPv();
                }
                goto LAB_10a6dd59c;
              }
              if (((uint)*(undefined8 *)(*plVar30 + 0x10) >> 1 & 1) == 0) {
                lVar24 = puVar13[0xdb];
                puVar22 = &uStack_1c0;
                func_0x000107c2b054(puVar22,&UNK_10f66e1a2);
                lVar28 = puVar13[0xdf];
                __ZNSt3__16chrono12steady_clock3nowEv();
                if (lVar24 != 0) {
                  FUN_10a76bf18((double)((float)((long)puVar22 - lVar28) / 1e+09),
                                *(undefined8 *)(lVar24 + 0x8d8),&uStack_1c0);
                }
                if (lStack_1b0 < 0) {
                  __ZdlPv(uStack_1c0);
                }
              }
              __ZNSt13exception_ptrC1ERKS_(&uStack_210,*plVar19 + 0x90);
              func_0x0001098bc760(&uStack_1c0,&uStack_210);
              __ZNSt13exception_ptrD1Ev(&uStack_210);
              if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
                func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xdf,&UNK_10f66e1b5);
              }
              FUN_10a1084cc(&uStack_1c0);
            }
          }
          else {
            func_0x0001092af97c(lVar24 + 0x90);
          }
        }
      }
    }
    else {
      func_0x0001092af97c(lVar24 + 0x90);
    }
  }
LAB_10a6dda58:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10a6dda5c);
  (*pcVar12)();
}



/* Entry: 10a6dbfa0; end: 10a6de353;  */

/* WARNING: Removing unreachable block (ram,0x00010a6dd28c) */
/* WARNING: Removing unreachable block (ram,0x00010a6dc348) */

void FUN_10a6dbfa0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,long *param_7,long *param_8,
                  undefined8 *param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  char cVar11;
  bool bVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  undefined8 uVar32;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  char cStack_199;
  char cStack_198;
  ulong uStack_190;
  long *plStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  
  puVar14 = (undefined8 *)0x708;
  __Znwm();
  *puVar14 = FUN_10a72b114;
  puVar14[1] = FUN_10a72d460;
  puVar23 = puVar14 + 0xa0;
  *(undefined4 *)(puVar14 + 0xe0) = param_11;
  puVar14[0xdb] = param_4;
  FUN_10a1ccb30(puVar23,param_5);
  puVar1 = puVar14 + 0xc2;
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_6,param_6[1]);
  }
  else {
    uVar24 = *param_6;
    puVar14[0xc3] = param_6[1];
    *puVar1 = uVar24;
    puVar14[0xc4] = param_6[2];
  }
  plVar18 = puVar14 + 199;
  lVar25 = *param_7;
  puVar14[0xd8] = param_7[1];
  puVar14[0xd7] = lVar25;
  *param_7 = 0;
  param_7[1] = 0;
  lVar25 = *param_8;
  puVar14[200] = param_8[1];
  *plVar18 = lVar25;
  *param_8 = 0;
  param_8[1] = 0;
  uVar24 = *param_9;
  puVar14[0xd4] = param_9[1];
  puVar14[0xd3] = uVar24;
  *param_9 = 0;
  param_9[1] = 0;
  FUN_10a6fcf4c(puVar14 + 0x65,param_10);
  plVar2 = puVar14 + 0xac;
  FUN_10a1ccb30(plVar2,param_13);
  plVar31 = puVar14 + 0x2d;
  FUN_10a711e58(puVar14 + 2);
  lVar25 = puVar14[7];
  if (lVar25 != 0) {
    plVar3 = (long *)(lVar25 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 4;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  *param_3 = lVar25;
  puVar14[9] = 0;
  *(undefined1 *)((long)puVar14 + 0x704) = 0;
  puVar15 = puVar14 + 9;
  FUN_10a6de354(puVar15,puVar14);
  if (((ulong)puVar15 & 1) != 0) {
    return;
  }
  puVar15 = puVar14 + 0x74;
  plVar3 = puVar14 + 0xc5;
  plVar30 = puVar14 + 0xde;
  *plVar30 = puVar14[9];
  lVar25 = puVar14[0xd7];
  if (lVar25 == 0) {
    *plVar3 = 0;
    puVar14[0xc6] = 0;
  }
  else {
    puVar14[0xc5] = *(undefined8 *)(lVar25 + 0xe0);
    lVar25 = *(long *)(lVar25 + 0xe8);
    puVar14[0xc6] = lVar25;
    if (lVar25 != 0) {
      plVar28 = (long *)(lVar25 + 8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar12) {
          *plVar28 = *plVar28 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
  }
  FUN_10a7d2014(puVar15,plVar3);
  puVar14[0xcb] = 0;
  puVar14[0xcc] = 0;
  if (*plVar3 != 0) {
    FUN_10a7cfeec(&uStack_190,puVar14[0xdb],plVar3);
    plVar3 = plStack_188;
    uVar26 = uStack_190;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    plVar28 = (long *)puVar14[0xcc];
    puVar14[0xcc] = plVar3;
    puVar14[0xcb] = uVar26;
    if (plVar28 != (long *)0x0) {
      plVar3 = plVar28 + 1;
      do {
        lVar25 = *plVar3;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *plVar3 = lVar25 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
    plVar3 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      plVar28 = plStack_188 + 1;
      do {
        lVar25 = *plVar28;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar12) {
          *plVar28 = lVar25 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  puVar16 = (ulong *)puVar14[0xdb];
  FUN_10a6de3f8(puVar14 + 0xcd);
  puVar4 = puVar14 + 0xbc;
  if (*(char *)(puVar14 + 0xa3) == '\x01') {
    if (*(char *)((long)puVar14 + 0x517) < '\0') {
      puVar16 = puVar4;
      func_0x000107c3192c(puVar4,puVar14[0xa0],puVar14[0xa1]);
    }
    else {
      puVar14[0xbd] = puVar14[0xa1];
      *puVar4 = *puVar23;
      puVar14[0xbe] = puVar14[0xa2];
    }
  }
  else {
    *puVar4 = 0;
    puVar14[0xbd] = 0;
    puVar14[0xbe] = 0;
  }
  uVar26 = puVar14[0xbd];
  if (-1 < (char)*(byte *)((long)puVar14 + 0x5f7)) {
    uVar26 = (ulong)*(byte *)((long)puVar14 + 0x5f7);
  }
  if (uVar26 == 0) {
    uVar24 = 0xc;
    if (*(int *)(puVar14 + 0xe0) != 0) {
      uVar24 = 0x1a;
    }
    puVar16 = (ulong *)puVar14[0xcd];
    FUN_10a6de474(&uStack_190,puVar16,uVar24);
    if (*(char *)((long)puVar14 + 0x5f7) < '\0') {
      puVar16 = (ulong *)*puVar4;
      __ZdlPv();
    }
    puVar14[0xbd] = plStack_188;
    *puVar4 = uStack_190;
    puVar14[0xbe] = lStack_180;
  }
  plVar3 = puVar14 + 0x49;
  if (((double)puVar14[0x77] == 0.0) && ((double)puVar14[0x78] == 0.0)) {
    puVar16 = (ulong *)puVar14[0xd3];
    if ((puVar16 != (ulong *)0x0) && ((*(byte *)(puVar14 + 0x73) & 1) == 0)) {
      FUN_10a03867c(puVar14 + 9);
      FUN_10a078cd0(plVar31,plVar30,puVar14 + 9);
      puVar14[0x49] = *plVar31;
      plVar28 = (long *)(*plVar31 + 8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar12) {
          *plVar28 = *plVar28 + 4;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (((uint)*(undefined8 *)(*plVar3 + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)((long)puVar14 + 0x704) = 1;
        lVar29 = puVar14[0x49];
        plVar28 = (long *)(lVar29 + 0x10);
        lVar25 = puVar14[3];
        do {
          lVar27 = *plVar28;
          if (lVar27 == 0) {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar12) {
              *plVar28 = 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_10a6dd39c;
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar27 >> 1 & 1) == 0);
      }
      lVar25 = *plVar3;
      if (((uint)*(undefined8 *)(*plVar3 + 0x10) >> 5 & 1) != 0) {
        func_0x0001092af97c(lVar25 + 0x90);
        goto LAB_10a6dda58;
      }
      if ((*(byte *)(lVar25 + 0xa8) & 1) == 0) goto LAB_10a6dda58;
      FUN_10a6de5fc(puVar14 + 0x65,*(undefined8 *)(lVar25 + 0x98));
      plVar28 = (long *)*plVar3;
      if (plVar28 != (long *)0x0) {
        puVar16 = (ulong *)(plVar28 + 1);
        do {
          uVar26 = *puVar16;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar12) {
            *puVar16 = uVar26 - 4;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar16;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar12) {
              *puVar16 = uVar26 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar28 + 8))();
          }
        }
      }
      plVar28 = (long *)*plVar31;
      if (plVar28 != (long *)0x0) {
        puVar16 = (ulong *)(plVar28 + 1);
        do {
          uVar26 = *puVar16;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar12) {
            *puVar16 = uVar26 - 4;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar16;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar12) {
              *puVar16 = uVar26 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar28 + 8))();
          }
        }
      }
      puVar16 = (ulong *)puVar14[9];
      if (puVar16 != (ulong *)0x0) {
        puVar22 = puVar16 + 1;
        do {
          uVar26 = *puVar22;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar12) {
            *puVar22 = uVar26 - 4;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar22;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
            if (bVar12) {
              *puVar22 = uVar26 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*puVar16 + 8))();
          }
        }
      }
    }
    if (*(char *)(puVar14 + 0x73) == '\x01') {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        puVar16 = (ulong *)0x1;
        func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xb1,&UNK_10f66e087);
        if ((*(byte *)(puVar14 + 0x73) & 1) == 0) goto LAB_10a6dda58;
      }
      puVar14[0x78] = puVar14[0x6b];
      puVar14[0x77] = puVar14[0x6a];
      puVar14[0x79] = puVar14[0x6d];
    }
    else if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      puVar16 = (ulong *)0x1;
      func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xb7,&UNK_10f66e0d0);
    }
  }
  puVar5 = puVar14 + 0xb3;
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar14[0xdf] = puVar16;
  (**(code **)(*(long *)puVar14[0xcd] + 0x10))(puVar5,(long *)puVar14[0xcd],0x10);
  lVar29 = *(long *)(puVar14[0xdb] + 0x960);
  lVar25 = *(long *)(lVar29 + 0xa0);
  puVar14[0xc9] = lVar25;
  lVar29 = *(long *)(lVar29 + 0xa8);
  puVar14[0xca] = lVar29;
  if (lVar29 != 0) {
    plVar28 = (long *)(lVar29 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar12) {
        *plVar28 = *plVar28 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  plVar28 = puVar14 + 0x7e;
  plVar20 = puVar14 + 0x86;
  if (lVar25 == 0) {
    if (*(char *)((long)puVar14 + 0x5af) < '\0') {
      func_0x000107c3192c(&uStack_1e0,puVar14[0xb3],puVar14[0xb4]);
    }
    else {
      uStack_1d8 = puVar14[0xb4];
      uStack_1e0 = *puVar5;
      lStack_1d0 = puVar14[0xb5];
    }
    puVar6 = puVar14 + 0x98;
    uStack_1c8 = CONCAT71(uStack_1c8._1_7_,1);
    plStack_188 = (long *)0x0;
    uStack_190 = 0;
    uStack_178 = 0;
    lStack_180 = 0;
    uStack_170 = 0x3f800000;
    if (*(char *)((long)puVar14 + 0x627) < '\0') {
      func_0x000107c3192c(puVar6,puVar14[0xc2],puVar14[0xc3]);
    }
    else {
      puVar14[0x99] = puVar14[0xc3];
      *puVar6 = *puVar1;
      puVar14[0x9a] = puVar14[0xc4];
    }
    uVar10 = *(undefined4 *)(puVar14 + 0xe0);
    *(undefined1 *)(puVar14 + 0x9b) = 1;
    __ZNSt3__16chrono12system_clock3nowEv();
    FUN_10a6e53f0(puVar14 + 9,puVar15,&uStack_1e0,&uStack_190,puVar6,uVar10,1);
    if ((*(char *)(puVar14 + 0x9b) == '\x01') && (*(char *)((long)puVar14 + 0x4d7) < '\0')) {
      __ZdlPv(*puVar6);
    }
    func_0x00010a71245c(&uStack_190);
    if (((char)uStack_1c8 == '\x01') && (lStack_1d0 < 0)) {
      __ZdlPv(uStack_1e0);
    }
    FUN_10a6dee68(plVar3,puVar4,puVar14 + 9);
    puVar6 = puVar14 + 0x8e;
    plVar17 = puVar14 + 0xb9;
    puVar14[0x8f] = 0;
    *puVar6 = 0;
    puVar14[0x91] = 0;
    puVar14[0x90] = 0;
    *(undefined4 *)(puVar14 + 0x92) = 0x3f800000;
    if (puVar14[0xcb] != 0) {
      uStack_190 = uStack_190 & 0xffffffff00000000;
      *plVar17 = (long)&uStack_190;
      puVar19 = puVar6;
      FUN_10a7126b0(puVar6,0,&uStack_190);
      FUN_10a6df2bc(puVar19 + 3,puVar14[0xcb],puVar14[0xcc]);
    }
    plVar7 = puVar14 + 0xcf;
    if (*plVar18 != 0) {
      uStack_190 = CONCAT44(uStack_190._4_4_,1);
      *plVar7 = (long)&uStack_190;
      puVar19 = puVar6;
      FUN_10a7126b0(puVar6,1,&uStack_190);
      func_0x00010a6df330(puVar19 + 3,puVar14[199],puVar14[200]);
    }
    plVar18 = puVar14 + 0xdd;
    FUN_109d1a6fc();
    lVar25 = puVar14[0xd6];
    puVar14[0xdc] = lVar25;
    if (lVar25 == 0) {
      *plVar18 = 0;
    }
    else {
      plVar8 = (long *)(lVar25 + 8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar12) {
          *plVar8 = *plVar8 + 0x200000000;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      lVar25 = puVar14[0xd6];
      *plVar18 = lVar25;
      if (lVar25 != 0) {
        plVar8 = (long *)(lVar25 + 8);
        do {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar12) {
            *plVar8 = *plVar8 + 0x200000000;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
    }
    if (*(char *)(puVar14 + 0xaf) == '\x01') {
      if (*(char *)((long)puVar14 + 0x577) < '\0') {
        func_0x000107c3192c(plVar17,puVar14[0xac],puVar14[0xad]);
      }
      else {
        puVar14[0xba] = puVar14[0xad];
        *plVar17 = *plVar2;
        puVar14[0xbb] = puVar14[0xae];
      }
    }
    else {
      *plVar17 = 0;
      puVar14[0xba] = 0;
      puVar14[0xbb] = 0;
    }
    puVar21 = (undefined8 *)0x210;
    __Znwm();
    plVar8 = puVar14 + 0xb0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = &PTR_FUN_110c13a98;
    uVar24 = puVar14[0xdb];
    puVar14[0xb1] = puVar14[0xba];
    *plVar8 = *plVar17;
    puVar14[0xb2] = puVar14[0xbb];
    *plVar17 = 0;
    puVar14[0xba] = 0;
    puVar14[0xbb] = 0;
    FUN_10ae0e0f0(plVar31,0,plVar3);
    puVar19 = puVar21 + 3;
    puVar14[0x7e] = 0x10a712b54;
    puVar14[0x7f] = &PTR_DAT_110c13ad8;
    lVar25 = puVar14[0xdc];
    puVar14[0x80] = lVar25;
    if (lVar25 != 0) {
      plVar9 = (long *)(lVar25 + 8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar12) {
          *plVar9 = *plVar9 + 0x200000000;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    puVar14[0x86] = FUN_10a712bf0;
    puVar14[0x87] = &PTR_FUN_110c13af8;
    lVar25 = puVar14[0xdd];
    puVar14[0x88] = lVar25;
    if (lVar25 != 0) {
      plVar9 = (long *)(lVar25 + 8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar12) {
          *plVar9 = *plVar9 + 0x200000000;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    FUN_10a6e5dd0(puVar19,uVar24,plVar8,plVar31,plVar28,plVar20);
    (**(code **)puVar14[0x87])(puVar14 + 0x87);
    (**(code **)puVar14[0x7f])(puVar14 + 0x7f);
    FUN_10ae0e238(plVar31);
    if (*(char *)((long)puVar14 + 0x597) < '\0') {
      __ZdlPv(*plVar8);
    }
    puVar14[0xcf] = puVar19;
    puVar14[0xd0] = puVar21;
    func_0x00010a712e08(plVar7,puVar19,puVar19);
    if (*(char *)((long)puVar14 + 0x5df) < '\0') {
      __ZdlPv(*plVar17);
    }
    FUN_10a6df3a4(*plVar7,puVar6);
    func_0x0001098ad440(plVar28,plVar30,puVar14 + 0xd5);
    puVar16 = puVar14 + 0xb6;
    *plVar31 = *plVar28;
    plVar20 = (long *)(*plVar28 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = *plVar20 + 4;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar14 + 0x704) = 5;
      lVar29 = puVar14[0x2d];
      plVar20 = (long *)(lVar29 + 0x10);
      lVar25 = puVar14[3];
      do {
        lVar27 = *plVar20;
        if (lVar27 == 0) {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar12) {
            *plVar20 = 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB_10a6dd39c;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar27 >> 1 & 1) == 0);
    }
    uVar24 = *(undefined8 *)(*plVar31 + 0x10);
    plVar20 = (long *)*plVar31;
    if (plVar20 != (long *)0x0) {
      puVar22 = (ulong *)(plVar20 + 1);
      do {
        uVar26 = *puVar22;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
        if (bVar12) {
          *puVar22 = uVar26 - 4;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if ((uVar26 & 0x1fffffffc) == 4) {
        do {
          uVar26 = *puVar22;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
          if (bVar12) {
            *puVar22 = uVar26 - 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (uVar26 - 1 == 0) {
          (**(code **)(*plVar20 + 8))();
        }
      }
    }
    if (((uint)uVar24 >> 5 & 1) == 0) {
      FUN_10a6dec9c(plVar31,puVar14[0xdb],1,puVar4);
      lVar25 = puVar14[0xdb];
      puVar22 = &uStack_190;
      func_0x000107c2b054(puVar22,&UNK_10f66e1e2);
      lVar29 = puVar14[0xdf];
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (lVar25 != 0) {
        FUN_10a76bf18((double)((float)((long)puVar22 - lVar29) / 1e+09),
                      *(undefined8 *)(lVar25 + 0x8d8),&uStack_190);
      }
      if (lStack_180 < 0) {
        __ZdlPv(uStack_190);
      }
      lVar25 = puVar14[0xdb];
      func_0x000107c2b054(&uStack_190,&UNK_10f66e1fe);
      if (*(char *)((long)puVar14 + 0x5f7) < '\0') {
        func_0x000107c3192c(puVar16,puVar14[0xbc],puVar14[0xbd]);
      }
      else {
        puVar14[0xb7] = puVar14[0xbd];
        *puVar16 = *puVar4;
        puVar14[0xb8] = puVar14[0xbe];
      }
      if (lVar25 != 0) {
        FUN_10a76bdb0(*(undefined8 *)(lVar25 + 0x8d8),&uStack_190,puVar16);
      }
      if (*(char *)((long)puVar14 + 0x5c7) < '\0') {
        __ZdlPv(*puVar16);
      }
      if (lStack_180 < 0) {
        __ZdlPv(uStack_190);
      }
      lVar25 = puVar14[0xcf];
      uVar24 = *(undefined8 *)(puVar14[0xdb] + 0x960);
      FUN_10a712eb8(puVar14 + 0x93,puVar6);
      FUN_10a6e5564(&uStack_190,lVar25 + 0x78,puVar14 + 0x93);
      FUN_10a6ded90(uVar24,plVar31,&uStack_190);
      FUN_10a6fd048(&uStack_190);
      func_0x00010a71259c(puVar14 + 0x93);
      FUN_10a6dee28(puVar14 + 2,plVar31);
      plVar31 = (long *)puVar14[0x2e];
      if (plVar31 != (long *)0x0) {
        plVar20 = plVar31 + 1;
        do {
          lVar25 = *plVar20;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar12) {
            *plVar20 = lVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
        }
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 != (long *)0x0) {
        puVar16 = (ulong *)(plVar28 + 1);
        do {
          uVar26 = *puVar16;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar12) {
            *puVar16 = uVar26 - 4;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar16;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar12) {
              *puVar16 = uVar26 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar28 + 8))();
          }
        }
      }
      plVar31 = (long *)puVar14[0xd0];
      if (plVar31 != (long *)0x0) {
        plVar28 = plVar31 + 1;
        do {
          lVar25 = *plVar28;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar12) {
            *plVar28 = lVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
        }
      }
      if (*plVar18 != 0) {
        func_0x0001092b4274();
      }
      if (puVar14[0xdc] != 0) {
        func_0x0001092b4274();
      }
      if (puVar14[0xd6] != 0) {
        func_0x0001092b4274();
      }
      plVar18 = (long *)puVar14[0xd5];
      if (plVar18 != (long *)0x0) {
        puVar16 = (ulong *)(plVar18 + 1);
        do {
          uVar26 = *puVar16;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
          if (bVar12) {
            *puVar16 = uVar26 - 4;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          do {
            uVar26 = *puVar16;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar12) {
              *puVar16 = uVar26 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar18 + 8))();
          }
        }
      }
      func_0x00010a71259c(puVar6);
      FUN_10ae0e238(plVar3);
      FUN_10a6fd048(puVar14 + 9);
LAB_10a6dd59c:
      plVar18 = (long *)puVar14[0xca];
      if (plVar18 != (long *)0x0) {
        plVar31 = plVar18 + 1;
        do {
          lVar25 = *plVar31;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar12) {
            *plVar31 = lVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      if (*(char *)((long)puVar14 + 0x5af) < '\0') {
        __ZdlPv(*puVar5);
      }
      if (*(char *)((long)puVar14 + 0x5f7) < '\0') {
        __ZdlPv(*puVar4);
      }
      plVar18 = (long *)puVar14[0xce];
      if (plVar18 != (long *)0x0) {
        plVar31 = plVar18 + 1;
        do {
          lVar25 = *plVar31;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar12) {
            *plVar31 = lVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      plVar18 = (long *)puVar14[0xcc];
      if (plVar18 != (long *)0x0) {
        plVar31 = plVar18 + 1;
        do {
          lVar25 = *plVar31;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar12) {
            *plVar31 = lVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      if (*(char *)((long)puVar14 + 0x3ef) < '\0') {
        __ZdlPv(puVar14[0x7b]);
      }
      if (*(char *)((long)puVar14 + 0x3b7) < '\0') {
        __ZdlPv(*puVar15);
      }
      plVar18 = (long *)puVar14[0xc6];
      if (plVar18 != (long *)0x0) {
        plVar31 = plVar18 + 1;
        do {
          lVar25 = *plVar31;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar12) {
            *plVar31 = lVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      plVar30 = (long *)*plVar30;
      if (plVar30 != (long *)0x0) {
        puVar4 = (ulong *)(plVar30 + 1);
        do {
          uVar26 = *puVar4;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar12) {
            *puVar4 = uVar26 - 4;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if ((uVar26 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
          do {
            uVar26 = *puVar4;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar12) {
              *puVar4 = uVar26 - 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (uVar26 - 1 == 0) {
            (**(code **)(*plVar30 + 8))(plVar30);
          }
        }
      }
      func_0x000109d1a1d0(puVar14 + 2);
      if ((*(char *)(puVar14 + 0xaf) == '\x01') && (*(char *)((long)puVar14 + 0x577) < '\0')) {
        __ZdlPv(*plVar2);
      }
      if (*(char *)(puVar14 + 0x73) == '\x01') {
        func_0x00010a052168(puVar14 + 0x65);
      }
      plVar18 = (long *)puVar14[0xd4];
      if (plVar18 != (long *)0x0) {
        plVar2 = plVar18 + 1;
        do {
          lVar25 = *plVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      plVar18 = (long *)puVar14[200];
      if (plVar18 != (long *)0x0) {
        plVar2 = plVar18 + 1;
        do {
          lVar25 = *plVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      plVar18 = (long *)puVar14[0xd8];
      if (plVar18 != (long *)0x0) {
        plVar2 = plVar18 + 1;
        do {
          lVar25 = *plVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar25 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      if (*(char *)((long)puVar14 + 0x627) < '\0') {
        __ZdlPv(*puVar1);
      }
      if ((*(char *)(puVar14 + 0xa3) == '\x01') && (*(char *)((long)puVar14 + 0x517) < '\0')) {
        __ZdlPv(*puVar23);
      }
      __ZdlPv(puVar14);
      return;
    }
    if (((uint)*(undefined8 *)(*plVar30 + 0x10) >> 1 & 1) == 0) {
      lVar25 = puVar14[0xdb];
      puVar23 = &uStack_190;
      func_0x000107c2b054(puVar23,&UNK_10f66e1a2);
      lVar29 = puVar14[0xdf];
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (lVar25 != 0) {
        FUN_10a76bf18((double)((float)((long)puVar23 - lVar29) / 1e+09),
                      *(undefined8 *)(lVar25 + 0x8d8),&uStack_190);
      }
      if (lStack_180 < 0) {
        __ZdlPv(uStack_190);
      }
    }
    __ZNSt13exception_ptrC1ERKS_(&uStack_1e0,*plVar28 + 0x90);
    func_0x0001098bc760(&uStack_190,&uStack_1e0);
    __ZNSt13exception_ptrD1Ev(&uStack_1e0);
    if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0x11d,&UNK_10f66e218);
    }
    FUN_10a1084cc(&uStack_190);
  }
  else {
    if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xc2,&UNK_10f66e132);
    }
    uVar24 = puVar14[0xdb];
    puVar14[0xd1] = puVar14[0xcb];
    lVar25 = puVar14[0xcc];
    puVar14[0xd2] = lVar25;
    if (lVar25 != 0) {
      plVar17 = (long *)(lVar25 + 8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar12) {
          *plVar17 = *plVar17 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    FUN_10a6d7f90(puVar14 + 9,uVar24,puVar14 + 0xd1);
    FUN_10a6de718(plVar28,plVar30,puVar14[9]);
    puVar6 = puVar14 + 0x9c;
    puVar16 = puVar14 + 0xbf;
    *plVar31 = *plVar28;
    plVar17 = (long *)(*plVar28 + 8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = *plVar17 + 4;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)((long)puVar14 + 0x704) = 2;
      lVar29 = puVar14[0x2d];
      plVar17 = (long *)(lVar29 + 0x10);
      lVar25 = puVar14[3];
      do {
        lVar27 = *plVar17;
        if (lVar27 == 0) {
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar12) {
            *plVar17 = 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
          if (cVar11 == '\0') goto LAB_10a6dd39c;
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar27 >> 1 & 1) == 0);
    }
    lVar25 = *plVar31;
    if (((uint)*(undefined8 *)(*plVar31 + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar25 + 0xb8) & 1) != 0) {
        FUN_10a1cffac(plVar3,lVar25 + 0x98);
        plVar17 = (long *)*plVar31;
        if (plVar17 != (long *)0x0) {
          puVar22 = (ulong *)(plVar17 + 1);
          do {
            uVar26 = *puVar22;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
            if (bVar12) {
              *puVar22 = uVar26 - 4;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            do {
              uVar26 = *puVar22;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
              if (bVar12) {
                *puVar22 = uVar26 - 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        plVar17 = (long *)*plVar28;
        if (plVar17 != (long *)0x0) {
          puVar22 = (ulong *)(plVar17 + 1);
          do {
            uVar26 = *puVar22;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
            if (bVar12) {
              *puVar22 = uVar26 - 4;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            do {
              uVar26 = *puVar22;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
              if (bVar12) {
                *puVar22 = uVar26 - 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        plVar17 = (long *)puVar14[9];
        if (plVar17 != (long *)0x0) {
          puVar22 = (ulong *)(plVar17 + 1);
          do {
            uVar26 = *puVar22;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
            if (bVar12) {
              *puVar22 = uVar26 - 4;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if ((uVar26 & 0x1fffffffc) == 4) {
            do {
              uVar26 = *puVar22;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
              if (bVar12) {
                *puVar22 = uVar26 - 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (uVar26 - 1 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
          }
        }
        plVar17 = (long *)puVar14[0xd2];
        if (plVar17 != (long *)0x0) {
          plVar7 = plVar17 + 1;
          do {
            lVar25 = *plVar7;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar12) {
              *plVar7 = lVar25 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        if ((*(byte *)(puVar14 + 0x4c) & 1) == 0) {
          FUN_10a00946c(&UNK_10f66e17f);
        }
        else {
          uVar24 = puVar14[0xdb];
          puVar14[0xda] = puVar14[200];
          puVar14[0xd9] = *plVar18;
          if (puVar14[200] != 0) {
            plVar18 = (long *)(puVar14[200] + 8);
            do {
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar12) {
                *plVar18 = *plVar18 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
          }
          FUN_10a6d7f90(puVar14 + 9,uVar24,puVar14 + 0xd9);
          FUN_10a6de718(plVar28,plVar30,puVar14[9]);
          *plVar20 = *plVar28;
          plVar18 = (long *)(*plVar28 + 8);
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar12) {
              *plVar18 = *plVar18 + 4;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (((uint)*(undefined8 *)(*plVar20 + 0x10) >> 1 & 1) == 0) {
            *(undefined1 *)((long)puVar14 + 0x704) = 3;
            lVar29 = puVar14[0x86];
            plVar18 = (long *)(lVar29 + 0x10);
            lVar25 = puVar14[3];
            do {
              lVar27 = *plVar18;
              if (lVar27 == 0) {
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar12) {
                  *plVar18 = 1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
                if (cVar11 == '\0') goto LAB_10a6dd39c;
              }
              else {
                ClearExclusiveLocal();
              }
            } while (((uint)lVar27 >> 1 & 1) == 0);
          }
          lVar25 = *plVar20;
          if (((uint)*(undefined8 *)(*plVar20 + 0x10) >> 5 & 1) == 0) {
            if ((*(byte *)(lVar25 + 0xb8) & 1) != 0) {
              FUN_10a1cffac(plVar31,lVar25 + 0x98);
              plVar18 = (long *)*plVar20;
              if (plVar18 != (long *)0x0) {
                puVar22 = (ulong *)(plVar18 + 1);
                do {
                  uVar26 = *puVar22;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
                  if (bVar12) {
                    *puVar22 = uVar26 - 4;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if ((uVar26 & 0x1fffffffc) == 4) {
                  do {
                    uVar26 = *puVar22;
                    cVar11 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
                    if (bVar12) {
                      *puVar22 = uVar26 - 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (uVar26 - 1 == 0) {
                    (**(code **)(*plVar18 + 8))();
                  }
                }
              }
              plVar18 = (long *)*plVar28;
              if (plVar18 != (long *)0x0) {
                puVar22 = (ulong *)(plVar18 + 1);
                do {
                  uVar26 = *puVar22;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
                  if (bVar12) {
                    *puVar22 = uVar26 - 4;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if ((uVar26 & 0x1fffffffc) == 4) {
                  do {
                    uVar26 = *puVar22;
                    cVar11 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
                    if (bVar12) {
                      *puVar22 = uVar26 - 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (uVar26 - 1 == 0) {
                    (**(code **)(*plVar18 + 8))();
                  }
                }
              }
              plVar18 = (long *)puVar14[9];
              if (plVar18 != (long *)0x0) {
                puVar22 = (ulong *)(plVar18 + 1);
                do {
                  uVar26 = *puVar22;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
                  if (bVar12) {
                    *puVar22 = uVar26 - 4;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if ((uVar26 & 0x1fffffffc) == 4) {
                  do {
                    uVar26 = *puVar22;
                    cVar11 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
                    if (bVar12) {
                      *puVar22 = uVar26 - 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (uVar26 - 1 == 0) {
                    (**(code **)(*plVar18 + 8))();
                  }
                }
              }
              plVar18 = (long *)puVar14[0xda];
              if (plVar18 != (long *)0x0) {
                plVar17 = plVar18 + 1;
                do {
                  lVar25 = *plVar17;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar12) {
                    *plVar17 = lVar25 + -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (lVar25 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                }
              }
              if (*(char *)(puVar14 + 0x73) != '\x01') {
                uVar24 = 0;
                uVar32 = 0;
              }
              else {
                uVar32 = puVar14[0x6b];
                uVar24 = puVar14[0x6a];
                param_2 = puVar14[0x6d];
              }
              *(undefined1 *)(puVar14 + 0xa8) = 0;
              *(undefined1 *)(puVar14 + 0xab) = 0;
              if (*(char *)(puVar14 + 0x4c) == '\x01') {
                puVar14[0xa9] = puVar14[0x4a];
                puVar14[0xa8] = *plVar3;
                puVar14[0xaa] = puVar14[0x4b];
                puVar14[0x4a] = 0;
                puVar14[0x4b] = 0;
                *plVar3 = 0;
                *(undefined1 *)(puVar14 + 0xab) = 1;
              }
              *(undefined1 *)(puVar14 + 0xa4) = 0;
              *(undefined1 *)(puVar14 + 0xa7) = 0;
              if (*(char *)(puVar14 + 0x30) == '\x01') {
                puVar14[0xa5] = puVar14[0x2e];
                puVar14[0xa4] = *plVar31;
                puVar14[0xa6] = puVar14[0x2f];
                puVar14[0x2e] = 0;
                puVar14[0x2f] = 0;
                *plVar31 = 0;
                *(undefined1 *)(puVar14 + 0xa7) = 1;
              }
              puVar14[10] = uVar32;
              puVar14[9] = uVar24;
              puVar14[0xb] = param_2;
              *(bool *)(puVar14 + 0xc) = *(char *)(puVar14 + 0x73) == '\x01';
              (**(code **)(*(long *)puVar14[0xc9] + 0x10))
                        (plVar28,(long *)puVar14[0xc9],puVar4,puVar14 + 0xa8,puVar14 + 0xa4,
                         puVar14 + 9,*(int *)(puVar14 + 0xe0) == 0);
              if ((*(char *)(puVar14 + 0xa7) == '\x01') && (lVar25 = puVar14[0xa4], lVar25 != 0)) {
                puVar14[0xa5] = lVar25;
                __ZdlPv();
              }
              if ((*(char *)(puVar14 + 0xab) == '\x01') && (lVar25 = puVar14[0xa8], lVar25 != 0)) {
                puVar14[0xa9] = lVar25;
                __ZdlPv();
              }
              func_0x0001098ad440(plVar20,plVar30,plVar28);
              puVar14[9] = *plVar20;
              plVar18 = (long *)(*plVar20 + 8);
              do {
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar12) {
                  *plVar18 = *plVar18 + 4;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (((uint)*(undefined8 *)(puVar14[9] + 0x10) >> 1 & 1) == 0) {
                *(undefined1 *)((long)puVar14 + 0x704) = 4;
                lVar29 = puVar14[9];
                plVar18 = (long *)(lVar29 + 0x10);
                lVar25 = puVar14[3];
                do {
                  lVar27 = *plVar18;
                  if (lVar27 == 0) {
                    cVar11 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                    if (bVar12) {
                      *plVar18 = 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                    if (cVar11 == '\0') {
LAB_10a6dd39c:
                      lStack_180 = lVar25;
                      uStack_190 = 0;
                      plStack_188 = puVar14;
                      func_0x000109d1b588(lVar29 + 0x18,&uStack_190);
                      *(undefined8 *)(lVar29 + 0x10) = 0;
                      return;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                } while (((uint)lVar27 >> 1 & 1) == 0);
              }
              uVar24 = *(undefined8 *)(puVar14[9] + 0x10);
              plVar18 = (long *)puVar14[9];
              if (plVar18 != (long *)0x0) {
                puVar22 = (ulong *)(plVar18 + 1);
                do {
                  uVar26 = *puVar22;
                  cVar11 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
                  if (bVar12) {
                    *puVar22 = uVar26 - 4;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if ((uVar26 & 0x1fffffffc) == 4) {
                  do {
                    uVar26 = *puVar22;
                    cVar11 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(puVar22,0x10);
                    if (bVar12) {
                      *puVar22 = uVar26 - 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (uVar26 - 1 == 0) {
                    (**(code **)(*plVar18 + 8))();
                  }
                }
              }
              if (((uint)uVar24 >> 5 & 1) == 0) {
                FUN_10a6dec9c(puVar14 + 9,puVar14[0xdb],1,puVar4);
                lVar25 = puVar14[0xdb];
                puVar22 = &uStack_190;
                func_0x000107c2b054(puVar22,&UNK_10f66e1e2);
                lVar29 = puVar14[0xdf];
                __ZNSt3__16chrono12steady_clock3nowEv();
                if (lVar25 != 0) {
                  FUN_10a76bf18((double)((float)((long)puVar22 - lVar29) / 1e+09),
                                *(undefined8 *)(lVar25 + 0x8d8),&uStack_190);
                }
                if (lStack_180 < 0) {
                  __ZdlPv(uStack_190);
                }
                lVar25 = puVar14[0xdb];
                func_0x000107c2b054(&uStack_190,&UNK_10f66e1fe);
                if (*(char *)((long)puVar14 + 0x5f7) < '\0') {
                  func_0x000107c3192c(puVar16,puVar14[0xbc],puVar14[0xbd]);
                }
                else {
                  puVar14[0xc0] = puVar14[0xbd];
                  *puVar16 = *puVar4;
                  puVar14[0xc1] = puVar14[0xbe];
                }
                if (lVar25 != 0) {
                  FUN_10a76bdb0(*(undefined8 *)(lVar25 + 0x8d8),&uStack_190,puVar16);
                }
                if (*(char *)((long)puVar14 + 0x60f) < '\0') {
                  __ZdlPv();
                }
                if (lStack_180 < 0) {
                  __ZdlPv();
                }
                uStack_1b0 = 0;
                cStack_198 = '\0';
                uStack_1d8 = 0;
                uStack_1e0 = 0;
                uStack_1c8 = 0;
                lStack_1d0 = 0;
                uStack_1c0 = 0x3f800000;
                if (*(char *)((long)puVar14 + 0x627) < '\0') {
                  func_0x000107c3192c(puVar6,puVar14[0xc2],puVar14[0xc3]);
                }
                else {
                  puVar14[0x9d] = puVar14[0xc3];
                  *puVar6 = *puVar1;
                  puVar14[0x9e] = puVar14[0xc4];
                }
                uVar10 = *(undefined4 *)(puVar14 + 0xe0);
                *(undefined1 *)(puVar14 + 0x9f) = 1;
                __ZNSt3__16chrono12system_clock3nowEv();
                FUN_10a6e53f0(&uStack_190,puVar15,&uStack_1b0,&uStack_1e0,puVar6,uVar10,1);
                if ((*(char *)(puVar14 + 0x9f) == '\x01') &&
                   (*(char *)((long)puVar14 + 0x4f7) < '\0')) {
                  __ZdlPv(*puVar6);
                }
                func_0x00010a71245c(&uStack_1e0);
                if ((cStack_198 == '\x01') && (cStack_199 < '\0')) {
                  __ZdlPv(CONCAT71(uStack_1af,uStack_1b0));
                }
                FUN_10a6ded90(*(undefined8 *)(puVar14[0xdb] + 0x960),puVar14 + 9,&uStack_190);
                FUN_10a6dee28(puVar14 + 2,puVar14 + 9);
                FUN_10a6fd048(&uStack_190);
                plVar18 = (long *)puVar14[10];
                if (plVar18 != (long *)0x0) {
                  plVar17 = plVar18 + 1;
                  do {
                    lVar25 = *plVar17;
                    cVar11 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar12) {
                      *plVar17 = lVar25 + -1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if (lVar25 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                  }
                }
                plVar20 = (long *)*plVar20;
                if (plVar20 != (long *)0x0) {
                  puVar16 = (ulong *)(plVar20 + 1);
                  do {
                    uVar26 = *puVar16;
                    cVar11 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                    if (bVar12) {
                      *puVar16 = uVar26 - 4;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((uVar26 & 0x1fffffffc) == 4) {
                    do {
                      uVar26 = *puVar16;
                      cVar11 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                      if (bVar12) {
                        *puVar16 = uVar26 - 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                    if (uVar26 - 1 == 0) {
                      (**(code **)(*plVar20 + 8))();
                    }
                  }
                }
                plVar28 = (long *)*plVar28;
                if (plVar28 != (long *)0x0) {
                  puVar16 = (ulong *)(plVar28 + 1);
                  do {
                    uVar26 = *puVar16;
                    cVar11 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                    if (bVar12) {
                      *puVar16 = uVar26 - 4;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar11 != '\0');
                  if ((uVar26 & 0x1fffffffc) == 4) {
                    do {
                      uVar26 = *puVar16;
                      cVar11 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                      if (bVar12) {
                        *puVar16 = uVar26 - 1;
                        cVar11 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar11 != '\0');
                    if (uVar26 - 1 == 0) {
                      (**(code **)(*plVar28 + 8))();
                    }
                  }
                }
                if ((*(char *)(puVar14 + 0x30) == '\x01') && (*plVar31 != 0)) {
                  puVar14[0x2e] = *plVar31;
                  __ZdlPv();
                }
                if ((*(char *)(puVar14 + 0x4c) == '\x01') && (*plVar3 != 0)) {
                  puVar14[0x4a] = *plVar3;
                  __ZdlPv();
                }
                goto LAB_10a6dd59c;
              }
              if (((uint)*(undefined8 *)(*plVar30 + 0x10) >> 1 & 1) == 0) {
                lVar25 = puVar14[0xdb];
                puVar23 = &uStack_190;
                func_0x000107c2b054(puVar23,&UNK_10f66e1a2);
                lVar29 = puVar14[0xdf];
                __ZNSt3__16chrono12steady_clock3nowEv();
                if (lVar25 != 0) {
                  FUN_10a76bf18((double)((float)((long)puVar23 - lVar29) / 1e+09),
                                *(undefined8 *)(lVar25 + 0x8d8),&uStack_190);
                }
                if (lStack_180 < 0) {
                  __ZdlPv(uStack_190);
                }
              }
              __ZNSt13exception_ptrC1ERKS_(&uStack_1e0,*plVar20 + 0x90);
              func_0x0001098bc760(&uStack_190,&uStack_1e0);
              __ZNSt13exception_ptrD1Ev(&uStack_1e0);
              if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
                func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f66deed,0xdf,&UNK_10f66e1b5);
              }
              FUN_10a1084cc(&uStack_190);
            }
          }
          else {
            func_0x0001092af97c(lVar25 + 0x90);
          }
        }
      }
    }
    else {
      func_0x0001092af97c(lVar25 + 0x90);
    }
  }
LAB_10a6dda58:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10a6dda5c);
  (*pcVar13)();
}



/* Entry: 10a6de354; end: 10a6de3f7;  */

undefined8 FUN_10a6de354(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x30);
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = lVar6;
  return 0;
}



/* Entry: 10a6de3f8; end: 10a6de473;  */

void FUN_10a6de3f8(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(*(long *)(param_2 + 0x100) + 0x1c8);
  (**(code **)(*plVar2 + 200))();
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = plVar2[1];
  if (lVar3 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar3;
    if ((lVar3 != 0) && (lVar3 = *plVar2, *param_1 = lVar3, lVar3 != 0)) {
      return;
    }
  }
  FUN_10a00946c(&UNK_10f66e876);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6de460);
  (*pcVar1)();
}



/* Entry: 10a6de474; end: 10a6de5fb;  */

void FUN_10a6de474(undefined8 *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 *******pppppppuVar7;
  ulong uVar8;
  undefined8 ******ppppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 ******ppppppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ppppppuStack_60 = (undefined8 *******)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (param_3 != 0) {
    do {
      uVar4 = uStack_50;
      uVar8 = uStack_50 >> 0x38;
      uVar2 = uStack_58;
      if (-1 < (long)uStack_50) {
        uVar2 = uVar8;
      }
      if (uVar2 == 0) {
        (**(code **)(*param_2 + 0x10))(&ppppppuStack_78,param_2,param_3);
        if ((long)uVar4 < 0) {
          __ZdlPv(ppppppuStack_60);
        }
        uStack_50 = uStack_68;
        uStack_58 = uStack_70;
        ppppppuStack_60 = ppppppuStack_78;
        uVar8 = uStack_68 >> 0x38;
        if (-1 < (long)uStack_68) goto LAB_10a6de4d8;
LAB_10a6de530:
        if (uStack_58 == 0) {
LAB_10a6de5c4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6de5c8);
          (*pcVar5)();
        }
        bVar3 = *(byte *)((long)ppppppuStack_60 + (uStack_58 - 1));
        uVar8 = uStack_58 - 1;
        uStack_58 = uVar8;
        pppppppuVar7 = (undefined8 *******)ppppppuStack_60;
      }
      else {
        if ((long)uStack_50 < 0) goto LAB_10a6de530;
LAB_10a6de4d8:
        if ((int)uVar8 == 0) goto LAB_10a6de5c4;
        bVar3 = *(byte *)((long)&uStack_68 + uVar8 + 7);
        uVar8 = uVar8 - 1;
        uStack_50 = CONCAT17((char)uVar8,(undefined7)uStack_50);
        pppppppuVar7 = &ppppppuStack_60;
      }
      *(undefined1 *)((long)pppppppuVar7 + uVar8) = 0;
      if (-1 < (char)bVar3) {
        uVar6 = (uint)bVar3;
        uVar1 = uVar6 + (uint)bVar3 * 8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)(char)(&UNK_10f670e79)
                                       [(ulong)(uVar6 + ((uVar6 - (uVar1 >> 8) >> 1 & 0x7f) +
                                                         (uVar1 >> 8) >> 4) * -0x1f) & 0xff]);
      }
      uVar2 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
    } while (uVar2 < param_3);
    if ((long)uStack_50 < 0) {
      __ZdlPv(ppppppuStack_60);
    }
  }
  return;
}



/* Entry: 10a6de5fc; end: 10a6de717;  */

undefined8 * FUN_10a6de5fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    func_0x00010a04a7fc(param_1 + 1,param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uVar10 = *(undefined8 *)(param_2 + 0x50);
    uVar9 = *(undefined8 *)(param_2 + 0x48);
    uVar11 = *(undefined8 *)(param_2 + 0x18);
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    param_1[3] = uVar11;
    param_1[10] = uVar10;
    param_1[9] = uVar9;
    param_1[8] = uVar8;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    param_1[5] = uVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0xb,param_2 + 0x58);
  }
  else {
    *param_1 = &PTR_DAT_110b17898;
    lVar4 = *(long *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = uVar5;
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
    *param_1 = &PTR_DAT_110b9f078;
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    uVar10 = *(undefined8 *)(param_2 + 0x40);
    uVar9 = *(undefined8 *)(param_2 + 0x38);
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = uVar11;
    param_1[8] = uVar10;
    param_1[7] = uVar9;
    param_1[6] = uVar8;
    param_1[5] = uVar7;
    param_1[4] = uVar6;
    param_1[3] = uVar5;
    if (*(char *)(param_2 + 0x6f) < '\0') {
      func_0x000107c3192c(param_1 + 0xb,*(undefined8 *)(param_2 + 0x58),
                          *(undefined8 *)(param_2 + 0x60));
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x60);
      uVar5 = *(undefined8 *)(param_2 + 0x58);
      param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
      param_1[0xc] = uVar6;
      param_1[0xb] = uVar5;
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return param_1;
}



/* Entry: 10a6de718; end: 10a6dec9b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6de870) */
/* WARNING: Removing unreachable block (ram,0x00010a6dea80) */
/* WARNING: Removing unreachable block (ram,0x00010a6de830) */
/* WARNING: Removing unreachable block (ram,0x00010a6de9c4) */

void FUN_10a6de718(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x128;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x17) = 0;
  *plVar4 = (long)&PTR_FUN_110c13a60;
  plVar10 = plVar4 + 0x18;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x19] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1c] = 0;
  plVar4[0x1d] = 0x32aaaba7;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[0x24] = 0;
  lStack_78 = 0;
  plVar4[0x1a] = (long)plVar4;
  plVar4[0x1b] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x19] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1d);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a711fa8;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x19];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a6de9b0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x1a];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x19];
    plVar4[0x19] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x1a];
    plVar4[0x1a] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x1a);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a6debf0:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1d);
  }
  else {
    lVar8 = plVar4[0x1a];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x19];
    plVar4[0x19] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x1a];
    plVar4[0x1a] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x1a);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a6de9b0:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a712140;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a6debec;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x1a];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x19];
  plVar4[0x19] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a6dea94:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a6debe4;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a6dea94;
  pcStack_68 = FUN_10a711fa8;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x1a];
  plVar4[0x1a] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x1a);
  }
LAB_10a6debe4:
  *param_1 = (long)plVar4;
LAB_10a6debec:
  plStack_80 = (long *)0x0;
  goto LAB_10a6debf0;
}



/* Entry: 10a6dec9c; end: 10a6ded8f;  */

void FUN_10a6dec9c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c14bc8;
  plVar1 = plVar4 + 3;
  FUN_10a6f27ec(plVar1,param_2,param_3,param_4);
  plStack_50 = plVar1;
  plStack_48 = plVar4;
  FUN_10a6ff650(&plStack_50,plVar4 + 8,plVar1);
  FUN_10a6ff4ac(param_1,&plStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a6ded90; end: 10a6dee27;  */

void FUN_10a6ded90(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(auStack_30);
  FUN_10a6eb7a4(param_1,param_2,auStack_30);
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



/* Entry: 10a6dee28; end: 10a6dee67;  */

void FUN_10a6dee28(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a712610(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a6dee68; end: 10a6df2bb;  */

/* WARNING: Removing unreachable block (ram,0x00010a6df0b0) */
/* WARNING: Removing unreachable block (ram,0x00010a6df10c) */

void FUN_10a6dee68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  double dVar6;
  double extraout_d1;
  undefined1 auVar7 [16];
  double dVar8;
  uint uStack_174;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  char cStack_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  byte bStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  char cStack_e8;
  undefined8 uStack_e0;
  char cStack_c9;
  double dStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  undefined8 uStack_a8;
  char cStack_91;
  long lStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  char cStack_79;
  char cStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  *param_1 = &PTR_FUN_110c78d80;
  param_1[1] = 0;
  FUN_10ae0e08c(param_1,0);
  uVar4 = param_1[1];
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(param_1 + 0xf,param_2,uVar4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_3 + 0xc0);
  FUN_10a6e51b8(auStack_170,param_3);
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 1;
  uVar4 = param_1[0x16];
  if (uVar4 == 0) {
    uVar4 = param_1[1];
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00010a700ae4();
    param_1[0x16] = uVar4;
  }
  auVar7._8_8_ = uStack_c0;
  auVar7._0_8_ = dStack_c8;
  auVar1._8_8_ = uStack_c0;
  auVar1._0_8_ = dStack_c8;
  auVar7 = NEON_ext(auVar7,auVar1,8,1);
  dVar6 = (dStack_c8 * 3.141592653589793) / 180.0;
  ___sincos_stret();
  dVar8 = dVar6 * dVar6 * -0.006694379990141316 + 1.0;
  dVar6 = dVar8;
  _pow(dVar8,0x3ff8000000000000);
  dVar8 = dStack_b8 / ((extraout_d1 * 20037508.342789244) / (SQRT(dVar8) * 180.0));
  dStack_b8 = dStack_b8 / (19903369.647886984 / (dVar6 * 180.0));
  *(double *)(uVar4 + 0x18) = auVar7._8_8_ - dStack_b8;
  *(double *)(uVar4 + 0x10) = auVar7._0_8_ - dVar8;
  *(double *)(uVar4 + 0x28) = auVar7._8_8_ + dStack_b8;
  *(double *)(uVar4 + 0x20) = auVar7._0_8_ + dVar8;
  param_1[0x18] = uStack_c0;
  param_1[0x1a] = dStack_c8;
  *(undefined4 *)((long)param_1 + 0xcc) = 1;
  if (*(int *)(param_3 + 0xe8) == 0) {
    uVar5 = 3;
  }
  else {
    uVar5 = 1;
    if (*(int *)(param_3 + 0xe8) != 1) goto LAB_10a6defdc;
  }
  *(undefined4 *)(param_1 + 0x1b) = uVar5;
LAB_10a6defdc:
  *(undefined4 *)((long)param_1 + 0xdc) = 1;
  if (cStack_140 == '\x01') {
    uStack_174 = 0;
    func_0x0001098d58d4(&lStack_70,param_1 + 3,&uStack_174);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lStack_70 + 0x10,auStack_158);
  }
  if (bStack_108 == 1) {
    uStack_174 = (uint)bStack_108;
    func_0x0001098d58d4(&lStack_70,param_1 + 3,&uStack_174);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lStack_70 + 0x10,auStack_120);
  }
  if (cStack_e8 == '\x01') {
    uVar4 = param_1[1];
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x11,auStack_100,uVar4);
  }
  uStack_60 = CONCAT17(0x12,(undefined7)uStack_60);
  uStack_68 = 0x6c6275705f737265;
  lStack_70 = 0x6b72616d646e616c;
  uStack_60 = CONCAT53(uStack_60._3_5_,0x6369);
  uVar4 = param_1[1];
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(param_1 + 0x12,&lStack_70,uVar4);
  if (cStack_78 == '\x01') {
    if (cStack_79 < '\0') {
      func_0x000107c3192c(&lStack_70,lStack_90,uStack_88);
    }
    else {
      uStack_68 = uStack_88;
      lStack_70 = lStack_90;
      uStack_60 = CONCAT17(cStack_79,uStack_80);
    }
    uVar4 = param_1[1];
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c3024c(param_1 + 0x14,&lStack_70,uVar4);
  }
  uVar5 = *(undefined4 *)(param_3 + 0x108);
  uStack_174 = 0;
  FUN_10a714638(&lStack_70,param_1 + 7,&uStack_174);
  *(undefined4 *)(lStack_70 + 0xc) = uVar5;
  uVar4 = *(ulong *)(param_3 + 0x118);
  if ((uVar4 & 1) != 0) {
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 2;
    uVar3 = param_1[0x17];
    if (uVar3 == 0) {
      uVar3 = param_1[1];
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      func_0x00010564a3b4();
      param_1[0x17] = uVar3;
      uVar4 = *(ulong *)(param_3 + 0x118);
    }
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6df248);
      (*pcVar2)();
    }
    *(long *)(uVar3 + 0x10) = *(long *)(param_3 + 0x110) / 1000000;
  }
  if ((cStack_78 == '\x01') && (cStack_79 < '\0')) {
    __ZdlPv(lStack_90);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(uStack_a8);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(uStack_e0);
  }
  if ((cStack_e8 == '\x01') && (cStack_e9 < '\0')) {
    __ZdlPv(auStack_100[0]);
  }
  FUN_10a700ce4(auStack_138);
  FUN_10a700ce4(auStack_170);
  return;
}



/* Entry: 10a6df2bc; end: 10a6df3a3;  */

undefined8 * FUN_10a6df2bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a6df3a4; end: 10a6df57f;  */

undefined ****** FUN_10a6df3a4(undefined ******param_1,long param_2)

{
  undefined ******ppppppuVar1;
  ulong *puVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ******ppppppuVar10;
  long lVar11;
  undefined *****pppppuVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined ******ppppppuVar16;
  undefined ***pppuVar17;
  long *plVar18;
  undefined ****ppppuStack_210;
  undefined *****pppppuStack_208;
  undefined ****ppppuStack_200;
  undefined ****ppppuStack_1f8;
  undefined ****appppuStack_1f0 [28];
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined *****pppppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined *****pppppuStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined *****pppppuStack_90;
  undefined ****ppppuStack_88;
  undefined *****pppppuStack_80;
  undefined8 uStack_78;
  undefined *****pppppuStack_70;
  undefined4 uStack_68;
  long lStack_58;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = *(int *)(param_2 + 0x18);
  *(int *)(param_1 + 2) = iVar4;
  if (iVar4 != 0) {
    ppppppuVar16 = param_1;
    for (plVar18 = *(long **)(param_2 + 0x10); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      if (plVar18[3] == 0) {
        FUN_10a00946c(&UNK_10f66e9c2);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6df540);
        (*pcVar7)();
      }
      FUN_10a6e6578(&uStack_98,param_1);
      uVar13 = uStack_98;
      FUN_10a700ea0(&uStack_b0,param_1);
      uStack_a0 = *(undefined4 *)(plVar18 + 2);
      ppppuStack_88 = (undefined ****)FUN_10a7163f4;
      pppppuStack_80 = (undefined *****)&PTR_FUN_110c13cf0;
      pppppuStack_70 = pppppuStack_a8;
      uStack_78 = uStack_b0;
      uStack_b0 = 0;
      pppppuStack_a8 = (undefined *****)0x0;
      uStack_68 = uStack_a0;
      FUN_10a6e7010(uVar13,&ppppuStack_88);
      ppppppuVar16 = &pppppuStack_80;
      (*(code *)*pppppuStack_80)();
      ppppppuVar10 = (undefined ******)pppppuStack_a8;
      if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
        ppppppuVar1 = (undefined ******)(pppppuStack_a8 + 1);
        do {
          pppppuVar12 = *ppppppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
          if (bVar6) {
            *ppppppuVar1 = (undefined *****)((long)pppppuVar12 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppuVar12 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_a8)[2])(pppppuStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar16 = ppppppuVar10;
        }
      }
      ppppppuVar10 = (undefined ******)pppppuStack_90;
      if ((undefined ******)pppppuStack_90 != (undefined ******)0x0) {
        ppppppuVar1 = (undefined ******)(pppppuStack_90 + 1);
        do {
          pppppuVar12 = *ppppppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
          if (bVar6) {
            *ppppppuVar1 = (undefined *****)((long)pppppuVar12 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppuVar12 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_90)[2])(pppppuStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar16 = ppppppuVar10;
        }
      }
    }
    param_1 = ppppppuVar16;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return ppppppuVar16;
    }
LAB_10a6df540:
    ___stack_chk_fail();
    func_0x00010a716334(&uStack_98);
    ppppppuVar16 = param_1;
    __Unwind_Resume();
    pcStack_b8 = FUN_10a6df580;
    pppppuStack_c8 = (undefined *****)param_1;
    pppppuStack_c0 = (undefined *****)&stack0xfffffffffffffff0;
    if (*(char *)((long)ppppppuVar16 + 0x4f) < '\0') {
      __ZdlPv(ppppppuVar16[7]);
    }
    if (*(char *)((long)ppppppuVar16 + 0x17) < '\0') {
      __ZdlPv(*ppppppuVar16);
    }
    return ppppppuVar16;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) goto LAB_10a6df540;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar12 = param_1[0xb];
  if (pppppuVar12[300][0x11] != (undefined ***)0x0) {
    FUN_10a700ea0(&ppppuStack_210,param_1);
    if ((undefined ******)pppppuStack_208 == (undefined ******)0x0) {
      pppppuStack_c0 = (undefined *****)(undefined ******)0x0;
    }
    else {
      ppppppuVar16 = (undefined ******)(pppppuStack_208 + 1);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar16,0x10);
        if (bVar6) {
          *ppppppuVar16 = (undefined *****)((long)*ppppppuVar16 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
        pppppuStack_c0 = pppppuStack_208;
      } while (cVar5 != '\0');
    }
    uStack_98 = 0x10a714f88;
    pppppuStack_90 = (undefined *****)&PTR_DAT_110c13bf0;
    ppppuStack_88 = ppppuStack_210;
    pppppuStack_80 = pppppuStack_208;
    uStack_f0 = 0;
    puStack_e8 = (undefined8 *)0x0;
    if ((undefined ******)pppppuStack_c0 != (undefined ******)0x0) {
      ppppppuVar16 = (undefined ******)(pppppuStack_c0 + 1);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar16,0x10);
        if (bVar6) {
          *ppppppuVar16 = (undefined *****)((long)*ppppppuVar16 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_d8 = 0x10a714ff0;
    ppuStack_d0 = &PTR_DAT_110c13c10;
    pppppuStack_c8 = (undefined *****)ppppuStack_210;
    uStack_100 = 0;
    uStack_f8 = 0;
    FUN_10a00946c(&UNK_10f670e99);
    goto LAB_10a6e63e0;
  }
  pppuVar17 = pppppuVar12[300][0x75];
  ppppuStack_210 = (undefined ****)pppppuVar12;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    func_0x000107c3192c(&pppppuStack_208,param_1[0xc],param_1[0xd]);
  }
  else {
    ppppuStack_200 = (undefined ****)param_1[0xd];
    pppppuStack_208 = param_1[0xc];
    ppppuStack_1f8 = (undefined ****)param_1[0xe];
  }
  FUN_10ae0e0f0(appppuStack_1f0,0,param_1 + 0xf);
  FUN_10a700ea0(&uStack_110,param_1);
  puVar8 = (undefined8 *)0x178;
  __Znwm();
  *puVar8 = FUN_10a72a4c8;
  puVar8[1] = FUN_10a72a76c;
  func_0x0001092ba17c(puVar8 + 2);
  ppppppuVar16 = (undefined ******)puVar8[7];
  if (ppppppuVar16 != (undefined ******)0x0) {
    ppppppuVar10 = ppppppuVar16 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar10,0x10);
      if (bVar6) {
        *ppppppuVar10 = (undefined *****)((long)*ppppppuVar10 + 4);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar8[9] = ppppuStack_210;
  puVar8[0xb] = ppppuStack_200;
  puVar8[10] = pppppuStack_208;
  puVar8[0xc] = ppppuStack_1f8;
  pppppuStack_208 = (undefined *****)0x0;
  ppppuStack_200 = (undefined ****)0x0;
  ppppuStack_1f8 = (undefined ****)0x0;
  FUN_10a7013e8(puVar8 + 0xd,0,appppuStack_1f0);
  puVar8[0x2a] = plStack_108;
  puVar8[0x29] = uStack_110;
  uStack_110 = 0;
  plStack_108 = (long *)0x0;
  puVar8[0x2b] = pppuVar17;
  *(undefined1 *)(puVar8 + 0x2c) = 0;
  *(undefined1 *)(puVar8 + 0x2e) = 0;
  puVar9 = puVar8 + 0x2b;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a700ee0(puVar8 + 0x2d,puVar8 + 9);
    puVar8[0x2b] = puVar8[0x2d];
    plVar18 = (long *)(puVar8[0x2d] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = *plVar18 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0x2b] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x2e) = 1;
      lVar11 = puVar8[0x2b];
      plVar18 = (long *)(lVar11 + 0x10);
      uVar13 = puVar8[3];
      do {
        lVar15 = *plVar18;
        if (lVar15 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            uStack_f0 = 0;
            puStack_e8 = puVar8;
            uStack_e0 = uVar13;
            func_0x000109d1b588(lVar11 + 0x18,&uStack_f0);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto LAB_10a6e626c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar15 >> 1 & 1) == 0);
    }
    ppppppuVar10 = (undefined ******)puVar8[0x2b];
    if (((uint)*(undefined8 *)(puVar8[0x2b] + 0x10) >> 5 & 1) == 0) {
      if (ppppppuVar10 != (undefined ******)0x0) {
        ppppppuVar1 = ppppppuVar10 + 1;
        do {
          pppppuVar12 = *ppppppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
          if (bVar6) {
            *ppppppuVar1 = (undefined *****)((long)pppppuVar12 + -4);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (((ulong)pppppuVar12 & 0x1fffffffc) == 4) {
          do {
            pppppuVar12 = *ppppppuVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
            if (bVar6) {
              *ppppppuVar1 = (undefined *****)((long)pppppuVar12 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((undefined *****)((long)pppppuVar12 + -1) == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar10)[1])();
          }
        }
      }
      plVar18 = (long *)puVar8[0x2d];
      if (plVar18 != (long *)0x0) {
        puVar2 = (ulong *)(plVar18 + 1);
        do {
          uVar14 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar14 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar14 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar18 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      plVar18 = (long *)puVar8[0x2a];
      if (plVar18 != (long *)0x0) {
        plVar3 = plVar18 + 1;
        do {
          lVar11 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      FUN_10ae0e238(puVar8 + 0xd);
      if (*(char *)((long)puVar8 + 0x67) < '\0') {
        __ZdlPv(puVar8[10]);
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto LAB_10a6e626c;
    }
  }
  else {
LAB_10a6e626c:
    plVar18 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar3 = plStack_108 + 1;
      do {
        lVar11 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      }
    }
    ppppppuVar10 = (undefined ******)appppuStack_1f0;
    FUN_10ae0e238(ppppppuVar10);
    if ((long)ppppuStack_1f8 < 0) {
      ppppppuVar10 = (undefined ******)pppppuStack_208;
      __ZdlPv(pppppuStack_208);
    }
    if (ppppppuVar16 != (undefined ******)0x0) {
      ppppppuVar1 = ppppppuVar16 + 1;
      do {
        pppppuVar12 = *ppppppuVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
        if (bVar6) {
          *ppppppuVar1 = (undefined *****)((long)pppppuVar12 + -4);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((ulong)pppppuVar12 & 0x1fffffffc) == 4) {
        do {
          pppppuVar12 = *ppppppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
          if (bVar6) {
            *ppppppuVar1 = (undefined *****)((long)pppppuVar12 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((undefined *****)((long)pppppuVar12 + -1) == (undefined *****)0x0) {
          (*(code *)(*ppppppuVar16)[1])(ppppppuVar16);
          ppppppuVar10 = ppppppuVar16;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return ppppppuVar10;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(ppppppuVar10 + 0x12);
LAB_10a6e63e0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6e63e4);
  (*pcVar7)();
}



/* Entry: 10a6df580; end: 10a6df5bf;  */

undefined8 * FUN_10a6df580(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a6df5c0; end: 10a6dfc87;  */

/* WARNING: Removing unreachable block (ram,0x00010a6df7f4) */

void FUN_10a6df5c0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4,long *param_5,
                  long *param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 auStack_170 [2];
  char cStack_159;
  char cStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  long lStack_128;
  long *plStack_120;
  undefined1 auStack_118 [112];
  char cStack_a8;
  undefined4 uStack_a0;
  undefined8 auStack_98 [2];
  char cStack_81;
  char cStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  if ((*param_5 == 0) && (*param_6 == 0)) {
    FUN_10a00946c(&UNK_10f66e233);
    lVar9 = extraout_x8;
  }
  else {
    uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x960) + 0x3a8);
    FUN_10a1ccb30(auStack_170);
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_150,*param_4,param_4[1]);
    }
    else {
      uStack_148 = param_4[1];
      uStack_150 = *param_4;
      lStack_140 = param_4[2];
    }
    plStack_130 = (long *)param_5[1];
    lStack_138 = *param_5;
    if (param_5[1] != 0) {
      plVar8 = (long *)(param_5[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_120 = (long *)param_6[1];
    lStack_128 = *param_6;
    if (param_6[1] != 0) {
      plVar8 = (long *)(param_6[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a6fd7c8(auStack_118,param_7);
    uStack_a0 = param_8;
    FUN_10a1ccb30(auStack_98,param_9);
    puVar6 = (undefined8 *)0x168;
    __Znwm();
    *puVar6 = FUN_10a7339d8;
    puVar6[1] = FUN_10a733d08;
    FUN_10a711e58(puVar6 + 2);
    lVar9 = puVar6[7];
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = *plVar8 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *param_1 = lVar9;
    puVar6[9] = param_2;
    FUN_10a1ccb30(puVar6 + 10,auStack_170);
    if (lStack_140 < 0) {
      func_0x000107c3192c(puVar6 + 0xe,uStack_150,uStack_148);
    }
    else {
      puVar6[0xf] = uStack_148;
      puVar6[0xe] = uStack_150;
      puVar6[0x10] = lStack_140;
    }
    puVar6[0x14] = plStack_120;
    puVar6[0x13] = lStack_128;
    puVar6[0x12] = plStack_130;
    puVar6[0x11] = lStack_138;
    lStack_138 = 0;
    plStack_130 = (long *)0x0;
    lStack_128 = 0;
    plStack_120 = (long *)0x0;
    FUN_10a6fcf4c(puVar6 + 0x15,auStack_118);
    *(undefined4 *)(puVar6 + 0x24) = uStack_a0;
    FUN_10a1ccb30(puVar6 + 0x25,auStack_98);
    puVar6[0x29] = uVar12;
    *(undefined1 *)(puVar6 + 0x2a) = 0;
    *(undefined1 *)(puVar6 + 0x2c) = 0;
    puVar7 = puVar6 + 0x29;
    FUN_10a6fd0e0(puVar7,puVar6);
    if (((ulong)puVar7 & 1) != 0) {
LAB_10a6df9c0:
      if ((cStack_80 == '\x01') && (cStack_81 < '\0')) {
        __ZdlPv(auStack_98[0]);
      }
      if (cStack_a8 == '\x01') {
        func_0x00010a052168(auStack_118);
      }
      plVar8 = plStack_120;
      if (plStack_120 != (long *)0x0) {
        plVar2 = plStack_120 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_120 + 0x10))(plStack_120);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_130;
      if (plStack_130 != (long *)0x0) {
        plVar2 = plStack_130 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_130 + 0x10))(plStack_130);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_140 < 0) {
        __ZdlPv(uStack_150);
      }
      if ((cStack_158 == '\x01') && (cStack_159 < '\0')) {
        __ZdlPv(auStack_170[0]);
      }
      return;
    }
    FUN_10a6fd17c(puVar6 + 0x2b,puVar6 + 9);
    puVar6[0x29] = puVar6[0x2b];
    plVar8 = (long *)(puVar6[0x2b] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x29] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x2c) = 1;
      lVar9 = puVar6[0x29];
      plVar8 = (long *)(lVar9 + 0x10);
      uVar12 = puVar6[3];
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_78 = 0;
            puStack_70 = puVar6;
            uStack_68 = uVar12;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_78);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            goto LAB_10a6df9c0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    lVar9 = puVar6[0x29];
    if (((uint)*(undefined8 *)(puVar6[0x29] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
        FUN_10a6dee28(puVar6 + 2,lVar9 + 0x98);
        plVar8 = (long *)puVar6[0x29];
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        plVar8 = (long *)puVar6[0x2b];
        if (plVar8 != (long *)0x0) {
          puVar1 = (ulong *)(plVar8 + 1);
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        if ((*(char *)(puVar6 + 0x28) == '\x01') && (*(char *)((long)puVar6 + 0x13f) < '\0')) {
          __ZdlPv(puVar6[0x25]);
        }
        if (*(char *)(puVar6 + 0x23) == '\x01') {
          func_0x00010a052168(puVar6 + 0x15);
        }
        plVar8 = (long *)puVar6[0x14];
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 1;
          do {
            lVar9 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = (long *)puVar6[0x12];
        if (plVar8 != (long *)0x0) {
          plVar2 = plVar8 + 1;
          do {
            lVar9 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        if (*(char *)((long)puVar6 + 0x87) < '\0') {
          __ZdlPv(puVar6[0xe]);
        }
        if ((*(char *)(puVar6 + 0xd) == '\x01') && (*(char *)((long)puVar6 + 0x67) < '\0')) {
          __ZdlPv(puVar6[10]);
        }
        func_0x000109d1a1d0(puVar6 + 2);
        __ZdlPv(puVar6);
        goto LAB_10a6df9c0;
      }
      goto LAB_10a6dfac0;
    }
  }
  func_0x0001092af97c(lVar9 + 0x90);
LAB_10a6dfac0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6dfac4);
  (*pcVar5)();
}



/* Entry: 10a6dfc88; end: 10a6dfd13;  */

long FUN_10a6dfc88(long param_1)

{
  if ((*(char *)(param_1 + 0xf8) == '\x01') && (*(char *)(param_1 + 0xf7) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x00010a052168(param_1 + 0x60);
  }
  FUN_10a0e3194(param_1 + 0x50);
  FUN_10a711cf8(param_1 + 0x40);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if ((*(char *)(param_1 + 0x20) == '\x01') && (*(char *)(param_1 + 0x1f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a6dfd14; end: 10a6e079f;  */

void FUN_10a6dfd14(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x150);
  plVar12 = (long *)(param_2 + 0x138);
  FUN_10a6eba04(param_1,param_3,plVar12);
  if (*param_1 != 0) goto LAB_10a6e0580;
  func_0x00010a711e00(param_1);
  lVar16 = *param_3;
  if (lVar16 == 0) goto LAB_10a6e057c;
  FUN_10a6f3428(&plStack_90,*(undefined8 *)(param_2 + 0x70),7);
  FUN_10a6ebaf8(lVar16,plStack_90);
  plVar3 = plStack_88;
  if (plStack_88 == (long *)0x0) {
LAB_10a6dfdb4:
    if ((int)lVar16 != 0) goto LAB_10a6dfdb8;
LAB_10a6dffa8:
    lVar16 = *param_3;
    if (lVar16 == 0) {
LAB_10a6e057c:
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_10a6e0580;
    }
    FUN_10a6f37a8(&plStack_90,*(undefined8 *)(param_2 + 0x70),7);
    FUN_10a6ebaf8(lVar16,plStack_90);
    plVar3 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar11 = plStack_88 + 1;
      do {
        lVar13 = *plVar11;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if ((int)lVar16 == 0) {
      lVar16 = *param_3;
      if (lVar16 != 0) {
        plStack_c0 = (long *)CONCAT71(plStack_c0._1_7_,7);
        FUN_10a6f3364(&plStack_90,*(undefined8 *)(param_2 + 0x70),&plStack_c0,&UNK_10f66f9b9);
        plVar11 = plStack_90;
        FUN_10a6ebaf8();
        plVar3 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar2 = plStack_88 + 1;
          do {
            lVar13 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
        if ((int)lVar16 != 0) {
          FUN_10a71beac(&puStack_a0);
          puVar17 = puStack_98;
          puVar9 = puStack_a0;
          plVar3 = (long *)*param_3;
          lVar16 = param_3[1];
          if (lVar16 != 0) {
            plVar2 = (long *)(lVar16 + 8);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = *plVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          puStack_b0 = puStack_a0;
          puStack_a8 = puStack_98;
          if (puStack_98 != (undefined8 *)0x0) {
            plVar2 = puStack_98 + 2;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = *plVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          plVar2 = *(long **)(param_2 + 0x140);
          plStack_c0 = plVar3;
          lStack_b8 = lVar16;
          if (plVar2 < *(long **)(param_2 + 0x148)) {
            *plVar2 = (long)plVar3;
            plVar2[1] = lVar16;
            plVar12 = plVar2 + 4;
            plVar2[2] = (long)puStack_a0;
            plVar2[3] = (long)puStack_98;
          }
          else {
            lVar13 = (long)plVar2 - *plVar12;
            uVar1 = (lVar13 >> 5) + 1;
            if (uVar1 >> 0x3b != 0) {
              FUN_10a70202c();
              goto LAB_10a6e06ac;
            }
            uVar14 = (long)*(long **)(param_2 + 0x148) - *plVar12;
            uVar15 = (long)uVar14 >> 4;
            if (uVar15 <= uVar1) {
              uVar15 = uVar1;
            }
            if (0x7fffffffffffffdf < uVar14) {
              uVar15 = 0x7ffffffffffffff;
            }
            plStack_70 = plVar12;
            FUN_10a702040();
            lVar4 = *(long *)(param_2 + 0x138);
            lVar5 = *(long *)(param_2 + 0x140);
            plVar2 = (long *)(uVar15 + lVar13);
            *plVar2 = (long)plVar3;
            plVar2[1] = lVar16;
            plStack_c0 = (long *)0x0;
            lStack_b8 = 0;
            plVar2[2] = (long)puVar9;
            plVar2[3] = (long)puVar17;
            plVar12 = plVar2 + 4;
            lVar16 = (long)plVar2 - (lVar5 - lVar4);
            _memcpy(lVar16,lVar4);
            plStack_90 = *(long **)(param_2 + 0x138);
            *(long *)(param_2 + 0x138) = lVar16;
            *(long **)(param_2 + 0x140) = plVar12;
            lStack_78 = *(long *)(param_2 + 0x148);
            *(ulong *)(param_2 + 0x148) = uVar15 + (long)plVar11 * 0x20;
            plStack_88 = plStack_90;
            plStack_80 = plStack_90;
            func_0x00010a702074(&plStack_90);
          }
          *(long **)(param_2 + 0x140) = plVar12;
          if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
            plVar12 = (long *)(*param_3 + 0xe8);
            if (*(char *)(*param_3 + 0xff) < '\0') {
              plVar12 = (long *)*plVar12;
            }
            func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f17d,0x1ce,&UNK_10f66f0ef,in_x6,in_x7,
                                plVar12);
          }
LAB_10a6e0688:
          *param_1 = (long)puVar9;
          param_1[1] = (long)puVar17;
          goto LAB_10a6e0580;
        }
        lVar16 = *param_3;
        if (lVar16 != 0) {
          plStack_c0 = (long *)CONCAT71(plStack_c0._1_7_,7);
          FUN_10a6f3364(&plStack_90,*(undefined8 *)(param_2 + 0x70),&plStack_c0,&UNK_10f66f9c2);
          plVar11 = plStack_90;
          FUN_10a6ebaf8();
          plVar3 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar2 = plStack_88 + 1;
            do {
              lVar13 = *plVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = lVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
            }
          }
          if ((int)lVar16 != 0) {
            FUN_10a71c01c(&puStack_a0);
            puVar17 = puStack_98;
            puVar9 = puStack_a0;
            plVar3 = (long *)*param_3;
            lVar16 = param_3[1];
            if (lVar16 != 0) {
              plVar2 = (long *)(lVar16 + 8);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *plVar2 = *plVar2 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            puStack_b0 = puStack_a0;
            puStack_a8 = puStack_98;
            if (puStack_98 != (undefined8 *)0x0) {
              plVar2 = puStack_98 + 2;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *plVar2 = *plVar2 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            plVar2 = *(long **)(param_2 + 0x140);
            plStack_c0 = plVar3;
            lStack_b8 = lVar16;
            if (plVar2 < *(long **)(param_2 + 0x148)) {
              *plVar2 = (long)plVar3;
              plVar2[1] = lVar16;
              plVar12 = plVar2 + 4;
              plVar2[2] = (long)puStack_a0;
              plVar2[3] = (long)puStack_98;
            }
            else {
              lVar13 = (long)plVar2 - *plVar12;
              uVar1 = (lVar13 >> 5) + 1;
              if (uVar1 >> 0x3b != 0) {
                FUN_10a70202c();
                goto LAB_10a6e06ac;
              }
              uVar14 = (long)*(long **)(param_2 + 0x148) - *plVar12;
              uVar15 = (long)uVar14 >> 4;
              if (uVar15 <= uVar1) {
                uVar15 = uVar1;
              }
              if (0x7fffffffffffffdf < uVar14) {
                uVar15 = 0x7ffffffffffffff;
              }
              plStack_70 = plVar12;
              FUN_10a702040();
              lVar4 = *(long *)(param_2 + 0x138);
              lVar5 = *(long *)(param_2 + 0x140);
              plVar2 = (long *)(uVar15 + lVar13);
              *plVar2 = (long)plVar3;
              plVar2[1] = lVar16;
              plStack_c0 = (long *)0x0;
              lStack_b8 = 0;
              plVar2[2] = (long)puVar9;
              plVar2[3] = (long)puVar17;
              plVar12 = plVar2 + 4;
              lVar16 = (long)plVar2 - (lVar5 - lVar4);
              _memcpy(lVar16,lVar4);
              plStack_90 = *(long **)(param_2 + 0x138);
              *(long *)(param_2 + 0x138) = lVar16;
              *(long **)(param_2 + 0x140) = plVar12;
              lStack_78 = *(long *)(param_2 + 0x148);
              *(ulong *)(param_2 + 0x148) = uVar15 + (long)plVar11 * 0x20;
              plStack_88 = plStack_90;
              plStack_80 = plStack_90;
              func_0x00010a702074(&plStack_90);
            }
            *(long **)(param_2 + 0x140) = plVar12;
            if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
              plVar12 = (long *)(*param_3 + 0xe8);
              if (*(char *)(*param_3 + 0xff) < '\0') {
                plVar12 = (long *)*plVar12;
              }
              func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f17d,0x1d5,&UNK_10f66f0ef,in_x6,in_x7
                                  ,plVar12);
            }
            goto LAB_10a6e0688;
          }
          lVar16 = *param_3;
          if (lVar16 != 0) {
            plStack_c0 = (long *)CONCAT71(plStack_c0._1_7_,6);
            FUN_10a6f3364(&plStack_90,*(undefined8 *)(param_2 + 0x70),&plStack_c0,&DAT_10f66f8a2);
            FUN_10a6ebaf8(lVar16,plStack_90);
            FUN_10a0772f0(&plStack_90);
            if ((int)lVar16 != 0) {
              FUN_10a71c18c(&plStack_c0);
              plVar3 = plStack_c0;
              plStack_88 = (long *)param_3[1];
              plStack_90 = (long *)*param_3;
              if (param_3[1] != 0) {
                plVar11 = (long *)(param_3[1] + 8);
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar7) {
                    *plVar11 = *plVar11 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              plStack_80 = plStack_c0;
              lStack_78 = lStack_b8;
              if (lStack_b8 != 0) {
                plVar11 = (long *)(lStack_b8 + 0x10);
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar7) {
                    *plVar11 = *plVar11 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              FUN_10a701f30(plVar12,&plStack_90);
              FUN_10a6ebacc(&plStack_90);
              if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
                plVar12 = (long *)(*param_3 + 0xe8);
                if (*(char *)(*param_3 + 0xff) < '\0') {
                  plVar12 = (long *)*plVar12;
                }
                func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f17d,0x1dc,&UNK_10f66f0ef,in_x6,
                                    in_x7,plVar12);
              }
              *param_1 = (long)plVar3;
              param_1[1] = lStack_b8;
              plStack_c0 = (long *)0x0;
              lStack_b8 = 0;
              FUN_10a71c2a4(&plStack_c0);
              goto LAB_10a6e0580;
            }
          }
        }
      }
      goto LAB_10a6e057c;
    }
    puVar9 = (undefined8 *)0xb8;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_FUN_110c13f00;
    puVar17 = puVar9 + 3;
    *puVar17 = &PTR____cxa_pure_virtual_110c23130;
    puVar9[0x13] = 0;
    puVar9[0x12] = 0;
    puVar9[0x15] = 0;
    puVar9[0x14] = 0;
    puVar9[0x15] = 0;
    puVar9[0x16] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0x13] = &PTR_FUN_110c383b8;
    puVar9[0x14] = 0;
    *(undefined2 *)(puVar9 + 0x16) = 0x100;
    *(undefined1 *)(puVar9 + 4) = 1;
    ppuVar10 = &PTR_PTR_110c237e0;
    FUN_10a0040d0(puVar9 + 5);
    puVar9[3] = &PTR_FUN_110c236d8;
    puVar9[5] = &PTR_DAT_110c23728;
    puVar9[0x13] = &PTR_DAT_110c237a0;
    *(undefined1 *)(puVar9 + 10) = 0;
    *(undefined1 *)(puVar9 + 0x12) = 0;
    plVar3 = (long *)*param_3;
    lVar16 = param_3[1];
    if (lVar16 != 0) {
      plVar11 = (long *)(lVar16 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = *plVar11 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar11 = puVar9 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11 = *(long **)(param_2 + 0x140);
    plStack_c0 = plVar3;
    lStack_b8 = lVar16;
    puStack_b0 = puVar17;
    puStack_a8 = puVar9;
    puStack_a0 = puVar17;
    puStack_98 = puVar9;
    if (plVar11 < *(long **)(param_2 + 0x148)) {
      *plVar11 = (long)plVar3;
      plVar11[1] = lVar16;
      plVar12 = plVar11 + 4;
      plVar11[2] = (long)puVar17;
      plVar11[3] = (long)puVar9;
    }
    else {
      lVar13 = (long)plVar11 - *plVar12;
      uVar1 = (lVar13 >> 5) + 1;
      if (uVar1 >> 0x3b != 0) {
        FUN_10a70202c();
        goto LAB_10a6e06ac;
      }
      uVar14 = (long)*(long **)(param_2 + 0x148) - *plVar12;
      uVar15 = (long)uVar14 >> 4;
      if (uVar15 <= uVar1) {
        uVar15 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar14) {
        uVar15 = 0x7ffffffffffffff;
      }
      plStack_70 = plVar12;
      FUN_10a702040();
      lVar4 = *(long *)(param_2 + 0x138);
      lVar5 = *(long *)(param_2 + 0x140);
      plVar11 = (long *)(uVar15 + lVar13);
      *plVar11 = (long)plVar3;
      plVar11[1] = lVar16;
      plStack_c0 = (long *)0x0;
      lStack_b8 = 0;
      plVar11[2] = (long)puVar17;
      plVar11[3] = (long)puVar9;
      plVar12 = plVar11 + 4;
      lVar16 = (long)plVar11 - (lVar5 - lVar4);
      _memcpy(lVar16,lVar4);
      plStack_90 = *(long **)(param_2 + 0x138);
      *(long *)(param_2 + 0x138) = lVar16;
      *(long **)(param_2 + 0x140) = plVar12;
      lStack_78 = *(long *)(param_2 + 0x148);
      *(ulong *)(param_2 + 0x148) = uVar15 + (long)ppuVar10 * 0x20;
      plStack_88 = plStack_90;
      plStack_80 = plStack_90;
      func_0x00010a702074(&plStack_90);
    }
    *(long **)(param_2 + 0x140) = plVar12;
    if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      plVar12 = (long *)(*param_3 + 0xe8);
      if (*(char *)(*param_3 + 0xff) < '\0') {
        plVar12 = (long *)*plVar12;
      }
      func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f17d,0x1c7,&UNK_10f66f0ef,in_x6,in_x7,plVar12
                         );
    }
  }
  else {
    plVar11 = plStack_88 + 1;
    do {
      lVar13 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 != 0) goto LAB_10a6dfdb4;
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    if ((int)lVar16 == 0) goto LAB_10a6dffa8;
LAB_10a6dfdb8:
    puVar9 = (undefined8 *)0xb8;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = &PTR_FUN_110c13eb0;
    puVar17 = puVar9 + 3;
    *puVar17 = &PTR____cxa_pure_virtual_110c23130;
    puVar9[0x13] = 0;
    puVar9[0x12] = 0;
    puVar9[0x15] = 0;
    puVar9[0x14] = 0;
    puVar9[0x15] = 0;
    puVar9[0x16] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0x13] = &PTR_FUN_110c383b8;
    puVar9[0x14] = 0;
    *(undefined2 *)(puVar9 + 0x16) = 0x100;
    *(undefined1 *)(puVar9 + 4) = 1;
    ppuVar10 = &PTR_PTR_110c120c8;
    FUN_10a0040d0(puVar9 + 5);
    puVar9[3] = &PTR_FUN_110c11fc0;
    puVar9[5] = &PTR_DAT_110c12010;
    puVar9[0x13] = &PTR_DAT_110c12088;
    *(undefined1 *)(puVar9 + 10) = 0;
    *(undefined1 *)(puVar9 + 0x12) = 0;
    plVar3 = (long *)*param_3;
    lVar16 = param_3[1];
    if (lVar16 != 0) {
      plVar11 = (long *)(lVar16 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = *plVar11 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar11 = puVar9 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11 = *(long **)(param_2 + 0x140);
    plStack_c0 = plVar3;
    lStack_b8 = lVar16;
    puStack_b0 = puVar17;
    puStack_a8 = puVar9;
    puStack_a0 = puVar17;
    puStack_98 = puVar9;
    if (plVar11 < *(long **)(param_2 + 0x148)) {
      *plVar11 = (long)plVar3;
      plVar11[1] = lVar16;
      plVar12 = plVar11 + 4;
      plVar11[2] = (long)puVar17;
      plVar11[3] = (long)puVar9;
    }
    else {
      lVar13 = (long)plVar11 - *plVar12;
      uVar1 = (lVar13 >> 5) + 1;
      if (uVar1 >> 0x3b != 0) {
        FUN_10a70202c();
LAB_10a6e06ac:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a6e06b0);
        (*pcVar8)();
      }
      uVar14 = (long)*(long **)(param_2 + 0x148) - *plVar12;
      uVar15 = (long)uVar14 >> 4;
      if (uVar15 <= uVar1) {
        uVar15 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar14) {
        uVar15 = 0x7ffffffffffffff;
      }
      plStack_70 = plVar12;
      FUN_10a702040();
      lVar4 = *(long *)(param_2 + 0x138);
      lVar5 = *(long *)(param_2 + 0x140);
      plVar11 = (long *)(uVar15 + lVar13);
      *plVar11 = (long)plVar3;
      plVar11[1] = lVar16;
      plStack_c0 = (long *)0x0;
      lStack_b8 = 0;
      plVar11[2] = (long)puVar17;
      plVar11[3] = (long)puVar9;
      plVar12 = plVar11 + 4;
      lVar16 = (long)plVar11 - (lVar5 - lVar4);
      _memcpy(lVar16,lVar4);
      plStack_90 = *(long **)(param_2 + 0x138);
      *(long *)(param_2 + 0x138) = lVar16;
      *(long **)(param_2 + 0x140) = plVar12;
      lStack_78 = *(long *)(param_2 + 0x148);
      *(ulong *)(param_2 + 0x148) = uVar15 + (long)ppuVar10 * 0x20;
      plStack_88 = plStack_90;
      plStack_80 = plStack_90;
      func_0x00010a702074(&plStack_90);
    }
    *(long **)(param_2 + 0x140) = plVar12;
    if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      plVar12 = (long *)(*param_3 + 0xe8);
      if (*(char *)(*param_3 + 0xff) < '\0') {
        plVar12 = (long *)*plVar12;
      }
      func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f17d,0x1c0,&UNK_10f66f0ef,in_x6,in_x7,plVar12
                         );
    }
  }
  *param_1 = (long)puVar17;
  param_1[1] = (long)puVar9;
LAB_10a6e0580:
  __ZNSt3__15mutex6unlockEv(param_2 + 0x150);
  return;
}



/* Entry: 10a6e07a0; end: 10a6e07cf;  */

void FUN_10a6e07a0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = 6;
  FUN_10a6f3364(param_1,&uStack_11,&DAT_10f66f8a2);
  return;
}



/* Entry: 10a6e07d0; end: 10a6e0d37;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e0b08) */
/* WARNING: Removing unreachable block (ram,0x00010a6e0b0c) */
/* WARNING: Removing unreachable block (ram,0x00010a6e0b14) */
/* WARNING: Removing unreachable block (ram,0x00010a6e0b1c) */
/* WARNING: Removing unreachable block (ram,0x00010a6e0b20) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a6e07d0(long *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_190 [112];
  char cStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [112];
  char cStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long alStack_60 [2];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  FUN_10a6e0d38(&uStack_70,param_2);
  FUN_10a6fda24(auStack_100,param_2 + 0x48);
  FUN_10a6dbf18(auStack_e8,auStack_100);
  FUN_10a6fc9e4(auStack_100);
  plVar7 = plStack_68;
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 0x960) + 0x3a8);
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a6fd7c8(auStack_190,auStack_e8);
  FUN_10a6fda24(auStack_118,param_2 + 0x48);
  puVar6 = (undefined8 *)0x108;
  __Znwm();
  *puVar6 = FUN_10a730a90;
  puVar6[1] = FUN_10a730d48;
  FUN_10a6fe504(puVar6 + 2);
  lVar8 = puVar6[7];
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar8;
  puVar6[10] = plVar7;
  puVar6[9] = uStack_70;
  FUN_10a6fcf4c(puVar6 + 0xb,auStack_190);
  FUN_10a6fda24(puVar6 + 0x1a,auStack_118);
  puVar6[0x1d] = uVar12;
  *(undefined1 *)(puVar6 + 0x1e) = 0;
  *(undefined1 *)(puVar6 + 0x20) = 0;
  alStack_60[0] = 0;
  FUN_109d18960(puVar6 + 2,uVar12,alStack_60);
  if (alStack_60[0] == 0) {
    if ((*(byte *)(puVar6 + 0x1e) & 1) == 0) {
      puStack_48 = (undefined8 *)puVar6[0x1d];
      alStack_60[1] = 0;
      puStack_50 = puVar6;
      (**(code **)*puStack_48)(puStack_48,alStack_60 + 1);
      __ZNSt13exception_ptrD1Ev(alStack_60);
LAB_10a6e0ae4:
      FUN_10a6fc9e4(auStack_118);
      if (cStack_120 == '\x01') {
        func_0x00010a052168(auStack_190);
      }
      if (cStack_78 == '\x01') {
        func_0x00010a052168(auStack_e8);
      }
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 1;
        do {
          lVar8 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
        }
      }
      return;
    }
    __ZNSt13exception_ptrD1Ev(alStack_60);
    FUN_10a6fdc98(puVar6 + 0x1f,puVar6 + 9);
    puVar6[0x1d] = puVar6[0x1f];
    plVar7 = (long *)(puVar6[0x1f] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x1d] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x20) = 1;
      lVar8 = puVar6[0x1d];
      plVar7 = (long *)(lVar8 + 0x10);
      puVar9 = (undefined8 *)puVar6[3];
      do {
        lVar11 = *plVar7;
        if (lVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            alStack_60[1] = 0;
            puStack_50 = puVar6;
            puStack_48 = puVar9;
            func_0x000109d1b588(lVar8 + 0x18,alStack_60 + 1);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            goto LAB_10a6e0ae4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    lVar8 = puVar6[0x1d];
    if (((uint)*(undefined8 *)(puVar6[0x1d] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar8 + 0x148) & 1) != 0) {
        FUN_10a6fdb2c(puVar6 + 2,lVar8 + 0x98);
        plVar7 = (long *)puVar6[0x1d];
        if (plVar7 != (long *)0x0) {
          puVar2 = (ulong *)(plVar7 + 1);
          do {
            uVar10 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        plVar7 = (long *)puVar6[0x1f];
        if (plVar7 != (long *)0x0) {
          puVar2 = (ulong *)(plVar7 + 1);
          do {
            uVar10 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar10 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar10 & 0x1fffffffc) == 4) {
            do {
              uVar10 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar10 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar10 - 1 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        FUN_10a6fc9e4(puVar6 + 0x1a);
        if (*(char *)(puVar6 + 0x19) == '\x01') {
          func_0x00010a052168(puVar6 + 0xb);
        }
        plVar7 = (long *)puVar6[10];
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
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
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        func_0x000109d1a1d0(puVar6 + 2);
        __ZdlPv(puVar6);
        goto LAB_10a6e0ae4;
      }
    }
    else {
      func_0x0001092af97c(lVar8 + 0x90);
    }
  }
  else {
    func_0x0001092af97c(alStack_60);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6e0bb4);
  (*pcVar5)();
}



/* Entry: 10a6e0d38; end: 10a6e150b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e0f88) */

void FUN_10a6e0d38(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long *plStack_218;
  long lStack_210;
  long *plStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **appuStack_1f0 [2];
  undefined **appuStack_1e0 [2];
  undefined **appuStack_1d0 [2];
  char cStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  char cStack_199;
  char cStack_198;
  undefined8 uStack_c0;
  float fStack_b8;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  float fStack_a4;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  long *plStack_70;
  long *plStack_68;
  
  if (*(long *)(param_2 + 0x80) == 0) {
    plVar7 = *(long **)(param_2 + 0x60);
    if (plVar7 == (long *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
LAB_10a6e0d84:
    (**(code **)(*plVar7 + 0x90))();
  }
  else {
    plVar7 = *(long **)(*(long *)(param_2 + 0x80) + 0xe0);
    if (plVar7 != (long *)0x0) goto LAB_10a6e0d84;
    plVar7 = (long *)&UNK_10e4ac820;
  }
  lVar11 = *plVar7;
  plStack_208 = (long *)plVar7[1];
  if (plStack_208 == (long *)0x0) {
    plStack_240 = (long *)0x0;
  }
  else {
    plVar7 = plStack_208 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plStack_240 = plStack_208;
    } while (cVar4 != '\0');
  }
  lStack_230 = 0;
  uStack_228 = 0;
  lStack_238 = 0;
  lStack_248 = lVar11;
  lStack_210 = lVar11;
  FUN_10a0f984c(&ppuStack_200);
  FUN_10a0fff24(&ppuStack_200,lVar11,0);
  func_0x00010a0fb0f4(&ppuStack_200,&lStack_238);
  plVar7 = plStack_1b8;
  ppuStack_200 = &PTR_FUN_110ba53b0;
  ppuStack_1f8 = &PTR_FUN_110ba5578;
  plStack_1b8 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  appuStack_1d0[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_1d0);
  appuStack_1e0[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_1e0);
  appuStack_1f0[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_1f0);
  FUN_10a0f639c(&ppuStack_200,lStack_238,lStack_230 - lStack_238);
  FUN_10a0d0194(&lStack_220,auStack_b0);
  FUN_10a0ff770(&ppuStack_200,lStack_220);
  func_0x00010a0f618c(&ppuStack_200);
  if (lStack_238 != 0) {
    lStack_230 = lStack_238;
    __ZdlPv();
  }
  plVar7 = plStack_240;
  if (plStack_240 != (long *)0x0) {
    plVar1 = plStack_240 + 1;
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
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10ab4f304(lStack_220);
  if (*(long *)(param_2 + 0x60) == 0) goto LAB_10a6e1348;
  (**(code **)(**(long **)(param_2 + 0xe8) + 0x18))(&ppuStack_200);
  if (cStack_1c0 == '\x01') {
    func_0x0001094f5708(&uStack_288,&ppuStack_200);
    uStack_2c8 = uStack_280;
    uStack_2d0 = uStack_288;
    uStack_2b8 = uStack_270;
    uStack_2c0 = uStack_278;
    uStack_2a8 = uStack_260;
    uStack_2b0 = uStack_268;
    uStack_298 = uStack_250;
    uStack_2a0 = uStack_258;
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      FUN_10a700918(auStack_b0,&uStack_2d0);
      func_0x00010ae06f08(1,4,&UNK_10f66dea2,&UNK_10f670d7a,0x2f,&UNK_10f670dde,in_x6,in_x7,
                          auStack_b0);
    }
    uVar3 = *(uint *)(lStack_220 + 0x110);
    if (uVar3 == 0xffffffff) {
      lVar11 = 0;
    }
    else {
      uVar12 = (*(long *)(lStack_220 + 0x100) - *(long *)(lStack_220 + 0xf8) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar12 < uVar3 || uVar12 - uVar3 == 0) {
        FUN_10ab725fc();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6e13f0);
        (*pcVar6)();
      }
      lVar11 = *(long *)(lStack_220 + 0xf8) + (ulong)uVar3 * 0x38;
    }
    uVar3 = *(int *)(lVar11 + 0x24) - 1;
    if (uVar3 < 7) {
      iVar10 = *(int *)(&UNK_10e4d759c + (ulong)uVar3 * 4);
    }
    else {
      iVar10 = 0;
    }
    if (*(int *)(lVar11 + 0x28) * iVar10 == 0xc) {
      lVar11 = *(long *)(lStack_220 + 0x10) + (ulong)*(uint *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lStack_220 + 0xf0);
    }
    else {
      lVar11 = 0;
      uVar12 = 0;
    }
    FUN_10ab6e9d8();
    lVar8 = *(long *)(lStack_220 + 0xf8);
    lVar2 = *(long *)(lStack_220 + 0x100);
    if (lVar8 == lVar2) {
LAB_10a6e1060:
      if ((lVar8 == lVar2) || (lVar8 == 0)) goto LAB_10a6e107c;
      FUN_10ab4c544(&plStack_68,lStack_220);
    }
    else {
      do {
        if (*(long *)(lVar8 + 0x18) == lRam0000000113835758) goto LAB_10a6e1060;
        lVar8 = lVar8 + 0x38;
      } while (lVar8 != lVar2);
LAB_10a6e107c:
      plStack_68 = (long *)0x0;
    }
    FUN_10ab6eb18();
    lVar8 = *(long *)(lStack_220 + 0xf8);
    lVar2 = *(long *)(lStack_220 + 0x100);
    if (lVar8 == lVar2) {
LAB_10a6e10b4:
      if ((lVar8 == lVar2) || (lVar8 == 0)) goto LAB_10a6e10d0;
      FUN_10ab4c544(&plStack_70,lStack_220);
    }
    else {
      do {
        if (*(long *)(lVar8 + 0x18) == lRam0000000113835798) goto LAB_10a6e10b4;
        lVar8 = lVar8 + 0x38;
      } while (lVar8 != lVar2);
LAB_10a6e10d0:
      plStack_70 = (long *)0x0;
    }
    FUN_10a1716ec(auStack_b0,&uStack_2d0);
    plVar1 = plStack_68;
    plVar7 = plStack_70;
    uVar13 = 0;
    pfVar14 = (float *)(lVar11 + 8);
    while( true ) {
      uVar3 = *(uint *)(lStack_220 + 0xf0);
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        if ((ulong)uVar3 != 0) {
          uVar9 = (ulong)(*(long *)(lStack_220 + 0x18) - *(long *)(lStack_220 + 0x10)) /
                  (ulong)uVar3;
        }
        uVar9 = uVar9 & 0xffffffff;
      }
      if (uVar9 <= uVar13) break;
      fVar15 = pfVar14[-2];
      fVar17 = pfVar14[-1];
      fVar18 = *pfVar14;
      fVar21 = fVar15 * uStack_2c8._4_4_ + fVar17 * uStack_2b8._4_4_ +
               fVar18 * uStack_2a8._4_4_ + uStack_298._4_4_;
      uVar16 = CONCAT44(((float)((ulong)uStack_2d0 >> 0x20) * fVar15 +
                         (float)((ulong)uStack_2c0 >> 0x20) * fVar17 +
                        (float)((ulong)uStack_2b0 >> 0x20) * fVar18 +
                        (float)((ulong)uStack_2a0 >> 0x20)) / fVar21,
                        ((float)uStack_2d0 * fVar15 + (float)uStack_2c0 * fVar17 +
                        (float)uStack_2b0 * fVar18 + (float)uStack_2a0) / fVar21);
      *(undefined8 *)(pfVar14 + -2) = uVar16;
      *pfVar14 = (fVar15 * (float)uStack_2c8 + fVar17 * (float)uStack_2b8 +
                 fVar18 * (float)uStack_2a8 + (float)uStack_298) / fVar21;
      uVar20 = uStack_2a0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,uVar13);
        fVar15 = (float)uVar16;
        fVar19 = (float)uVar20;
        fVar22 = fVar15 * fStack_a4 + fVar21 * fStack_94 + fVar19 * fStack_84 + fStack_74;
        fStack_b8 = (fVar15 * fStack_a8 + fVar21 * fStack_98 + fVar19 * fStack_88 + fStack_78) /
                    fVar22;
        fVar17 = (float)uStack_a0 * fVar21;
        fVar18 = (float)(CONCAT17(uStack_99,uStack_a0) >> 0x20) * fVar21;
        fVar21 = (float)uStack_90 * fVar19 + (float)uStack_80;
        uVar20 = CONCAT44(fVar22,fVar22);
        uVar16 = CONCAT44((auStack_b0._4_4_ * fVar15 + fVar18 +
                          (float)((ulong)uStack_90 >> 0x20) * fVar19 +
                          (float)((ulong)uStack_80 >> 0x20)) / fVar22,
                          (auStack_b0._0_4_ * fVar15 + fVar17 + fVar21) / fVar22);
        uStack_c0 = uVar16;
        (**(code **)(*plVar1 + 0x18))(plVar1,uVar13,&uStack_c0);
      }
      fVar17 = (float)uVar20;
      fVar15 = (float)uVar16;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,uVar13);
        fVar18 = fVar15 * uStack_2c8._4_4_ + fVar21 * uStack_2b8._4_4_ +
                 fVar17 * uStack_2a8._4_4_ + uStack_298._4_4_;
        fStack_b8 = (fVar15 * (float)uStack_2c8 + fVar21 * (float)uStack_2b8 +
                    fVar17 * (float)uStack_2a8 + (float)uStack_298) / fVar18;
        uStack_c0 = CONCAT44(((float)((ulong)uStack_2d0 >> 0x20) * fVar15 +
                              (float)((ulong)uStack_2c0 >> 0x20) * fVar21 +
                             (float)((ulong)uStack_2b0 >> 0x20) * fVar17 +
                             (float)((ulong)uStack_2a0 >> 0x20)) / fVar18,
                             ((float)uStack_2d0 * fVar15 + (float)uStack_2c0 * fVar21 +
                             (float)uStack_2b0 * fVar17 + (float)uStack_2a0) / fVar18);
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar13,&uStack_c0);
      }
      uVar13 = uVar13 + 1;
      pfVar14 = (float *)((long)pfVar14 + uVar12);
    }
    FUN_10ab4e0a4(lStack_220);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  if ((cStack_198 == '\x01') && (cStack_199 < '\0')) {
    __ZdlPv(uStack_1b0);
  }
LAB_10a6e1348:
  FUN_10a0cf520(param_1,*(undefined8 *)(param_2 + 0x28),&lStack_220);
  if (plStack_218 != (long *)0x0) {
    plVar7 = plStack_218 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_218);
    }
  }
  plVar7 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    plVar1 = plStack_208 + 1;
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
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a6e150c; end: 10a6e15c7;  */

long FUN_10a6e150c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a6fc9e4(param_1 + 0x88);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x00010a052168(param_1 + 0x10);
  }
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



/* Entry: 10a6e15c8; end: 10a6e22b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e1860) */
/* WARNING: Removing unreachable block (ram,0x00010a6e1c84) */

void FUN_10a6e15c8(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  char cStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  FUN_10a6e0d38(&uStack_90,param_1);
  uVar17 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 0x960) + 0x3a8);
  FUN_10a1ccb30(&plStack_130,param_1 + 0xb0);
  if (*(char *)(param_1 + 0x47) < '\0') {
    func_0x000107c3192c(&plStack_110,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38)
                       );
  }
  else {
    uStack_108 = *(undefined8 *)(param_1 + 0x38);
    plStack_110 = *(long **)(param_1 + 0x30);
    lStack_100 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_10a1ccb30(&uStack_f8,param_1 + 0x90);
  lVar12 = *(long *)(param_1 + 0x70);
  if (lVar12 == 0) {
    FUN_10a6fda24(&lStack_d8,param_1 + 0x48);
  }
  else {
    lStack_d0 = *(long *)(param_1 + 0x78);
    if (lStack_d0 != 0) {
      plVar15 = (long *)(lStack_d0 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_c8 = 0;
    lStack_d8 = lVar12;
  }
  plStack_b8 = *(long **)(param_1 + 0xe0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    plVar15 = (long *)(*(long *)(param_1 + 0xe0) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_b0 = *(undefined8 *)(param_1 + 0x28);
  plStack_a0 = plStack_88;
  uStack_a8 = uStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar15 = plStack_88 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)0x108;
  uStack_98 = param_2;
  __Znwm();
  *puVar7 = FUN_10a72e9b8;
  puVar7[1] = FUN_10a72ecdc;
  FUN_10a711e58(puVar7 + 2);
  plVar15 = (long *)puVar7[7];
  if (plVar15 != (long *)0x0) {
    plVar11 = plVar15 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined1 *)(puVar7 + 9) = 0;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  if ((char)uStack_118 == '\x01') {
    puVar7[10] = uStack_128;
    puVar7[9] = plStack_130;
    puVar7[0xb] = plStack_120;
    uStack_128 = 0;
    plStack_120 = (long *)0x0;
    plStack_130 = (long *)0x0;
    *(undefined1 *)(puVar7 + 0xc) = 1;
  }
  puVar9 = puVar7 + 0x10;
  *(undefined1 *)puVar9 = 0;
  puVar7[0xe] = uStack_108;
  puVar7[0xd] = plStack_110;
  puVar7[0xf] = lStack_100;
  uStack_108 = 0;
  lStack_100 = 0;
  plStack_110 = (long *)0x0;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  if (cStack_e0 == '\x01') {
    puVar7[0x11] = uStack_f0;
    *puVar9 = uStack_f8;
    puVar7[0x12] = lStack_e8;
    uStack_f0 = 0;
    lStack_e8 = 0;
    uStack_f8 = 0;
    *(undefined1 *)(puVar7 + 0x13) = 1;
  }
  FUN_10a6ff308(puVar7 + 0x14,&lStack_d8);
  puVar7[0x18] = plStack_b8;
  puVar7[0x17] = uStack_c0;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  puVar7[0x1a] = uStack_a8;
  puVar7[0x19] = uStack_b0;
  puVar7[0x1b] = plStack_a0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  *(undefined4 *)(puVar7 + 0x1c) = uStack_98;
  puVar7[0x1d] = uVar17;
  *(undefined1 *)(puVar7 + 0x1e) = 0;
  *(undefined1 *)(puVar7 + 0x20) = 0;
  puVar8 = puVar7 + 0x1d;
  FUN_10a6fd0e0(puVar8,puVar7);
  if (((ulong)puVar8 & 1) == 0) {
    FUN_10a6ff700(puVar7 + 0x1f,puVar7 + 9);
    puVar7[0x1d] = puVar7[0x1f];
    plVar11 = (long *)(puVar7[0x1f] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar7[0x1d] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x20) = 1;
      lVar12 = puVar7[0x1d];
      plVar11 = (long *)(lVar12 + 0x10);
      uVar17 = puVar7[3];
      do {
        lVar14 = *plVar11;
        if (lVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uStack_80 = 0;
            puStack_78 = puVar7;
            uStack_70 = uVar17;
            func_0x000109d1b588(lVar12 + 0x18,&uStack_80);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            goto LAB_10a6e1a20;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    lVar12 = puVar7[0x1d];
    if (((uint)*(undefined8 *)(puVar7[0x1d] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar12 + 0x90);
      goto LAB_10a6e201c;
    }
    if ((*(byte *)(lVar12 + 0xa8) & 1) == 0) goto LAB_10a6e201c;
    FUN_10a6dee28(puVar7 + 2,lVar12 + 0x98);
    plVar11 = (long *)puVar7[0x1d];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)puVar7[0x1f];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)puVar7[0x1b];
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        lVar12 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = (long *)puVar7[0x18];
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        lVar12 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    FUN_10a6fc9e4(puVar7 + 0x14);
    if ((*(char *)(puVar7 + 0x13) == '\x01') && (*(char *)((long)puVar7 + 0x97) < '\0')) {
      __ZdlPv(*puVar9);
    }
    if (*(char *)((long)puVar7 + 0x7f) < '\0') {
      __ZdlPv(puVar7[0xd]);
    }
    if ((*(char *)(puVar7 + 0xc) == '\x01') && (*(char *)((long)puVar7 + 0x5f) < '\0')) {
      __ZdlPv(puVar7[9]);
    }
    func_0x000109d1a1d0(puVar7 + 2);
    __ZdlPv(puVar7);
  }
LAB_10a6e1a20:
  plVar11 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar10 = plStack_a0 + 1;
    do {
      lVar12 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar10 = plStack_b8 + 1;
    do {
      lVar12 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10a6fc9e4(&lStack_d8);
  if ((cStack_e0 == '\x01') && (lStack_e8 < 0)) {
    __ZdlPv(uStack_f8);
  }
  if (lStack_100 < 0) {
    __ZdlPv(plStack_110);
  }
  if (((char)uStack_118 == '\x01') && ((long)plStack_120 < 0)) {
    __ZdlPv(plStack_130);
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0x870);
  lVar12 = *(long *)(lVar14 + 0x38);
  if (lVar12 == 0) {
    lVar12 = *(long *)(lVar14 + 0x28);
    plVar11 = *(long **)(lVar14 + 0x30);
  }
  else {
    plVar11 = *(long **)(lVar14 + 0x40);
  }
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar15 != (long *)0x0) {
    plVar10 = plVar15 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar17 = *param_3;
  plVar10 = (long *)param_3[1];
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_110 = (long *)param_4[1];
  uStack_118 = *param_4;
  if (param_4[1] != 0) {
    plVar2 = (long *)(param_4[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)0x90;
  plStack_130 = plVar15;
  uStack_128 = uVar17;
  plStack_120 = plVar10;
  __Znwm();
  *puVar7 = FUN_10a72f0a8;
  puVar7[1] = FUN_10a72f3b4;
  func_0x0001092ba17c(puVar7 + 2);
  plVar2 = plStack_130;
  plVar16 = (long *)puVar7[7];
  if (plVar16 != (long *)0x0) {
    plVar3 = plVar16 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar10 = plStack_120;
      uVar17 = uStack_128;
    } while (cVar4 != '\0');
  }
  plStack_130 = (long *)0x0;
  puVar7[9] = plVar2;
  puVar7[10] = uVar17;
  puVar7[0xb] = plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7[0xd] = plStack_110;
  puVar7[0xc] = uStack_118;
  if (plStack_110 != (long *)0x0) {
    plVar10 = plStack_110 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7[0xe] = lVar12;
  *(undefined1 *)(puVar7 + 0xf) = 0;
  *(undefined1 *)(puVar7 + 0x11) = 0;
  puVar9 = puVar7 + 0xe;
  func_0x0001092ba064(puVar9,puVar7);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a700144(puVar7 + 0x10,puVar7 + 9);
    puVar7[0xe] = puVar7[0x10];
    plVar10 = (long *)(puVar7[0x10] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x11) = 1;
      lVar12 = puVar7[0xe];
      plVar10 = (long *)(lVar12 + 0x10);
      uVar17 = puVar7[3];
      do {
        lVar14 = *plVar10;
        if (lVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uStack_80 = 0;
            puStack_78 = puVar7;
            uStack_70 = uVar17;
            func_0x000109d1b588(lVar12 + 0x18,&uStack_80);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            goto joined_r0x00010a6e1e74;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar7[0xe];
    if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar10 + 0x12);
LAB_10a6e201c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6e2020);
      (*pcVar6)();
    }
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)puVar7[0x10];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar7 + 2);
    plVar10 = (long *)puVar7[0xd];
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 1;
      do {
        lVar12 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)puVar7[0xb];
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 1;
      do {
        lVar12 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)puVar7[9];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar7 + 2);
    __ZdlPv(puVar7);
  }
joined_r0x00010a6e1e74:
  if (plVar16 != (long *)0x0) {
    puVar1 = (ulong *)(plVar16 + 1);
    do {
      uVar13 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar13 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  plVar10 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    plVar2 = plStack_110 + 1;
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    plVar2 = plStack_120 + 1;
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plStack_130 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_130 + 1);
    do {
      uVar13 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar13 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_130 + 8))();
      }
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      lVar12 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (plVar15 != (long *)0x0) {
    puVar1 = (ulong *)(plVar15 + 1);
    do {
      uVar13 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar13 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar15 = plStack_88 + 1;
    do {
      lVar12 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  return;
}



/* Entry: 10a6e22b4; end: 10a6e23ab;  */

undefined8 * FUN_10a6e22b4(undefined8 *param_1)

{
  FUN_10a0e3194(param_1 + 0x11);
  func_0x00010a711da8(param_1 + 0xe);
  FUN_10a6fc9e4(param_1 + 0xb);
  if ((*(char *)(param_1 + 10) == '\x01') && (*(char *)((long)param_1 + 0x4f) < '\0')) {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if ((*(char *)(param_1 + 3) == '\x01') && (*(char *)((long)param_1 + 0x17) < '\0')) {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a6e23ac; end: 10a6e240b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e1860) */
/* WARNING: Removing unreachable block (ram,0x00010a6e1c84) */

void FUN_10a6e23ac(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  char cStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  FUN_10a6e0d38(&uStack_90,param_1);
  uVar17 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 0x960) + 0x3a8);
  FUN_10a1ccb30(&plStack_130,param_1 + 0xb0);
  if (*(char *)(param_1 + 0x47) < '\0') {
    func_0x000107c3192c(&plStack_110,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38)
                       );
  }
  else {
    uStack_108 = *(undefined8 *)(param_1 + 0x38);
    plStack_110 = *(long **)(param_1 + 0x30);
    lStack_100 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_10a1ccb30(&uStack_f8,param_1 + 0x90);
  lVar12 = *(long *)(param_1 + 0x70);
  if (lVar12 == 0) {
    FUN_10a6fda24(&lStack_d8,param_1 + 0x48);
  }
  else {
    lStack_d0 = *(long *)(param_1 + 0x78);
    if (lStack_d0 != 0) {
      plVar15 = (long *)(lStack_d0 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_c8 = 0;
    lStack_d8 = lVar12;
  }
  plStack_b8 = *(long **)(param_1 + 0xe0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    plVar15 = (long *)(*(long *)(param_1 + 0xe0) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_b0 = *(undefined8 *)(param_1 + 0x28);
  plStack_a0 = plStack_88;
  uStack_a8 = uStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar15 = plStack_88 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = *plVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_98 = 0;
  puVar7 = (undefined8 *)0x108;
  __Znwm();
  *puVar7 = FUN_10a72e9b8;
  puVar7[1] = FUN_10a72ecdc;
  FUN_10a711e58(puVar7 + 2);
  plVar15 = (long *)puVar7[7];
  if (plVar15 != (long *)0x0) {
    plVar11 = plVar15 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined1 *)(puVar7 + 9) = 0;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  if ((char)uStack_118 == '\x01') {
    puVar7[10] = uStack_128;
    puVar7[9] = plStack_130;
    puVar7[0xb] = plStack_120;
    uStack_128 = 0;
    plStack_120 = (long *)0x0;
    plStack_130 = (long *)0x0;
    *(undefined1 *)(puVar7 + 0xc) = 1;
  }
  puVar9 = puVar7 + 0x10;
  *(undefined1 *)puVar9 = 0;
  puVar7[0xe] = uStack_108;
  puVar7[0xd] = plStack_110;
  puVar7[0xf] = lStack_100;
  uStack_108 = 0;
  lStack_100 = 0;
  plStack_110 = (long *)0x0;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  if (cStack_e0 == '\x01') {
    puVar7[0x11] = uStack_f0;
    *puVar9 = uStack_f8;
    puVar7[0x12] = lStack_e8;
    uStack_f0 = 0;
    lStack_e8 = 0;
    uStack_f8 = 0;
    *(undefined1 *)(puVar7 + 0x13) = 1;
  }
  FUN_10a6ff308(puVar7 + 0x14,&lStack_d8);
  puVar7[0x18] = plStack_b8;
  puVar7[0x17] = uStack_c0;
  uStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  puVar7[0x1a] = uStack_a8;
  puVar7[0x19] = uStack_b0;
  puVar7[0x1b] = plStack_a0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  *(undefined4 *)(puVar7 + 0x1c) = uStack_98;
  puVar7[0x1d] = uVar17;
  *(undefined1 *)(puVar7 + 0x1e) = 0;
  *(undefined1 *)(puVar7 + 0x20) = 0;
  puVar8 = puVar7 + 0x1d;
  FUN_10a6fd0e0(puVar8,puVar7);
  if (((ulong)puVar8 & 1) == 0) {
    FUN_10a6ff700(puVar7 + 0x1f,puVar7 + 9);
    puVar7[0x1d] = puVar7[0x1f];
    plVar11 = (long *)(puVar7[0x1f] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar7[0x1d] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x20) = 1;
      lVar12 = puVar7[0x1d];
      plVar11 = (long *)(lVar12 + 0x10);
      uVar17 = puVar7[3];
      do {
        lVar14 = *plVar11;
        if (lVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uStack_80 = 0;
            puStack_78 = puVar7;
            uStack_70 = uVar17;
            func_0x000109d1b588(lVar12 + 0x18,&uStack_80);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            goto LAB_10a6e1a20;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    lVar12 = puVar7[0x1d];
    if (((uint)*(undefined8 *)(puVar7[0x1d] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(lVar12 + 0x90);
      goto LAB_10a6e201c;
    }
    if ((*(byte *)(lVar12 + 0xa8) & 1) == 0) goto LAB_10a6e201c;
    FUN_10a6dee28(puVar7 + 2,lVar12 + 0x98);
    plVar11 = (long *)puVar7[0x1d];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)puVar7[0x1f];
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    plVar11 = (long *)puVar7[0x1b];
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        lVar12 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    plVar11 = (long *)puVar7[0x18];
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        lVar12 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    FUN_10a6fc9e4(puVar7 + 0x14);
    if ((*(char *)(puVar7 + 0x13) == '\x01') && (*(char *)((long)puVar7 + 0x97) < '\0')) {
      __ZdlPv(*puVar9);
    }
    if (*(char *)((long)puVar7 + 0x7f) < '\0') {
      __ZdlPv(puVar7[0xd]);
    }
    if ((*(char *)(puVar7 + 0xc) == '\x01') && (*(char *)((long)puVar7 + 0x5f) < '\0')) {
      __ZdlPv(puVar7[9]);
    }
    func_0x000109d1a1d0(puVar7 + 2);
    __ZdlPv(puVar7);
  }
LAB_10a6e1a20:
  plVar11 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar10 = plStack_a0 + 1;
    do {
      lVar12 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar10 = plStack_b8 + 1;
    do {
      lVar12 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10a6fc9e4(&lStack_d8);
  if ((cStack_e0 == '\x01') && (lStack_e8 < 0)) {
    __ZdlPv(uStack_f8);
  }
  if (lStack_100 < 0) {
    __ZdlPv(plStack_110);
  }
  if (((char)uStack_118 == '\x01') && ((long)plStack_120 < 0)) {
    __ZdlPv(plStack_130);
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0x870);
  lVar12 = *(long *)(lVar14 + 0x38);
  if (lVar12 == 0) {
    lVar12 = *(long *)(lVar14 + 0x28);
    plVar11 = *(long **)(lVar14 + 0x30);
  }
  else {
    plVar11 = *(long **)(lVar14 + 0x40);
  }
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar15 != (long *)0x0) {
    plVar10 = plVar15 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar17 = *param_2;
  plVar10 = (long *)param_2[1];
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_110 = (long *)param_3[1];
  uStack_118 = *param_3;
  if (param_3[1] != 0) {
    plVar2 = (long *)(param_3[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)0x90;
  plStack_130 = plVar15;
  uStack_128 = uVar17;
  plStack_120 = plVar10;
  __Znwm();
  *puVar7 = FUN_10a72f0a8;
  puVar7[1] = FUN_10a72f3b4;
  func_0x0001092ba17c(puVar7 + 2);
  plVar2 = plStack_130;
  plVar16 = (long *)puVar7[7];
  if (plVar16 != (long *)0x0) {
    plVar3 = plVar16 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar10 = plStack_120;
      uVar17 = uStack_128;
    } while (cVar4 != '\0');
  }
  plStack_130 = (long *)0x0;
  puVar7[9] = plVar2;
  puVar7[10] = uVar17;
  puVar7[0xb] = plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7[0xd] = plStack_110;
  puVar7[0xc] = uStack_118;
  if (plStack_110 != (long *)0x0) {
    plVar10 = plStack_110 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7[0xe] = lVar12;
  *(undefined1 *)(puVar7 + 0xf) = 0;
  *(undefined1 *)(puVar7 + 0x11) = 0;
  puVar9 = puVar7 + 0xe;
  func_0x0001092ba064(puVar9,puVar7);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a700144(puVar7 + 0x10,puVar7 + 9);
    puVar7[0xe] = puVar7[0x10];
    plVar10 = (long *)(puVar7[0x10] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x11) = 1;
      lVar12 = puVar7[0xe];
      plVar10 = (long *)(lVar12 + 0x10);
      uVar17 = puVar7[3];
      do {
        lVar14 = *plVar10;
        if (lVar14 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            uStack_80 = 0;
            puStack_78 = puVar7;
            uStack_70 = uVar17;
            func_0x000109d1b588(lVar12 + 0x18,&uStack_80);
            *(undefined8 *)(lVar12 + 0x10) = 0;
            goto joined_r0x00010a6e1e74;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar7[0xe];
    if (((uint)*(undefined8 *)(puVar7[0xe] + 0x10) >> 5 & 1) != 0) {
      func_0x0001092af97c(plVar10 + 0x12);
LAB_10a6e201c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6e2020);
      (*pcVar6)();
    }
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar10 = (long *)puVar7[0x10];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x0001092ba100(puVar7 + 2);
    plVar10 = (long *)puVar7[0xd];
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 1;
      do {
        lVar12 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)puVar7[0xb];
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 1;
      do {
        lVar12 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = (long *)puVar7[9];
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar13 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    func_0x000109d1a1d0(puVar7 + 2);
    __ZdlPv(puVar7);
  }
joined_r0x00010a6e1e74:
  if (plVar16 != (long *)0x0) {
    puVar1 = (ulong *)(plVar16 + 1);
    do {
      uVar13 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar13 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
  plVar10 = plStack_110;
  if (plStack_110 != (long *)0x0) {
    plVar2 = plStack_110 + 1;
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_120;
  if (plStack_120 != (long *)0x0) {
    plVar2 = plStack_120 + 1;
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plStack_130 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_130 + 1);
    do {
      uVar13 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar13 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_130 + 8))();
      }
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      lVar12 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (plVar15 != (long *)0x0) {
    puVar1 = (ulong *)(plVar15 + 1);
    do {
      uVar13 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar13 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar13 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar15 + 8))(plVar15);
      }
    }
  }
  if (plStack_88 != (long *)0x0) {
    plVar15 = plStack_88 + 1;
    do {
      lVar12 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  return;
}



/* Entry: 10a6e240c; end: 10a6e2487;  */

void FUN_10a6e240c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 200) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    uVar3 = *(undefined8 *)(param_2 + 0x80);
    param_1[5] = *(undefined8 *)(param_2 + 0x78);
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x89);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)(param_2 + 0x91);
    *(undefined8 *)((long)param_1 + 0x39) = uVar2;
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    param_1[1] = *(undefined8 *)(param_2 + 0x58);
    *param_1 = uVar4;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    FUN_10a1ccb30(param_1 + 10,param_2 + 0xa0);
    uVar1 = *(undefined4 *)(param_2 + 0xc0);
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  return;
}



/* Entry: 10a6e2488; end: 10a6e248f;  */

long FUN_10a6e2488(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 10a6e2490; end: 10a6e2653;  */

void FUN_10a6e2490(long param_1)

{
  ulong *puVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_50 [8];
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  plVar9 = (long *)(param_1 + 0x38);
  if ((*plVar9 != 0) && (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) != 0)) {
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 5 & 1) == 0) {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f66e26f,&UNK_10f66e2c1,0x2d,&UNK_10f66e344);
      }
      func_0x0001092af8bc(plVar9);
      lVar7 = *plVar9;
      if ((*(byte *)(lVar7 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6e2628);
        (*pcVar5)();
      }
      FUN_10a6e2654(param_1 + 0x40,*(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xa0));
    }
    else if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(auStack_50,*plVar9 + 0x90);
      func_0x0001098bc760(appuStack_48,auStack_50);
      pppuVar2 = (undefined8 ***)appuStack_48[0];
      if (-1 < cStack_31) {
        pppuVar2 = appuStack_48;
      }
      func_0x00010ae06f08(1,4,&UNK_10f66e26f,&UNK_10f66e2c1,0x33,&UNK_10f66e3a6,in_x6,in_x7,pppuVar2
                         );
      if (cStack_31 < '\0') {
        __ZdlPv(appuStack_48[0]);
      }
      __ZNSt13exception_ptrD1Ev(auStack_50);
    }
    plVar6 = (long *)*plVar9;
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    *plVar9 = 0;
  }
  plVar9 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar9 + 0x20))();
  (**(code **)(*plVar9 + 0x20))();
  return;
}



/* Entry: 10a6e2654; end: 10a6e26c7;  */

undefined8 * FUN_10a6e2654(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
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
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a6e26c8; end: 10a6e26cf;  */

void FUN_10a6e26c8(long param_1)

{
  ulong *puVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_50 [8];
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  plVar9 = (long *)(param_1 + 0x28);
  if ((*plVar9 != 0) && (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) != 0)) {
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 5 & 1) == 0) {
      if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f66e26f,&UNK_10f66e2c1,0x2d,&UNK_10f66e344);
      }
      func_0x0001092af8bc(plVar9);
      lVar7 = *plVar9;
      if ((*(byte *)(lVar7 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6e2628);
        (*pcVar5)();
      }
      FUN_10a6e2654(param_1 + 0x30,*(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0xa0));
    }
    else if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(auStack_50,*plVar9 + 0x90);
      func_0x0001098bc760(appuStack_48,auStack_50);
      pppuVar2 = (undefined8 ***)appuStack_48[0];
      if (-1 < cStack_31) {
        pppuVar2 = appuStack_48;
      }
      func_0x00010ae06f08(1,4,&UNK_10f66e26f,&UNK_10f66e2c1,0x33,&UNK_10f66e3a6,in_x6,in_x7,pppuVar2
                         );
      if (cStack_31 < '\0') {
        __ZdlPv(appuStack_48[0]);
      }
      __ZNSt13exception_ptrD1Ev(auStack_50);
    }
    plVar6 = (long *)*plVar9;
    if (plVar6 != (long *)0x0) {
      puVar1 = (ulong *)(plVar6 + 1);
      do {
        uVar8 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    *plVar9 = 0;
  }
  plVar9 = *(long **)(param_1 + 0x30);
  (**(code **)(*plVar9 + 0x20))();
  (**(code **)(*plVar9 + 0x20))();
  return;
}



/* Entry: 10a6e26d0; end: 10a6e285b;  */

void FUN_10a6e26d0(long *param_1)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  while( true ) {
    plVar3 = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar4 = (long *)plVar3[8];
    (**(code **)(*plVar4 + 0x20))();
    (**(code **)(*plVar4 + 0x28))();
    plVar4 = (long *)plVar3[8];
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x98);
    (**(code **)(*plVar4 + 0x18))((undefined1 *)((long)register0x00000008 + -0x98));
    lVar5 = *(long *)((long)register0x00000008 + -0x78);
    lVar8 = *(long *)((long)register0x00000008 + -0x60);
    lVar7 = *(long *)((long)register0x00000008 + -0x68);
    plVar3[0xf] = *(long *)((long)register0x00000008 + -0x70);
    plVar3[0xe] = lVar5;
    plVar3[0x11] = lVar8;
    plVar3[0x10] = lVar7;
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x5f);
    *(undefined8 *)((long)plVar3 + 0x91) = *(undefined8 *)((long)register0x00000008 + -0x57);
    *(undefined8 *)((long)plVar3 + 0x89) = uVar6;
    lVar7 = *(long *)((long)register0x00000008 + -0x80);
    lVar5 = *(long *)((long)register0x00000008 + -0x88);
    lVar8 = *(long *)((long)register0x00000008 + -0x98);
    plVar3[0xb] = *(long *)((long)register0x00000008 + -0x90);
    plVar3[10] = lVar8;
    plVar3[0xd] = lVar7;
    plVar3[0xc] = lVar5;
    if ((char)plVar3[0x19] == '\x01') {
      plVar4 = plVar3 + 0x14;
      func_0x00010a20a7e0();
      *(undefined4 *)(plVar3 + 0x18) = *(undefined4 *)((long)register0x00000008 + -0x28);
      bVar1 = *(byte *)((long)register0x00000008 + -0x30);
    }
    else {
      *(undefined1 *)(plVar3 + 0x14) = 0;
      *(undefined1 *)(plVar3 + 0x17) = 0;
      bVar1 = *(byte *)((long)register0x00000008 + -0x30);
      if (bVar1 == 1) {
        lVar5 = *(long *)((long)register0x00000008 + -0x48);
        plVar3[0x15] = *(long *)((long)register0x00000008 + -0x40);
        plVar3[0x14] = lVar5;
        plVar3[0x16] = *(long *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
        *(undefined1 *)(plVar3 + 0x17) = 1;
      }
      *(undefined4 *)(plVar3 + 0x18) = *(undefined4 *)((long)register0x00000008 + -0x28);
      *(undefined1 *)(plVar3 + 0x19) = 1;
    }
    if (((bVar1 & 1) != 0) && (*(char *)((long)register0x00000008 + -0x31) < '\0')) {
      plVar4 = *(long **)((long)register0x00000008 + -0x48);
      __ZdlPv();
    }
    if (plVar3[7] != 0) {
      return;
    }
    if ((*(byte *)(plVar3 + 0x19) & 1) == 0) break;
    if ((char)plVar3[0x12] != '\x01') {
      return;
    }
    if (((uint)*(undefined8 *)(plVar3[0x1a] + 0x10) >> 1 & 1) != 0) {
      return;
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      plVar4 = (long *)0x1;
      func_0x00010ae06f08(1,4,&UNK_10f66e26f,&UNK_10f66e41d,0x41,&UNK_10f66e497);
    }
    if ((*(byte *)(plVar3 + 0x19) & 1) == 0) break;
    if ((*(byte *)(plVar3 + 0x12) & 1) != 0) {
      FUN_10a705fdc(plVar3[0x1b],plVar3 + 10);
      return;
    }
    FUN_10a04f808();
    unaff_x30 = FUN_10a6e285c;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    param_1 = plVar4 + -2;
    unaff_x19 = plVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6e2854);
  (*pcVar2)();
}



/* Entry: 10a6e285c; end: 10a6e2883;  */

void FUN_10a6e285c(long *param_1)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  while( true ) {
    plVar4 = param_1 + -2;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar3 = (long *)param_1[6];
    (**(code **)(*plVar3 + 0x20))();
    (**(code **)(*plVar3 + 0x28))();
    plVar3 = (long *)param_1[6];
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x98);
    (**(code **)(*plVar3 + 0x18))((undefined1 *)((long)register0x00000008 + -0x98));
    lVar5 = *(long *)((long)register0x00000008 + -0x78);
    lVar8 = *(long *)((long)register0x00000008 + -0x60);
    lVar7 = *(long *)((long)register0x00000008 + -0x68);
    param_1[0xd] = *(long *)((long)register0x00000008 + -0x70);
    param_1[0xc] = lVar5;
    param_1[0xf] = lVar8;
    param_1[0xe] = lVar7;
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x5f);
    *(undefined8 *)((long)param_1 + 0x81) = *(undefined8 *)((long)register0x00000008 + -0x57);
    *(undefined8 *)((long)param_1 + 0x79) = uVar6;
    lVar7 = *(long *)((long)register0x00000008 + -0x80);
    lVar5 = *(long *)((long)register0x00000008 + -0x88);
    lVar8 = *(long *)((long)register0x00000008 + -0x98);
    param_1[9] = *(long *)((long)register0x00000008 + -0x90);
    param_1[8] = lVar8;
    param_1[0xb] = lVar7;
    param_1[10] = lVar5;
    if ((char)param_1[0x17] == '\x01') {
      plVar3 = param_1 + 0x12;
      func_0x00010a20a7e0();
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((long)register0x00000008 + -0x28);
      bVar1 = *(byte *)((long)register0x00000008 + -0x30);
    }
    else {
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(undefined1 *)(param_1 + 0x15) = 0;
      bVar1 = *(byte *)((long)register0x00000008 + -0x30);
      if (bVar1 == 1) {
        lVar5 = *(long *)((long)register0x00000008 + -0x48);
        param_1[0x13] = *(long *)((long)register0x00000008 + -0x40);
        param_1[0x12] = lVar5;
        param_1[0x14] = *(long *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
        *(undefined1 *)(param_1 + 0x15) = 1;
      }
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((long)register0x00000008 + -0x28);
      *(undefined1 *)(param_1 + 0x17) = 1;
    }
    if (((bVar1 & 1) != 0) && (*(char *)((long)register0x00000008 + -0x31) < '\0')) {
      plVar3 = *(long **)((long)register0x00000008 + -0x48);
      __ZdlPv();
    }
    if (param_1[5] != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) break;
    if ((char)param_1[0x10] != '\x01') {
      return;
    }
    if (((uint)*(undefined8 *)(param_1[0x18] + 0x10) >> 1 & 1) != 0) {
      return;
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      plVar3 = (long *)0x1;
      func_0x00010ae06f08(1,4,&UNK_10f66e26f,&UNK_10f66e41d,0x41,&UNK_10f66e497);
    }
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) break;
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      FUN_10a705fdc(param_1[0x19],param_1 + 8);
      return;
    }
    FUN_10a04f808();
    unaff_x30 = FUN_10a6e285c;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    param_1 = plVar3;
    unaff_x19 = plVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6e2854);
  (*pcVar2)();
}



/* Entry: 10a6e2884; end: 10a6e28eb;  */

bool FUN_10a6e2884(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x29) {
    iVar2 = 0xf6623bb;
    _memcmp(&UNK_10f6623bb,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a6e28ec; end: 10a6e293b;  */

bool FUN_10a6e28ec(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x29) {
    iVar2 = 0xf6623bb;
    _memcmp(&UNK_10f6623bb,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a6e293c; end: 10a6e2d4b;  */

void FUN_10a6e293c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6623bb,0x29);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c12b70;
  pppuVar2 = (undefined8 ***)&UNK_10f66de00;
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
    ppuStack_b0 = &PTR_DAT_110c12b70;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6e2d2c;
    FUN_10a054dac(param_1,&UNK_10f64beb2,FUN_10a713470,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a6e2d2c;
    FUN_10a054dac(param_1,&UNK_10f64bebd,FUN_10a7135a0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66e4f4,FUN_10a713668,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66e50c,FUN_10a7137e0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66e51f,FUN_10a7138b4,FUN_10a7139d0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66e528,FUN_10a713aec,FUN_10a713b9c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66e541,FUN_10a713ddc,FUN_10a713e8c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66e55e,FUN_10a713f44,FUN_10a714020);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66e56e,FUN_10a7140d8,FUN_10a7141b4);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6623bb,0x29);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a6e2d2c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6e2d30);
  (*pcVar6)();
}



/* Entry: 10a6e2d4c; end: 10a6e2e1f;  */

void FUN_10a6e2d4c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c117e8;
  param_1[2] = &PTR_DAT_110c11908;
  param_1[7] = &PTR_DAT_110c11960;
  param_1[0xd] = &PTR_DAT_110c11980;
  param_1[0x56] = &PTR_DAT_110c11ad0;
  param_1[0x16] = &PTR_DAT_110c119f0;
  param_1[0x17] = &PTR_DAT_110c11a20;
  param_1[0x3e] = &PTR_DAT_110c11a58;
  FUN_10a71426c(param_1 + 0x54);
  plVar1 = (long *)param_1[0x53];
  param_1[0x53] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a042b54(param_1 + 0x51);
  func_0x00010a042b54(param_1 + 0x4f);
  func_0x00010a042b54(param_1 + 0x4d);
  func_0x00010a042b54(param_1 + 0x4b);
  FUN_10a0772f0(param_1 + 0x49);
  param_1[0x3e] = &PTR_DAT_110c12ac0;
  param_1[0x56] = &PTR_FUN_110c12b38;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c12940;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x56] = &PTR_DAT_110c12a70;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a6e2e20; end: 10a6e2e63;  */

void FUN_10a6e2e20(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c117e8;
  param_1[2] = &PTR_DAT_110c11908;
  param_1[7] = &PTR_DAT_110c11960;
  param_1[0xd] = &PTR_DAT_110c11980;
  param_1[0x56] = &PTR_DAT_110c11ad0;
  param_1[0x16] = &PTR_DAT_110c119f0;
  param_1[0x17] = &PTR_DAT_110c11a20;
  param_1[0x3e] = &PTR_DAT_110c11a58;
  FUN_10a71426c(param_1 + 0x54);
  plVar1 = (long *)param_1[0x53];
  param_1[0x53] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a042b54(param_1 + 0x51);
  func_0x00010a042b54(param_1 + 0x4f);
  func_0x00010a042b54(param_1 + 0x4d);
  func_0x00010a042b54(param_1 + 0x4b);
  FUN_10a0772f0(param_1 + 0x49);
  param_1[0x3e] = &PTR_DAT_110c12ac0;
  param_1[0x56] = &PTR_FUN_110c12b38;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c12940;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x56] = &PTR_DAT_110c12a70;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a6e2e64; end: 10a6e2f07;  */

void FUN_10a6e2e64(void)

{
  FUN_10a6e2d4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6e2f08; end: 10a6e2f37;  */

void FUN_10a6e2f08(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a6e2d4c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a6e2f38; end: 10a6e3027;  */

undefined8 * FUN_10a6e2f38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x56] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x59) = 0x100;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110c11b10,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110c11b20);
  *param_1 = &PTR_FUN_110c117e8;
  param_1[2] = &PTR_DAT_110c11908;
  param_1[7] = &PTR_DAT_110c11960;
  param_1[0xd] = &PTR_DAT_110c11980;
  param_1[0x56] = &PTR_DAT_110c11ad0;
  param_1[0x16] = &PTR_DAT_110c119f0;
  param_1[0x17] = &PTR_DAT_110c11a20;
  param_1[0x3e] = &PTR_DAT_110c11a58;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0x7fffffffffffffff;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x55] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  return param_1;
}



/* Entry: 10a6e3028; end: 10a6e3097;  */

void FUN_10a6e3028(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  plVar1 = *(long **)(param_1 + 0x298);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    if ((int)plVar1 != 0) {
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 1;
      FUN_10a0378a8(param_2 + 0x278,&uStack_38);
    }
    plVar1 = *(long **)(param_1 + 0x298);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    }
  }
  return;
}



/* Entry: 10a6e3098; end: 10a6e309f;  */

void FUN_10a6e3098(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    if ((int)plVar1 != 0) {
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 1;
      FUN_10a0378a8(param_2 + 0x278,&uStack_38);
    }
    plVar1 = *(long **)(param_1 + 0xa8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    }
  }
  return;
}



/* Entry: 10a6e30a0; end: 10a6e35fb;  */

void FUN_10a6e30a0(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar9 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar9 = lVar9 - *(long *)(param_1 + 0x220);
  if (1999999999 < lVar9) {
    puVar6 = *(undefined8 **)(param_2 + 0xe8);
    if (puVar6 == (undefined8 *)0x0) {
      if (((*(long *)(param_1 + 0x248) == 0) ||
          (*(char *)(*(long *)(param_1 + 0x248) + 0xe0) != '\x01')) &&
         ((*(byte *)(param_1 + 0x240) & 1) == 0)) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f66e57d,&UNK_10f66e5d2,0x70,&UNK_10f66e63d);
        }
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 3000);
        func_0x000107c2b054(&uStack_80,"lens_string_location_ar_location_cannot_be_determined_title"
                           );
        func_0x000107c2b054(&uStack_a0,"lens_string_location_ar_location_cannot_be_determined_desc")
        ;
        FUN_10a79ba1c(uVar8,3,&uStack_80,&uStack_a0);
        if (uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
        if (uStack_70 < 0) {
          __ZdlPv(uStack_80);
        }
        if (*(long **)(param_1 + 0x2a0) != (long *)0x0) {
          lVar10 = **(long **)(param_1 + 0x2a0);
          func_0x000107c2b054(&uStack_80,&UNK_10f66eb88);
          func_0x000107c2b054(&uStack_a0,"true");
          if (lVar10 != 0) {
            FUN_10a76bdb0(*(undefined8 *)(lVar10 + 0x8d8),&uStack_80,&uStack_a0);
          }
          if (uStack_90._7_1_ < '\0') {
            __ZdlPv(uStack_a0);
          }
          if (uStack_70._7_1_ < '\0') {
            __ZdlPv(uStack_80);
          }
        }
        *(undefined1 *)(param_1 + 0x240) = 1;
      }
    }
    else {
      uVar8 = *puVar6;
      *(undefined8 *)(param_1 + 0x230) = puVar6[1];
      *(undefined8 *)(param_1 + 0x228) = uVar8;
      if ((*(byte *)(param_1 + 0x238) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x238) = 1;
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0x298);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0x228);
    (**(code **)(**(long **)(param_1 + 0x298) + 0x30))
              (*(long **)(param_1 + 0x298),param_2,*(undefined8 *)(param_1 + 0x178));
    plVar3 = *(long **)(param_1 + 0x298);
    if (((plVar3 != (long *)0x0) &&
        ((**(code **)(*plVar3 + 0x48))(plVar3,param_2), (int)plVar3 != 0)) &&
       ((*(byte *)(param_1 + 0x218) & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x218) = 1;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f66e57d,&UNK_10f66e691,0xb9,&UNK_10f66e707);
      }
      puVar6 = *(undefined8 **)(param_1 + 600);
      if (puVar6 != (undefined8 *)0x0) {
        if (*(char *)(puVar6 + 8) == '\x01') {
          (*(code *)*puVar6)();
        }
        else if (*(char *)(puVar6 + 8) == '\x02') {
          FUN_10a05e614();
        }
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0x2a0);
  if (plVar3 != (long *)0x0) {
    lVar10 = *(long *)(param_2 + 0xa0);
    if (lVar10 != 0) {
      plVar4 = *(long **)(param_1 + 0x298);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        plVar5 = (long *)0x0;
        bVar11 = *(byte *)(param_1 + 0x218);
      }
      else {
        (**(code **)(*plVar4 + 0x20))();
        plVar5 = *(long **)(param_1 + 0x298);
        bVar11 = *(byte *)(param_1 + 0x218);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar5 + 0x28))();
        }
      }
      FUN_10a6e35fc(plVar3,lVar10 + 8,plVar4,bVar11 & 1,plVar5);
      plVar3 = *(long **)(param_1 + 0x2a0);
    }
    if (*(long *)(param_2 + 0xe8) == 0) {
      lVar9 = *plVar3;
      FUN_10a6e9574(auStack_b8,(char)plVar3[1]);
      puVar6 = auStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar6,0,&UNK_10f66ea12,4);
      uStack_98 = puVar6[1];
      uStack_a0 = *puVar6;
      uStack_90 = puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6 = &uStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar6,&UNK_10f66ebbc,0xd);
      uStack_78 = puVar6[1];
      uStack_80 = *puVar6;
      uStack_70 = puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      func_0x000107c2b054(auStack_d0,&DAT_10f6842c6);
      if (lVar9 != 0) {
        FUN_10a76bdb0(*(undefined8 *)(lVar9 + 0x8d8),&uStack_80,auStack_d0);
      }
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      if (uStack_70 < 0) {
        __ZdlPv(uStack_80);
      }
      if (uStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(auStack_b8[0]);
      }
      FUN_10a6e9574(auStack_b8,(char)plVar3[1]);
      puVar6 = auStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar6,0,&UNK_10f66ea12,4);
      uStack_98 = puVar6[1];
      uStack_a0 = *puVar6;
      uStack_90 = puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6 = &uStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar6,&UNK_10f66ebca,0xc);
      uStack_78 = puVar6[1];
      uStack_80 = *puVar6;
      uStack_70 = puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (*plVar3 != 0) {
        FUN_10a76bf18((double)((long)puVar6 - plVar3[2]) / 1000000000.0,
                      *(undefined8 *)(*plVar3 + 0x8d8),&uStack_80);
      }
      if (uStack_70 < 0) {
        __ZdlPv(uStack_80);
      }
      if (uStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(auStack_b8[0]);
      }
    }
    else {
      dVar13 = *(double *)(*(long *)(param_2 + 0xe8) + 0x18);
      FUN_10a6e9648(dVar13,plVar3);
      if (1999999999 < lVar9) {
        if (((*(byte *)(plVar3 + 0x14) & 1) == 0) && ((char)plVar3[0x12] == '\x01')) {
          plVar4 = plVar3;
          __ZNSt3__16chrono12steady_clock3nowEv();
          if ((*(byte *)(plVar3 + 0x14) & 1) == 0) {
            *(undefined1 *)(plVar3 + 0x14) = 1;
          }
          plVar3[0x13] = (long)plVar4;
          FUN_10a6e9574(&uStack_88,(char)plVar3[1]);
          puVar6 = &uStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar6,0,&UNK_10f66ea12,4);
          uStack_68 = puVar6[1];
          uStack_70 = *puVar6;
          lVar9 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          puVar6 = &uStack_70;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar6,&UNK_10f66ebf3,0xf);
          uVar8 = *puVar6;
          lVar10 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          if (((*(byte *)(plVar3 + 0x14) & 1) == 0) || ((*(byte *)(plVar3 + 0x12) & 1) == 0)) {
LAB_10a6e9cf8:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6e9cfc);
            (*pcVar2)();
          }
          if (*plVar3 != 0) {
            FUN_10a76bf18((double)(plVar3[0x13] - plVar3[0x11]) / 1000000000.0,
                          *(undefined8 *)(*plVar3 + 0x8d8),&stack0xffffffffffffffb0);
          }
          if (lVar10 < 0) {
            __ZdlPv(uVar8);
          }
          if (lVar9 < 0) {
            __ZdlPv(uStack_70);
          }
          if (uStack_78 < 0) {
            __ZdlPv(uStack_88);
          }
          lVar9 = plVar3[0x18];
          iVar1 = (int)lVar9 + 1;
          *(int *)(plVar3 + 0x18) = iVar1;
          dVar12 = (double)iVar1;
          plVar3[0x17] = (long)(dVar13 / dVar12 +
                               ((double)plVar3[0x17] * (double)(int)lVar9) / dVar12);
          lVar7 = *plVar3;
          FUN_10a6e9574(&uStack_88,(char)plVar3[1]);
          puVar6 = &uStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar6,0,&UNK_10f66ea12,4);
          uStack_68 = puVar6[1];
          uStack_70 = *puVar6;
          lVar9 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          puVar6 = &uStack_70;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar6,&UNK_10f66ec03,0x22);
          uVar8 = *puVar6;
          lVar10 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          if (lVar7 != 0) {
            FUN_10a76bf18(plVar3[0x17],*(undefined8 *)(lVar7 + 0x8d8),&stack0xffffffffffffffb0);
          }
        }
        else {
          FUN_10a6e9574(&uStack_88,(char)plVar3[1]);
          puVar6 = &uStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar6,0,&UNK_10f66ea12,4);
          uStack_68 = puVar6[1];
          uStack_70 = *puVar6;
          lVar9 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          puVar6 = &uStack_70;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar6,&UNK_10f66ec26,0xe);
          uVar8 = *puVar6;
          lVar10 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          __ZNSt3__16chrono12steady_clock3nowEv();
          if ((*(byte *)(plVar3 + 0x14) & 1) == 0) goto LAB_10a6e9cf8;
          if (*plVar3 != 0) {
            FUN_10a76bf18((double)((long)puVar6 - plVar3[0x13]) / 1000000000.0,
                          *(undefined8 *)(*plVar3 + 0x8d8),&stack0xffffffffffffffb0);
          }
          if (lVar10 < 0) {
            __ZdlPv(uVar8);
          }
          if (lVar9 < 0) {
            __ZdlPv(uStack_70);
          }
          if (uStack_78 < 0) {
            __ZdlPv(uStack_88);
          }
          lVar9 = plVar3[0x16];
          iVar1 = (int)lVar9 + 1;
          *(int *)(plVar3 + 0x16) = iVar1;
          dVar12 = (double)iVar1;
          plVar3[0x15] = (long)(dVar13 / dVar12 +
                               ((double)plVar3[0x15] * (double)(int)lVar9) / dVar12);
          lVar7 = *plVar3;
          FUN_10a6e9574(&uStack_88,(char)plVar3[1]);
          puVar6 = &uStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar6,0,&UNK_10f66ea12,4);
          uStack_68 = puVar6[1];
          uStack_70 = *puVar6;
          lVar9 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          puVar6 = &uStack_70;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar6,&UNK_10f66ec35,0x21);
          uVar8 = *puVar6;
          lVar10 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          if (lVar7 != 0) {
            FUN_10a76bf18(plVar3[0x15],*(undefined8 *)(lVar7 + 0x8d8),&stack0xffffffffffffffb0);
          }
        }
        if (lVar10 < 0) {
          __ZdlPv(uVar8);
        }
        if (lVar9 < 0) {
          __ZdlPv(uStack_70);
        }
        if (uStack_78._7_1_ < '\0') {
          __ZdlPv(uStack_88);
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 10a6e35fc; end: 10a6e428f;  */

void FUN_10a6e35fc(long *param_1,undefined4 *param_2,ulong param_3,ulong param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  code *pcVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined8 ******appppppuStack_a8 [2];
  char cStack_91;
  undefined8 ******ppppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 ******ppppppuStack_70;
  undefined8 *****pppppuStack_68;
  undefined8 *****pppppuStack_60;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_10a6e9574(auStack_c0,(char)param_1[1]);
  iVar1 = param_2[1];
  if ((int)param_1[0x21] != iVar1) {
    param_1[0x20] =
         (long)(*(double *)(param_2 + 4) / (double)iVar1 +
               ((double)param_1[0x20] * (double)(iVar1 + -1)) / (double)iVar1);
    lVar5 = *param_1;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&ppppppuStack_90,&UNK_10f66ea12,auStack_c0);
    pppppppuVar3 = &ppppppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar3,&UNK_10f66ecae,0x1a);
    pppppuStack_68 = pppppppuVar3[1];
    ppppppuStack_70 = *pppppppuVar3;
    pppppuStack_60 = pppppppuVar3[2];
    pppppppuVar3[1] = (undefined8 ******)0x0;
    pppppppuVar3[2] = (undefined8 ******)0x0;
    *pppppppuVar3 = (undefined8 ******)0x0;
    if (lVar5 != 0) {
      FUN_10a76bf18(param_1[0x20],*(undefined8 *)(lVar5 + 0x8d8),&ppppppuStack_70);
    }
    if ((long)pppppuStack_60 < 0) {
      __ZdlPv(ppppppuStack_70);
    }
    if ((long)pppppuStack_80 < 0) {
      __ZdlPv(ppppppuStack_90);
    }
    *(undefined4 *)(param_1 + 0x21) = param_2[1];
  }
  lVar5 = *param_1;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppppuStack_90,&UNK_10f66ea12,auStack_c0);
  pppppppuVar3 = &ppppppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar3,&UNK_10f66ecc9,0xe);
  pppppuStack_68 = pppppppuVar3[1];
  ppppppuStack_70 = *pppppppuVar3;
  pppppuStack_60 = pppppppuVar3[2];
  pppppppuVar3[1] = (undefined8 ******)0x0;
  pppppppuVar3[2] = (undefined8 ******)0x0;
  *pppppppuVar3 = (undefined8 ******)0x0;
  if (lVar5 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&ppppppuStack_70,param_2[1]);
  }
  if ((long)pppppuStack_60 < 0) {
    __ZdlPv(ppppppuStack_70);
  }
  if ((long)pppppuStack_80 < 0) {
    __ZdlPv(ppppppuStack_90);
  }
  lVar5 = *param_1;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppppuStack_90,&UNK_10f66ea12,auStack_c0);
  pppppppuVar3 = &ppppppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar3,&UNK_10f66ecd8,0x10);
  pppppuStack_68 = pppppppuVar3[1];
  ppppppuStack_70 = *pppppppuVar3;
  pppppuStack_60 = pppppppuVar3[2];
  pppppppuVar3[1] = (undefined8 ******)0x0;
  pppppppuVar3[2] = (undefined8 ******)0x0;
  *pppppppuVar3 = (undefined8 ******)0x0;
  if (lVar5 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&ppppppuStack_70,param_2[2]);
  }
  if ((long)pppppuStack_60 < 0) {
    __ZdlPv(ppppppuStack_70);
  }
  if ((long)pppppuStack_80 < 0) {
    __ZdlPv(ppppppuStack_90);
  }
  lVar5 = *param_1;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppppuStack_90,&UNK_10f66ea12,auStack_c0);
  pppppppuVar3 = &ppppppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar3,&UNK_10f66ece9,0x15);
  pppppuStack_68 = pppppppuVar3[1];
  ppppppuStack_70 = *pppppppuVar3;
  pppppuStack_60 = pppppppuVar3[2];
  pppppppuVar3[1] = (undefined8 ******)0x0;
  pppppppuVar3[2] = (undefined8 ******)0x0;
  *pppppppuVar3 = (undefined8 ******)0x0;
  if (lVar5 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&ppppppuStack_70,param_2[9]);
  }
  if ((long)pppppuStack_60 < 0) {
    __ZdlPv(ppppppuStack_70);
  }
  if ((long)pppppuStack_80 < 0) {
    __ZdlPv(ppppppuStack_90);
  }
  lVar5 = *param_1;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppppuStack_90,&UNK_10f66ea12,auStack_c0);
  pppppppuVar3 = &ppppppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar3,&UNK_10f66ecff,0x1b);
  pppppuStack_68 = pppppppuVar3[1];
  ppppppuStack_70 = *pppppppuVar3;
  pppppuStack_60 = pppppppuVar3[2];
  pppppppuVar3[1] = (undefined8 ******)0x0;
  pppppppuVar3[2] = (undefined8 ******)0x0;
  *pppppppuVar3 = (undefined8 ******)0x0;
  if (lVar5 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&ppppppuStack_70,*param_2);
  }
  if ((long)pppppuStack_60 < 0) {
    __ZdlPv(ppppppuStack_70);
  }
  if ((long)pppppuStack_80 < 0) {
    __ZdlPv(ppppppuStack_90);
  }
  lVar5 = *param_1;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppppuStack_90,&UNK_10f66ea12,auStack_c0);
  pppppppuVar3 = &ppppppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar3,&UNK_10f66ed1b,0x27);
  pppppuStack_68 = pppppppuVar3[1];
  ppppppuStack_70 = *pppppppuVar3;
  pppppuStack_60 = pppppppuVar3[2];
  pppppppuVar3[1] = (undefined8 ******)0x0;
  pppppppuVar3[2] = (undefined8 ******)0x0;
  *pppppppuVar3 = (undefined8 ******)0x0;
  if (lVar5 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&ppppppuStack_70,param_2[6]);
  }
  if ((long)pppppuStack_60 < 0) {
    __ZdlPv(ppppppuStack_70);
  }
  if ((long)pppppuStack_80 < 0) {
    __ZdlPv(ppppppuStack_90);
  }
  lVar5 = *param_1;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppppuStack_90,&UNK_10f66ea12,auStack_c0);
  pppppppuVar3 = &ppppppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar3,&UNK_10f66ed43,0x21);
  pppppuStack_68 = pppppppuVar3[1];
  ppppppuStack_70 = *pppppppuVar3;
  pppppuStack_60 = pppppppuVar3[2];
  pppppppuVar3[1] = (undefined8 ******)0x0;
  pppppppuVar3[2] = (undefined8 ******)0x0;
  *pppppppuVar3 = (undefined8 ******)0x0;
  if (lVar5 != 0) {
    FUN_10a76bd40(*(undefined8 *)(lVar5 + 0x8d8),&ppppppuStack_70,param_2[7]);
  }
  if ((long)pppppuStack_60 < 0) {
    __ZdlPv(ppppppuStack_70);
  }
  if ((long)pppppuStack_80 < 0) {
    __ZdlPv(ppppppuStack_90);
  }
  lVar5 = *param_1;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&ppppppuStack_90,&UNK_10f66ea12,auStack_c0);
  pppppppuVar3 = &ppppppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar3,&UNK_10f66ed65,0x22);
  pppppuStack_68 = pppppppuVar3[1];
  ppppppuStack_70 = *pppppppuVar3;
  pppppuStack_60 = pppppppuVar3[2];
  pppppppuVar3[1] = (undefined8 ******)0x0;
  pppppppuVar3[2] = (undefined8 ******)0x0;
  *pppppppuVar3 = (undefined8 ******)0x0;
  if (lVar5 != 0) {
    pppppppuVar3 = *(undefined8 ********)(lVar5 + 0x8d8);
    FUN_10a76bd40(pppppppuVar3,&ppppppuStack_70,param_2[8]);
  }
  if ((long)pppppuStack_60 < 0) {
    pppppppuVar3 = (undefined8 *******)ppppppuStack_70;
    __ZdlPv();
  }
  if ((long)pppppuStack_80 < 0) {
    pppppppuVar3 = (undefined8 *******)ppppppuStack_90;
    __ZdlPv();
    if ((param_3 & 1) == 0) goto LAB_10a6e3bbc;
LAB_10a6e3a3c:
    if (param_5 != 0) {
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((*(byte *)(param_1 + 8) & 1) == 0) {
          *(undefined1 *)(param_1 + 8) = 1;
        }
        param_1[7] = (long)pppppppuVar3;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((*(byte *)(param_1 + 8) & 1) == 0) goto LAB_10a6e414c;
      param_1[0xe] = (long)((double)param_1[0xe] +
                           (double)((long)pppppppuVar3 - param_1[7]) / 1000000000.0);
      lVar5 = *param_1;
      FUN_10a6e9574(appppppuStack_a8,(char)param_1[1]);
      pppppppuVar3 = appppppuStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pppppppuVar3,0,&UNK_10f66ea12,4);
      pppppuStack_88 = pppppppuVar3[1];
      ppppppuStack_90 = *pppppppuVar3;
      pppppuStack_80 = pppppppuVar3[2];
      pppppppuVar3[1] = (undefined8 ******)0x0;
      pppppppuVar3[2] = (undefined8 ******)0x0;
      *pppppppuVar3 = (undefined8 ******)0x0;
      pppppppuVar3 = &ppppppuStack_90;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar3,&UNK_10f66eb5a,0xe);
      pppppuStack_68 = pppppppuVar3[1];
      ppppppuStack_70 = *pppppppuVar3;
      pppppuStack_60 = pppppppuVar3[2];
      pppppppuVar3[1] = (undefined8 ******)0x0;
      pppppppuVar3[2] = (undefined8 ******)0x0;
      *pppppppuVar3 = (undefined8 ******)0x0;
      if (lVar5 != 0) {
        FUN_10a76bf18(param_1[0xe],*(undefined8 *)(lVar5 + 0x8d8),&ppppppuStack_70);
      }
      if ((long)pppppuStack_60 < 0) {
        __ZdlPv(ppppppuStack_70);
      }
      if ((long)pppppuStack_80 < 0) {
        __ZdlPv(ppppppuStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(appppppuStack_a8[0]);
      }
      lVar5 = *param_1;
      param_1[0xd] = (long)((double)param_1[0xd] +
                           *(double *)(*(long *)(lVar5 + 0x850) + 0x10) * 1000.0);
      func_0x000107c2b054(&ppppppuStack_70,&UNK_10f66eb69);
      pppppppuVar3 = *(undefined8 ********)(lVar5 + 0x8d8);
      FUN_10a76bf18(param_1[0xd],pppppppuVar3,&ppppppuStack_70);
      if ((long)pppppuStack_60 < 0) {
        pppppppuVar3 = (undefined8 *******)ppppppuStack_70;
        __ZdlPv();
      }
    }
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      lVar5 = *param_1;
      if ((char)param_1[10] == '\x01') {
        dVar6 = (double)param_1[9];
      }
      else {
        dVar6 = *(double *)(*(long *)(lVar5 + 0x850) + 8) +
                *(double *)(*(long *)(lVar5 + 0x850) + 0x18);
        param_1[9] = (long)dVar6;
        *(undefined1 *)(param_1 + 10) = 1;
      }
      dVar7 = *(double *)(*(long *)(lVar5 + 0x850) + 8) +
              *(double *)(*(long *)(lVar5 + 0x850) + 0x18);
      param_1[0xb] = (long)dVar7;
      *(undefined1 *)(param_1 + 0xc) = 1;
      func_0x000107c2b054(&ppppppuStack_70,&UNK_10f66ea2e);
      dVar6 = (dVar7 - dVar6) * 1000.0;
      pppppppuVar3 = *(undefined8 ********)(lVar5 + 0x8d8);
      FUN_10a76bf18(dVar6,pppppppuVar3,&ppppppuStack_70);
      if ((long)pppppuStack_60 < 0) {
        pppppppuVar3 = (undefined8 *******)ppppppuStack_70;
        __ZdlPv();
      }
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        pppppppuVar3 = (undefined8 *******)0x1;
        func_0x00010ae06f08(1,4,&UNK_10f66ea5a,&UNK_10f66ea9d,0x2c,&UNK_10f66eae2,param_7,param_8,
                            dVar6);
      }
    }
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      if ((char)param_1[6] == '\x01') {
        param_1[5] = (long)pppppppuVar3;
        if ((*(byte *)(param_1 + 4) & 1) != 0) {
LAB_10a6e3e5c:
          lVar5 = param_1[3];
          FUN_10a6e9574(appppppuStack_a8,(char)param_1[1]);
          pppppppuVar4 = appppppuStack_a8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppuVar4,0,&UNK_10f66ea12,4);
          pppppuStack_88 = pppppppuVar4[1];
          ppppppuStack_90 = *pppppppuVar4;
          pppppuStack_80 = pppppppuVar4[2];
          pppppppuVar4[1] = (undefined8 ******)0x0;
          pppppppuVar4[2] = (undefined8 ******)0x0;
          *pppppppuVar4 = (undefined8 ******)0x0;
          pppppppuVar4 = &ppppppuStack_90;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar4,&UNK_10f66eb19,0xf);
          dVar6 = (double)((long)pppppppuVar3 - lVar5) / 1000000000.0;
          pppppuStack_68 = pppppppuVar4[1];
          ppppppuStack_70 = *pppppppuVar4;
          pppppuStack_60 = pppppppuVar4[2];
          pppppppuVar4[1] = (undefined8 ******)0x0;
          pppppppuVar4[2] = (undefined8 ******)0x0;
          *pppppppuVar4 = (undefined8 ******)0x0;
          if (*param_1 != 0) {
            FUN_10a76bf18(dVar6,*(undefined8 *)(*param_1 + 0x8d8),&ppppppuStack_70);
          }
          if ((long)pppppuStack_60 < 0) {
            __ZdlPv(ppppppuStack_70);
          }
          if ((long)pppppuStack_80 < 0) {
            __ZdlPv(ppppppuStack_90);
          }
          if (cStack_91 < '\0') {
            __ZdlPv(appppppuStack_a8[0]);
          }
          FUN_10a6e9574(appppppuStack_a8,(char)param_1[1]);
          pppppppuVar3 = appppppuStack_a8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppuVar3,0,&UNK_10f66ea12,4);
          pppppuStack_88 = pppppppuVar3[1];
          ppppppuStack_90 = *pppppppuVar3;
          pppppuStack_80 = pppppppuVar3[2];
          pppppppuVar3[1] = (undefined8 ******)0x0;
          pppppppuVar3[2] = (undefined8 ******)0x0;
          *pppppppuVar3 = (undefined8 ******)0x0;
          pppppppuVar3 = &ppppppuStack_90;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar3,&UNK_10f66eb29,0xc);
          pppppuStack_68 = pppppppuVar3[1];
          ppppppuStack_70 = *pppppppuVar3;
          pppppuStack_60 = pppppppuVar3[2];
          pppppppuVar3[1] = (undefined8 ******)0x0;
          pppppppuVar3[2] = (undefined8 ******)0x0;
          *pppppppuVar3 = (undefined8 ******)0x0;
          if (*param_1 != 0) {
            pppppppuVar3 = *(undefined8 ********)(*param_1 + 0x8d8);
            FUN_10a76bf18(dVar6,pppppppuVar3,&ppppppuStack_70);
          }
          if ((long)pppppuStack_60 < 0) {
            pppppppuVar3 = (undefined8 *******)ppppppuStack_70;
            __ZdlPv();
          }
          if ((long)pppppuStack_80 < 0) {
            pppppppuVar3 = (undefined8 *******)ppppppuStack_90;
            __ZdlPv();
          }
          if (cStack_91 < '\0') {
            pppppppuVar3 = (undefined8 *******)appppppuStack_a8[0];
            __ZdlPv();
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 6) = 1;
        param_1[5] = (long)pppppppuVar3;
        if ((char)param_1[4] == '\x01') goto LAB_10a6e3e5c;
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    param_1[7] = (long)pppppppuVar3;
    FUN_10a6e9574(appppppuStack_a8,(char)param_1[1]);
    pppppppuVar3 = appppppuStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (pppppppuVar3,0,&UNK_10f66ea12,4);
    pppppuStack_88 = pppppppuVar3[1];
    ppppppuStack_90 = *pppppppuVar3;
    pppppuStack_80 = pppppppuVar3[2];
    pppppppuVar3[1] = (undefined8 ******)0x0;
    pppppppuVar3[2] = (undefined8 ******)0x0;
    *pppppppuVar3 = (undefined8 ******)0x0;
    pppppppuVar3 = &ppppppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar3,&UNK_10f66eb36,0xb);
    pppppuStack_68 = pppppppuVar3[1];
    ppppppuStack_70 = *pppppppuVar3;
    pppppuStack_60 = pppppppuVar3[2];
    pppppppuVar3[1] = (undefined8 ******)0x0;
    pppppppuVar3[2] = (undefined8 ******)0x0;
    *pppppppuVar3 = (undefined8 ******)0x0;
    if (((*(byte *)(param_1 + 8) & 1) == 0) || ((*(byte *)(param_1 + 6) & 1) == 0)) {
LAB_10a6e414c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6e4150);
      (*pcVar2)();
    }
    if (*param_1 != 0) {
      FUN_10a76bf18((double)(param_1[7] - param_1[5]) / 1000000000.0,
                    *(undefined8 *)(*param_1 + 0x8d8),&ppppppuStack_70);
    }
    if ((long)pppppuStack_60 < 0) {
      __ZdlPv(ppppppuStack_70);
    }
    if ((long)pppppuStack_80 < 0) {
      __ZdlPv(ppppppuStack_90);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(appppppuStack_a8[0]);
    }
    func_0x000107c2b054(&ppppppuStack_70,&UNK_10f66eb42);
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      FUN_10a04f808();
      goto LAB_10a6e414c;
    }
    lVar5 = *(long *)(*param_1 + 0x850);
    FUN_10a76bf18(((*(double *)(lVar5 + 8) + *(double *)(lVar5 + 0x18)) - (double)param_1[0xb]) *
                  1000.0,*(undefined8 *)(*param_1 + 0x8d8),&ppppppuStack_70);
    appppppuStack_a8[0] = ppppppuStack_70;
    if (-1 < (long)pppppuStack_60) goto LAB_10a6e411c;
  }
  else {
    if ((param_3 & 1) != 0) goto LAB_10a6e3a3c;
LAB_10a6e3bbc:
    if ((param_4 & 1) != 0) {
      if ((*(byte *)(param_1 + 10) & 1) == 0) {
        param_1[9] = (long)(*(double *)(*(long *)(*param_1 + 0x850) + 8) +
                           *(double *)(*(long *)(*param_1 + 0x850) + 0x18));
        *(undefined1 *)(param_1 + 10) = 1;
      }
      goto LAB_10a6e411c;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    lVar5 = param_1[2];
    FUN_10a6e9574(appppppuStack_a8,(char)param_1[1]);
    pppppppuVar4 = appppppuStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (pppppppuVar4,0,&UNK_10f66ea12,4);
    pppppuStack_88 = pppppppuVar4[1];
    ppppppuStack_90 = *pppppppuVar4;
    pppppuStack_80 = pppppppuVar4[2];
    pppppppuVar4[1] = (undefined8 ******)0x0;
    pppppppuVar4[2] = (undefined8 ******)0x0;
    *pppppppuVar4 = (undefined8 ******)0x0;
    pppppppuVar4 = &ppppppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar4,&UNK_10f66ea17,9);
    dVar6 = (double)((long)pppppppuVar3 - lVar5) / 1000000000.0;
    pppppuStack_68 = pppppppuVar4[1];
    ppppppuStack_70 = *pppppppuVar4;
    pppppuStack_60 = pppppppuVar4[2];
    pppppppuVar4[1] = (undefined8 ******)0x0;
    pppppppuVar4[2] = (undefined8 ******)0x0;
    *pppppppuVar4 = (undefined8 ******)0x0;
    if (*param_1 != 0) {
      FUN_10a76bf18(dVar6,*(undefined8 *)(*param_1 + 0x8d8),&ppppppuStack_70);
    }
    if ((long)pppppuStack_60 < 0) {
      __ZdlPv(ppppppuStack_70);
    }
    if ((long)pppppuStack_80 < 0) {
      __ZdlPv(ppppppuStack_90);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(appppppuStack_a8[0]);
    }
    FUN_10a6e9574(appppppuStack_a8,(char)param_1[1]);
    pppppppuVar3 = appppppuStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (pppppppuVar3,0,&UNK_10f66ea12,4);
    pppppuStack_88 = pppppppuVar3[1];
    ppppppuStack_90 = *pppppppuVar3;
    pppppuStack_80 = pppppppuVar3[2];
    pppppppuVar3[1] = (undefined8 ******)0x0;
    pppppppuVar3[2] = (undefined8 ******)0x0;
    *pppppppuVar3 = (undefined8 ******)0x0;
    pppppppuVar3 = &ppppppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar3,&UNK_10f66ea21,0xc);
    pppppuStack_68 = pppppppuVar3[1];
    ppppppuStack_70 = *pppppppuVar3;
    pppppuStack_60 = pppppppuVar3[2];
    pppppppuVar3[1] = (undefined8 ******)0x0;
    pppppppuVar3[2] = (undefined8 ******)0x0;
    *pppppppuVar3 = (undefined8 ******)0x0;
    if (*param_1 != 0) {
      FUN_10a76bf18(dVar6,*(undefined8 *)(*param_1 + 0x8d8),&ppppppuStack_70);
    }
    if ((long)pppppuStack_60 < 0) {
      __ZdlPv(ppppppuStack_70);
    }
    if ((long)pppppuStack_80 < 0) {
      __ZdlPv(ppppppuStack_90);
    }
    if (-1 < cStack_91) goto LAB_10a6e411c;
  }
  __ZdlPv(appppppuStack_a8[0]);
LAB_10a6e411c:
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  return;
}



/* Entry: 10a6e4290; end: 10a6e4297;  */

void FUN_10a6e4290(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = param_1 + -0x1f0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar6 = lVar6 - *(long *)(param_1 + 0x30);
  if (1999999999 < lVar6) {
    puVar7 = *(undefined8 **)(param_2 + 0xe8);
    if (puVar7 == (undefined8 *)0x0) {
      if (((*(long *)(param_1 + 0x58) == 0) ||
          (*(char *)(*(long *)(param_1 + 0x58) + 0xe0) != '\x01')) &&
         ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f66e57d,&UNK_10f66e5d2,0x70,&UNK_10f66e63d);
        }
        uVar9 = *(undefined8 *)(*(long *)(param_1 + -0x80) + 3000);
        func_0x000107c2b054(&uStack_80,"lens_string_location_ar_location_cannot_be_determined_title"
                           );
        func_0x000107c2b054(&uStack_a0,"lens_string_location_ar_location_cannot_be_determined_desc")
        ;
        FUN_10a79ba1c(uVar9,3,&uStack_80,&uStack_a0);
        if (uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
        if (uStack_70 < 0) {
          __ZdlPv(uStack_80);
        }
        if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
          lVar10 = **(long **)(param_1 + 0xb0);
          func_0x000107c2b054(&uStack_80,&UNK_10f66eb88);
          func_0x000107c2b054(&uStack_a0,"true");
          if (lVar10 != 0) {
            FUN_10a76bdb0(*(undefined8 *)(lVar10 + 0x8d8),&uStack_80,&uStack_a0);
          }
          if (uStack_90._7_1_ < '\0') {
            __ZdlPv(uStack_a0);
          }
          if (uStack_70._7_1_ < '\0') {
            __ZdlPv(uStack_80);
          }
        }
        *(undefined1 *)(param_1 + 0x50) = 1;
      }
    }
    else {
      uVar9 = *puVar7;
      *(undefined8 *)(param_1 + 0x40) = puVar7[1];
      *(undefined8 *)(param_1 + 0x38) = uVar9;
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0xa8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0x38);
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))
              (*(long **)(param_1 + 0xa8),param_2,*(undefined8 *)(param_1 + -0x78));
    plVar3 = *(long **)(param_1 + 0xa8);
    if (((plVar3 != (long *)0x0) &&
        ((**(code **)(*plVar3 + 0x48))(plVar3,param_2), (int)plVar3 != 0)) &&
       ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f66e57d,&UNK_10f66e691,0xb9,&UNK_10f66e707);
      }
      puVar7 = *(undefined8 **)(param_1 + 0x68);
      if (puVar7 != (undefined8 *)0x0) {
        if (*(char *)(puVar7 + 8) == '\x01') {
          (*(code *)*puVar7)();
        }
        else if (*(char *)(puVar7 + 8) == '\x02') {
          FUN_10a05e614();
        }
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0xb0);
  if (plVar3 != (long *)0x0) {
    lVar10 = *(long *)(param_2 + 0xa0);
    if (lVar10 != 0) {
      plVar4 = *(long **)(param_1 + 0xa8);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        plVar5 = (long *)0x0;
        bVar11 = *(byte *)(param_1 + 0x28);
      }
      else {
        (**(code **)(*plVar4 + 0x20))();
        plVar5 = *(long **)(param_1 + 0xa8);
        bVar11 = *(byte *)(param_1 + 0x28);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar5 + 0x28))();
        }
      }
      FUN_10a6e35fc(plVar3,lVar10 + 8,plVar4,bVar11 & 1,plVar5);
      plVar3 = *(long **)(param_1 + 0xb0);
    }
    if (*(long *)(param_2 + 0xe8) == 0) {
      lVar6 = *plVar3;
      FUN_10a6e9574(auStack_b8,(char)plVar3[1]);
      puVar7 = auStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar7,0,&UNK_10f66ea12,4);
      uStack_98 = puVar7[1];
      uStack_a0 = *puVar7;
      uStack_90 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      puVar7 = &uStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,&UNK_10f66ebbc,0xd);
      uStack_78 = puVar7[1];
      uStack_80 = *puVar7;
      uStack_70 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      func_0x000107c2b054(auStack_d0,&DAT_10f6842c6);
      if (lVar6 != 0) {
        FUN_10a76bdb0(*(undefined8 *)(lVar6 + 0x8d8),&uStack_80,auStack_d0);
      }
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      if (uStack_70 < 0) {
        __ZdlPv(uStack_80);
      }
      if (uStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(auStack_b8[0]);
      }
      FUN_10a6e9574(auStack_b8,(char)plVar3[1]);
      puVar7 = auStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar7,0,&UNK_10f66ea12,4);
      uStack_98 = puVar7[1];
      uStack_a0 = *puVar7;
      uStack_90 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      puVar7 = &uStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar7,&UNK_10f66ebca,0xc);
      uStack_78 = puVar7[1];
      uStack_80 = *puVar7;
      uStack_70 = puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (*plVar3 != 0) {
        FUN_10a76bf18((double)((long)puVar7 - plVar3[2]) / 1000000000.0,
                      *(undefined8 *)(*plVar3 + 0x8d8),&uStack_80);
      }
      if (uStack_70 < 0) {
        __ZdlPv(uStack_80);
      }
      if (uStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(auStack_b8[0]);
      }
    }
    else {
      dVar13 = *(double *)(*(long *)(param_2 + 0xe8) + 0x18);
      FUN_10a6e9648(dVar13,plVar3);
      if (1999999999 < lVar6) {
        if (((*(byte *)(plVar3 + 0x14) & 1) == 0) && ((char)plVar3[0x12] == '\x01')) {
          plVar4 = plVar3;
          __ZNSt3__16chrono12steady_clock3nowEv();
          if ((*(byte *)(plVar3 + 0x14) & 1) == 0) {
            *(undefined1 *)(plVar3 + 0x14) = 1;
          }
          plVar3[0x13] = (long)plVar4;
          FUN_10a6e9574(&uStack_88,(char)plVar3[1]);
          puVar7 = &uStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar7,0,&UNK_10f66ea12,4);
          uStack_68 = puVar7[1];
          uStack_70 = *puVar7;
          lVar6 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          puVar7 = &uStack_70;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar7,&UNK_10f66ebf3,0xf);
          uVar9 = *puVar7;
          lVar10 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          if (((*(byte *)(plVar3 + 0x14) & 1) == 0) || ((*(byte *)(plVar3 + 0x12) & 1) == 0)) {
LAB_10a6e9cf8:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6e9cfc);
            (*pcVar2)();
          }
          if (*plVar3 != 0) {
            FUN_10a76bf18((double)(plVar3[0x13] - plVar3[0x11]) / 1000000000.0,
                          *(undefined8 *)(*plVar3 + 0x8d8),&stack0xffffffffffffffb0);
          }
          if (lVar10 < 0) {
            __ZdlPv(uVar9);
          }
          if (lVar6 < 0) {
            __ZdlPv(uStack_70);
          }
          if (uStack_78 < 0) {
            __ZdlPv(uStack_88);
          }
          lVar6 = plVar3[0x18];
          iVar1 = (int)lVar6 + 1;
          *(int *)(plVar3 + 0x18) = iVar1;
          dVar12 = (double)iVar1;
          plVar3[0x17] = (long)(dVar13 / dVar12 +
                               ((double)plVar3[0x17] * (double)(int)lVar6) / dVar12);
          lVar8 = *plVar3;
          FUN_10a6e9574(&uStack_88,(char)plVar3[1]);
          puVar7 = &uStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar7,0,&UNK_10f66ea12,4);
          uStack_68 = puVar7[1];
          uStack_70 = *puVar7;
          lVar6 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          puVar7 = &uStack_70;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar7,&UNK_10f66ec03,0x22);
          uVar9 = *puVar7;
          lVar10 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          if (lVar8 != 0) {
            FUN_10a76bf18(plVar3[0x17],*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffb0);
          }
        }
        else {
          FUN_10a6e9574(&uStack_88,(char)plVar3[1]);
          puVar7 = &uStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar7,0,&UNK_10f66ea12,4);
          uStack_68 = puVar7[1];
          uStack_70 = *puVar7;
          lVar6 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          puVar7 = &uStack_70;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar7,&UNK_10f66ec26,0xe);
          uVar9 = *puVar7;
          lVar10 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          __ZNSt3__16chrono12steady_clock3nowEv();
          if ((*(byte *)(plVar3 + 0x14) & 1) == 0) goto LAB_10a6e9cf8;
          if (*plVar3 != 0) {
            FUN_10a76bf18((double)((long)puVar7 - plVar3[0x13]) / 1000000000.0,
                          *(undefined8 *)(*plVar3 + 0x8d8),&stack0xffffffffffffffb0);
          }
          if (lVar10 < 0) {
            __ZdlPv(uVar9);
          }
          if (lVar6 < 0) {
            __ZdlPv(uStack_70);
          }
          if (uStack_78 < 0) {
            __ZdlPv(uStack_88);
          }
          lVar6 = plVar3[0x16];
          iVar1 = (int)lVar6 + 1;
          *(int *)(plVar3 + 0x16) = iVar1;
          dVar12 = (double)iVar1;
          plVar3[0x15] = (long)(dVar13 / dVar12 +
                               ((double)plVar3[0x15] * (double)(int)lVar6) / dVar12);
          lVar8 = *plVar3;
          FUN_10a6e9574(&uStack_88,(char)plVar3[1]);
          puVar7 = &uStack_88;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar7,0,&UNK_10f66ea12,4);
          uStack_68 = puVar7[1];
          uStack_70 = *puVar7;
          lVar6 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          puVar7 = &uStack_70;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar7,&UNK_10f66ec35,0x21);
          uVar9 = *puVar7;
          lVar10 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          if (lVar8 != 0) {
            FUN_10a76bf18(plVar3[0x15],*(undefined8 *)(lVar8 + 0x8d8),&stack0xffffffffffffffb0);
          }
        }
        if (lVar10 < 0) {
          __ZdlPv(uVar9);
        }
        if (lVar6 < 0) {
          __ZdlPv(uStack_70);
        }
        if (uStack_78._7_1_ < '\0') {
          __ZdlPv(uStack_88);
        }
        return;
      }
    }
  }
  return;
}


