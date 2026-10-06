/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a40c97c; end: 10a40cad7;  */

void FUN_10a40c97c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x68;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bd3f60;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  *(undefined4 *)((long)plVar5 + 0x44) = 0;
  *(undefined2 *)((long)plVar5 + 0x54) = 0x201;
  plVar5[0xb] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110bd3a28;
  plVar5[6] = (long)&PTR_FUN_110bd3ad0;
  *(undefined4 *)(plVar5 + 0xc) = 0x40c00000;
  lVar6 = NEON_fmov(0x40c00000,4);
  plVar5[9] = lVar6;
  *(undefined4 *)(plVar5 + 10) = 0x40c00000;
  ppuStack_48 = &PTR_DAT_110bd3df0;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a40cad8; end: 10a40cc37;  */

void FUN_10a40cad8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x70;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bd3bc0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  *(undefined8 *)((long)plVar5 + 0x4c) = 0;
  *(undefined8 *)((long)plVar5 + 0x44) = 0;
  *(undefined2 *)((long)plVar5 + 0x54) = 0x202;
  plVar5[0xb] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110bd33f8;
  plVar5[6] = (long)&PTR_FUN_110bd34a0;
  *(undefined1 *)(plVar5 + 0xc) = 1;
  *(undefined8 *)((long)plVar5 + 100) = 0x40c0000041900000;
  ppuStack_48 = &PTR_DAT_110bd3e08;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a40cc38; end: 10a40cd97;  */

void FUN_10a40cc38(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x70;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bd3ed8;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  *(undefined8 *)((long)plVar5 + 0x4c) = 0;
  *(undefined8 *)((long)plVar5 + 0x44) = 0;
  *(undefined2 *)((long)plVar5 + 0x54) = 0x203;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110bd32e8;
  plVar5[6] = (long)&PTR_FUN_110bd3390;
  *(undefined4 *)(plVar5 + 0xd) = 0x41700000;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0x4170000041700000;
  ppuStack_48 = &PTR_DAT_110bd3e20;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a40cd98; end: 10a40cef7;  */

void FUN_10a40cd98(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x70;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bd3c10;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  *(undefined8 *)((long)plVar5 + 0x4c) = 0;
  *(undefined8 *)((long)plVar5 + 0x44) = 0;
  *(undefined2 *)((long)plVar5 + 0x54) = 0x204;
  plVar5[0xb] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110bd3548;
  plVar5[6] = (long)&PTR_FUN_110bd35f0;
  *(undefined1 *)(plVar5 + 0xc) = 1;
  *(undefined8 *)((long)plVar5 + 100) = 0x40c0000041900000;
  ppuStack_48 = &PTR_DAT_110bd3b28;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a40cef8; end: 10a40d057;  */

void FUN_10a40cef8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x70;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bd3c60;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  *(undefined8 *)((long)plVar5 + 0x4c) = 0;
  *(undefined8 *)((long)plVar5 + 0x44) = 0;
  *(undefined2 *)((long)plVar5 + 0x54) = 0x205;
  plVar5[0xb] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110bd3698;
  plVar5[6] = (long)&PTR_FUN_110bd3740;
  *(undefined1 *)(plVar5 + 0xc) = 1;
  *(undefined8 *)((long)plVar5 + 100) = 0x40c0000041900000;
  ppuStack_48 = &PTR_DAT_110bd3b40;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a40d058; end: 10a40d297;  */

void FUN_10a40d058(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x90;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[8] = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  *(undefined2 *)((long)puVar1 + 0x3c) = 0x100;
  *puVar1 = &PTR_FUN_110bd37e8;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0xf] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 100) = 0;
  puVar1[3] = &PTR_DAT_110bd3890;
  return;
}



/* Entry: 10a40d298; end: 10a40d307;  */

void FUN_10a40d298(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  *(undefined2 *)((long)puVar1 + 0x3c) = 0x106;
  puVar1[8] = 0;
  *puVar1 = &PTR_FUN_110bd38d8;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[10] = param_1;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[3] = &PTR_DAT_110bd3980;
  return;
}



/* Entry: 10a40d308; end: 10a40d317;  */

void FUN_10a40d308(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd3f60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a40d318; end: 10a40d337;  */

void FUN_10a40d318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd3f60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a40d338; end: 10a40d34f;  */

long FUN_10a40d338(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + 0x28);
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
  return param_1 + 0x20;
}



/* Entry: 10a40d350; end: 10a40d44b;  */

undefined1  [16] FUN_10a40d350(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
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
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd3df0;
  puVar1 = &UNK_10f656142;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
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
    ppuStack_40 = &PTR_DAT_110bd3df0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110bd3f18;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a40d44c; end: 10a40d4a3;  */

ulong FUN_10a40d44c(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a40d4a4,FUN_10a40d5ac);
  }
  return param_1;
}



/* Entry: 10a40d4a4; end: 10a40d5ab;  */

void FUN_10a40d4a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      fVar15 = *(float *)(param_2 + 9);
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)fVar15;
      plVar4 = plVar3 + 0x4b;
      lVar6 = plVar3[0x59];
      uVar7 = lVar6 - 1;
      plVar3[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar4[lVar6 + 2];
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar6;
              lStack_80 = lVar6;
              lStack_78 = lVar6;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar7;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a40d598);
  (*pcVar1)();
}



/* Entry: 10a40d5ac; end: 10a40d6ff;  */

void FUN_10a40d5ac(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  float fVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
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
  plVar5 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    FUN_10a053854(param_2,plVar5);
    if ((param_2 == (long *)0x0) || (___dynamic_cast(), param_2 == (long *)0x0)) {
      puVar6 = &UNK_10f685496;
    }
    else {
      FUN_10a05ed04(param_5);
      if (*param_4 == 3) {
        fVar1 = (float)*(double *)(param_4 + 2);
        if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
          fVar1 = 0.0;
        }
        *(float *)(param_2 + 9) = fVar1;
        *(float *)(param_2 + 6) = fVar1;
        *(float *)((long)param_2 + 0x34) = fVar1;
        *(float *)(param_2 + 7) = fVar1;
        lVar8 = param_2[8];
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x3a0) = 0xffffffffffffffff;
          *(undefined8 *)(lVar8 + 0x3a8) = 0;
        }
        *param_1 = 0;
        plVar5 = plVar4 + 0x4b;
        lVar8 = plVar4[0x59];
        uVar7 = lVar8 - 1;
        plVar4[0x59] = uVar7;
        if (uVar7 < 8) {
          uVar7 = plVar5[lVar8 + 2];
          if (plVar4[0x5a] == uVar7) {
            return;
          }
        }
        else {
          uVar7 = *(ulong *)(plVar4[0x57] + -8);
          plVar4[0x57] = plVar4[0x57] + -8;
          if (plVar4[0x5a] == uVar7) {
            return;
          }
        }
        lVar8 = *plVar5;
        lVar12 = plVar4[0x4c];
        lVar10 = lVar12 - lVar8;
        uVar14 = lVar10 >> 4;
        if (uVar14 < uVar7) {
          uVar15 = uVar7 - uVar14;
          lVar13 = plVar4[0x4d];
          if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
            if (uVar7 >> 0x3c == 0) {
              uVar9 = lVar13 - lVar8 >> 3;
              if (uVar9 <= uVar7) {
                uVar9 = uVar7;
              }
              if (0x7fffffffffffffef < (ulong)(lVar13 - lVar8)) {
                uVar9 = 0xfffffffffffffff;
              }
              plStack_68 = plVar5;
              if (uVar9 >> 0x3c == 0) {
                lVar3 = uVar9 << 4;
                __Znwm();
                lVar12 = lVar3 + lVar10;
                _bzero(lVar12,uVar15 * 0x10);
                lVar11 = lVar12 + uVar14 * -0x10;
                _memcpy(lVar11,lVar8,lVar10);
                *plVar5 = lVar11;
                plVar4[0x4c] = lVar12 + uVar15 * 0x10;
                plVar4[0x4d] = lVar3 + uVar9 * 0x10;
                lStack_88 = lVar8;
                lStack_80 = lVar8;
                lStack_78 = lVar8;
                lStack_70 = lVar13;
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
          _bzero(lVar12,uVar15 * 0x10);
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
        }
        else if (uVar7 < uVar14) {
          lVar8 = lVar8 + uVar7 * 0x10;
          while (lVar12 != lVar8) {
            lVar12 = lVar12 + -0x10;
            func_0x00010988c204(lVar12);
          }
          plVar4[0x4c] = lVar8;
        }
code_r0x00010988c138:
        plVar4[0x5a] = uVar7;
        return;
      }
      puVar6 = &UNK_10f68f550;
    }
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a40d6ec);
  (*pcVar2)();
}



/* Entry: 10a40d700; end: 10a40d7bb;  */

void FUN_10a40d700(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f65657a,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a40d7bc);
  (*pcVar4)();
}



/* Entry: 10a40d7bc; end: 10a40d887;  */

undefined1  [16] FUN_10a40d7bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f65839d;
  return auVar1;
}



/* Entry: 10a40d888; end: 10a40db27;  */

void FUN_10a40d888(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65839d,0x13);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd7378;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
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
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd7378;
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
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40db08;
    FUN_10a054dac(param_1,&UNK_10f656651,FUN_10a439504,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40db08;
    FUN_10a054dac(param_1,&UNK_10f656669,FUN_10a43970c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40db08;
    FUN_10a054dac(param_1,&UNK_10f656681,FUN_10a4399a0,2,*(undefined8 *)(param_1 + 0x40));
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65839d,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a40db08:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a40db0c);
  (*pcVar6)();
}



/* Entry: 10a40db28; end: 10a40de93;  */

void FUN_10a40db28(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long *unaff_x21;
  ulong unaff_x22;
  code *unaff_x23;
  undefined **unaff_x24;
  code **unaff_x26;
  long *plVar9;
  long *plVar10;
  long lStack_210;
  long *plStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code **ppcStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined7 uStack_168;
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  code *pcStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  code *pcStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  lVar8 = param_1 + 0x1f8;
  func_0x00010a43907c(*(undefined8 *)(param_1 + 0x1f8));
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(long *)(param_1 + 0x1f0) = lVar8;
  ppuVar7 = &PTR_DAT_110bd4300;
  (**(code **)(*param_2 + 0x210))(param_2);
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((uint)plVar9 != 0) {
    unaff_x22 = 0;
    unaff_x26 = &pcStack_148;
    unaff_x23 = FUN_10a439f20;
    unaff_x24 = &PTR_FUN_110bd9488;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,unaff_x22);
      (**(code **)(*param_2 + 0xa0))(&uStack_178,param_2,&PTR_DAT_110bd4320);
      lStack_198 = param_1;
      if (cStack_161 < '\0') {
        func_0x000107c3192c(&uStack_190,uStack_178,uStack_170);
      }
      else {
        uStack_188 = uStack_170;
        uStack_190 = uStack_178;
        lStack_180 = CONCAT17(cStack_161,uStack_168);
      }
      lStack_e0 = lStack_180;
      uStack_e8 = uStack_188;
      uStack_f0 = uStack_190;
      lVar8 = lStack_198;
      pcStack_148 = FUN_10a439f20;
      ppuStack_140 = &PTR_FUN_110bd9488;
      uStack_190 = 0;
      uStack_188 = 0;
      lStack_180 = 0;
      pcStack_108 = FUN_10a439f20;
      ppuStack_100 = &PTR_FUN_110bd9488;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_120 = 0;
      uStack_b8 = CONCAT17(5,(undefined7)uStack_b8);
      uStack_c8 = CONCAT26(uStack_c8._6_2_,0x726579616c);
      pcStack_b0 = FUN_10a439ce0;
      ppuStack_a8 = &PTR_FUN_110bd9470;
      puVar5 = (undefined8 *)0x58;
      lStack_138 = lStack_198;
      lStack_f8 = lStack_198;
      __Znwm();
      *puVar5 = FUN_10a439f20;
      puVar5[1] = &PTR_FUN_110bd9488;
      puVar5[2] = lVar8;
      puVar5[4] = uStack_e8;
      puVar5[3] = uStack_f0;
      puVar5[5] = lStack_e0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      lStack_e0 = 0;
      puVar5[9] = uStack_c0;
      puVar5[8] = uStack_c8;
      puVar5[10] = uStack_b8;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puStack_a0 = puVar5;
      func_0x000107c2b054(auStack_160,&UNK_10f656650);
      ppuVar7 = &PTR_DAT_110bd8f28;
      (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bd8f28,&pcStack_b0,0,auStack_160);
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
      }
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      if (uStack_b8 < 0) {
        __ZdlPv(uStack_c8);
      }
      (*(code *)*ppuStack_100)(&ppuStack_100);
      (*(code *)*ppuStack_140)(&ppuStack_140);
      if (lStack_180 < 0) {
        __ZdlPv(uStack_190);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      if (cStack_161 < '\0') {
        __ZdlPv(uStack_178);
      }
      uVar1 = (int)unaff_x22 + 1;
      unaff_x22 = (ulong)uVar1;
      unaff_x21 = plVar9;
    } while ((uint)plVar9 != uVar1);
  }
  (**(code **)(*param_2 + 0x220))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (cStack_161 < '\0') {
      __ZdlPv(uStack_178);
    }
    plVar6 = param_2;
    __Unwind_Resume();
    pcStack_1a8 = FUN_10a40de94;
    ppcStack_1f0 = unaff_x26;
    lStack_1e8 = param_1;
    ppuStack_1e0 = unaff_x24;
    pcStack_1d8 = unaff_x23;
    uStack_1d0 = unaff_x22;
    plStack_1c8 = unaff_x21;
    lStack_1c0 = lVar8;
    plStack_1b8 = param_2;
    puStack_1b0 = &stack0xfffffffffffffff0;
    func_0x00010a3c7928();
    (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110bd4300);
    plVar9 = (long *)plVar6[0x3e];
    while (plVar9 != plVar6 + 0x3f) {
      if (plVar9[7] != 0) {
        (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
        FUN_10a00d760(ppuVar7,&PTR_DAT_110bd4320,plVar9 + 4);
        plStack_208 = (long *)plVar9[8];
        lStack_210 = plVar9[7];
        puStack_200 = &UNK_10f6583cb;
        uStack_1f8 = 0x14;
        if (plVar9[8] != 0) {
          plVar2 = (long *)(plVar9[8] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        (**(code **)(*ppuVar7 + 0x108))(ppuVar7,&PTR_DAT_110bd8f28,&lStack_210,&puStack_200);
        plVar2 = plStack_208;
        if (plStack_208 != (long *)0x0) {
          plVar10 = plStack_208 + 1;
          do {
            lVar8 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_208 + 0x10))(plStack_208);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      }
      plVar2 = (long *)plVar9[1];
      plVar10 = plVar9;
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar10[2];
          bVar4 = (long *)*plVar9 != plVar10;
          plVar10 = plVar9;
        } while (bVar4);
      }
      else {
        do {
          plVar9 = plVar2;
          plVar2 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010a40e010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    return;
  }
  return;
}



/* Entry: 10a40de94; end: 10a40e027;  */

void FUN_10a40de94(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lStack_70;
  long *plStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bd4300);
  plVar5 = *(long **)(param_1 + 0x1f0);
  while (plVar5 != (long *)(param_1 + 0x1f8)) {
    if (plVar5[7] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110bd4320,plVar5 + 4);
      plStack_68 = (long *)plVar5[8];
      lStack_70 = plVar5[7];
      puStack_60 = &UNK_10f6583cb;
      uStack_58 = 0x14;
      if (plVar5[8] != 0) {
        plVar1 = (long *)(plVar5[8] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bd8f28,&lStack_70,&puStack_60);
      plVar1 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar6 = plStack_68 + 1;
        do {
          lVar4 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    plVar1 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar3 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010a40e010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a40e028; end: 10a40e0a3;  */

undefined8 * FUN_10a40e028(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a40e0a4; end: 10a40e13b;  */

void FUN_10a40e0a4(undefined8 *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 uStack_39;
  long *plStack_38;
  
  lVar5 = param_2 + 0x1f0;
  plVar4 = param_3;
  FUN_10a43a008();
  if (param_2 + 0x1f8 != lVar5) {
    param_2 = param_2 + 0x1f0;
    plStack_38 = param_3;
    FUN_10a439a9c(param_2,param_3,&UNK_10dd5b8f9,&plStack_38,&uStack_39);
    lVar5 = *(long *)(param_2 + 0x40);
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    param_1[1] = *(undefined8 *)(param_2 + 0x40);
    *param_1 = uVar6;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    return;
  }
  puVar3 = (undefined8 *)&UNK_10f65669c;
  FUN_10a00946c();
  pcStack_48 = FUN_10a40e13c;
  plStack_60 = param_3;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar4 + 0x50))(&uStack_70,plVar4);
  puVar3[1] = plStack_68;
  *puVar3 = uStack_70;
  if (plStack_68 != (long *)0x0) {
    plVar4 = plStack_68 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  return;
}



/* Entry: 10a40e13c; end: 10a40e233;  */

void FUN_10a40e13c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  }
  return;
}



/* Entry: 10a40e234; end: 10a40e877;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a40e234(undefined8 *param_1,undefined **param_2,undefined ********param_3,
                  undefined ********param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined ********ppppppppuVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined *******pppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined ********ppppppppuVar13;
  undefined ********ppppppppuVar14;
  undefined *******pppppppuVar15;
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined ********ppppppppuStack_1a0;
  undefined ********ppppppppuStack_198;
  undefined ********ppppppppuStack_190;
  undefined ********ppppppppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 *puStack_170;
  undefined ********ppppppppuStack_168;
  undefined ********ppppppppuStack_160;
  undefined ********ppppppppuStack_158;
  undefined ********ppppppppuStack_150;
  undefined ********ppppppppuStack_148;
  undefined ********ppppppppuStack_140;
  undefined ********ppppppppuStack_138;
  undefined ********ppppppppuStack_130;
  undefined *******pppppppuStack_128;
  undefined ********ppppppppuStack_120;
  undefined ********ppppppppuStack_f0;
  undefined8 *apuStack_e8 [7];
  undefined ********ppppppppuStack_b0;
  undefined ********ppppppppuStack_a8;
  undefined ********ppppppppuStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == (undefined ********)0x0) {
    ppppppppuVar10 = (undefined ********)param_2;
    ppppppppuVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    ppppppppuStack_a8 = (undefined ********)param_2[9];
    ppppppppuStack_b0 = (undefined ********)param_2[8];
    ppppppppuVar6 = param_4 + 0x11;
    func_0x00010a35bf90(ppppppppuVar6,&ppppppppuStack_b0);
    ppppppppuVar8 = (undefined ********)((ulong)&ppppppppuStack_b0 | 8);
    ppppppppuVar10 = (undefined ********)&ppppppppuStack_b0;
    if (ppppppppuVar6 != (undefined ********)0x0) {
      ppppppppuVar8 = ppppppppuVar6 + 5;
      ppppppppuVar10 = ppppppppuVar6 + 4;
    }
    ppppppppuVar8 = (undefined ********)*ppppppppuVar8;
    ppppppppuVar10 = (undefined ********)*ppppppppuVar10;
  }
  FUN_10a0d61d8(&ppppppppuStack_160,param_2[0x2e],ppppppppuVar10,ppppppppuVar8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppppppppuStack_160 + 0x2a,param_2 + 0x2a);
  uVar1 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(ppppppppuStack_160 + 0x30) & 0xfffc;
  *(ushort *)(ppppppppuStack_160 + 0x30) =
       uVar2 | *(ushort *)(ppppppppuStack_160 + 0x30) & 1 | uVar1;
  *(ushort *)(ppppppppuStack_160 + 0x30) = uVar2 | uVar1 | *(ushort *)(param_2 + 0x30) & 1;
  ppppppppuStack_b0 = ppppppppuStack_160;
  ppppppppuStack_a8 = ppppppppuStack_158;
  if (ppppppppuStack_158 != (undefined ********)0x0) {
    ppppppppuVar8 = ppppppppuStack_158 + 1;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar8,0x10);
      if (bVar5) {
        *ppppppppuVar8 = (undefined *******)((long)*ppppppppuVar8 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppppppppuVar8 = (undefined ********)&ppppppppuStack_b0;
  FUN_10a3c7ce8(param_3,ppppppppuVar8);
  ppppppppuVar10 = ppppppppuStack_a8;
  puStack_170 = param_1;
  if (ppppppppuStack_a8 != (undefined ********)0x0) {
    ppppppppuVar6 = ppppppppuStack_a8 + 1;
    do {
      pppppppuVar11 = *ppppppppuVar6;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
      if (bVar5) {
        *ppppppppuVar6 = (undefined *******)((long)pppppppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppppuVar11 == (undefined *******)0x0) {
      (*(code *)(*ppppppppuStack_a8)[2])(ppppppppuStack_a8);
      param_3 = ppppppppuVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if ((param_4 == (undefined ********)0x0) || (*(char *)(param_4 + 0x17) != '\x01')) {
    if (ppppppppuStack_160 != (undefined ********)param_2) {
      param_4 = ppppppppuStack_160 + 0x3e;
      ppppppppuVar10 = (undefined ********)param_2[0x3e];
      ppppppppuVar6 = (undefined ********)(param_2 + 0x3f);
      if (ppppppppuStack_160[0x40] != (undefined *******)0x0) {
        param_2 = (undefined **)ppppppppuStack_160[0x3e];
        ppppppppuStack_160[0x3e] = (undefined *******)(ppppppppuStack_160 + 0x3f);
        ppppppppuStack_160[0x3f][2] = (undefined ******)0x0;
        ppppppppuStack_160[0x3f] = (undefined *******)0x0;
        ppppppppuStack_160[0x40] = (undefined *******)0x0;
        ppppppppuVar14 = (undefined ********)param_2[1];
        if (ppppppppuVar14 != (undefined ********)0x0) {
          param_2 = (undefined **)ppppppppuVar14;
        }
        ppppppppuStack_b0 = param_4;
        ppppppppuStack_a8 = (undefined ********)param_2;
        ppppppppuStack_a0 = (undefined ********)param_2;
        if ((undefined ********)param_2 != (undefined ********)0x0) {
          ppppppppuVar14 = (undefined ********)param_2;
          FUN_10a43a1f0();
          ppppppppuStack_a8 = ppppppppuVar14;
          do {
            if (ppppppppuVar10 == ppppppppuVar6) break;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (param_2 + 4,ppppppppuVar10 + 4);
            FUN_10a40e028(param_2 + 7,ppppppppuVar10 + 7);
            ppppppppuVar14 = ppppppppuStack_a0;
            ppppppppuVar9 = param_4;
            FUN_10a43a17c(param_4,&ppppppppuStack_f0,ppppppppuStack_a0 + 4);
            ppppppppuVar8 = ppppppppuStack_f0;
            FUN_10a439c44(param_4,ppppppppuStack_f0,ppppppppuVar9,ppppppppuVar14);
            param_2 = (undefined **)ppppppppuStack_a8;
            ppppppppuStack_a0 = ppppppppuStack_a8;
            if (ppppppppuStack_a8 != (undefined ********)0x0) {
              FUN_10a43a1f0();
            }
            ppppppppuVar14 = (undefined ********)ppppppppuVar10[1];
            ppppppppuVar9 = ppppppppuVar10;
            if ((undefined ********)ppppppppuVar10[1] == (undefined ********)0x0) {
              do {
                ppppppppuVar10 = (undefined ********)ppppppppuVar9[2];
                bVar5 = (undefined ********)*ppppppppuVar10 != ppppppppuVar9;
                ppppppppuVar9 = ppppppppuVar10;
              } while (bVar5);
            }
            else {
              do {
                ppppppppuVar10 = ppppppppuVar14;
                ppppppppuVar14 = (undefined ********)*ppppppppuVar10;
              } while ((undefined ********)*ppppppppuVar10 != (undefined ********)0x0);
            }
          } while ((undefined ********)param_2 != (undefined ********)0x0);
        }
        param_3 = (undefined ********)&ppppppppuStack_b0;
        FUN_10a43a244();
      }
      while (ppppppppuVar10 != ppppppppuVar6) {
        param_2 = (undefined **)0x48;
        __Znwm();
        ppppppppuStack_a0 = (undefined ********)0x0;
        ppppppppuStack_b0 = (undefined ********)param_2;
        ppppppppuStack_a8 = param_4;
        if (*(char *)((long)ppppppppuVar10 + 0x37) < '\0') {
          func_0x000107c3192c(param_2 + 4,ppppppppuVar10[4],ppppppppuVar10[5]);
        }
        else {
          pppppppuVar15 = ppppppppuVar10[5];
          pppppppuVar11 = ppppppppuVar10[4];
          param_2[6] = (undefined *)ppppppppuVar10[6];
          param_2[5] = (undefined *)pppppppuVar15;
          param_2[4] = (undefined *)pppppppuVar11;
        }
        pppppppuVar11 = ppppppppuVar10[8];
        pppppppuVar15 = ppppppppuVar10[7];
        param_2[8] = (undefined *)ppppppppuVar10[8];
        param_2[7] = (undefined *)pppppppuVar15;
        if (pppppppuVar11 != (undefined *******)0x0) {
          pppppppuVar11 = pppppppuVar11 + 1;
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
            if (bVar5) {
              *pppppppuVar11 = (undefined ******)((long)*pppppppuVar11 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppppppppuVar14 = param_4;
        FUN_10a43a17c(param_4,&ppppppppuStack_f0,param_2 + 4);
        param_3 = param_4;
        ppppppppuVar8 = ppppppppuStack_f0;
        FUN_10a439c44(param_4,ppppppppuStack_f0,ppppppppuVar14,param_2);
        ppppppppuVar14 = (undefined ********)ppppppppuVar10[1];
        ppppppppuVar9 = ppppppppuVar10;
        if ((undefined ********)ppppppppuVar10[1] == (undefined ********)0x0) {
          do {
            ppppppppuVar10 = (undefined ********)ppppppppuVar9[2];
            bVar5 = (undefined ********)*ppppppppuVar10 != ppppppppuVar9;
            ppppppppuVar9 = ppppppppuVar10;
          } while (bVar5);
        }
        else {
          do {
            ppppppppuVar10 = ppppppppuVar14;
            ppppppppuVar14 = (undefined ********)*ppppppppuVar10;
          } while ((undefined ********)*ppppppppuVar10 != (undefined ********)0x0);
        }
      }
    }
  }
  else {
    ppppppppuVar14 = (undefined ********)param_2[0x3e];
    ppppppppuVar6 = (undefined ********)(param_2 + 0x3f);
    if (ppppppppuVar14 != ppppppppuVar6) {
      ppppppppuStack_168 = (undefined ********)&ppppppppuStack_138;
      param_2 = &PTR_FUN_110bd94a0;
      do {
        ppppppppuStack_b0 = ppppppppuVar14 + 4;
        ppppppppuVar10 = (undefined ********)ppppppppuVar14[7];
        ppppppppuVar8 = ppppppppuStack_160 + 0x3e;
        FUN_10a439a9c(ppppppppuVar8,ppppppppuStack_b0,&UNK_10dd5b8f9,&ppppppppuStack_b0,
                      &ppppppppuStack_f0);
        ppppppppuStack_130 = (undefined ********)FUN_10a43a084;
        pppppppuStack_128 = (undefined *******)&PTR_FUN_110bd94a0;
        ppppppppuStack_120 = ppppppppuVar8 + 7;
        if (ppppppppuVar10 == (undefined ********)0x0) {
          ppppppppuStack_140 = (undefined ********)0x0;
          ppppppppuVar8 = (undefined ********)&ppppppppuStack_140;
          FUN_10a2e9e64(&ppppppppuStack_130,ppppppppuVar8);
        }
        else {
          ppppppppuVar9 = (undefined ********)ppppppppuVar10[8];
          ppppppppuVar12 = (undefined ********)ppppppppuVar10[9];
          if (*(char *)(param_4 + 0x17) == '\x01') {
            ppppppppuStack_b0 = (undefined ********)FUN_10a43a084;
            ppppppppuStack_a8 = (undefined ********)&PTR_FUN_110bd94a0;
            ppppppppuStack_a0 = ppppppppuStack_120;
            FUN_10a069d9c(param_4,ppppppppuVar9,ppppppppuVar12,&ppppppppuStack_b0);
            pppppppuVar11 = *ppppppppuStack_a8;
            ppppppppuVar12 = (undefined ********)&ppppppppuStack_b0;
            ppppppppuVar8 = ppppppppuVar9;
          }
          else {
            ppppppppuVar7 = param_4 + 0x11;
            ppppppppuStack_140 = ppppppppuVar9;
            ppppppppuStack_138 = ppppppppuVar12;
            func_0x00010a35bf90(ppppppppuVar7,&ppppppppuStack_140);
            ppppppppuVar13 = ppppppppuStack_168;
            ppppppppuVar8 = (undefined ********)&ppppppppuStack_140;
            if (ppppppppuVar7 != (undefined ********)0x0) {
              ppppppppuVar13 = ppppppppuVar7 + 5;
              ppppppppuVar8 = ppppppppuVar7 + 4;
            }
            ppppppppuVar13 = (undefined ********)*ppppppppuVar13;
            ppppppppuVar8 = (undefined ********)*ppppppppuVar8;
            if (ppppppppuVar9 == ppppppppuVar8 && ppppppppuVar12 == ppppppppuVar13) {
              FUN_10a40e13c(&ppppppppuStack_150,ppppppppuVar10);
              ppppppppuStack_138 = ppppppppuStack_148;
              ppppppppuStack_140 = ppppppppuStack_150;
              ppppppppuStack_150 = (undefined ********)0x0;
              ppppppppuStack_148 = (undefined ********)0x0;
              ppppppppuVar8 = (undefined ********)&ppppppppuStack_130;
              (*(code *)ppppppppuStack_130)(&ppppppppuStack_140,ppppppppuVar8);
              ppppppppuVar10 = ppppppppuStack_138;
              if (ppppppppuStack_138 != (undefined ********)0x0) {
                ppppppppuVar9 = ppppppppuStack_138 + 1;
                do {
                  pppppppuVar11 = *ppppppppuVar9;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
                  if (bVar5) {
                    *ppppppppuVar9 = (undefined *******)((long)pppppppuVar11 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (pppppppuVar11 == (undefined *******)0x0) {
                  (*(code *)(*ppppppppuStack_138)[2])(ppppppppuStack_138);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar10);
                }
              }
              ppppppppuVar10 = ppppppppuStack_148;
              if (ppppppppuStack_148 != (undefined ********)0x0) {
                ppppppppuVar9 = ppppppppuStack_148 + 1;
                do {
                  pppppppuVar11 = *ppppppppuVar9;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar9,0x10);
                  if (bVar5) {
                    *ppppppppuVar9 = (undefined *******)((long)pppppppuVar11 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (pppppppuVar11 == (undefined *******)0x0) {
                  (*(code *)(*ppppppppuStack_148)[2])(ppppppppuStack_148);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar10);
                }
              }
              goto LAB_10a40e49c;
            }
            ppppppppuStack_f0 = ppppppppuStack_130;
            (*(code *)pppppppuStack_128[3])(apuStack_e8,&pppppppuStack_128);
            FUN_10a069d9c(param_4,ppppppppuVar8,ppppppppuVar13,&ppppppppuStack_f0);
            pppppppuVar11 = (undefined *******)*apuStack_e8[0];
            ppppppppuVar12 = (undefined ********)&ppppppppuStack_f0;
          }
          (*(code *)pppppppuVar11)(ppppppppuVar12 + 1);
        }
LAB_10a40e49c:
        param_3 = &pppppppuStack_128;
        (*(code *)*pppppppuStack_128)();
        ppppppppuVar9 = (undefined ********)ppppppppuVar14[1];
        ppppppppuVar12 = ppppppppuVar14;
        if ((undefined ********)ppppppppuVar14[1] == (undefined ********)0x0) {
          do {
            ppppppppuVar14 = (undefined ********)ppppppppuVar12[2];
            bVar5 = (undefined ********)*ppppppppuVar14 != ppppppppuVar12;
            ppppppppuVar12 = ppppppppuVar14;
          } while (bVar5);
        }
        else {
          do {
            ppppppppuVar14 = ppppppppuVar9;
            ppppppppuVar9 = (undefined ********)*ppppppppuVar14;
          } while ((undefined ********)*ppppppppuVar14 != (undefined ********)0x0);
        }
      } while (ppppppppuVar14 != ppppppppuVar6);
    }
  }
  puStack_170[1] = ppppppppuStack_158;
  *puStack_170 = ppppppppuStack_160;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_e8[0])(apuStack_e8);
  (*(code *)*pppppppuStack_128)(&pppppppuStack_128);
  FUN_10a0d650c(&ppppppppuStack_160);
  ppppppppuVar14 = param_3;
  __Unwind_Resume();
  pcStack_178 = FUN_10a40e878;
  ppppppppuVar6 = ppppppppuVar14 + 0x3e;
  ppppppppuStack_1a0 = ppppppppuVar10;
  ppppppppuStack_198 = (undefined ********)param_2;
  ppppppppuStack_190 = param_4;
  ppppppppuStack_188 = param_3;
  puStack_180 = &stack0xfffffffffffffff0;
  FUN_10a43a008();
  if (ppppppppuVar14 + 0x3f != ppppppppuVar6) {
    ppppppppuVar8 = ppppppppuVar6;
    ppppppppuVar10 = (undefined ********)ppppppppuVar6[1];
    if ((undefined ********)ppppppppuVar6[1] == (undefined ********)0x0) {
      do {
        ppppppppuVar9 = (undefined ********)ppppppppuVar8[2];
        bVar5 = (undefined ********)*ppppppppuVar9 != ppppppppuVar8;
        ppppppppuVar8 = ppppppppuVar9;
      } while (bVar5);
    }
    else {
      do {
        ppppppppuVar9 = ppppppppuVar10;
        ppppppppuVar10 = (undefined ********)*ppppppppuVar9;
      } while ((undefined ********)*ppppppppuVar9 != (undefined ********)0x0);
    }
    if ((undefined ********)ppppppppuVar14[0x3e] == ppppppppuVar6) {
      ppppppppuVar14[0x3e] = (undefined *******)ppppppppuVar9;
    }
    ppppppppuVar14[0x40] = (undefined *******)((long)ppppppppuVar14[0x40] + -1);
    FUN_10a04815c(ppppppppuVar14[0x3f],ppppppppuVar6);
    func_0x00010a4390bc(ppppppppuVar6 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(ppppppppuVar6);
    return;
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_1d0,&UNK_10f6566c8,ppppppppuVar8);
  FUN_10a012db0(auStack_1b8,auStack_1d0,&UNK_10f5ffe3e);
  FUN_10a0029c0(auStack_1b8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a40e954);
  (*pcVar4)();
}



/* Entry: 10a40e878; end: 10a40e987;  */

void FUN_10a40e878(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  plVar4 = (long *)(param_1 + 0x1f0);
  FUN_10a43a008();
  if ((long *)(param_1 + 0x1f8) == plVar4) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_60,&UNK_10f6566c8,param_2);
    FUN_10a012db0(auStack_48,auStack_60,&UNK_10f5ffe3e);
    FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a40e954);
    (*pcVar2)();
  }
  plVar6 = plVar4;
  plVar1 = (long *)plVar4[1];
  if ((long *)plVar4[1] == (long *)0x0) {
    do {
      plVar5 = (long *)plVar6[2];
      bVar3 = (long *)*plVar5 != plVar6;
      plVar6 = plVar5;
    } while (bVar3);
  }
  else {
    do {
      plVar5 = plVar1;
      plVar1 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if (*(long **)(param_1 + 0x1f0) == plVar4) {
    *(long **)(param_1 + 0x1f0) = plVar5;
  }
  *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0x200) + -1;
  FUN_10a04815c(*(undefined8 *)(param_1 + 0x1f8),plVar4);
  func_0x00010a4390bc(plVar4 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar4);
  return;
}



/* Entry: 10a40e988; end: 10a40ea53;  */

undefined1  [16] FUN_10a40e988(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f6583e0;
  return auVar1;
}



/* Entry: 10a40ea54; end: 10a40f08b;  */

void FUN_10a40ea54(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6583e0,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd9eb8;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
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
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd9eb8;
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
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,"start",FUN_10a43a290,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f6566d9,FUN_10a43a5ac,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10a43ac24,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10a43ad9c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,"resume",FUN_10a43ae54,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f6566eb,FUN_10a43af0c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f6566f5,FUN_10a43b044,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f656700,FUN_10a43b278,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f633067,FUN_10a43b438,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f65670b,FUN_10a43b4f0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f656715,FUN_10a43b710,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f656725,FUN_10a43b7c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x10,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f656732,FUN_10a43b8dc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a40f06c;
    FUN_10a054dac(param_1,&UNK_10f656749,FUN_10a43b9e4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f656755,FUN_10a43ba98,FUN_10a43bb50);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65675e,FUN_10a43bc78,FUN_10a43bd34);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6583e0,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a40f06c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a40f070);
  (*pcVar6)();
}



/* Entry: 10a40f08c; end: 10a40f183;  */

void FUN_10a40f08c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x71] = &PTR_FUN_110c383b8;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0x100;
  FUN_10a3c575c(param_1,&PTR_PTR_110bd4630,param_2,param_3);
  *param_1 = &PTR_FUN_110bd4358;
  param_1[2] = &PTR_DAT_110bd4478;
  param_1[7] = &PTR_FUN_110bd44d0;
  param_1[0xd] = &PTR_FUN_110bd44f0;
  param_1[0x71] = &PTR_FUN_110bd45f0;
  param_1[0x16] = &PTR_FUN_110bd4560;
  param_1[0x17] = &PTR_DAT_110bd4590;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0x3f80000000000000;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = param_1 + 0x41;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
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
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x59] = FUN_10a434ff8;
  param_1[0x5a] = &PTR_DAT_110ae9180;
  param_1[0x61] = 0x10a435008;
  param_1[0x62] = &PTR_DAT_110ae9180;
  param_1[0x69] = 0x10a435018;
  param_1[0x6a] = &PTR_DAT_110ae9180;
  return;
}



/* Entry: 10a40f184; end: 10a40f4fb;  */

void FUN_10a40f184(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long lStack_68;
  long *plStack_60;
  undefined1 uStack_51;
  
  if ((*(byte *)(param_1 + 0x2a8) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2a8) = 1;
    FUN_10a40f4fc(param_1 + 0x218);
    lVar10 = *(long *)(param_1 + 0x238);
    lVar12 = *(long *)(param_1 + 0x230);
    while (lVar10 != lVar12) {
      lVar10 = lVar10 + -0x28;
      FUN_10a435028(lVar10);
    }
    *(long *)(param_1 + 0x238) = lVar12;
    lVar10 = *(long *)(param_1 + 0x250);
    lVar12 = *(long *)(param_1 + 0x248);
    while (lVar10 != lVar12) {
      lVar10 = lVar10 + -0x28;
      func_0x00010a435068(lVar10);
    }
    *(long *)(param_1 + 0x250) = lVar12;
    func_0x00010a40f544(param_1 + 0x260);
    puVar1 = (undefined8 *)(param_1 + 0x208);
    FUN_10a43926c(*(undefined8 *)(param_1 + 0x208));
    *(undefined8 **)(param_1 + 0x200) = puVar1;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *puVar1 = 0;
    lVar10 = *(long *)(param_1 + 0x168);
    for (lVar12 = *(long *)(lVar10 + 0x198); lVar12 != lVar10 + 400; lVar12 = *(long *)(lVar12 + 8))
    {
      FUN_10a40f58c(param_1,*(undefined8 *)(lVar12 + 0x10));
    }
    if ((*(long *)(param_1 + 0x278) == *(long *)(param_1 + 0x280)) &&
       (puVar13 = *(undefined8 **)(param_1 + 0x200), puVar13 != puVar1)) {
      do {
        FUN_10a41074c(auStack_78,param_1);
        FUN_10a43bf60(&lStack_68,&uStack_51,auStack_78);
        plVar6 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          plVar2 = plStack_70 + 1;
          do {
            lVar10 = *plVar2;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        lVar10 = lStack_68;
        if (*(char *)((long)puVar13 + 0x37) < '\0') {
          func_0x000107c3192c(&uStack_90,puVar13[4],puVar13[5]);
        }
        else {
          uStack_88 = puVar13[5];
          uStack_90 = puVar13[4];
          uStack_80 = puVar13[6];
        }
        if (*(char *)(lVar10 + 0x67) < '\0') {
          __ZdlPv(*(undefined8 *)(lVar10 + 0x50));
        }
        lVar12 = lStack_68;
        *(ulong *)(lVar10 + 0x60) = uStack_80;
        *(undefined8 *)(lVar10 + 0x58) = uStack_88;
        *(ulong *)(lVar10 + 0x50) = uStack_90;
        uStack_80 = uStack_80 & 0xffffffffffffff;
        uStack_90 = uStack_90 & 0xffffffffffffff00;
        if (*(char *)((long)puVar13 + 0x37) < '\0') {
          func_0x000107c3192c(&uStack_b0,puVar13[4],puVar13[5]);
        }
        else {
          uStack_a8 = puVar13[5];
          uStack_b0 = puVar13[4];
          uStack_a0 = puVar13[6];
        }
        if (*(char *)(lVar12 + 0x7f) < '\0') {
          __ZdlPv(*(undefined8 *)(lVar12 + 0x68));
        }
        *(undefined8 *)(lVar12 + 0x70) = uStack_a8;
        *(ulong *)(lVar12 + 0x68) = uStack_b0;
        *(ulong *)(lVar12 + 0x78) = uStack_a0;
        uStack_a0 = uStack_a0 & 0xffffffffffffff;
        uStack_b0 = uStack_b0 & 0xffffffffffffff00;
        *(undefined4 *)(lStack_68 + 0x88) = 0;
        iVar3 = *(int *)(lStack_68 + 0xac);
        if (iVar3 == 0) {
          fVar16 = *(float *)(lStack_68 + 0x8c);
          fVar15 = 0.0;
        }
        else {
          fVar16 = 1.0 / *(float *)(lStack_68 + 0x90);
          fVar15 = fVar16 * 0.0;
          fVar16 = fVar16 * *(float *)(lStack_68 + 0x8c);
        }
        if (0.0 < fVar16 - fVar15) {
          *(float *)(*(long *)(lStack_68 + 200) + 0x34) = fVar16 - fVar15;
        }
        fVar15 = *(float *)(puVar13[7] + 0x60);
        *(float *)(lStack_68 + 0x8c) = fVar15;
        if (iVar3 == 0) {
          fVar16 = 0.0;
        }
        else {
          fVar17 = 1.0 / *(float *)(lStack_68 + 0x90);
          fVar16 = fVar17 * 0.0;
          fVar15 = fVar15 * fVar17;
        }
        if (0.0 < fVar15 - fVar16) {
          *(float *)(*(long *)(lStack_68 + 200) + 0x34) = fVar15 - fVar16;
        }
        FUN_10aa7a570(0);
        lVar10 = puVar13[7];
        iVar3 = *(int *)(lVar10 + 100);
        puVar11 = &UNK_10f68c644;
        if (iVar3 - 3U < 0xfffffffe) {
LAB_10a40f4c8:
          FUN_10a00946c(puVar11);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a40f4d4);
          (*pcVar8)();
        }
        *(int *)(lStack_68 + 0xa4) = iVar3;
        uVar4 = *(uint *)(lVar10 + 0x68);
        puVar11 = &UNK_10f68c66b;
        if (1 < uVar4) goto LAB_10a40f4c8;
        *(uint *)(lStack_68 + 0xa8) = uVar4;
        FUN_10a4107dc(param_1 + 0x278,&lStack_68);
        plVar6 = plStack_60;
        if (plStack_60 != (long *)0x0) {
          plVar2 = plStack_60 + 1;
          do {
            lVar10 = *plVar2;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        puVar7 = (undefined8 *)puVar13[1];
        puVar14 = puVar13;
        if ((undefined8 *)puVar13[1] == (undefined8 *)0x0) {
          do {
            puVar13 = (undefined8 *)puVar14[2];
            bVar9 = (undefined8 *)*puVar13 != puVar14;
            puVar14 = puVar13;
          } while (bVar9);
        }
        else {
          do {
            puVar13 = puVar7;
            puVar7 = (undefined8 *)*puVar13;
          } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
        }
      } while (puVar13 != puVar1);
    }
  }
  return;
}



/* Entry: 10a40f4fc; end: 10a40f58b;  */

void FUN_10a40f4fc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a40f58c; end: 10a41074b;  */

/* WARNING: Removing unreachable block (ram,0x00010a40fd2c) */

void FUN_10a40f58c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  long **pplVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  float fVar33;
  long *plStack_128;
  long *plStack_108;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  
  if (0x6b < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
    for (lVar27 = *(long *)(param_2 + 0x158); lVar27 != param_2 + 0x150;
        lVar27 = *(long *)(lVar27 + 8)) {
      if (*(long *)(lVar27 + 0x10) != 0) {
        plVar9 = (long *)(*(long *)(lVar27 + 0x10) + 0xb0);
        (**(code **)(*plVar9 + 0x18))(plVar9,0xa0e2ec348992e6d0);
        if (plVar9 != (long *)0x0) {
          return;
        }
      }
    }
  }
  FUN_10a4108f0(&puStack_a8,param_2);
  puVar24 = puStack_a8;
  if (puStack_a8 != puStack_a0) {
    lVar27 = param_2 + 0x150;
    lVar28 = *(long *)(param_2 + 0x158);
    if (lVar28 == lVar27) {
      plStack_108 = (long *)0x0;
    }
    else {
      do {
        if (*(long *)(lVar28 + 0x10) != 0) {
          plStack_108 = (long *)(*(long *)(lVar28 + 0x10) + 0xb0);
          (**(code **)(*plStack_108 + 0x18))(plStack_108,0xcc065e1a2996816);
          if (plStack_108 != (long *)0x0) goto LAB_10a40f694;
        }
        lVar28 = *(long *)(lVar28 + 8);
      } while (lVar28 != lVar27);
      plStack_108 = (long *)0x0;
LAB_10a40f694:
      lVar28 = *(long *)(param_2 + 0x158);
    }
    if (lVar28 == lVar27) {
      plStack_128 = (long *)0x0;
    }
    else {
      do {
        if (*(long *)(lVar28 + 0x10) != 0) {
          plStack_128 = (long *)(*(long *)(lVar28 + 0x10) + 0xb0);
          (**(code **)(*plStack_128 + 0x18))(plStack_128,0xd07927f5ab7790e9);
          if (plStack_128 != (long *)0x0) goto LAB_10a40f700;
        }
        lVar28 = *(long *)(lVar28 + 8);
      } while (lVar28 != lVar27);
      plStack_128 = (long *)0x0;
    }
LAB_10a40f700:
    FUN_10a0d78b8(&plStack_c0,param_2);
    plVar9 = (long *)(param_1 + 0x200);
    puVar1 = (undefined8 *)(param_1 + 0x208);
    plVar2 = (long *)(param_1 + 0x248);
    do {
      plVar30 = (long *)*puVar24;
      (**(code **)(*plVar30 + 0x50))(&plStack_90,plVar30);
      plVar6 = plStack_88;
      plVar4 = plStack_90;
      if (plStack_88 != (long *)0x0) {
        plVar29 = plStack_88 + 1;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar8) {
            *plVar29 = *plVar29 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (plStack_88 != (long *)0x0) {
          plVar29 = plStack_88 + 1;
          do {
            lVar27 = *plVar29;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar8) {
              *plVar29 = lVar27 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar27 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar29 = plVar6 + 2;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar8) {
            *plVar29 = *plVar29 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar22 = *(undefined8 **)(param_1 + 0x220);
      if (puVar22 < *(undefined8 **)(param_1 + 0x228)) {
        *puVar22 = plVar4;
        puVar22[1] = plVar6;
        puVar22 = puVar22 + 2;
      }
      else {
        lVar27 = *(long *)(param_1 + 0x218);
        lVar28 = (long)puVar22 - lVar27;
        uVar18 = (lVar28 >> 4) + 1;
        if (uVar18 >> 0x3c != 0) {
          func_0x00010a43513c();
LAB_10a410574:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a410578);
          (*pcVar7)();
        }
        uVar20 = (long)*(undefined8 **)(param_1 + 0x228) - lVar27;
        uVar23 = (long)uVar20 >> 3;
        if (uVar23 <= uVar18) {
          uVar23 = uVar18;
        }
        if (0x7fffffffffffffef < uVar20) {
          uVar23 = 0xfffffffffffffff;
        }
        if (uVar23 >> 0x3c != 0) {
          func_0x000109ffded8();
          goto LAB_10a410574;
        }
        lVar12 = uVar23 << 4;
        __Znwm();
        puVar26 = (undefined8 *)(lVar12 + lVar28);
        *puVar26 = plVar4;
        puVar26[1] = plVar6;
        puVar22 = puVar26 + 2;
        _memcpy(puVar26 + (lVar28 >> 4) * -2,lVar27,lVar28);
        *(undefined8 **)(param_1 + 0x218) = puVar26 + (lVar28 >> 4) * -2;
        *(undefined8 **)(param_1 + 0x220) = puVar22;
        *(ulong *)(param_1 + 0x228) = lVar12 + uVar23 * 0x10;
        if (lVar27 != 0) {
          __ZdlPv(lVar27);
        }
      }
      *(undefined8 **)(param_1 + 0x220) = puVar22;
      plVar29 = (long *)plVar30[0x3e];
      if (plVar29 != plVar30 + 0x3f) {
        plVar3 = plVar6 + 2;
        do {
          if (plVar29[7] != 0) {
            plStack_d0 = (long *)0x0;
            plStack_c8 = (long *)0x0;
            puVar26 = (undefined8 *)*puVar1;
            puVar22 = puVar1;
            if (puVar26 == (undefined8 *)0x0) {
LAB_10a40f900:
              plVar16 = (long *)0x88;
              __Znwm();
              plVar25 = plStack_c8;
              plVar16[1] = 0;
              plVar16[2] = 0;
              *plVar16 = (long)&PTR_FUN_110bd9520;
              plVar16[7] = 0;
              plVar16[6] = 0;
              plVar16[9] = 0;
              plVar16[8] = 0;
              plVar16[0xd] = 0;
              plVar16[0xc] = 0;
              plVar16[0xf] = 0;
              plVar16[0xe] = 0;
              plVar16[0x10] = 0;
              plVar17 = plVar16 + 10;
              plVar16[0xb] = 0;
              *plVar17 = 0;
              plVar16[5] = 0;
              plVar16[4] = 0;
              plStack_d0 = plVar16 + 3;
              *plStack_d0 = (long)(plVar16 + 4);
              plVar16[7] = 0;
              plVar16[6] = (long)(plVar16 + 7);
              *plVar17 = 0;
              plVar16[8] = 0;
              plVar16[9] = (long)plVar17;
              plVar16[0xe] = 0;
              plVar16[0xd] = 0;
              plVar16[0xb] = 0;
              plVar16[0xc] = (long)(plVar16 + 0xd);
              if (plStack_c8 != (long *)0x0) {
                plVar17 = plStack_c8 + 1;
                do {
                  lVar27 = *plVar17;
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar8) {
                    *plVar17 = lVar27 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar27 == 0) {
                  lVar27 = *plStack_c8;
                  plStack_c8 = plVar16;
                  (**(code **)(lVar27 + 0x10))(plVar25);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
                  plVar16 = plStack_c8;
                }
              }
              plStack_c8 = plVar16;
              puVar26 = (undefined8 *)*puVar1;
              puVar22 = puVar1;
              while (puVar10 = puVar22, puVar26 != (undefined8 *)0x0) {
                while( true ) {
                  puVar10 = puVar26;
                  plVar25 = plVar29 + 4;
                  FUN_10a003e3c(plVar25,puVar10 + 4);
                  if (((uint)plVar25 >> 7 & 1) != 0) break;
                  puVar26 = puVar10 + 4;
                  FUN_10a003e3c(puVar26,plVar29 + 4);
                  if (((uint)puVar26 >> 7 & 1) == 0) {
                    plVar25 = (long *)*puVar22;
                    if (plVar25 != (long *)0x0) goto LAB_10a40fa84;
                    goto LAB_10a40fa00;
                  }
                  puVar22 = puVar10 + 1;
                  puVar26 = (undefined8 *)*puVar22;
                  if ((undefined8 *)*puVar22 == (undefined8 *)0x0) goto LAB_10a40fa00;
                }
                puVar22 = puVar10;
                puVar26 = (undefined8 *)*puVar10;
              }
LAB_10a40fa00:
              plVar25 = (long *)0x48;
              __Znwm();
              plStack_80 = (long *)0x0;
              plStack_90 = plVar25;
              plStack_88 = plVar9;
              if (*(char *)((long)plVar29 + 0x37) < '\0') {
                func_0x000107c3192c(plVar25 + 4,plVar29[4],plVar29[5]);
              }
              else {
                lVar28 = plVar29[5];
                lVar27 = plVar29[4];
                plVar25[6] = plVar29[6];
                plVar25[5] = lVar28;
                plVar25[4] = lVar27;
              }
              plVar25[7] = 0;
              plVar25[8] = 0;
              *plVar25 = 0;
              plVar25[1] = 0;
              plVar25[2] = (long)puVar10;
              *puVar22 = plVar25;
              if (*(long *)*plVar9 != 0) {
                *plVar9 = *(long *)*plVar9;
                plVar25 = (long *)*puVar22;
              }
              func_0x000107c2b058(*(undefined8 *)(param_1 + 0x208),plVar25);
              *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x210) + 1;
              plVar25 = plStack_90;
LAB_10a40fa84:
              pplVar11 = (long **)(plVar25 + 7);
              plVar25 = plStack_d0;
              plVar16 = plStack_c8;
            }
            else {
              do {
                puVar10 = puVar26 + 4;
                FUN_10a003e3c(puVar10,plVar29 + 4);
                if (-1 < (char)puVar10) {
                  puVar22 = puVar26;
                }
                puVar26 = *(undefined8 **)((long)puVar26 + ((ulong)puVar10 >> 4 & 8));
              } while (puVar26 != (undefined8 *)0x0);
              if (puVar22 == puVar1) goto LAB_10a40f900;
              plVar25 = plVar29 + 4;
              FUN_10a003e3c(plVar25,puVar22 + 4);
              if (((uint)plVar25 >> 7 & 1) != 0) goto LAB_10a40f900;
              pplVar11 = &plStack_d0;
              plVar25 = (long *)puVar22[7];
              plVar16 = (long *)puVar22[8];
            }
            FUN_10a410a48(pplVar11,plVar25,plVar16);
            plVar25 = plStack_d0;
            if (plVar6 != (long *)0x0) {
              do {
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar8) {
                  *plVar3 = *plVar3 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            plVar16 = plStack_d0 + 1;
            plVar17 = (long *)*plVar16;
            while (plVar31 = plVar16, plVar17 != (long *)0x0) {
              while (plVar16 = plVar17, (long *)plVar16[5] <= plVar6) {
                plVar17 = plVar6;
                if (plVar6 <= (long *)plVar16[5]) goto LAB_10a40fb60;
                plVar17 = (long *)plVar16[1];
                if ((long *)plVar16[1] == (long *)0x0) {
                  plVar31 = plVar16 + 1;
                  goto LAB_10a40fafc;
                }
              }
              plVar17 = (long *)*plVar16;
            }
LAB_10a40fafc:
            plVar17 = (long *)0x40;
            __Znwm();
            plVar17[4] = (long)plVar4;
            plVar17[5] = (long)plVar6;
            plVar17[6] = 0;
            plVar17[7] = 0;
            *plVar17 = 0;
            plVar17[1] = 0;
            plVar17[2] = (long)plVar16;
            *plVar31 = (long)plVar17;
            plVar16 = plVar17;
            if (*(long *)*plVar25 != 0) {
              *plVar25 = *(long *)*plVar25;
              plVar16 = (long *)*plVar31;
            }
            func_0x000107c2b058(plVar25[1],plVar16);
            plVar25[2] = plVar25[2] + 1;
            plVar16 = plVar17;
            plVar17 = (long *)0x0;
LAB_10a40fb60:
            lVar28 = plVar29[8];
            lVar27 = plVar29[7];
            if (plVar29[8] != 0) {
              plVar25 = (long *)(plVar29[8] + 0x10);
              do {
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar8) {
                  *plVar25 = *plVar25 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            lVar12 = plVar16[7];
            plVar16[7] = lVar28;
            plVar16[6] = lVar27;
            if (lVar12 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (plVar17 != (long *)0x0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
            }
            plVar25 = plStack_b8;
            fVar33 = (float)lVar27;
            plVar16 = plStack_c0;
            if (plStack_108 == (long *)0x0) {
              for (; fVar33 = (float)lVar27, plVar16 != plVar25; plVar16 = plVar16 + 1) {
                lVar28 = *plVar16;
                FUN_10a410af8();
                if (*(long *)(lVar28 + 0x28) != 0) {
                  lVar28 = plVar29[7];
                  plVar17 = *(long **)(lVar28 + 0x148);
                  while (plVar17 != (long *)(lVar28 + 0x150)) {
                    FUN_10a410bb4(&plStack_e0,*plVar16);
                    plVar21 = plStack_d8;
                    plVar31 = plStack_e0;
                    uVar18 = *(ulong *)(param_1 + 0x250);
                    if (uVar18 < *(ulong *)(param_1 + 600)) {
                      FUN_10a435164(uVar18,plStack_e0,plStack_d8,plVar17 + 4);
                      plVar31 = (long *)(uVar18 + 0x28);
                      *(long **)(param_1 + 0x250) = plVar31;
                    }
                    else {
                      lVar27 = uVar18 - *plVar2;
                      uVar18 = (lVar27 >> 3) * -0x3333333333333333 + 1;
                      if (0x666666666666666 < uVar18) {
                        FUN_10a4351e0();
                        goto LAB_10a410574;
                      }
                      lVar12 = (long)(*(ulong *)(param_1 + 600) - *plVar2) >> 3;
                      uVar23 = lVar12 * -0x6666666666666666;
                      if (uVar23 < uVar18 || uVar23 - uVar18 == 0) {
                        uVar23 = uVar18;
                      }
                      if (0x333333333333332 < (ulong)(lVar12 * -0x3333333333333333)) {
                        uVar23 = 0x666666666666666;
                      }
                      plStack_70 = plVar2;
                      if (uVar23 == 0) {
                        plVar19 = (long *)0x0;
                      }
                      else {
                        if (0x666666666666666 < uVar23) {
                          func_0x000109ffded8();
                          goto LAB_10a410574;
                        }
                        plVar19 = (long *)(uVar23 * 0x28);
                        __Znwm();
                      }
                      plVar15 = (long *)((long)plVar19 + lVar27);
                      plStack_90 = plVar19;
                      plStack_88 = plVar15;
                      plStack_80 = plVar15;
                      plStack_78 = plVar19 + uVar23 * 5;
                      FUN_10a435164(plVar15,plVar31,plVar21,plVar17 + 4);
                      plVar31 = plVar15 + 5;
                      plVar13 = *(long **)(param_1 + 0x248);
                      lVar27 = (long)plVar15 - (*(long *)(param_1 + 0x250) - (long)plVar13);
                      _memcpy(lVar27,plVar13);
                      *(long *)(param_1 + 0x248) = lVar27;
                      *(long **)(param_1 + 0x250) = plVar31;
                      plStack_78 = *(long **)(param_1 + 600);
                      *(long **)(param_1 + 600) = plVar19 + uVar23 * 5;
                      plStack_90 = plVar13;
                      plStack_88 = plVar13;
                      plStack_80 = plVar13;
                      FUN_10a4351f4(&plStack_90);
                    }
                    *(long **)(param_1 + 0x250) = plVar31;
                    if (plVar21 != (long *)0x0) {
                      plVar31 = plVar21 + 1;
                      do {
                        lVar27 = *plVar31;
                        cVar5 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                        if (bVar8) {
                          *plVar31 = lVar27 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar27 == 0) {
                        (**(code **)(*plVar21 + 0x10))(plVar21);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
                      }
                    }
                    plVar31 = plStack_d0;
                    FUN_10a410bb4(&plStack_90,*plVar16);
                    plVar19 = plStack_88;
                    plVar21 = plStack_90;
                    if (plStack_88 != (long *)0x0) {
                      plVar15 = plStack_88 + 2;
                      do {
                        cVar5 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                        if (bVar8) {
                          *plVar15 = *plVar15 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    plVar15 = plVar31 + 7;
                    plVar13 = (long *)*plVar15;
                    while (plVar32 = plVar15, plVar13 != (long *)0x0) {
                      while (plVar15 = plVar13, (long *)plVar15[5] <= plStack_88) {
                        if (plStack_88 <= (long *)plVar15[5]) goto LAB_10a410178;
                        plVar13 = (long *)plVar15[1];
                        if ((long *)plVar15[1] == (long *)0x0) {
                          plVar32 = plVar15 + 1;
                          goto LAB_10a41011c;
                        }
                      }
                      plVar13 = (long *)*plVar15;
                    }
LAB_10a41011c:
                    plVar13 = (long *)0x40;
                    __Znwm();
                    plVar13[5] = (long)plVar19;
                    plVar13[4] = (long)plVar21;
                    plVar13[6] = 0;
                    plVar13[7] = 0;
                    *plVar13 = 0;
                    plVar13[1] = 0;
                    plVar13[2] = (long)plVar15;
                    *plVar32 = (long)plVar13;
                    plVar21 = plVar13;
                    if (*(long *)plVar31[6] != 0) {
                      plVar31[6] = *(long *)plVar31[6];
                      plVar21 = (long *)*plVar32;
                    }
                    func_0x000107c2b058(plVar31[7],plVar21);
                    plVar31[8] = plVar31[8] + 1;
                    plVar19 = (long *)0x0;
                    plVar15 = plVar13;
LAB_10a410178:
                    lVar12 = plVar29[8];
                    lVar27 = plVar29[7];
                    if (plVar29[8] != 0) {
                      plVar31 = (long *)(plVar29[8] + 0x10);
                      do {
                        cVar5 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                        if (bVar8) {
                          *plVar31 = *plVar31 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    lVar14 = plVar15[7];
                    plVar15[7] = lVar12;
                    plVar15[6] = lVar27;
                    if (lVar14 != 0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    if (plVar19 != (long *)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
                    }
                    plVar31 = plStack_88;
                    if (plStack_88 != (long *)0x0) {
                      plVar21 = plStack_88 + 1;
                      do {
                        lVar12 = *plVar21;
                        cVar5 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                        if (bVar8) {
                          *plVar21 = lVar12 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar12 == 0) {
                        (**(code **)(*plStack_88 + 0x10))(plStack_88);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
                      }
                    }
                    plVar31 = (long *)plVar17[1];
                    plVar21 = plVar17;
                    if ((long *)plVar17[1] == (long *)0x0) {
                      do {
                        plVar17 = (long *)plVar21[2];
                        bVar8 = (long *)*plVar17 != plVar21;
                        plVar21 = plVar17;
                      } while (bVar8);
                    }
                    else {
                      do {
                        plVar17 = plVar31;
                        plVar31 = (long *)*plVar17;
                      } while ((long *)*plVar17 != (long *)0x0);
                    }
                  }
                }
              }
            }
            else {
              lVar27 = plVar29[7];
              plVar25 = *(long **)(lVar27 + 0x148);
              while (plVar25 != (long *)(lVar27 + 0x150)) {
                FUN_10a3ad44c(&plStack_e0,plStack_108);
                plStack_88 = plStack_d8;
                plStack_90 = plStack_e0;
                if (plStack_d8 != (long *)0x0) {
                  plVar16 = plStack_d8 + 2;
                  do {
                    cVar5 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar8) {
                      *plVar16 = *plVar16 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                if (*(char *)((long)plVar25 + 0x37) < '\0') {
                  func_0x000107c3192c(&plStack_80,plVar25[4],plVar25[5]);
                }
                else {
                  plStack_78 = (long *)plVar25[5];
                  plStack_80 = (long *)plVar25[4];
                  plStack_70 = (long *)plVar25[6];
                }
                puVar22 = *(undefined8 **)(param_1 + 0x238);
                if (puVar22 < *(undefined8 **)(param_1 + 0x240)) {
                  puVar22[1] = plStack_88;
                  *puVar22 = plStack_90;
                  plStack_90 = (long *)0x0;
                  plStack_88 = (long *)0x0;
                  puVar22[3] = plStack_78;
                  puVar22[2] = plStack_80;
                  puVar22[4] = plStack_70;
                  plStack_78 = (long *)0x0;
                  plStack_70 = (long *)0x0;
                  plStack_80 = (long *)0x0;
                  *(undefined8 **)(param_1 + 0x238) = puVar22 + 5;
                }
                else {
                  lVar28 = *(long *)(param_1 + 0x230);
                  uVar18 = ((long)puVar22 - lVar28 >> 3) * -0x3333333333333333 + 1;
                  if (0x666666666666666 < uVar18) {
                    func_0x00010a435150();
                    goto LAB_10a410574;
                  }
                  lVar12 = (long)*(undefined8 **)(param_1 + 0x240) - lVar28 >> 3;
                  uVar23 = lVar12 * -0x6666666666666666;
                  if (uVar23 < uVar18 || uVar23 - uVar18 == 0) {
                    uVar23 = uVar18;
                  }
                  if (0x333333333333332 < (ulong)(lVar12 * -0x3333333333333333)) {
                    uVar23 = 0x666666666666666;
                  }
                  if (0x666666666666666 < uVar23) {
                    func_0x000109ffded8();
                    goto LAB_10a410574;
                  }
                  lVar12 = uVar23 * 0x28;
                  __Znwm();
                  plVar17 = plStack_88;
                  plVar16 = plStack_90;
                  puVar22 = (undefined8 *)(lVar12 + ((long)puVar22 - lVar28));
                  plStack_90 = (long *)0x0;
                  plStack_88 = (long *)0x0;
                  puVar22[1] = plVar17;
                  *puVar22 = plVar16;
                  puVar22[3] = plStack_78;
                  puVar22[2] = plStack_80;
                  puVar22[4] = plStack_70;
                  plStack_80 = (long *)0x0;
                  plStack_78 = (long *)0x0;
                  puVar22 = puVar22 + 5;
                  plStack_70 = (long *)0x0;
                  _memcpy();
                  *(long *)(param_1 + 0x230) = lVar12;
                  *(undefined8 **)(param_1 + 0x238) = puVar22;
                  *(ulong *)(param_1 + 0x240) = lVar12 + uVar23 * 0x28;
                  if (lVar28 == 0) {
                    *(undefined8 **)(param_1 + 0x238) = puVar22;
                  }
                  else {
                    __ZdlPv(lVar28);
                    *(undefined8 **)(param_1 + 0x238) = puVar22;
                  }
                }
                if (plStack_88 != (long *)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                plVar31 = plStack_d0;
                plVar17 = plStack_d8;
                plVar16 = plStack_e0;
                if (plStack_d8 != (long *)0x0) {
                  plVar21 = plStack_d8 + 2;
                  do {
                    cVar5 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                    if (bVar8) {
                      *plVar21 = *plVar21 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                plVar19 = (long *)plStack_d0[4];
                plVar21 = plStack_d0 + 4;
                while (plVar15 = plVar21, plVar19 != (long *)0x0) {
                  while (plVar13 = plVar19, plVar21 = plVar13, (long *)plVar13[5] <= plStack_d8) {
                    if (plStack_d8 <= (long *)plVar13[5]) goto LAB_10a40fe10;
                    plVar19 = (long *)plVar13[1];
                    if ((long *)plVar13[1] == (long *)0x0) {
                      plVar15 = plVar13 + 1;
                      goto LAB_10a40fdb4;
                    }
                  }
                  plVar19 = (long *)*plVar13;
                }
LAB_10a40fdb4:
                plVar13 = (long *)0x40;
                __Znwm();
                plVar13[5] = (long)plVar17;
                plVar13[4] = (long)plVar16;
                plVar13[6] = 0;
                plVar13[7] = 0;
                *plVar13 = 0;
                plVar13[1] = 0;
                plVar13[2] = (long)plVar21;
                *plVar15 = (long)plVar13;
                plVar16 = plVar13;
                if (*(long *)plVar31[3] != 0) {
                  plVar31[3] = *(long *)plVar31[3];
                  plVar16 = (long *)*plVar15;
                }
                func_0x000107c2b058(plVar31[4],plVar16);
                plVar31[5] = plVar31[5] + 1;
                plVar17 = (long *)0x0;
LAB_10a40fe10:
                lVar12 = plVar29[8];
                lVar28 = plVar29[7];
                if (plVar29[8] != 0) {
                  plVar16 = (long *)(plVar29[8] + 0x10);
                  do {
                    cVar5 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar8) {
                      *plVar16 = *plVar16 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                lVar14 = plVar13[7];
                plVar13[7] = lVar12;
                plVar13[6] = lVar28;
                if (lVar14 != 0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv();
                }
                fVar33 = (float)lVar28;
                if (plVar17 != (long *)0x0) {
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                }
                plVar16 = plStack_d8;
                if (plStack_d8 != (long *)0x0) {
                  plVar17 = plStack_d8 + 1;
                  do {
                    lVar28 = *plVar17;
                    cVar5 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar8) {
                      *plVar17 = lVar28 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar28 == 0) {
                    (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
                  }
                }
                plVar16 = (long *)plVar25[1];
                plVar17 = plVar25;
                if ((long *)plVar25[1] == (long *)0x0) {
                  do {
                    plVar25 = (long *)plVar17[2];
                    bVar8 = (long *)*plVar25 != plVar17;
                    plVar17 = plVar25;
                  } while (bVar8);
                }
                else {
                  do {
                    plVar25 = plVar16;
                    plVar16 = (long *)*plVar25;
                  } while ((long *)*plVar25 != (long *)0x0);
                }
              }
            }
            if (plStack_128 != (long *)0x0) {
              func_0x00010a3adfc8(&plStack_90,plStack_128);
              plVar16 = plStack_88;
              plVar25 = plStack_90;
              if (plStack_88 != (long *)0x0) {
                plVar17 = plStack_88 + 2;
                do {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar8) {
                    *plVar17 = *plVar17 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              puVar22 = *(undefined8 **)(param_1 + 0x268);
              if (puVar22 < *(undefined8 **)(param_1 + 0x270)) {
                *puVar22 = plStack_90;
                puVar22[1] = plStack_88;
                puVar22 = puVar22 + 2;
              }
              else {
                lVar27 = *(long *)(param_1 + 0x260);
                lVar28 = (long)puVar22 - lVar27;
                uVar18 = (lVar28 >> 4) + 1;
                if (uVar18 >> 0x3c != 0) {
                  FUN_10a435240();
                  goto LAB_10a410574;
                }
                uVar20 = (long)*(undefined8 **)(param_1 + 0x270) - lVar27;
                uVar23 = (long)uVar20 >> 3;
                if (uVar23 <= uVar18) {
                  uVar23 = uVar18;
                }
                if (0x7fffffffffffffef < uVar20) {
                  uVar23 = 0xfffffffffffffff;
                }
                if (uVar23 >> 0x3c != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a410574;
                }
                lVar12 = uVar23 << 4;
                __Znwm();
                puVar26 = (undefined8 *)(lVar12 + lVar28);
                *puVar26 = plVar25;
                puVar26[1] = plVar16;
                puVar22 = puVar26 + 2;
                _memcpy(puVar26 + (lVar28 >> 4) * -2,lVar27,lVar28);
                *(undefined8 **)(param_1 + 0x260) = puVar26 + (lVar28 >> 4) * -2;
                *(undefined8 **)(param_1 + 0x268) = puVar22;
                *(ulong *)(param_1 + 0x270) = lVar12 + uVar23 * 0x10;
                if (lVar27 != 0) {
                  __ZdlPv(lVar27);
                  plVar25 = plStack_90;
                  plVar16 = plStack_88;
                }
              }
              plVar17 = plStack_d0;
              *(undefined8 **)(param_1 + 0x268) = puVar22;
              if (plVar16 != (long *)0x0) {
                plVar31 = plVar16 + 2;
                do {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                  if (bVar8) {
                    *plVar31 = *plVar31 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              plVar21 = (long *)plStack_d0[10];
              plVar31 = plStack_d0 + 10;
              while (plVar19 = plVar31, plVar21 != (long *)0x0) {
                while (plVar15 = plVar21, plVar31 = plVar15, (long *)plVar15[5] <= plVar16) {
                  if (plVar16 <= (long *)plVar15[5]) goto LAB_10a410378;
                  plVar21 = (long *)plVar15[1];
                  if ((long *)plVar15[1] == (long *)0x0) {
                    plVar19 = plVar15 + 1;
                    goto LAB_10a410320;
                  }
                }
                plVar21 = (long *)*plVar15;
              }
LAB_10a410320:
              plVar15 = (long *)0x40;
              __Znwm();
              plVar15[4] = (long)plVar25;
              plVar15[5] = (long)plVar16;
              plVar15[6] = 0;
              plVar15[7] = 0;
              *plVar15 = 0;
              plVar15[1] = 0;
              plVar15[2] = (long)plVar31;
              *plVar19 = (long)plVar15;
              plVar25 = plVar15;
              if (*(long *)plVar17[9] != 0) {
                plVar17[9] = *(long *)plVar17[9];
                plVar25 = (long *)*plVar19;
              }
              func_0x000107c2b058(plVar17[10],plVar25);
              plVar16 = (long *)0x0;
              plVar17[0xb] = plVar17[0xb] + 1;
LAB_10a410378:
              lVar28 = plVar29[8];
              lVar27 = plVar29[7];
              if (plVar29[8] != 0) {
                plVar25 = (long *)(plVar29[8] + 0x10);
                do {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar8) {
                    *plVar25 = *plVar25 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              lVar12 = plVar15[7];
              plVar15[7] = lVar28;
              plVar15[6] = lVar27;
              if (lVar12 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              fVar33 = (float)lVar27;
              if (plVar16 != (long *)0x0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
              }
              plVar25 = plStack_88;
              if (plStack_88 != (long *)0x0) {
                plVar16 = plStack_88 + 1;
                do {
                  lVar27 = *plVar16;
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar8) {
                    *plVar16 = lVar27 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar27 == 0) {
                  (**(code **)(*plStack_88 + 0x10))(plStack_88);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
                }
              }
            }
            plVar25 = plStack_d0;
            FUN_10aa789e8(plVar29[7]);
            plVar16 = plStack_c8;
            if (fVar33 <= *(float *)(plVar25 + 0xc)) {
              fVar33 = *(float *)(plVar25 + 0xc);
            }
            *(float *)(plVar25 + 0xc) = fVar33;
            *(undefined8 *)((long)plVar25 + 100) = *(undefined8 *)(plVar29[7] + 0x140);
            if (plStack_c8 != (long *)0x0) {
              plVar25 = plStack_c8 + 1;
              do {
                lVar27 = *plVar25;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar8) {
                  *plVar25 = lVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
              }
            }
          }
          plVar25 = (long *)plVar29[1];
          plVar16 = plVar29;
          if ((long *)plVar29[1] == (long *)0x0) {
            do {
              plVar29 = (long *)plVar16[2];
              bVar8 = (long *)*plVar29 != plVar16;
              plVar16 = plVar29;
            } while (bVar8);
          }
          else {
            do {
              plVar29 = plVar25;
              plVar25 = (long *)*plVar29;
            } while ((long *)*plVar29 != (long *)0x0);
          }
        } while (plVar29 != plVar30 + 0x3f);
      }
      if (plVar6 != (long *)0x0) {
        plVar4 = plVar6 + 1;
        do {
          lVar27 = *plVar4;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *plVar4 = lVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      puVar24 = puVar24 + 1;
    } while (puVar24 != puStack_a0);
    if (plStack_c0 != (long *)0x0) {
      plStack_b8 = plStack_c0;
      __ZdlPv();
    }
  }
  for (lVar27 = *(long *)(param_2 + 0x198); lVar27 != param_2 + 400; lVar27 = *(long *)(lVar27 + 8))
  {
    FUN_10a40f58c(param_1,*(undefined8 *)(lVar27 + 0x10));
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10a41074c; end: 10a4107db;  */

void FUN_10a41074c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  }
  return;
}



/* Entry: 10a4107dc; end: 10a4108ef;  */

void FUN_10a4107dc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    lVar9 = param_2[1];
    uVar16 = *param_2;
    puVar13[1] = param_2[1];
    *puVar13 = uVar16;
    if (lVar9 != 0) {
      plVar14 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar13 = puVar13 + 2;
  }
  else {
    lVar9 = (long)puVar13 - *param_1;
    uVar1 = (lVar9 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a4350a8();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar13 = (undefined8 *)param_2[0x2b];
      if (puVar13 != param_2 + 0x2a) {
        plVar14 = (long *)0x0;
        do {
          plVar15 = plVar14;
          if (puVar13[2] != 0) {
            plVar6 = (long *)(puVar13[2] + 0xb0);
            (**(code **)(*plVar6 + 0x18))(plVar6,0x5d3071e8cf0585db);
            if (plVar6 != (long *)0x0) {
              if (plVar14 < (long *)param_1[2]) {
                plVar15 = plVar14 + 1;
                *plVar14 = (long)plVar6;
              }
              else {
                lVar9 = *param_1;
                lVar12 = (long)plVar14 - lVar9;
                uVar1 = (lVar12 >> 3) + 1;
                if (uVar1 >> 0x3d != 0) {
                  FUN_10a43c0bc();
LAB_10a410a24:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a410a28);
                  (*pcVar5)();
                }
                uVar10 = param_1[2] - lVar9;
                uVar11 = (long)uVar10 >> 2;
                if (uVar11 <= uVar1) {
                  uVar11 = uVar1;
                }
                if (0x7ffffffffffffff7 < uVar10) {
                  uVar11 = 0x1fffffffffffffff;
                }
                if (uVar11 >> 0x3d != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a410a24;
                }
                lVar7 = uVar11 << 3;
                __Znwm();
                plVar14 = (long *)(lVar7 + lVar12);
                plVar15 = plVar14 + 1;
                *plVar14 = (long)plVar6;
                _memcpy(plVar14 + -(lVar12 >> 3),lVar9,lVar12);
                *param_1 = (long)(plVar14 + -(lVar12 >> 3));
                param_1[2] = lVar7 + uVar11 * 8;
                if (lVar9 != 0) {
                  __ZdlPv(lVar9);
                }
              }
              param_1[1] = (long)plVar15;
            }
          }
          puVar13 = (undefined8 *)puVar13[1];
          plVar14 = plVar15;
        } while (puVar13 != param_2 + 0x2a);
      }
      return;
    }
    uVar10 = param_1[2] - *param_1;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    puVar8 = param_2;
    plStack_38 = param_1;
    FUN_10a4350bc();
    puVar2 = (undefined8 *)(uVar11 + lVar9);
    lVar9 = param_2[1];
    uVar16 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar16;
    if (lVar9 != 0) {
      plVar14 = (long *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar13 = puVar2 + 2;
    lVar9 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lStack_58 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar13;
    lStack_40 = param_1[2];
    param_1[2] = uVar11 + (long)puVar8 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a4350f0(&lStack_58);
  }
  param_1[1] = (long)puVar13;
  return;
}



/* Entry: 10a4108f0; end: 10a410a47;  */

void FUN_10a4108f0(long *param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar9 = *(long *)(param_2 + 0x158);
  if (lVar9 != param_2 + 0x150) {
    plVar10 = (long *)0x0;
    do {
      plVar11 = plVar10;
      if (*(long *)(lVar9 + 0x10) != 0) {
        plVar3 = (long *)(*(long *)(lVar9 + 0x10) + 0xb0);
        (**(code **)(*plVar3 + 0x18))(plVar3,0x5d3071e8cf0585db);
        if (plVar3 != (long *)0x0) {
          if (plVar10 < (long *)param_1[2]) {
            plVar11 = plVar10 + 1;
            *plVar10 = (long)plVar3;
          }
          else {
            lVar7 = *param_1;
            lVar8 = (long)plVar10 - lVar7;
            uVar1 = (lVar8 >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
              FUN_10a43c0bc();
LAB_10a410a24:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a410a28);
              (*pcVar2)();
            }
            uVar5 = param_1[2] - lVar7;
            uVar6 = (long)uVar5 >> 2;
            if (uVar6 <= uVar1) {
              uVar6 = uVar1;
            }
            if (0x7ffffffffffffff7 < uVar5) {
              uVar6 = 0x1fffffffffffffff;
            }
            if (uVar6 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a410a24;
            }
            lVar4 = uVar6 << 3;
            __Znwm();
            plVar10 = (long *)(lVar4 + lVar8);
            plVar11 = plVar10 + 1;
            *plVar10 = (long)plVar3;
            _memcpy(plVar10 + -(lVar8 >> 3),lVar7,lVar8);
            *param_1 = (long)(plVar10 + -(lVar8 >> 3));
            param_1[2] = lVar4 + uVar6 * 8;
            if (lVar7 != 0) {
              __ZdlPv(lVar7);
            }
          }
          param_1[1] = (long)plVar11;
        }
      }
      lVar9 = *(long *)(lVar9 + 8);
      plVar10 = plVar11;
    } while (lVar9 != param_2 + 0x150);
  }
  return;
}



/* Entry: 10a410a48; end: 10a410af7;  */

undefined8 * FUN_10a410a48(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a410af8; end: 10a410bb3;  */

long FUN_10a410af8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x278);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    return param_1 + 0x318;
  }
  lVar6 = *(long *)(param_1 + 0x270);
  if (lVar6 == 0) {
    lVar6 = param_1 + 0x318;
  }
  else {
    if (*(long *)(param_1 + 0x340) != 0) {
      func_0x00010a59843c(*(undefined8 *)(param_1 + 0x388));
    }
    lVar6 = lVar6 + 0x1f0;
  }
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
  if (lVar5 != 0) {
    return lVar6;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  return lVar6;
}



/* Entry: 10a410bb4; end: 10a410c47;  */

void FUN_10a410bb4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  }
  return;
}



/* Entry: 10a410c48; end: 10a410d4f;  */

void FUN_10a410c48(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  FUN_10a40f184();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,*(undefined8 *)(param_2 + 0x210));
  plVar3 = *(long **)(param_2 + 0x200);
  while (plVar3 != (long *)(param_2 + 0x208)) {
    if (*(char *)((long)plVar3 + 0x37) < '\0') {
      func_0x000107c3192c(&lStack_50,plVar3[4],plVar3[5]);
    }
    else {
      lStack_48 = plVar3[5];
      lStack_50 = plVar3[4];
      lStack_40 = plVar3[6];
    }
    FUN_10a059fa0(param_1,&lStack_50);
    if (lStack_40 < 0) {
      __ZdlPv(lStack_50);
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a410d50; end: 10a410e93;  */

void FUN_10a410d50(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  plVar12 = *(long **)(param_2 + 0x278);
  plVar13 = *(long **)(param_2 + 0x280);
  while( true ) {
    if (plVar12 == plVar13) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    bVar10 = *(byte *)((long)param_3 + 0x17);
    uVar7 = (ulong)bVar10;
    uVar9 = param_3[1];
    uVar1 = uVar9;
    if (-1 < (char)bVar10) {
      uVar1 = uVar7;
    }
    lVar11 = *plVar12;
    if (uVar1 == 0) break;
    if (*(char *)(lVar11 + 0x67) < '\0') {
      func_0x000107c3192c(&puStack_70,*(undefined8 *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x58))
      ;
      bVar10 = *(byte *)((long)param_3 + 0x17);
      uVar7 = (ulong)bVar10;
      uVar9 = param_3[1];
    }
    else {
      uStack_68 = *(ulong *)(lVar11 + 0x58);
      puStack_70 = *(undefined1 **)(lVar11 + 0x50);
      uStack_60 = *(ulong *)(lVar11 + 0x60);
    }
    uVar4 = uStack_60;
    uVar1 = uStack_68;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar7;
    }
    if (uVar1 == uVar9) {
      ppuVar6 = (undefined1 **)puStack_70;
      if (-1 < (long)uStack_60) {
        ppuVar6 = &puStack_70;
      }
      plVar2 = (long *)*param_3;
      if (-1 < (char)bVar10) {
        plVar2 = param_3;
      }
      _memcmp(ppuVar6,plVar2);
      bVar5 = (int)ppuVar6 == 0;
    }
    else {
      bVar5 = false;
    }
    if ((long)uVar4 < 0) {
      __ZdlPv(puStack_70);
    }
    if (bVar5) {
      lVar11 = *plVar12;
      break;
    }
    plVar12 = plVar12 + 2;
  }
  lVar8 = plVar12[1];
  *param_1 = lVar11;
  param_1[1] = lVar8;
  if (lVar8 == 0) {
    return;
  }
  plVar12 = (long *)(lVar8 + 8);
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = *plVar12 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}



/* Entry: 10a410e94; end: 10a410ecf;  */

void FUN_10a410e94(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  FUN_10a40f184();
  plVar12 = *(long **)(param_2 + 0x278);
  plVar13 = *(long **)(param_2 + 0x280);
  while( true ) {
    if (plVar12 == plVar13) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    bVar10 = *(byte *)((long)param_3 + 0x17);
    uVar7 = (ulong)bVar10;
    uVar9 = param_3[1];
    uVar1 = uVar9;
    if (-1 < (char)bVar10) {
      uVar1 = uVar7;
    }
    lVar11 = *plVar12;
    if (uVar1 == 0) break;
    if (*(char *)(lVar11 + 0x67) < '\0') {
      func_0x000107c3192c(&puStack_70,*(undefined8 *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x58))
      ;
      bVar10 = *(byte *)((long)param_3 + 0x17);
      uVar7 = (ulong)bVar10;
      uVar9 = param_3[1];
    }
    else {
      uStack_68 = *(ulong *)(lVar11 + 0x58);
      puStack_70 = *(undefined1 **)(lVar11 + 0x50);
      uStack_60 = *(ulong *)(lVar11 + 0x60);
    }
    uVar4 = uStack_60;
    uVar1 = uStack_68;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar7;
    }
    if (uVar1 == uVar9) {
      ppuVar6 = (undefined1 **)puStack_70;
      if (-1 < (long)uStack_60) {
        ppuVar6 = &puStack_70;
      }
      plVar2 = (long *)*param_3;
      if (-1 < (char)bVar10) {
        plVar2 = param_3;
      }
      _memcmp(ppuVar6,plVar2);
      bVar5 = (int)ppuVar6 == 0;
    }
    else {
      bVar5 = false;
    }
    if ((long)uVar4 < 0) {
      __ZdlPv(puStack_70);
    }
    if (bVar5) {
      lVar11 = *plVar12;
      break;
    }
    plVar12 = plVar12 + 2;
  }
  lVar8 = plVar12[1];
  *param_1 = lVar11;
  param_1[1] = lVar8;
  if (lVar8 == 0) {
    return;
  }
  plVar12 = (long *)(lVar8 + 8);
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = *plVar12 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}



/* Entry: 10a410ed0; end: 10a410fff;  */

void FUN_10a410ed0(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  FUN_10a40f184();
  plVar11 = *(long **)(param_1 + 0x278);
  plVar10 = *(long **)(param_1 + 0x280);
  do {
    if (plVar11 == plVar10) {
      return;
    }
    bVar8 = *(byte *)((long)param_2 + 0x17);
    uVar6 = (ulong)bVar8;
    uVar7 = param_2[1];
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar6;
    }
    lVar9 = *plVar11;
    if (uVar1 == 0) {
LAB_10a410fcc:
      lVar9 = *(long *)(lVar9 + 200);
      *(undefined1 *)(lVar9 + 0x10) = 1;
      *(undefined2 *)(lVar9 + 0x20) = 0;
    }
    else {
      if (*(char *)(lVar9 + 0x67) < '\0') {
        func_0x000107c3192c(&puStack_70,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)(lVar9 + 0x58))
        ;
        bVar8 = *(byte *)((long)param_2 + 0x17);
        uVar6 = (ulong)bVar8;
        uVar7 = param_2[1];
      }
      else {
        uStack_68 = *(ulong *)(lVar9 + 0x58);
        puStack_70 = *(undefined1 **)(lVar9 + 0x50);
        uStack_60 = *(ulong *)(lVar9 + 0x60);
      }
      uVar3 = uStack_60;
      uVar1 = uStack_68;
      if (-1 < (long)uStack_60) {
        uVar1 = uStack_60 >> 0x38;
      }
      if (-1 < (char)bVar8) {
        uVar7 = uVar6;
      }
      if (uVar1 == uVar7) {
        ppuVar5 = (undefined1 **)puStack_70;
        if (-1 < (long)uStack_60) {
          ppuVar5 = &puStack_70;
        }
        plVar2 = (long *)*param_2;
        if (-1 < (char)bVar8) {
          plVar2 = param_2;
        }
        _memcmp(ppuVar5,plVar2);
        bVar4 = (int)ppuVar5 == 0;
      }
      else {
        bVar4 = false;
      }
      if ((long)uVar3 < 0) {
        __ZdlPv(puStack_70);
      }
      if (bVar4) {
        lVar9 = *plVar11;
        goto LAB_10a410fcc;
      }
    }
    plVar11 = plVar11 + 2;
  } while( true );
}



/* Entry: 10a411000; end: 10a4110bb;  */

void FUN_10a411000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a40f184();
  FUN_10a40f184(param_2);
  FUN_10a410d50(&lStack_40,param_2,param_3);
  if (lStack_40 != 0) {
    FUN_10aa7a570(param_1);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a4110bc; end: 10a4112fb;  */

void FUN_10a4110bc(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  FUN_10a40f184();
  plVar11 = *(long **)(param_1 + 0x278);
  plVar10 = *(long **)(param_1 + 0x280);
  do {
    if (plVar11 == plVar10) {
      return;
    }
    bVar8 = *(byte *)((long)param_2 + 0x17);
    uVar6 = (ulong)bVar8;
    uVar7 = param_2[1];
    uVar1 = uVar7;
    if (-1 < (char)bVar8) {
      uVar1 = uVar6;
    }
    lVar9 = *plVar11;
    if (uVar1 == 0) {
LAB_10a4111b0:
      FUN_10acdca1c(*(undefined8 *)(lVar9 + 200));
    }
    else {
      if (*(char *)(lVar9 + 0x67) < '\0') {
        func_0x000107c3192c(&puStack_60,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)(lVar9 + 0x58))
        ;
        bVar8 = *(byte *)((long)param_2 + 0x17);
        uVar6 = (ulong)bVar8;
        uVar7 = param_2[1];
      }
      else {
        uStack_58 = *(ulong *)(lVar9 + 0x58);
        puStack_60 = *(undefined1 **)(lVar9 + 0x50);
        uStack_50 = *(ulong *)(lVar9 + 0x60);
      }
      uVar3 = uStack_50;
      uVar1 = uStack_58;
      if (-1 < (long)uStack_50) {
        uVar1 = uStack_50 >> 0x38;
      }
      if (-1 < (char)bVar8) {
        uVar7 = uVar6;
      }
      if (uVar1 == uVar7) {
        ppuVar5 = (undefined1 **)puStack_60;
        if (-1 < (long)uStack_50) {
          ppuVar5 = &puStack_60;
        }
        plVar2 = (long *)*param_2;
        if (-1 < (char)bVar8) {
          plVar2 = param_2;
        }
        _memcmp(ppuVar5,plVar2);
        bVar4 = (int)ppuVar5 == 0;
      }
      else {
        bVar4 = false;
      }
      if ((long)uVar3 < 0) {
        __ZdlPv(puStack_60);
      }
      if (bVar4) {
        lVar9 = *plVar11;
        goto LAB_10a4111b0;
      }
    }
    plVar11 = plVar11 + 2;
  } while( true );
}



/* Entry: 10a4112fc; end: 10a41307b;  */

/* WARNING: Removing unreachable block (ram,0x00010a41167c) */
/* WARNING: Type propagation algorithm not settling */

uint *******
FUN_10a4112fc(uint *******param_1,undefined8 param_2,undefined8 param_3,float param_4,
             uint *******param_5,uint *******param_6)

{
  byte *pbVar1;
  uint ******ppppppuVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  bool bVar10;
  uint ******ppppppuVar11;
  uint *******pppppppuVar12;
  uint ****ppppuVar13;
  uint ******ppppppuVar14;
  uint *****pppppuVar15;
  uint *******pppppppuVar16;
  undefined1 uVar17;
  ulong uVar18;
  uint ******ppppppuVar19;
  uint *****pppppuVar20;
  uint *****pppppuVar21;
  uint **ppuVar22;
  uint ****ppppuVar23;
  long lVar24;
  ulong uVar25;
  uint *******pppppppuVar26;
  uint *******pppppppuVar27;
  ulong uVar28;
  uint *******pppppppuVar29;
  uint *****pppppuVar30;
  uint ***pppuVar31;
  uint *******pppppppuVar32;
  long lVar33;
  uint uVar34;
  uint ******ppppppuVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint *******unaff_d8;
  ulong unaff_d9;
  uint ******ppppppuVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  long lStack_260;
  long *plStack_258;
  ulong uStack_250;
  uint *******pppppppuStack_248;
  uint *******pppppppuStack_240;
  uint *******pppppppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  uint *******pppppppuStack_220;
  uint *******pppppppuStack_218;
  uint *******pppppppuStack_210;
  uint uStack_204;
  uint *******pppppppuStack_200;
  uint ******ppppppuStack_1f8;
  uint uStack_1ec;
  uint ******ppppppuStack_1e8;
  ulong uStack_1e0;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint *******pppppppuStack_1c8;
  uint *******pppppppuStack_1c0;
  uint *******pppppppuStack_1b8;
  uint *******pppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  uint ****ppppuStack_1a0;
  uint ****ppppuStack_198;
  uint *****pppppuStack_190;
  uint *****pppppuStack_188;
  uint ******ppppppuStack_180;
  float fStack_178;
  uint ******ppppppuStack_170;
  undefined4 uStack_168;
  uint *******pppppppuStack_160;
  uint *******pppppppuStack_158;
  uint *******pppppppuStack_150;
  long lStack_148;
  float fStack_140;
  uint *******pppppppuStack_130;
  uint *******pppppppuStack_128;
  uint *******pppppppuStack_120;
  uint *******pppppppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint *****pppppuStack_100;
  uint ******ppppppuStack_f8;
  uint *******pppppppuStack_f0;
  uint *******pppppppuStack_e8;
  uint ******ppppppuStack_e0;
  uint ******ppppppuStack_d8;
  uint *******pppppppuStack_d0;
  uint *******pppppppuStack_c8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a40f184();
  pppppppuVar12 = param_5;
  FUN_10a41312c();
  uVar18 = (long)param_5[0x50] - (long)param_5[0x4f] >> 4;
  pppppppuVar27 = (uint *******)param_5[0x53];
  pppppppuVar29 = (uint *******)param_5[0x52];
  lVar33 = (long)pppppppuVar27 - (long)pppppppuVar29;
  bVar10 = uVar18 < (ulong)((lVar33 >> 4) * -0x5555555555555555);
  uVar28 = uVar18 + (lVar33 >> 4) * 0x5555555555555555;
  if (bVar10 || uVar28 == 0) {
    if (bVar10) {
      param_6 = pppppppuVar29 + uVar18 * 6;
      FUN_10a435388(param_5 + 0x52);
    }
LAB_10a4114ec:
    ppppppuVar19 = param_5[0x4f];
    pppppppuStack_1c8 = param_5;
    if (param_5[0x50] != ppppppuVar19) {
      uVar28 = 0;
      param_5 = param_5 + 0x41;
      unaff_d8 = (uint *******)0x0;
      unaff_d9 = 0x3f800000;
      do {
        uVar18 = ((long)pppppppuStack_1c8[0x53] - (long)pppppppuStack_1c8[0x52] >> 4) *
                 -0x5555555555555555;
        if (uVar18 < uVar28 || uVar18 - uVar28 == 0) goto LAB_10a412e94;
        ppppppuVar19 = ppppppuVar19 + uVar28 * 2;
        ppppppuVar41 = pppppppuStack_1c8[0x52] + uVar28 * 6;
        *(byte *)ppppppuVar41 = 0;
        param_6 = (uint *******)*ppppppuVar19;
        FUN_10a4132a0(ppppppuVar41 + 2,param_6,ppppppuVar19[1]);
        pppppuVar20 = *ppppppuVar19;
        ppppuVar23 = pppppuVar20[0x19];
        if (*(char *)(ppppuVar23 + 2) == '\x01') {
LAB_10a41156c:
          pbVar1 = (byte *)((long)ppppppuVar41 + 0xc);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0x80;
          pbVar1[3] = 0xbf;
        }
        else if (((ulong)pppppuVar20[0x14] & 1) == 0) {
          fVar36 = *(float *)(pppppuVar20 + 0x10);
          param_1 = (uint *******)(ulong)(uint)fVar36;
          *(float *)((long)ppppppuVar41 + 4) = fVar36;
          if ((0.0 < fVar36) && (*(char *)(ppppuVar23 + 4) == '\x01')) {
            *(byte *)ppppppuVar41 = 1;
            if (*(char *)((long)pppppuVar20 + 0x7f) < '\0') {
              param_6 = (uint *******)pppppuVar20[0xd];
              func_0x000107c3192c(&pppppppuStack_f0,param_6,pppppuVar20[0xe]);
            }
            else {
              pppppppuStack_e8 = (uint *******)pppppuVar20[0xe];
              pppppppuStack_f0 = (uint *******)pppppuVar20[0xd];
              ppppppuStack_e0 = (uint ******)pppppuVar20[0xf];
            }
            pppppppuVar27 = (uint *******)*param_5;
            pppppppuVar29 = param_5;
            if (pppppppuVar27 == (uint *******)0x0) {
LAB_10a411630:
              ppppppuVar11 = (uint ******)0x0;
              ppppppuVar35 = (uint ******)0x0;
            }
            else {
              do {
                pppppppuVar12 = pppppppuVar27 + 4;
                param_6 = (uint *******)&pppppppuStack_f0;
                FUN_10a003e3c();
                if (-1 < (char)pppppppuVar12) {
                  pppppppuVar29 = pppppppuVar27;
                }
                pppppppuVar27 =
                     *(uint ********)((long)pppppppuVar27 + ((ulong)pppppppuVar12 >> 4 & 8));
              } while (pppppppuVar27 != (uint *******)0x0);
              if (pppppppuVar29 == param_5) goto LAB_10a411630;
              uVar34 = 0;
              param_6 = pppppppuVar29 + 4;
              FUN_10a003e3c();
              if ((uVar34 >> 7 & 1) != 0) goto LAB_10a411630;
              ppppppuVar11 = pppppppuVar29[7];
              ppppppuVar35 = pppppppuVar29[8];
              if (ppppppuVar35 != (uint ******)0x0) {
                ppppppuVar14 = ppppppuVar35 + 1;
                do {
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
                  if (bVar10) {
                    *ppppppuVar14 = (uint *****)((long)*ppppppuVar14 + 1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
            }
            pppppuVar20 = ppppppuVar41[5];
            ppppppuVar41[4] = (uint *****)ppppppuVar11;
            ppppppuVar41[5] = (uint *****)ppppppuVar35;
            if (pppppuVar20 != (uint *****)0x0) {
              pppppuVar15 = pppppuVar20 + 1;
              do {
                ppppuVar23 = *pppppuVar15;
                cVar5 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppppuVar15,0x10);
                if (bVar10) {
                  *pppppuVar15 = (uint ****)((long)ppppuVar23 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (ppppuVar23 == (uint ****)0x0) {
                (*(code *)(*pppppuVar20)[2])(pppppuVar20);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar20);
              }
            }
            pppppuVar20 = *ppppppuVar19;
            fVar36 = *(float *)((long)pppppuVar20 + 0x8c);
            fVar45 = fVar36 - *(float *)(pppppuVar20 + 0x11);
            if (*(uint *)((long)pppppuVar20 + 0xac) == 0) {
              fVar47 = *(float *)((long)pppppuVar20 + 0x94);
            }
            else {
              fVar36 = 1.0 / *(float *)(pppppuVar20 + 0x12);
              fVar45 = fVar45 * fVar36;
              fVar47 = *(float *)((long)pppppuVar20 + 0x94) * fVar36;
            }
            param_1 = (uint *******)(ulong)(uint)fVar36;
            if (fVar45 < fVar47) {
              FUN_10a00946c(&UNK_10f656819);
              goto LAB_10a412e94;
            }
            FUN_10acdc738(pppppuVar20[0x19]);
            pppppuVar20 = *ppppppuVar19;
            fVar42 = *(float *)(pppppuVar20 + 0x11);
            uVar34 = *(uint *)((long)pppppuVar20 + 0xac);
            fVar36 = fVar42;
            if (uVar34 != 0) {
              fVar36 = fVar42 * (1.0 / *(float *)(pppppuVar20 + 0x12));
            }
            if (((ulong)*ppppppuVar41 & 1) == 0) goto LAB_10a41156c;
            fVar40 = 0.0;
            if (0.0 <= SUB84(param_1,0)) {
              fVar40 = SUB84(param_1,0);
            }
            fVar43 = fVar45;
            if (fVar40 <= fVar45) {
              fVar43 = fVar40;
            }
            fVar47 = fVar47 + fVar43;
            param_4 = fVar47 - fVar45;
            fVar40 = param_4;
            if (fVar47 <= fVar45) {
              fVar40 = fVar47;
            }
            param_1 = (uint *******)(ulong)*(uint *)(ppppppuVar41 + 1);
            *(float *)(ppppppuVar41 + 1) = fVar40 + fVar36;
            ppppuVar23 = pppppuVar20[0x19];
            if (*(char *)((long)ppppuVar23 + 0x11) == '\x01') {
              pbVar1 = (byte *)((long)ppppppuVar41 + 0xc);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0x80;
              pbVar1[3] = 0xbf;
LAB_10a411738:
              if (uVar34 != 0) {
                fVar42 = fVar42 * (1.0 / *(float *)(pppppuVar20 + 0x12));
              }
              if (((ulong)pppppuVar20[0x13] & 1) == 0) {
                param_1 = (uint *******)(ulong)(uint)(*(float *)(pppppuVar20 + 0x1a) + fVar42);
              }
              else {
                fVar36 = (fVar42 + *(float *)((long)ppppuVar23 + 0x34)) -
                         *(float *)(pppppuVar20 + 0x1a);
                if (fVar36 <= 0.0) {
                  fVar36 = 0.0;
                }
                param_1 = (uint *******)(ulong)(uint)fVar36;
              }
            }
            else if (*(float *)((long)ppppppuVar41 + 0xc) < 0.0) goto LAB_10a411738;
            *(int *)((long)ppppppuVar41 + 0xc) = (int)param_1;
          }
        }
        uVar28 = uVar28 + 1;
        ppppppuVar19 = pppppppuStack_1c8[0x4f];
      } while (uVar28 < (ulong)((long)pppppppuStack_1c8[0x50] - (long)ppppppuVar19 >> 4));
    }
    ppppppuVar19 = pppppppuStack_1c8[0x43];
    pppppppuVar29 = pppppppuStack_1c8;
    if (pppppppuStack_1c8[0x44] != ppppppuVar19) {
      uVar28 = 0;
      pppppppuStack_210 = pppppppuStack_1c8 + 0x69;
      pppppppuStack_218 = pppppppuStack_1c8 + 0x61;
      pppppppuStack_220 = pppppppuStack_1c8 + 0x59;
      pppppppuStack_1b8 = (uint *******)&pppppppuStack_150;
      param_1 = (uint *******)0x0;
      ppppppuStack_1f8 = (uint ******)0x3f80000000000000;
      pppppppuStack_200 = (uint *******)0x0;
      ppppppuVar41 = (uint ******)NEON_fmov(0x3f800000,4);
      do {
        ppppppuVar11 = (uint ******)(ppppppuVar19 + uVar28 * 2)[1];
        if ((ppppppuVar11 != (uint ******)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_f8 = ppppppuVar11,
           ppppppuVar11 != (uint ******)0x0)) {
          pppppuVar20 = ppppppuVar19[uVar28 * 2];
          pppppuStack_100 = pppppuVar20;
          if ((pppppuVar20 != (uint *****)0x0) &&
             ((*(code *)(*pppppuVar20)[0xc])(), ((ulong)pppppuVar20 & 1) != 0)) {
            ppppppuStack_170 = (uint ******)0x0;
            uStack_168 = 0;
            uStack_108 = ppppppuStack_1f8;
            uStack_110 = pppppppuStack_200;
            ppppppuStack_180 = (uint ******)0x0;
            fStack_178 = 0.0;
            param_1 = pppppppuStack_200;
            if (0xe8 < (int)*(uint *)(pppppppuVar29[0x2e][0x144] + 3)) {
              if ((ulong)((long)pppppppuVar29[0x57] - (long)pppppppuVar29[0x56] >> 6) <= uVar28)
              goto LAB_10a412e94;
              ppppppuVar19 = pppppppuVar29[0x56] + uVar28 * 8;
              uStack_168 = *(undefined4 *)(ppppppuVar19 + 7);
              ppppppuStack_170 = (uint ******)ppppppuVar19[6];
              fVar36 = *(float *)ppppppuVar19;
              fVar40 = *(float *)((long)ppppppuVar19 + 0x14);
              fVar42 = *(float *)(ppppppuVar19 + 5);
              fVar43 = (fVar36 - fVar40) - fVar42;
              fVar45 = (fVar40 - fVar36) - fVar42;
              fVar47 = (fVar42 - fVar36) - fVar40;
              fVar42 = fVar36 + fVar40 + fVar42;
              fVar36 = fVar43;
              if (fVar43 <= fVar42) {
                fVar36 = fVar42;
              }
              bVar7 = 2;
              if (fVar45 <= fVar36) {
                fVar45 = fVar36;
                bVar7 = fVar42 < fVar43;
              }
              bVar8 = 3;
              if (fVar47 <= fVar45) {
                fVar47 = fVar45;
                bVar8 = bVar7;
              }
              fVar37 = SQRT(fVar47 + 1.0) * 0.5;
              fVar43 = 0.25 / fVar37;
              fVar40 = (*(float *)(ppppppuVar19 + 4) - *(float *)(ppppppuVar19 + 1)) * fVar43;
              fVar44 = (*(float *)((long)ppppppuVar19 + 4) + *(float *)(ppppppuVar19 + 2)) * fVar43;
              fVar46 = (*(float *)(ppppppuVar19 + 3) + *(float *)((long)ppppppuVar19 + 0x24)) *
                       fVar43;
              fVar42 = (*(float *)((long)ppppppuVar19 + 4) - *(float *)(ppppppuVar19 + 2)) * fVar43;
              fVar38 = (*(float *)(ppppppuVar19 + 1) + *(float *)(ppppppuVar19 + 4)) * fVar43;
              fVar39 = fVar40;
              fVar36 = fVar46;
              fVar45 = fVar37;
              fVar47 = fVar44;
              if (bVar8 != 2) {
                fVar39 = fVar42;
                fVar36 = fVar37;
                fVar45 = fVar46;
                fVar47 = fVar38;
              }
              fVar43 = (*(float *)(ppppppuVar19 + 3) - *(float *)((long)ppppppuVar19 + 0x24)) *
                       fVar43;
              fVar46 = fVar37;
              if (bVar8 != 0) {
                fVar46 = fVar43;
                fVar42 = fVar38;
                fVar40 = fVar44;
                fVar43 = fVar37;
              }
              if (bVar8 < 2) {
                fVar39 = fVar46;
                fVar36 = fVar42;
                fVar45 = fVar40;
                fVar47 = fVar43;
              }
              uStack_110 = (uint *******)CONCAT44(fVar45,fVar47);
              uStack_108 = (uint ******)CONCAT44(fVar39,fVar36);
              fStack_178 = SQRT(*(float *)(ppppppuVar19 + 4) * *(float *)(ppppppuVar19 + 4) +
                                *(float *)((long)ppppppuVar19 + 0x24) *
                                *(float *)((long)ppppppuVar19 + 0x24) +
                                *(float *)(ppppppuVar19 + 5) * *(float *)(ppppppuVar19 + 5));
              param_1 = (uint *******)(ulong)(uint)fStack_178;
              param_4 = SUB84(*ppppppuVar19,0);
              fVar45 = SUB84(ppppppuVar19[2],0);
              param_4 = param_4 * param_4;
              fVar36 = (float)((ulong)*ppppppuVar19 >> 0x20);
              fVar47 = (float)((ulong)ppppppuVar19[2] >> 0x20);
              ppppppuStack_180 =
                   (uint ******)
                   CONCAT44(SQRT(fVar45 * fVar45 + fVar47 * fVar47 +
                                 *(float *)(ppppppuVar19 + 3) * *(float *)(ppppppuVar19 + 3)),
                            SQRT(param_4 + fVar36 * fVar36 +
                                 *(float *)(ppppppuVar19 + 1) * *(float *)(ppppppuVar19 + 1)));
            }
            if (*(int *)((long)pppppppuVar29 + 500) == 1) {
              fStack_178 = 1.0;
              ppppppuStack_180 = ppppppuVar41;
            }
            ppppppuVar19 = pppppppuVar29[0x52];
            ppppppuVar11 = pppppppuVar29[0x53];
            if (ppppppuVar19 != ppppppuVar11) {
              uStack_1d4 = 0;
              uStack_1d0 = 0;
              uStack_1ec = 0;
              uVar34 = 0;
              uStack_204 = 1;
              ppppppuStack_1e8 = ppppppuVar11;
              uStack_1e0 = uVar28;
              do {
                if (*(char *)ppppppuVar19 == '\x01') {
                  unaff_d8 = (uint *******)(ulong)*(uint *)(ppppppuVar19 + 1);
                  pppppuStack_190 = ppppppuVar19[4];
                  pppppuVar20 = ppppppuVar19[5];
                  if (pppppuVar20 != (uint *****)0x0) {
                    pppppuVar15 = pppppuVar20 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppuVar15,0x10);
                      if (bVar10) {
                        *pppppuVar15 = (uint ****)((long)*pppppuVar15 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  pppppuStack_188 = pppppuVar20;
                  if (pppppuStack_190 != (uint *****)0x0) {
                    if (ppppppuStack_f8 != (uint ******)0x0) {
                      ppppppuVar35 = ppppppuStack_f8 + 2;
                      do {
                        cVar5 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar35,0x10);
                        if (bVar10) {
                          *ppppppuVar35 = (uint *****)((long)*ppppppuVar35 + 1);
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    pppppuVar30 = pppppuStack_190 + 1;
                    pppppuVar21 = (uint *****)*pppppuVar30;
                    pppppuVar15 = pppppuVar30;
                    if (pppppuVar21 == (uint *****)0x0) {
LAB_10a411a94:
                      pppppuVar15 = pppppuVar30;
                    }
                    else {
                      do {
                        lVar33 = 8;
                        if (ppppppuStack_f8 <= pppppuVar21[5]) {
                          lVar33 = 0;
                          pppppuVar15 = pppppuVar21;
                        }
                        pppppuVar21 = *(uint ******)((long)pppppuVar21 + lVar33);
                      } while (pppppuVar21 != (uint *****)0x0);
                      if ((pppppuVar15 == pppppuVar30) || (ppppppuStack_f8 < pppppuVar15[5]))
                      goto LAB_10a411a94;
                    }
                    if (ppppppuStack_f8 != (uint ******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    if (pppppuVar15 != pppppuVar30) {
                      ppppuStack_1a0 = (uint ****)0x0;
                      ppppuStack_198 = (uint ****)0x0;
                      ppppuVar23 = pppppuVar15[7];
                      if (ppppuVar23 != (uint ****)0x0) {
                        __ZNSt3__119__shared_weak_count4lockEv();
                        pppppuVar20 = pppppuStack_188;
                        ppppuStack_198 = ppppuVar23;
                        if (ppppuVar23 == (uint ****)0x0) goto LAB_10a412408;
                        ppppuVar23 = pppppuVar15[6];
                        ppppuStack_1a0 = ppppuVar23;
                        if (ppppuVar23 != (uint ****)0x0) {
                          pppppppuVar29[0x69] = (uint ******)0x10a43caf4;
                          (*(code *)*pppppppuVar29[0x6a])(pppppppuVar29 + 0x6a);
                          pppppppuVar29[0x6a] = (uint ******)&PTR_DAT_110bd95e0;
                          pppppppuVar29[0x6b] = (uint ******)FUN_10a414184;
                          pppppppuVar29[0x59] = (uint ******)0x10a43cb18;
                          (*(code *)*pppppppuVar29[0x5a])(pppppppuVar29 + 0x5a);
                          pppppppuVar29[0x5a] = (uint ******)&PTR_DAT_110bd95f8;
                          pppppppuVar29[0x5b] = (uint ******)0x10a414198;
                          pppppppuVar29[0x61] = (uint ******)0x10a43cb3c;
                          (*(code *)*pppppppuVar29[0x62])(pppppppuVar29 + 0x62);
                          pppppppuVar29[0x62] = (uint ******)&PTR_DAT_110bd9610;
                          pppppppuVar29[99] = (uint ******)0x10a4141ac;
                          if (*(int *)((long)pppppppuVar29 + 500) == 1) {
                            if (*(uint *)((long)ppppppuVar19[2] + 0xa4) == 1) {
                              pppppppuVar29[0x69] = (uint ******)0x10a43caf4;
                              (*(code *)*pppppppuVar29[0x6a])(pppppppuVar29 + 0x6a);
                              pppppppuVar29[0x6a] = (uint ******)&PTR_DAT_110bd95e0;
                              pppppppuVar29[0x6b] = (uint ******)FUN_10a41480c;
                              pppppppuVar29[0x61] = (uint ******)0x10a43cb3c;
                              (*(code *)*pppppppuVar29[0x62])(pppppppuVar29 + 0x62);
                              pppppppuVar29[0x62] = (uint ******)&PTR_DAT_110bd9610;
                              pppppppuVar29[99] = (uint ******)0x10a41487c;
                              if (*(uint *)(ppppppuVar19[2] + 0x15) == 0) {
                                pcVar9 = FUN_10a414a14;
                              }
                              else {
                                pcVar9 = (code *)0x10a4149a4;
                                if (*(uint *)(ppppppuVar19[2] + 0x15) != 1) goto LAB_10a411d1c;
                              }
                              goto LAB_10a411cf0;
                            }
                            if (*(uint *)((long)ppppppuVar19[2] + 0xa4) == 2) {
                              uVar4 = *(uint *)(pppppppuVar29[0x2e][0x144] + 3);
                              pppppppuVar29[0x69] = (uint ******)0x10a43caf4;
                              (*(code *)*pppppppuVar29[0x6a])(pppppppuVar29 + 0x6a);
                              pppppppuVar29[0x6a] = (uint ******)&PTR_DAT_110bd95e0;
                              ppppppuVar11 = (uint ******)FUN_10a4144d0;
                              if (0xe8 < (int)uVar4) {
                                ppppppuVar11 = (uint ******)FUN_10a4141c0;
                              }
                              ppppppuVar35 = (uint ******)FUN_10a41452c;
                              if (0xe8 < (int)uVar4) {
                                ppppppuVar35 = (uint ******)FUN_10a414260;
                              }
                              pppppppuVar29[0x6b] = ppppppuVar11;
                              pppppppuVar29[0x61] = (uint ******)0x10a43cb3c;
                              (*(code *)*pppppppuVar29[0x62])(pppppppuVar29 + 0x62);
                              pppppppuVar29[0x62] = (uint ******)&PTR_DAT_110bd9610;
                              pppppppuVar29[99] = ppppppuVar35;
                              if (*(uint *)(ppppppuVar19[2] + 0x15) == 0) {
                                pcVar9 = FUN_10a414780;
                                goto LAB_10a411cf0;
                              }
                              if (*(uint *)(ppppppuVar19[2] + 0x15) == 1) goto LAB_10a411ce8;
                            }
                          }
                          else if (*(int *)((long)pppppppuVar29 + 500) == 0) {
                            uVar4 = *(uint *)(pppppppuVar29[0x2e][0x144] + 3);
                            pppppppuVar29[0x69] = (uint ******)0x10a43caf4;
                            (*(code *)*pppppppuVar29[0x6a])(pppppppuVar29 + 0x6a);
                            pppppppuVar29[0x6a] = (uint ******)&PTR_DAT_110bd95e0;
                            ppppppuVar11 = (uint ******)FUN_10a4144d0;
                            if (0xe8 < (int)uVar4) {
                              ppppppuVar11 = (uint ******)FUN_10a4141c0;
                            }
                            ppppppuVar35 = (uint ******)FUN_10a41452c;
                            if (0xe8 < (int)uVar4) {
                              ppppppuVar35 = (uint ******)FUN_10a414260;
                            }
                            pppppppuVar29[0x6b] = ppppppuVar11;
                            pppppppuVar29[0x61] = (uint ******)0x10a43cb3c;
                            (*(code *)*pppppppuVar29[0x62])(pppppppuVar29 + 0x62);
                            pppppppuVar29[0x62] = (uint ******)&PTR_DAT_110bd9610;
                            pppppppuVar29[99] = ppppppuVar35;
                            if (*(uint *)((long)ppppppuVar19[2] + 0xa4) == 1) {
LAB_10a411ce8:
                              pcVar9 = FUN_10a4146c0;
                            }
                            else {
                              if (*(uint *)((long)ppppppuVar19[2] + 0xa4) != 2) goto LAB_10a411d1c;
                              pcVar9 = (code *)0x10a41471c;
                            }
LAB_10a411cf0:
                            pppppppuVar29[0x59] = (uint ******)0x10a43cb18;
                            (*(code *)*pppppppuVar29[0x5a])(pppppppuVar29 + 0x5a);
                            pppppppuVar29[0x5a] = (uint ******)&PTR_DAT_110bd95f8;
                            pppppppuVar29[0x5b] = (uint ******)pcVar9;
                          }
LAB_10a411d1c:
                          FUN_10aa78858(&pppppppuStack_f0,ppppuVar23);
                          pppppppuVar27 = pppppppuStack_f0 + 0x1d;
                          param_1 = unaff_d8;
                          uStack_1cc = uVar34;
                          FUN_10aa75600(unaff_d8,*(undefined4 *)((long)ppppppuVar19 + 0xc));
                          pppppppuVar12 = pppppppuStack_e8;
                          if (pppppppuStack_e8 != (uint *******)0x0) {
                            pppppppuVar16 = pppppppuStack_e8 + 1;
                            do {
                              ppppppuVar11 = *pppppppuVar16;
                              cVar5 = '\x01';
                              bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
                              if (bVar10) {
                                *pppppppuVar16 = (uint ******)((long)ppppppuVar11 + -1);
                                cVar5 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar5 != '\0');
                            if (ppppppuVar11 == (uint ******)0x0) {
                              (*(code *)(*pppppppuVar12)[2])(pppppppuVar12);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar12);
                            }
                          }
                          if (param_6 != (uint *******)0x0) {
                            pppppppuStack_1c0 = pppppppuVar27 + (long)param_6 * 6;
                            do {
                              ppppuVar23 = ppppppuVar19[2][8];
                              if (ppppuVar23[6] != (uint ***)0x0) {
                                pppppppuVar12 = (uint *******)0x48;
                                __Znwm();
                                pppppppuVar12[1] = (uint ******)0x0;
                                pppppppuVar12[2] = (uint ******)0x0;
                                *pppppppuVar12 = (uint ******)&PTR_FUN_110bd9570;
                                if (*(char *)((long)pppppppuVar27 + 0x2f) < '\0') {
                                  func_0x000107c3192c(&pppppppuStack_f0,pppppppuVar27[3],
                                                      pppppppuVar27[4]);
                                }
                                else {
                                  pppppppuStack_e8 = (uint *******)pppppppuVar27[4];
                                  pppppppuStack_f0 = (uint *******)pppppppuVar27[3];
                                  ppppppuStack_e0 = pppppppuVar27[5];
                                }
                                pppppppuStack_1b0 = pppppppuVar12 + 3;
                                *pppppppuStack_1b0 = (uint ******)&PTR_FUN_110c3de58;
                                pppppppuVar12[4] = (uint ******)0x0;
                                pppppppuVar12[5] = (uint ******)0x0;
                                pppppppuVar12[7] = (uint ******)pppppppuStack_e8;
                                pppppppuVar12[6] = (uint ******)pppppppuStack_f0;
                                pppppppuVar12[8] = ppppppuStack_e0;
                                pppppppuStack_158 = (uint *******)0x0;
                                pppppppuStack_160 = (uint *******)0x0;
                                lStack_148 = 0;
                                pppppppuStack_150 = (uint *******)0x0;
                                fStack_140 = *(float *)(ppppuVar23 + 7);
                                param_1 = (uint *******)(ulong)(uint)fStack_140;
                                pppppppuStack_1a8 = pppppppuVar12;
                                FUN_10a43c3b4(&pppppppuStack_160,ppppuVar23[4]);
                                pppppppuVar16 = pppppppuStack_158;
                                pppppppuVar32 = pppppppuStack_150;
                                for (pppuVar31 = ppppuVar23[5]; pppppppuStack_158 = pppppppuVar16,
                                    pppppppuStack_150 = pppppppuVar32, pppuVar31 != (uint ***)0x0;
                                    pppuVar31 = (uint ***)*pppuVar31) {
                                  pppppuVar20 = (uint *****)pppuVar31[2];
                                  uVar28 = ((ulong)(uint)((int)pppppuVar20 << 3) + 8 ^
                                           (ulong)pppppuVar20 >> 0x20) * -0x622015f714c7d297;
                                  uVar28 = ((ulong)pppppuVar20 >> 0x20 ^ uVar28 >> 0x2f ^ uVar28) *
                                           -0x622015f714c7d297;
                                  pppppppuVar32 =
                                       (uint *******)
                                       ((uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297);
                                  if (pppppppuVar16 != (uint *******)0x0) {
                                    uVar28 = (long)pppppppuVar16 - 1;
                                    if (((ulong)pppppppuVar16 & uVar28) == 0) {
                                      pppppppuVar29 = (uint *******)((ulong)pppppppuVar32 & uVar28);
                                    }
                                    else {
                                      pppppppuVar29 = pppppppuVar32;
                                      if (pppppppuVar16 <= pppppppuVar32) {
                                        uVar18 = 0;
                                        if (pppppppuVar16 != (uint *******)0x0) {
                                          uVar18 = (ulong)pppppppuVar32 / (ulong)pppppppuVar16;
                                        }
                                        pppppppuVar29 =
                                             (uint *******)
                                             ((long)pppppppuVar32 - uVar18 * (long)pppppppuVar16);
                                      }
                                    }
                                    ppppppuVar11 = pppppppuStack_160[(long)pppppppuVar29];
                                    if (ppppppuVar11 != (uint ******)0x0) {
                                      do {
                                        while( true ) {
                                          ppppppuVar11 = (uint ******)*ppppppuVar11;
                                          if (ppppppuVar11 == (uint ******)0x0) goto LAB_10a411ecc;
                                          pppppppuVar26 = (uint *******)ppppppuVar11[1];
                                          if (pppppppuVar26 != pppppppuVar32) break;
                                          if (ppppppuVar11[2] == pppppuVar20) goto LAB_10a412050;
                                        }
                                        if (((ulong)pppppppuVar16 & uVar28) == 0) {
                                          pppppppuVar26 =
                                               (uint *******)((ulong)pppppppuVar26 & uVar28);
                                        }
                                        else if (pppppppuVar16 <= pppppppuVar26) {
                                          uVar18 = 0;
                                          if (pppppppuVar16 != (uint *******)0x0) {
                                            uVar18 = (ulong)pppppppuVar26 / (ulong)pppppppuVar16;
                                          }
                                          pppppppuVar26 =
                                               (uint *******)
                                               ((long)pppppppuVar26 - uVar18 * (long)pppppppuVar16);
                                        }
                                      } while (pppppppuVar26 == pppppppuVar29);
                                    }
                                  }
LAB_10a411ecc:
                                  pppppppuVar26 = (uint *******)0x68;
                                  __Znwm();
                                  pppppppuStack_e8 = (uint *******)&pppppppuStack_160;
                                  ppppppuStack_e0 = (uint ******)0x0;
                                  *pppppppuVar26 = (uint ******)0x0;
                                  pppppppuVar26[1] = (uint ******)pppppppuVar32;
                                  ppuVar22 = pppuVar31[3];
                                  ppppppuVar11 = (uint ******)pppuVar31[2];
                                  pppppppuVar26[3] = (uint ******)pppuVar31[3];
                                  pppppppuVar26[2] = ppppppuVar11;
                                  if (ppuVar22 != (uint **)0x0) {
                                    ppuVar22 = ppuVar22 + 1;
                                    do {
                                      cVar5 = '\x01';
                                      bVar10 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                                      if (bVar10) {
                                        *ppuVar22 = (uint *)((long)*ppuVar22 + 1);
                                        cVar5 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar5 != '\0');
                                  }
                                  pppppppuStack_130 = pppppppuVar26 + 4;
                                  *(undefined1 *)(pppppppuVar26 + 0xc) = 3;
                                  pppppppuStack_f0 = pppppppuVar26;
                                  if (*(char *)(pppuVar31 + 0xc) == '\0') {
                                    uVar17 = 0;
                                  }
                                  else {
                                    FUN_10a005398(&pppppppuStack_130,pppuVar31 + 4);
                                    uVar17 = *(undefined1 *)(pppuVar31 + 0xc);
                                  }
                                  *(undefined1 *)(pppppppuVar26 + 0xc) = uVar17;
                                  ppppppuStack_e0 = (uint ******)CONCAT71(ppppppuStack_e0._1_7_,1);
                                  fVar36 = (float)(lStack_148 + 1);
                                  param_1 = (uint *******)(ulong)(uint)fVar36;
                                  if ((pppppppuVar16 == (uint *******)0x0) ||
                                     (fStack_140 * (float)pppppppuVar16 < fVar36)) {
                                    uVar28 = 1;
                                    if ((uint *******)0x2 < pppppppuVar16) {
                                      uVar28 = (ulong)(((ulong)pppppppuVar16 &
                                                       (long)pppppppuVar16 - 1U) != 0);
                                    }
                                    uVar28 = uVar28 | (long)pppppppuVar16 << 1;
                                    param_1 = (uint *******)(ulong)(uint)(fVar36 / fStack_140);
                                    uVar18 = (ulong)(fVar36 / fStack_140);
                                    if (uVar28 <= uVar18) {
                                      uVar28 = uVar18;
                                    }
                                    FUN_10a43c3b4(&pppppppuStack_160,uVar28);
                                    pppppppuVar16 = pppppppuStack_158;
                                    if (((ulong)pppppppuStack_158 & (long)pppppppuStack_158 - 1U) ==
                                        0) {
                                      pppppppuVar29 =
                                           (uint *******)
                                           ((long)pppppppuStack_158 - 1U & (ulong)pppppppuVar32);
                                    }
                                    else {
                                      pppppppuVar29 = pppppppuVar32;
                                      if (pppppppuStack_158 <= pppppppuVar32) {
                                        uVar28 = 0;
                                        if (pppppppuStack_158 != (uint *******)0x0) {
                                          uVar28 = (ulong)pppppppuVar32 / (ulong)pppppppuStack_158;
                                        }
                                        pppppppuVar29 =
                                             (uint *******)
                                             ((long)pppppppuVar32 - uVar28 * (long)pppppppuStack_158
                                             );
                                      }
                                    }
                                  }
                                  ppppppuVar11 = pppppppuStack_160[(long)pppppppuVar29];
                                  if (ppppppuVar11 == (uint ******)0x0) {
                                    *pppppppuStack_f0 = (uint ******)pppppppuStack_150;
                                    pppppppuStack_150 = pppppppuStack_f0;
                                    pppppppuStack_160[(long)pppppppuVar29] =
                                         (uint ******)pppppppuStack_1b8;
                                    if (*pppppppuStack_f0 != (uint ******)0x0) {
                                      pppppppuVar32 = (uint *******)(*pppppppuStack_f0)[1];
                                      if (((ulong)pppppppuVar16 & (long)pppppppuVar16 - 1U) == 0) {
                                        pppppppuVar32 =
                                             (uint *******)
                                             ((ulong)pppppppuVar32 & (long)pppppppuVar16 - 1U);
                                      }
                                      else if (pppppppuVar16 <= pppppppuVar32) {
                                        uVar28 = 0;
                                        if (pppppppuVar16 != (uint *******)0x0) {
                                          uVar28 = (ulong)pppppppuVar32 / (ulong)pppppppuVar16;
                                        }
                                        pppppppuVar32 =
                                             (uint *******)
                                             ((long)pppppppuVar32 - uVar28 * (long)pppppppuVar16);
                                      }
                                      pppppppuStack_160[(long)pppppppuVar32] =
                                           (uint ******)pppppppuStack_f0;
                                    }
                                  }
                                  else {
                                    *pppppppuStack_f0 = (uint ******)*ppppppuVar11;
                                    *ppppppuVar11 = (uint *****)pppppppuStack_f0;
                                  }
                                  lStack_148 = lStack_148 + 1;
LAB_10a412050:
                                  pppppppuVar16 = pppppppuStack_158;
                                  pppppppuVar32 = pppppppuStack_150;
                                }
                                if (pppppppuVar32 == (uint *******)0x0) {
                                  func_0x00010a43c62c(&pppppppuStack_160);
                                }
                                else {
                                  do {
                                    ppppuVar13 = ppppuVar23 + 3;
                                    pppppppuVar12 = pppppppuVar32 + 2;
                                    FUN_10a43c6cc();
                                    if (ppppuVar13 != (uint ****)0x0) {
                                      if (*(char *)(pppppppuVar32 + 0xc) == '\x01') {
                                        ppppppuVar11 = pppppppuVar32[4];
                                        pppppppuStack_e8 = pppppppuStack_1a8;
                                        pppppppuStack_f0 = pppppppuStack_1b0;
                                        if (pppppppuStack_1a8 != (uint *******)0x0) {
                                          pppppppuVar12 = pppppppuStack_1a8 + 1;
                                          do {
                                            cVar5 = '\x01';
                                            bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
                                            if (bVar10) {
                                              *pppppppuVar12 =
                                                   (uint ******)((long)*pppppppuVar12 + 1);
                                              cVar5 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar5 != '\0');
                                        }
                                        param_1 = pppppppuStack_1b0;
                                        (*(code *)ppppppuVar11)(&pppppppuStack_f0,pppppppuVar32 + 4)
                                        ;
                                        if (pppppppuStack_e8 != (uint *******)0x0) {
                                          pppppppuVar12 = pppppppuStack_e8 + 1;
                                          do {
                                            ppppppuVar11 = *pppppppuVar12;
                                            cVar5 = '\x01';
                                            bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
                                            if (bVar10) {
                                              *pppppppuVar12 =
                                                   (uint ******)((long)ppppppuVar11 + -1);
                                              cVar5 = ExclusiveMonitorsStatus();
                                            }
                                            pppppppuVar16 = pppppppuStack_e8;
                                          } while (cVar5 != '\0');
LAB_10a412114:
                                          if (ppppppuVar11 == (uint ******)0x0) {
                                            (*(code *)(*pppppppuVar16)[2])(pppppppuVar16);
                                            __ZNSt3__119__shared_weak_count14__release_weakEv
                                                      (pppppppuVar16);
                                          }
                                        }
                                      }
                                      else if (*(char *)(pppppppuVar32 + 0xc) == '\x02') {
                                        pppppppuVar16 = pppppppuVar32 + 4;
                                        FUN_10a688b40();
                                        pppppppuVar26 = pppppppuStack_1a8;
                                        if (pppppppuVar16 == (uint *******)0x0) {
                                          if (pppppppuVar12 != (uint *******)0x0) {
                                            ppppppuStack_e0 = pppppppuVar32[4];
                                            ppppppuStack_d8 = pppppppuVar32[5];
                                            if (ppppppuStack_d8 != (uint ******)0x0) {
                                              ppppppuVar11 = ppppppuStack_d8 + 1;
                                              do {
                                                cVar5 = '\x01';
                                                bVar10 = (bool)ExclusiveMonitorPass
                                                                         (ppppppuVar11,0x10);
                                                if (bVar10) {
                                                  *ppppppuVar11 =
                                                       (uint *****)((long)*ppppppuVar11 + 1);
                                                  cVar5 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar5 != '\0');
                                            }
                                            pppppppuStack_120 = pppppppuStack_1b0;
                                            pppppppuStack_118 = pppppppuStack_1a8;
                                            if (pppppppuStack_1a8 == (uint *******)0x0) {
                                              pppppppuStack_c8 = (uint *******)0x0;
                                            }
                                            else {
                                              pppppppuVar16 = pppppppuStack_1a8 + 1;
                                              do {
                                                cVar5 = '\x01';
                                                bVar10 = (bool)ExclusiveMonitorPass
                                                                         (pppppppuVar16,0x10);
                                                if (bVar10) {
                                                  *pppppppuVar16 =
                                                       (uint ******)((long)*pppppppuVar16 + 1);
                                                  cVar5 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar5 != '\0');
                                              pppppppuStack_c8 = pppppppuStack_1a8;
                                              do {
                                                cVar5 = '\x01';
                                                bVar10 = (bool)ExclusiveMonitorPass
                                                                         (pppppppuVar16,0x10);
                                                if (bVar10) {
                                                  *pppppppuVar16 =
                                                       (uint ******)((long)*pppppppuVar16 + 1);
                                                  cVar5 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar5 != '\0');
                                            }
                                            pppppppuStack_d0 = pppppppuStack_1b0;
                                            pppppppuStack_e8 = (uint *******)&PTR_FUN_110bd95b0;
                                            pppppppuStack_128 = (uint *******)0x0;
                                            pppppppuStack_130 = (uint *******)0x0;
                                            pppppppuStack_f0 = (uint *******)FUN_10a43c9a8;
                                            FUN_10a4634ec(pppppppuVar12,&pppppppuStack_f0);
                                            (*(code *)*pppppppuStack_e8)(&pppppppuStack_e8);
                                            if (pppppppuVar26 != (uint *******)0x0) {
                                              pppppppuVar12 = pppppppuVar26 + 1;
                                              do {
                                                ppppppuVar11 = *pppppppuVar12;
                                                cVar5 = '\x01';
                                                bVar10 = (bool)ExclusiveMonitorPass
                                                                         (pppppppuVar12,0x10);
                                                if (bVar10) {
                                                  *pppppppuVar12 =
                                                       (uint ******)((long)ppppppuVar11 + -1);
                                                  cVar5 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar5 != '\0');
                                              if (ppppppuVar11 == (uint ******)0x0) {
                                                (*(code *)(*pppppppuVar26)[2])(pppppppuVar26);
                                                __ZNSt3__119__shared_weak_count14__release_weakEv
                                                          (pppppppuVar26);
                                              }
                                            }
                                            if (pppppppuStack_128 != (uint *******)0x0) {
                                              pppppppuVar12 = pppppppuStack_128 + 1;
                                              do {
                                                ppppppuVar11 = *pppppppuVar12;
                                                cVar5 = '\x01';
                                                bVar10 = (bool)ExclusiveMonitorPass
                                                                         (pppppppuVar12,0x10);
                                                if (bVar10) {
                                                  *pppppppuVar12 =
                                                       (uint ******)((long)ppppppuVar11 + -1);
                                                  cVar5 = ExclusiveMonitorsStatus();
                                                }
                                                pppppppuVar16 = pppppppuStack_128;
                                              } while (cVar5 != '\0');
                                              goto LAB_10a412114;
                                            }
                                          }
                                        }
                                        else {
                                          param_1 = (uint *******)
                                                    CONCAT44((int)((ulong)*pppppppuVar16 >> 0x20) +
                                                             1,(int)*pppppppuVar16 + 1);
                                          *pppppppuVar16 = (uint ******)param_1;
                                          FUN_10a43c7a4(pppppppuVar32[4],&pppppppuStack_1b0);
                                          iVar6 = *(int *)((long)pppppppuVar16 + 4) + -1;
                                          *(int *)((long)pppppppuVar16 + 4) = iVar6;
                                          if (iVar6 == 0) {
                                            *(undefined4 *)pppppppuVar16 = 0;
                                          }
                                        }
                                      }
                                    }
                                    pppppppuVar12 = pppppppuStack_1a8;
                                    pppppppuVar32 = (uint *******)*pppppppuVar32;
                                  } while (pppppppuVar32 != (uint *******)0x0);
                                  func_0x00010a43c62c(&pppppppuStack_160);
                                  if (pppppppuVar12 == (uint *******)0x0) goto LAB_10a41228c;
                                }
                                pppppppuVar16 = pppppppuVar12 + 1;
                                do {
                                  ppppppuVar11 = *pppppppuVar16;
                                  cVar5 = '\x01';
                                  bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
                                  if (bVar10) {
                                    *pppppppuVar16 = (uint ******)((long)ppppppuVar11 + -1);
                                    cVar5 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar5 != '\0');
                                if (ppppppuVar11 == (uint ******)0x0) {
                                  (*(code *)(*pppppppuVar12)[2])(pppppppuVar12);
                                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar12);
                                }
                              }
LAB_10a41228c:
                              pppppppuVar27 = pppppppuVar27 + 6;
                            } while (pppppppuVar27 != pppppppuStack_1c0);
                          }
                          ppppuVar23 = ppppuStack_1a0;
                          pppppppuVar29 = pppppppuStack_1c8;
                          uVar34 = uStack_1cc;
                          uVar28 = uStack_1e0;
                          ppppppuVar11 = ppppppuStack_1e8;
                          pppppuVar20 = ppppppuVar19[2];
                          unaff_d9 = (ulong)(uint)*(float *)(pppppuVar20 + 0x11);
                          if ((0xea < (int)*(uint *)(pppppppuStack_1c8[0x2e][0x144] + 3)) &&
                             (*(uint *)((long)pppppuVar20 + 0xac) != 0)) {
                            param_1 = (uint *******)
                                      (ulong)(uint)(1.0 / *(float *)(pppppuVar20 + 0x12));
                            unaff_d9 = (ulong)(uint)(*(float *)(pppppuVar20 + 0x11) *
                                                    (1.0 / *(float *)(pppppuVar20 + 0x12)));
                          }
                          if (ppppuStack_1a0[0x1c] != (uint ***)0x0) {
                            param_1 = (uint *******)(ulong)*(uint *)((long)ppppppuVar19 + 4);
                            pppppppuVar27 = unaff_d8;
                            uVar18 = unaff_d9;
                            (*(code *)*pppppppuStack_210)(&ppppppuStack_170);
                            ppppppuStack_170 =
                                 (uint ******)CONCAT44((int)pppppppuVar27,(int)param_1);
                            uStack_1d0 = 1;
                            uStack_168 = (undefined4)uVar18;
                          }
                          param_6 = (uint *******)ppppuVar23[0x1e];
                          if (param_6 != (uint *******)0x0) {
                            param_1 = (uint *******)(ulong)*(uint *)((long)ppppppuVar19 + 4);
                            pppppppuVar27 = unaff_d8;
                            uVar18 = unaff_d9;
                            (*(code *)*pppppppuStack_218)(&uStack_110);
                            uStack_110 = (uint *******)CONCAT44((int)pppppppuVar27,(int)param_1);
                            uStack_1d4 = 1;
                            uStack_108 = (uint ******)CONCAT44(param_4,(int)uVar18);
                          }
                          if (ppppuVar23[0x20] != (uint ***)0x0) {
                            param_1 = (uint *******)(ulong)*(uint *)((long)ppppppuVar19 + 4);
                            param_6 = &ppppppuStack_180;
                            pppppppuVar27 = unaff_d8;
                            uVar18 = unaff_d9;
                            (*(code *)*pppppppuStack_220)(uVar34 & 1);
                            ppppppuStack_180 =
                                 (uint ******)CONCAT44((int)pppppppuVar27,(int)param_1);
                            uVar34 = 1;
                            fStack_178 = (float)uVar18;
                          }
                          pppuVar31 = ppppuVar23[0x24];
                          if ((pppuVar31 != (uint ***)0x0) &&
                             (param_1 = (uint *******)
                                        (ulong)(uint)*(float *)(ppppppuVar19[2] + 0x10),
                             1.1920929e-07 < *(float *)(ppppppuVar19[2] + 0x10))) {
                            param_1 = unaff_d8;
                            (*(code *)(*pppuVar31)[0x13])();
                            uStack_204 = (uint)((int)pppuVar31 != 0);
                            uStack_1ec = 1;
                          }
                        }
                      }
                      ppppuVar23 = ppppuStack_198;
                      pppppuVar20 = pppppuStack_188;
                      if (ppppuStack_198 != (uint ****)0x0) {
                        ppppuVar13 = ppppuStack_198 + 1;
                        do {
                          pppuVar31 = *ppppuVar13;
                          cVar5 = '\x01';
                          bVar10 = (bool)ExclusiveMonitorPass(ppppuVar13,0x10);
                          if (bVar10) {
                            *ppppuVar13 = (uint ***)((long)pppuVar31 + -1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (pppuVar31 == (uint ***)0x0) {
                          (*(code *)(*ppppuStack_198)[2])(ppppuStack_198);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar23);
                          pppppuVar20 = pppppuStack_188;
                        }
                      }
                    }
                  }
LAB_10a412408:
                  if (pppppuVar20 != (uint *****)0x0) {
                    pppppuVar15 = pppppuVar20 + 1;
                    do {
                      ppppuVar23 = *pppppuVar15;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppuVar15,0x10);
                      if (bVar10) {
                        *pppppuVar15 = (uint ****)((long)ppppuVar23 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (ppppuVar23 == (uint ****)0x0) {
                      (*(code *)(*pppppuVar20)[2])(pppppuVar20);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar20);
                    }
                  }
                }
                ppppppuVar19 = ppppppuVar19 + 6;
              } while (ppppppuVar19 != ppppppuVar11);
              if ((uStack_1d0 & 1) != 0) {
                param_6 = &ppppppuStack_170;
                FUN_10a3e3894(pppppuStack_100[0x2f]);
              }
              if ((uStack_1d4 & 1) != 0) {
                param_6 = (uint *******)&uStack_110;
                FUN_10a3e82bc(pppppuStack_100[0x2f]);
              }
              if ((uVar34 & 1) != 0) {
                param_6 = &ppppppuStack_180;
                FUN_10a3e814c(pppppuStack_100[0x2f]);
              }
              if ((uStack_1ec & 1) != 0) {
                param_6 = (uint *******)(ulong)(uStack_204 & 1);
                func_0x00010a3e4590(pppppuStack_100[0x2d]);
              }
            }
            ppppppuVar11 = ppppppuStack_f8;
            if (ppppppuStack_f8 == (uint ******)0x0) goto LAB_10a4125a4;
          }
          ppppppuVar19 = ppppppuVar11 + 1;
          do {
            pppppuVar20 = *ppppppuVar19;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar19,0x10);
            if (bVar10) {
              *ppppppuVar19 = (uint *****)((long)pppppuVar20 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (pppppuVar20 == (uint *****)0x0) {
            (*(code *)(*ppppppuVar11)[2])(ppppppuVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar11);
          }
        }
LAB_10a4125a4:
        uVar28 = uVar28 + 1;
        ppppppuVar19 = pppppppuVar29[0x43];
      } while (uVar28 < (ulong)((long)pppppppuVar29[0x44] - (long)ppppppuVar19 >> 4));
    }
    FUN_10a435254(&pppppppuStack_f0,
                  ((long)pppppppuVar29[0x47] - (long)pppppppuVar29[0x46] >> 3) * -0x3333333333333333
                  ,0);
    pppppppuVar27 = pppppppuStack_1c8;
    param_6 = (uint *******)
              (((long)pppppppuStack_1c8[0x4a] - (long)pppppppuStack_1c8[0x49] >> 3) *
              -0x3333333333333333);
    FUN_10a435254(&pppppppuStack_160,param_6,0);
    ppppppuVar41 = pppppppuVar27[0x53];
    pppppppuVar29 = pppppppuStack_f0;
    pppppppuVar12 = pppppppuStack_e8;
    for (ppppppuVar19 = pppppppuVar27[0x52]; pppppppuStack_f0 = pppppppuVar29,
        pppppppuStack_e8 = pppppppuVar12, ppppppuVar19 != ppppppuVar41;
        ppppppuVar19 = ppppppuVar19 + 6) {
      if (*(char *)ppppppuVar19 == '\x01') {
        pppppppuStack_130 = (uint *******)ppppppuVar19[4];
        pppppppuStack_128 = (uint *******)ppppppuVar19[5];
        if (pppppppuStack_128 != (uint *******)0x0) {
          pppppppuVar29 = pppppppuStack_128 + 1;
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar29,0x10);
            if (bVar10) {
              *pppppppuVar29 = (uint ******)((long)*pppppppuVar29 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (pppppppuStack_130 != (uint *******)0x0) {
          ppppppuVar11 = pppppppuStack_1c8[0x46];
          ppppppuVar35 = pppppppuStack_1c8[0x47];
          if (ppppppuVar11 != ppppppuVar35) {
            uVar34 = 0;
            do {
              ppppppuVar14 = (uint ******)ppppppuVar11[1];
              if ((ppppppuVar14 != (uint ******)0x0) &&
                 (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_f8 = ppppppuVar14,
                 ppppppuVar14 != (uint ******)0x0)) {
                pppppuStack_100 = *ppppppuVar11;
                if ((pppppuStack_100 != (uint *****)0x0) &&
                   (((ulong)pppppuStack_100[0x30] & 0x12) == 0)) {
                  ppppppuVar2 = ppppppuVar14 + 2;
                  do {
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
                    if (bVar10) {
                      *ppppppuVar2 = (uint *****)((long)*ppppppuVar2 + 1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  pppppppuVar27 = pppppppuStack_130 + 4;
                  pppppppuVar12 = (uint *******)*pppppppuVar27;
                  pppppppuVar29 = pppppppuVar27;
                  if (pppppppuVar12 != (uint *******)0x0) {
                    do {
                      lVar33 = 8;
                      if (ppppppuVar14 <= pppppppuVar12[5]) {
                        lVar33 = 0;
                        pppppppuVar29 = pppppppuVar12;
                      }
                      pppppppuVar12 = *(uint ********)((long)pppppppuVar12 + lVar33);
                    } while (pppppppuVar12 != (uint *******)0x0);
                    if ((pppppppuVar29 != pppppppuVar27) && (pppppppuVar29[5] <= ppppppuVar14)) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar14);
                      ppppppuVar14 = pppppppuVar29[7];
                      if ((ppppppuVar14 != (uint ******)0x0) &&
                         (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuVar27 = pppppppuStack_f0
                         , uStack_108 = ppppppuVar14, ppppppuVar14 != (uint ******)0x0)) {
                        pppppppuVar29 = (uint *******)pppppppuVar29[6];
                        uStack_110 = pppppppuVar29;
                        if (pppppppuVar29 != (uint *******)0x0) {
                          if ((uint *******)((long)pppppppuStack_e8 - (long)pppppppuStack_f0 >> 3)
                              <= (uint *******)(ulong)uVar34) goto LAB_10a412e94;
                          unaff_d8 = (uint *******)(ulong)*(uint *)(ppppppuVar19 + 1);
                          pppppppuVar12 = pppppppuVar29 + 0x29;
                          param_6 = (uint *******)(ppppppuVar11 + 2);
                          pppppppuStack_1b8 = (uint *******)(ulong)uVar34;
                          FUN_10a4352f8(pppppppuVar12,param_6);
                          if (((pppppppuVar29 + 0x2a != pppppppuVar12) &&
                              (pppppppuVar12[7] != (uint ******)0x0)) &&
                             ((*(code *)(*pppppppuVar12[7])[0x12])(), 0.0 < SUB84(param_1,0))) {
                            pppppppuVar29 = unaff_d8;
                            (*(code *)(*pppppppuVar12[7])[0x13])();
                            pppppppuVar27 = pppppppuVar27 + (long)pppppppuStack_1b8;
                            fVar36 = *(float *)pppppppuVar27 +
                                     *(float *)(ppppppuVar19[2] + 0x10) * SUB84(pppppppuVar29,0);
                            param_1 = (uint *******)(ulong)(uint)fVar36;
                            *(float *)pppppppuVar27 = fVar36;
                            *(undefined1 *)((long)pppppppuVar27 + 4) = 1;
                          }
                        }
                        ppppppuVar2 = ppppppuVar14 + 1;
                        do {
                          pppppuVar20 = *ppppppuVar2;
                          cVar5 = '\x01';
                          bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
                          if (bVar10) {
                            *ppppppuVar2 = (uint *****)((long)pppppuVar20 + -1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (pppppuVar20 == (uint *****)0x0) {
                          (*(code *)(*ppppppuVar14)[2])(ppppppuVar14);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar14);
                        }
                      }
                      ppppppuVar14 = ppppppuStack_f8;
                      if (ppppppuStack_f8 == (uint ******)0x0) goto LAB_10a412720;
                      goto LAB_10a4126f0;
                    }
                  }
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar14);
                }
LAB_10a4126f0:
                ppppppuVar2 = ppppppuVar14 + 1;
                do {
                  pppppuVar20 = *ppppppuVar2;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
                  if (bVar10) {
                    *ppppppuVar2 = (uint *****)((long)pppppuVar20 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (pppppuVar20 == (uint *****)0x0) {
                  (*(code *)(*ppppppuVar14)[2])(ppppppuVar14);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar14);
                }
              }
LAB_10a412720:
              uVar34 = uVar34 + 1;
              ppppppuVar11 = ppppppuVar11 + 5;
            } while (ppppppuVar11 != ppppppuVar35);
          }
          ppppppuVar11 = pppppppuStack_1c8[0x49];
          ppppppuVar35 = pppppppuStack_1c8[0x4a];
          if (ppppppuVar11 != ppppppuVar35) {
            uVar34 = 0;
            do {
              ppppppuVar14 = (uint ******)ppppppuVar11[1];
              if ((ppppppuVar14 != (uint ******)0x0) &&
                 (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_f8 = ppppppuVar14,
                 ppppppuVar14 != (uint ******)0x0)) {
                pppppuVar20 = *ppppppuVar11;
                pppppuStack_100 = pppppuVar20;
                if ((pppppuVar20 != (uint *****)0x0) &&
                   ((pppppuVar15 = pppppuVar20, (*(code *)(*pppppuVar20)[0xc])(),
                    (int)pppppuVar15 != 0 && (FUN_10a410af8(), ((ulong)pppppuVar20[8] & 1) != 0))))
                {
                  ppppppuVar2 = ppppppuVar14 + 2;
                  do {
                    cVar5 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
                    if (bVar10) {
                      *ppppppuVar2 = (uint *****)((long)*ppppppuVar2 + 1);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  pppppppuVar27 = pppppppuStack_130 + 7;
                  pppppppuVar12 = (uint *******)*pppppppuVar27;
                  pppppppuVar29 = pppppppuVar27;
                  if (pppppppuVar12 != (uint *******)0x0) {
                    do {
                      lVar33 = 8;
                      if (ppppppuVar14 <= pppppppuVar12[5]) {
                        lVar33 = 0;
                        pppppppuVar29 = pppppppuVar12;
                      }
                      pppppppuVar12 = *(uint ********)((long)pppppppuVar12 + lVar33);
                    } while (pppppppuVar12 != (uint *******)0x0);
                    if ((pppppppuVar29 != pppppppuVar27) && (pppppppuVar29[5] <= ppppppuVar14)) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar14);
                      ppppppuVar14 = pppppppuVar29[7];
                      if ((ppppppuVar14 != (uint ******)0x0) &&
                         (__ZNSt3__119__shared_weak_count4lockEv(),
                         pppppppuVar27 = pppppppuStack_160, uStack_108 = ppppppuVar14,
                         ppppppuVar14 != (uint ******)0x0)) {
                        pppppppuVar29 = (uint *******)pppppppuVar29[6];
                        uStack_110 = pppppppuVar29;
                        if (pppppppuVar29 != (uint *******)0x0) {
                          if ((uint *******)((long)pppppppuStack_158 - (long)pppppppuStack_160 >> 3)
                              <= (uint *******)(ulong)uVar34) goto LAB_10a412e94;
                          unaff_d8 = (uint *******)(ulong)*(uint *)(ppppppuVar19 + 1);
                          pppppppuVar12 = pppppppuVar29 + 0x29;
                          param_6 = (uint *******)(ppppppuVar11 + 2);
                          pppppppuStack_1b8 = (uint *******)(ulong)uVar34;
                          FUN_10a4352f8(pppppppuVar12,param_6);
                          if (((pppppppuVar29 + 0x2a != pppppppuVar12) &&
                              (pppppppuVar12[7] != (uint ******)0x0)) &&
                             ((*(code *)(*pppppppuVar12[7])[0x12])(), 0.0 < SUB84(param_1,0))) {
                            pppppppuVar29 = unaff_d8;
                            (*(code *)(*pppppppuVar12[7])[0x13])();
                            pppppppuVar27 = pppppppuVar27 + (long)pppppppuStack_1b8;
                            fVar36 = *(float *)pppppppuVar27 +
                                     *(float *)(ppppppuVar19[2] + 0x10) * SUB84(pppppppuVar29,0);
                            param_1 = (uint *******)(ulong)(uint)fVar36;
                            *(float *)pppppppuVar27 = fVar36;
                            *(undefined1 *)((long)pppppppuVar27 + 4) = 1;
                          }
                        }
                        ppppppuVar2 = ppppppuVar14 + 1;
                        do {
                          pppppuVar20 = *ppppppuVar2;
                          cVar5 = '\x01';
                          bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
                          if (bVar10) {
                            *ppppppuVar2 = (uint *****)((long)pppppuVar20 + -1);
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (pppppuVar20 == (uint *****)0x0) {
                          (*(code *)(*ppppppuVar14)[2])(ppppppuVar14);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar14);
                        }
                      }
                      ppppppuVar14 = ppppppuStack_f8;
                      if (ppppppuStack_f8 == (uint ******)0x0) goto LAB_10a412914;
                      goto LAB_10a4128e4;
                    }
                  }
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar14);
                }
LAB_10a4128e4:
                ppppppuVar2 = ppppppuVar14 + 1;
                do {
                  pppppuVar20 = *ppppppuVar2;
                  cVar5 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
                  if (bVar10) {
                    *ppppppuVar2 = (uint *****)((long)pppppuVar20 + -1);
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (pppppuVar20 == (uint *****)0x0) {
                  (*(code *)(*ppppppuVar14)[2])(ppppppuVar14);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar14);
                }
              }
LAB_10a412914:
              uVar34 = uVar34 + 1;
              ppppppuVar11 = ppppppuVar11 + 5;
            } while (ppppppuVar11 != ppppppuVar35);
          }
        }
        pppppppuVar29 = pppppppuStack_128;
        pppppppuVar27 = pppppppuStack_1c8;
        if (pppppppuStack_128 != (uint *******)0x0) {
          pppppppuVar12 = pppppppuStack_128 + 1;
          do {
            ppppppuVar11 = *pppppppuVar12;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
            if (bVar10) {
              *pppppppuVar12 = (uint ******)((long)ppppppuVar11 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar11 == (uint ******)0x0) {
            (*(code *)(*pppppppuStack_128)[2])(pppppppuStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar29);
          }
        }
      }
      pppppppuVar29 = pppppppuStack_f0;
      pppppppuVar12 = pppppppuStack_e8;
    }
    if (pppppppuVar29 != pppppppuVar12) {
      uVar28 = 0;
      do {
        if (*(char *)((long)pppppppuVar29 + 4) == '\x01') {
          uVar18 = ((long)pppppppuVar27[0x47] - (long)pppppppuVar27[0x46] >> 3) *
                   -0x3333333333333333;
          if (uVar18 < uVar28 || uVar18 - uVar28 == 0) goto LAB_10a412e94;
          ppppppuVar19 = pppppppuVar27[0x46] + uVar28 * 5;
          pppppppuVar32 = (uint *******)ppppppuVar19[1];
          __ZNSt3__119__shared_weak_count4lockEv();
          pppppppuStack_130 = (uint *******)*ppppppuVar19;
          param_1 = (uint *******)(ulong)*(uint *)pppppppuVar29;
          param_6 = (uint *******)(ppppppuVar19 + 2);
          pppppppuStack_128 = pppppppuVar32;
          FUN_10a428274(param_1,(float)(double)pppppppuStack_130[0x2e][0x10a][1],
                        pppppppuStack_130 + 0x3e,param_6);
          pppppppuVar16 = pppppppuVar32 + 1;
          do {
            ppppppuVar19 = *pppppppuVar16;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
            if (bVar10) {
              *pppppppuVar16 = (uint ******)((long)ppppppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar19 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar32)[2])(pppppppuVar32);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar32);
          }
        }
        uVar28 = (ulong)((int)uVar28 + 1);
        pppppppuVar29 = pppppppuVar29 + 1;
      } while (pppppppuVar29 != pppppppuVar12);
    }
    pppppppuVar29 = pppppppuStack_158;
    if (pppppppuStack_160 != pppppppuStack_158) {
      uVar28 = 0;
      pppppppuVar12 = pppppppuStack_160;
      do {
        if (*(char *)((long)pppppppuVar12 + 4) == '\x01') {
          uVar18 = ((long)pppppppuVar27[0x4a] - (long)pppppppuVar27[0x49] >> 3) *
                   -0x3333333333333333;
          if (uVar18 < uVar28 || uVar18 - uVar28 == 0) {
LAB_10a412e94:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10a412e98);
            (*pcVar9)();
          }
          ppppppuVar19 = pppppppuVar27[0x49] + uVar28 * 5;
          pppppppuVar32 = (uint *******)ppppppuVar19[1];
          __ZNSt3__119__shared_weak_count4lockEv();
          pppppppuStack_130 = (uint *******)*ppppppuVar19;
          param_1 = (uint *******)(ulong)*(uint *)pppppppuVar12;
          param_6 = (uint *******)(ppppppuVar19 + 2);
          pppppppuStack_128 = pppppppuVar32;
          FUN_10a428274(param_1,(float)(double)pppppppuStack_130[0x2e][0x10a][1],
                        pppppppuStack_130 + 99,param_6);
          pppppppuVar16 = pppppppuVar32 + 1;
          do {
            ppppppuVar19 = *pppppppuVar16;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
            if (bVar10) {
              *pppppppuVar16 = (uint ******)((long)ppppppuVar19 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar19 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar32)[2])(pppppppuVar32);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar32);
          }
        }
        uVar28 = (ulong)((int)uVar28 + 1);
        pppppppuVar12 = pppppppuVar12 + 1;
      } while (pppppppuVar12 != pppppppuVar29);
    }
    pppppppuVar29 = pppppppuStack_160;
    if (pppppppuStack_160 != (uint *******)0x0) {
      __ZdlPv(pppppppuStack_160);
    }
    pppppppuVar12 = pppppppuStack_f0;
    if (pppppppuStack_f0 != (uint *******)0x0) {
      __ZdlPv();
    }
    ppppppuVar19 = pppppppuVar27[0x4c];
    ppppppuVar41 = pppppppuVar27[0x4d];
    if (ppppppuVar19 != ppppppuVar41) {
      unaff_d9 = 0;
      do {
        pppppppuVar12 = (uint *******)ppppppuVar19[1];
        if ((pppppppuVar12 != (uint *******)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuStack_e8 = pppppppuVar12,
           pppppppuVar12 != (uint *******)0x0)) {
          pppppppuVar16 = (uint *******)*ppppppuVar19;
          pppppppuVar29 = pppppppuVar12;
          pppppppuStack_f0 = pppppppuVar16;
          if ((pppppppuVar16 != (uint *******)0x0) &&
             ((*(code *)(*pppppppuVar16)[0xc])(), ((ulong)pppppppuVar16 & 1) != 0)) {
            ppppppuVar11 = pppppppuVar27[0x52];
            ppppppuVar35 = pppppppuVar27[0x53];
            if (ppppppuVar11 != ppppppuVar35) {
              do {
                pppppppuVar12 = pppppppuVar16;
                if (*(char *)ppppppuVar11 == '\x01') {
                  unaff_d8 = (uint *******)(ulong)*(uint *)(ppppppuVar11 + 1);
                  pppppppuStack_160 = (uint *******)ppppppuVar11[4];
                  pppppppuVar29 = (uint *******)ppppppuVar11[5];
                  if (pppppppuVar29 != (uint *******)0x0) {
                    pppppppuVar12 = pppppppuVar29 + 1;
                    do {
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
                      if (bVar10) {
                        *pppppppuVar12 = (uint ******)((long)*pppppppuVar12 + 1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                  }
                  pppppppuStack_158 = pppppppuVar29;
                  if (pppppppuStack_160 != (uint *******)0x0) {
                    if (pppppppuStack_e8 != (uint *******)0x0) {
                      pppppppuVar12 = pppppppuStack_e8 + 2;
                      do {
                        cVar5 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
                        if (bVar10) {
                          *pppppppuVar12 = (uint ******)((long)*pppppppuVar12 + 1);
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                    }
                    pppppppuVar32 = pppppppuStack_160 + 10;
                    pppppppuVar16 = (uint *******)*pppppppuVar32;
                    pppppppuVar12 = pppppppuVar32;
                    if (pppppppuVar16 == (uint *******)0x0) {
LAB_10a412cf4:
                      pppppppuVar12 = pppppppuVar32;
                    }
                    else {
                      do {
                        lVar33 = 8;
                        if (pppppppuStack_e8 <= pppppppuVar16[5]) {
                          lVar33 = 0;
                          pppppppuVar12 = pppppppuVar16;
                        }
                        pppppppuVar16 = *(uint ********)((long)pppppppuVar16 + lVar33);
                      } while (pppppppuVar16 != (uint *******)0x0);
                      if ((pppppppuVar12 == pppppppuVar32) || (pppppppuStack_e8 < pppppppuVar12[5]))
                      goto LAB_10a412cf4;
                    }
                    pppppppuVar16 = pppppppuStack_e8;
                    if (pppppppuStack_e8 != (uint *******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    if (((pppppppuVar12 != pppppppuVar32) &&
                        (pppppppuVar32 = (uint *******)pppppppuVar12[7],
                        pppppppuVar16 = pppppppuVar32, pppppppuVar29 = pppppppuStack_158,
                        pppppppuVar32 != (uint *******)0x0)) &&
                       (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuVar16 = pppppppuVar32,
                       pppppppuVar29 = pppppppuStack_158, pppppppuStack_128 = pppppppuVar32,
                       pppppppuVar32 != (uint *******)0x0)) {
                      pppppppuVar29 = (uint *******)pppppppuVar12[6];
                      pppppppuStack_130 = pppppppuVar29;
                      if ((pppppppuVar29 != (uint *******)0x0) &&
                         (pppppppuVar16 = pppppppuVar29, FUN_10aa789e8(),
                         pppppppuVar12 = pppppppuStack_f0, 0.0 < SUB84(param_1,0))) {
                        pppppppuVar16 = (uint *******)pppppppuVar29[0x26];
                        if (pppppppuVar16 == (uint *******)0x0) {
                          FUN_10a00946c(&UNK_10f65686c);
                          goto LAB_10a412e94;
                        }
                        pppppppuVar29 = unaff_d8;
                        (*(code *)(*pppppppuVar16)[0x13])();
                        *(int *)(pppppppuVar12 + 0x3e) = (int)pppppppuVar29;
                        fVar36 = 0.0;
                        if (0.0 <= *(float *)(ppppppuVar11[2] + 0x10)) {
                          fVar36 = *(float *)(ppppppuVar11[2] + 0x10);
                        }
                        fVar45 = 1.0;
                        if (fVar36 <= 1.0) {
                          fVar45 = fVar36;
                        }
                        param_1 = (uint *******)(ulong)(uint)fVar45;
                        *(float *)((long)pppppppuVar12 + 500) = fVar45;
                      }
                      pppppppuVar29 = pppppppuVar32 + 1;
                      do {
                        ppppppuVar14 = *pppppppuVar29;
                        cVar5 = '\x01';
                        bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar29,0x10);
                        if (bVar10) {
                          *pppppppuVar29 = (uint ******)((long)ppppppuVar14 + -1);
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      pppppppuVar29 = pppppppuStack_158;
                      if (ppppppuVar14 == (uint ******)0x0) {
                        (*(code *)(*pppppppuVar32)[2])(pppppppuVar32);
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                        pppppppuVar16 = pppppppuVar32;
                        pppppppuVar29 = pppppppuStack_158;
                      }
                    }
                  }
                  pppppppuVar12 = pppppppuVar16;
                  if (pppppppuVar29 != (uint *******)0x0) {
                    pppppppuVar16 = pppppppuVar29 + 1;
                    do {
                      ppppppuVar14 = *pppppppuVar16;
                      cVar5 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
                      if (bVar10) {
                        *pppppppuVar16 = (uint ******)((long)ppppppuVar14 + -1);
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (ppppppuVar14 == (uint ******)0x0) {
                      (*(code *)(*pppppppuVar29)[2])(pppppppuVar29);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      pppppppuVar12 = pppppppuVar29;
                    }
                  }
                }
                ppppppuVar11 = ppppppuVar11 + 6;
                pppppppuVar16 = pppppppuVar12;
              } while (ppppppuVar11 != ppppppuVar35);
              pppppppuVar29 = pppppppuStack_e8;
              if (pppppppuStack_e8 == (uint *******)0x0) goto LAB_10a412e24;
            }
          }
          pppppppuVar12 = pppppppuVar16;
          pppppppuVar16 = pppppppuVar29 + 1;
          do {
            ppppppuVar11 = *pppppppuVar16;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
            if (bVar10) {
              *pppppppuVar16 = (uint ******)((long)ppppppuVar11 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar11 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar29)[2])(pppppppuVar29);
            pppppppuVar12 = pppppppuVar29;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
LAB_10a412e24:
        ppppppuVar19 = ppppppuVar19 + 2;
      } while (ppppppuVar19 != ppppppuVar41);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar28 <= (ulong)(((long)param_5[0x54] - (long)pppppppuVar27 >> 4) * -0x5555555555555555)) {
      pppppppuVar29 = pppppppuVar27 + uVar28 * 6;
      param_1 = (uint *******)0x0;
      do {
        *pppppppuVar27 = (uint ******)0x0;
        pppppppuVar27[1] = (uint ******)0x0;
        *(uint *)((long)pppppppuVar27 + 0xc) = 0xbf800000;
        pppppppuVar27[3] = (uint ******)0x0;
        pppppppuVar27[2] = (uint ******)0x0;
        pppppppuVar27[5] = (uint ******)0x0;
        pppppppuVar27[4] = (uint ******)0x0;
        pppppppuVar27 = pppppppuVar27 + 6;
      } while (pppppppuVar27 != pppppppuVar29);
      param_5[0x53] = (uint ******)pppppppuVar29;
      goto LAB_10a4114ec;
    }
    if (uVar18 < 0x555555555555556) {
      lVar24 = (long)param_5[0x54] - (long)pppppppuVar29 >> 4;
      uVar25 = lVar24 * 0x5555555555555556;
      if (uVar25 < uVar18 || uVar25 - uVar18 == 0) {
        uVar25 = uVar18;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar24 * -0x5555555555555555)) {
        uVar25 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar25) goto LAB_10a412ea0;
      lVar24 = uVar25 * 0x30;
      __Znwm();
      ppppppuVar41 = (uint ******)(lVar24 + lVar33);
      param_1 = (uint *******)0x0;
      ppppppuVar19 = ppppppuVar41;
      do {
        *ppppppuVar19 = (uint *****)0x0;
        ppppppuVar19[1] = (uint *****)0x0;
        *(undefined4 *)((long)ppppppuVar19 + 0xc) = 0xbf800000;
        ppppppuVar19[3] = (uint *****)0x0;
        ppppppuVar19[2] = (uint *****)0x0;
        ppppppuVar19[5] = (uint *****)0x0;
        ppppppuVar19[4] = (uint *****)0x0;
        ppppppuVar19 = ppppppuVar19 + 6;
      } while (ppppppuVar19 != ppppppuVar41 + uVar28 * 6);
      pppppppuVar12 = pppppppuVar29;
      ppppppuVar19 = (uint ******)((long)ppppppuVar41 - lVar33);
      if (pppppppuVar29 != pppppppuVar27) {
        do {
          ppppppuVar11 = *pppppppuVar12;
          ppppppuVar19[1] = (uint *****)pppppppuVar12[1];
          *ppppppuVar19 = (uint *****)ppppppuVar11;
          ppppppuVar11 = pppppppuVar12[2];
          ppppppuVar19[3] = (uint *****)pppppppuVar12[3];
          ppppppuVar19[2] = (uint *****)ppppppuVar11;
          pppppppuVar12[2] = (uint ******)0x0;
          pppppppuVar12[3] = (uint ******)0x0;
          param_1 = (uint *******)pppppppuVar12[4];
          ppppppuVar19[5] = (uint *****)pppppppuVar12[5];
          ppppppuVar19[4] = (uint *****)param_1;
          pppppppuVar12[4] = (uint ******)0x0;
          pppppppuVar12[5] = (uint ******)0x0;
          pppppppuVar12 = pppppppuVar12 + 6;
          ppppppuVar19 = ppppppuVar19 + 6;
        } while (pppppppuVar12 != pppppppuVar27);
        do {
          func_0x00010a43bf08(pppppppuVar29 + 4);
          func_0x00010a43beb0(pppppppuVar29 + 2);
          pppppppuVar29 = pppppppuVar29 + 6;
        } while (pppppppuVar29 != pppppppuVar27);
        pppppppuVar29 = (uint *******)param_5[0x52];
      }
      param_5[0x52] = (uint ******)((long)ppppppuVar41 - lVar33);
      param_5[0x53] = ppppppuVar41 + uVar28 * 6;
      param_5[0x54] = (uint ******)(lVar24 + uVar25 * 0x30);
      if (pppppppuVar29 != (uint *******)0x0) {
        __ZdlPv(pppppppuVar29);
      }
      goto LAB_10a4114ec;
    }
  }
  FUN_10a435374();
LAB_10a412ea0:
  func_0x000109ffded8();
  FUN_10a0dc3c8(&uStack_110);
  func_0x00010a0d6180(&pppppuStack_100);
  func_0x00010a43bf08(&pppppppuStack_130);
  if (pppppppuStack_160 != (uint *******)0x0) {
    __ZdlPv();
  }
  if (pppppppuStack_f0 != (uint *******)0x0) {
    __ZdlPv();
  }
  pppppppuVar27 = pppppppuVar12;
  __Unwind_Resume(pppppppuVar12);
  pcStack_228 = FUN_10a41307c;
  uStack_250 = unaff_d9;
  pppppppuStack_248 = unaff_d8;
  pppppppuStack_240 = pppppppuVar29;
  pppppppuStack_238 = pppppppuVar12;
  puStack_230 = &stack0xfffffffffffffff0;
  FUN_10a40f184();
  FUN_10a410d50(&lStack_260,pppppppuVar27,param_6);
  if (lStack_260 == 0) {
    param_1 = (uint *******)0xbf800000;
  }
  else {
    FUN_10acdc738(*(undefined8 *)(lStack_260 + 200));
  }
  if (plStack_258 != (long *)0x0) {
    plVar3 = plStack_258 + 1;
    do {
      lVar33 = *plVar3;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar10) {
        *plVar3 = lVar33 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar33 == 0) {
      (**(code **)(*plStack_258 + 0x10))(plStack_258);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_258);
    }
  }
  return param_1;
}



/* Entry: 10a41307c; end: 10a41312b;  */

undefined8 FUN_10a41307c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a40f184();
  FUN_10a410d50(&lStack_40,param_2,param_3);
  if (lStack_40 == 0) {
    param_1 = 0xbf800000;
  }
  else {
    FUN_10acdc738(*(undefined8 *)(lStack_40 + 200));
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return param_1;
}



/* Entry: 10a41312c; end: 10a41329f;  */

void FUN_10a41312c(long param_1)

{
  code *pcVar1;
  undefined1 auStack_80 [24];
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(param_1 + 0x2b0) == *(long *)(param_1 + 0x2b8)) &&
     (0xe8 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18))) {
    pcStack_68 = FUN_10a43ca20;
    ppuStack_60 = &PTR_FUN_110bd95c8;
    lStack_58 = param_1;
    FUN_10a3e75d4(*(undefined8 *)(param_1 + 0x168),&pcStack_68,0);
    (*(code *)*ppuStack_60)(&ppuStack_60);
  }
  if ((*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0xe9) ||
     ((ulong)(*(long *)(param_1 + 0x220) - *(long *)(param_1 + 0x218) >> 4) <=
      (ulong)(*(long *)(param_1 + 0x2b8) - *(long *)(param_1 + 0x2b0) >> 6))) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
    ___stack_chk_fail();
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_80,&UNK_10f581e9b,*(long *)(param_1 + 0x168) + 0x168);
  FUN_10a012db0(&pcStack_68,auStack_80,&UNK_10f656908);
  FUN_10a0029c0(&pcStack_68);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41324c);
  (*pcVar1)();
}



/* Entry: 10a4132a0; end: 10a413313;  */

undefined8 * FUN_10a4132a0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a413314; end: 10a41331b;  */

/* WARNING: Removing unreachable block (ram,0x00010a41167c) */
/* WARNING: Type propagation algorithm not settling */

uint *******
FUN_10a413314(uint *******param_1,undefined8 param_2,undefined8 param_3,float param_4,long param_5,
             uint *******param_6)

{
  byte *pbVar1;
  long *plVar2;
  uint ******ppppppuVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  code *pcVar10;
  bool bVar11;
  long *plVar12;
  uint ******ppppppuVar13;
  uint *******pppppppuVar14;
  uint ****ppppuVar15;
  uint ******ppppppuVar16;
  uint *******pppppppuVar17;
  undefined1 uVar18;
  ulong uVar19;
  uint ******ppppppuVar20;
  uint *****pppppuVar21;
  uint *****pppppuVar22;
  uint **ppuVar23;
  undefined8 *puVar24;
  uint ****ppppuVar25;
  uint *****pppppuVar26;
  long lVar27;
  ulong uVar28;
  uint *******pppppppuVar29;
  uint *******pppppppuVar30;
  ulong uVar31;
  uint *******pppppppuVar32;
  long *plVar33;
  uint *****pppppuVar34;
  uint ***pppuVar35;
  uint *******pppppppuVar36;
  long lVar37;
  uint uVar38;
  uint ******ppppppuVar39;
  long *plVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  uint *******unaff_d8;
  ulong unaff_d9;
  uint ******ppppppuVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  long lStack_260;
  long *plStack_258;
  ulong uStack_250;
  uint *******pppppppuStack_248;
  uint *******pppppppuStack_240;
  uint *******pppppppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  uint *******pppppppuStack_220;
  uint *******pppppppuStack_218;
  uint *******pppppppuStack_210;
  uint uStack_204;
  uint *******pppppppuStack_200;
  uint ******ppppppuStack_1f8;
  uint uStack_1ec;
  uint ******ppppppuStack_1e8;
  ulong uStack_1e0;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint *******pppppppuStack_1c8;
  uint *******pppppppuStack_1c0;
  uint *******pppppppuStack_1b8;
  uint *******pppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  uint ****ppppuStack_1a0;
  uint ****ppppuStack_198;
  uint *****pppppuStack_190;
  uint *****pppppuStack_188;
  uint ******ppppppuStack_180;
  float fStack_178;
  uint ******ppppppuStack_170;
  undefined4 uStack_168;
  uint *******pppppppuStack_160;
  uint *******pppppppuStack_158;
  uint *******pppppppuStack_150;
  long lStack_148;
  float fStack_140;
  uint *******pppppppuStack_130;
  uint *******pppppppuStack_128;
  uint *******pppppppuStack_120;
  uint *******pppppppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint *****pppppuStack_100;
  uint ******ppppppuStack_f8;
  uint *******pppppppuStack_f0;
  uint *******pppppppuStack_e8;
  uint ******ppppppuStack_e0;
  uint ******ppppppuStack_d8;
  uint *******pppppppuStack_d0;
  uint *******pppppppuStack_c8;
  long lStack_b0;
  
  pppppppuVar17 = (uint *******)(param_5 + -0x68);
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a40f184();
  pppppppuVar14 = pppppppuVar17;
  FUN_10a41312c();
  uVar19 = *(long *)(param_5 + 0x218) - *(long *)(param_5 + 0x210) >> 4;
  pppppppuVar30 = *(uint ********)(param_5 + 0x230);
  pppppppuVar32 = *(uint ********)(param_5 + 0x228);
  lVar37 = (long)pppppppuVar30 - (long)pppppppuVar32;
  bVar11 = uVar19 < (ulong)((lVar37 >> 4) * -0x5555555555555555);
  uVar31 = uVar19 + (lVar37 >> 4) * 0x5555555555555555;
  if (bVar11 || uVar31 == 0) {
    if (bVar11) {
      param_6 = pppppppuVar32 + uVar19 * 6;
      FUN_10a435388((undefined8 *)(param_5 + 0x228));
    }
LAB_10a4114ec:
    ppppppuVar20 = *(uint *******)(param_5 + 0x210);
    pppppppuStack_1c8 = pppppppuVar17;
    if (*(uint *******)(param_5 + 0x218) != ppppppuVar20) {
      uVar31 = 0;
      plVar2 = (long *)(param_5 + 0x1a0);
      unaff_d8 = (uint *******)0x0;
      unaff_d9 = 0x3f800000;
      do {
        uVar19 = ((long)pppppppuStack_1c8[0x53] - (long)pppppppuStack_1c8[0x52] >> 4) *
                 -0x5555555555555555;
        if (uVar19 < uVar31 || uVar19 - uVar31 == 0) goto LAB_10a412e94;
        ppppppuVar20 = ppppppuVar20 + uVar31 * 2;
        ppppppuVar46 = pppppppuStack_1c8[0x52] + uVar31 * 6;
        *(byte *)ppppppuVar46 = 0;
        param_6 = (uint *******)*ppppppuVar20;
        FUN_10a4132a0(ppppppuVar46 + 2,param_6,ppppppuVar20[1]);
        pppppuVar21 = *ppppppuVar20;
        ppppuVar25 = pppppuVar21[0x19];
        if (*(char *)(ppppuVar25 + 2) == '\x01') {
LAB_10a41156c:
          pbVar1 = (byte *)((long)ppppppuVar46 + 0xc);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0x80;
          pbVar1[3] = 0xbf;
        }
        else if (((ulong)pppppuVar21[0x14] & 1) == 0) {
          fVar41 = *(float *)(pppppuVar21 + 0x10);
          param_1 = (uint *******)(ulong)(uint)fVar41;
          *(float *)((long)ppppppuVar46 + 4) = fVar41;
          if ((0.0 < fVar41) && (*(char *)(ppppuVar25 + 4) == '\x01')) {
            *(byte *)ppppppuVar46 = 1;
            if (*(char *)((long)pppppuVar21 + 0x7f) < '\0') {
              param_6 = (uint *******)pppppuVar21[0xd];
              func_0x000107c3192c(&pppppppuStack_f0,param_6,pppppuVar21[0xe]);
            }
            else {
              pppppppuStack_e8 = (uint *******)pppppuVar21[0xe];
              pppppppuStack_f0 = (uint *******)pppppuVar21[0xd];
              ppppppuStack_e0 = (uint ******)pppppuVar21[0xf];
            }
            plVar40 = (long *)*plVar2;
            plVar33 = plVar2;
            if (plVar40 == (long *)0x0) {
LAB_10a411630:
              pppppuVar21 = (uint *****)0x0;
              pppppuVar26 = (uint *****)0x0;
            }
            else {
              do {
                plVar12 = plVar40 + 4;
                param_6 = (uint *******)&pppppppuStack_f0;
                FUN_10a003e3c();
                if (-1 < (char)plVar12) {
                  plVar33 = plVar40;
                }
                plVar40 = *(long **)((long)plVar40 + ((ulong)plVar12 >> 4 & 8));
              } while (plVar40 != (long *)0x0);
              if (plVar33 == plVar2) goto LAB_10a411630;
              uVar38 = 0;
              param_6 = (uint *******)(plVar33 + 4);
              FUN_10a003e3c();
              if ((uVar38 >> 7 & 1) != 0) goto LAB_10a411630;
              pppppuVar21 = (uint *****)plVar33[7];
              pppppuVar26 = (uint *****)plVar33[8];
              if (pppppuVar26 != (uint *****)0x0) {
                pppppuVar22 = pppppuVar26 + 1;
                do {
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pppppuVar22,0x10);
                  if (bVar11) {
                    *pppppuVar22 = (uint ****)((long)*pppppuVar22 + 1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
            }
            pppppuVar22 = ppppppuVar46[5];
            ppppppuVar46[4] = pppppuVar21;
            ppppppuVar46[5] = pppppuVar26;
            if (pppppuVar22 != (uint *****)0x0) {
              pppppuVar21 = pppppuVar22 + 1;
              do {
                ppppuVar25 = *pppppuVar21;
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(pppppuVar21,0x10);
                if (bVar11) {
                  *pppppuVar21 = (uint ****)((long)ppppuVar25 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (ppppuVar25 == (uint ****)0x0) {
                (*(code *)(*pppppuVar22)[2])(pppppuVar22);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar22);
              }
            }
            pppppuVar21 = *ppppppuVar20;
            fVar41 = *(float *)((long)pppppuVar21 + 0x8c);
            fVar50 = fVar41 - *(float *)(pppppuVar21 + 0x11);
            if (*(uint *)((long)pppppuVar21 + 0xac) == 0) {
              fVar52 = *(float *)((long)pppppuVar21 + 0x94);
            }
            else {
              fVar41 = 1.0 / *(float *)(pppppuVar21 + 0x12);
              fVar50 = fVar50 * fVar41;
              fVar52 = *(float *)((long)pppppuVar21 + 0x94) * fVar41;
            }
            param_1 = (uint *******)(ulong)(uint)fVar41;
            if (fVar50 < fVar52) {
              FUN_10a00946c(&UNK_10f656819);
              goto LAB_10a412e94;
            }
            FUN_10acdc738(pppppuVar21[0x19]);
            pppppuVar21 = *ppppppuVar20;
            fVar47 = *(float *)(pppppuVar21 + 0x11);
            uVar38 = *(uint *)((long)pppppuVar21 + 0xac);
            fVar41 = fVar47;
            if (uVar38 != 0) {
              fVar41 = fVar47 * (1.0 / *(float *)(pppppuVar21 + 0x12));
            }
            if (((ulong)*ppppppuVar46 & 1) == 0) goto LAB_10a41156c;
            fVar45 = 0.0;
            if (0.0 <= SUB84(param_1,0)) {
              fVar45 = SUB84(param_1,0);
            }
            fVar48 = fVar50;
            if (fVar45 <= fVar50) {
              fVar48 = fVar45;
            }
            fVar52 = fVar52 + fVar48;
            param_4 = fVar52 - fVar50;
            fVar45 = param_4;
            if (fVar52 <= fVar50) {
              fVar45 = fVar52;
            }
            param_1 = (uint *******)(ulong)*(uint *)(ppppppuVar46 + 1);
            *(float *)(ppppppuVar46 + 1) = fVar45 + fVar41;
            ppppuVar25 = pppppuVar21[0x19];
            if (*(char *)((long)ppppuVar25 + 0x11) == '\x01') {
              pbVar1 = (byte *)((long)ppppppuVar46 + 0xc);
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0x80;
              pbVar1[3] = 0xbf;
LAB_10a411738:
              if (uVar38 != 0) {
                fVar47 = fVar47 * (1.0 / *(float *)(pppppuVar21 + 0x12));
              }
              if (((ulong)pppppuVar21[0x13] & 1) == 0) {
                param_1 = (uint *******)(ulong)(uint)(*(float *)(pppppuVar21 + 0x1a) + fVar47);
              }
              else {
                fVar41 = (fVar47 + *(float *)((long)ppppuVar25 + 0x34)) -
                         *(float *)(pppppuVar21 + 0x1a);
                if (fVar41 <= 0.0) {
                  fVar41 = 0.0;
                }
                param_1 = (uint *******)(ulong)(uint)fVar41;
              }
            }
            else if (*(float *)((long)ppppppuVar46 + 0xc) < 0.0) goto LAB_10a411738;
            *(int *)((long)ppppppuVar46 + 0xc) = (int)param_1;
          }
        }
        uVar31 = uVar31 + 1;
        ppppppuVar20 = pppppppuStack_1c8[0x4f];
      } while (uVar31 < (ulong)((long)pppppppuStack_1c8[0x50] - (long)ppppppuVar20 >> 4));
    }
    ppppppuVar20 = pppppppuStack_1c8[0x43];
    pppppppuVar32 = pppppppuStack_1c8;
    if (pppppppuStack_1c8[0x44] != ppppppuVar20) {
      uVar31 = 0;
      pppppppuStack_210 = pppppppuStack_1c8 + 0x69;
      pppppppuStack_218 = pppppppuStack_1c8 + 0x61;
      pppppppuStack_220 = pppppppuStack_1c8 + 0x59;
      pppppppuStack_1b8 = (uint *******)&pppppppuStack_150;
      param_1 = (uint *******)0x0;
      ppppppuStack_1f8 = (uint ******)0x3f80000000000000;
      pppppppuStack_200 = (uint *******)0x0;
      ppppppuVar46 = (uint ******)NEON_fmov(0x3f800000,4);
      do {
        ppppppuVar13 = (uint ******)(ppppppuVar20 + uVar31 * 2)[1];
        if ((ppppppuVar13 != (uint ******)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_f8 = ppppppuVar13,
           ppppppuVar13 != (uint ******)0x0)) {
          pppppuVar21 = ppppppuVar20[uVar31 * 2];
          pppppuStack_100 = pppppuVar21;
          if ((pppppuVar21 != (uint *****)0x0) &&
             ((*(code *)(*pppppuVar21)[0xc])(), ((ulong)pppppuVar21 & 1) != 0)) {
            ppppppuStack_170 = (uint ******)0x0;
            uStack_168 = 0;
            uStack_108 = ppppppuStack_1f8;
            uStack_110 = pppppppuStack_200;
            ppppppuStack_180 = (uint ******)0x0;
            fStack_178 = 0.0;
            param_1 = pppppppuStack_200;
            if (0xe8 < (int)*(uint *)(pppppppuVar32[0x2e][0x144] + 3)) {
              if ((ulong)((long)pppppppuVar32[0x57] - (long)pppppppuVar32[0x56] >> 6) <= uVar31)
              goto LAB_10a412e94;
              ppppppuVar20 = pppppppuVar32[0x56] + uVar31 * 8;
              uStack_168 = *(undefined4 *)(ppppppuVar20 + 7);
              ppppppuStack_170 = (uint ******)ppppppuVar20[6];
              fVar41 = *(float *)ppppppuVar20;
              fVar45 = *(float *)((long)ppppppuVar20 + 0x14);
              fVar47 = *(float *)(ppppppuVar20 + 5);
              fVar48 = (fVar41 - fVar45) - fVar47;
              fVar50 = (fVar45 - fVar41) - fVar47;
              fVar52 = (fVar47 - fVar41) - fVar45;
              fVar47 = fVar41 + fVar45 + fVar47;
              fVar41 = fVar48;
              if (fVar48 <= fVar47) {
                fVar41 = fVar47;
              }
              bVar8 = 2;
              if (fVar50 <= fVar41) {
                fVar50 = fVar41;
                bVar8 = fVar47 < fVar48;
              }
              bVar9 = 3;
              if (fVar52 <= fVar50) {
                fVar52 = fVar50;
                bVar9 = bVar8;
              }
              fVar42 = SQRT(fVar52 + 1.0) * 0.5;
              fVar48 = 0.25 / fVar42;
              fVar45 = (*(float *)(ppppppuVar20 + 4) - *(float *)(ppppppuVar20 + 1)) * fVar48;
              fVar49 = (*(float *)((long)ppppppuVar20 + 4) + *(float *)(ppppppuVar20 + 2)) * fVar48;
              fVar51 = (*(float *)(ppppppuVar20 + 3) + *(float *)((long)ppppppuVar20 + 0x24)) *
                       fVar48;
              fVar47 = (*(float *)((long)ppppppuVar20 + 4) - *(float *)(ppppppuVar20 + 2)) * fVar48;
              fVar43 = (*(float *)(ppppppuVar20 + 1) + *(float *)(ppppppuVar20 + 4)) * fVar48;
              fVar44 = fVar45;
              fVar41 = fVar51;
              fVar50 = fVar42;
              fVar52 = fVar49;
              if (bVar9 != 2) {
                fVar44 = fVar47;
                fVar41 = fVar42;
                fVar50 = fVar51;
                fVar52 = fVar43;
              }
              fVar48 = (*(float *)(ppppppuVar20 + 3) - *(float *)((long)ppppppuVar20 + 0x24)) *
                       fVar48;
              fVar51 = fVar42;
              if (bVar9 != 0) {
                fVar51 = fVar48;
                fVar47 = fVar43;
                fVar45 = fVar49;
                fVar48 = fVar42;
              }
              if (bVar9 < 2) {
                fVar44 = fVar51;
                fVar41 = fVar47;
                fVar50 = fVar45;
                fVar52 = fVar48;
              }
              uStack_110 = (uint *******)CONCAT44(fVar50,fVar52);
              uStack_108 = (uint ******)CONCAT44(fVar44,fVar41);
              fStack_178 = SQRT(*(float *)(ppppppuVar20 + 4) * *(float *)(ppppppuVar20 + 4) +
                                *(float *)((long)ppppppuVar20 + 0x24) *
                                *(float *)((long)ppppppuVar20 + 0x24) +
                                *(float *)(ppppppuVar20 + 5) * *(float *)(ppppppuVar20 + 5));
              param_1 = (uint *******)(ulong)(uint)fStack_178;
              param_4 = SUB84(*ppppppuVar20,0);
              fVar50 = SUB84(ppppppuVar20[2],0);
              param_4 = param_4 * param_4;
              fVar41 = (float)((ulong)*ppppppuVar20 >> 0x20);
              fVar52 = (float)((ulong)ppppppuVar20[2] >> 0x20);
              ppppppuStack_180 =
                   (uint ******)
                   CONCAT44(SQRT(fVar50 * fVar50 + fVar52 * fVar52 +
                                 *(float *)(ppppppuVar20 + 3) * *(float *)(ppppppuVar20 + 3)),
                            SQRT(param_4 + fVar41 * fVar41 +
                                 *(float *)(ppppppuVar20 + 1) * *(float *)(ppppppuVar20 + 1)));
            }
            if (*(int *)((long)pppppppuVar32 + 500) == 1) {
              fStack_178 = 1.0;
              ppppppuStack_180 = ppppppuVar46;
            }
            ppppppuVar20 = pppppppuVar32[0x52];
            ppppppuVar13 = pppppppuVar32[0x53];
            if (ppppppuVar20 != ppppppuVar13) {
              uStack_1d4 = 0;
              uStack_1d0 = 0;
              uStack_1ec = 0;
              uVar38 = 0;
              uStack_204 = 1;
              ppppppuStack_1e8 = ppppppuVar13;
              uStack_1e0 = uVar31;
              do {
                if (*(char *)ppppppuVar20 == '\x01') {
                  unaff_d8 = (uint *******)(ulong)*(uint *)(ppppppuVar20 + 1);
                  pppppuStack_190 = ppppppuVar20[4];
                  pppppuVar21 = ppppppuVar20[5];
                  if (pppppuVar21 != (uint *****)0x0) {
                    pppppuVar26 = pppppuVar21 + 1;
                    do {
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppuVar26,0x10);
                      if (bVar11) {
                        *pppppuVar26 = (uint ****)((long)*pppppuVar26 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  pppppuStack_188 = pppppuVar21;
                  if (pppppuStack_190 != (uint *****)0x0) {
                    if (ppppppuStack_f8 != (uint ******)0x0) {
                      ppppppuVar39 = ppppppuStack_f8 + 2;
                      do {
                        cVar6 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar39,0x10);
                        if (bVar11) {
                          *ppppppuVar39 = (uint *****)((long)*ppppppuVar39 + 1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    pppppuVar34 = pppppuStack_190 + 1;
                    pppppuVar22 = (uint *****)*pppppuVar34;
                    pppppuVar26 = pppppuVar34;
                    if (pppppuVar22 == (uint *****)0x0) {
LAB_10a411a94:
                      pppppuVar26 = pppppuVar34;
                    }
                    else {
                      do {
                        lVar37 = 8;
                        if (ppppppuStack_f8 <= pppppuVar22[5]) {
                          lVar37 = 0;
                          pppppuVar26 = pppppuVar22;
                        }
                        pppppuVar22 = *(uint ******)((long)pppppuVar22 + lVar37);
                      } while (pppppuVar22 != (uint *****)0x0);
                      if ((pppppuVar26 == pppppuVar34) || (ppppppuStack_f8 < pppppuVar26[5]))
                      goto LAB_10a411a94;
                    }
                    if (ppppppuStack_f8 != (uint ******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    if (pppppuVar26 != pppppuVar34) {
                      ppppuStack_1a0 = (uint ****)0x0;
                      ppppuStack_198 = (uint ****)0x0;
                      ppppuVar25 = pppppuVar26[7];
                      if (ppppuVar25 != (uint ****)0x0) {
                        __ZNSt3__119__shared_weak_count4lockEv();
                        pppppuVar21 = pppppuStack_188;
                        ppppuStack_198 = ppppuVar25;
                        if (ppppuVar25 == (uint ****)0x0) goto LAB_10a412408;
                        ppppuVar25 = pppppuVar26[6];
                        ppppuStack_1a0 = ppppuVar25;
                        if (ppppuVar25 != (uint ****)0x0) {
                          pppppppuVar32[0x69] = (uint ******)0x10a43caf4;
                          (*(code *)*pppppppuVar32[0x6a])(pppppppuVar32 + 0x6a);
                          pppppppuVar32[0x6a] = (uint ******)&PTR_DAT_110bd95e0;
                          pppppppuVar32[0x6b] = (uint ******)FUN_10a414184;
                          pppppppuVar32[0x59] = (uint ******)0x10a43cb18;
                          (*(code *)*pppppppuVar32[0x5a])(pppppppuVar32 + 0x5a);
                          pppppppuVar32[0x5a] = (uint ******)&PTR_DAT_110bd95f8;
                          pppppppuVar32[0x5b] = (uint ******)0x10a414198;
                          pppppppuVar32[0x61] = (uint ******)0x10a43cb3c;
                          (*(code *)*pppppppuVar32[0x62])(pppppppuVar32 + 0x62);
                          pppppppuVar32[0x62] = (uint ******)&PTR_DAT_110bd9610;
                          pppppppuVar32[99] = (uint ******)0x10a4141ac;
                          if (*(int *)((long)pppppppuVar32 + 500) == 1) {
                            if (*(uint *)((long)ppppppuVar20[2] + 0xa4) == 1) {
                              pppppppuVar32[0x69] = (uint ******)0x10a43caf4;
                              (*(code *)*pppppppuVar32[0x6a])(pppppppuVar32 + 0x6a);
                              pppppppuVar32[0x6a] = (uint ******)&PTR_DAT_110bd95e0;
                              pppppppuVar32[0x6b] = (uint ******)FUN_10a41480c;
                              pppppppuVar32[0x61] = (uint ******)0x10a43cb3c;
                              (*(code *)*pppppppuVar32[0x62])(pppppppuVar32 + 0x62);
                              pppppppuVar32[0x62] = (uint ******)&PTR_DAT_110bd9610;
                              pppppppuVar32[99] = (uint ******)0x10a41487c;
                              if (*(uint *)(ppppppuVar20[2] + 0x15) == 0) {
                                pcVar10 = FUN_10a414a14;
                              }
                              else {
                                pcVar10 = (code *)0x10a4149a4;
                                if (*(uint *)(ppppppuVar20[2] + 0x15) != 1) goto LAB_10a411d1c;
                              }
                              goto LAB_10a411cf0;
                            }
                            if (*(uint *)((long)ppppppuVar20[2] + 0xa4) == 2) {
                              uVar5 = *(uint *)(pppppppuVar32[0x2e][0x144] + 3);
                              pppppppuVar32[0x69] = (uint ******)0x10a43caf4;
                              (*(code *)*pppppppuVar32[0x6a])(pppppppuVar32 + 0x6a);
                              pppppppuVar32[0x6a] = (uint ******)&PTR_DAT_110bd95e0;
                              ppppppuVar13 = (uint ******)FUN_10a4144d0;
                              if (0xe8 < (int)uVar5) {
                                ppppppuVar13 = (uint ******)FUN_10a4141c0;
                              }
                              ppppppuVar39 = (uint ******)FUN_10a41452c;
                              if (0xe8 < (int)uVar5) {
                                ppppppuVar39 = (uint ******)FUN_10a414260;
                              }
                              pppppppuVar32[0x6b] = ppppppuVar13;
                              pppppppuVar32[0x61] = (uint ******)0x10a43cb3c;
                              (*(code *)*pppppppuVar32[0x62])(pppppppuVar32 + 0x62);
                              pppppppuVar32[0x62] = (uint ******)&PTR_DAT_110bd9610;
                              pppppppuVar32[99] = ppppppuVar39;
                              if (*(uint *)(ppppppuVar20[2] + 0x15) == 0) {
                                pcVar10 = FUN_10a414780;
                                goto LAB_10a411cf0;
                              }
                              if (*(uint *)(ppppppuVar20[2] + 0x15) == 1) goto LAB_10a411ce8;
                            }
                          }
                          else if (*(int *)((long)pppppppuVar32 + 500) == 0) {
                            uVar5 = *(uint *)(pppppppuVar32[0x2e][0x144] + 3);
                            pppppppuVar32[0x69] = (uint ******)0x10a43caf4;
                            (*(code *)*pppppppuVar32[0x6a])(pppppppuVar32 + 0x6a);
                            pppppppuVar32[0x6a] = (uint ******)&PTR_DAT_110bd95e0;
                            ppppppuVar13 = (uint ******)FUN_10a4144d0;
                            if (0xe8 < (int)uVar5) {
                              ppppppuVar13 = (uint ******)FUN_10a4141c0;
                            }
                            ppppppuVar39 = (uint ******)FUN_10a41452c;
                            if (0xe8 < (int)uVar5) {
                              ppppppuVar39 = (uint ******)FUN_10a414260;
                            }
                            pppppppuVar32[0x6b] = ppppppuVar13;
                            pppppppuVar32[0x61] = (uint ******)0x10a43cb3c;
                            (*(code *)*pppppppuVar32[0x62])(pppppppuVar32 + 0x62);
                            pppppppuVar32[0x62] = (uint ******)&PTR_DAT_110bd9610;
                            pppppppuVar32[99] = ppppppuVar39;
                            if (*(uint *)((long)ppppppuVar20[2] + 0xa4) == 1) {
LAB_10a411ce8:
                              pcVar10 = FUN_10a4146c0;
                            }
                            else {
                              if (*(uint *)((long)ppppppuVar20[2] + 0xa4) != 2) goto LAB_10a411d1c;
                              pcVar10 = (code *)0x10a41471c;
                            }
LAB_10a411cf0:
                            pppppppuVar32[0x59] = (uint ******)0x10a43cb18;
                            (*(code *)*pppppppuVar32[0x5a])(pppppppuVar32 + 0x5a);
                            pppppppuVar32[0x5a] = (uint ******)&PTR_DAT_110bd95f8;
                            pppppppuVar32[0x5b] = (uint ******)pcVar10;
                          }
LAB_10a411d1c:
                          FUN_10aa78858(&pppppppuStack_f0,ppppuVar25);
                          pppppppuVar30 = pppppppuStack_f0 + 0x1d;
                          param_1 = unaff_d8;
                          uStack_1cc = uVar38;
                          FUN_10aa75600(unaff_d8,*(undefined4 *)((long)ppppppuVar20 + 0xc));
                          pppppppuVar14 = pppppppuStack_e8;
                          if (pppppppuStack_e8 != (uint *******)0x0) {
                            pppppppuVar17 = pppppppuStack_e8 + 1;
                            do {
                              ppppppuVar13 = *pppppppuVar17;
                              cVar6 = '\x01';
                              bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
                              if (bVar11) {
                                *pppppppuVar17 = (uint ******)((long)ppppppuVar13 + -1);
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                            if (ppppppuVar13 == (uint ******)0x0) {
                              (*(code *)(*pppppppuVar14)[2])(pppppppuVar14);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar14);
                            }
                          }
                          if (param_6 != (uint *******)0x0) {
                            pppppppuStack_1c0 = pppppppuVar30 + (long)param_6 * 6;
                            do {
                              ppppuVar25 = ppppppuVar20[2][8];
                              if (ppppuVar25[6] != (uint ***)0x0) {
                                pppppppuVar14 = (uint *******)0x48;
                                __Znwm();
                                pppppppuVar14[1] = (uint ******)0x0;
                                pppppppuVar14[2] = (uint ******)0x0;
                                *pppppppuVar14 = (uint ******)&PTR_FUN_110bd9570;
                                if (*(char *)((long)pppppppuVar30 + 0x2f) < '\0') {
                                  func_0x000107c3192c(&pppppppuStack_f0,pppppppuVar30[3],
                                                      pppppppuVar30[4]);
                                }
                                else {
                                  pppppppuStack_e8 = (uint *******)pppppppuVar30[4];
                                  pppppppuStack_f0 = (uint *******)pppppppuVar30[3];
                                  ppppppuStack_e0 = pppppppuVar30[5];
                                }
                                pppppppuStack_1b0 = pppppppuVar14 + 3;
                                *pppppppuStack_1b0 = (uint ******)&PTR_FUN_110c3de58;
                                pppppppuVar14[4] = (uint ******)0x0;
                                pppppppuVar14[5] = (uint ******)0x0;
                                pppppppuVar14[7] = (uint ******)pppppppuStack_e8;
                                pppppppuVar14[6] = (uint ******)pppppppuStack_f0;
                                pppppppuVar14[8] = ppppppuStack_e0;
                                pppppppuStack_158 = (uint *******)0x0;
                                pppppppuStack_160 = (uint *******)0x0;
                                lStack_148 = 0;
                                pppppppuStack_150 = (uint *******)0x0;
                                fStack_140 = *(float *)(ppppuVar25 + 7);
                                param_1 = (uint *******)(ulong)(uint)fStack_140;
                                pppppppuStack_1a8 = pppppppuVar14;
                                FUN_10a43c3b4(&pppppppuStack_160,ppppuVar25[4]);
                                pppppppuVar17 = pppppppuStack_158;
                                pppppppuVar36 = pppppppuStack_150;
                                for (pppuVar35 = ppppuVar25[5]; pppppppuStack_158 = pppppppuVar17,
                                    pppppppuStack_150 = pppppppuVar36, pppuVar35 != (uint ***)0x0;
                                    pppuVar35 = (uint ***)*pppuVar35) {
                                  pppppuVar21 = (uint *****)pppuVar35[2];
                                  uVar31 = ((ulong)(uint)((int)pppppuVar21 << 3) + 8 ^
                                           (ulong)pppppuVar21 >> 0x20) * -0x622015f714c7d297;
                                  uVar31 = ((ulong)pppppuVar21 >> 0x20 ^ uVar31 >> 0x2f ^ uVar31) *
                                           -0x622015f714c7d297;
                                  pppppppuVar36 =
                                       (uint *******)
                                       ((uVar31 ^ uVar31 >> 0x2f) * -0x622015f714c7d297);
                                  if (pppppppuVar17 != (uint *******)0x0) {
                                    uVar31 = (long)pppppppuVar17 - 1;
                                    if (((ulong)pppppppuVar17 & uVar31) == 0) {
                                      pppppppuVar32 = (uint *******)((ulong)pppppppuVar36 & uVar31);
                                    }
                                    else {
                                      pppppppuVar32 = pppppppuVar36;
                                      if (pppppppuVar17 <= pppppppuVar36) {
                                        uVar19 = 0;
                                        if (pppppppuVar17 != (uint *******)0x0) {
                                          uVar19 = (ulong)pppppppuVar36 / (ulong)pppppppuVar17;
                                        }
                                        pppppppuVar32 =
                                             (uint *******)
                                             ((long)pppppppuVar36 - uVar19 * (long)pppppppuVar17);
                                      }
                                    }
                                    ppppppuVar13 = pppppppuStack_160[(long)pppppppuVar32];
                                    if (ppppppuVar13 != (uint ******)0x0) {
                                      do {
                                        while( true ) {
                                          ppppppuVar13 = (uint ******)*ppppppuVar13;
                                          if (ppppppuVar13 == (uint ******)0x0) goto LAB_10a411ecc;
                                          pppppppuVar29 = (uint *******)ppppppuVar13[1];
                                          if (pppppppuVar29 != pppppppuVar36) break;
                                          if (ppppppuVar13[2] == pppppuVar21) goto LAB_10a412050;
                                        }
                                        if (((ulong)pppppppuVar17 & uVar31) == 0) {
                                          pppppppuVar29 =
                                               (uint *******)((ulong)pppppppuVar29 & uVar31);
                                        }
                                        else if (pppppppuVar17 <= pppppppuVar29) {
                                          uVar19 = 0;
                                          if (pppppppuVar17 != (uint *******)0x0) {
                                            uVar19 = (ulong)pppppppuVar29 / (ulong)pppppppuVar17;
                                          }
                                          pppppppuVar29 =
                                               (uint *******)
                                               ((long)pppppppuVar29 - uVar19 * (long)pppppppuVar17);
                                        }
                                      } while (pppppppuVar29 == pppppppuVar32);
                                    }
                                  }
LAB_10a411ecc:
                                  pppppppuVar29 = (uint *******)0x68;
                                  __Znwm();
                                  pppppppuStack_e8 = (uint *******)&pppppppuStack_160;
                                  ppppppuStack_e0 = (uint ******)0x0;
                                  *pppppppuVar29 = (uint ******)0x0;
                                  pppppppuVar29[1] = (uint ******)pppppppuVar36;
                                  ppuVar23 = pppuVar35[3];
                                  ppppppuVar13 = (uint ******)pppuVar35[2];
                                  pppppppuVar29[3] = (uint ******)pppuVar35[3];
                                  pppppppuVar29[2] = ppppppuVar13;
                                  if (ppuVar23 != (uint **)0x0) {
                                    ppuVar23 = ppuVar23 + 1;
                                    do {
                                      cVar6 = '\x01';
                                      bVar11 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
                                      if (bVar11) {
                                        *ppuVar23 = (uint *)((long)*ppuVar23 + 1);
                                        cVar6 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar6 != '\0');
                                  }
                                  pppppppuStack_130 = pppppppuVar29 + 4;
                                  *(undefined1 *)(pppppppuVar29 + 0xc) = 3;
                                  pppppppuStack_f0 = pppppppuVar29;
                                  if (*(char *)(pppuVar35 + 0xc) == '\0') {
                                    uVar18 = 0;
                                  }
                                  else {
                                    FUN_10a005398(&pppppppuStack_130,pppuVar35 + 4);
                                    uVar18 = *(undefined1 *)(pppuVar35 + 0xc);
                                  }
                                  *(undefined1 *)(pppppppuVar29 + 0xc) = uVar18;
                                  ppppppuStack_e0 = (uint ******)CONCAT71(ppppppuStack_e0._1_7_,1);
                                  fVar41 = (float)(lStack_148 + 1);
                                  param_1 = (uint *******)(ulong)(uint)fVar41;
                                  if ((pppppppuVar17 == (uint *******)0x0) ||
                                     (fStack_140 * (float)pppppppuVar17 < fVar41)) {
                                    uVar31 = 1;
                                    if ((uint *******)0x2 < pppppppuVar17) {
                                      uVar31 = (ulong)(((ulong)pppppppuVar17 &
                                                       (long)pppppppuVar17 - 1U) != 0);
                                    }
                                    uVar31 = uVar31 | (long)pppppppuVar17 << 1;
                                    param_1 = (uint *******)(ulong)(uint)(fVar41 / fStack_140);
                                    uVar19 = (ulong)(fVar41 / fStack_140);
                                    if (uVar31 <= uVar19) {
                                      uVar31 = uVar19;
                                    }
                                    FUN_10a43c3b4(&pppppppuStack_160,uVar31);
                                    pppppppuVar17 = pppppppuStack_158;
                                    if (((ulong)pppppppuStack_158 & (long)pppppppuStack_158 - 1U) ==
                                        0) {
                                      pppppppuVar32 =
                                           (uint *******)
                                           ((long)pppppppuStack_158 - 1U & (ulong)pppppppuVar36);
                                    }
                                    else {
                                      pppppppuVar32 = pppppppuVar36;
                                      if (pppppppuStack_158 <= pppppppuVar36) {
                                        uVar31 = 0;
                                        if (pppppppuStack_158 != (uint *******)0x0) {
                                          uVar31 = (ulong)pppppppuVar36 / (ulong)pppppppuStack_158;
                                        }
                                        pppppppuVar32 =
                                             (uint *******)
                                             ((long)pppppppuVar36 - uVar31 * (long)pppppppuStack_158
                                             );
                                      }
                                    }
                                  }
                                  ppppppuVar13 = pppppppuStack_160[(long)pppppppuVar32];
                                  if (ppppppuVar13 == (uint ******)0x0) {
                                    *pppppppuStack_f0 = (uint ******)pppppppuStack_150;
                                    pppppppuStack_150 = pppppppuStack_f0;
                                    pppppppuStack_160[(long)pppppppuVar32] =
                                         (uint ******)pppppppuStack_1b8;
                                    if (*pppppppuStack_f0 != (uint ******)0x0) {
                                      pppppppuVar36 = (uint *******)(*pppppppuStack_f0)[1];
                                      if (((ulong)pppppppuVar17 & (long)pppppppuVar17 - 1U) == 0) {
                                        pppppppuVar36 =
                                             (uint *******)
                                             ((ulong)pppppppuVar36 & (long)pppppppuVar17 - 1U);
                                      }
                                      else if (pppppppuVar17 <= pppppppuVar36) {
                                        uVar31 = 0;
                                        if (pppppppuVar17 != (uint *******)0x0) {
                                          uVar31 = (ulong)pppppppuVar36 / (ulong)pppppppuVar17;
                                        }
                                        pppppppuVar36 =
                                             (uint *******)
                                             ((long)pppppppuVar36 - uVar31 * (long)pppppppuVar17);
                                      }
                                      pppppppuStack_160[(long)pppppppuVar36] =
                                           (uint ******)pppppppuStack_f0;
                                    }
                                  }
                                  else {
                                    *pppppppuStack_f0 = (uint ******)*ppppppuVar13;
                                    *ppppppuVar13 = (uint *****)pppppppuStack_f0;
                                  }
                                  lStack_148 = lStack_148 + 1;
LAB_10a412050:
                                  pppppppuVar17 = pppppppuStack_158;
                                  pppppppuVar36 = pppppppuStack_150;
                                }
                                if (pppppppuVar36 == (uint *******)0x0) {
                                  func_0x00010a43c62c(&pppppppuStack_160);
                                }
                                else {
                                  do {
                                    ppppuVar15 = ppppuVar25 + 3;
                                    pppppppuVar14 = pppppppuVar36 + 2;
                                    FUN_10a43c6cc();
                                    if (ppppuVar15 != (uint ****)0x0) {
                                      if (*(char *)(pppppppuVar36 + 0xc) == '\x01') {
                                        ppppppuVar13 = pppppppuVar36[4];
                                        pppppppuStack_e8 = pppppppuStack_1a8;
                                        pppppppuStack_f0 = pppppppuStack_1b0;
                                        if (pppppppuStack_1a8 != (uint *******)0x0) {
                                          pppppppuVar14 = pppppppuStack_1a8 + 1;
                                          do {
                                            cVar6 = '\x01';
                                            bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
                                            if (bVar11) {
                                              *pppppppuVar14 =
                                                   (uint ******)((long)*pppppppuVar14 + 1);
                                              cVar6 = ExclusiveMonitorsStatus();
                                            }
                                          } while (cVar6 != '\0');
                                        }
                                        param_1 = pppppppuStack_1b0;
                                        (*(code *)ppppppuVar13)(&pppppppuStack_f0,pppppppuVar36 + 4)
                                        ;
                                        if (pppppppuStack_e8 != (uint *******)0x0) {
                                          pppppppuVar14 = pppppppuStack_e8 + 1;
                                          do {
                                            ppppppuVar13 = *pppppppuVar14;
                                            cVar6 = '\x01';
                                            bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
                                            if (bVar11) {
                                              *pppppppuVar14 =
                                                   (uint ******)((long)ppppppuVar13 + -1);
                                              cVar6 = ExclusiveMonitorsStatus();
                                            }
                                            pppppppuVar17 = pppppppuStack_e8;
                                          } while (cVar6 != '\0');
LAB_10a412114:
                                          if (ppppppuVar13 == (uint ******)0x0) {
                                            (*(code *)(*pppppppuVar17)[2])(pppppppuVar17);
                                            __ZNSt3__119__shared_weak_count14__release_weakEv
                                                      (pppppppuVar17);
                                          }
                                        }
                                      }
                                      else if (*(char *)(pppppppuVar36 + 0xc) == '\x02') {
                                        pppppppuVar17 = pppppppuVar36 + 4;
                                        FUN_10a688b40();
                                        pppppppuVar29 = pppppppuStack_1a8;
                                        if (pppppppuVar17 == (uint *******)0x0) {
                                          if (pppppppuVar14 != (uint *******)0x0) {
                                            ppppppuStack_e0 = pppppppuVar36[4];
                                            ppppppuStack_d8 = pppppppuVar36[5];
                                            if (ppppppuStack_d8 != (uint ******)0x0) {
                                              ppppppuVar13 = ppppppuStack_d8 + 1;
                                              do {
                                                cVar6 = '\x01';
                                                bVar11 = (bool)ExclusiveMonitorPass
                                                                         (ppppppuVar13,0x10);
                                                if (bVar11) {
                                                  *ppppppuVar13 =
                                                       (uint *****)((long)*ppppppuVar13 + 1);
                                                  cVar6 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar6 != '\0');
                                            }
                                            pppppppuStack_120 = pppppppuStack_1b0;
                                            pppppppuStack_118 = pppppppuStack_1a8;
                                            if (pppppppuStack_1a8 == (uint *******)0x0) {
                                              pppppppuStack_c8 = (uint *******)0x0;
                                            }
                                            else {
                                              pppppppuVar17 = pppppppuStack_1a8 + 1;
                                              do {
                                                cVar6 = '\x01';
                                                bVar11 = (bool)ExclusiveMonitorPass
                                                                         (pppppppuVar17,0x10);
                                                if (bVar11) {
                                                  *pppppppuVar17 =
                                                       (uint ******)((long)*pppppppuVar17 + 1);
                                                  cVar6 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar6 != '\0');
                                              pppppppuStack_c8 = pppppppuStack_1a8;
                                              do {
                                                cVar6 = '\x01';
                                                bVar11 = (bool)ExclusiveMonitorPass
                                                                         (pppppppuVar17,0x10);
                                                if (bVar11) {
                                                  *pppppppuVar17 =
                                                       (uint ******)((long)*pppppppuVar17 + 1);
                                                  cVar6 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar6 != '\0');
                                            }
                                            pppppppuStack_d0 = pppppppuStack_1b0;
                                            pppppppuStack_e8 = (uint *******)&PTR_FUN_110bd95b0;
                                            pppppppuStack_128 = (uint *******)0x0;
                                            pppppppuStack_130 = (uint *******)0x0;
                                            pppppppuStack_f0 = (uint *******)FUN_10a43c9a8;
                                            FUN_10a4634ec(pppppppuVar14,&pppppppuStack_f0);
                                            (*(code *)*pppppppuStack_e8)(&pppppppuStack_e8);
                                            if (pppppppuVar29 != (uint *******)0x0) {
                                              pppppppuVar14 = pppppppuVar29 + 1;
                                              do {
                                                ppppppuVar13 = *pppppppuVar14;
                                                cVar6 = '\x01';
                                                bVar11 = (bool)ExclusiveMonitorPass
                                                                         (pppppppuVar14,0x10);
                                                if (bVar11) {
                                                  *pppppppuVar14 =
                                                       (uint ******)((long)ppppppuVar13 + -1);
                                                  cVar6 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar6 != '\0');
                                              if (ppppppuVar13 == (uint ******)0x0) {
                                                (*(code *)(*pppppppuVar29)[2])(pppppppuVar29);
                                                __ZNSt3__119__shared_weak_count14__release_weakEv
                                                          (pppppppuVar29);
                                              }
                                            }
                                            if (pppppppuStack_128 != (uint *******)0x0) {
                                              pppppppuVar14 = pppppppuStack_128 + 1;
                                              do {
                                                ppppppuVar13 = *pppppppuVar14;
                                                cVar6 = '\x01';
                                                bVar11 = (bool)ExclusiveMonitorPass
                                                                         (pppppppuVar14,0x10);
                                                if (bVar11) {
                                                  *pppppppuVar14 =
                                                       (uint ******)((long)ppppppuVar13 + -1);
                                                  cVar6 = ExclusiveMonitorsStatus();
                                                }
                                                pppppppuVar17 = pppppppuStack_128;
                                              } while (cVar6 != '\0');
                                              goto LAB_10a412114;
                                            }
                                          }
                                        }
                                        else {
                                          param_1 = (uint *******)
                                                    CONCAT44((int)((ulong)*pppppppuVar17 >> 0x20) +
                                                             1,(int)*pppppppuVar17 + 1);
                                          *pppppppuVar17 = (uint ******)param_1;
                                          FUN_10a43c7a4(pppppppuVar36[4],&pppppppuStack_1b0);
                                          iVar7 = *(int *)((long)pppppppuVar17 + 4) + -1;
                                          *(int *)((long)pppppppuVar17 + 4) = iVar7;
                                          if (iVar7 == 0) {
                                            *(undefined4 *)pppppppuVar17 = 0;
                                          }
                                        }
                                      }
                                    }
                                    pppppppuVar14 = pppppppuStack_1a8;
                                    pppppppuVar36 = (uint *******)*pppppppuVar36;
                                  } while (pppppppuVar36 != (uint *******)0x0);
                                  func_0x00010a43c62c(&pppppppuStack_160);
                                  if (pppppppuVar14 == (uint *******)0x0) goto LAB_10a41228c;
                                }
                                pppppppuVar17 = pppppppuVar14 + 1;
                                do {
                                  ppppppuVar13 = *pppppppuVar17;
                                  cVar6 = '\x01';
                                  bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
                                  if (bVar11) {
                                    *pppppppuVar17 = (uint ******)((long)ppppppuVar13 + -1);
                                    cVar6 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar6 != '\0');
                                if (ppppppuVar13 == (uint ******)0x0) {
                                  (*(code *)(*pppppppuVar14)[2])(pppppppuVar14);
                                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar14);
                                }
                              }
LAB_10a41228c:
                              pppppppuVar30 = pppppppuVar30 + 6;
                            } while (pppppppuVar30 != pppppppuStack_1c0);
                          }
                          ppppuVar25 = ppppuStack_1a0;
                          pppppppuVar32 = pppppppuStack_1c8;
                          uVar38 = uStack_1cc;
                          uVar31 = uStack_1e0;
                          ppppppuVar13 = ppppppuStack_1e8;
                          pppppuVar21 = ppppppuVar20[2];
                          unaff_d9 = (ulong)(uint)*(float *)(pppppuVar21 + 0x11);
                          if ((0xea < (int)*(uint *)(pppppppuStack_1c8[0x2e][0x144] + 3)) &&
                             (*(uint *)((long)pppppuVar21 + 0xac) != 0)) {
                            param_1 = (uint *******)
                                      (ulong)(uint)(1.0 / *(float *)(pppppuVar21 + 0x12));
                            unaff_d9 = (ulong)(uint)(*(float *)(pppppuVar21 + 0x11) *
                                                    (1.0 / *(float *)(pppppuVar21 + 0x12)));
                          }
                          if (ppppuStack_1a0[0x1c] != (uint ***)0x0) {
                            param_1 = (uint *******)(ulong)*(uint *)((long)ppppppuVar20 + 4);
                            pppppppuVar30 = unaff_d8;
                            uVar19 = unaff_d9;
                            (*(code *)*pppppppuStack_210)(&ppppppuStack_170);
                            ppppppuStack_170 =
                                 (uint ******)CONCAT44((int)pppppppuVar30,(int)param_1);
                            uStack_1d0 = 1;
                            uStack_168 = (undefined4)uVar19;
                          }
                          param_6 = (uint *******)ppppuVar25[0x1e];
                          if (param_6 != (uint *******)0x0) {
                            param_1 = (uint *******)(ulong)*(uint *)((long)ppppppuVar20 + 4);
                            pppppppuVar30 = unaff_d8;
                            uVar19 = unaff_d9;
                            (*(code *)*pppppppuStack_218)(&uStack_110);
                            uStack_110 = (uint *******)CONCAT44((int)pppppppuVar30,(int)param_1);
                            uStack_1d4 = 1;
                            uStack_108 = (uint ******)CONCAT44(param_4,(int)uVar19);
                          }
                          if (ppppuVar25[0x20] != (uint ***)0x0) {
                            param_1 = (uint *******)(ulong)*(uint *)((long)ppppppuVar20 + 4);
                            param_6 = &ppppppuStack_180;
                            pppppppuVar30 = unaff_d8;
                            uVar19 = unaff_d9;
                            (*(code *)*pppppppuStack_220)(uVar38 & 1);
                            ppppppuStack_180 =
                                 (uint ******)CONCAT44((int)pppppppuVar30,(int)param_1);
                            uVar38 = 1;
                            fStack_178 = (float)uVar19;
                          }
                          pppuVar35 = ppppuVar25[0x24];
                          if ((pppuVar35 != (uint ***)0x0) &&
                             (param_1 = (uint *******)
                                        (ulong)(uint)*(float *)(ppppppuVar20[2] + 0x10),
                             1.1920929e-07 < *(float *)(ppppppuVar20[2] + 0x10))) {
                            param_1 = unaff_d8;
                            (*(code *)(*pppuVar35)[0x13])();
                            uStack_204 = (uint)((int)pppuVar35 != 0);
                            uStack_1ec = 1;
                          }
                        }
                      }
                      ppppuVar25 = ppppuStack_198;
                      pppppuVar21 = pppppuStack_188;
                      if (ppppuStack_198 != (uint ****)0x0) {
                        ppppuVar15 = ppppuStack_198 + 1;
                        do {
                          pppuVar35 = *ppppuVar15;
                          cVar6 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(ppppuVar15,0x10);
                          if (bVar11) {
                            *ppppuVar15 = (uint ***)((long)pppuVar35 + -1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (pppuVar35 == (uint ***)0x0) {
                          (*(code *)(*ppppuStack_198)[2])(ppppuStack_198);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar25);
                          pppppuVar21 = pppppuStack_188;
                        }
                      }
                    }
                  }
LAB_10a412408:
                  if (pppppuVar21 != (uint *****)0x0) {
                    pppppuVar26 = pppppuVar21 + 1;
                    do {
                      ppppuVar25 = *pppppuVar26;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppuVar26,0x10);
                      if (bVar11) {
                        *pppppuVar26 = (uint ****)((long)ppppuVar25 + -1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (ppppuVar25 == (uint ****)0x0) {
                      (*(code *)(*pppppuVar21)[2])(pppppuVar21);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar21);
                    }
                  }
                }
                ppppppuVar20 = ppppppuVar20 + 6;
              } while (ppppppuVar20 != ppppppuVar13);
              if ((uStack_1d0 & 1) != 0) {
                param_6 = &ppppppuStack_170;
                FUN_10a3e3894(pppppuStack_100[0x2f]);
              }
              if ((uStack_1d4 & 1) != 0) {
                param_6 = (uint *******)&uStack_110;
                FUN_10a3e82bc(pppppuStack_100[0x2f]);
              }
              if ((uVar38 & 1) != 0) {
                param_6 = &ppppppuStack_180;
                FUN_10a3e814c(pppppuStack_100[0x2f]);
              }
              if ((uStack_1ec & 1) != 0) {
                param_6 = (uint *******)(ulong)(uStack_204 & 1);
                func_0x00010a3e4590(pppppuStack_100[0x2d]);
              }
            }
            ppppppuVar13 = ppppppuStack_f8;
            if (ppppppuStack_f8 == (uint ******)0x0) goto LAB_10a4125a4;
          }
          ppppppuVar20 = ppppppuVar13 + 1;
          do {
            pppppuVar21 = *ppppppuVar20;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar20,0x10);
            if (bVar11) {
              *ppppppuVar20 = (uint *****)((long)pppppuVar21 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppppuVar21 == (uint *****)0x0) {
            (*(code *)(*ppppppuVar13)[2])(ppppppuVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar13);
          }
        }
LAB_10a4125a4:
        uVar31 = uVar31 + 1;
        ppppppuVar20 = pppppppuVar32[0x43];
      } while (uVar31 < (ulong)((long)pppppppuVar32[0x44] - (long)ppppppuVar20 >> 4));
    }
    FUN_10a435254(&pppppppuStack_f0,
                  ((long)pppppppuVar32[0x47] - (long)pppppppuVar32[0x46] >> 3) * -0x3333333333333333
                  ,0);
    pppppppuVar30 = pppppppuStack_1c8;
    param_6 = (uint *******)
              (((long)pppppppuStack_1c8[0x4a] - (long)pppppppuStack_1c8[0x49] >> 3) *
              -0x3333333333333333);
    FUN_10a435254(&pppppppuStack_160,param_6,0);
    ppppppuVar46 = pppppppuVar30[0x53];
    pppppppuVar32 = pppppppuStack_f0;
    pppppppuVar14 = pppppppuStack_e8;
    for (ppppppuVar20 = pppppppuVar30[0x52]; pppppppuStack_f0 = pppppppuVar32,
        pppppppuStack_e8 = pppppppuVar14, ppppppuVar20 != ppppppuVar46;
        ppppppuVar20 = ppppppuVar20 + 6) {
      if (*(char *)ppppppuVar20 == '\x01') {
        pppppppuStack_130 = (uint *******)ppppppuVar20[4];
        pppppppuStack_128 = (uint *******)ppppppuVar20[5];
        if (pppppppuStack_128 != (uint *******)0x0) {
          pppppppuVar32 = pppppppuStack_128 + 1;
          do {
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
            if (bVar11) {
              *pppppppuVar32 = (uint ******)((long)*pppppppuVar32 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        if (pppppppuStack_130 != (uint *******)0x0) {
          ppppppuVar13 = pppppppuStack_1c8[0x46];
          ppppppuVar39 = pppppppuStack_1c8[0x47];
          if (ppppppuVar13 != ppppppuVar39) {
            uVar38 = 0;
            do {
              ppppppuVar16 = (uint ******)ppppppuVar13[1];
              if ((ppppppuVar16 != (uint ******)0x0) &&
                 (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_f8 = ppppppuVar16,
                 ppppppuVar16 != (uint ******)0x0)) {
                pppppuStack_100 = *ppppppuVar13;
                if ((pppppuStack_100 != (uint *****)0x0) &&
                   (((ulong)pppppuStack_100[0x30] & 0x12) == 0)) {
                  ppppppuVar3 = ppppppuVar16 + 2;
                  do {
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
                    if (bVar11) {
                      *ppppppuVar3 = (uint *****)((long)*ppppppuVar3 + 1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  pppppppuVar30 = pppppppuStack_130 + 4;
                  pppppppuVar14 = (uint *******)*pppppppuVar30;
                  pppppppuVar32 = pppppppuVar30;
                  if (pppppppuVar14 != (uint *******)0x0) {
                    do {
                      lVar37 = 8;
                      if (ppppppuVar16 <= pppppppuVar14[5]) {
                        lVar37 = 0;
                        pppppppuVar32 = pppppppuVar14;
                      }
                      pppppppuVar14 = *(uint ********)((long)pppppppuVar14 + lVar37);
                    } while (pppppppuVar14 != (uint *******)0x0);
                    if ((pppppppuVar32 != pppppppuVar30) && (pppppppuVar32[5] <= ppppppuVar16)) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar16);
                      ppppppuVar16 = pppppppuVar32[7];
                      if ((ppppppuVar16 != (uint ******)0x0) &&
                         (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuVar30 = pppppppuStack_f0
                         , uStack_108 = ppppppuVar16, ppppppuVar16 != (uint ******)0x0)) {
                        pppppppuVar32 = (uint *******)pppppppuVar32[6];
                        uStack_110 = pppppppuVar32;
                        if (pppppppuVar32 != (uint *******)0x0) {
                          if ((uint *******)((long)pppppppuStack_e8 - (long)pppppppuStack_f0 >> 3)
                              <= (uint *******)(ulong)uVar38) goto LAB_10a412e94;
                          unaff_d8 = (uint *******)(ulong)*(uint *)(ppppppuVar20 + 1);
                          pppppppuVar14 = pppppppuVar32 + 0x29;
                          param_6 = (uint *******)(ppppppuVar13 + 2);
                          pppppppuStack_1b8 = (uint *******)(ulong)uVar38;
                          FUN_10a4352f8(pppppppuVar14,param_6);
                          if (((pppppppuVar32 + 0x2a != pppppppuVar14) &&
                              (pppppppuVar14[7] != (uint ******)0x0)) &&
                             ((*(code *)(*pppppppuVar14[7])[0x12])(), 0.0 < SUB84(param_1,0))) {
                            pppppppuVar32 = unaff_d8;
                            (*(code *)(*pppppppuVar14[7])[0x13])();
                            pppppppuVar30 = pppppppuVar30 + (long)pppppppuStack_1b8;
                            fVar41 = *(float *)pppppppuVar30 +
                                     *(float *)(ppppppuVar20[2] + 0x10) * SUB84(pppppppuVar32,0);
                            param_1 = (uint *******)(ulong)(uint)fVar41;
                            *(float *)pppppppuVar30 = fVar41;
                            *(undefined1 *)((long)pppppppuVar30 + 4) = 1;
                          }
                        }
                        ppppppuVar3 = ppppppuVar16 + 1;
                        do {
                          pppppuVar21 = *ppppppuVar3;
                          cVar6 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
                          if (bVar11) {
                            *ppppppuVar3 = (uint *****)((long)pppppuVar21 + -1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (pppppuVar21 == (uint *****)0x0) {
                          (*(code *)(*ppppppuVar16)[2])(ppppppuVar16);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar16);
                        }
                      }
                      ppppppuVar16 = ppppppuStack_f8;
                      if (ppppppuStack_f8 == (uint ******)0x0) goto LAB_10a412720;
                      goto LAB_10a4126f0;
                    }
                  }
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar16);
                }
LAB_10a4126f0:
                ppppppuVar3 = ppppppuVar16 + 1;
                do {
                  pppppuVar21 = *ppppppuVar3;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
                  if (bVar11) {
                    *ppppppuVar3 = (uint *****)((long)pppppuVar21 + -1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (pppppuVar21 == (uint *****)0x0) {
                  (*(code *)(*ppppppuVar16)[2])(ppppppuVar16);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar16);
                }
              }
LAB_10a412720:
              uVar38 = uVar38 + 1;
              ppppppuVar13 = ppppppuVar13 + 5;
            } while (ppppppuVar13 != ppppppuVar39);
          }
          ppppppuVar13 = pppppppuStack_1c8[0x49];
          ppppppuVar39 = pppppppuStack_1c8[0x4a];
          if (ppppppuVar13 != ppppppuVar39) {
            uVar38 = 0;
            do {
              ppppppuVar16 = (uint ******)ppppppuVar13[1];
              if ((ppppppuVar16 != (uint ******)0x0) &&
                 (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuStack_f8 = ppppppuVar16,
                 ppppppuVar16 != (uint ******)0x0)) {
                pppppuVar21 = *ppppppuVar13;
                pppppuStack_100 = pppppuVar21;
                if ((pppppuVar21 != (uint *****)0x0) &&
                   ((pppppuVar26 = pppppuVar21, (*(code *)(*pppppuVar21)[0xc])(),
                    (int)pppppuVar26 != 0 && (FUN_10a410af8(), ((ulong)pppppuVar21[8] & 1) != 0))))
                {
                  ppppppuVar3 = ppppppuVar16 + 2;
                  do {
                    cVar6 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
                    if (bVar11) {
                      *ppppppuVar3 = (uint *****)((long)*ppppppuVar3 + 1);
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  pppppppuVar30 = pppppppuStack_130 + 7;
                  pppppppuVar14 = (uint *******)*pppppppuVar30;
                  pppppppuVar32 = pppppppuVar30;
                  if (pppppppuVar14 != (uint *******)0x0) {
                    do {
                      lVar37 = 8;
                      if (ppppppuVar16 <= pppppppuVar14[5]) {
                        lVar37 = 0;
                        pppppppuVar32 = pppppppuVar14;
                      }
                      pppppppuVar14 = *(uint ********)((long)pppppppuVar14 + lVar37);
                    } while (pppppppuVar14 != (uint *******)0x0);
                    if ((pppppppuVar32 != pppppppuVar30) && (pppppppuVar32[5] <= ppppppuVar16)) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar16);
                      ppppppuVar16 = pppppppuVar32[7];
                      if ((ppppppuVar16 != (uint ******)0x0) &&
                         (__ZNSt3__119__shared_weak_count4lockEv(),
                         pppppppuVar30 = pppppppuStack_160, uStack_108 = ppppppuVar16,
                         ppppppuVar16 != (uint ******)0x0)) {
                        pppppppuVar32 = (uint *******)pppppppuVar32[6];
                        uStack_110 = pppppppuVar32;
                        if (pppppppuVar32 != (uint *******)0x0) {
                          if ((uint *******)((long)pppppppuStack_158 - (long)pppppppuStack_160 >> 3)
                              <= (uint *******)(ulong)uVar38) goto LAB_10a412e94;
                          unaff_d8 = (uint *******)(ulong)*(uint *)(ppppppuVar20 + 1);
                          pppppppuVar14 = pppppppuVar32 + 0x29;
                          param_6 = (uint *******)(ppppppuVar13 + 2);
                          pppppppuStack_1b8 = (uint *******)(ulong)uVar38;
                          FUN_10a4352f8(pppppppuVar14,param_6);
                          if (((pppppppuVar32 + 0x2a != pppppppuVar14) &&
                              (pppppppuVar14[7] != (uint ******)0x0)) &&
                             ((*(code *)(*pppppppuVar14[7])[0x12])(), 0.0 < SUB84(param_1,0))) {
                            pppppppuVar32 = unaff_d8;
                            (*(code *)(*pppppppuVar14[7])[0x13])();
                            pppppppuVar30 = pppppppuVar30 + (long)pppppppuStack_1b8;
                            fVar41 = *(float *)pppppppuVar30 +
                                     *(float *)(ppppppuVar20[2] + 0x10) * SUB84(pppppppuVar32,0);
                            param_1 = (uint *******)(ulong)(uint)fVar41;
                            *(float *)pppppppuVar30 = fVar41;
                            *(undefined1 *)((long)pppppppuVar30 + 4) = 1;
                          }
                        }
                        ppppppuVar3 = ppppppuVar16 + 1;
                        do {
                          pppppuVar21 = *ppppppuVar3;
                          cVar6 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
                          if (bVar11) {
                            *ppppppuVar3 = (uint *****)((long)pppppuVar21 + -1);
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (pppppuVar21 == (uint *****)0x0) {
                          (*(code *)(*ppppppuVar16)[2])(ppppppuVar16);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar16);
                        }
                      }
                      ppppppuVar16 = ppppppuStack_f8;
                      if (ppppppuStack_f8 == (uint ******)0x0) goto LAB_10a412914;
                      goto LAB_10a4128e4;
                    }
                  }
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar16);
                }
LAB_10a4128e4:
                ppppppuVar3 = ppppppuVar16 + 1;
                do {
                  pppppuVar21 = *ppppppuVar3;
                  cVar6 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(ppppppuVar3,0x10);
                  if (bVar11) {
                    *ppppppuVar3 = (uint *****)((long)pppppuVar21 + -1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (pppppuVar21 == (uint *****)0x0) {
                  (*(code *)(*ppppppuVar16)[2])(ppppppuVar16);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar16);
                }
              }
LAB_10a412914:
              uVar38 = uVar38 + 1;
              ppppppuVar13 = ppppppuVar13 + 5;
            } while (ppppppuVar13 != ppppppuVar39);
          }
        }
        pppppppuVar32 = pppppppuStack_128;
        pppppppuVar30 = pppppppuStack_1c8;
        if (pppppppuStack_128 != (uint *******)0x0) {
          pppppppuVar14 = pppppppuStack_128 + 1;
          do {
            ppppppuVar13 = *pppppppuVar14;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
            if (bVar11) {
              *pppppppuVar14 = (uint ******)((long)ppppppuVar13 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (ppppppuVar13 == (uint ******)0x0) {
            (*(code *)(*pppppppuStack_128)[2])(pppppppuStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar32);
          }
        }
      }
      pppppppuVar32 = pppppppuStack_f0;
      pppppppuVar14 = pppppppuStack_e8;
    }
    if (pppppppuVar32 != pppppppuVar14) {
      uVar31 = 0;
      do {
        if (*(char *)((long)pppppppuVar32 + 4) == '\x01') {
          uVar19 = ((long)pppppppuVar30[0x47] - (long)pppppppuVar30[0x46] >> 3) *
                   -0x3333333333333333;
          if (uVar19 < uVar31 || uVar19 - uVar31 == 0) goto LAB_10a412e94;
          ppppppuVar20 = pppppppuVar30[0x46] + uVar31 * 5;
          pppppppuVar36 = (uint *******)ppppppuVar20[1];
          __ZNSt3__119__shared_weak_count4lockEv();
          pppppppuStack_130 = (uint *******)*ppppppuVar20;
          param_1 = (uint *******)(ulong)*(uint *)pppppppuVar32;
          param_6 = (uint *******)(ppppppuVar20 + 2);
          pppppppuStack_128 = pppppppuVar36;
          FUN_10a428274(param_1,(float)(double)pppppppuStack_130[0x2e][0x10a][1],
                        pppppppuStack_130 + 0x3e,param_6);
          pppppppuVar17 = pppppppuVar36 + 1;
          do {
            ppppppuVar20 = *pppppppuVar17;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
            if (bVar11) {
              *pppppppuVar17 = (uint ******)((long)ppppppuVar20 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (ppppppuVar20 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar36)[2])(pppppppuVar36);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar36);
          }
        }
        uVar31 = (ulong)((int)uVar31 + 1);
        pppppppuVar32 = pppppppuVar32 + 1;
      } while (pppppppuVar32 != pppppppuVar14);
    }
    pppppppuVar32 = pppppppuStack_158;
    if (pppppppuStack_160 != pppppppuStack_158) {
      uVar31 = 0;
      pppppppuVar14 = pppppppuStack_160;
      do {
        if (*(char *)((long)pppppppuVar14 + 4) == '\x01') {
          uVar19 = ((long)pppppppuVar30[0x4a] - (long)pppppppuVar30[0x49] >> 3) *
                   -0x3333333333333333;
          if (uVar19 < uVar31 || uVar19 - uVar31 == 0) {
LAB_10a412e94:
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10a412e98);
            (*pcVar10)();
          }
          ppppppuVar20 = pppppppuVar30[0x49] + uVar31 * 5;
          pppppppuVar36 = (uint *******)ppppppuVar20[1];
          __ZNSt3__119__shared_weak_count4lockEv();
          pppppppuStack_130 = (uint *******)*ppppppuVar20;
          param_1 = (uint *******)(ulong)*(uint *)pppppppuVar14;
          param_6 = (uint *******)(ppppppuVar20 + 2);
          pppppppuStack_128 = pppppppuVar36;
          FUN_10a428274(param_1,(float)(double)pppppppuStack_130[0x2e][0x10a][1],
                        pppppppuStack_130 + 99,param_6);
          pppppppuVar17 = pppppppuVar36 + 1;
          do {
            ppppppuVar20 = *pppppppuVar17;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
            if (bVar11) {
              *pppppppuVar17 = (uint ******)((long)ppppppuVar20 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (ppppppuVar20 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar36)[2])(pppppppuVar36);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar36);
          }
        }
        uVar31 = (ulong)((int)uVar31 + 1);
        pppppppuVar14 = pppppppuVar14 + 1;
      } while (pppppppuVar14 != pppppppuVar32);
    }
    pppppppuVar32 = pppppppuStack_160;
    if (pppppppuStack_160 != (uint *******)0x0) {
      __ZdlPv(pppppppuStack_160);
    }
    pppppppuVar14 = pppppppuStack_f0;
    if (pppppppuStack_f0 != (uint *******)0x0) {
      __ZdlPv();
    }
    ppppppuVar20 = pppppppuVar30[0x4c];
    ppppppuVar46 = pppppppuVar30[0x4d];
    if (ppppppuVar20 != ppppppuVar46) {
      unaff_d9 = 0;
      do {
        pppppppuVar14 = (uint *******)ppppppuVar20[1];
        if ((pppppppuVar14 != (uint *******)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuStack_e8 = pppppppuVar14,
           pppppppuVar14 != (uint *******)0x0)) {
          pppppppuVar17 = (uint *******)*ppppppuVar20;
          pppppppuVar32 = pppppppuVar14;
          pppppppuStack_f0 = pppppppuVar17;
          if ((pppppppuVar17 != (uint *******)0x0) &&
             ((*(code *)(*pppppppuVar17)[0xc])(), ((ulong)pppppppuVar17 & 1) != 0)) {
            ppppppuVar13 = pppppppuVar30[0x52];
            ppppppuVar39 = pppppppuVar30[0x53];
            if (ppppppuVar13 != ppppppuVar39) {
              do {
                pppppppuVar14 = pppppppuVar17;
                if (*(char *)ppppppuVar13 == '\x01') {
                  unaff_d8 = (uint *******)(ulong)*(uint *)(ppppppuVar13 + 1);
                  pppppppuStack_160 = (uint *******)ppppppuVar13[4];
                  pppppppuVar32 = (uint *******)ppppppuVar13[5];
                  if (pppppppuVar32 != (uint *******)0x0) {
                    pppppppuVar14 = pppppppuVar32 + 1;
                    do {
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
                      if (bVar11) {
                        *pppppppuVar14 = (uint ******)((long)*pppppppuVar14 + 1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                  }
                  pppppppuStack_158 = pppppppuVar32;
                  if (pppppppuStack_160 != (uint *******)0x0) {
                    if (pppppppuStack_e8 != (uint *******)0x0) {
                      pppppppuVar14 = pppppppuStack_e8 + 2;
                      do {
                        cVar6 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar14,0x10);
                        if (bVar11) {
                          *pppppppuVar14 = (uint ******)((long)*pppppppuVar14 + 1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                    }
                    pppppppuVar36 = pppppppuStack_160 + 10;
                    pppppppuVar17 = (uint *******)*pppppppuVar36;
                    pppppppuVar14 = pppppppuVar36;
                    if (pppppppuVar17 == (uint *******)0x0) {
LAB_10a412cf4:
                      pppppppuVar14 = pppppppuVar36;
                    }
                    else {
                      do {
                        lVar37 = 8;
                        if (pppppppuStack_e8 <= pppppppuVar17[5]) {
                          lVar37 = 0;
                          pppppppuVar14 = pppppppuVar17;
                        }
                        pppppppuVar17 = *(uint ********)((long)pppppppuVar17 + lVar37);
                      } while (pppppppuVar17 != (uint *******)0x0);
                      if ((pppppppuVar14 == pppppppuVar36) || (pppppppuStack_e8 < pppppppuVar14[5]))
                      goto LAB_10a412cf4;
                    }
                    pppppppuVar17 = pppppppuStack_e8;
                    if (pppppppuStack_e8 != (uint *******)0x0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    if (((pppppppuVar14 != pppppppuVar36) &&
                        (pppppppuVar36 = (uint *******)pppppppuVar14[7],
                        pppppppuVar17 = pppppppuVar36, pppppppuVar32 = pppppppuStack_158,
                        pppppppuVar36 != (uint *******)0x0)) &&
                       (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuVar17 = pppppppuVar36,
                       pppppppuVar32 = pppppppuStack_158, pppppppuStack_128 = pppppppuVar36,
                       pppppppuVar36 != (uint *******)0x0)) {
                      pppppppuVar32 = (uint *******)pppppppuVar14[6];
                      pppppppuStack_130 = pppppppuVar32;
                      if ((pppppppuVar32 != (uint *******)0x0) &&
                         (pppppppuVar17 = pppppppuVar32, FUN_10aa789e8(),
                         pppppppuVar14 = pppppppuStack_f0, 0.0 < SUB84(param_1,0))) {
                        pppppppuVar17 = (uint *******)pppppppuVar32[0x26];
                        if (pppppppuVar17 == (uint *******)0x0) {
                          FUN_10a00946c(&UNK_10f65686c);
                          goto LAB_10a412e94;
                        }
                        pppppppuVar32 = unaff_d8;
                        (*(code *)(*pppppppuVar17)[0x13])();
                        *(int *)(pppppppuVar14 + 0x3e) = (int)pppppppuVar32;
                        fVar41 = 0.0;
                        if (0.0 <= *(float *)(ppppppuVar13[2] + 0x10)) {
                          fVar41 = *(float *)(ppppppuVar13[2] + 0x10);
                        }
                        fVar50 = 1.0;
                        if (fVar41 <= 1.0) {
                          fVar50 = fVar41;
                        }
                        param_1 = (uint *******)(ulong)(uint)fVar50;
                        *(float *)((long)pppppppuVar14 + 500) = fVar50;
                      }
                      pppppppuVar32 = pppppppuVar36 + 1;
                      do {
                        ppppppuVar16 = *pppppppuVar32;
                        cVar6 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar32,0x10);
                        if (bVar11) {
                          *pppppppuVar32 = (uint ******)((long)ppppppuVar16 + -1);
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      pppppppuVar32 = pppppppuStack_158;
                      if (ppppppuVar16 == (uint ******)0x0) {
                        (*(code *)(*pppppppuVar36)[2])(pppppppuVar36);
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                        pppppppuVar17 = pppppppuVar36;
                        pppppppuVar32 = pppppppuStack_158;
                      }
                    }
                  }
                  pppppppuVar14 = pppppppuVar17;
                  if (pppppppuVar32 != (uint *******)0x0) {
                    pppppppuVar17 = pppppppuVar32 + 1;
                    do {
                      ppppppuVar16 = *pppppppuVar17;
                      cVar6 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
                      if (bVar11) {
                        *pppppppuVar17 = (uint ******)((long)ppppppuVar16 + -1);
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (ppppppuVar16 == (uint ******)0x0) {
                      (*(code *)(*pppppppuVar32)[2])(pppppppuVar32);
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                      pppppppuVar14 = pppppppuVar32;
                    }
                  }
                }
                ppppppuVar13 = ppppppuVar13 + 6;
                pppppppuVar17 = pppppppuVar14;
              } while (ppppppuVar13 != ppppppuVar39);
              pppppppuVar32 = pppppppuStack_e8;
              if (pppppppuStack_e8 == (uint *******)0x0) goto LAB_10a412e24;
            }
          }
          pppppppuVar14 = pppppppuVar17;
          pppppppuVar17 = pppppppuVar32 + 1;
          do {
            ppppppuVar13 = *pppppppuVar17;
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
            if (bVar11) {
              *pppppppuVar17 = (uint ******)((long)ppppppuVar13 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (ppppppuVar13 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar32)[2])(pppppppuVar32);
            pppppppuVar14 = pppppppuVar32;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
LAB_10a412e24:
        ppppppuVar20 = ppppppuVar20 + 2;
      } while (ppppppuVar20 != ppppppuVar46);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else {
    if (uVar31 <= (ulong)((*(long *)(param_5 + 0x238) - (long)pppppppuVar30 >> 4) *
                         -0x5555555555555555)) {
      pppppppuVar32 = pppppppuVar30 + uVar31 * 6;
      param_1 = (uint *******)0x0;
      do {
        *pppppppuVar30 = (uint ******)0x0;
        pppppppuVar30[1] = (uint ******)0x0;
        *(uint *)((long)pppppppuVar30 + 0xc) = 0xbf800000;
        pppppppuVar30[3] = (uint ******)0x0;
        pppppppuVar30[2] = (uint ******)0x0;
        pppppppuVar30[5] = (uint ******)0x0;
        pppppppuVar30[4] = (uint ******)0x0;
        pppppppuVar30 = pppppppuVar30 + 6;
      } while (pppppppuVar30 != pppppppuVar32);
      *(uint ********)(param_5 + 0x230) = pppppppuVar32;
      goto LAB_10a4114ec;
    }
    if (uVar19 < 0x555555555555556) {
      lVar27 = *(long *)(param_5 + 0x238) - (long)pppppppuVar32 >> 4;
      uVar28 = lVar27 * 0x5555555555555556;
      if (uVar28 < uVar19 || uVar28 - uVar19 == 0) {
        uVar28 = uVar19;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar27 * -0x5555555555555555)) {
        uVar28 = 0x555555555555555;
      }
      if (0x555555555555555 < uVar28) goto LAB_10a412ea0;
      lVar27 = uVar28 * 0x30;
      __Znwm();
      puVar4 = (undefined8 *)(lVar27 + lVar37);
      param_1 = (uint *******)0x0;
      puVar24 = puVar4;
      do {
        *puVar24 = 0;
        puVar24[1] = 0;
        *(undefined4 *)((long)puVar24 + 0xc) = 0xbf800000;
        puVar24[3] = 0;
        puVar24[2] = 0;
        puVar24[5] = 0;
        puVar24[4] = 0;
        puVar24 = puVar24 + 6;
      } while (puVar24 != puVar4 + uVar31 * 6);
      pppppppuVar14 = pppppppuVar32;
      puVar24 = (undefined8 *)((long)puVar4 - lVar37);
      if (pppppppuVar32 != pppppppuVar30) {
        do {
          ppppppuVar20 = *pppppppuVar14;
          puVar24[1] = pppppppuVar14[1];
          *puVar24 = ppppppuVar20;
          ppppppuVar20 = pppppppuVar14[2];
          puVar24[3] = pppppppuVar14[3];
          puVar24[2] = ppppppuVar20;
          pppppppuVar14[2] = (uint ******)0x0;
          pppppppuVar14[3] = (uint ******)0x0;
          param_1 = (uint *******)pppppppuVar14[4];
          puVar24[5] = pppppppuVar14[5];
          puVar24[4] = param_1;
          pppppppuVar14[4] = (uint ******)0x0;
          pppppppuVar14[5] = (uint ******)0x0;
          pppppppuVar14 = pppppppuVar14 + 6;
          puVar24 = puVar24 + 6;
        } while (pppppppuVar14 != pppppppuVar30);
        do {
          func_0x00010a43bf08(pppppppuVar32 + 4);
          func_0x00010a43beb0(pppppppuVar32 + 2);
          pppppppuVar32 = pppppppuVar32 + 6;
        } while (pppppppuVar32 != pppppppuVar30);
        pppppppuVar32 = *(uint ********)(param_5 + 0x228);
      }
      *(undefined8 **)(param_5 + 0x228) = (undefined8 *)((long)puVar4 - lVar37);
      *(undefined8 **)(param_5 + 0x230) = puVar4 + uVar31 * 6;
      *(ulong *)(param_5 + 0x238) = lVar27 + uVar28 * 0x30;
      if (pppppppuVar32 != (uint *******)0x0) {
        __ZdlPv(pppppppuVar32);
      }
      goto LAB_10a4114ec;
    }
  }
  FUN_10a435374();
LAB_10a412ea0:
  func_0x000109ffded8();
  FUN_10a0dc3c8(&uStack_110);
  func_0x00010a0d6180(&pppppuStack_100);
  func_0x00010a43bf08(&pppppppuStack_130);
  if (pppppppuStack_160 != (uint *******)0x0) {
    __ZdlPv();
  }
  if (pppppppuStack_f0 != (uint *******)0x0) {
    __ZdlPv();
  }
  pppppppuVar30 = pppppppuVar14;
  __Unwind_Resume(pppppppuVar14);
  pcStack_228 = FUN_10a41307c;
  uStack_250 = unaff_d9;
  pppppppuStack_248 = unaff_d8;
  pppppppuStack_240 = pppppppuVar32;
  pppppppuStack_238 = pppppppuVar14;
  puStack_230 = &stack0xfffffffffffffff0;
  FUN_10a40f184();
  FUN_10a410d50(&lStack_260,pppppppuVar30,param_6);
  if (lStack_260 == 0) {
    param_1 = (uint *******)0xbf800000;
  }
  else {
    FUN_10acdc738(*(undefined8 *)(lStack_260 + 200));
  }
  if (plStack_258 != (long *)0x0) {
    plVar2 = plStack_258 + 1;
    do {
      lVar37 = *plVar2;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = lVar37 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar37 == 0) {
      (**(code **)(*plStack_258 + 0x10))(plStack_258);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_258);
    }
  }
  return param_1;
}



/* Entry: 10a41331c; end: 10a413673;  */

void FUN_10a41331c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 uStack_51;
  
  if (param_4 == 0) {
    lVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_98 = *(long **)(param_2 + 0x48);
    lStack_a0 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_a0);
    puVar4 = (undefined8 *)((ulong)&lStack_a0 | 8);
    plVar8 = &lStack_a0;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar8 = (long *)(param_4 + 0x20);
    }
    uVar10 = *puVar4;
    lVar11 = *plVar8;
  }
  FUN_10a0d7244(&lStack_70,*(undefined8 *)(param_2 + 0x170),lVar11,uVar10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_70 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lStack_70 + 0x180) & 0xfffc;
  *(ushort *)(lStack_70 + 0x180) = uVar3 | *(ushort *)(lStack_70 + 0x180) & 1 | uVar2;
  *(ushort *)(lStack_70 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  lStack_a0 = lStack_70;
  plStack_98 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar8 = plStack_68 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = *plVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_3,&lStack_a0);
  plVar8 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  *(undefined1 *)(lStack_70 + 0x1f0) = *(undefined1 *)(param_2 + 0x1f0);
  *(undefined4 *)(lStack_70 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  iVar5 = *(int *)(*(long *)(*(long *)(param_2 + 0x170) + 0xa20) + 0x18);
  if (iVar5 < 0xf5) {
    if (iVar5 < 0x65) goto LAB_10a4135e4;
  }
  else {
    *(undefined4 *)(lStack_70 + 500) = *(undefined4 *)(param_2 + 500);
  }
  lVar11 = *(long *)(param_2 + 0x280);
  lVar13 = *(long *)(param_2 + 0x278);
  uVar12 = lVar11 - lVar13 >> 4;
  FUN_10a413674(lStack_70 + 0x278,uVar12);
  if (lVar11 != lVar13) {
    uVar14 = 0;
    do {
      FUN_10a41074c(&lStack_a0,lStack_70);
      FUN_10a43bf60(&uStack_80,&uStack_51,&lStack_a0);
      plVar8 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar1 = plStack_98 + 1;
        do {
          lVar11 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      uVar10 = uStack_80;
      if ((ulong)(*(long *)(param_2 + 0x280) - *(long *)(param_2 + 0x278) >> 4) <= uVar14) {
LAB_10a413608:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10a41360c);
        (*pcVar9)();
      }
      lVar11 = *(long *)(*(long *)(param_2 + 0x278) + uVar14 * 0x10);
      if (*(char *)(lVar11 + 0x67) < '\0') {
        func_0x000107c3192c(&lStack_a0,*(undefined8 *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x58)
                           );
      }
      else {
        plStack_98 = *(long **)(lVar11 + 0x58);
        lStack_a0 = *(long *)(lVar11 + 0x50);
        lStack_90 = *(long *)(lVar11 + 0x60);
      }
      FUN_10aa79bcc(uVar10,lVar11,&lStack_a0,1);
      if (lStack_90 < 0) {
        __ZdlPv(lStack_a0);
      }
      if ((ulong)(*(long *)(param_2 + 0x280) - *(long *)(param_2 + 0x278) >> 4) <= uVar14)
      goto LAB_10a413608;
      FUN_10aa7a570(*(undefined4 *)(*(long *)(*(long *)(param_2 + 0x278) + uVar14 * 0x10) + 0x80),
                    uStack_80);
      if ((ulong)(*(long *)(lStack_70 + 0x280) - *(long *)(lStack_70 + 0x278) >> 4) <= uVar14)
      goto LAB_10a413608;
      FUN_10a4132a0(*(long *)(lStack_70 + 0x278) + uVar14 * 0x10,uStack_80,plStack_78);
      plVar8 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar11 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar12);
  }
LAB_10a4135e4:
  param_1[1] = (long)plStack_68;
  *param_1 = lStack_70;
  return;
}



/* Entry: 10a413674; end: 10a41378b;  */

void FUN_10a413674(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  uVar3 = lVar6 - lVar1 >> 4;
  if (uVar3 < param_2) {
    uVar3 = param_2 - uVar3;
    if ((ulong)(param_1[2] - lVar6 >> 4) < uVar3) {
      if (param_2 >> 0x3c != 0) {
        FUN_10a4350a8();
        if (((char)param_1[1] == '\x01') &&
           (0xf0 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18))) {
          *(undefined4 *)((long)param_1 + 500) = 1;
        }
        FUN_10a41312c(param_1);
        if ((char)param_1[0x3e] == '\x01') {
          plVar5 = (long *)param_1[0x50];
          for (plVar7 = (long *)param_1[0x4f]; plVar7 != plVar5; plVar7 = plVar7 + 2) {
            FUN_10aa7a250(0,*plVar7,*(undefined4 *)(*plVar7 + 0x9c));
          }
        }
        return;
      }
      uVar2 = param_1[2] - lVar1;
      uVar4 = (long)uVar2 >> 3;
      if (uVar4 <= param_2) {
        uVar4 = param_2;
      }
      if (0x7fffffffffffffef < uVar2) {
        uVar4 = 0xfffffffffffffff;
      }
      plStack_38 = param_1;
      FUN_10a4350bc();
      lVar1 = uVar4 + (lVar6 - lVar1);
      _bzero(lVar1,uVar3 * 0x10);
      lVar6 = lVar1 - (param_1[1] - *param_1);
      _memcpy(lVar6);
      lStack_58 = *param_1;
      *param_1 = lVar6;
      param_1[1] = lVar1 + uVar3 * 0x10;
      lStack_40 = param_1[2];
      param_1[2] = uVar4 + param_2 * 0x10;
      lStack_50 = lStack_58;
      lStack_48 = lStack_58;
      func_0x00010a4350f0(&lStack_58);
    }
    else {
      _bzero(lVar6,uVar3 * 0x10);
      param_1[1] = lVar6 + uVar3 * 0x10;
    }
  }
  else if (param_2 < uVar3) {
    lVar1 = lVar1 + param_2 * 0x10;
    while (lVar6 != lVar1) {
      lVar6 = lVar6 + -0x10;
      FUN_10a43beb0(lVar6);
    }
    param_1[1] = lVar1;
  }
  return;
}



/* Entry: 10a41378c; end: 10a413807;  */

void FUN_10a41378c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(char *)(param_1 + 8) == '\x01') &&
     (0xf0 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18))) {
    *(undefined4 *)(param_1 + 500) = 1;
  }
  FUN_10a41312c(param_1);
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x280);
    for (plVar2 = *(long **)(param_1 + 0x278); plVar2 != plVar1; plVar2 = plVar2 + 2) {
      FUN_10aa7a250(0,*plVar2,*(undefined4 *)(*plVar2 + 0x9c));
    }
  }
  return;
}



/* Entry: 10a413808; end: 10a41380f;  */

void FUN_10a413808(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(char *)(param_1 + -0x60) == '\x01') &&
     (0xf0 < *(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18))) {
    *(undefined4 *)(param_1 + 0x18c) = 1;
  }
  FUN_10a41312c(param_1 + -0x68);
  if (*(char *)(param_1 + 0x188) == '\x01') {
    plVar1 = *(long **)(param_1 + 0x218);
    for (plVar2 = *(long **)(param_1 + 0x210); plVar2 != plVar1; plVar2 = plVar2 + 2) {
      FUN_10aa7a250(0,*plVar2,*(undefined4 *)(*plVar2 + 0x9c));
    }
  }
  return;
}



/* Entry: 10a413810; end: 10a4138ff;  */

void FUN_10a413810(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a41312c();
  FUN_10a3c7928(param_1,param_2);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd4648,*(undefined1 *)(param_1 + 0x1f0));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bd4668,*(undefined4 *)(param_1 + 500));
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110bd4688,*(long *)(param_1 + 0x2b0),
             *(long *)(param_1 + 0x2b8) - *(long *)(param_1 + 0x2b0));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bd8f48);
  plVar2 = *(long **)(param_1 + 0x280);
  plVar3 = *(long **)(param_1 + 0x278);
  while (plVar3 != plVar2) {
    lVar1 = 0;
    if (*plVar3 != 0) {
      lVar1 = *plVar3 + 8;
    }
    (**(code **)(*param_2 + 0x128))(param_2,lVar1,0);
    plVar3 = plVar3 + 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a4138fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a413900; end: 10a413b8f;  */

void FUN_10a413900(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  func_0x00010a3c7a18();
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd4648,*(undefined1 *)(param_1 + 0x1f0));
  *(char *)(param_1 + 0x1f0) = (char)plVar7;
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bd4668,*(undefined4 *)(param_1 + 500));
  *(int *)(param_1 + 500) = (int)plVar7;
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd4688);
  if ((int)plVar7 != 0) {
    FUN_10a32dd20(&uStack_60,param_2,&PTR_DAT_110bd4688);
    if (*(long *)(param_1 + 0x2b0) != 0) {
      *(long *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2b0);
      __ZdlPv();
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      *(undefined8 *)(param_1 + 0x2c0) = 0;
    }
    *(long **)(param_1 + 0x2b8) = plStack_58;
    *(undefined8 *)(param_1 + 0x2b0) = uStack_60;
    *(undefined8 *)(param_1 + 0x2c0) = uStack_50;
  }
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bd8f48);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bd8f48);
    plVar7 = param_2;
    (**(code **)(*param_2 + 0x208))();
    FUN_10a413674(param_1 + 0x278,(ulong)plVar7 & 0xffffffff);
    if ((int)plVar7 != 0) {
      uVar10 = 0;
      do {
        FUN_10a41074c(auStack_70,param_1);
        FUN_10a43bf60(&uStack_60,&uStack_41,auStack_70);
        plVar1 = plStack_58;
        uVar5 = uStack_60;
        if ((ulong)(*(long *)(param_1 + 0x280) - *(long *)(param_1 + 0x278) >> 4) <= uVar10) {
LAB_10a413b78:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a413b7c);
          (*pcVar6)();
        }
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x278) + uVar10 * 0x10);
        uStack_60 = 0;
        plStack_58 = (long *)0x0;
        plVar11 = (long *)puVar2[1];
        puVar2[1] = plVar1;
        *puVar2 = uVar5;
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
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
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar1 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar11 = plStack_58 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar11 = plStack_68 + 1;
          do {
            lVar9 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        if ((ulong)(*(long *)(param_1 + 0x280) - *(long *)(param_1 + 0x278) >> 4) <= uVar10)
        goto LAB_10a413b78;
        lVar8 = *(long *)(*(long *)(param_1 + 0x278) + uVar10 * 0x10);
        lVar9 = 0;
        if (lVar8 != 0) {
          lVar9 = lVar8 + 8;
        }
        (**(code **)(*param_2 + 0x1e8))(param_2,uVar10,lVar9);
        uVar10 = uVar10 + 1;
      } while (uVar10 != ((ulong)plVar7 & 0xffffffff));
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10a413b90; end: 10a413cd7;  */

void FUN_10a413b90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  FUN_10a40f184();
  FUN_10a410d50(&lStack_48,param_2,param_3);
  if (lStack_48 != 0) {
    FUN_10a41074c(auStack_58,param_2);
    FUN_10a43bf60(param_1,&uStack_31,auStack_58);
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
    FUN_10aa79bcc(*param_1,lStack_48,param_4,0);
    FUN_10a4107dc(param_2 + 0x278,param_1);
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    return;
  }
  FUN_10a00946c(&UNK_10f65694b);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a413ca0);
  (*pcVar4)();
}



/* Entry: 10a413cd8; end: 10a413e5b;  */

void FUN_10a413cd8(long *param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long *plStack_50;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_31;
  
  FUN_10a40f184();
  FUN_10a410d50(&lStack_48,param_2,param_3);
  if (lStack_48 == 0) {
    FUN_10a41074c(auStack_58,param_2);
    FUN_10a43bf60(param_1,&uStack_31,auStack_58);
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
    lVar5 = *param_1;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_70,*param_3,param_3[1]);
    }
    else {
      uStack_68 = param_3[1];
      uStack_70 = *param_3;
      uStack_60 = param_3[2];
    }
    if (*(char *)(lVar5 + 0x67) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar5 + 0x50));
    }
    *(ulong *)(lVar5 + 0x58) = uStack_68;
    *(ulong *)(lVar5 + 0x50) = uStack_70;
    *(ulong *)(lVar5 + 0x60) = uStack_60;
    uStack_60 = uStack_60 & 0xffffffffffffff;
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    FUN_10a4107dc(param_2 + 0x278,param_1);
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    return;
  }
  FUN_10a00946c(&UNK_10f656973);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a413e24);
  (*pcVar4)();
}



/* Entry: 10a413e5c; end: 10a41417b;  */

/* WARNING: Removing unreachable block (ram,0x00010a414088) */

void FUN_10a413e5c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *****pppppuVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  undefined1 **ppuVar6;
  code *pcVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 ****appppuStack_d8 [2];
  char cStack_c1;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 ****ppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  
  FUN_10a410c48(&ppuStack_58);
  ppppuStack_70 = (undefined8 ****)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  pppppuVar8 = (undefined8 *****)0x88;
  __Znwm();
  ppuVar11 = ppuStack_50;
  *(undefined1 *)pppppuVar8 = 0;
  uStack_60 = 0x8000000000000088;
  uStack_68 = 0;
  ppppuStack_70 = pppppuVar8;
  pppuVar10 = (undefined8 ***)ppuStack_58;
  while( true ) {
    if (pppuVar10 == (undefined8 ***)ppuVar11) {
      FUN_10a3c829c(&ppppuStack_88,param_2);
      uVar4 = uStack_80;
      if (-1 < (char)bStack_71) {
        uVar4 = (ulong)bStack_71;
      }
      FUN_10a003c90(appppuStack_d8,uVar4 + 0xe,&puStack_f0);
      pppppuVar8 = (undefined8 *****)appppuStack_d8[0];
      if (-1 < cStack_c1) {
        pppppuVar8 = appppuStack_d8;
      }
      if (uVar4 != 0) {
        pppppuVar3 = (undefined8 *****)ppppuStack_88;
        if (-1 < (char)bStack_71) {
          pppppuVar3 = &ppppuStack_88;
        }
        _memmove(pppppuVar8,pppppuVar3,uVar4);
      }
      puVar1 = (undefined8 *)((long)pppppuVar8 + uVar4);
      *puVar1 = 0x526465657073202c;
      *(undefined8 *)((long)puVar1 + 6) = 0x203a6f6974615264;
      *(undefined1 *)((long)puVar1 + 0xe) = 0;
      __ZNSt3__19to_stringEf(&puStack_f0,*(undefined4 *)(param_2 + 0x1f8));
      ppuVar6 = (undefined1 **)puStack_f0;
      if (-1 < (char)bStack_d9) {
        uStack_e8 = (ulong)bStack_d9;
        ppuVar6 = &puStack_f0;
      }
      pppppuVar8 = appppuStack_d8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar8,ppuVar6,uStack_e8);
      pppuStack_b8 = pppppuVar8[1];
      pppuStack_c0 = *pppppuVar8;
      pppuStack_b0 = pppppuVar8[2];
      pppppuVar8[1] = (undefined8 ****)0x0;
      pppppuVar8[2] = (undefined8 ****)0x0;
      *pppppuVar8 = (undefined8 ****)0x0;
      ppppuVar9 = &pppuStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar9,&UNK_10f656995,0x14);
      ppuStack_98 = ppppuVar9[1];
      ppuStack_a0 = *ppppuVar9;
      ppuStack_90 = ppppuVar9[2];
      ppppuVar9[1] = (undefined8 ***)0x0;
      ppppuVar9[2] = (undefined8 ***)0x0;
      *ppppuVar9 = (undefined8 ***)0x0;
      uVar4 = uStack_68;
      pppppuVar8 = (undefined8 *****)ppppuStack_70;
      if (-1 < (long)uStack_60) {
        uVar4 = uStack_60 >> 0x38;
        pppppuVar8 = &ppppuStack_70;
      }
      pppuVar10 = &ppuStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar10,pppppuVar8,uVar4);
      ppuVar11 = *pppuVar10;
      param_1[1] = pppuVar10[1];
      *param_1 = ppuVar11;
      param_1[2] = pppuVar10[2];
      pppuVar10[1] = (undefined8 **)0x0;
      pppuVar10[2] = (undefined8 **)0x0;
      *pppuVar10 = (undefined8 **)0x0;
      if ((long)ppuStack_90 < 0) {
        __ZdlPv(ppuStack_a0);
      }
      if ((long)pppuStack_b0 < 0) {
        __ZdlPv(pppuStack_c0);
      }
      if ((char)bStack_d9 < '\0') {
        __ZdlPv(puStack_f0);
      }
      if (cStack_c1 < '\0') {
        __ZdlPv(appppuStack_d8[0]);
      }
      if ((char)bStack_71 < '\0') {
        __ZdlPv(ppppuStack_88);
      }
      ppppuStack_70 = (undefined8 ****)&ppuStack_58;
      FUN_10a0426d8(&ppppuStack_70);
      return;
    }
    ppuVar2 = pppuVar10[1];
    pppuVar5 = (undefined8 ***)*pppuVar10;
    if (-1 < (char)*(byte *)((long)pppuVar10 + 0x17)) {
      ppuVar2 = (undefined8 **)(ulong)*(byte *)((long)pppuVar10 + 0x17);
      pppuVar5 = pppuVar10;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_70,pppuVar5,ppuVar2);
    if (ppuStack_58 == ppuStack_50) break;
    if (pppuVar10 != (undefined8 ***)(ppuStack_50 + -3)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppuStack_70,&DAT_10f68f19e,2);
    }
    pppuVar10 = pppuVar10 + 3;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a4140d4);
  (*pcVar7)();
}



/* Entry: 10a41417c; end: 10a414183;  */

/* WARNING: Removing unreachable block (ram,0x00010a414088) */

void FUN_10a41417c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *****pppppuVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  undefined1 **ppuVar6;
  code *pcVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined8 ****appppuStack_d8 [2];
  char cStack_c1;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 ****ppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  
  FUN_10a410c48(&ppuStack_58);
  ppppuStack_70 = (undefined8 ****)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  pppppuVar8 = (undefined8 *****)0x88;
  __Znwm();
  ppuVar11 = ppuStack_50;
  *(undefined1 *)pppppuVar8 = 0;
  uStack_60 = 0x8000000000000088;
  uStack_68 = 0;
  ppppuStack_70 = pppppuVar8;
  pppuVar10 = (undefined8 ***)ppuStack_58;
  while( true ) {
    if (pppuVar10 == (undefined8 ***)ppuVar11) {
      FUN_10a3c829c(&ppppuStack_88,param_2 + -0x10);
      uVar4 = uStack_80;
      if (-1 < (char)bStack_71) {
        uVar4 = (ulong)bStack_71;
      }
      FUN_10a003c90(appppuStack_d8,uVar4 + 0xe,&puStack_f0);
      pppppuVar8 = (undefined8 *****)appppuStack_d8[0];
      if (-1 < cStack_c1) {
        pppppuVar8 = appppuStack_d8;
      }
      if (uVar4 != 0) {
        pppppuVar3 = (undefined8 *****)ppppuStack_88;
        if (-1 < (char)bStack_71) {
          pppppuVar3 = &ppppuStack_88;
        }
        _memmove(pppppuVar8,pppppuVar3,uVar4);
      }
      puVar1 = (undefined8 *)((long)pppppuVar8 + uVar4);
      *puVar1 = 0x526465657073202c;
      *(undefined8 *)((long)puVar1 + 6) = 0x203a6f6974615264;
      *(undefined1 *)((long)puVar1 + 0xe) = 0;
      __ZNSt3__19to_stringEf(&puStack_f0,*(undefined4 *)(param_2 + 0x1e8));
      ppuVar6 = (undefined1 **)puStack_f0;
      if (-1 < (char)bStack_d9) {
        uStack_e8 = (ulong)bStack_d9;
        ppuVar6 = &puStack_f0;
      }
      pppppuVar8 = appppuStack_d8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar8,ppuVar6,uStack_e8);
      pppuStack_b8 = pppppuVar8[1];
      pppuStack_c0 = *pppppuVar8;
      pppuStack_b0 = pppppuVar8[2];
      pppppuVar8[1] = (undefined8 ****)0x0;
      pppppuVar8[2] = (undefined8 ****)0x0;
      *pppppuVar8 = (undefined8 ****)0x0;
      ppppuVar9 = &pppuStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar9,&UNK_10f656995,0x14);
      ppuStack_98 = ppppuVar9[1];
      ppuStack_a0 = *ppppuVar9;
      ppuStack_90 = ppppuVar9[2];
      ppppuVar9[1] = (undefined8 ***)0x0;
      ppppuVar9[2] = (undefined8 ***)0x0;
      *ppppuVar9 = (undefined8 ***)0x0;
      uVar4 = uStack_68;
      pppppuVar8 = (undefined8 *****)ppppuStack_70;
      if (-1 < (long)uStack_60) {
        uVar4 = uStack_60 >> 0x38;
        pppppuVar8 = &ppppuStack_70;
      }
      pppuVar10 = &ppuStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppuVar10,pppppuVar8,uVar4);
      ppuVar11 = *pppuVar10;
      param_1[1] = pppuVar10[1];
      *param_1 = ppuVar11;
      param_1[2] = pppuVar10[2];
      pppuVar10[1] = (undefined8 **)0x0;
      pppuVar10[2] = (undefined8 **)0x0;
      *pppuVar10 = (undefined8 **)0x0;
      if ((long)ppuStack_90 < 0) {
        __ZdlPv(ppuStack_a0);
      }
      if ((long)pppuStack_b0 < 0) {
        __ZdlPv(pppuStack_c0);
      }
      if ((char)bStack_d9 < '\0') {
        __ZdlPv(puStack_f0);
      }
      if (cStack_c1 < '\0') {
        __ZdlPv(appppuStack_d8[0]);
      }
      if ((char)bStack_71 < '\0') {
        __ZdlPv(ppppuStack_88);
      }
      ppppuStack_70 = (undefined8 ****)&ppuStack_58;
      FUN_10a0426d8(&ppppuStack_70);
      return;
    }
    ppuVar2 = pppuVar10[1];
    pppuVar5 = (undefined8 ***)*pppuVar10;
    if (-1 < (char)*(byte *)((long)pppuVar10 + 0x17)) {
      ppuVar2 = (undefined8 **)(ulong)*(byte *)((long)pppuVar10 + 0x17);
      pppuVar5 = pppuVar10;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&ppppuStack_70,pppuVar5,ppuVar2);
    if (ppuStack_58 == ppuStack_50) break;
    if (pppuVar10 != (undefined8 ***)(ppuStack_50 + -3)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppuStack_70,&DAT_10f68f19e,2);
    }
    pppuVar10 = pppuVar10 + 3;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a4140d4);
  (*pcVar7)();
}



/* Entry: 10a414184; end: 10a4141bf;  */

float FUN_10a414184(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long *param_5)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)param_3 >> 0x20);
  uVar6 = (undefined4)param_3;
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (undefined4)param_2;
  FUN_10a00946c(&UNK_10f65840a);
  FUN_10a00946c(&UNK_10f658425);
  pfVar1 = (float *)&UNK_10f65843d;
  FUN_10a00946c();
  uVar3 = CONCAT44(uVar7,uVar6);
  uVar2 = CONCAT44(uVar5,uVar4);
  (**(code **)(*param_5 + 0x98))(uVar2,param_5);
  (**(code **)(*param_5 + 0x98))(uVar3,param_5);
  return *pfVar1 + param_1 * ((float)uVar2 - (float)uVar3);
}



/* Entry: 10a4141c0; end: 10a41425f;  */

float FUN_10a4141c0(float param_1,undefined8 param_2,undefined8 param_3,float *param_4,long *param_5
                   )

{
  (**(code **)(*param_5 + 0x98))(param_2,param_5);
  (**(code **)(*param_5 + 0x98))(param_3,param_5);
  return *param_4 + param_1 * ((float)param_2 - (float)param_3);
}



/* Entry: 10a414260; end: 10a4144cf;  */

float FUN_10a414260(float param_1,float param_2,float param_3,float param_4,float *param_5,
                   long *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = param_2;
  fVar5 = param_3;
  (**(code **)(*param_6 + 0x98))(param_6);
  fVar3 = param_3 * param_3;
  fVar2 = fVar9 * fVar9 + fVar3;
  fVar1 = param_4 * param_4 + fVar5 * fVar5 + fVar2;
  fVar4 = param_4 / fVar1;
  fVar8 = -fVar5 / fVar1;
  fVar9 = -fVar9 / fVar1;
  fVar1 = -param_3 / fVar1;
  (**(code **)(*param_6 + 0x98))(param_6);
  fVar5 = ((-(fVar8 * param_2) + param_4 * fVar4) - fVar2 * fVar9) - fVar3 * fVar1;
  fVar6 = (param_4 * fVar8 + param_2 * fVar4 + fVar3 * fVar9) - fVar2 * fVar1;
  fVar7 = (param_4 * fVar9 + fVar2 * fVar4 + param_2 * fVar1) - fVar3 * fVar8;
  fVar1 = (param_4 * fVar1 + fVar3 * fVar4 + fVar2 * fVar8) - param_2 * fVar9;
  fVar9 = fVar5 + fVar6 * 0.0 + fVar7 * 0.0 + fVar1 * 0.0;
  if (fVar9 < 0.0) {
    fVar5 = -fVar5;
    fVar6 = -fVar6;
    fVar7 = -fVar7;
    fVar1 = -fVar1;
    fVar9 = -fVar9;
  }
  if (fVar9 <= 0.9999999) {
    _acosf();
    fVar2 = (1.0 - param_1) * fVar9;
    _sinf();
    fVar4 = fVar2 * 0.0;
    param_1 = param_1 * fVar9;
    _sinf();
    _sinf();
    fVar5 = (fVar2 + fVar5 * param_1) / fVar9;
    fVar2 = (fVar4 + fVar6 * param_1) / fVar9;
    fVar3 = (fVar4 + fVar7 * param_1) / fVar9;
    fVar9 = (fVar4 + fVar1 * param_1) / fVar9;
  }
  else {
    fVar9 = 1.0 - param_1;
    fVar5 = fVar9 + param_1 * fVar5;
    fVar2 = param_1 * fVar6 + fVar9 * 0.0;
    fVar3 = param_1 * fVar7 + fVar9 * 0.0;
    fVar9 = param_1 * fVar1 + fVar9 * 0.0;
  }
  fVar7 = *param_5;
  fVar8 = param_5[1];
  fVar10 = param_5[2];
  fVar11 = param_5[3];
  fVar4 = ((-(fVar7 * fVar2) + fVar5 * fVar11) - fVar3 * fVar8) - fVar9 * fVar10;
  fVar1 = (fVar5 * fVar7 + fVar2 * fVar11 + fVar9 * fVar8) - fVar3 * fVar10;
  fVar6 = (fVar5 * fVar8 + fVar3 * fVar11 + fVar2 * fVar10) - fVar9 * fVar7;
  fVar9 = (fVar5 * fVar10 + fVar9 * fVar11 + fVar3 * fVar7) - fVar2 * fVar8;
  fVar9 = fVar4 * fVar4 + fVar1 * fVar1 + fVar6 * fVar6 + fVar9 * fVar9;
  if (fVar9 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = fVar1 * (1.0 / SQRT(fVar9));
  }
  return fVar1;
}



/* Entry: 10a4144d0; end: 10a41452b;  */

float FUN_10a4144d0(float param_1,undefined8 param_2,float *param_3,long *param_4)

{
  (**(code **)(*param_4 + 0x98))(param_2,param_4);
  return *param_3 + param_1 * (float)param_2;
}



/* Entry: 10a41452c; end: 10a4146bf;  */

float FUN_10a41452c(float param_1,float param_2,float param_3,undefined1 (*param_4) [12],
                   long *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float extraout_s1;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float extraout_s3;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  (**(code **)(*param_5 + 0x98))(param_5);
  fVar17 = extraout_s3 + param_2 * 0.0 + extraout_s1 * 0.0 + param_3 * 0.0;
  auVar19._0_4_ = -(uint)(fVar17 < 0.0);
  auVar19._4_4_ = auVar19._0_4_;
  auVar19._8_4_ = auVar19._0_4_;
  auVar19._12_4_ = auVar19._0_4_;
  auVar16._0_4_ = -param_2;
  auVar16._4_4_ = -extraout_s1;
  auVar16._8_4_ = -param_3;
  auVar16._12_4_ = -param_3;
  auVar12._4_4_ = extraout_s1;
  auVar12._0_4_ = param_2;
  auVar12._8_4_ = param_3;
  auVar12._12_4_ = param_3;
  auVar20._4_4_ = extraout_s1;
  auVar20._0_4_ = param_2;
  auVar20._8_4_ = param_3;
  auVar20._12_4_ = param_3;
  auVar20 = auVar20 ^ (auVar12 ^ auVar16) & auVar19;
  fVar8 = -extraout_s3;
  fVar11 = -fVar17;
  if (0.0 <= fVar17) {
    fVar11 = fVar17;
    fVar8 = extraout_s3;
  }
  if (fVar11 <= 0.9999999) {
    _acosf();
    fVar17 = (1.0 - param_1) * fVar11;
    _sinf();
    fVar9 = fVar17 * 0.0;
    param_1 = param_1 * fVar11;
    _sinf();
    _sinf(fVar11);
    fVar13 = (fVar17 + fVar8 * param_1) / fVar11;
    fVar8 = (fVar9 + auVar20._0_4_ * param_1) / fVar11;
    fVar17 = (fVar9 + auVar20._4_4_ * param_1) / fVar11;
    fVar10 = (fVar9 + auVar20._8_4_ * param_1) / fVar11;
    fVar11 = (fVar9 + auVar20._12_4_ * param_1) / fVar11;
  }
  else {
    fVar11 = 1.0 - param_1;
    fVar13 = fVar11 + param_1 * fVar8;
    fVar8 = auVar20._0_4_ * param_1 + fVar11 * 0.0;
    fVar17 = auVar20._4_4_ * param_1 + fVar11 * 0.0;
    fVar10 = auVar20._8_4_ * param_1 + fVar11 * 0.0;
    fVar11 = auVar20._12_4_ * param_1 + fVar11 * 0.0;
  }
  auVar14._0_4_ = -fVar8;
  auVar14._4_4_ = -fVar17;
  auVar14._8_4_ = -fVar10;
  auVar14._12_4_ = -fVar11;
  uVar18 = (undefined4)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  auVar4._12_4_ = uVar18;
  auVar4._0_12_ = *param_4;
  auVar5._12_4_ = uVar18;
  auVar5._0_12_ = *param_4;
  auVar12 = NEON_ext(auVar4,auVar5,0xc,1);
  auVar21._4_4_ = uVar18;
  auVar21._0_4_ = uVar18;
  auVar21._8_4_ = uVar18;
  auVar21._12_4_ = uVar18;
  auVar6._12_4_ = uVar18;
  auVar6._0_12_ = *param_4;
  auVar20 = NEON_ext(auVar21,auVar6,4,1);
  auVar1._4_4_ = fVar17;
  auVar1._0_4_ = fVar8;
  auVar1._8_4_ = fVar10;
  auVar1._12_4_ = fVar11;
  NEON_ext(auVar1,auVar14,4,1);
  auVar2._4_4_ = fVar17;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar11;
  auVar3._4_4_ = fVar17;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar10;
  auVar3._12_4_ = fVar11;
  NEON_ext(auVar2,auVar3,8,1);
  auVar15._4_4_ = SUB124(*param_4,8);
  auVar15._0_4_ = SUB124(*param_4,0);
  auVar15._8_4_ = SUB124(*param_4,0);
  auVar15._12_4_ = SUB124(*param_4,8);
  auVar7._12_4_ = uVar18;
  auVar7._0_12_ = *param_4;
  auVar16 = NEON_ext(auVar15,auVar7,0xc,1);
  return (auVar20._8_4_ * fVar8 + auVar12._4_4_ * fVar13 +
         (float)*(undefined8 *)(*param_4 + 8) * fVar17) - auVar16._8_4_ * fVar10;
}



/* Entry: 10a4146c0; end: 10a41477f;  */

float FUN_10a4146c0(float param_1,undefined8 param_2,undefined8 param_3,float *param_4,long *param_5
                   )

{
  (**(code **)(*param_5 + 0x98))(param_2,param_5);
  return *param_4 + param_1 * (float)param_2;
}



/* Entry: 10a414780; end: 10a41480b;  */

float FUN_10a414780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   float *param_5,long *param_6)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  uVar2 = param_2;
  (**(code **)(*param_6 + 0x98))(param_2,param_6);
  fVar1 = (float)param_2;
  _powf();
  _powf(uVar2,param_1);
  _powf(CONCAT44(uVar4,uVar3),param_1);
  return *param_5 * fVar1;
}



/* Entry: 10a41480c; end: 10a414a13;  */

float FUN_10a41480c(float param_1,undefined8 param_2,float *param_3,long *param_4)

{
  (**(code **)(*param_4 + 0x98))(param_2,param_4);
  return (1.0 - param_1) * *param_3 + param_1 * (float)param_2;
}



/* Entry: 10a414a14; end: 10a414ae7;  */

float FUN_10a414a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   float *param_5,long *param_6)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  uVar2 = param_2;
  (**(code **)(*param_6 + 0x98))(param_2,param_6);
  fVar5 = 1.0 - (float)param_1;
  fVar1 = *param_5;
  _powf(fVar1,fVar5);
  _powf(param_5[1],fVar5);
  _powf(param_5[2],fVar5);
  _powf(param_2,param_1);
  _powf(uVar2,param_1);
  _powf(CONCAT44(uVar4,uVar3),param_1);
  return fVar1 * (float)param_2;
}



/* Entry: 10a414ae8; end: 10a414c63;  */

undefined1  [16] FUN_10a414ae8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f658458;
  return auVar1;
}



/* Entry: 10a414c64; end: 10a414d27;  */

void FUN_10a414c64(undefined8 param_1)

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
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0xfd;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a414d28(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6569aa;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f656650;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x10f;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a43cc5c();
  FUN_10a43ce3c(param_1);
  return;
}



/* Entry: 10a414d28; end: 10a414dff;  */

/* WARNING: Removing unreachable block (ram,0x00010a414dc0) */

undefined1  [16] FUN_10a414d28(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f658458,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a43cb60(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a414e00; end: 10a41567f;  */

void FUN_10a414e00(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f658473,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd9e28;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
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
    ppuStack_b0 = &PTR_DAT_110bd9e28;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f6569b4,FUN_10a43cef8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f6569bc,FUN_10a43d014,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f6569c5,FUN_10a43d0f4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f6569cd,FUN_10a43d1e0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f6569d7,FUN_10a43d2bc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f6569df,FUN_10a43d49c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f6569e8,FUN_10a43d614,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f6569f3,FUN_10a43d7c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f6569fd,FUN_10a43d880,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a06,FUN_10a43d938,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&DAT_10f656a11,FUN_10a43d9f0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a19,FUN_10a43dc3c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a24,FUN_10a43dcf4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a33,FUN_10a43df90,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a44,FUN_10a43e040,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a53,FUN_10a43e188,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a62,FUN_10a43e30c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a73,FUN_10a43e3c4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a86,FUN_10a43e4d8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656749,FUN_10a43e764,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a415660;
    FUN_10a054dac(param_1,&UNK_10f656a98,FUN_10a43e89c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f656755,FUN_10a43e954,FUN_10a43ea0c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f656aa8,FUN_10a43eacc,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110bd9628,FUN_10a43eb7c);
    FUN_10a0605c4(param_1,&DAT_10f656aae,FUN_10a43f984,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f658473,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a415660:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a415664);
  (*pcVar6)();
}



/* Entry: 10a415680; end: 10a4158d3;  */

undefined8 * FUN_10a415680(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x9b] = &PTR_FUN_110c383b8;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bd49e8,param_2,param_3);
  *puVar1 = &PTR_FUN_110bd4718;
  puVar1[2] = &PTR_DAT_110bd4830;
  puVar1[7] = &PTR_FUN_110bd4888;
  puVar1[0xd] = &PTR_FUN_110bd48a8;
  puVar1[0x9b] = &PTR_FUN_110bd49a8;
  puVar1[0x16] = &PTR_FUN_110bd4918;
  puVar1[0x17] = &PTR_DAT_110bd4948;
  *(undefined1 *)(puVar1 + 0x3e) = 1;
  puVar1[0x41] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bd9650;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110bd96a0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a43fd8c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x42] = puVar1 + 3;
  param_1[0x43] = puVar1;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x44] = puVar1 + 3;
  param_1[0x45] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x44);
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0x3f800000;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x3f800000;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = FUN_10a4353e0;
  param_1[0x6b] = &PTR_DAT_110ae9180;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x72] = 0x10a4353f0;
  param_1[0x73] = &PTR_DAT_110ae9180;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7a] = FUN_10a4353e0;
  param_1[0x7b] = &PTR_DAT_110ae9180;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x82] = 0x10a435400;
  param_1[0x83] = &PTR_DAT_110ae9180;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8a] = 0x10a435410;
  param_1[0x8b] = &PTR_DAT_110ae9180;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x92] = 0x10a435420;
  param_1[0x93] = &PTR_DAT_110ae9180;
  param_1[0x9a] = 0;
  return param_1;
}



/* Entry: 10a4158d4; end: 10a41593b;  */

void FUN_10a4158d4(float param_1,long param_2,long param_3)

{
  undefined ***pppuVar1;
  code **ppcVar2;
  undefined **ppuVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lVar5 = *(long *)(param_2 + 0x238);
  lVar6 = *(long *)(param_2 + 0x230);
  while (lVar5 != lVar6) {
    lVar5 = lVar5 + -0x50;
    func_0x00010a43548c(lVar5);
  }
  *(long *)(param_2 + 0x238) = lVar6;
  if (param_3 != 0) {
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_68 = FUN_10a43fe1c;
    ppuStack_60 = &PTR_FUN_110bd96e8;
    ppcVar2 = &pcStack_68;
    lStack_58 = param_2;
    FUN_10a3e75d4(param_3,ppcVar2,0);
    pppuVar1 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    ppuVar3 = pppuVar1[0x9a];
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar3 = (undefined **)pppuVar1[0x2e][0x144];
      pppuVar1[0x9a] = ppuVar3;
    }
    if (0x134 < *(int *)(ppuVar3 + 3)) {
      pcVar4 = *ppcVar2;
      if (pcVar4[0x68] == (code)0x1) {
        param_1 = *(float *)(pcVar4 + 0x60) - param_1;
      }
      else {
        param_1 = param_1 + *(float *)(pcVar4 + 0x5c);
      }
    }
    *(float *)(ppcVar2 + 2) = param_1;
    *(float *)((long)ppcVar2 + 0x14) = param_1;
    *(undefined1 *)(ppcVar2 + 3) = 2;
    return;
  }
  return;
}



/* Entry: 10a41593c; end: 10a4159e7;  */

void FUN_10a41593c(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  code **ppcVar2;
  undefined **ppuVar3;
  code *pcVar4;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a43fe1c;
  ppuStack_60 = &PTR_FUN_110bd96e8;
  ppcVar2 = &pcStack_68;
  uStack_58 = param_2;
  FUN_10a3e75d4(param_3,ppcVar2,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  ppuVar3 = pppuVar1[0x9a];
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = (undefined **)pppuVar1[0x2e][0x144];
    pppuVar1[0x9a] = ppuVar3;
  }
  if (0x134 < *(int *)(ppuVar3 + 3)) {
    pcVar4 = *ppcVar2;
    if (pcVar4[0x68] == (code)0x1) {
      param_1 = *(float *)(pcVar4 + 0x60) - param_1;
    }
    else {
      param_1 = param_1 + *(float *)(pcVar4 + 0x5c);
    }
  }
  *(float *)(ppcVar2 + 2) = param_1;
  *(float *)((long)ppcVar2 + 0x14) = param_1;
  *(undefined1 *)(ppcVar2 + 3) = 2;
  return;
}



/* Entry: 10a4159e8; end: 10a415a3b;  */

void FUN_10a4159e8(float param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x4d0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x170) + 0xa20);
    *(long *)(param_2 + 0x4d0) = lVar1;
  }
  if (0x134 < *(int *)(lVar1 + 0x18)) {
    lVar1 = *param_3;
    if (*(char *)(lVar1 + 0x68) == '\x01') {
      param_1 = *(float *)(lVar1 + 0x60) - param_1;
    }
    else {
      param_1 = param_1 + *(float *)(lVar1 + 0x5c);
    }
  }
  *(float *)(param_3 + 2) = param_1;
  *(float *)((long)param_3 + 0x14) = param_1;
  *(undefined1 *)(param_3 + 3) = 2;
  return;
}



/* Entry: 10a415a3c; end: 10a415b77;  */

void FUN_10a415a3c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(param_1 + 0x248);
  lVar4 = *(long *)(param_1 + 0x250);
  FUN_10a415b78(lVar2,lVar4,param_2);
  if (lVar4 != lVar2) {
    if ((ulong)(*(long *)(param_1 + 0x268) - *(long *)(param_1 + 0x260) >> 5) <=
        *(ulong *)(lVar2 + 0x18)) goto LAB_10a415b3c;
    FUN_10a4159e8(*(undefined4 *)
                   (*(long *)(*(long *)(param_1 + 0x260) + *(ulong *)(lVar2 + 0x18) * 0x20) + 100),
                  param_1);
    lVar4 = *(long *)(param_1 + 0x250);
  }
  if (lVar4 == lVar2) {
    lVar2 = *(long *)(param_1 + 0x4d0);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
      *(long *)(param_1 + 0x4d0) = lVar2;
    }
    if (0x104 < *(int *)(lVar2 + 0x18)) {
      puVar3 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_48,&UNK_10f656ab6,param_2);
      FUN_10a002a94(puVar3,auStack_48);
      *puVar3 = &PTR_FUN_110b99e70;
      ___cxa_throw(puVar3,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a415b3c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a415b40);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 10a415b78; end: 10a415c0b;  */

undefined8 * FUN_10a415b78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar5 = (undefined8 *)*param_1;
        if (-1 < (char)bVar3) {
          puVar5 = param_1;
        }
        _memcmp(puVar5,puVar1,uVar4);
        if ((int)puVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 4;
      puVar5 = param_2;
    } while (param_1 != param_2);
  }
  return puVar5;
}



/* Entry: 10a415c0c; end: 10a415d4f;  */

void FUN_10a415c0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(param_2 + 0x248);
  lVar4 = *(long *)(param_2 + 0x250);
  FUN_10a415b78(lVar2,lVar4,param_3);
  if (lVar4 != lVar2) {
    if ((ulong)(*(long *)(param_2 + 0x268) - *(long *)(param_2 + 0x260) >> 5) <=
        *(ulong *)(lVar2 + 0x18)) goto LAB_10a415d14;
    FUN_10a4159e8(param_1,param_2,*(long *)(param_2 + 0x260) + *(ulong *)(lVar2 + 0x18) * 0x20);
    lVar4 = *(long *)(param_2 + 0x250);
  }
  if (lVar4 == lVar2) {
    lVar2 = *(long *)(param_2 + 0x4d0);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_2 + 0x170) + 0xa20);
      *(long *)(param_2 + 0x4d0) = lVar2;
    }
    if (0x104 < *(int *)(lVar2 + 0x18)) {
      puVar3 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_58,&UNK_10f656ab6,param_3);
      FUN_10a002a94(puVar3,auStack_58);
      *puVar3 = &PTR_FUN_110b99e70;
      ___cxa_throw(puVar3,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a415d14:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a415d18);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 10a415d50; end: 10a415e87;  */

void FUN_10a415d50(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(param_1 + 0x248);
  lVar5 = *(long *)(param_1 + 0x250);
  FUN_10a415b78(lVar2,lVar5,param_2);
  if (lVar5 == lVar2) {
    lVar2 = *(long *)(param_1 + 0x4d0);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
      *(long *)(param_1 + 0x4d0) = lVar2;
    }
    if (0x104 < *(int *)(lVar2 + 0x18)) {
      puVar3 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_48,&UNK_10f656ab6,param_2);
      FUN_10a002a94(puVar3,auStack_48);
      *puVar3 = &PTR_FUN_110b99e70;
      ___cxa_throw(puVar3,&PTR_DAT_110b99e48,FUN_10a002a90);
      goto LAB_10a415e4c;
    }
  }
  else {
    if ((ulong)(*(long *)(param_1 + 0x268) - *(long *)(param_1 + 0x260) >> 5) <=
        *(ulong *)(lVar2 + 0x18)) {
LAB_10a415e4c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a415e50);
      (*pcVar1)();
    }
    pbVar4 = (byte *)(*(long *)(param_1 + 0x260) + *(ulong *)(lVar2 + 0x18) * 0x20 + 0x18);
    if (*pbVar4 - 1 < 2) {
      *pbVar4 = 3;
    }
  }
  return;
}



/* Entry: 10a415e88; end: 10a415fcb;  */

void FUN_10a415e88(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(param_1 + 0x248);
  lVar5 = *(long *)(param_1 + 0x250);
  FUN_10a415b78(lVar3,lVar5,param_2);
  if (lVar5 == lVar3) {
    lVar3 = *(long *)(param_1 + 0x4d0);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
      *(long *)(param_1 + 0x4d0) = lVar3;
    }
    if (0x104 < *(int *)(lVar3 + 0x18)) {
      puVar4 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_48,&UNK_10f656ab6,param_2);
      FUN_10a002a94(puVar4,auStack_48);
      *puVar4 = &PTR_FUN_110b99e70;
      ___cxa_throw(puVar4,&PTR_DAT_110b99e48,FUN_10a002a90);
      goto LAB_10a415f90;
    }
  }
  else {
    if ((ulong)(*(long *)(param_1 + 0x268) - *(long *)(param_1 + 0x260) >> 5) <=
        *(ulong *)(lVar3 + 0x18)) {
LAB_10a415f90:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a415f94);
      (*pcVar2)();
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x260) + *(ulong *)(lVar3 + 0x18) * 0x20);
    *(undefined1 *)(plVar1 + 3) = 0;
    lVar3 = 0x60;
    if (*(char *)(*plVar1 + 0x68) == '\0') {
      lVar3 = 0x5c;
    }
    uVar6 = *(undefined4 *)(*plVar1 + lVar3);
    *(undefined4 *)(plVar1 + 2) = uVar6;
    *(undefined4 *)((long)plVar1 + 0x14) = uVar6;
  }
  return;
}



/* Entry: 10a415fcc; end: 10a4160ff;  */

void FUN_10a415fcc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(param_1 + 0x248);
  lVar5 = *(long *)(param_1 + 0x250);
  FUN_10a415b78(lVar2,lVar5,param_2);
  if (lVar5 == lVar2) {
    lVar2 = *(long *)(param_1 + 0x4d0);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
      *(long *)(param_1 + 0x4d0) = lVar2;
    }
    if (0x104 < *(int *)(lVar2 + 0x18)) {
      puVar3 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_48,&UNK_10f656ab6,param_2);
      FUN_10a002a94(puVar3,auStack_48);
      *puVar3 = &PTR_FUN_110b99e70;
      ___cxa_throw(puVar3,&PTR_DAT_110b99e48,FUN_10a002a90);
      goto LAB_10a4160c4;
    }
  }
  else {
    if ((ulong)(*(long *)(param_1 + 0x268) - *(long *)(param_1 + 0x260) >> 5) <=
        *(ulong *)(lVar2 + 0x18)) {
LAB_10a4160c4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4160c8);
      (*pcVar1)();
    }
    pcVar4 = (char *)(*(long *)(param_1 + 0x260) + *(ulong *)(lVar2 + 0x18) * 0x20 + 0x18);
    if (*pcVar4 != '\x01') {
      *pcVar4 = '\x02';
    }
  }
  return;
}



/* Entry: 10a416100; end: 10a41619b;  */

void FUN_10a416100(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(param_2 + 0x248);
  lVar8 = *(long *)(param_2 + 0x250);
  FUN_10a415b78(lVar6,lVar8,param_3);
  if (lVar8 == lVar6) {
    uVar7 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    if ((ulong)(*(long *)(param_2 + 0x268) - *(long *)(param_2 + 0x260) >> 5) <=
        *(ulong *)(lVar6 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a41619c);
      (*pcVar5)();
    }
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x260) + *(ulong *)(lVar6 + 0x18) * 0x20);
    lVar6 = puVar2[1];
    uVar9 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar9;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar7;
  return;
}



/* Entry: 10a41619c; end: 10a41619f;  */

void FUN_10a41619c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar13 = *(undefined8 **)(param_2 + 0x260);
  puVar14 = *(undefined8 **)(param_2 + 0x268);
  if (puVar13 != puVar14) {
    puVar16 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    do {
      uVar3 = *puVar13;
      lVar4 = puVar13[1];
      if (puVar15 < puVar16) {
        *puVar15 = uVar3;
        puVar15[1] = lVar4;
        puVar11 = puVar10;
        if (lVar4 != 0) {
          plVar1 = (long *)(lVar4 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
        lVar12 = (long)puVar15 - (long)puVar10;
        uVar2 = (lVar12 >> 4) + 1;
        if (uVar2 >> 0x3c != 0) {
          param_1[1] = puVar15;
          param_1[2] = puVar16;
          *param_1 = puVar10;
          FUN_10a436944();
LAB_10a416304:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a416308);
          (*pcVar7)();
        }
        uVar9 = (long)puVar16 - (long)puVar10 >> 3;
        if (uVar9 <= uVar2) {
          uVar9 = uVar2;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar16 - (long)puVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        if (uVar9 >> 0x3c != 0) {
          param_1[1] = puVar15;
          param_1[2] = puVar16;
          *param_1 = puVar10;
          func_0x000109ffded8();
          goto LAB_10a416304;
        }
        lVar8 = uVar9 << 4;
        __Znwm();
        puVar15 = (undefined8 *)(lVar8 + lVar12);
        *puVar15 = uVar3;
        puVar15[1] = lVar4;
        if (lVar4 != 0) {
          plVar1 = (long *)(lVar4 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar16 = (undefined8 *)(lVar8 + uVar9 * 0x10);
        puVar11 = puVar15 + (lVar12 >> 4) * -2;
        _memcpy(puVar11,puVar10,lVar12);
        if (puVar10 != (undefined8 *)0x0) {
          __ZdlPv(puVar10);
        }
      }
      puVar15 = puVar15 + 2;
      puVar13 = puVar13 + 4;
      puVar10 = puVar11;
    } while (puVar13 != puVar14);
    param_1[1] = puVar15;
    param_1[2] = puVar16;
    *param_1 = puVar11;
  }
  return;
}



/* Entry: 10a4161a0; end: 10a41632f;  */

void FUN_10a4161a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar13 = *(undefined8 **)(param_2 + 0x260);
  puVar14 = *(undefined8 **)(param_2 + 0x268);
  if (puVar13 != puVar14) {
    puVar16 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    do {
      uVar3 = *puVar13;
      lVar4 = puVar13[1];
      if (puVar15 < puVar16) {
        *puVar15 = uVar3;
        puVar15[1] = lVar4;
        puVar11 = puVar10;
        if (lVar4 != 0) {
          plVar1 = (long *)(lVar4 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
        lVar12 = (long)puVar15 - (long)puVar10;
        uVar2 = (lVar12 >> 4) + 1;
        if (uVar2 >> 0x3c != 0) {
          param_1[1] = puVar15;
          param_1[2] = puVar16;
          *param_1 = puVar10;
          FUN_10a436944();
LAB_10a416304:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a416308);
          (*pcVar7)();
        }
        uVar9 = (long)puVar16 - (long)puVar10 >> 3;
        if (uVar9 <= uVar2) {
          uVar9 = uVar2;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar16 - (long)puVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        if (uVar9 >> 0x3c != 0) {
          param_1[1] = puVar15;
          param_1[2] = puVar16;
          *param_1 = puVar10;
          func_0x000109ffded8();
          goto LAB_10a416304;
        }
        lVar8 = uVar9 << 4;
        __Znwm();
        puVar15 = (undefined8 *)(lVar8 + lVar12);
        *puVar15 = uVar3;
        puVar15[1] = lVar4;
        if (lVar4 != 0) {
          plVar1 = (long *)(lVar4 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        puVar16 = (undefined8 *)(lVar8 + uVar9 * 0x10);
        puVar11 = puVar15 + (lVar12 >> 4) * -2;
        _memcpy(puVar11,puVar10,lVar12);
        if (puVar10 != (undefined8 *)0x0) {
          __ZdlPv(puVar10);
        }
      }
      puVar15 = puVar15 + 2;
      puVar13 = puVar13 + 4;
      puVar10 = puVar11;
    } while (puVar13 != puVar14);
    param_1[1] = puVar15;
    param_1[2] = puVar16;
    *param_1 = puVar11;
  }
  return;
}



/* Entry: 10a416330; end: 10a4163eb;  */

void FUN_10a416330(long param_1)

{
  long lVar1;
  float *pfVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fStack_8;
  float fStack_4;
  
  pfVar4 = *(float **)(param_1 + 0x268);
  if (*(float **)(param_1 + 0x260) != pfVar4) {
    lVar6 = *(long *)(param_1 + 0x4d0);
    pfVar5 = *(float **)(param_1 + 0x260) + 4;
    do {
      if (lVar6 == 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
        *(long *)(param_1 + 0x4d0) = lVar6;
      }
      lVar7 = *(long *)(pfVar5 + -4);
      if (*(int *)(lVar6 + 0x18) < 0x135) {
        lVar1 = 0x60;
        if (*(char *)(lVar7 + 0x68) == '\0') {
          lVar1 = 0x5c;
        }
        fVar8 = *(float *)(lVar7 + lVar1);
      }
      else {
        fStack_4 = *(float *)(lVar7 + 0x5c);
        if (*(char *)(lVar7 + 0x68) == '\0') {
          fStack_8 = *(float *)(lVar7 + 0x60);
          fStack_4 = fStack_4 + *(float *)(lVar7 + 100);
          bVar3 = false;
          if (!NAN(fStack_8) && !NAN(fStack_4)) {
            bVar3 = fStack_8 < fStack_4;
          }
        }
        else {
          fStack_8 = *(float *)(lVar7 + 0x60) - *(float *)(lVar7 + 100);
          bVar3 = fStack_4 < fStack_8;
        }
        pfVar2 = &fStack_8;
        if (!bVar3) {
          pfVar2 = &fStack_4;
        }
        fVar8 = *pfVar2;
      }
      *pfVar5 = fVar8;
      pfVar5[1] = fVar8;
      *(undefined1 *)(pfVar5 + 2) = 2;
      pfVar2 = pfVar5 + 4;
      pfVar5 = pfVar5 + 8;
    } while (pfVar2 != pfVar4);
  }
  return;
}



/* Entry: 10a4163ec; end: 10a4164cb;  */

void FUN_10a4163ec(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = *(long **)(param_2 + 0x260);
  plVar4 = *(long **)(param_2 + 0x268);
  do {
    if (plVar3 == plVar4) {
      return;
    }
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_2 + 0x4d0);
      if (lVar2 == 0) {
        lVar2 = *(long *)(*(long *)(param_2 + 0x170) + 0xa20);
        *(long *)(param_2 + 0x4d0) = lVar2;
      }
      if (*(int *)(lVar2 + 0x18) < 0x109) {
        if (*(byte *)(plVar3 + 3) == 1) goto LAB_10a41646c;
      }
      else if ((*(byte *)(plVar3 + 3) - 1 < 2) && ((*(byte *)(lVar1 + 0x69) & 1) == 0)) {
LAB_10a41646c:
        lStack_38 = (long)*(char *)(lVar1 + 0x3f);
        if (lStack_38 < 0) {
          lStack_40 = *(long *)(lVar1 + 0x28);
          lStack_38 = *(long *)(lVar1 + 0x30);
        }
        else {
          lStack_40 = lVar1 + 0x28;
        }
        FUN_10a4164cc(param_1,&lStack_40);
      }
    }
    plVar3 = plVar3 + 4;
  } while( true );
}



/* Entry: 10a4164cc; end: 10a416593;  */

void FUN_10a4164cc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar11 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar11;
    puVar8 = puVar8 + 2;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a043148();
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      plVar9 = (long *)param_1[0x4c];
      plVar10 = (long *)param_1[0x4d];
      do {
        if (plVar9 == plVar10) {
          return;
        }
        lVar7 = *plVar9;
        if (lVar7 != 0) {
          lVar6 = param_1[0x9a];
          if (lVar6 == 0) {
            lVar6 = *(long *)(param_1[0x2e] + 0xa20);
            param_1[0x9a] = lVar6;
          }
          cVar3 = (char)plVar9[3];
          if (*(int *)(lVar6 + 0x18) < 0x109) {
            if (cVar3 != '\x01') goto LAB_10a416618;
          }
          else if (((cVar3 == '\0') || (cVar3 == '\x03')) || (*(char *)(lVar7 + 0x69) == '\x01')) {
LAB_10a416618:
            lStack_68 = (long)*(char *)(lVar7 + 0x3f);
            if (lStack_68 < 0) {
              lStack_70 = *(long *)(lVar7 + 0x28);
              lStack_68 = *(long *)(lVar7 + 0x30);
            }
            else {
              lStack_70 = lVar7 + 0x28;
            }
            FUN_10a4164cc(extraout_x8,&lStack_70);
          }
        }
        plVar9 = plVar9 + 4;
      } while( true );
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar9 = param_1;
    FUN_10a04315c();
    puVar2 = (undefined8 *)((long)plVar9 + lVar7);
    uVar11 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar11;
    puVar8 = puVar2 + 2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar9 + uVar5 * 2);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10a416594; end: 10a416677;  */

void FUN_10a416594(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar4 = *(long **)(param_2 + 0x260);
  plVar5 = *(long **)(param_2 + 0x268);
  do {
    if (plVar4 == plVar5) {
      return;
    }
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_2 + 0x4d0);
      if (lVar3 == 0) {
        lVar3 = *(long *)(*(long *)(param_2 + 0x170) + 0xa20);
        *(long *)(param_2 + 0x4d0) = lVar3;
      }
      cVar1 = (char)plVar4[3];
      if (*(int *)(lVar3 + 0x18) < 0x109) {
        if (cVar1 != '\x01') goto LAB_10a416618;
      }
      else if (((cVar1 == '\0') || (cVar1 == '\x03')) || (*(char *)(lVar2 + 0x69) == '\x01')) {
LAB_10a416618:
        lStack_38 = (long)*(char *)(lVar2 + 0x3f);
        if (lStack_38 < 0) {
          lStack_40 = *(long *)(lVar2 + 0x28);
          lStack_38 = *(long *)(lVar2 + 0x30);
        }
        else {
          lStack_40 = lVar2 + 0x28;
        }
        FUN_10a4164cc(param_1,&lStack_40);
      }
    }
    plVar4 = plVar4 + 4;
  } while( true );
}



/* Entry: 10a416678; end: 10a4167ab;  */

byte FUN_10a416678(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(param_1 + 0x248);
  lVar5 = *(long *)(param_1 + 0x250);
  FUN_10a415b78(lVar2,lVar5,param_2);
  if (lVar5 == lVar2) {
    lVar2 = *(long *)(param_1 + 0x4d0);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
      *(long *)(param_1 + 0x4d0) = lVar2;
    }
    if (0x104 < *(int *)(lVar2 + 0x18)) {
      puVar3 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_48,&UNK_10f656ab6,param_2);
      FUN_10a002a94(puVar3,auStack_48);
      *puVar3 = &PTR_FUN_110b99e70;
      ___cxa_throw(puVar3,&PTR_DAT_110b99e48,FUN_10a002a90);
      goto LAB_10a416770;
    }
    bVar4 = 0;
  }
  else {
    if ((ulong)(*(long *)(param_1 + 0x268) - *(long *)(param_1 + 0x260) >> 5) <=
        *(ulong *)(lVar2 + 0x18)) {
LAB_10a416770:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a416774);
      (*pcVar1)();
    }
    bVar4 = *(byte *)(*(long *)(*(long *)(param_1 + 0x260) + *(ulong *)(lVar2 + 0x18) * 0x20) + 0x69
                     ) ^ 1;
  }
  return bVar4 & 1;
}



/* Entry: 10a4167ac; end: 10a4168db;  */

bool FUN_10a4167ac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(param_1 + 0x248);
  lVar5 = *(long *)(param_1 + 0x250);
  FUN_10a415b78(lVar3,lVar5,param_2);
  if (lVar5 == lVar3) {
    lVar3 = *(long *)(param_1 + 0x4d0);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
      *(long *)(param_1 + 0x4d0) = lVar3;
    }
    if (0x104 < *(int *)(lVar3 + 0x18)) {
      puVar4 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_48,&UNK_10f656ab6,param_2);
      FUN_10a002a94(puVar4,auStack_48);
      *puVar4 = &PTR_FUN_110b99e70;
      ___cxa_throw(puVar4,&PTR_DAT_110b99e48,FUN_10a002a90);
      goto LAB_10a4168a0;
    }
    bVar2 = false;
  }
  else {
    if ((ulong)(*(long *)(param_1 + 0x268) - *(long *)(param_1 + 0x260) >> 5) <=
        *(ulong *)(lVar3 + 0x18)) {
LAB_10a4168a0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4168a4);
      (*pcVar1)();
    }
    bVar2 = *(char *)(*(long *)(param_1 + 0x260) + *(ulong *)(lVar3 + 0x18) * 0x20 + 0x18) == '\x01'
    ;
  }
  return bVar2;
}



/* Entry: 10a4168dc; end: 10a416a03;  */

undefined4 FUN_10a4168dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(param_1 + 0x248);
  lVar4 = *(long *)(param_1 + 0x250);
  FUN_10a415b78(lVar2,lVar4,param_2);
  if (lVar4 == lVar2) {
    lVar2 = *(long *)(param_1 + 0x4d0);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
      *(long *)(param_1 + 0x4d0) = lVar2;
    }
    uVar5 = 0;
    if (0x104 < *(int *)(lVar2 + 0x18)) {
      puVar3 = (undefined8 *)0x120;
      ___cxa_allocate_exception(0);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_48,&UNK_10f656ab6,param_2);
      FUN_10a002a94(puVar3,auStack_48);
      *puVar3 = &PTR_FUN_110b99e70;
      ___cxa_throw(puVar3,&PTR_DAT_110b99e48,FUN_10a002a90);
      goto LAB_10a4169c8;
    }
  }
  else {
    if ((ulong)(*(long *)(param_1 + 0x268) - *(long *)(param_1 + 0x260) >> 5) <=
        *(ulong *)(lVar2 + 0x18)) {
LAB_10a4169c8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4169cc);
      (*pcVar1)();
    }
    uVar5 = *(undefined4 *)(*(long *)(param_1 + 0x260) + *(ulong *)(lVar2 + 0x18) * 0x20 + 0x10);
  }
  return uVar5;
}



/* Entry: 10a416a04; end: 10a416ae3;  */

void FUN_10a416a04(float param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = *param_2;
  bVar5 = *(byte *)(lVar6 + 0x68);
  fVar7 = -param_1;
  if (bVar5 == 0) {
    fVar7 = param_1;
  }
  fVar9 = *(float *)(lVar6 + 0x5c);
  fVar10 = *(float *)(lVar6 + 0x60);
  bVar1 = *(byte *)(lVar6 + 0x58);
  fVar8 = *(float *)(param_2 + 2);
  fVar7 = *(float *)(lVar6 + 0x54) * fVar7 + fVar8;
  *(float *)(param_2 + 2) = fVar7;
  *(float *)((long)param_2 + 0x14) = fVar8;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (fVar9 <= fVar7) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar7) && !NAN(fVar10)) {
      bVar2 = fVar7 < fVar10;
      bVar3 = fVar7 == fVar10;
      bVar4 = false;
    }
  }
  if (!bVar3 && bVar2 == bVar4) {
    if (bVar1 - 1 < 2) {
      fVar8 = fVar9 - fVar7;
      if (bVar5 == 0) {
        fVar8 = fVar7 - fVar10;
      }
      _fmodf(fVar8,fVar10 - fVar9);
      if (fVar10 - fVar9 <= 0.0) {
        fVar8 = 0.0;
      }
      if (bVar1 == 2) {
        bVar5 = bVar5 ^ 1;
        *(byte *)(lVar6 + 0x68) = bVar5;
      }
      fVar7 = fVar10 - fVar8;
      if (bVar5 == 0) {
        fVar7 = fVar9 + fVar8;
      }
      *(float *)(param_2 + 2) = fVar7;
    }
    else if (bVar1 == 0) {
      if (bVar5 == 0) {
        fVar9 = fVar10;
      }
      *(float *)(param_2 + 2) = fVar9;
      *(undefined1 *)(param_2 + 3) = 0;
    }
  }
  return;
}



/* Entry: 10a416ae4; end: 10a416cf7;  */

void FUN_10a416ae4(void)

{
  int iVar1;
  
  if ((bRam00000001137eb168 & 1) == 0) {
    iVar1 = 0x137eb168;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001137eb188 = 0x5f5f666c65735f5f;
      uRam00000001137eb190 = 0;
      uRam00000001137eb19f = 8;
      uRam00000001137eb1a0 = 0;
      func_0x000107c2b080(0x1137eb188);
      ___cxa_atexit(FUN_10a32edf4,0x1137eb188,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137eb168);
      return;
    }
  }
  return;
}



/* Entry: 10a416cf8; end: 10a418007;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a416cf8(undefined8 param_1,ulong param_2,ulong param_3,float param_4,code *******param_5,
                  code *******param_6,undefined8 *param_7)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  code *******pppppppcVar7;
  long *plVar8;
  undefined **ppuVar9;
  code *****pppppcVar10;
  undefined8 uVar11;
  code ******ppppppcVar12;
  undefined1 uVar13;
  code ******ppppppcVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  code ****ppppcVar18;
  undefined *puVar19;
  code *******pppppppcVar20;
  long lVar21;
  code *****pppppcVar22;
  code ******ppppppcVar23;
  code ******ppppppcVar24;
  ulong uVar25;
  code *****pppppcVar26;
  int iVar27;
  ulong uVar28;
  code *******pppppppcVar29;
  code ******ppppppcVar30;
  code *******pppppppcVar31;
  code *******pppppppcVar32;
  code *******pppppppcVar33;
  code *******pppppppcVar34;
  code *******pppppppcVar35;
  code *******unaff_x20;
  code **ppcVar36;
  code *******unaff_x21;
  code *******unaff_x22;
  code ***pppcVar37;
  undefined **unaff_x23;
  code *******unaff_x24;
  code ****ppppcVar38;
  code ******ppppppcVar39;
  code ******unaff_x25;
  code *******unaff_x26;
  code *****pppppcVar40;
  code *******unaff_x27;
  undefined8 unaff_x28;
  code ******ppppppcVar41;
  undefined4 uVar42;
  float fVar43;
  code *****pppppcVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  ulong unaff_d8;
  ulong unaff_d9;
  float fVar48;
  ulong unaff_d10;
  undefined8 unaff_d11;
  float fVar49;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  code ******ppppppcStack_5b0;
  code *******pppppppcStack_5a8;
  code ******ppppppcStack_5a0;
  code *******pppppppcStack_598;
  undefined8 uStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  code *******pppppppcStack_550;
  code *******pppppppcStack_548;
  code *******pppppppcStack_540;
  code ******ppppppcStack_538;
  code *******pppppppcStack_530;
  code *******pppppppcStack_528;
  code *******pppppppcStack_520;
  code *******pppppppcStack_518;
  code *******pppppppcStack_510;
  code *******pppppppcStack_508;
  undefined1 **ppuStack_500;
  code *pcStack_4f8;
  code *******pppppppcStack_4f0;
  code *******pppppppcStack_4e8;
  code *******pppppppcStack_4e0;
  code *******pppppppcStack_4d8;
  code *******pppppppcStack_4d0;
  code *******pppppppcStack_4c8;
  code *******pppppppcStack_4c0;
  code *******pppppppcStack_4b8;
  code *******pppppppcStack_4a8;
  code *******pppppppcStack_4a0;
  code *******pppppppcStack_498;
  code *******pppppppcStack_490;
  code *******pppppppcStack_488;
  code *******pppppppcStack_480;
  long lStack_478;
  float fStack_470;
  code *******pppppppcStack_460;
  code *******pppppppcStack_458;
  code *******pppppppcStack_450;
  code *******pppppppcStack_448;
  code *******pppppppcStack_440;
  code *******pppppppcStack_438;
  code *******pppppppcStack_430;
  code *******pppppppcStack_428;
  code *******pppppppcStack_420;
  code *******pppppppcStack_418;
  long lStack_400;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  code *******pppppppcStack_3d8;
  code *******pppppppcStack_3d0;
  code ******ppppppcStack_3c8;
  code *******pppppppcStack_3c0;
  code *******pppppppcStack_3b8;
  code *******pppppppcStack_3b0;
  code *******pppppppcStack_3a8;
  code *******pppppppcStack_3a0;
  code *******pppppppcStack_398;
  undefined1 *puStack_390;
  code *pcStack_388;
  code *******pppppppcStack_378;
  undefined8 *puStack_370;
  code *******pppppppcStack_368;
  code *******pppppppcStack_360;
  code ******ppppppcStack_358;
  code *******pppppppcStack_350;
  code *******pppppppcStack_348;
  code *******pppppppcStack_340;
  uint uStack_334;
  undefined8 uStack_330;
  uint uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  uint uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  float fStack_30c;
  undefined1 uStack_308;
  uint uStack_304;
  undefined4 uStack_300;
  float fStack_2fc;
  undefined1 uStack_2f8;
  undefined2 uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  code *****pppppcStack_2e0;
  float fStack_2d8;
  long *plStack_2c8;
  long *plStack_2b8;
  code ******ppppppcStack_2b0;
  code ******ppppppcStack_2a8;
  code *******pppppppcStack_2a0;
  undefined **ppuStack_298;
  code ******ppppppcStack_290;
  code *******pppppppcStack_288;
  code *******pppppppcStack_280;
  ulong uStack_278;
  float fStack_270;
  code ******ppppppcStack_268;
  code *******pppppppcStack_260;
  code *******pppppppcStack_258;
  code ******ppppppcStack_250;
  code ******ppppppcStack_248;
  code *******pppppppcStack_240;
  undefined **ppuStack_238;
  code *pcStack_230;
  code *pcStack_200;
  undefined **ppuStack_1f8;
  code *pcStack_1f0;
  code *pcStack_1c0;
  undefined **ppuStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  code *pcStack_170;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  code *pcStack_130;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  code *pcStack_f0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar14 = *param_5;
  pppppppcStack_378 = param_5;
  puStack_370 = param_7;
  pppppppcStack_368 = param_6;
  if (param_5[1] != ppppppcVar14) {
    unaff_x22 = (code *******)0x0;
    unaff_d11 = 0x3400000034000000;
    unaff_d12 = 0x3f800000;
    unaff_d13 = 0x3f000000;
    unaff_x23 = &PTR_DAT_110c41a40;
    unaff_x28 = 1;
    do {
      if ((code *******)((long)pppppppcStack_368[1] - (long)*pppppppcStack_368 >> 6) <= unaff_x22) {
LAB_10a417ea8:
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10a417eac);
        (*pcVar16)();
      }
      pppppppcStack_340 = (code *******)(ppppppcVar14 + (long)unaff_x22 * 10);
      pppppppcStack_360 = (code *******)pppppppcStack_340[4];
      unaff_x27 = (code *******)*puStack_370;
      pppppppcVar20 = (code *******)puStack_370[1];
      uStack_328 = uStack_328 & 0xffffff00;
      uStack_31c = 0;
      uStack_318 = uStack_318 & 0xffffff00;
      uStack_308 = 0;
      uStack_304 = uStack_304 & 0xffffff00;
      uStack_2f8 = 0;
      uStack_2f4 = 0;
      pppppppcStack_288 = (code *******)0x0;
      ppppppcStack_290 = (code ******)0x0;
      uStack_278 = 0;
      pppppppcStack_280 = (code *******)0x0;
      fStack_270 = 1.0;
      if (unaff_x27 == pppppppcVar20) {
        param_5 = &ppppppcStack_290;
        FUN_10a4402d8();
        unaff_x21 = pppppppcStack_360;
      }
      else {
        unaff_x25 = (code ******)0x0;
        uStack_330 = 0;
        ppppppcStack_358 = *pppppppcStack_368 + (long)unaff_x22 * 8;
        pppppppcStack_350 = unaff_x22;
        pppppppcStack_348 = pppppppcVar20;
        do {
          fVar47 = *(float *)(unaff_x27 + 2);
          unaff_d8 = (ulong)(uint)fVar47;
          if (0.0 <= fVar47) {
            ppppppcVar14 = *unaff_x27;
            unaff_d9 = (ulong)*(uint *)(ppppppcVar14 + 10);
            pppppcVar22 = ppppppcVar14[8];
            pppppcVar10 = ppppppcVar14[9];
            if (pppppcVar10 != (code *****)0x0) {
              pppppcVar40 = pppppcVar10 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppcVar40,0x10);
                if (bVar4) {
                  *pppppcVar40 = (code ****)((long)*pppppcVar40 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              do {
                ppppcVar18 = *pppppcVar40;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppcVar40,0x10);
                if (bVar4) {
                  *pppppcVar40 = (code ****)((long)ppppcVar18 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppcVar18 == (code ****)0x0) {
                (*(code *)(*pppppcVar10)[2])(pppppcVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar10);
              }
            }
            param_6 = pppppppcStack_340;
            FUN_10aa71aa0(&pppppppcStack_2a0,pppppcVar22);
            if ((unaff_x22 == (code *******)0x0) && (pppppppcStack_2a0 == (code *******)0x0)) {
              FUN_10a416ae4();
              param_6 = (code *******)0x1137eb188;
              FUN_10aa71aa0(&pppppppcStack_240,pppppcVar22);
              ppuVar1 = ppuStack_238;
              pppppppcStack_2a0 = pppppppcStack_240;
              ppuVar9 = ppuStack_298;
              pppppppcStack_240 = (code *******)0x0;
              ppuStack_238 = (undefined **)0x0;
              ppuStack_298 = ppuVar1;
              if (ppuVar9 != (undefined **)0x0) {
                ppuVar1 = ppuVar9 + 1;
                do {
                  puVar19 = *ppuVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar4) {
                    *ppuVar1 = puVar19 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (puVar19 == (undefined *)0x0) {
                  (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
                }
              }
              ppuVar9 = ppuStack_238;
              if (ppuStack_238 != (undefined **)0x0) {
                ppuVar1 = ppuStack_238 + 1;
                do {
                  puVar19 = *ppuVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar4) {
                    *ppuVar1 = puVar19 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (puVar19 == (undefined *)0x0) {
                  (**(code **)(*ppuStack_238 + 0x10))(ppuStack_238);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
                }
              }
            }
            pppppppcVar20 = pppppppcStack_2a0;
            if (pppppppcStack_2a0 != (code *******)0x0) {
              ppppppcVar14 = *unaff_x27;
              ppuStack_1b8 = &PTR_DAT_110bd9780;
              pcStack_230 = (code *)0x10a41aa28;
              pcStack_200 = (code *)0x10a440a60;
              ppuStack_1f8 = &PTR_DAT_110bd9798;
              pcStack_1f0 = (code *)0x10a41aa3c;
              pcStack_1b0 = FUN_10a41aa14;
              uStack_180 = 0x10a440a84;
              ppuStack_178 = &PTR_DAT_110bd97b0;
              pcStack_170 = (code *)0x10a41aa50;
              uStack_140 = 0x10a440aa8;
              ppuStack_138 = &PTR_DAT_110bd97c8;
              pcStack_130 = (code *)0x10a41aa64;
              uStack_100 = 0x10a440acc;
              ppuStack_f8 = &PTR_DAT_110bd97e0;
              pcStack_f0 = (code *)0x10a41aa78;
              if (*(int *)(ppppppcVar14 + 0xe) == 1) {
                pcStack_1f0 = (code *)0x10a41b090;
                pcStack_1b0 = FUN_10a41b020;
                pcStack_170 = FUN_10a41b1b8;
                pcStack_130 = FUN_10a41b1f8;
                pcStack_f0 = (code *)0x10a41b258;
                iVar27 = *(int *)((long)ppppppcVar14 + 0x74);
                if (iVar27 == 0) {
                  pcVar16 = FUN_10a41b344;
                }
                else {
                  pcVar16 = (code *)0x10a41b2d4;
LAB_10a417080:
                  if (iVar27 != 1) goto LAB_10a4170b0;
                }
LAB_10a4170a0:
                pcStack_230 = pcVar16;
              }
              else if (*(int *)(ppppppcVar14 + 0xe) == 2) {
                pcStack_1f0 = FUN_10a41ab2c;
                pcStack_1b0 = FUN_10a41aa8c;
                pcStack_170 = FUN_10a41ad9c;
                pcStack_130 = (code *)0x10a41ae04;
                pcStack_f0 = FUN_10a41ae88;
                iVar27 = *(int *)((long)ppppppcVar14 + 0x74);
                if (iVar27 != 0) {
                  pcVar16 = FUN_10a41af38;
                  goto LAB_10a417080;
                }
                pcVar16 = FUN_10a41af94;
                goto LAB_10a4170a0;
              }
LAB_10a4170b0:
              pcStack_1c0 = (code *)0x10a440a3c;
              ppuStack_238 = &PTR_DAT_110bd9780;
              pppppppcStack_240 = (code *******)0x10a440a3c;
              unaff_d10 = (ulong)*(uint *)((long)ppppppcVar14 + 0x5c);
              pppppppcVar31 = pppppppcStack_2a0;
              FUN_10aa7de14();
              if (pppppppcVar31 != (code *******)0x0) {
                if ((uStack_330 & 0x100000000) == 0) {
                  uVar42 = *(undefined4 *)(ppppppcStack_358 + 7);
                  uStack_2f0 = (code *******)ppppppcStack_358[6];
                }
                else {
                  uStack_2f0 = (code *******)CONCAT44(uStack_324,uStack_328);
                  uVar42 = uStack_320;
                }
                uStack_2e8 = (code ******)CONCAT44(uStack_2e8._4_4_,uVar42);
                uVar28 = unaff_d9;
                param_2 = unaff_d8;
                param_3 = unaff_d10;
                (*pcStack_1c0)(&uStack_2f0,pppppppcVar31,&pcStack_1c0);
                uStack_328 = (uint)uVar28;
                uStack_324 = (undefined4)param_2;
                uStack_320 = (undefined4)param_3;
                if ((uStack_330 & 0x100000000) == 0) {
                  uStack_31c = 1;
                }
                uStack_330 = CONCAT44(1,(undefined4)uStack_330);
              }
              pppppppcVar31 = pppppppcVar20;
              FUN_10aa7dffc();
              if (pppppppcVar31 != (code *******)0x0) {
                if ((uStack_330 & 1) == 0) {
                  fVar48 = *(float *)ppppppcStack_358;
                  fVar46 = *(float *)((long)ppppppcStack_358 + 0x14);
                  fVar50 = *(float *)(ppppppcStack_358 + 5);
                  fVar51 = (fVar48 - fVar46) - fVar50;
                  fVar49 = (fVar46 - fVar48) - fVar50;
                  fVar54 = (fVar50 - fVar48) - fVar46;
                  fVar50 = fVar48 + fVar46 + fVar50;
                  fVar48 = fVar51;
                  if (fVar51 <= fVar50) {
                    fVar48 = fVar50;
                  }
                  bVar5 = 2;
                  if (fVar49 <= fVar48) {
                    fVar49 = fVar48;
                    bVar5 = fVar50 < fVar51;
                  }
                  bVar6 = 3;
                  if (fVar54 <= fVar49) {
                    fVar54 = fVar49;
                    bVar6 = bVar5;
                  }
                  fVar43 = SQRT(fVar54 + 1.0) * 0.5;
                  fVar51 = 0.25 / fVar43;
                  fVar46 = (*(float *)(ppppppcStack_358 + 4) - *(float *)(ppppppcStack_358 + 1)) *
                           fVar51;
                  fVar52 = (*(float *)((long)ppppppcStack_358 + 4) +
                           *(float *)(ppppppcStack_358 + 2)) * fVar51;
                  fVar53 = (*(float *)(ppppppcStack_358 + 3) +
                           *(float *)((long)ppppppcStack_358 + 0x24)) * fVar51;
                  fVar50 = (*(float *)((long)ppppppcStack_358 + 4) -
                           *(float *)(ppppppcStack_358 + 2)) * fVar51;
                  fVar45 = (*(float *)(ppppppcStack_358 + 1) + *(float *)(ppppppcStack_358 + 4)) *
                           fVar51;
                  param_4 = fVar46;
                  fVar48 = fVar53;
                  fVar49 = fVar43;
                  fVar54 = fVar52;
                  if (bVar6 != 2) {
                    param_4 = fVar50;
                    fVar48 = fVar43;
                    fVar49 = fVar53;
                    fVar54 = fVar45;
                  }
                  fVar51 = (*(float *)(ppppppcStack_358 + 3) -
                           *(float *)((long)ppppppcStack_358 + 0x24)) * fVar51;
                  fVar53 = fVar43;
                  if (bVar6 != 0) {
                    fVar53 = fVar51;
                    fVar50 = fVar45;
                    fVar46 = fVar52;
                    fVar51 = fVar43;
                  }
                  if (bVar6 < 2) {
                    param_4 = fVar53;
                    fVar48 = fVar50;
                    fVar49 = fVar46;
                    fVar54 = fVar51;
                  }
                  uStack_2f0 = (code *******)CONCAT44(fVar49,fVar54);
                  uStack_2e8 = (code ******)CONCAT44(param_4,fVar48);
                }
                else {
                  uStack_2e8 = (code ******)CONCAT44(fStack_30c,uStack_310);
                  uStack_2f0 = (code *******)CONCAT44(uStack_314,uStack_318);
                }
                uVar28 = unaff_d9;
                param_2 = unaff_d8;
                param_3 = unaff_d10;
                (*pcStack_200)(&uStack_2f0,pppppppcVar31,&pcStack_200);
                uStack_318 = (uint)uVar28;
                uStack_314 = (undefined4)param_2;
                uStack_310 = (undefined4)param_3;
                if ((uStack_330 & 1) == 0) {
                  uStack_308 = 1;
                }
                uStack_330 = CONCAT44(uStack_330._4_4_,1);
                fStack_30c = param_4;
              }
              param_6 = pppppppcVar20;
              FUN_10aa7df08();
              if (param_6 != (code *******)0x0) {
                if (((ulong)unaff_x25 & 1) == 0) {
                  fVar48 = SQRT(*(float *)(ppppppcStack_358 + 4) * *(float *)(ppppppcStack_358 + 4)
                                + *(float *)((long)ppppppcStack_358 + 0x24) *
                                  *(float *)((long)ppppppcStack_358 + 0x24) +
                                *(float *)(ppppppcStack_358 + 5) * *(float *)(ppppppcStack_358 + 5))
                  ;
                  param_4 = SUB84(*ppppppcStack_358,0);
                  fVar54 = SUB84(ppppppcStack_358[2],0);
                  param_4 = param_4 * param_4;
                  fVar49 = (float)((ulong)*ppppppcStack_358 >> 0x20);
                  fVar50 = (float)((ulong)ppppppcStack_358[2] >> 0x20);
                  uStack_2f0 = (code *******)
                               CONCAT44(SQRT(fVar54 * fVar54 + fVar50 * fVar50 +
                                             *(float *)(ppppppcStack_358 + 3) *
                                             *(float *)(ppppppcStack_358 + 3)),
                                        SQRT(param_4 + fVar49 * fVar49 +
                                             *(float *)(ppppppcStack_358 + 1) *
                                             *(float *)(ppppppcStack_358 + 1)));
                }
                else {
                  uStack_2f0 = (code *******)CONCAT44(uStack_300,uStack_304);
                  fVar48 = fStack_2fc;
                }
                uStack_2e8 = (code ******)CONCAT44(uStack_2e8._4_4_,fVar48);
                uVar28 = unaff_d9;
                param_2 = unaff_d8;
                param_3 = unaff_d10;
                (*(code *)pppppppcStack_240)(&uStack_2f0,param_6,&pppppppcStack_240);
                uStack_304 = (uint)uVar28;
                uStack_300 = (undefined4)param_2;
                fStack_2fc = (float)param_3;
                if (((ulong)unaff_x25 & 1) == 0) {
                  uStack_2f8 = 1;
                }
                unaff_x25 = (code ******)0x1;
              }
              ppppppcVar14 = pppppppcVar20[0xb];
              ppppppcVar30 = pppppppcVar20[0xc];
              if (ppppppcVar30 != (code ******)0x0) {
                ppppppcVar12 = ppppppcVar30 + 1;
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar12,0x10);
                  if (bVar4) {
                    *ppppppcVar12 = (code *****)((long)*ppppppcVar12 + 1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              ppppppcStack_2b0 = ppppppcVar14;
              ppppppcStack_2a8 = ppppppcVar30;
              if ((ppppppcVar14 != (code ******)0x0) &&
                 (1.1920929e-07 < *(float *)(*unaff_x27 + 10))) {
                func_0x00010a416b78(unaff_d8);
                uStack_2f4 = 0x100;
                if ((int)ppppppcVar14 != 0) {
                  uStack_2f4 = 0x101;
                }
              }
              uStack_334 = (uint)unaff_x25;
              unaff_x22 = pppppppcStack_350;
              for (ppppppcVar14 = pppppppcVar20[0x1b]; pppppppcStack_350 = unaff_x22,
                  ppppppcVar14 != (code ******)0x0; ppppppcVar14 = (code ******)*ppppppcVar14) {
                if (pppppppcStack_288 != (code *******)0x0) {
                  pppppppcVar20 = (code *******)ppppppcVar14[5];
                  uVar28 = (long)pppppppcStack_288 - 1;
                  if (((ulong)pppppppcStack_288 & uVar28) == 0) {
                    pppppppcVar31 = (code *******)(uVar28 & (ulong)pppppppcVar20);
                  }
                  else {
                    pppppppcVar31 = pppppppcVar20;
                    if (pppppppcStack_288 <= pppppppcVar20) {
                      uVar17 = 0;
                      if (pppppppcStack_288 != (code *******)0x0) {
                        uVar17 = (ulong)pppppppcVar20 / (ulong)pppppppcStack_288;
                      }
                      pppppppcVar31 =
                           (code *******)((long)pppppppcVar20 - uVar17 * (long)pppppppcStack_288);
                    }
                  }
                  if ((ppppppcStack_290[(long)pppppppcVar31] != (code *****)0x0) &&
                     (ppppcVar18 = *ppppppcStack_290[(long)pppppppcVar31],
                     ppppcVar18 != (code ****)0x0)) {
LAB_10a4173dc:
                    pppppppcVar34 = (code *******)ppppcVar18[1];
                    if (pppppppcVar34 == pppppppcVar20) {
                      if ((code *******)ppppcVar18[5] != pppppppcVar20) goto LAB_10a417420;
                      uStack_2f0 = (code *******)&pppppppcStack_240;
                      uStack_2e8 = *unaff_x27;
                      pppppcStack_2e0 = ppppppcVar14[6];
                      fStack_2d8 = fVar47;
                      (*(*ppppcVar18[6])[2])(ppppcVar18[6],&uStack_2f0);
                      pppcVar37 = ppppcVar18[6];
                      ppppppcVar30 = ppppppcVar14 + 2;
                      func_0x00010a435c64(&uStack_2f0);
                      ppcVar36 = pppcVar37[2];
                      if (ppcVar36 < pppcVar37[3]) {
                        param_6 = (code *******)&uStack_2f0;
                        FUN_10a435510(ppcVar36);
                        ppcVar36 = ppcVar36 + 8;
                        pppcVar37[2] = ppcVar36;
                      }
                      else {
                        ppppppcVar12 = (code ******)(pppcVar37 + 1);
                        lVar21 = (long)ppcVar36 - (long)*ppppppcVar12;
                        ppppppcVar23 = (code ******)((lVar21 >> 6) + 1);
                        if ((ulong)ppppppcVar23 >> 0x3a != 0) {
                          FUN_10a435bc8();
                          goto LAB_10a417ea8;
                        }
                        uVar28 = (long)pppcVar37[3] - (long)*ppppppcVar12;
                        ppppppcVar41 = (code ******)((long)uVar28 >> 5);
                        if (ppppppcVar41 <= ppppppcVar23) {
                          ppppppcVar41 = ppppppcVar23;
                        }
                        if (0x7fffffffffffffbf < uVar28) {
                          ppppppcVar41 = (code ******)0x3ffffffffffffff;
                        }
                        ppppppcStack_248 = ppppppcVar12;
                        if (ppppppcVar41 == (code ******)0x0) {
                          ppppppcVar30 = (code ******)0x0;
                        }
                        else {
                          func_0x00010a435bdc();
                        }
                        pppppppcVar20 = (code *******)((long)ppppppcVar41 + lVar21);
                        ppppppcStack_250 = ppppppcVar41 + (long)ppppppcVar30 * 8;
                        ppppppcStack_268 = ppppppcVar41;
                        pppppppcStack_260 = pppppppcVar20;
                        pppppppcStack_258 = pppppppcVar20;
                        FUN_10a435510(pppppppcVar20,&uStack_2f0);
                        pppppppcStack_258 = pppppppcVar20 + 8;
                        param_6 = &ppppppcStack_268;
                        FUN_10a435ae4(ppppppcVar12);
                        ppcVar36 = pppcVar37[2];
                        func_0x00010a435c10(&ppppppcStack_268);
                      }
                      plVar8 = plStack_2b8;
                      pppcVar37[2] = ppcVar36;
                      if (plStack_2b8 != (long *)0x0) {
                        plVar2 = plStack_2b8 + 1;
                        do {
                          lVar21 = *plVar2;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar4) {
                            *plVar2 = lVar21 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (lVar21 == 0) {
                          (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                        }
                      }
                      plVar8 = plStack_2c8;
                      if (plStack_2c8 != (long *)0x0) {
                        plVar2 = plStack_2c8 + 1;
                        do {
                          lVar21 = *plVar2;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar4) {
                            *plVar2 = lVar21 + -1;
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (lVar21 == 0) {
                          (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                        }
                      }
                      if ((long)pppppcStack_2e0 < 0) {
                        __ZdlPv(uStack_2f0);
                      }
                      goto LAB_10a417b40;
                    }
                    if (((ulong)pppppppcStack_288 & uVar28) == 0) {
                      pppppppcVar34 = (code *******)((ulong)pppppppcVar34 & uVar28);
                    }
                    else if (pppppppcStack_288 <= pppppppcVar34) {
                      uVar17 = 0;
                      if (pppppppcStack_288 != (code *******)0x0) {
                        uVar17 = (ulong)pppppppcVar34 / (ulong)pppppppcStack_288;
                      }
                      pppppppcVar34 =
                           (code *******)((long)pppppppcVar34 - uVar17 * (long)pppppppcStack_288);
                    }
                    if (pppppppcVar34 == pppppppcVar31) goto LAB_10a417420;
                  }
                }
LAB_10a417428:
                pppppcVar22 = ppppppcVar14[6];
                if (pppppcVar22 == (code *****)0x0) {
LAB_10a417e60:
                  uVar11 = 0x120;
                  ___cxa_allocate_exception(0x120);
                  FUN_10a009538();
                  ___cxa_throw(uVar11,&PTR_DAT_110b99e48,FUN_10a002a90);
                  goto LAB_10a417ea8;
                }
                pppppcVar10 = pppppcVar22;
                ___dynamic_cast(pppppcVar22,&PTR_DAT_110c41a40,&PTR_DAT_110ba1ed8,0xfffffffffffffffe
                               );
                if (pppppcVar10 == (code *****)0x0) {
                  pppppcVar10 = pppppcVar22;
                  ___dynamic_cast(pppppcVar22,&PTR_DAT_110c41a40,&PTR_DAT_110bd9f00,
                                  0xfffffffffffffffe);
                  if (pppppcVar10 == (code *****)0x0) {
                    pppppcVar10 = pppppcVar22;
                    ___dynamic_cast(pppppcVar22,&PTR_DAT_110c41a40,&PTR_DAT_110ba1ad8,
                                    0xfffffffffffffffe);
                    if (pppppcVar10 == (code *****)0x0) {
                      pppppcVar10 = pppppcVar22;
                      ___dynamic_cast(pppppcVar22,&PTR_DAT_110c41a40,&PTR_DAT_110bd9e58,
                                      0xfffffffffffffffe);
                      if (pppppcVar10 == (code *****)0x0) {
                        ___dynamic_cast(pppppcVar22,&PTR_DAT_110c41a40,&PTR_DAT_110ba1ae8,
                                        0xfffffffffffffffe);
                        if (pppppcVar22 == (code *****)0x0) goto LAB_10a417e60;
                        ppppppcVar30 = (code ******)0x30;
                        __Znwm();
                        ppppppcVar30[3] = (code *****)0x0;
                        ppppppcVar30[2] = (code *****)0x0;
                        ppppppcVar30[5] = (code *****)0x0;
                        ppppppcVar30[4] = (code *****)0x0;
                        ppppppcVar30[1] = (code *****)0x0;
                        *ppppppcVar30 = (code *****)0x0;
                        *(undefined4 *)((long)ppppppcVar30 + 0x2c) = 0x3f800000;
                        *ppppppcVar30 = (code *****)&PTR_FUN_110bd9190;
                        uVar28 = unaff_d8;
                        (*(code *)**pppppcVar22)(pppppcVar22);
                        uVar42 = (undefined4)uVar28;
                      }
                      else {
                        ppppppcVar30 = (code ******)0x30;
                        __Znwm();
                        ppppppcVar30[3] = (code *****)0x0;
                        ppppppcVar30[2] = (code *****)0x0;
                        ppppppcVar30[5] = (code *****)0x0;
                        ppppppcVar30[4] = (code *****)0x0;
                        ppppppcVar30[1] = (code *****)0x0;
                        *ppppppcVar30 = (code *****)0x0;
                        *ppppppcVar30 = (code *****)&PTR_FUN_110bd9130;
                        uVar28 = unaff_d8;
                        (*(code *)**pppppcVar10)(pppppcVar10);
                        uVar42 = (undefined4)uVar28;
                      }
                      *(undefined4 *)(ppppppcVar30 + 4) = uVar42;
                      *(int *)((long)ppppppcVar30 + 0x24) = (int)param_2;
                      *(int *)(ppppppcVar30 + 5) = (int)param_3;
                      *(float *)((long)ppppppcVar30 + 0x2c) = param_4;
                    }
                    else {
                      ppppppcVar30 = (code ******)0x30;
                      __Znwm();
                      ppppppcVar30[3] = (code *****)0x0;
                      ppppppcVar30[2] = (code *****)0x0;
                      ppppppcVar30[5] = (code *****)0x0;
                      ppppppcVar30[4] = (code *****)0x0;
                      ppppppcVar30[1] = (code *****)0x0;
                      *ppppppcVar30 = (code *****)0x0;
                      *ppppppcVar30 = (code *****)&PTR_FUN_110bd90d0;
                      uVar28 = unaff_d8;
                      (*(code *)**pppppcVar10)(pppppcVar10);
                      *(int *)(ppppppcVar30 + 4) = (int)uVar28;
                      *(int *)((long)ppppppcVar30 + 0x24) = (int)param_2;
                      *(int *)(ppppppcVar30 + 5) = (int)param_3;
                    }
                  }
                  else {
                    ppppppcVar30 = (code ******)0x28;
                    __Znwm();
                    ppppppcVar30[4] = (code *****)0x0;
                    ppppppcVar30[1] = (code *****)0x0;
                    *ppppppcVar30 = (code *****)0x0;
                    ppppppcVar30[3] = (code *****)0x0;
                    ppppppcVar30[2] = (code *****)0x0;
                    *ppppppcVar30 = (code *****)&PTR_FUN_110bd9070;
                    uVar28 = unaff_d8;
                    (*(code *)**pppppcVar10)(pppppcVar10);
                    *(int *)(ppppppcVar30 + 4) = (int)uVar28;
                    *(int *)((long)ppppppcVar30 + 0x24) = (int)param_2;
                  }
                }
                else {
                  ppppppcVar30 = (code ******)0x28;
                  __Znwm();
                  ppppppcVar30[4] = (code *****)0x0;
                  ppppppcVar30[1] = (code *****)0x0;
                  *ppppppcVar30 = (code *****)0x0;
                  ppppppcVar30[3] = (code *****)0x0;
                  ppppppcVar30[2] = (code *****)0x0;
                  *ppppppcVar30 = (code *****)&PTR_DAT_110bd8fd0;
                  uVar28 = unaff_d8;
                  (*(code *)**pppppcVar10)(pppppcVar10);
                  *(int *)(ppppppcVar30 + 4) = (int)uVar28;
                }
                ppppppcVar12 = ppppppcVar14 + 2;
                func_0x00010a435c64(&uStack_2f0);
                pppppppcVar20 = (code *******)ppppppcVar30[2];
                if (pppppppcVar20 < ppppppcVar30[3]) {
                  param_6 = (code *******)&uStack_2f0;
                  FUN_10a436440(pppppppcVar20);
                  pppppppcVar31 = pppppppcVar20 + 8;
                  ppppppcVar30[2] = (code *****)pppppppcVar31;
                }
                else {
                  ppppppcVar23 = ppppppcVar30 + 1;
                  lVar21 = (long)pppppppcVar20 - (long)*ppppppcVar23;
                  ppppppcVar41 = (code ******)((lVar21 >> 6) + 1);
                  if ((ulong)ppppppcVar41 >> 0x3a != 0) {
                    FUN_10a435bc8();
                    goto LAB_10a417ea8;
                  }
                  uVar28 = (long)ppppppcVar30[3] - (long)*ppppppcVar23;
                  ppppppcVar39 = (code ******)((long)uVar28 >> 5);
                  if (ppppppcVar39 <= ppppppcVar41) {
                    ppppppcVar39 = ppppppcVar41;
                  }
                  if (0x7fffffffffffffbf < uVar28) {
                    ppppppcVar39 = (code ******)0x3ffffffffffffff;
                  }
                  ppppppcStack_248 = ppppppcVar23;
                  if (ppppppcVar39 == (code ******)0x0) {
                    ppppppcVar12 = (code ******)0x0;
                  }
                  else {
                    func_0x00010a435bdc();
                  }
                  pppppppcVar20 = (code *******)((long)ppppppcVar39 + lVar21);
                  ppppppcStack_250 = ppppppcVar39 + (long)ppppppcVar12 * 8;
                  ppppppcStack_268 = ppppppcVar39;
                  pppppppcStack_260 = pppppppcVar20;
                  pppppppcStack_258 = pppppppcVar20;
                  FUN_10a436440(pppppppcVar20,&uStack_2f0);
                  pppppppcStack_258 = pppppppcVar20 + 8;
                  param_6 = &ppppppcStack_268;
                  FUN_10a435ae4(ppppppcVar23);
                  pppppppcVar31 = (code *******)ppppppcVar30[2];
                  func_0x00010a435c10(&ppppppcStack_268);
                }
                plVar8 = plStack_2b8;
                ppppppcVar30[2] = (code *****)pppppppcVar31;
                if (plStack_2b8 != (long *)0x0) {
                  plVar2 = plStack_2b8 + 1;
                  do {
                    lVar21 = *plVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar4) {
                      *plVar2 = lVar21 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar21 == 0) {
                    (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                  }
                }
                plVar8 = plStack_2c8;
                if (plStack_2c8 != (long *)0x0) {
                  plVar2 = plStack_2c8 + 1;
                  do {
                    lVar21 = *plVar2;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar4) {
                      *plVar2 = lVar21 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (lVar21 == 0) {
                    (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                  }
                }
                if ((long)pppppcStack_2e0 < 0) {
                  __ZdlPv(uStack_2f0);
                }
                unaff_x26 = pppppppcStack_288;
                pppppppcVar31 = (code *******)ppppppcVar14[5];
                if (pppppppcStack_288 != (code *******)0x0) {
                  uVar28 = (long)pppppppcStack_288 - 1;
                  if (((ulong)pppppppcStack_288 & uVar28) == 0) {
                    pppppppcVar20 = (code *******)(uVar28 & (ulong)pppppppcVar31);
                  }
                  else {
                    pppppppcVar20 = pppppppcVar31;
                    if (pppppppcStack_288 <= pppppppcVar31) {
                      uVar17 = 0;
                      if (pppppppcStack_288 != (code *******)0x0) {
                        uVar17 = (ulong)pppppppcVar31 / (ulong)pppppppcStack_288;
                      }
                      pppppppcVar20 =
                           (code *******)((long)pppppppcVar31 - uVar17 * (long)pppppppcStack_288);
                    }
                  }
                  pppppcVar22 = ppppppcStack_290[(long)pppppppcVar20];
                  if (pppppcVar22 != (code *****)0x0) {
                    do {
                      while( true ) {
                        pppppcVar22 = (code *****)*pppppcVar22;
                        if (pppppcVar22 == (code *****)0x0) goto LAB_10a417890;
                        pppppppcVar34 = (code *******)pppppcVar22[1];
                        if (pppppppcVar34 != pppppppcVar31) break;
                        if ((code *******)pppppcVar22[5] == pppppppcVar31) {
                          (*(code *)(*ppppppcVar30)[1])(ppppppcVar30);
                          goto LAB_10a417b40;
                        }
                      }
                      if (((ulong)pppppppcStack_288 & uVar28) == 0) {
                        pppppppcVar34 = (code *******)((ulong)pppppppcVar34 & uVar28);
                      }
                      else if (pppppppcStack_288 <= pppppppcVar34) {
                        uVar17 = 0;
                        if (pppppppcStack_288 != (code *******)0x0) {
                          uVar17 = (ulong)pppppppcVar34 / (ulong)pppppppcStack_288;
                        }
                        pppppppcVar34 =
                             (code *******)((long)pppppppcVar34 - uVar17 * (long)pppppppcStack_288);
                      }
                    } while (pppppppcVar34 == pppppppcVar20);
                  }
                }
LAB_10a417890:
                pppppppcVar34 = (code *******)0x38;
                __Znwm();
                uStack_2e8 = (code ******)&ppppppcStack_290;
                pppppcStack_2e0 = (code *****)0x0;
                *pppppppcVar34 = (code ******)0x0;
                pppppppcVar34[1] = (code ******)pppppppcVar31;
                uStack_2f0 = pppppppcVar34;
                if (*(char *)((long)ppppppcVar14 + 0x27) < '\0') {
                  param_6 = (code *******)ppppppcVar14[2];
                  func_0x000107c3192c(pppppppcVar34 + 2,param_6,ppppppcVar14[3]);
                }
                else {
                  ppppppcVar23 = (code ******)ppppppcVar14[3];
                  ppppppcVar12 = (code ******)ppppppcVar14[2];
                  pppppppcVar34[4] = (code ******)ppppppcVar14[4];
                  pppppppcVar34[3] = ppppppcVar23;
                  pppppppcVar34[2] = ppppppcVar12;
                }
                pppppppcVar34[5] = (code ******)ppppppcVar14[5];
                pppppppcVar34[6] = ppppppcVar30;
                pppppcStack_2e0 = (code *****)CONCAT71(pppppcStack_2e0._1_7_,1);
                param_2 = (ulong)(uint)fStack_270;
                if ((unaff_x26 == (code *******)0x0) ||
                   (param_3 = (ulong)(uint)(fStack_270 * (float)unaff_x26),
                   fStack_270 * (float)unaff_x26 < (float)(uStack_278 + 1))) {
                  uVar28 = 1;
                  if ((code *******)0x2 < unaff_x26) {
                    uVar28 = (ulong)(((ulong)unaff_x26 & (long)unaff_x26 - 1U) != 0);
                  }
                  pppppppcVar20 = (code *******)(uVar28 | (long)unaff_x26 << 1);
                  pppppppcVar29 = (code *******)(long)((float)(uStack_278 + 1) / fStack_270);
                  if (pppppppcVar20 <= pppppppcVar29) {
                    pppppppcVar20 = pppppppcVar29;
                  }
                  if ((long)pppppppcVar20 - 1U == 0) {
                    pppppppcVar20 = (code *******)0x2;
                  }
                  else if (((ulong)pppppppcVar20 & (long)pppppppcVar20 - 1U) != 0) {
                    __ZNSt3__112__next_primeEm();
                  }
                  pppppppcVar29 = pppppppcStack_288;
                  if (pppppppcStack_288 < pppppppcVar20) {
LAB_10a417960:
                    if ((ulong)pppppppcVar20 >> 0x3d != 0) {
                      func_0x000109ffded8();
                      goto LAB_10a417ea8;
                    }
                    ppppppcVar30 = (code ******)((long)pppppppcVar20 << 3);
                    __Znwm();
                    bVar4 = ppppppcStack_290 != (code ******)0x0;
                    ppppppcStack_290 = ppppppcVar30;
                    if (bVar4) {
                      __ZdlPv();
                    }
                    pppppppcVar29 = (code *******)0x0;
                    do {
                      ppppppcStack_290[(long)pppppppcVar29] = (code *****)0x0;
                      pppppppcVar29 = (code *******)((long)pppppppcVar29 + 1);
                    } while (pppppppcVar20 != pppppppcVar29);
                    pppppppcStack_288 = pppppppcVar20;
                    if (pppppppcStack_280 != (code *******)0x0) {
                      pppppppcVar29 = (code *******)pppppppcStack_280[1];
                      uVar28 = (long)pppppppcVar20 - 1;
                      if (((ulong)pppppppcVar20 & uVar28) == 0) {
                        pppppppcVar29 = (code *******)((ulong)pppppppcVar29 & uVar28);
                      }
                      else if (pppppppcVar20 <= pppppppcVar29) {
                        uVar17 = 0;
                        if (pppppppcVar20 != (code *******)0x0) {
                          uVar17 = (ulong)pppppppcVar29 / (ulong)pppppppcVar20;
                        }
                        pppppppcVar29 =
                             (code *******)((long)pppppppcVar29 - uVar17 * (long)pppppppcVar20);
                      }
                      ppppppcStack_290[(long)pppppppcVar29] = (code *****)&pppppppcStack_280;
                      pppppppcVar32 = (code *******)*pppppppcStack_280;
                      pppppppcVar7 = pppppppcStack_280;
                      while (pppppppcVar32 != (code *******)0x0) {
                        pppppppcVar35 = (code *******)pppppppcVar32[1];
                        if (((ulong)pppppppcVar20 & uVar28) == 0) {
                          pppppppcVar35 = (code *******)((ulong)pppppppcVar35 & uVar28);
                        }
                        else if (pppppppcVar20 <= pppppppcVar35) {
                          uVar17 = 0;
                          if (pppppppcVar20 != (code *******)0x0) {
                            uVar17 = (ulong)pppppppcVar35 / (ulong)pppppppcVar20;
                          }
                          pppppppcVar35 =
                               (code *******)((long)pppppppcVar35 - uVar17 * (long)pppppppcVar20);
                        }
                        pppppppcVar33 = pppppppcVar32;
                        if (pppppppcVar35 != pppppppcVar29) {
                          if (ppppppcStack_290[(long)pppppppcVar35] == (code *****)0x0) {
                            ppppppcStack_290[(long)pppppppcVar35] = (code *****)pppppppcVar7;
                            pppppppcVar29 = pppppppcVar35;
                          }
                          else {
                            *pppppppcVar7 = *pppppppcVar32;
                            *pppppppcVar32 = (code ******)*ppppppcStack_290[(long)pppppppcVar35];
                            *ppppppcStack_290[(long)pppppppcVar35] = (code ****)pppppppcVar32;
                            pppppppcVar33 = pppppppcVar7;
                          }
                        }
                        pppppppcVar7 = pppppppcVar33;
                        pppppppcVar32 = (code *******)*pppppppcVar33;
                      }
                    }
                  }
                  else if (pppppppcVar20 < pppppppcStack_288) {
                    param_2 = (ulong)(uint)fStack_270;
                    pppppppcVar32 = (code *******)(long)((float)uStack_278 / fStack_270);
                    if ((pppppppcStack_288 < (code *******)0x3) ||
                       (((ulong)pppppppcStack_288 & (long)pppppppcStack_288 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if ((code *******)0x1 < pppppppcVar32) {
                      pppppppcVar32 =
                           (code *******)(1L << (-LZCOUNT((long)pppppppcVar32 + -1) & 0x3fU));
                    }
                    ppppppcVar30 = ppppppcStack_290;
                    if (pppppppcVar20 <= pppppppcVar32) {
                      pppppppcVar20 = pppppppcVar32;
                    }
                    if (pppppppcVar20 < pppppppcVar29) {
                      if (pppppppcVar20 != (code *******)0x0) goto LAB_10a417960;
                      ppppppcStack_290 = (code ******)0x0;
                      if (ppppppcVar30 != (code ******)0x0) {
                        __ZdlPv();
                      }
                      pppppppcStack_288 = (code *******)0x0;
                    }
                  }
                  unaff_x26 = pppppppcStack_288;
                  if (((ulong)pppppppcStack_288 & (long)pppppppcStack_288 - 1U) == 0) {
                    pppppppcVar20 =
                         (code *******)((long)pppppppcStack_288 - 1U & (ulong)pppppppcVar31);
                  }
                  else {
                    pppppppcVar20 = pppppppcVar31;
                    if (pppppppcStack_288 <= pppppppcVar31) {
                      uVar28 = 0;
                      if (pppppppcStack_288 != (code *******)0x0) {
                        uVar28 = (ulong)pppppppcVar31 / (ulong)pppppppcStack_288;
                      }
                      pppppppcVar20 =
                           (code *******)((long)pppppppcVar31 - uVar28 * (long)pppppppcStack_288);
                    }
                  }
                }
                pppppcVar22 = ppppppcStack_290[(long)pppppppcVar20];
                if (pppppcVar22 == (code *****)0x0) {
                  *pppppppcVar34 = (code ******)pppppppcStack_280;
                  ppppppcStack_290[(long)pppppppcVar20] = (code *****)&pppppppcStack_280;
                  pppppppcStack_280 = pppppppcVar34;
                  if (*pppppppcVar34 != (code ******)0x0) {
                    pppppppcVar20 = (code *******)(*pppppppcVar34)[1];
                    if (((ulong)unaff_x26 & (long)unaff_x26 - 1U) == 0) {
                      pppppppcVar20 = (code *******)((ulong)pppppppcVar20 & (long)unaff_x26 - 1U);
                    }
                    else if (unaff_x26 <= pppppppcVar20) {
                      uVar28 = 0;
                      if (unaff_x26 != (code *******)0x0) {
                        uVar28 = (ulong)pppppppcVar20 / (ulong)unaff_x26;
                      }
                      pppppppcVar20 = (code *******)((long)pppppppcVar20 - uVar28 * (long)unaff_x26)
                      ;
                    }
                    ppppppcStack_290[(long)pppppppcVar20] = (code *****)pppppppcVar34;
                  }
                }
                else {
                  *pppppppcVar34 = (code ******)*pppppcVar22;
                  *pppppcVar22 = (code ****)pppppppcVar34;
                }
                uStack_278 = uStack_278 + 1;
LAB_10a417b40:
                ppppppcVar30 = ppppppcStack_2a8;
                unaff_x22 = pppppppcStack_350;
              }
              unaff_x25 = (code ******)(ulong)uStack_334;
              if (ppppppcVar30 != (code ******)0x0) {
                ppppppcVar14 = ppppppcVar30 + 1;
                do {
                  pppppcVar22 = *ppppppcVar14;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar14,0x10);
                  if (bVar4) {
                    *ppppppcVar14 = (code *****)((long)pppppcVar22 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (pppppcVar22 == (code *****)0x0) {
                  (*(code *)(*ppppppcVar30)[2])(ppppppcVar30);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar30);
                }
              }
              (*(code *)*ppuStack_f8)(&ppuStack_f8);
              (*(code *)*ppuStack_138)(&ppuStack_138);
              (*(code *)*ppuStack_178)(&ppuStack_178);
              (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
              (*(code *)*ppuStack_1f8)(&ppuStack_1f8);
              (*(code *)*ppuStack_238)(&ppuStack_238);
            }
            ppuVar9 = ppuStack_298;
            pppppppcVar20 = pppppppcStack_348;
            if (ppuStack_298 != (undefined **)0x0) {
              ppuVar1 = ppuStack_298 + 1;
              do {
                puVar19 = *ppuVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                if (bVar4) {
                  *ppuVar1 = puVar19 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (puVar19 == (undefined *)0x0) {
                (**(code **)(*ppuStack_298 + 0x10))(ppuStack_298);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
                pppppppcVar20 = pppppppcStack_348;
              }
            }
          }
          unaff_x21 = pppppppcStack_360;
          unaff_x27 = unaff_x27 + 4;
          pppppppcVar31 = pppppppcStack_280;
        } while (unaff_x27 != pppppppcVar20);
        for (; pppppppcVar31 != (code *******)0x0; pppppppcVar31 = (code *******)*pppppppcVar31) {
          (*(code *)(*pppppppcVar31[6])[3])();
        }
        param_5 = &ppppppcStack_290;
        FUN_10a4402d8();
        if ((uStack_330 & 0x100000000) != 0) {
          param_6 = (code *******)&uStack_328;
          param_5 = unaff_x21;
          FUN_10a3e3894();
        }
        if ((uStack_330 & 1) != 0) {
          param_6 = (code *******)&uStack_318;
          param_5 = unaff_x21;
          FUN_10a3e82bc();
        }
        unaff_x20 = (code *******)0x0;
        if (((ulong)unaff_x25 & 1) != 0) {
          param_6 = (code *******)&uStack_304;
          param_5 = unaff_x21;
          FUN_10a3e814c();
        }
      }
      unaff_x24 = (code *******)0x10a440a3c;
      if ((uStack_2f4._1_1_ == '\x01') &&
         (param_5 = (code *******)unaff_x21[6], param_5 != (code *******)0x0)) {
        param_6 = (code *******)(ulong)(byte)uStack_2f4;
        func_0x00010a3e4590();
      }
      unaff_x22 = (code *******)((long)unaff_x22 + 1);
      ppppppcVar14 = *pppppppcStack_378;
      pppppppcVar20 =
           (code *******)
           (((long)pppppppcStack_378[1] - (long)ppppppcVar14 >> 4) * -0x3333333333333333);
    } while (unaff_x22 <= pppppppcVar20 && (long)pppppppcVar20 - (long)unaff_x22 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  pppppppcVar31 = param_5;
  __Unwind_Resume();
  uStack_3f0 = unaff_d9;
  uStack_3e8 = unaff_d8;
  uStack_3e0 = unaff_x28;
  pppppppcStack_3d8 = unaff_x27;
  pppppppcStack_3d0 = unaff_x26;
  ppppppcStack_3c8 = unaff_x25;
  pppppppcStack_3c0 = unaff_x24;
  pppppppcStack_3b8 = (code *******)unaff_x23;
  pppppppcStack_3b0 = unaff_x22;
  pppppppcStack_3a8 = unaff_x21;
  pppppppcStack_3a0 = unaff_x20;
  pppppppcStack_398 = param_5;
  puStack_390 = &stack0xfffffffffffffff0;
  pcStack_388 = FUN_10a418008;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar20 = pppppppcVar31;
  if (pppppppcVar31[0x42][6] == (code *****)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      if (pppppppcVar31[0x65] != (code ******)0x0) {
        pcStack_388 = FUN_10a418008;
        ppppppcVar14 = pppppppcVar31[100];
        while (ppppppcVar14 != (code ******)0x0) {
          ppppppcVar14 = (code ******)*ppppppcVar14;
          __ZdlPv();
        }
        pppppppcVar31[100] = (code ******)0x0;
        ppppppcVar14 = pppppppcVar31[99];
        if (ppppppcVar14 != (code ******)0x0) {
          ppppppcVar30 = (code ******)0x0;
          do {
            pppppppcVar31[0x62][(long)ppppppcVar30] = (code *****)0x0;
            ppppppcVar30 = (code ******)((long)ppppppcVar30 + 1);
          } while (ppppppcVar14 != ppppppcVar30);
        }
        pppppppcVar31[0x65] = (code ******)0x0;
      }
      return;
    }
  }
  else {
    unaff_x20 = (code *******)pppppppcVar31[0x4f];
    unaff_x24 = (code *******)pppppppcVar31[0x50];
    unaff_x21 = (code *******)((long)unaff_x24 - (long)unaff_x20);
    ppppppcVar14 = pppppppcVar31[0x57];
    unaff_x22 = (code *******)pppppppcVar31[0x55];
    if ((code *******)((long)ppppppcVar14 - (long)unaff_x22) < unaff_x21) {
      unaff_x23 = (undefined **)((long)unaff_x21 >> 4);
      if (unaff_x22 != (code *******)0x0) {
        pppppppcVar31[0x56] = (code ******)unaff_x22;
        pppppppcVar20 = unaff_x22;
        __ZdlPv();
        ppppppcVar14 = (code ******)0x0;
        pppppppcVar31[0x55] = (code ******)0x0;
        pppppppcVar31[0x56] = (code ******)0x0;
        pppppppcVar31[0x57] = (code ******)0x0;
      }
      if ((ulong)unaff_x23 >> 0x3c != 0) goto LAB_10a418cb0;
      pppppppcVar20 = (code *******)((long)ppppppcVar14 >> 3);
      if ((code *******)((long)ppppppcVar14 >> 3) <= unaff_x23) {
        pppppppcVar20 = (code *******)unaff_x23;
      }
      if ((code ******)0x7fffffffffffffef < ppppppcVar14) {
        pppppppcVar20 = (code *******)0xfffffffffffffff;
      }
      if ((ulong)pppppppcVar20 >> 0x3c != 0) goto LAB_10a418cb0;
      FUN_10a436570();
      pppppppcVar31[0x55] = (code ******)pppppppcVar20;
      pppppppcVar31[0x56] = (code ******)pppppppcVar20;
      pppppppcVar31[0x57] = (code ******)(pppppppcVar20 + (long)param_6 * 2);
      unaff_x22 = pppppppcVar20;
LAB_10a418164:
      if (unaff_x24 != unaff_x20) {
        param_6 = unaff_x20;
        _memmove(unaff_x22,unaff_x20,unaff_x21);
      }
      pppppppcVar20 = (code *******)((long)unaff_x22 + (long)unaff_x21);
    }
    else {
      unaff_x23 = (undefined **)pppppppcVar31[0x56];
      if (unaff_x21 <= (code *******)((long)unaff_x23 - (long)unaff_x22)) goto LAB_10a418164;
      unaff_x21 = (code *******)((long)unaff_x20 + ((long)unaff_x23 - (long)unaff_x22));
      if ((code *******)unaff_x23 != unaff_x22) {
        _memmove(unaff_x22);
        unaff_x23 = (undefined **)pppppppcVar31[0x56];
        param_6 = unaff_x20;
      }
      unaff_x20 = (code *******)((long)unaff_x24 - (long)unaff_x21);
      if (unaff_x20 != (code *******)0x0) {
        param_6 = unaff_x21;
        _memmove(unaff_x23,unaff_x21,unaff_x20);
      }
      pppppppcVar20 = (code *******)((long)unaff_x23 + (long)unaff_x20);
    }
    pppppppcVar31[0x56] = (code ******)pppppppcVar20;
    pppppppcStack_4a8 = (code *******)0x0;
    pppppppcStack_4a0 = (code *******)0x0;
    pppppppcStack_498 = (code *******)0x0;
    unaff_x27 = (code *******)pppppppcVar31[0x55];
    if (unaff_x27 != pppppppcVar20) {
      unaff_x25 = (code ******)0x9ddfea08eb382d69;
      unaff_x20 = pppppppcVar31 + 0x5d;
      pppppppcStack_4e8 = pppppppcVar31 + 0x5f;
      pppppppcVar34 = param_6;
      pppppppcStack_4f0 = pppppppcVar20;
      pppppppcStack_4c8 = pppppppcVar31;
      do {
        pppppppcVar20 = (code *******)(*unaff_x27)[0x22];
        pppppppcStack_4d0 = (code *******)(*unaff_x27)[0x23];
        pppppppcStack_490 = pppppppcVar20;
        pppppppcStack_488 = pppppppcStack_4d0;
        if (pppppppcStack_4d0 != (code *******)0x0) {
          pppppppcVar29 = pppppppcStack_4d0 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar29,0x10);
            if (bVar4) {
              *pppppppcVar29 = (code ******)((long)*pppppppcVar29 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        param_6 = pppppppcVar34;
        if (2 < (ulong)(((long)pppppppcVar20[2] - (long)pppppppcVar20[1] >> 4) * -0x5555555555555555
                       )) {
          FUN_10aa8113c(*(undefined4 *)(unaff_x27 + 1),*(undefined4 *)((long)unaff_x27 + 0xc));
          param_6 = (code *******)0x0;
          if (pppppppcVar34 != (code *******)0x0) {
            unaff_x26 = pppppppcVar20 + (long)pppppppcVar34 * 6;
            do {
              unaff_x24 = (code *******)pppppppcVar20[1];
              pppppppcVar34 = unaff_x20;
              param_6 = unaff_x24;
              FUN_10a440484();
              if (pppppppcVar34 == (code *******)0x0) {
                pppppppcVar34 = pppppppcVar31 + 0x62;
                param_6 = unaff_x24;
                FUN_10a440484();
                if (pppppppcVar34 == (code *******)0x0) {
                  uVar28 = ((ulong)(uint)((int)unaff_x24 << 3) + 8 ^ (ulong)unaff_x24 >> 0x20) *
                           -0x622015f714c7d297;
                  uVar28 = ((ulong)unaff_x24 >> 0x20 ^ uVar28 >> 0x2f ^ uVar28) *
                           -0x622015f714c7d297;
                  unaff_x21 = (code *******)((uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297);
                  pppppppcVar34 = (code *******)pppppppcVar31[0x5e];
                  if (pppppppcVar34 != (code *******)0x0) {
                    uVar28 = (long)pppppppcVar34 - 1;
                    if (((ulong)pppppppcVar34 & uVar28) == 0) {
                      pppppppcVar31 = (code *******)(uVar28 & (ulong)unaff_x21);
                    }
                    else {
                      pppppppcVar31 = unaff_x21;
                      if (pppppppcVar34 <= unaff_x21) {
                        uVar17 = 0;
                        if (pppppppcVar34 != (code *******)0x0) {
                          uVar17 = (ulong)unaff_x21 / (ulong)pppppppcVar34;
                        }
                        pppppppcVar31 =
                             (code *******)((long)unaff_x21 - uVar17 * (long)pppppppcVar34);
                      }
                    }
                    pppppcVar22 = (*unaff_x20)[(long)pppppppcVar31];
                    if (pppppcVar22 != (code *****)0x0) {
                      do {
                        while( true ) {
                          pppppcVar22 = (code *****)*pppppcVar22;
                          if (pppppcVar22 == (code *****)0x0) goto LAB_10a4182ec;
                          pppppppcVar29 = (code *******)pppppcVar22[1];
                          if (pppppppcVar29 != unaff_x21) break;
                          if ((code *******)pppppcVar22[2] == unaff_x24) goto LAB_10a418588;
                        }
                        if (((ulong)pppppppcVar34 & uVar28) == 0) {
                          pppppppcVar29 = (code *******)((ulong)pppppppcVar29 & uVar28);
                        }
                        else if (pppppppcVar34 <= pppppppcVar29) {
                          uVar17 = 0;
                          if (pppppppcVar34 != (code *******)0x0) {
                            uVar17 = (ulong)pppppppcVar29 / (ulong)pppppppcVar34;
                          }
                          pppppppcVar29 =
                               (code *******)((long)pppppppcVar29 - uVar17 * (long)pppppppcVar34);
                        }
                      } while (pppppppcVar29 == pppppppcVar31);
                    }
                  }
LAB_10a4182ec:
                  ppppppcVar14 = (code ******)0x18;
                  __Znwm();
                  pppppppcVar29 = pppppppcStack_4c8;
                  *ppppppcVar14 = (code *****)0x0;
                  ppppppcVar14[1] = (code *****)unaff_x21;
                  ppppppcVar14[2] = (code *****)unaff_x24;
                  if ((pppppppcVar34 == (code *******)0x0) ||
                     (*(float *)(pppppppcStack_4c8 + 0x61) * (float)pppppppcVar34 <
                      (float)(undefined *)((long)pppppppcStack_4c8[0x60] + 1))) {
                    uVar28 = 1;
                    if ((code *******)0x2 < pppppppcVar34) {
                      uVar28 = (ulong)(((ulong)pppppppcVar34 & (long)pppppppcVar34 - 1U) != 0);
                    }
                    unaff_x24 = (code *******)(uVar28 | (long)pppppppcVar34 << 1);
                    pppppppcVar31 =
                         (code *******)
                         (long)((float)(undefined *)((long)pppppppcStack_4c8[0x60] + 1) /
                               *(float *)(pppppppcStack_4c8 + 0x61));
                    if (unaff_x24 <= pppppppcVar31) {
                      unaff_x24 = pppppppcVar31;
                    }
                    if ((long)unaff_x24 - 1U == 0) {
                      unaff_x24 = (code *******)0x2;
                    }
                    else if (((ulong)unaff_x24 & (long)unaff_x24 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                      pppppppcVar34 = (code *******)pppppppcVar29[0x5e];
                    }
                    if (pppppppcVar34 < unaff_x24) {
LAB_10a418390:
                      pppppppcVar34 = unaff_x24;
                      if ((ulong)pppppppcVar34 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a418ca8;
                      }
                      ppppppcVar30 = (code ******)((long)pppppppcVar34 << 3);
                      __Znwm();
                      ppppppcVar12 = *unaff_x20;
                      *unaff_x20 = ppppppcVar30;
                      if (ppppppcVar12 != (code ******)0x0) {
                        __ZdlPv();
                      }
                      pppppppcVar31 = (code *******)0x0;
                      pppppppcVar29[0x5e] = (code ******)pppppppcVar34;
                      do {
                        (*unaff_x20)[(long)pppppppcVar31] = (code *****)0x0;
                        pppppppcVar31 = (code *******)((long)pppppppcVar31 + 1);
                      } while (pppppppcVar34 != pppppppcVar31);
                      ppppppcVar30 = *pppppppcStack_4e8;
                      unaff_x24 = pppppppcVar34;
                      if (ppppppcVar30 != (code ******)0x0) {
                        pppppppcVar31 = (code *******)ppppppcVar30[1];
                        uVar28 = (long)pppppppcVar34 - 1;
                        if (((ulong)pppppppcVar34 & uVar28) == 0) {
                          pppppppcVar31 = (code *******)((ulong)pppppppcVar31 & uVar28);
                        }
                        else if (pppppppcVar34 <= pppppppcVar31) {
                          uVar17 = 0;
                          if (pppppppcVar34 != (code *******)0x0) {
                            uVar17 = (ulong)pppppppcVar31 / (ulong)pppppppcVar34;
                          }
                          pppppppcVar31 =
                               (code *******)((long)pppppppcVar31 - uVar17 * (long)pppppppcVar34);
                        }
                        (*unaff_x20)[(long)pppppppcVar31] = (code *****)pppppppcStack_4e8;
                        ppppppcVar12 = (code ******)*ppppppcVar30;
                        while (ppppppcVar12 != (code ******)0x0) {
                          pppppppcVar29 = (code *******)ppppppcVar12[1];
                          if (((ulong)pppppppcVar34 & uVar28) == 0) {
                            pppppppcVar29 = (code *******)((ulong)pppppppcVar29 & uVar28);
                          }
                          else if (pppppppcVar34 <= pppppppcVar29) {
                            uVar17 = 0;
                            if (pppppppcVar34 != (code *******)0x0) {
                              uVar17 = (ulong)pppppppcVar29 / (ulong)pppppppcVar34;
                            }
                            pppppppcVar29 =
                                 (code *******)((long)pppppppcVar29 - uVar17 * (long)pppppppcVar34);
                          }
                          ppppppcVar23 = ppppppcVar12;
                          if (pppppppcVar29 != pppppppcVar31) {
                            ppppppcVar41 = *unaff_x20;
                            if (ppppppcVar41[(long)pppppppcVar29] == (code *****)0x0) {
                              ppppppcVar41[(long)pppppppcVar29] = (code *****)ppppppcVar30;
                              pppppppcVar31 = pppppppcVar29;
                            }
                            else {
                              *ppppppcVar30 = *ppppppcVar12;
                              *ppppppcVar12 = (code *****)*ppppppcVar41[(long)pppppppcVar29];
                              *ppppppcVar41[(long)pppppppcVar29] = (code ****)ppppppcVar12;
                              ppppppcVar23 = ppppppcVar30;
                            }
                          }
                          ppppppcVar30 = ppppppcVar23;
                          ppppppcVar12 = (code ******)*ppppppcVar23;
                        }
                      }
                    }
                    else if (unaff_x24 < pppppppcVar34) {
                      pppppppcVar31 =
                           (code *******)
                           (long)((float)pppppppcVar29[0x60] / *(float *)(pppppppcVar29 + 0x61));
                      if ((pppppppcVar34 < (code *******)0x3) ||
                         (((ulong)pppppppcVar34 & (long)pppppppcVar34 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if ((code *******)0x1 < pppppppcVar31) {
                        pppppppcVar31 =
                             (code *******)(1L << (-LZCOUNT((long)pppppppcVar31 + -1) & 0x3fU));
                      }
                      if (unaff_x24 <= pppppppcVar31) {
                        unaff_x24 = pppppppcVar31;
                      }
                      if (unaff_x24 < pppppppcVar34) {
                        if (unaff_x24 != (code *******)0x0) goto LAB_10a418390;
                        ppppppcVar30 = *unaff_x20;
                        *unaff_x20 = (code ******)0x0;
                        if (ppppppcVar30 != (code ******)0x0) {
                          __ZdlPv();
                        }
                        pppppppcVar34 = (code *******)0x0;
                        pppppppcVar29[0x5e] = (code ******)0x0;
                      }
                      else {
                        pppppppcVar34 = (code *******)pppppppcVar29[0x5e];
                      }
                    }
                    if (((ulong)pppppppcVar34 & (long)pppppppcVar34 - 1U) == 0) {
                      pppppppcVar31 = (code *******)((long)pppppppcVar34 - 1U & (ulong)unaff_x21);
                    }
                    else {
                      pppppppcVar31 = unaff_x21;
                      if (pppppppcVar34 <= unaff_x21) {
                        uVar28 = 0;
                        if (pppppppcVar34 != (code *******)0x0) {
                          uVar28 = (ulong)unaff_x21 / (ulong)pppppppcVar34;
                        }
                        pppppppcVar31 =
                             (code *******)((long)unaff_x21 - uVar28 * (long)pppppppcVar34);
                      }
                    }
                  }
                  ppppppcVar12 = *unaff_x20;
                  ppppppcVar30 = (code ******)ppppppcVar12[(long)pppppppcVar31];
                  if (ppppppcVar30 == (code ******)0x0) {
                    *ppppppcVar14 = (code *****)*pppppppcStack_4e8;
                    *pppppppcStack_4e8 = ppppppcVar14;
                    ppppppcVar12[(long)pppppppcVar31] = (code *****)pppppppcStack_4e8;
                    if (*ppppppcVar14 != (code *****)0x0) {
                      pppppppcVar31 = (code *******)(*ppppppcVar14)[1];
                      if (((ulong)pppppppcVar34 & (long)pppppppcVar34 - 1U) == 0) {
                        pppppppcVar31 =
                             (code *******)((ulong)pppppppcVar31 & (long)pppppppcVar34 - 1U);
                      }
                      else if (pppppppcVar34 <= pppppppcVar31) {
                        uVar28 = 0;
                        if (pppppppcVar34 != (code *******)0x0) {
                          uVar28 = (ulong)pppppppcVar31 / (ulong)pppppppcVar34;
                        }
                        pppppppcVar31 =
                             (code *******)((long)pppppppcVar31 - uVar28 * (long)pppppppcVar34);
                      }
                      ppppppcVar30 = *unaff_x20 + (long)pppppppcVar31;
                      goto LAB_10a418578;
                    }
                  }
                  else {
                    *ppppppcVar14 = *ppppppcVar30;
LAB_10a418578:
                    *ppppppcVar30 = (code *****)ppppppcVar14;
                  }
                  pppppppcStack_4c8[0x60] = (code ******)((long)pppppppcStack_4c8[0x60] + 1);
LAB_10a418588:
                  pppppppcVar31 = pppppppcStack_4a0;
                  if (pppppppcStack_4a0 < pppppppcStack_498) {
                    param_6 = pppppppcVar20;
                    FUN_10a4365a4(pppppppcStack_4a0);
                    pppppppcStack_4a0 = pppppppcVar31 + 6;
                    pppppppcVar31 = pppppppcStack_4c8;
                  }
                  else {
                    lVar21 = (long)pppppppcStack_4a0 - (long)pppppppcStack_4a8;
                    uVar28 = (lVar21 >> 4) * -0x5555555555555555 + 1;
                    if (0x555555555555555 < uVar28) {
                      FUN_10a43668c();
LAB_10a418ca8:
                    /* WARNING: Does not return */
                      pcVar16 = (code *)SoftwareBreakpoint(1,0x10a418cac);
                      (*pcVar16)();
                    }
                    lVar15 = (long)pppppppcStack_498 - (long)pppppppcStack_4a8 >> 4;
                    uVar17 = lVar15 * 0x5555555555555556;
                    if (uVar17 < uVar28 || uVar17 - uVar28 == 0) {
                      uVar17 = uVar28;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
                      uVar17 = 0x555555555555555;
                    }
                    pppppppcStack_420 = (code *******)&pppppppcStack_4a8;
                    if (uVar17 == 0) {
                      pppppppcVar31 = (code *******)0x0;
                    }
                    else {
                      pppppppcVar31 = (code *******)&pppppppcStack_4a8;
                      FUN_10a4366a0();
                    }
                    ppppppcVar14 = (code ******)((long)pppppppcVar31 + lVar21);
                    pppppppcStack_428 = pppppppcVar31 + uVar17 * 6;
                    pppppppcStack_440 = pppppppcVar31;
                    pppppppcStack_438 = (code *******)ppppppcVar14;
                    pppppppcStack_430 = (code *******)ppppppcVar14;
                    FUN_10a4365a4(ppppppcVar14,pppppppcVar20);
                    pppppppcVar31 = pppppppcStack_4c8;
                    pppppppcStack_430 = (code *******)(ppppppcVar14 + 6);
                    pppppppcVar34 =
                         (code *******)
                         ((long)pppppppcStack_4a8 + ((long)ppppppcVar14 - (long)pppppppcStack_4a0));
                    param_6 = pppppppcStack_4a8;
                    func_0x00010a4366e4(&pppppppcStack_4a8,pppppppcStack_4a8,pppppppcStack_4a0,
                                        pppppppcVar34);
                    pppppppcVar29 = pppppppcStack_498;
                    pppppppcStack_4d8 = pppppppcStack_428;
                    pppppppcStack_4e0 = pppppppcStack_430;
                    pppppppcStack_498 = pppppppcStack_428;
                    pppppppcStack_4a0 = pppppppcStack_430;
                    pppppppcStack_430 = pppppppcStack_4a8;
                    pppppppcStack_428 = pppppppcVar29;
                    pppppppcStack_440 = pppppppcStack_4a8;
                    pppppppcStack_438 = pppppppcStack_4a8;
                    pppppppcStack_4a8 = pppppppcVar34;
                    func_0x00010a436790(&pppppppcStack_440);
                    pppppppcStack_4a0 = pppppppcStack_4e0;
                  }
                }
              }
              pppppppcVar20 = pppppppcVar20 + 6;
              unaff_x22 = pppppppcVar20;
            } while (pppppppcVar20 != unaff_x26);
          }
        }
        pppppppcVar20 = pppppppcStack_4d0;
        if (pppppppcStack_4d0 != (code *******)0x0) {
          pppppppcVar34 = pppppppcStack_4d0 + 1;
          do {
            ppppppcVar14 = *pppppppcVar34;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar34,0x10);
            if (bVar4) {
              *pppppppcVar34 = (code ******)((long)ppppppcVar14 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppcVar14 == (code ******)0x0) {
            (*(code *)(*pppppppcStack_4d0)[2])(pppppppcStack_4d0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar20);
          }
        }
        unaff_x27 = unaff_x27 + 2;
        pppppppcVar34 = param_6;
      } while (unaff_x27 != pppppppcStack_4f0);
      pppppppcStack_4e0 = pppppppcStack_4a0;
      unaff_x23 = (undefined **)pppppppcStack_4a8;
      if (pppppppcStack_4a8 != pppppppcStack_4a0) {
        pppppppcStack_4d0 = (code *******)&pppppppcStack_480;
        unaff_d8 = 0x100000001;
        unaff_x26 = (code *******)0x3;
        do {
          unaff_x22 = (code *******)pppppppcVar31[0x42];
          unaff_x20 = (code *******)0x48;
          __Znwm();
          unaff_x20[1] = (code ******)0x0;
          unaff_x20[2] = (code ******)0x0;
          *unaff_x20 = (code ******)&PTR_DAT_110bd9710;
          if (*(char *)((long)unaff_x23 + 0x2f) < '\0') {
            func_0x000107c3192c(&pppppppcStack_440,unaff_x23[3],unaff_x23[4]);
          }
          else {
            pppppppcStack_438 = (code *******)unaff_x23[4];
            pppppppcStack_440 = (code *******)unaff_x23[3];
            pppppppcStack_430 = (code *******)unaff_x23[5];
          }
          pppppppcStack_4c0 = unaff_x20 + 3;
          *pppppppcStack_4c0 = (code ******)&PTR_DAT_110bd46b8;
          unaff_x20[4] = (code ******)0x0;
          unaff_x20[5] = (code ******)0x0;
          unaff_x20[7] = (code ******)pppppppcStack_438;
          unaff_x20[6] = (code ******)pppppppcStack_440;
          unaff_x20[8] = (code ******)pppppppcStack_430;
          pppppppcStack_488 = (code *******)0x0;
          pppppppcStack_490 = (code *******)0x0;
          lStack_478 = 0;
          pppppppcStack_480 = (code *******)0x0;
          fStack_470 = *(float *)(unaff_x22 + 7);
          param_6 = (code *******)unaff_x22[4];
          pppppppcStack_4b8 = unaff_x20;
          FUN_10a43ed84(&pppppppcStack_490);
          pppppppcVar31 = pppppppcStack_4c8;
          pppppppcVar20 = pppppppcStack_488;
          pppppppcVar34 = pppppppcStack_480;
          for (ppppppcVar14 = unaff_x22[5]; pppppppcStack_4c8 = pppppppcVar31,
              pppppppcStack_488 = pppppppcVar20, pppppppcStack_480 = pppppppcVar34,
              ppppppcVar14 != (code ******)0x0; ppppppcVar14 = (code ******)*ppppppcVar14) {
            pppppcVar22 = ppppppcVar14[2];
            uVar28 = ((ulong)(uint)((int)pppppcVar22 << 3) + 8 ^ (ulong)pppppcVar22 >> 0x20) *
                     -0x622015f714c7d297;
            uVar28 = ((ulong)pppppcVar22 >> 0x20 ^ uVar28 >> 0x2f ^ uVar28) * -0x622015f714c7d297;
            pppppppcVar31 = (code *******)((uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297);
            if (pppppppcVar20 != (code *******)0x0) {
              puVar19 = (undefined *)((long)pppppppcVar20 + -1);
              if (((ulong)pppppppcVar20 & (ulong)puVar19) == 0) {
                unaff_x27 = (code *******)((ulong)pppppppcVar31 & (ulong)puVar19);
              }
              else {
                unaff_x27 = pppppppcVar31;
                if (pppppppcVar20 <= pppppppcVar31) {
                  uVar28 = 0;
                  if (pppppppcVar20 != (code *******)0x0) {
                    uVar28 = (ulong)pppppppcVar31 / (ulong)pppppppcVar20;
                  }
                  unaff_x27 = (code *******)((long)pppppppcVar31 - uVar28 * (long)pppppppcVar20);
                }
              }
              ppppppcVar30 = pppppppcStack_490[(long)unaff_x27];
              if (ppppppcVar30 != (code ******)0x0) {
                do {
                  while( true ) {
                    ppppppcVar30 = (code ******)*ppppppcVar30;
                    if (ppppppcVar30 == (code ******)0x0) goto LAB_10a41889c;
                    pppppppcVar34 = (code *******)ppppppcVar30[1];
                    if (pppppppcVar34 != pppppppcVar31) break;
                    if (ppppppcVar30[2] == pppppcVar22) goto LAB_10a418a00;
                  }
                  if (((ulong)pppppppcVar20 & (ulong)puVar19) == 0) {
                    pppppppcVar34 = (code *******)((ulong)pppppppcVar34 & (ulong)puVar19);
                  }
                  else if (pppppppcVar20 <= pppppppcVar34) {
                    uVar28 = 0;
                    if (pppppppcVar20 != (code *******)0x0) {
                      uVar28 = (ulong)pppppppcVar34 / (ulong)pppppppcVar20;
                    }
                    pppppppcVar34 =
                         (code *******)((long)pppppppcVar34 - uVar28 * (long)pppppppcVar20);
                  }
                } while (pppppppcVar34 == unaff_x27);
              }
            }
LAB_10a41889c:
            unaff_x21 = (code *******)0x68;
            __Znwm();
            *unaff_x21 = (code ******)0x0;
            unaff_x21[1] = (code ******)pppppppcVar31;
            pppppcVar22 = ppppppcVar14[3];
            ppppppcVar30 = (code ******)ppppppcVar14[2];
            unaff_x21[3] = (code ******)ppppppcVar14[3];
            unaff_x21[2] = ppppppcVar30;
            if (pppppcVar22 != (code *****)0x0) {
              pppppcVar22 = pppppcVar22 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppcVar22,0x10);
                if (bVar4) {
                  *pppppcVar22 = (code ****)((long)*pppppcVar22 + 1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            pppppppcStack_440 = unaff_x21 + 4;
            *(undefined1 *)(unaff_x21 + 0xc) = 3;
            if (*(char *)(ppppppcVar14 + 0xc) == '\0') {
              uVar13 = 0;
            }
            else {
              param_6 = (code *******)(ppppppcVar14 + 4);
              FUN_10a005398(&pppppppcStack_440);
              uVar13 = *(undefined1 *)(ppppppcVar14 + 0xc);
            }
            *(undefined1 *)(unaff_x21 + 0xc) = uVar13;
            if ((pppppppcVar20 == (code *******)0x0) ||
               (fStack_470 * (float)pppppppcVar20 < (float)(lStack_478 + 1))) {
              uVar28 = 1;
              if ((code *******)0x2 < pppppppcVar20) {
                uVar28 = (ulong)(((ulong)pppppppcVar20 & (ulong)((long)pppppppcVar20 + -1)) != 0);
              }
              param_6 = (code *******)(uVar28 | (long)pppppppcVar20 << 1);
              pppppppcVar20 = (code *******)(long)((float)(lStack_478 + 1) / fStack_470);
              if (param_6 <= pppppppcVar20) {
                param_6 = pppppppcVar20;
              }
              FUN_10a43ed84(&pppppppcStack_490);
              pppppppcVar20 = pppppppcStack_488;
              if (((ulong)pppppppcStack_488 & (ulong)((long)pppppppcStack_488 + -1)) == 0) {
                unaff_x27 = (code *******)
                            ((ulong)((long)pppppppcStack_488 + -1) & (ulong)pppppppcVar31);
              }
              else {
                unaff_x27 = pppppppcVar31;
                if (pppppppcStack_488 <= pppppppcVar31) {
                  uVar28 = 0;
                  if (pppppppcStack_488 != (code *******)0x0) {
                    uVar28 = (ulong)pppppppcVar31 / (ulong)pppppppcStack_488;
                  }
                  unaff_x27 = (code *******)((long)pppppppcVar31 - uVar28 * (long)pppppppcStack_488)
                  ;
                }
              }
            }
            ppppppcVar30 = pppppppcStack_490[(long)unaff_x27];
            if (ppppppcVar30 == (code ******)0x0) {
              *unaff_x21 = (code ******)pppppppcStack_480;
              pppppppcStack_490[(long)unaff_x27] = (code ******)pppppppcStack_4d0;
              pppppppcStack_480 = unaff_x21;
              if (*unaff_x21 != (code ******)0x0) {
                pppppppcVar31 = (code *******)(*unaff_x21)[1];
                if (((ulong)pppppppcVar20 & (ulong)((long)pppppppcVar20 + -1)) == 0) {
                  pppppppcVar31 =
                       (code *******)((ulong)pppppppcVar31 & (ulong)((long)pppppppcVar20 + -1));
                }
                else if (pppppppcVar20 <= pppppppcVar31) {
                  uVar28 = 0;
                  if (pppppppcVar20 != (code *******)0x0) {
                    uVar28 = (ulong)pppppppcVar31 / (ulong)pppppppcVar20;
                  }
                  pppppppcVar31 = (code *******)((long)pppppppcVar31 - uVar28 * (long)pppppppcVar20)
                  ;
                }
                pppppppcStack_490[(long)pppppppcVar31] = (code ******)unaff_x21;
              }
            }
            else {
              *unaff_x21 = (code ******)*ppppppcVar30;
              *ppppppcVar30 = (code *****)unaff_x21;
            }
            lStack_478 = lStack_478 + 1;
LAB_10a418a00:
            pppppppcVar31 = pppppppcStack_4c8;
            pppppppcVar20 = pppppppcStack_488;
            pppppppcVar34 = pppppppcStack_480;
          }
          if (pppppppcVar34 == (code *******)0x0) {
            FUN_10a43fd9c(&pppppppcStack_490);
LAB_10a418c10:
            pppppppcVar20 = unaff_x20 + 1;
            do {
              ppppppcVar14 = *pppppppcVar20;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
              if (bVar4) {
                *pppppppcVar20 = (code ******)((long)ppppppcVar14 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar14 == (code ******)0x0) {
              (*(code *)(*unaff_x20)[2])(unaff_x20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
            }
          }
          else {
            do {
              pppppppcVar29 = (code *******)pppppppcVar34[2];
              pppppppcVar20 = unaff_x22 + 3;
              FUN_10a43f794();
              param_6 = pppppppcVar29;
              if (pppppppcVar20 != (code *******)0x0) {
                if (*(char *)(pppppppcVar34 + 0xc) == '\x01') {
                  ppppppcVar14 = pppppppcVar34[4];
                  pppppppcStack_438 = pppppppcStack_4b8;
                  pppppppcStack_440 = pppppppcStack_4c0;
                  if (pppppppcStack_4b8 != (code *******)0x0) {
                    pppppppcVar20 = pppppppcStack_4b8 + 1;
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                      if (bVar4) {
                        *pppppppcVar20 = (code ******)((long)*pppppppcVar20 + 1);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  param_6 = pppppppcVar34 + 4;
                  (*(code *)ppppppcVar14)(&pppppppcStack_440);
                  if (pppppppcStack_438 != (code *******)0x0) {
                    pppppppcVar20 = pppppppcStack_438 + 1;
                    do {
                      ppppppcVar14 = *pppppppcVar20;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                      if (bVar4) {
                        *pppppppcVar20 = (code ******)((long)ppppppcVar14 + -1);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      pppppppcVar29 = pppppppcStack_438;
                    } while (cVar3 != '\0');
LAB_10a418ac8:
                    if (ppppppcVar14 == (code ******)0x0) {
                      (*(code *)(*pppppppcVar29)[2])(pppppppcVar29);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar29);
                    }
                  }
                }
                else if (*(char *)(pppppppcVar34 + 0xc) == '\x02') {
                  pppppppcVar20 = pppppppcVar34 + 4;
                  FUN_10a688b40();
                  pppppppcVar32 = pppppppcStack_4b8;
                  if (pppppppcVar20 == (code *******)0x0) {
                    param_6 = (code *******)0x0;
                    if (pppppppcVar29 != (code *******)0x0) {
                      pppppppcStack_430 = (code *******)pppppppcVar34[4];
                      pppppppcStack_428 = (code *******)pppppppcVar34[5];
                      if (pppppppcStack_428 != (code *******)0x0) {
                        pppppppcVar20 = pppppppcStack_428 + 1;
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                          if (bVar4) {
                            *pppppppcVar20 = (code ******)((long)*pppppppcVar20 + 1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      pppppppcStack_450 = pppppppcStack_4c0;
                      pppppppcStack_448 = pppppppcStack_4b8;
                      if (pppppppcStack_4b8 == (code *******)0x0) {
                        pppppppcStack_418 = (code *******)0x0;
                      }
                      else {
                        pppppppcVar20 = pppppppcStack_4b8 + 1;
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                          if (bVar4) {
                            *pppppppcVar20 = (code ******)((long)*pppppppcVar20 + 1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        pppppppcStack_418 = pppppppcStack_4b8;
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                          if (bVar4) {
                            *pppppppcVar20 = (code ******)((long)*pppppppcVar20 + 1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      pppppppcStack_420 = pppppppcStack_4c0;
                      pppppppcStack_438 = (code *******)&PTR_FUN_110bd9750;
                      pppppppcStack_458 = (code *******)0x0;
                      pppppppcStack_460 = (code *******)0x0;
                      pppppppcStack_440 = (code *******)FUN_10a4407f4;
                      param_6 = (code *******)&pppppppcStack_440;
                      FUN_10a4634ec(pppppppcVar29);
                      (*(code *)*pppppppcStack_438)(&pppppppcStack_438);
                      if (pppppppcVar32 != (code *******)0x0) {
                        pppppppcVar20 = pppppppcVar32 + 1;
                        do {
                          ppppppcVar14 = *pppppppcVar20;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                          if (bVar4) {
                            *pppppppcVar20 = (code ******)((long)ppppppcVar14 + -1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                        if (ppppppcVar14 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar32)[2])(pppppppcVar32);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar32);
                        }
                      }
                      if (pppppppcStack_458 != (code *******)0x0) {
                        pppppppcVar20 = pppppppcStack_458 + 1;
                        do {
                          ppppppcVar14 = *pppppppcVar20;
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
                          if (bVar4) {
                            *pppppppcVar20 = (code ******)((long)ppppppcVar14 + -1);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                          pppppppcVar29 = pppppppcStack_458;
                        } while (cVar3 != '\0');
                        goto LAB_10a418ac8;
                      }
                    }
                  }
                  else {
                    *pppppppcVar20 =
                         (code ******)
                         CONCAT44((int)((ulong)*pppppppcVar20 >> 0x20) + 1,(int)*pppppppcVar20 + 1);
                    param_6 = (code *******)&pppppppcStack_4c0;
                    FUN_10a4405f0(pppppppcVar34[4]);
                    iVar27 = *(int *)((long)pppppppcVar20 + 4) + -1;
                    *(int *)((long)pppppppcVar20 + 4) = iVar27;
                    if (iVar27 == 0) {
                      *(undefined4 *)pppppppcVar20 = 0;
                    }
                  }
                }
              }
              unaff_x20 = pppppppcStack_4b8;
              pppppppcVar34 = (code *******)*pppppppcVar34;
            } while (pppppppcVar34 != (code *******)0x0);
            FUN_10a43fd9c(&pppppppcStack_490);
            if (unaff_x20 != (code *******)0x0) goto LAB_10a418c10;
          }
          unaff_x23 = unaff_x23 + 6;
          unaff_x24 = (code *******)0x0;
        } while ((code *******)unaff_x23 != pppppppcStack_4e0);
      }
    }
    pppppppcStack_440 = (code *******)&pppppppcStack_4a8;
    pppppppcVar20 = (code *******)&pppppppcStack_440;
    FUN_10a4367dc();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a418cb0:
  FUN_10a43655c();
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x20);
  __ZdlPv();
  pppppppcStack_460 = (code *******)&pppppppcStack_4a8;
  FUN_10a4367dc(&pppppppcStack_460);
  pppppppcVar34 = pppppppcVar20;
  __Unwind_Resume();
  pcStack_4f8 = FUN_10a418dd0;
  ppppppcVar14 = pppppppcVar34[0x47];
  ppppppcVar30 = pppppppcVar34[0x46];
  if (ppppppcVar14 != ppppppcVar30) {
    uVar28 = 0;
    pppppppcVar29 = pppppppcVar34 + 0x58;
    pppppppcVar32 = pppppppcVar34 + 0x5a;
    uStack_580 = unaff_d13;
    uStack_578 = unaff_d12;
    uStack_570 = unaff_d11;
    uStack_568 = unaff_d10;
    uStack_560 = unaff_d9;
    uStack_558 = unaff_d8;
    pppppppcStack_550 = pppppppcVar31;
    pppppppcStack_548 = unaff_x27;
    pppppppcStack_540 = unaff_x26;
    ppppppcStack_538 = unaff_x25;
    pppppppcStack_530 = unaff_x24;
    pppppppcStack_528 = (code *******)unaff_x23;
    pppppppcStack_520 = unaff_x22;
    pppppppcStack_518 = unaff_x21;
    pppppppcStack_510 = unaff_x20;
    pppppppcStack_508 = pppppppcVar20;
    ppuStack_500 = &puStack_390;
    do {
      ppppppcVar12 = ppppppcVar30 + uVar28 * 10;
      pppppcVar22 = ppppppcVar12[7];
      pppppcVar10 = ppppppcVar12[8];
      if (pppppcVar22 != pppppcVar10) {
        do {
          ppppcVar18 = *pppppcVar22;
          if (*(code *)(ppppcVar18 + 0x6b) == (code)0x1) {
            FUN_10a440978(pppppppcVar29);
            ppppppcVar30 = param_6[1];
            for (ppppppcVar14 = *param_6; ppppppcVar14 != ppppppcVar30;
                ppppppcVar14 = ppppppcVar14 + 4) {
              FUN_10aa71aa0(&ppppppcStack_5b0,(*ppppppcVar14)[8],ppppppcVar12);
              if ((uVar28 == 0) && (ppppppcStack_5b0 == (code ******)0x0)) {
                ppppcVar38 = (*ppppppcVar14)[8];
                FUN_10a416ae4();
                FUN_10aa71aa0(&ppppppcStack_5a0,ppppcVar38,0x1137eb188);
                pppppppcVar31 = pppppppcStack_598;
                ppppppcStack_5b0 = ppppppcStack_5a0;
                pppppppcVar20 = pppppppcStack_5a8;
                ppppppcStack_5a0 = (code ******)0x0;
                pppppppcStack_598 = (code *******)0x0;
                pppppppcStack_5a8 = pppppppcVar31;
                if (pppppppcVar20 != (code *******)0x0) {
                  pppppppcVar31 = pppppppcVar20 + 1;
                  do {
                    ppppppcVar23 = *pppppppcVar31;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar31,0x10);
                    if (bVar4) {
                      *pppppppcVar31 = (code ******)((long)ppppppcVar23 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (ppppppcVar23 == (code ******)0x0) {
                    (*(code *)(*pppppppcVar20)[2])(pppppppcVar20);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar20);
                  }
                }
                pppppppcVar20 = pppppppcStack_598;
                if (pppppppcStack_598 != (code *******)0x0) {
                  pppppppcVar31 = pppppppcStack_598 + 1;
                  do {
                    ppppppcVar23 = *pppppppcVar31;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar31,0x10);
                    if (bVar4) {
                      *pppppppcVar31 = (code ******)((long)ppppppcVar23 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (ppppppcVar23 == (code ******)0x0) {
                    (*(code *)(*pppppppcStack_598)[2])(pppppppcStack_598);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar20);
                  }
                }
              }
              if ((ppppppcStack_5b0 != (code ******)0x0) &&
                 (pppppcVar40 = ppppppcStack_5b0[0x11], pppppcVar40 != (code *****)0x0)) {
                fVar48 = *(float *)(*ppppppcVar14 + 10);
                fVar47 = *(float *)(ppppppcVar14 + 2);
                do {
                  ppppcVar38 = ppppcVar18 + 99;
                  FUN_10a428b30(ppppcVar38,pppppcVar40 + 2);
                  if ((int)ppppcVar38 != 0) {
                    ppppppcVar41 = (code ******)pppppcVar40[5];
                    ppppppcVar23 = pppppppcVar34[0x59];
                    if (ppppppcVar23 != (code ******)0x0) {
                      pcVar16 = (code *)((long)ppppppcVar23 + -1);
                      if (((ulong)ppppppcVar23 & (ulong)pcVar16) == 0) {
                        unaff_x25 = (code ******)((ulong)pcVar16 & (ulong)ppppppcVar41);
                      }
                      else {
                        unaff_x25 = ppppppcVar41;
                        if (ppppppcVar23 <= ppppppcVar41) {
                          uVar17 = 0;
                          if (ppppppcVar23 != (code ******)0x0) {
                            uVar17 = (ulong)ppppppcVar41 / (ulong)ppppppcVar23;
                          }
                          unaff_x25 = (code ******)
                                      ((long)ppppppcVar41 - uVar17 * (long)ppppppcVar23);
                        }
                      }
                      if ((*pppppppcVar29)[(long)unaff_x25] != (code *****)0x0) {
                        for (ppppppcVar39 = (code ******)*(*pppppppcVar29)[(long)unaff_x25];
                            ppppppcVar39 != (code ******)0x0;
                            ppppppcVar39 = (code ******)*ppppppcVar39) {
                          ppppppcVar24 = (code ******)ppppppcVar39[1];
                          if (ppppppcVar24 == ppppppcVar41) {
                            if ((code ******)ppppppcVar39[5] == ppppppcVar41) goto LAB_10a419154;
                          }
                          else {
                            if (((ulong)ppppppcVar23 & (ulong)pcVar16) == 0) {
                              ppppppcVar24 = (code ******)((ulong)ppppppcVar24 & (ulong)pcVar16);
                            }
                            else if (ppppppcVar23 <= ppppppcVar24) {
                              uVar17 = 0;
                              if (ppppppcVar23 != (code ******)0x0) {
                                uVar17 = (ulong)ppppppcVar24 / (ulong)ppppppcVar23;
                              }
                              ppppppcVar24 = (code ******)
                                             ((long)ppppppcVar24 - uVar17 * (long)ppppppcVar23);
                            }
                            if (ppppppcVar24 != unaff_x25) break;
                          }
                        }
                      }
                    }
                    ppppppcVar39 = (code ******)0x38;
                    __Znwm();
                    uStack_590 = 0;
                    *ppppppcVar39 = (code *****)0x0;
                    ppppppcVar39[1] = (code *****)ppppppcVar41;
                    ppppppcStack_5a0 = ppppppcVar39;
                    pppppppcStack_598 = pppppppcVar29;
                    if ((char)*(code *)((long)pppppcVar40 + 0x27) < '\0') {
                      func_0x000107c3192c(ppppppcVar39 + 2,pppppcVar40[2],pppppcVar40[3]);
                    }
                    else {
                      pppppcVar44 = (code *****)pppppcVar40[3];
                      pppppcVar26 = (code *****)pppppcVar40[2];
                      ppppppcVar39[4] = (code *****)pppppcVar40[4];
                      ppppppcVar39[3] = pppppcVar44;
                      ppppppcVar39[2] = pppppcVar26;
                    }
                    ppppppcVar39[5] = (code *****)pppppcVar40[5];
                    *(undefined4 *)(ppppppcVar39 + 6) = 0;
                    uStack_590 = CONCAT71(uStack_590._1_7_,1);
                    if ((ppppppcVar23 == (code ******)0x0) ||
                       (*(float *)(pppppppcVar34 + 0x5c) * (float)ppppppcVar23 <
                        (float)(undefined *)((long)pppppppcVar34[0x5b] + 1))) {
                      uVar17 = 1;
                      if ((code ******)0x2 < ppppppcVar23) {
                        uVar17 = (ulong)(((ulong)ppppppcVar23 & (ulong)((long)ppppppcVar23 + -1)) !=
                                        0);
                      }
                      uVar17 = uVar17 | (long)ppppppcVar23 << 1;
                      uVar25 = (ulong)((float)(undefined *)((long)pppppppcVar34[0x5b] + 1) /
                                      *(float *)(pppppppcVar34 + 0x5c));
                      if (uVar17 <= uVar25) {
                        uVar17 = uVar25;
                      }
                      FUN_10a1f9fe4(pppppppcVar29,uVar17);
                      ppppppcVar23 = pppppppcVar34[0x59];
                      if (((ulong)ppppppcVar23 & (ulong)((long)ppppppcVar23 + -1)) == 0) {
                        unaff_x25 = (code ******)
                                    ((ulong)((long)ppppppcVar23 + -1) & (ulong)ppppppcVar41);
                      }
                      else {
                        unaff_x25 = ppppppcVar41;
                        if (ppppppcVar23 <= ppppppcVar41) {
                          uVar17 = 0;
                          if (ppppppcVar23 != (code ******)0x0) {
                            uVar17 = (ulong)ppppppcVar41 / (ulong)ppppppcVar23;
                          }
                          unaff_x25 = (code ******)
                                      ((long)ppppppcVar41 - uVar17 * (long)ppppppcVar23);
                        }
                      }
                    }
                    ppppppcVar41 = *pppppppcVar29;
                    pppppcVar26 = ppppppcVar41[(long)unaff_x25];
                    if (pppppcVar26 == (code *****)0x0) {
                      *ppppppcStack_5a0 = (code *****)*pppppppcVar32;
                      *pppppppcVar32 = ppppppcStack_5a0;
                      ppppppcVar41[(long)unaff_x25] = (code *****)pppppppcVar32;
                      if (*ppppppcStack_5a0 != (code *****)0x0) {
                        ppppppcVar41 = (code ******)(*ppppppcStack_5a0)[1];
                        if (((ulong)ppppppcVar23 & (ulong)((long)ppppppcVar23 + -1)) == 0) {
                          ppppppcVar41 = (code ******)
                                         ((ulong)ppppppcVar41 & (ulong)((long)ppppppcVar23 + -1));
                        }
                        else if (ppppppcVar23 <= ppppppcVar41) {
                          uVar17 = 0;
                          if (ppppppcVar23 != (code ******)0x0) {
                            uVar17 = (ulong)ppppppcVar41 / (ulong)ppppppcVar23;
                          }
                          ppppppcVar41 = (code ******)
                                         ((long)ppppppcVar41 - uVar17 * (long)ppppppcVar23);
                        }
                        (*pppppppcVar29)[(long)ppppppcVar41] = (code *****)ppppppcStack_5a0;
                      }
                    }
                    else {
                      *ppppppcStack_5a0 = (code *****)*pppppcVar26;
                      *pppppcVar26 = (code ****)ppppppcStack_5a0;
                    }
                    pppppppcVar34[0x5b] = (code ******)((long)pppppppcVar34[0x5b] + 1);
                    ppppppcVar39 = ppppppcStack_5a0;
LAB_10a419154:
                    fVar49 = *(float *)(ppppppcVar39 + 6);
                    if (*(int *)(*ppppppcVar14 + 0xe) == 2) {
                      fVar54 = fVar47;
                      (*(code *)**pppppcVar40[6])();
                      fVar49 = fVar49 + fVar48 * fVar54;
                    }
                    else {
                      fVar54 = fVar47;
                      (*(code *)**pppppcVar40[6])();
                      fVar49 = fVar48 * fVar54 + (1.0 - fVar48) * fVar49;
                    }
                    *(float *)(ppppppcVar39 + 6) = fVar49;
                  }
                  pppppcVar40 = (code *****)*pppppcVar40;
                } while (pppppcVar40 != (code *****)0x0);
              }
              pppppppcVar20 = pppppppcStack_5a8;
              if (pppppppcStack_5a8 != (code *******)0x0) {
                pppppppcVar31 = pppppppcStack_5a8 + 1;
                do {
                  ppppppcVar23 = *pppppppcVar31;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar31,0x10);
                  if (bVar4) {
                    *pppppppcVar31 = (code ******)((long)ppppppcVar23 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppppcVar23 == (code ******)0x0) {
                  (*(code *)(*pppppppcStack_5a8)[2])(pppppppcStack_5a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar20);
                }
              }
            }
            for (ppppppcVar14 = *pppppppcVar32; ppppppcVar14 != (code ******)0x0;
                ppppppcVar14 = (code ******)*ppppppcVar14) {
              FUN_10a428c04(*(undefined4 *)(ppppppcVar14 + 6),
                            (float)(double)ppppcVar18[0x2e][0x10a][1],ppppcVar18 + 99,
                            ppppppcVar14 + 2);
            }
            FUN_10a440978(pppppppcVar29);
          }
          pppppcVar22 = pppppcVar22 + 1;
        } while (pppppcVar22 != pppppcVar10);
        ppppppcVar14 = pppppppcVar34[0x47];
        ppppppcVar30 = pppppppcVar34[0x46];
      }
      uVar28 = uVar28 + 1;
      uVar17 = ((long)ppppppcVar14 - (long)ppppppcVar30 >> 4) * -0x3333333333333333;
    } while (uVar28 <= uVar17 && uVar17 - uVar28 != 0);
  }
  return;
LAB_10a417420:
  ppppcVar18 = (code ****)*ppppcVar18;
  if (ppppcVar18 == (code ****)0x0) goto LAB_10a417428;
  goto LAB_10a4173dc;
}



/* Entry: 10a418008; end: 10a418dcf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a418008(code *******param_1,code *******param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code cVar4;
  code ******ppppppcVar5;
  long lVar6;
  code *****pppppcVar7;
  code *pcVar8;
  ulong uVar9;
  code *****pppppcVar10;
  code ******ppppppcVar11;
  code ******ppppppcVar12;
  ulong uVar13;
  code *****pppppcVar14;
  code *******pppppppcVar15;
  code ******ppppppcVar16;
  code ******ppppppcVar17;
  code ******ppppppcVar18;
  code *******pppppppcVar19;
  long lVar20;
  code ****ppppcVar21;
  code *******unaff_x20;
  ulong uVar22;
  code *******pppppppcVar23;
  code *******pppppppcVar24;
  code *******pppppppcVar25;
  code *******pppppppcVar26;
  code *******pppppppcVar27;
  code *******pppppppcVar28;
  code ****ppppcVar29;
  code ******unaff_x25;
  code *****pppppcVar30;
  code ******ppppppcVar31;
  code ******ppppppcVar32;
  float fVar33;
  code *****pppppcVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  code ******ppppppcStack_230;
  code *******pppppppcStack_228;
  code ******ppppppcStack_220;
  code *******pppppppcStack_218;
  undefined8 uStack_210;
  code *******pppppppcStack_140;
  code *******pppppppcStack_138;
  code *******pppppppcStack_128;
  code *******pppppppcStack_120;
  code *******pppppppcStack_118;
  code *******pppppppcStack_110;
  code ******ppppppcStack_108;
  code ******ppppppcStack_100;
  long lStack_f8;
  float fStack_f0;
  code *******pppppppcStack_e0;
  code *******pppppppcStack_d8;
  code *******pppppppcStack_d0;
  code *******pppppppcStack_c8;
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b8;
  code *******pppppppcStack_b0;
  code *******pppppppcStack_a8;
  code *******pppppppcStack_a0;
  code *******pppppppcStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar26 = param_1;
  if (param_1[0x42][6] == (code *****)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      if (param_1[0x65] != (code ******)0x0) {
        ppppppcVar5 = param_1[100];
        while (ppppppcVar5 != (code ******)0x0) {
          ppppppcVar5 = (code ******)*ppppppcVar5;
          __ZdlPv();
        }
        param_1[100] = (code ******)0x0;
        ppppppcVar5 = param_1[99];
        if (ppppppcVar5 != (code ******)0x0) {
          ppppppcVar31 = (code ******)0x0;
          do {
            param_1[0x62][(long)ppppppcVar31] = (code *****)0x0;
            ppppppcVar31 = (code ******)((long)ppppppcVar31 + 1);
          } while (ppppppcVar5 != ppppppcVar31);
        }
        param_1[0x65] = (code ******)0x0;
      }
      return;
    }
  }
  else {
    unaff_x20 = (code *******)param_1[0x4f];
    pppppppcVar27 = (code *******)param_1[0x50];
    uVar22 = (long)pppppppcVar27 - (long)unaff_x20;
    ppppppcVar5 = param_1[0x57];
    pppppppcVar24 = (code *******)param_1[0x55];
    if ((ulong)((long)ppppppcVar5 - (long)pppppppcVar24) < uVar22) {
      pppppppcVar25 = (code *******)((long)uVar22 >> 4);
      if (pppppppcVar24 != (code *******)0x0) {
        param_1[0x56] = (code ******)pppppppcVar24;
        __ZdlPv();
        ppppppcVar5 = (code ******)0x0;
        param_1[0x55] = (code ******)0x0;
        param_1[0x56] = (code ******)0x0;
        param_1[0x57] = (code ******)0x0;
        pppppppcVar26 = pppppppcVar24;
      }
      if ((ulong)pppppppcVar25 >> 0x3c != 0) goto LAB_10a418cb0;
      pppppppcVar26 = (code *******)((long)ppppppcVar5 >> 3);
      if ((code *******)((long)ppppppcVar5 >> 3) <= pppppppcVar25) {
        pppppppcVar26 = pppppppcVar25;
      }
      if ((code ******)0x7fffffffffffffef < ppppppcVar5) {
        pppppppcVar26 = (code *******)0xfffffffffffffff;
      }
      if ((ulong)pppppppcVar26 >> 0x3c != 0) goto LAB_10a418cb0;
      FUN_10a436570();
      param_1[0x55] = (code ******)pppppppcVar26;
      param_1[0x56] = (code ******)pppppppcVar26;
      param_1[0x57] = (code ******)(pppppppcVar26 + (long)param_2 * 2);
      pppppppcVar24 = pppppppcVar26;
LAB_10a418164:
      if (pppppppcVar27 != unaff_x20) {
        param_2 = unaff_x20;
        _memmove(pppppppcVar24,unaff_x20,uVar22);
      }
      ppppppcVar5 = (code ******)((long)pppppppcVar24 + uVar22);
    }
    else {
      pppppppcVar26 = (code *******)param_1[0x56];
      if (uVar22 <= (ulong)((long)pppppppcVar26 - (long)pppppppcVar24)) goto LAB_10a418164;
      pppppppcVar25 = (code *******)((long)unaff_x20 + ((long)pppppppcVar26 - (long)pppppppcVar24));
      if (pppppppcVar26 != pppppppcVar24) {
        _memmove(pppppppcVar24);
        pppppppcVar26 = (code *******)param_1[0x56];
        param_2 = unaff_x20;
      }
      unaff_x20 = (code *******)((long)pppppppcVar27 - (long)pppppppcVar25);
      if (unaff_x20 != (code *******)0x0) {
        _memmove(pppppppcVar26,pppppppcVar25,unaff_x20);
        param_2 = pppppppcVar25;
      }
      ppppppcVar5 = (code ******)((long)pppppppcVar26 + (long)unaff_x20);
    }
    param_1[0x56] = ppppppcVar5;
    pppppppcStack_128 = (code *******)0x0;
    pppppppcStack_120 = (code *******)0x0;
    pppppppcStack_118 = (code *******)0x0;
    ppppppcVar31 = param_1[0x55];
    if (ppppppcVar31 != ppppppcVar5) {
      unaff_x25 = (code ******)0x9ddfea08eb382d69;
      unaff_x20 = param_1 + 0x5d;
      pppppppcVar26 = param_1 + 0x5f;
      pppppppcVar24 = param_2;
      do {
        pppppppcVar27 = (code *******)(*ppppppcVar31)[0x22];
        ppppppcVar11 = (code ******)(*ppppppcVar31)[0x23];
        if (ppppppcVar11 != (code ******)0x0) {
          ppppppcVar32 = ppppppcVar11 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar32,0x10);
            if (bVar2) {
              *ppppppcVar32 = (code *****)((long)*ppppppcVar32 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        param_2 = pppppppcVar24;
        pppppppcStack_110 = pppppppcVar27;
        ppppppcStack_108 = ppppppcVar11;
        if (2 < (ulong)(((long)pppppppcVar27[2] - (long)pppppppcVar27[1] >> 4) * -0x5555555555555555
                       )) {
          FUN_10aa8113c(*(undefined4 *)(ppppppcVar31 + 1),*(undefined4 *)((long)ppppppcVar31 + 0xc))
          ;
          param_2 = (code *******)0x0;
          if (pppppppcVar24 != (code *******)0x0) {
            pppppppcVar24 = pppppppcVar27 + (long)pppppppcVar24 * 6;
            do {
              pppppppcVar28 = (code *******)pppppppcVar27[1];
              pppppppcVar25 = unaff_x20;
              param_2 = pppppppcVar28;
              FUN_10a440484();
              if (pppppppcVar25 == (code *******)0x0) {
                pppppppcVar25 = param_1 + 0x62;
                param_2 = pppppppcVar28;
                FUN_10a440484();
                if (pppppppcVar25 == (code *******)0x0) {
                  uVar22 = ((ulong)(uint)((int)pppppppcVar28 << 3) + 8 ^
                           (ulong)pppppppcVar28 >> 0x20) * -0x622015f714c7d297;
                  uVar22 = ((ulong)pppppppcVar28 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) *
                           -0x622015f714c7d297;
                  pppppppcVar23 = (code *******)((uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297);
                  pppppppcVar19 = (code *******)param_1[0x5e];
                  pppppppcVar25 = param_1;
                  if (pppppppcVar19 != (code *******)0x0) {
                    uVar22 = (long)pppppppcVar19 - 1;
                    if (((ulong)pppppppcVar19 & uVar22) == 0) {
                      pppppppcVar25 = (code *******)(uVar22 & (ulong)pppppppcVar23);
                    }
                    else {
                      pppppppcVar25 = pppppppcVar23;
                      if (pppppppcVar19 <= pppppppcVar23) {
                        uVar9 = 0;
                        if (pppppppcVar19 != (code *******)0x0) {
                          uVar9 = (ulong)pppppppcVar23 / (ulong)pppppppcVar19;
                        }
                        pppppppcVar25 =
                             (code *******)((long)pppppppcVar23 - uVar9 * (long)pppppppcVar19);
                      }
                    }
                    pppppcVar10 = (*unaff_x20)[(long)pppppppcVar25];
                    if (pppppcVar10 != (code *****)0x0) {
                      do {
                        while( true ) {
                          pppppcVar10 = (code *****)*pppppcVar10;
                          if (pppppcVar10 == (code *****)0x0) goto LAB_10a4182ec;
                          pppppppcVar15 = (code *******)pppppcVar10[1];
                          if (pppppppcVar15 != pppppppcVar23) break;
                          if ((code *******)pppppcVar10[2] == pppppppcVar28) goto LAB_10a418588;
                        }
                        if (((ulong)pppppppcVar19 & uVar22) == 0) {
                          pppppppcVar15 = (code *******)((ulong)pppppppcVar15 & uVar22);
                        }
                        else if (pppppppcVar19 <= pppppppcVar15) {
                          uVar9 = 0;
                          if (pppppppcVar19 != (code *******)0x0) {
                            uVar9 = (ulong)pppppppcVar15 / (ulong)pppppppcVar19;
                          }
                          pppppppcVar15 =
                               (code *******)((long)pppppppcVar15 - uVar9 * (long)pppppppcVar19);
                        }
                      } while (pppppppcVar15 == pppppppcVar25);
                    }
                  }
LAB_10a4182ec:
                  ppppppcVar32 = (code ******)0x18;
                  __Znwm();
                  *ppppppcVar32 = (code *****)0x0;
                  ppppppcVar32[1] = (code *****)pppppppcVar23;
                  ppppppcVar32[2] = (code *****)pppppppcVar28;
                  if ((pppppppcVar19 == (code *******)0x0) ||
                     (*(float *)(param_1 + 0x61) * (float)pppppppcVar19 <
                      (float)((long)param_1[0x60] + 1))) {
                    uVar22 = 1;
                    if ((code *******)0x2 < pppppppcVar19) {
                      uVar22 = (ulong)(((ulong)pppppppcVar19 & (long)pppppppcVar19 - 1U) != 0);
                    }
                    pppppppcVar25 = (code *******)(uVar22 | (long)pppppppcVar19 << 1);
                    pppppppcVar28 =
                         (code *******)
                         (long)((float)((long)param_1[0x60] + 1) / *(float *)(param_1 + 0x61));
                    if (pppppppcVar25 <= pppppppcVar28) {
                      pppppppcVar25 = pppppppcVar28;
                    }
                    if ((long)pppppppcVar25 - 1U == 0) {
                      pppppppcVar25 = (code *******)0x2;
                    }
                    else if (((ulong)pppppppcVar25 & (long)pppppppcVar25 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                      pppppppcVar19 = (code *******)param_1[0x5e];
                    }
                    if (pppppppcVar19 < pppppppcVar25) {
LAB_10a418390:
                      pppppppcVar19 = pppppppcVar25;
                      if ((ulong)pppppppcVar19 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a418ca8;
                      }
                      ppppppcVar16 = (code ******)((long)pppppppcVar19 << 3);
                      __Znwm();
                      ppppppcVar17 = *unaff_x20;
                      *unaff_x20 = ppppppcVar16;
                      if (ppppppcVar17 != (code ******)0x0) {
                        __ZdlPv();
                      }
                      pppppppcVar25 = (code *******)0x0;
                      param_1[0x5e] = (code ******)pppppppcVar19;
                      do {
                        (*unaff_x20)[(long)pppppppcVar25] = (code *****)0x0;
                        pppppppcVar25 = (code *******)((long)pppppppcVar25 + 1);
                      } while (pppppppcVar19 != pppppppcVar25);
                      ppppppcVar16 = *pppppppcVar26;
                      if (ppppppcVar16 != (code ******)0x0) {
                        pppppppcVar25 = (code *******)ppppppcVar16[1];
                        uVar22 = (long)pppppppcVar19 - 1;
                        if (((ulong)pppppppcVar19 & uVar22) == 0) {
                          pppppppcVar25 = (code *******)((ulong)pppppppcVar25 & uVar22);
                        }
                        else if (pppppppcVar19 <= pppppppcVar25) {
                          uVar9 = 0;
                          if (pppppppcVar19 != (code *******)0x0) {
                            uVar9 = (ulong)pppppppcVar25 / (ulong)pppppppcVar19;
                          }
                          pppppppcVar25 =
                               (code *******)((long)pppppppcVar25 - uVar9 * (long)pppppppcVar19);
                        }
                        (*unaff_x20)[(long)pppppppcVar25] = (code *****)pppppppcVar26;
                        ppppppcVar17 = (code ******)*ppppppcVar16;
                        while (ppppppcVar17 != (code ******)0x0) {
                          pppppppcVar28 = (code *******)ppppppcVar17[1];
                          if (((ulong)pppppppcVar19 & uVar22) == 0) {
                            pppppppcVar28 = (code *******)((ulong)pppppppcVar28 & uVar22);
                          }
                          else if (pppppppcVar19 <= pppppppcVar28) {
                            uVar9 = 0;
                            if (pppppppcVar19 != (code *******)0x0) {
                              uVar9 = (ulong)pppppppcVar28 / (ulong)pppppppcVar19;
                            }
                            pppppppcVar28 =
                                 (code *******)((long)pppppppcVar28 - uVar9 * (long)pppppppcVar19);
                          }
                          ppppppcVar12 = ppppppcVar17;
                          if (pppppppcVar28 != pppppppcVar25) {
                            ppppppcVar18 = *unaff_x20;
                            if (ppppppcVar18[(long)pppppppcVar28] == (code *****)0x0) {
                              ppppppcVar18[(long)pppppppcVar28] = (code *****)ppppppcVar16;
                              pppppppcVar25 = pppppppcVar28;
                            }
                            else {
                              *ppppppcVar16 = *ppppppcVar17;
                              *ppppppcVar17 = (code *****)*ppppppcVar18[(long)pppppppcVar28];
                              *ppppppcVar18[(long)pppppppcVar28] = (code ****)ppppppcVar17;
                              ppppppcVar12 = ppppppcVar16;
                            }
                          }
                          ppppppcVar16 = ppppppcVar12;
                          ppppppcVar17 = (code ******)*ppppppcVar12;
                        }
                      }
                    }
                    else if (pppppppcVar25 < pppppppcVar19) {
                      pppppppcVar28 =
                           (code *******)(long)((float)param_1[0x60] / *(float *)(param_1 + 0x61));
                      if ((pppppppcVar19 < (code *******)0x3) ||
                         (((ulong)pppppppcVar19 & (long)pppppppcVar19 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if ((code *******)0x1 < pppppppcVar28) {
                        pppppppcVar28 =
                             (code *******)(1L << (-LZCOUNT((long)pppppppcVar28 + -1) & 0x3fU));
                      }
                      if (pppppppcVar25 <= pppppppcVar28) {
                        pppppppcVar25 = pppppppcVar28;
                      }
                      if (pppppppcVar25 < pppppppcVar19) {
                        if (pppppppcVar25 != (code *******)0x0) goto LAB_10a418390;
                        ppppppcVar16 = *unaff_x20;
                        *unaff_x20 = (code ******)0x0;
                        if (ppppppcVar16 != (code ******)0x0) {
                          __ZdlPv();
                        }
                        pppppppcVar19 = (code *******)0x0;
                        param_1[0x5e] = (code ******)0x0;
                      }
                      else {
                        pppppppcVar19 = (code *******)param_1[0x5e];
                      }
                    }
                    if (((ulong)pppppppcVar19 & (long)pppppppcVar19 - 1U) == 0) {
                      pppppppcVar25 =
                           (code *******)((long)pppppppcVar19 - 1U & (ulong)pppppppcVar23);
                    }
                    else {
                      pppppppcVar25 = pppppppcVar23;
                      if (pppppppcVar19 <= pppppppcVar23) {
                        uVar22 = 0;
                        if (pppppppcVar19 != (code *******)0x0) {
                          uVar22 = (ulong)pppppppcVar23 / (ulong)pppppppcVar19;
                        }
                        pppppppcVar25 =
                             (code *******)((long)pppppppcVar23 - uVar22 * (long)pppppppcVar19);
                      }
                    }
                  }
                  ppppppcVar17 = *unaff_x20;
                  ppppppcVar16 = (code ******)ppppppcVar17[(long)pppppppcVar25];
                  if (ppppppcVar16 == (code ******)0x0) {
                    *ppppppcVar32 = (code *****)*pppppppcVar26;
                    *pppppppcVar26 = ppppppcVar32;
                    ppppppcVar17[(long)pppppppcVar25] = (code *****)pppppppcVar26;
                    if (*ppppppcVar32 != (code *****)0x0) {
                      pppppppcVar25 = (code *******)(*ppppppcVar32)[1];
                      if (((ulong)pppppppcVar19 & (long)pppppppcVar19 - 1U) == 0) {
                        pppppppcVar25 =
                             (code *******)((ulong)pppppppcVar25 & (long)pppppppcVar19 - 1U);
                      }
                      else if (pppppppcVar19 <= pppppppcVar25) {
                        uVar22 = 0;
                        if (pppppppcVar19 != (code *******)0x0) {
                          uVar22 = (ulong)pppppppcVar25 / (ulong)pppppppcVar19;
                        }
                        pppppppcVar25 =
                             (code *******)((long)pppppppcVar25 - uVar22 * (long)pppppppcVar19);
                      }
                      ppppppcVar16 = *unaff_x20 + (long)pppppppcVar25;
                      goto LAB_10a418578;
                    }
                  }
                  else {
                    *ppppppcVar32 = *ppppppcVar16;
LAB_10a418578:
                    *ppppppcVar16 = (code *****)ppppppcVar32;
                  }
                  param_1[0x60] = (code ******)((long)param_1[0x60] + 1);
LAB_10a418588:
                  pppppppcVar25 = pppppppcStack_120;
                  if (pppppppcStack_120 < pppppppcStack_118) {
                    param_2 = pppppppcVar27;
                    FUN_10a4365a4(pppppppcStack_120);
                    pppppppcStack_120 = pppppppcVar25 + 6;
                  }
                  else {
                    lVar20 = (long)pppppppcStack_120 - (long)pppppppcStack_128;
                    uVar22 = (lVar20 >> 4) * -0x5555555555555555 + 1;
                    if (0x555555555555555 < uVar22) {
                      FUN_10a43668c();
LAB_10a418ca8:
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a418cac);
                      (*pcVar8)();
                    }
                    lVar6 = (long)pppppppcStack_118 - (long)pppppppcStack_128 >> 4;
                    uVar9 = lVar6 * 0x5555555555555556;
                    if (uVar9 < uVar22 || uVar9 - uVar22 == 0) {
                      uVar9 = uVar22;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
                      uVar9 = 0x555555555555555;
                    }
                    pppppppcStack_a0 = (code *******)&pppppppcStack_128;
                    if (uVar9 == 0) {
                      pppppppcVar25 = (code *******)0x0;
                    }
                    else {
                      pppppppcVar25 = (code *******)&pppppppcStack_128;
                      FUN_10a4366a0();
                    }
                    ppppppcVar32 = (code ******)((long)pppppppcVar25 + lVar20);
                    pppppppcStack_a8 = pppppppcVar25 + uVar9 * 6;
                    pppppppcStack_c0 = pppppppcVar25;
                    pppppppcStack_b8 = (code *******)ppppppcVar32;
                    pppppppcStack_b0 = (code *******)ppppppcVar32;
                    FUN_10a4365a4(ppppppcVar32,pppppppcVar27);
                    pppppppcStack_b0 = (code *******)(ppppppcVar32 + 6);
                    pppppppcVar25 =
                         (code *******)
                         ((long)pppppppcStack_128 + ((long)ppppppcVar32 - (long)pppppppcStack_120));
                    param_2 = pppppppcStack_128;
                    func_0x00010a4366e4(&pppppppcStack_128,pppppppcStack_128,pppppppcStack_120,
                                        pppppppcVar25);
                    pppppppcVar19 = pppppppcStack_b0;
                    pppppppcVar28 = pppppppcStack_118;
                    pppppppcStack_118 = pppppppcStack_a8;
                    pppppppcStack_120 = pppppppcStack_b0;
                    pppppppcStack_b0 = pppppppcStack_128;
                    pppppppcStack_a8 = pppppppcVar28;
                    pppppppcStack_c0 = pppppppcStack_128;
                    pppppppcStack_b8 = pppppppcStack_128;
                    pppppppcStack_128 = pppppppcVar25;
                    func_0x00010a436790(&pppppppcStack_c0);
                    pppppppcStack_120 = pppppppcVar19;
                  }
                }
              }
              pppppppcVar27 = pppppppcVar27 + 6;
            } while (pppppppcVar27 != pppppppcVar24);
          }
        }
        if (ppppppcVar11 != (code ******)0x0) {
          ppppppcVar32 = ppppppcVar11 + 1;
          do {
            pppppcVar10 = *ppppppcVar32;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar32,0x10);
            if (bVar2) {
              *ppppppcVar32 = (code *****)((long)pppppcVar10 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pppppcVar10 == (code *****)0x0) {
            (*(code *)(*ppppppcVar11)[2])(ppppppcVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar11);
          }
        }
        pppppppcVar27 = pppppppcStack_120;
        ppppppcVar31 = ppppppcVar31 + 2;
        pppppppcVar24 = param_2;
      } while (ppppppcVar31 != ppppppcVar5);
      if (pppppppcStack_128 != pppppppcStack_120) {
        pppppppcVar26 = pppppppcStack_128;
        do {
          ppppppcVar5 = param_1[0x42];
          unaff_x20 = (code *******)0x48;
          __Znwm();
          unaff_x20[1] = (code ******)0x0;
          unaff_x20[2] = (code ******)0x0;
          *unaff_x20 = (code ******)&PTR_DAT_110bd9710;
          if (*(char *)((long)pppppppcVar26 + 0x2f) < '\0') {
            func_0x000107c3192c(&pppppppcStack_c0,pppppppcVar26[3],pppppppcVar26[4]);
          }
          else {
            pppppppcStack_b8 = (code *******)pppppppcVar26[4];
            pppppppcStack_c0 = (code *******)pppppppcVar26[3];
            pppppppcStack_b0 = (code *******)pppppppcVar26[5];
          }
          pppppppcStack_140 = unaff_x20 + 3;
          *pppppppcStack_140 = (code ******)&PTR_DAT_110bd46b8;
          unaff_x20[4] = (code ******)0x0;
          unaff_x20[5] = (code ******)0x0;
          unaff_x20[7] = (code ******)pppppppcStack_b8;
          unaff_x20[6] = (code ******)pppppppcStack_c0;
          unaff_x20[8] = (code ******)pppppppcStack_b0;
          ppppppcStack_108 = (code ******)0x0;
          pppppppcStack_110 = (code *******)0x0;
          lStack_f8 = 0;
          ppppppcStack_100 = (code ******)0x0;
          fStack_f0 = *(float *)(ppppppcVar5 + 7);
          param_2 = (code *******)ppppppcVar5[4];
          pppppppcStack_138 = unaff_x20;
          FUN_10a43ed84(&pppppppcStack_110);
          ppppppcVar11 = ppppppcStack_108;
          ppppppcVar32 = ppppppcStack_100;
          for (pppppcVar10 = ppppppcVar5[5]; ppppppcStack_108 = ppppppcVar11,
              ppppppcStack_100 = ppppppcVar32, pppppcVar10 != (code *****)0x0;
              pppppcVar10 = (code *****)*pppppcVar10) {
            pppppcVar7 = (code *****)pppppcVar10[2];
            uVar22 = ((ulong)(uint)((int)pppppcVar7 << 3) + 8 ^ (ulong)pppppcVar7 >> 0x20) *
                     -0x622015f714c7d297;
            uVar22 = ((ulong)pppppcVar7 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
            ppppppcVar32 = (code ******)((uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297);
            if (ppppppcVar11 != (code ******)0x0) {
              uVar22 = (long)ppppppcVar11 - 1;
              if (((ulong)ppppppcVar11 & uVar22) == 0) {
                ppppppcVar31 = (code ******)((ulong)ppppppcVar32 & uVar22);
              }
              else {
                ppppppcVar31 = ppppppcVar32;
                if (ppppppcVar11 <= ppppppcVar32) {
                  uVar9 = 0;
                  if (ppppppcVar11 != (code ******)0x0) {
                    uVar9 = (ulong)ppppppcVar32 / (ulong)ppppppcVar11;
                  }
                  ppppppcVar31 = (code ******)((long)ppppppcVar32 - uVar9 * (long)ppppppcVar11);
                }
              }
              ppppppcVar16 = pppppppcStack_110[(long)ppppppcVar31];
              if (ppppppcVar16 != (code ******)0x0) {
                do {
                  while( true ) {
                    ppppppcVar16 = (code ******)*ppppppcVar16;
                    if (ppppppcVar16 == (code ******)0x0) goto LAB_10a41889c;
                    ppppppcVar17 = (code ******)ppppppcVar16[1];
                    if (ppppppcVar17 != ppppppcVar32) break;
                    if (ppppppcVar16[2] == pppppcVar7) goto LAB_10a418a00;
                  }
                  if (((ulong)ppppppcVar11 & uVar22) == 0) {
                    ppppppcVar17 = (code ******)((ulong)ppppppcVar17 & uVar22);
                  }
                  else if (ppppppcVar11 <= ppppppcVar17) {
                    uVar9 = 0;
                    if (ppppppcVar11 != (code ******)0x0) {
                      uVar9 = (ulong)ppppppcVar17 / (ulong)ppppppcVar11;
                    }
                    ppppppcVar17 = (code ******)((long)ppppppcVar17 - uVar9 * (long)ppppppcVar11);
                  }
                } while (ppppppcVar17 == ppppppcVar31);
              }
            }
LAB_10a41889c:
            ppppppcVar16 = (code ******)0x68;
            __Znwm();
            *ppppppcVar16 = (code *****)0x0;
            ppppppcVar16[1] = (code *****)ppppppcVar32;
            ppppcVar21 = pppppcVar10[3];
            pppppcVar7 = (code *****)pppppcVar10[2];
            ppppppcVar16[3] = (code *****)pppppcVar10[3];
            ppppppcVar16[2] = pppppcVar7;
            if (ppppcVar21 != (code ****)0x0) {
              ppppcVar21 = ppppcVar21 + 1;
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppppcVar21,0x10);
                if (bVar2) {
                  *ppppcVar21 = (code ***)((long)*ppppcVar21 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            pppppppcStack_c0 = (code *******)(ppppppcVar16 + 4);
            *(undefined1 *)(ppppppcVar16 + 0xc) = 3;
            if (*(code *)(pppppcVar10 + 0xc) == (code)0x0) {
              cVar4 = (code)0x0;
            }
            else {
              param_2 = (code *******)(pppppcVar10 + 4);
              FUN_10a005398(&pppppppcStack_c0);
              cVar4 = *(code *)(pppppcVar10 + 0xc);
            }
            *(code *)(ppppppcVar16 + 0xc) = cVar4;
            if ((ppppppcVar11 == (code ******)0x0) ||
               (fStack_f0 * (float)ppppppcVar11 < (float)(lStack_f8 + 1))) {
              uVar22 = 1;
              if ((code ******)0x2 < ppppppcVar11) {
                uVar22 = (ulong)(((ulong)ppppppcVar11 & (long)ppppppcVar11 - 1U) != 0);
              }
              param_2 = (code *******)(uVar22 | (long)ppppppcVar11 << 1);
              pppppppcVar24 = (code *******)(long)((float)(lStack_f8 + 1) / fStack_f0);
              if (param_2 <= pppppppcVar24) {
                param_2 = pppppppcVar24;
              }
              FUN_10a43ed84(&pppppppcStack_110);
              ppppppcVar11 = ppppppcStack_108;
              if (((ulong)ppppppcStack_108 & (long)ppppppcStack_108 - 1U) == 0) {
                ppppppcVar31 = (code ******)((long)ppppppcStack_108 - 1U & (ulong)ppppppcVar32);
              }
              else {
                ppppppcVar31 = ppppppcVar32;
                if (ppppppcStack_108 <= ppppppcVar32) {
                  uVar22 = 0;
                  if (ppppppcStack_108 != (code ******)0x0) {
                    uVar22 = (ulong)ppppppcVar32 / (ulong)ppppppcStack_108;
                  }
                  ppppppcVar31 = (code ******)((long)ppppppcVar32 - uVar22 * (long)ppppppcStack_108)
                  ;
                }
              }
            }
            ppppppcVar32 = pppppppcStack_110[(long)ppppppcVar31];
            if (ppppppcVar32 == (code ******)0x0) {
              *ppppppcVar16 = (code *****)ppppppcStack_100;
              pppppppcStack_110[(long)ppppppcVar31] = (code ******)&ppppppcStack_100;
              ppppppcStack_100 = ppppppcVar16;
              if (*ppppppcVar16 != (code *****)0x0) {
                ppppppcVar32 = (code ******)(*ppppppcVar16)[1];
                if (((ulong)ppppppcVar11 & (long)ppppppcVar11 - 1U) == 0) {
                  ppppppcVar32 = (code ******)((ulong)ppppppcVar32 & (long)ppppppcVar11 - 1U);
                }
                else if (ppppppcVar11 <= ppppppcVar32) {
                  uVar22 = 0;
                  if (ppppppcVar11 != (code ******)0x0) {
                    uVar22 = (ulong)ppppppcVar32 / (ulong)ppppppcVar11;
                  }
                  ppppppcVar32 = (code ******)((long)ppppppcVar32 - uVar22 * (long)ppppppcVar11);
                }
                pppppppcStack_110[(long)ppppppcVar32] = ppppppcVar16;
              }
            }
            else {
              *ppppppcVar16 = *ppppppcVar32;
              *ppppppcVar32 = (code *****)ppppppcVar16;
            }
            lStack_f8 = lStack_f8 + 1;
LAB_10a418a00:
            ppppppcVar11 = ppppppcStack_108;
            ppppppcVar32 = ppppppcStack_100;
          }
          if (ppppppcVar32 == (code ******)0x0) {
            FUN_10a43fd9c(&pppppppcStack_110);
LAB_10a418c10:
            pppppppcVar24 = unaff_x20 + 1;
            do {
              ppppppcVar5 = *pppppppcVar24;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
              if (bVar2) {
                *pppppppcVar24 = (code ******)((long)ppppppcVar5 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppppcVar5 == (code ******)0x0) {
              (*(code *)(*unaff_x20)[2])(unaff_x20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
            }
          }
          else {
            do {
              pppppppcVar24 = (code *******)ppppppcVar32[2];
              ppppppcVar11 = ppppppcVar5 + 3;
              FUN_10a43f794();
              param_2 = pppppppcVar24;
              if (ppppppcVar11 != (code ******)0x0) {
                if (*(char *)(ppppppcVar32 + 0xc) == '\x01') {
                  pppppcVar10 = ppppppcVar32[4];
                  pppppppcStack_b8 = pppppppcStack_138;
                  pppppppcStack_c0 = pppppppcStack_140;
                  if (pppppppcStack_138 != (code *******)0x0) {
                    pppppppcVar24 = pppppppcStack_138 + 1;
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
                      if (bVar2) {
                        *pppppppcVar24 = (code ******)((long)*pppppppcVar24 + 1);
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  param_2 = (code *******)(ppppppcVar32 + 4);
                  (*(code *)pppppcVar10)(&pppppppcStack_c0);
                  if (pppppppcStack_b8 != (code *******)0x0) {
                    pppppppcVar24 = pppppppcStack_b8 + 1;
                    do {
                      ppppppcVar11 = *pppppppcVar24;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
                      if (bVar2) {
                        *pppppppcVar24 = (code ******)((long)ppppppcVar11 + -1);
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                      pppppppcVar25 = pppppppcStack_b8;
                    } while (cVar1 != '\0');
LAB_10a418ac8:
                    if (ppppppcVar11 == (code ******)0x0) {
                      (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
                    }
                  }
                }
                else if (*(char *)(ppppppcVar32 + 0xc) == '\x02') {
                  ppppppcVar11 = ppppppcVar32 + 4;
                  FUN_10a688b40();
                  pppppppcVar25 = pppppppcStack_138;
                  if (ppppppcVar11 == (code ******)0x0) {
                    param_2 = (code *******)0x0;
                    if (pppppppcVar24 != (code *******)0x0) {
                      pppppppcStack_b0 = (code *******)ppppppcVar32[4];
                      pppppppcStack_a8 = (code *******)ppppppcVar32[5];
                      if (pppppppcStack_a8 != (code *******)0x0) {
                        pppppppcVar28 = pppppppcStack_a8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
                          if (bVar2) {
                            *pppppppcVar28 = (code ******)((long)*pppppppcVar28 + 1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      pppppppcStack_d0 = pppppppcStack_140;
                      pppppppcStack_c8 = pppppppcStack_138;
                      if (pppppppcStack_138 == (code *******)0x0) {
                        pppppppcStack_98 = (code *******)0x0;
                      }
                      else {
                        pppppppcVar28 = pppppppcStack_138 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
                          if (bVar2) {
                            *pppppppcVar28 = (code ******)((long)*pppppppcVar28 + 1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        pppppppcStack_98 = pppppppcStack_138;
                        do {
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
                          if (bVar2) {
                            *pppppppcVar28 = (code ******)((long)*pppppppcVar28 + 1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      pppppppcStack_a0 = pppppppcStack_140;
                      pppppppcStack_b8 = (code *******)&PTR_FUN_110bd9750;
                      pppppppcStack_d8 = (code *******)0x0;
                      pppppppcStack_e0 = (code *******)0x0;
                      pppppppcStack_c0 = (code *******)FUN_10a4407f4;
                      param_2 = (code *******)&pppppppcStack_c0;
                      FUN_10a4634ec(pppppppcVar24);
                      (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
                      if (pppppppcVar25 != (code *******)0x0) {
                        pppppppcVar24 = pppppppcVar25 + 1;
                        do {
                          ppppppcVar11 = *pppppppcVar24;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
                          if (bVar2) {
                            *pppppppcVar24 = (code ******)((long)ppppppcVar11 + -1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        if (ppppppcVar11 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
                        }
                      }
                      if (pppppppcStack_d8 != (code *******)0x0) {
                        pppppppcVar24 = pppppppcStack_d8 + 1;
                        do {
                          ppppppcVar11 = *pppppppcVar24;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar24,0x10);
                          if (bVar2) {
                            *pppppppcVar24 = (code ******)((long)ppppppcVar11 + -1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                          pppppppcVar25 = pppppppcStack_d8;
                        } while (cVar1 != '\0');
                        goto LAB_10a418ac8;
                      }
                    }
                  }
                  else {
                    *ppppppcVar11 =
                         (code *****)
                         CONCAT44((int)((ulong)*ppppppcVar11 >> 0x20) + 1,(int)*ppppppcVar11 + 1);
                    param_2 = (code *******)&pppppppcStack_140;
                    FUN_10a4405f0(ppppppcVar32[4]);
                    iVar3 = *(int *)((long)ppppppcVar11 + 4) + -1;
                    *(int *)((long)ppppppcVar11 + 4) = iVar3;
                    if (iVar3 == 0) {
                      *(undefined4 *)ppppppcVar11 = 0;
                    }
                  }
                }
              }
              unaff_x20 = pppppppcStack_138;
              ppppppcVar32 = (code ******)*ppppppcVar32;
            } while (ppppppcVar32 != (code ******)0x0);
            FUN_10a43fd9c(&pppppppcStack_110);
            if (unaff_x20 != (code *******)0x0) goto LAB_10a418c10;
          }
          pppppppcVar26 = pppppppcVar26 + 6;
        } while (pppppppcVar26 != pppppppcVar27);
      }
    }
    pppppppcStack_c0 = (code *******)&pppppppcStack_128;
    pppppppcVar26 = (code *******)&pppppppcStack_c0;
    FUN_10a4367dc();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a418cb0:
  FUN_10a43655c();
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x20);
  __ZdlPv();
  pppppppcStack_e0 = (code *******)&pppppppcStack_128;
  FUN_10a4367dc(&pppppppcStack_e0);
  __Unwind_Resume();
  ppppppcVar5 = pppppppcVar26[0x47];
  ppppppcVar31 = pppppppcVar26[0x46];
  if (ppppppcVar5 != ppppppcVar31) {
    uVar22 = 0;
    pppppppcVar24 = pppppppcVar26 + 0x58;
    pppppppcVar27 = pppppppcVar26 + 0x5a;
    do {
      ppppppcVar11 = ppppppcVar31 + uVar22 * 10;
      pppppcVar10 = ppppppcVar11[7];
      pppppcVar7 = ppppppcVar11[8];
      if (pppppcVar10 != pppppcVar7) {
        do {
          ppppcVar21 = *pppppcVar10;
          if (*(code *)(ppppcVar21 + 0x6b) == (code)0x1) {
            FUN_10a440978(pppppppcVar24);
            ppppppcVar31 = param_2[1];
            for (ppppppcVar5 = *param_2; ppppppcVar5 != ppppppcVar31; ppppppcVar5 = ppppppcVar5 + 4)
            {
              FUN_10aa71aa0(&ppppppcStack_230,(*ppppppcVar5)[8],ppppppcVar11);
              if ((uVar22 == 0) && (ppppppcStack_230 == (code ******)0x0)) {
                ppppcVar29 = (*ppppppcVar5)[8];
                FUN_10a416ae4();
                FUN_10aa71aa0(&ppppppcStack_220,ppppcVar29,0x1137eb188);
                pppppppcVar28 = pppppppcStack_218;
                ppppppcStack_230 = ppppppcStack_220;
                pppppppcVar25 = pppppppcStack_228;
                ppppppcStack_220 = (code ******)0x0;
                pppppppcStack_218 = (code *******)0x0;
                pppppppcStack_228 = pppppppcVar28;
                if (pppppppcVar25 != (code *******)0x0) {
                  pppppppcVar28 = pppppppcVar25 + 1;
                  do {
                    ppppppcVar32 = *pppppppcVar28;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
                    if (bVar2) {
                      *pppppppcVar28 = (code ******)((long)ppppppcVar32 + -1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (ppppppcVar32 == (code ******)0x0) {
                    (*(code *)(*pppppppcVar25)[2])(pppppppcVar25);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
                  }
                }
                pppppppcVar25 = pppppppcStack_218;
                if (pppppppcStack_218 != (code *******)0x0) {
                  pppppppcVar28 = pppppppcStack_218 + 1;
                  do {
                    ppppppcVar32 = *pppppppcVar28;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
                    if (bVar2) {
                      *pppppppcVar28 = (code ******)((long)ppppppcVar32 + -1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (ppppppcVar32 == (code ******)0x0) {
                    (*(code *)(*pppppppcStack_218)[2])(pppppppcStack_218);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
                  }
                }
              }
              if ((ppppppcStack_230 != (code ******)0x0) &&
                 (pppppcVar30 = ppppppcStack_230[0x11], pppppcVar30 != (code *****)0x0)) {
                fVar36 = *(float *)(*ppppppcVar5 + 10);
                fVar35 = *(float *)(ppppppcVar5 + 2);
                do {
                  ppppcVar29 = ppppcVar21 + 99;
                  FUN_10a428b30(ppppcVar29,pppppcVar30 + 2);
                  if ((int)ppppcVar29 != 0) {
                    ppppppcVar16 = (code ******)pppppcVar30[5];
                    ppppppcVar32 = pppppppcVar26[0x59];
                    if (ppppppcVar32 != (code ******)0x0) {
                      pcVar8 = (code *)((long)ppppppcVar32 + -1);
                      if (((ulong)ppppppcVar32 & (ulong)pcVar8) == 0) {
                        unaff_x25 = (code ******)((ulong)pcVar8 & (ulong)ppppppcVar16);
                      }
                      else {
                        unaff_x25 = ppppppcVar16;
                        if (ppppppcVar32 <= ppppppcVar16) {
                          uVar9 = 0;
                          if (ppppppcVar32 != (code ******)0x0) {
                            uVar9 = (ulong)ppppppcVar16 / (ulong)ppppppcVar32;
                          }
                          unaff_x25 = (code ******)((long)ppppppcVar16 - uVar9 * (long)ppppppcVar32)
                          ;
                        }
                      }
                      if ((*pppppppcVar24)[(long)unaff_x25] != (code *****)0x0) {
                        for (ppppppcVar17 = (code ******)*(*pppppppcVar24)[(long)unaff_x25];
                            ppppppcVar17 != (code ******)0x0;
                            ppppppcVar17 = (code ******)*ppppppcVar17) {
                          ppppppcVar12 = (code ******)ppppppcVar17[1];
                          if (ppppppcVar12 == ppppppcVar16) {
                            if ((code ******)ppppppcVar17[5] == ppppppcVar16) goto LAB_10a419154;
                          }
                          else {
                            if (((ulong)ppppppcVar32 & (ulong)pcVar8) == 0) {
                              ppppppcVar12 = (code ******)((ulong)ppppppcVar12 & (ulong)pcVar8);
                            }
                            else if (ppppppcVar32 <= ppppppcVar12) {
                              uVar9 = 0;
                              if (ppppppcVar32 != (code ******)0x0) {
                                uVar9 = (ulong)ppppppcVar12 / (ulong)ppppppcVar32;
                              }
                              ppppppcVar12 = (code ******)
                                             ((long)ppppppcVar12 - uVar9 * (long)ppppppcVar32);
                            }
                            if (ppppppcVar12 != unaff_x25) break;
                          }
                        }
                      }
                    }
                    ppppppcVar17 = (code ******)0x38;
                    __Znwm();
                    uStack_210 = 0;
                    *ppppppcVar17 = (code *****)0x0;
                    ppppppcVar17[1] = (code *****)ppppppcVar16;
                    ppppppcStack_220 = ppppppcVar17;
                    pppppppcStack_218 = pppppppcVar24;
                    if ((char)*(code *)((long)pppppcVar30 + 0x27) < '\0') {
                      func_0x000107c3192c(ppppppcVar17 + 2,pppppcVar30[2],pppppcVar30[3]);
                    }
                    else {
                      pppppcVar34 = (code *****)pppppcVar30[3];
                      pppppcVar14 = (code *****)pppppcVar30[2];
                      ppppppcVar17[4] = (code *****)pppppcVar30[4];
                      ppppppcVar17[3] = pppppcVar34;
                      ppppppcVar17[2] = pppppcVar14;
                    }
                    ppppppcVar17[5] = (code *****)pppppcVar30[5];
                    *(undefined4 *)(ppppppcVar17 + 6) = 0;
                    uStack_210 = CONCAT71(uStack_210._1_7_,1);
                    if ((ppppppcVar32 == (code ******)0x0) ||
                       (*(float *)(pppppppcVar26 + 0x5c) * (float)ppppppcVar32 <
                        (float)((long)pppppppcVar26[0x5b] + 1))) {
                      uVar9 = 1;
                      if ((code ******)0x2 < ppppppcVar32) {
                        uVar9 = (ulong)(((ulong)ppppppcVar32 & (ulong)((long)ppppppcVar32 + -1)) !=
                                       0);
                      }
                      uVar9 = uVar9 | (long)ppppppcVar32 << 1;
                      uVar13 = (ulong)((float)((long)pppppppcVar26[0x5b] + 1) /
                                      *(float *)(pppppppcVar26 + 0x5c));
                      if (uVar9 <= uVar13) {
                        uVar9 = uVar13;
                      }
                      FUN_10a1f9fe4(pppppppcVar24,uVar9);
                      ppppppcVar32 = pppppppcVar26[0x59];
                      if (((ulong)ppppppcVar32 & (ulong)((long)ppppppcVar32 + -1)) == 0) {
                        unaff_x25 = (code ******)
                                    ((ulong)((long)ppppppcVar32 + -1) & (ulong)ppppppcVar16);
                      }
                      else {
                        unaff_x25 = ppppppcVar16;
                        if (ppppppcVar32 <= ppppppcVar16) {
                          uVar9 = 0;
                          if (ppppppcVar32 != (code ******)0x0) {
                            uVar9 = (ulong)ppppppcVar16 / (ulong)ppppppcVar32;
                          }
                          unaff_x25 = (code ******)((long)ppppppcVar16 - uVar9 * (long)ppppppcVar32)
                          ;
                        }
                      }
                    }
                    ppppppcVar16 = *pppppppcVar24;
                    pppppcVar14 = ppppppcVar16[(long)unaff_x25];
                    if (pppppcVar14 == (code *****)0x0) {
                      *ppppppcStack_220 = (code *****)*pppppppcVar27;
                      *pppppppcVar27 = ppppppcStack_220;
                      ppppppcVar16[(long)unaff_x25] = (code *****)pppppppcVar27;
                      if (*ppppppcStack_220 != (code *****)0x0) {
                        ppppppcVar16 = (code ******)(*ppppppcStack_220)[1];
                        if (((ulong)ppppppcVar32 & (ulong)((long)ppppppcVar32 + -1)) == 0) {
                          ppppppcVar16 = (code ******)
                                         ((ulong)ppppppcVar16 & (ulong)((long)ppppppcVar32 + -1));
                        }
                        else if (ppppppcVar32 <= ppppppcVar16) {
                          uVar9 = 0;
                          if (ppppppcVar32 != (code ******)0x0) {
                            uVar9 = (ulong)ppppppcVar16 / (ulong)ppppppcVar32;
                          }
                          ppppppcVar16 = (code ******)
                                         ((long)ppppppcVar16 - uVar9 * (long)ppppppcVar32);
                        }
                        (*pppppppcVar24)[(long)ppppppcVar16] = (code *****)ppppppcStack_220;
                      }
                    }
                    else {
                      *ppppppcStack_220 = (code *****)*pppppcVar14;
                      *pppppcVar14 = (code ****)ppppppcStack_220;
                    }
                    pppppppcVar26[0x5b] = (code ******)((long)pppppppcVar26[0x5b] + 1);
                    ppppppcVar17 = ppppppcStack_220;
LAB_10a419154:
                    fVar37 = *(float *)(ppppppcVar17 + 6);
                    if (*(int *)(*ppppppcVar5 + 0xe) == 2) {
                      fVar33 = fVar35;
                      (*(code *)**pppppcVar30[6])();
                      fVar37 = fVar37 + fVar36 * fVar33;
                    }
                    else {
                      fVar33 = fVar35;
                      (*(code *)**pppppcVar30[6])();
                      fVar37 = fVar36 * fVar33 + (1.0 - fVar36) * fVar37;
                    }
                    *(float *)(ppppppcVar17 + 6) = fVar37;
                  }
                  pppppcVar30 = (code *****)*pppppcVar30;
                } while (pppppcVar30 != (code *****)0x0);
              }
              pppppppcVar25 = pppppppcStack_228;
              if (pppppppcStack_228 != (code *******)0x0) {
                pppppppcVar28 = pppppppcStack_228 + 1;
                do {
                  ppppppcVar32 = *pppppppcVar28;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
                  if (bVar2) {
                    *pppppppcVar28 = (code ******)((long)ppppppcVar32 + -1);
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (ppppppcVar32 == (code ******)0x0) {
                  (*(code *)(*pppppppcStack_228)[2])(pppppppcStack_228);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar25);
                }
              }
            }
            for (ppppppcVar5 = *pppppppcVar27; ppppppcVar5 != (code ******)0x0;
                ppppppcVar5 = (code ******)*ppppppcVar5) {
              FUN_10a428c04(*(undefined4 *)(ppppppcVar5 + 6),
                            (float)(double)ppppcVar21[0x2e][0x10a][1],ppppcVar21 + 99,
                            ppppppcVar5 + 2);
            }
            FUN_10a440978(pppppppcVar24);
          }
          pppppcVar10 = pppppcVar10 + 1;
        } while (pppppcVar10 != pppppcVar7);
        ppppppcVar5 = pppppppcVar26[0x47];
        ppppppcVar31 = pppppppcVar26[0x46];
      }
      uVar22 = uVar22 + 1;
      uVar9 = ((long)ppppppcVar5 - (long)ppppppcVar31 >> 4) * -0x3333333333333333;
    } while (uVar22 <= uVar9 && uVar9 - uVar22 != 0);
  }
  return;
}



/* Entry: 10a418dd0; end: 10a419307;  */

void FUN_10a418dd0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong unaff_x25;
  long *plVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  
  lVar8 = *(long *)(param_1 + 0x238);
  lVar10 = *(long *)(param_1 + 0x230);
  if (lVar8 != lVar10) {
    uVar14 = 0;
    plVar1 = (long *)(param_1 + 0x2c0);
    plVar2 = (long *)(param_1 + 0x2d0);
    do {
      lVar13 = lVar10 + uVar14 * 0x50;
      plVar15 = *(long **)(lVar13 + 0x38);
      plVar3 = *(long **)(lVar13 + 0x40);
      if (plVar15 != plVar3) {
        do {
          lVar8 = *plVar15;
          if (*(char *)(lVar8 + 0x358) == '\x01') {
            FUN_10a440978(plVar1);
            plVar4 = (long *)param_2[1];
            for (plVar16 = (long *)*param_2; plVar16 != plVar4; plVar16 = plVar16 + 4) {
              FUN_10aa71aa0(&plStack_c0,*(undefined8 *)(*plVar16 + 0x40),lVar13);
              if ((uVar14 == 0) && (plStack_c0 == (long *)0x0)) {
                uVar18 = *(undefined8 *)(*plVar16 + 0x40);
                FUN_10a416ae4();
                FUN_10aa71aa0(&plStack_b0,uVar18,0x1137eb188);
                plVar19 = plStack_a8;
                plStack_c0 = plStack_b0;
                plVar20 = plStack_b8;
                plStack_b0 = (long *)0x0;
                plStack_a8 = (long *)0x0;
                plStack_b8 = plVar19;
                if (plVar20 != (long *)0x0) {
                  plVar19 = plVar20 + 1;
                  do {
                    lVar10 = *plVar19;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar6) {
                      *plVar19 = lVar10 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar10 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                  }
                }
                plVar20 = plStack_a8;
                if (plStack_a8 != (long *)0x0) {
                  plVar19 = plStack_a8 + 1;
                  do {
                    lVar10 = *plVar19;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar6) {
                      *plVar19 = lVar10 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (lVar10 == 0) {
                    (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                  }
                }
              }
              if ((plStack_c0 != (long *)0x0) &&
                 (plVar20 = (long *)plStack_c0[0x11], plVar20 != (long *)0x0)) {
                fVar26 = *(float *)(*plVar16 + 0x50);
                fVar25 = *(float *)(plVar16 + 2);
                do {
                  lVar10 = lVar8 + 0x318;
                  FUN_10a428b30(lVar10,plVar20 + 2);
                  if ((int)lVar10 != 0) {
                    uVar21 = plVar20[5];
                    uVar17 = *(ulong *)(param_1 + 0x2c8);
                    if (uVar17 != 0) {
                      uVar9 = uVar17 - 1;
                      if ((uVar17 & uVar9) == 0) {
                        unaff_x25 = uVar9 & uVar21;
                      }
                      else {
                        unaff_x25 = uVar21;
                        if (uVar17 <= uVar21) {
                          uVar12 = 0;
                          if (uVar17 != 0) {
                            uVar12 = uVar21 / uVar17;
                          }
                          unaff_x25 = uVar21 - uVar12 * uVar17;
                        }
                      }
                      puVar11 = *(undefined8 **)(*plVar1 + unaff_x25 * 8);
                      if (puVar11 != (undefined8 *)0x0) {
                        for (plVar19 = (long *)*puVar11; plVar19 != (long *)0x0;
                            plVar19 = (long *)*plVar19) {
                          uVar12 = plVar19[1];
                          if (uVar12 == uVar21) {
                            if (plVar19[5] == uVar21) goto LAB_10a419154;
                          }
                          else {
                            if ((uVar17 & uVar9) == 0) {
                              uVar12 = uVar12 & uVar9;
                            }
                            else if (uVar17 <= uVar12) {
                              uVar7 = 0;
                              if (uVar17 != 0) {
                                uVar7 = uVar12 / uVar17;
                              }
                              uVar12 = uVar12 - uVar7 * uVar17;
                            }
                            if (uVar12 != unaff_x25) break;
                          }
                        }
                      }
                    }
                    plVar19 = (long *)0x38;
                    __Znwm();
                    uStack_a0 = 0;
                    *plVar19 = 0;
                    plVar19[1] = uVar21;
                    plStack_b0 = plVar19;
                    plStack_a8 = plVar1;
                    if (*(char *)((long)plVar20 + 0x27) < '\0') {
                      func_0x000107c3192c(plVar19 + 2,plVar20[2],plVar20[3]);
                    }
                    else {
                      lVar24 = plVar20[3];
                      lVar10 = plVar20[2];
                      plVar19[4] = plVar20[4];
                      plVar19[3] = lVar24;
                      plVar19[2] = lVar10;
                    }
                    plVar19[5] = plVar20[5];
                    *(undefined4 *)(plVar19 + 6) = 0;
                    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
                    fVar22 = (float)(*(long *)(param_1 + 0x2d8) + 1);
                    if ((uVar17 == 0) || (*(float *)(param_1 + 0x2e0) * (float)uVar17 < fVar22)) {
                      uVar9 = 1;
                      if (2 < uVar17) {
                        uVar9 = (ulong)((uVar17 & uVar17 - 1) != 0);
                      }
                      uVar9 = uVar9 | uVar17 << 1;
                      uVar17 = (ulong)(fVar22 / *(float *)(param_1 + 0x2e0));
                      if (uVar9 <= uVar17) {
                        uVar9 = uVar17;
                      }
                      FUN_10a1f9fe4(plVar1,uVar9);
                      uVar17 = *(ulong *)(param_1 + 0x2c8);
                      if ((uVar17 & uVar17 - 1) == 0) {
                        unaff_x25 = uVar17 - 1 & uVar21;
                      }
                      else {
                        unaff_x25 = uVar21;
                        if (uVar17 <= uVar21) {
                          uVar9 = 0;
                          if (uVar17 != 0) {
                            uVar9 = uVar21 / uVar17;
                          }
                          unaff_x25 = uVar21 - uVar9 * uVar17;
                        }
                      }
                    }
                    lVar10 = *plVar1;
                    plVar19 = *(long **)(lVar10 + unaff_x25 * 8);
                    if (plVar19 == (long *)0x0) {
                      *plStack_b0 = *plVar2;
                      *plVar2 = (long)plStack_b0;
                      *(long **)(lVar10 + unaff_x25 * 8) = plVar2;
                      if (*plStack_b0 != 0) {
                        uVar21 = *(ulong *)(*plStack_b0 + 8);
                        if ((uVar17 & uVar17 - 1) == 0) {
                          uVar21 = uVar21 & uVar17 - 1;
                        }
                        else if (uVar17 <= uVar21) {
                          uVar9 = 0;
                          if (uVar17 != 0) {
                            uVar9 = uVar21 / uVar17;
                          }
                          uVar21 = uVar21 - uVar9 * uVar17;
                        }
                        *(long **)(*plVar1 + uVar21 * 8) = plStack_b0;
                      }
                    }
                    else {
                      *plStack_b0 = *plVar19;
                      *plVar19 = (long)plStack_b0;
                    }
                    *(long *)(param_1 + 0x2d8) = *(long *)(param_1 + 0x2d8) + 1;
                    plVar19 = plStack_b0;
LAB_10a419154:
                    fVar22 = *(float *)(plVar19 + 6);
                    if (*(int *)(*plVar16 + 0x70) == 2) {
                      fVar23 = fVar25;
                      (*(code *)**(undefined8 **)plVar20[6])();
                      fVar22 = fVar22 + fVar26 * fVar23;
                    }
                    else {
                      fVar23 = fVar25;
                      (*(code *)**(undefined8 **)plVar20[6])();
                      fVar22 = fVar26 * fVar23 + (1.0 - fVar26) * fVar22;
                    }
                    *(float *)(plVar19 + 6) = fVar22;
                  }
                  plVar20 = (long *)*plVar20;
                } while (plVar20 != (long *)0x0);
              }
              plVar20 = plStack_b8;
              if (plStack_b8 != (long *)0x0) {
                plVar19 = plStack_b8 + 1;
                do {
                  lVar10 = *plVar19;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar6) {
                    *plVar19 = lVar10 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar10 == 0) {
                  (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
                }
              }
            }
            for (plVar16 = (long *)*plVar2; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
              FUN_10a428c04(*(undefined4 *)(plVar16 + 6),
                            (float)*(double *)(*(long *)(*(long *)(lVar8 + 0x170) + 0x850) + 8),
                            lVar8 + 0x318,plVar16 + 2);
            }
            FUN_10a440978(plVar1);
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar3);
        lVar8 = *(long *)(param_1 + 0x238);
        lVar10 = *(long *)(param_1 + 0x230);
      }
      uVar14 = uVar14 + 1;
      uVar17 = (lVar8 - lVar10 >> 4) * -0x3333333333333333;
    } while (uVar14 <= uVar17 && uVar17 - uVar14 != 0);
  }
  return;
}



/* Entry: 10a419308; end: 10a419587;  */

void FUN_10a419308(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 uVar14;
  float fVar15;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  
  lVar8 = *(long *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x238) != lVar8) {
    uVar13 = 0;
    do {
      lVar8 = lVar8 + uVar13 * 0x50;
      plVar11 = *(long **)(lVar8 + 0x28);
      if ((plVar11 != (long *)0x0) &&
         (plVar7 = plVar11, (**(code **)(*plVar11 + 0x60))(), (int)plVar7 != 0)) {
        plVar2 = (long *)param_2[1];
        for (plVar7 = (long *)*param_2; plVar7 != plVar2; plVar7 = plVar7 + 4) {
          uVar14 = (undefined4)plVar7[2];
          uVar12 = *(undefined8 *)(*plVar7 + 0x40);
          FUN_10aa71aa0(&lStack_90,uVar12,lVar8);
          if ((uVar13 == 0) && (lStack_90 == 0)) {
            FUN_10a416ae4();
            FUN_10aa71aa0(&lStack_a0,uVar12,0x1137eb188);
            plVar3 = plStack_88;
            plStack_88 = plStack_98;
            lStack_90 = lStack_a0;
            lStack_a0 = 0;
            plStack_98 = (long *)0x0;
            if (plVar3 != (long *)0x0) {
              plVar1 = plVar3 + 1;
              do {
                lVar9 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
              }
            }
            plVar3 = plStack_98;
            if (plStack_98 != (long *)0x0) {
              plVar1 = plStack_98 + 1;
              do {
                lVar9 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_98 + 0x10))(plStack_98);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
              }
            }
          }
          if (lStack_90 != 0) {
            lStack_a0 = *(long *)(lStack_90 + 0x68);
            plVar3 = *(long **)(lStack_90 + 0x70);
            if (plVar3 != (long *)0x0) {
              plVar1 = plVar3 + 1;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = *plVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plStack_98 = plVar3;
            if (0.0 < *(float *)(lStack_a0 + 0x20)) {
              FUN_10a0cad54();
              *(undefined4 *)(plVar11 + 0x3e) = uVar14;
              fVar15 = 0.0;
              if (0.0 <= *(float *)(*plVar7 + 0x50)) {
                fVar15 = *(float *)(*plVar7 + 0x50);
              }
              fVar6 = 1.0;
              if (fVar15 <= 1.0) {
                fVar6 = fVar15;
              }
              *(float *)((long)plVar11 + 500) = fVar6;
            }
            if (plVar3 != (long *)0x0) {
              plVar1 = plVar3 + 1;
              do {
                lVar9 = *plVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
              }
            }
          }
          plVar3 = plStack_88;
          if (plStack_88 != (long *)0x0) {
            plVar1 = plStack_88 + 1;
            do {
              lVar9 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar8 = *(long *)(param_1 + 0x230);
      uVar10 = (*(long *)(param_1 + 0x238) - lVar8 >> 4) * -0x3333333333333333;
    } while (uVar13 <= uVar10 && uVar10 - uVar13 != 0);
  }
  return;
}



/* Entry: 10a419588; end: 10a41998b;  */

void FUN_10a419588(long param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  pppuVar1 = (undefined8 ***)*param_2;
  uVar2 = param_2[1];
  lVar9 = 0x60;
  if (*(char *)(pppuVar1 + 0xd) == '\0') {
    lVar9 = 0x5c;
  }
  uVar17 = *(undefined4 *)((long)pppuVar1 + lVar9);
  if (uVar2 != 0) {
    plVar11 = (long *)(uVar2 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_90 = CONCAT44(uVar17,uVar17);
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  plVar11 = *(long **)(param_1 + 0x268);
  ppuStack_a0 = pppuVar1;
  uStack_98 = uVar2;
  if (plVar11 < *(long **)(param_1 + 0x270)) {
    *plVar11 = (long)pppuVar1;
    plVar11[1] = uVar2;
    *(undefined1 *)(plVar11 + 3) = 0;
    plVar11[2] = uStack_90;
    plVar11 = plVar11 + 4;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x260);
    lVar15 = (long)plVar11 - lVar9;
    uVar16 = (lVar15 >> 5) + 1;
    if (uVar16 >> 0x3b != 0) {
      FUN_10a43684c();
      goto LAB_10a419930;
    }
    uVar10 = (long)*(long **)(param_1 + 0x270) - lVar9;
    uVar12 = (long)uVar10 >> 4;
    if (uVar12 <= uVar16) {
      uVar12 = uVar16;
    }
    if (0x7fffffffffffffdf < uVar10) {
      uVar12 = 0x7ffffffffffffff;
    }
    plVar13 = param_2;
    plStack_58 = (long *)(param_1 + 0x260);
    FUN_10a436860();
    plVar14 = (long *)(uVar12 + lVar15);
    *plVar14 = (long)pppuVar1;
    plVar14[1] = uVar2;
    ppuStack_a0 = (undefined8 ***)0x0;
    uStack_98 = 0;
    *(undefined1 *)(plVar14 + 3) = (undefined1)uStack_88;
    plVar14[2] = uStack_90;
    plVar11 = plVar14 + 4;
    lVar9 = (long)plVar14 + (*(long *)(param_1 + 0x260) - *(long *)(param_1 + 0x268));
    func_0x00010a436894(*(long *)(param_1 + 0x260),*(long *)(param_1 + 0x268),lVar9);
    lStack_78 = *(long *)(param_1 + 0x260);
    *(long *)(param_1 + 0x260) = lVar9;
    *(long **)(param_1 + 0x268) = plVar11;
    lStack_60 = *(undefined8 *)(param_1 + 0x270);
    *(ulong *)(param_1 + 0x270) = uVar12 + (long)plVar13 * 0x20;
    plStack_70 = (long *)lStack_78;
    plStack_68 = (long *)lStack_78;
    func_0x00010a4368f8(&lStack_78);
  }
  *(long **)(param_1 + 0x268) = plVar11;
  lVar9 = *param_2;
  if (*(char *)(lVar9 + 0x3f) < '\0') {
    func_0x000107c3192c(&ppuStack_c0,*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x30));
    plVar11 = *(long **)(param_1 + 0x268);
  }
  else {
    uStack_b8 = *(ulong *)(lVar9 + 0x30);
    ppuStack_c0 = *(undefined8 ***)(lVar9 + 0x28);
    uStack_b0 = *(ulong *)(lVar9 + 0x38);
  }
  uStack_90 = uStack_b0;
  uVar2 = uStack_b8;
  pppuVar1 = (undefined8 ***)ppuStack_c0;
  uVar16 = ((long)plVar11 - *(long *)(param_1 + 0x260) >> 5) - 1;
  uStack_98 = uStack_b8;
  ppuStack_a0 = ppuStack_c0;
  ppuStack_c0 = (undefined8 ***)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  plVar13 = *(long **)(param_1 + 0x248);
  plVar14 = *(long **)(param_1 + 0x250);
  plVar11 = plVar13;
  uStack_88 = uVar16;
  if (plVar13 == plVar14) {
LAB_10a419798:
    if (plVar14 != plVar11) {
      plVar11[3] = uVar16;
      goto LAB_10a4198e0;
    }
  }
  else {
    if (-1 < (long)uStack_90) {
      uVar2 = uStack_90 >> 0x38;
      pppuVar1 = &ppuStack_a0;
    }
    do {
      bVar3 = *(byte *)((long)plVar11 + 0x17);
      uVar12 = plVar11[1];
      if (-1 < (char)bVar3) {
        uVar12 = (ulong)bVar3;
      }
      if (uVar12 == uVar2) {
        plVar7 = (long *)*plVar11;
        if (-1 < (char)bVar3) {
          plVar7 = plVar11;
        }
        _memcmp(plVar7,pppuVar1,uVar2);
        if ((int)plVar7 == 0) goto LAB_10a419798;
      }
      plVar11 = plVar11 + 4;
    } while (plVar11 != plVar14);
  }
  if (plVar14 < *(long **)(param_1 + 600)) {
    if ((long)uStack_90 < 0) {
      func_0x000107c3192c(plVar14,ppuStack_a0,uStack_98);
    }
    else {
      plVar14[1] = uStack_98;
      *plVar14 = (long)ppuStack_a0;
      plVar14[2] = uStack_90;
    }
    plVar14[3] = uVar16;
    plVar14 = plVar14 + 4;
    *(long **)(param_1 + 0x250) = plVar14;
  }
  else {
    lVar9 = (long)plVar14 - (long)plVar13;
    lVar15 = lVar9 >> 5;
    uVar2 = lVar15 + 1;
    if (uVar2 >> 0x3b != 0) {
      FUN_10a4409cc();
LAB_10a419930:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a419934);
      (*pcVar6)();
    }
    plStack_58 = (long *)(param_1 + 0x248);
    uVar10 = (long)*(long **)(param_1 + 600) - (long)plVar13;
    uVar12 = (long)uVar10 >> 4;
    if (uVar12 <= uVar2) {
      uVar12 = uVar2;
    }
    if (0x7fffffffffffffdf < uVar10) {
      uVar12 = 0x7ffffffffffffff;
    }
    if (uVar12 == 0) {
      lVar8 = 0;
    }
    else {
      if (uVar12 >> 0x3b != 0) {
        func_0x000109ffded8();
        goto LAB_10a419930;
      }
      lVar8 = uVar12 << 5;
      __Znwm();
    }
    plVar11 = (long *)(lVar8 + lVar9);
    lStack_60 = lVar8 + uVar12 * 0x20;
    lStack_78 = lVar8;
    plStack_70 = plVar11;
    plStack_68 = plVar11;
    if ((long)uStack_90 < 0) {
      func_0x000107c3192c(plVar11,ppuStack_a0,uStack_98);
      plVar13 = *(long **)(param_1 + 0x248);
      lVar9 = *(long *)(param_1 + 0x250) - (long)plVar13;
      lVar15 = lVar9 >> 5;
    }
    else {
      plVar11[1] = uStack_98;
      *plVar11 = (long)ppuStack_a0;
      plVar11[2] = uStack_90;
    }
    lVar8 = lStack_60;
    plVar11[3] = uVar16;
    plVar14 = plStack_68 + 4;
    plVar11 = plStack_70 + lVar15 * -4;
    _memcpy(plVar11,plVar13,lVar9);
    lStack_78 = *(long *)(param_1 + 0x248);
    *(long **)(param_1 + 0x248) = plVar11;
    *(long **)(param_1 + 0x250) = plVar14;
    lStack_60 = *(undefined8 *)(param_1 + 600);
    *(long *)(param_1 + 600) = lVar8;
    plStack_70 = (long *)lStack_78;
    plStack_68 = (long *)lStack_78;
    FUN_109db4c8c(&lStack_78);
  }
  *(long **)(param_1 + 0x250) = plVar14;
LAB_10a4198e0:
  if ((long)uStack_90 < 0) {
    __ZdlPv(ppuStack_a0);
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(ppuStack_c0);
  }
  return;
}



/* Entry: 10a41998c; end: 10a419b2f;  */

/* WARNING: Removing unreachable block (ram,0x00010a419a28) */

void FUN_10a41998c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar6 = *(undefined8 **)(param_1 + 0x248);
  puVar9 = *(undefined8 **)(param_1 + 0x250);
  FUN_10a415b78(puVar6,puVar9,param_2);
  if (puVar9 != puVar6) {
    uVar12 = puVar6[3];
    puVar10 = puVar6;
    if (puVar6 + 4 != puVar9) {
      do {
        if (*(char *)((long)puVar10 + 0x17) < '\0') {
          __ZdlPv(*puVar10);
        }
        puVar10[1] = puVar10[5];
        *puVar10 = puVar10[4];
        puVar6 = puVar10 + 4;
        *(undefined1 *)puVar6 = 0;
        *(undefined1 *)((long)puVar10 + 0x37) = 0;
        puVar10[2] = puVar10[6];
        puVar10[3] = puVar10[7];
        puVar1 = puVar10 + 8;
        puVar10 = puVar6;
      } while (puVar1 != puVar9);
      puVar9 = *(undefined8 **)(param_1 + 0x250);
    }
    for (; puVar9 != puVar6; puVar9 = puVar9 + -4) {
    }
    *(undefined8 **)(param_1 + 0x250) = puVar6;
    puVar6 = *(undefined8 **)(param_1 + 0x268);
    if (uVar12 < (ulong)((long)puVar6 - *(long *)(param_1 + 0x260) >> 5)) {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x260) + uVar12 * 0x20);
      if (puVar6 == puVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a419b30);
        (*pcVar5)();
      }
      puVar10 = puVar9 + 4;
      if (puVar10 != puVar6) {
        do {
          uVar14 = puVar10[1];
          uVar13 = *puVar10;
          *puVar10 = 0;
          puVar10[1] = 0;
          plVar11 = (long *)puVar9[1];
          puVar9[1] = uVar14;
          *puVar9 = uVar13;
          if (plVar11 != (long *)0x0) {
            plVar2 = plVar11 + 1;
            do {
              lVar7 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          puVar9[2] = puVar10[2];
          *(undefined1 *)(puVar9 + 3) = *(undefined1 *)(puVar10 + 3);
          puVar10 = puVar10 + 4;
          puVar9 = puVar9 + 4;
        } while (puVar10 != puVar6);
        puVar6 = *(undefined8 **)(param_1 + 0x268);
      }
      while (puVar6 != puVar9) {
        puVar6 = puVar6 + -4;
        FUN_10a0e3264(puVar6);
      }
      *(undefined8 **)(param_1 + 0x268) = puVar9;
      lVar8 = *(long *)(param_1 + 0x250);
      for (lVar7 = *(long *)(param_1 + 0x248); lVar7 != lVar8; lVar7 = lVar7 + 0x20) {
        if (uVar12 < *(ulong *)(lVar7 + 0x18)) {
          *(ulong *)(lVar7 + 0x18) = *(ulong *)(lVar7 + 0x18) - 1;
        }
      }
    }
  }
  return;
}



/* Entry: 10a419b30; end: 10a419b9f;  */

void FUN_10a419b30(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (((*(byte *)(*param_2 + 0x69) & 1) == 0) && (*(long *)(*param_2 + 0x40) != 0)) {
    if ((char)param_2[3] == '\x01') {
      FUN_10a416a04(param_2);
    }
    else {
      if ((char)param_2[3] != '\x02') {
        return;
      }
      *(undefined1 *)(param_2 + 3) = 1;
    }
    plVar10 = (long *)param_3[1];
    if (plVar10 < (long *)param_3[2]) {
      lVar7 = param_2[1];
      lVar5 = *param_2;
      plVar10[1] = param_2[1];
      *plVar10 = lVar5;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar7 = param_2[2];
      *(char *)(plVar10 + 3) = (char)param_2[3];
      plVar10[2] = lVar7;
      plVar10 = plVar10 + 4;
    }
    else {
      lVar7 = (long)plVar10 - *param_3;
      uVar2 = (lVar7 >> 5) + 1;
      if (uVar2 >> 0x3b != 0) {
        FUN_10a43684c();
        lVar7 = *param_2;
        lVar5 = param_2[1];
        while (lVar5 != lVar7) {
          lVar5 = lVar5 + -0x20;
          FUN_10a0e3264();
        }
        param_2[1] = lVar7;
        FUN_10a419d5c(param_2,param_3[1] - *param_3 >> 5);
        lVar5 = param_3[1];
        for (lVar7 = *param_3; lVar7 != lVar5; lVar7 = lVar7 + 0x20) {
          FUN_10a419b30(param_1,lVar7,param_2);
        }
        return;
      }
      uVar8 = param_3[2] - *param_3;
      uVar9 = (long)uVar8 >> 4;
      if (uVar9 <= uVar2) {
        uVar9 = uVar2;
      }
      if (0x7fffffffffffffdf < uVar8) {
        uVar9 = 0x7ffffffffffffff;
      }
      plVar6 = param_2;
      plStack_38 = param_3;
      FUN_10a436860();
      plVar1 = (long *)(uVar9 + lVar7);
      lVar7 = param_2[1];
      lVar5 = *param_2;
      plVar1[1] = param_2[1];
      *plVar1 = lVar5;
      if (lVar7 != 0) {
        plVar10 = (long *)(lVar7 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar7 = param_2[2];
      *(char *)(plVar1 + 3) = (char)param_2[3];
      plVar1[2] = lVar7;
      plVar10 = plVar1 + 4;
      lVar7 = (long)plVar1 + (*param_3 - param_3[1]);
      func_0x00010a436894(*param_3,param_3[1],lVar7);
      lStack_58 = *param_3;
      *param_3 = lVar7;
      param_3[1] = (long)plVar10;
      lStack_40 = param_3[2];
      param_3[2] = uVar9 + (long)plVar6 * 0x20;
      lStack_50 = lStack_58;
      lStack_48 = lStack_58;
      func_0x00010a4368f8(&lStack_58);
    }
    param_3[1] = (long)plVar10;
    return;
  }
  return;
}



/* Entry: 10a419ba0; end: 10a419cd3;  */

void FUN_10a419ba0(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar10 = (long *)param_2[1];
  if (plVar10 < (long *)param_2[2]) {
    lVar7 = param_3[1];
    lVar5 = *param_3;
    plVar10[1] = param_3[1];
    *plVar10 = lVar5;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar7 = param_3[2];
    *(char *)(plVar10 + 3) = (char)param_3[3];
    plVar10[2] = lVar7;
    plVar10 = plVar10 + 4;
  }
  else {
    lVar7 = (long)plVar10 - *param_2;
    uVar2 = (lVar7 >> 5) + 1;
    if (uVar2 >> 0x3b != 0) {
      FUN_10a43684c();
      lVar7 = *param_3;
      lVar5 = param_3[1];
      while (lVar5 != lVar7) {
        lVar5 = lVar5 + -0x20;
        FUN_10a0e3264();
      }
      param_3[1] = lVar7;
      FUN_10a419d5c(param_3,param_2[1] - *param_2 >> 5);
      lVar5 = param_2[1];
      for (lVar7 = *param_2; lVar7 != lVar5; lVar7 = lVar7 + 0x20) {
        FUN_10a419b30(param_1,lVar7,param_3);
      }
      return;
    }
    uVar8 = param_2[2] - *param_2;
    uVar9 = (long)uVar8 >> 4;
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffdf < uVar8) {
      uVar9 = 0x7ffffffffffffff;
    }
    plVar6 = param_3;
    plStack_38 = param_2;
    FUN_10a436860();
    plVar1 = (long *)(uVar9 + lVar7);
    lVar7 = param_3[1];
    lVar5 = *param_3;
    plVar1[1] = param_3[1];
    *plVar1 = lVar5;
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar7 = param_3[2];
    *(char *)(plVar1 + 3) = (char)param_3[3];
    plVar1[2] = lVar7;
    plVar10 = plVar1 + 4;
    lVar7 = (long)plVar1 + (*param_2 - param_2[1]);
    func_0x00010a436894(*param_2,param_2[1],lVar7);
    lStack_58 = *param_2;
    *param_2 = lVar7;
    param_2[1] = (long)plVar10;
    lStack_40 = param_2[2];
    param_2[2] = uVar9 + (long)plVar6 * 0x20;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a4368f8(&lStack_58);
  }
  param_2[1] = (long)plVar10;
  return;
}


